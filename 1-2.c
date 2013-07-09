#include <stdio.h>
#include <assert.h>

/***********************************
 * Print Farenheit - Celcius table *
 * for fahr = 0, 20, ..., 300      *
 ***********************************/
// Data Definitions

// Fahrenheit is Natural
// interp as the temp in degreees fahrenheit
typedef double Fahrenheit;
const Fahrenheit F1 = -32;
const Fahrenheit F2 = 0;
const Fahrenheit F3 = 100.5;
const Fahrenheit BEGIN = 0;	// The amount at the beginning of the list
const Fahrenheit END   = 300; // The amount at the end of the list
const Fahrenheit STEP  = 20;  // The step for each output of the list

/*
<Type> fn-for-fahrenheit(Fahrenheit f) {
	<Type> t;
	t = ... f;
	return t;
}
*/

// Template rules used:
// 	- atomic non-distinct: Natural

// Celcius is Natural
// interp as the temp in degreees celcius
typedef double Celcius;
const Celcius C1 = -32;
const Celcius C2 = 0;
const Celcius C3 = 100.5;

/*
<Type> fn-for-celcius(Celcius c) {
	<Type> t;
	t = ... c;
	return t;
}
*/

// Template rules used:
// 	- atomic non-distinct: Natural

//======================================
// Function Definitions

// Fahrenheit -> Celcius
// take a temperature in Fahrenheit and convert it to Celcius
Celcius fahrenheit_to_celcius(Fahrenheit f) {
	Celcius c;
	c = ( (double)f - 32.0 ) * ( 5.0 / 9.0 );
	return c;
}

// Celcius -> Fahrenheit
// take a temperature in Celcius and convert it to Fahrenheit
Fahrenheit celcius_to_fahrenheit(Celcius c) {
	Fahrenheit f;
	f = ( (double)c / ( 5.0 / 9.0 )) + 32;
	return f;
}

int main() {

	assert((fahrenheit_to_celcius(F2) < -17.0) && (fahrenheit_to_celcius(F2) > -18.0));
	assert(fahrenheit_to_celcius(F3) == ((100.5 - 32.0 ) * ( 5.0 / 9.0 )) );

	printf("%5.1f %6.1f\n", F1, fahrenheit_to_celcius(F1));
	printf("%5.1f %6.1f\n", F2, fahrenheit_to_celcius(F2));

	assert((celcius_to_fahrenheit(C1) < -25.0) && (celcius_to_fahrenheit(C1) > -26.0));
	assert(celcius_to_fahrenheit(C2) == (0 / ( 5.0 / 9.0 )) + 32);

	printf("%5.1f %6.1f\n", C1, celcius_to_fahrenheit(C1));
	printf("%5.1f %6.1f\n", C2, celcius_to_fahrenheit(C2));

	return 0;
}

