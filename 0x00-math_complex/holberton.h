#ifndef COMPLEX_H
#define COMPLEX_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct complex - defines a new struct
 * @real: real part of the complex
 * @imaginary: imaginary part of the complex
 * Description: above
 */

typedef struct complex
{
    double re;
    double im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);
void division(complex c1, complex c2, complex *c3);
void complex_from_mod_arg (double m, double arg, complex *c3);

#endif
