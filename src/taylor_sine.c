#include "taylor_sine.h"
double taylor_sine(double x, int n)
{
    double sine = x;
    int alt = 0;
    double m = 3;
    
    for (int c = 0; c < n ; c++){
        double term1 = x;
        double term2 = m;
        for (double i = 1; i < m; i++){
            term1 = term1 * x;
            term2 = term2 * i;
        }
         
            double termf = (term1 / term2);
            if (alt < 1){
                sine = sine - termf;
                alt = alt + 1;
            
            }
                else if(alt > 0) {
                    sine = sine + termf;
                    alt = alt - 1;
            
                }
                 m = m + 2;

    }   
        

    
    
     return sine;
}
