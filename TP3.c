#include <stdio.h>
#include <math.h>

typedef struct 
{ 
    double re ;
	double im ;

}   
complex_t ;

// Question 2
double complex_real (complex_t x) 
{
	return x.re ;
}


double complex_im ( complex_t x ) 
{
	return x.im ;
}

// Question 3
complex_t complex_add ( complex_t x, complex_t y ) 
{
	complex_t t ;
	t.re = x.re + y.re ;
	t.im = x.im + y.im ;
	return t ; 
}

complex_t complex_sub ( complex_t x, complex_t y ) 
{
	complex_t t ;
	t.re = x.re - y.re ;
	t.im = x.im - y.im ;
	return t ; 
}

// Question 4
complex_t complex_mul ( complex_t x, complex_t y ) 
{
	complex_t t ;
	t.re = x.re * y.re - x.im * y.im ;
	t.im = x.re * y.im + x.re * y.re ;
	return t ; 
}

// Question 5
double complex_abs ( complex_t x ) 
{
	return sqrt( pow(x.re, 2.0 ) + pow(x.im, 2.0)) ; 
}

//Question 6
complex_t complex_conj ( complex_t x ) {

	complex_t t ;
	t.re = x.re  ;
	t.im = -x.im ;
	return t ; 
}	
// Partie 2

int main() 
{
	complex_t x ;
	complex_t y ;
	complex_t r ;

	x.re = 2 ;
	x.im = 3 ;
	y.re = 4 ;
	y.im = 5 ;

	r = complex_mul( x,y ) ;

	printf("%lf %lf \n", r.re, r.im );
	return 0 ;
}
