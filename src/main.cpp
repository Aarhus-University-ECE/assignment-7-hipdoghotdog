
// Add your test cases for Exercise 1b,c) here
#include <stdlib.h>
#include <stdio.h>
#include "taylor_sine.c"
#include <math.h>

int main()
{
    double x = 3.1415;
    int n = 7;
    printf("math sin is %lf", sin(x));
    printf(" taylor_sin is %lf", taylor_sine(x, n));
    return 0;
}
// The taylor_sine function gives simmiliar results between sin(-6) and sin(6) beyond that the results start to significantly differ