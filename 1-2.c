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
Fahrenheit F1 = -32;
Fahrenheit F2 = 0;
Fahrenheit F3 = 100.5;
/*
<Type> fn-for-fahrenheit(Fahrenheit f) {
	<Type> t;
	t = ... f;
	return <Type>;
}
*/

// Template rules used:
// 	- atomic non-distinct: Natural

// Fahrenheit is Natural
// interp as the temp in degreees fahrenheit
typedef double Celcius;
Fahrenheit C1 = -32;
Fahrenheit C2 = 0;
Fahrenheit C3 = 100.5;
/*
<Type> fn-for-celcius(Celcius c) {
	<Type> t;
	t = ... c;
	return <Type>;
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

int main() {

	printf("%f\t%f\n");
	printf("%f\t%f\n");

	return 0;
}

