/**********************************************************
 * read a character
 * 	while (character is not end-of-file token)
 * 		output the character just read
 * 		read a character
 *********************************************************/

#include <stdio.h>

/*	count characters in input, third version	*/


// ISTREAM(Char) -> Number		
// Take some input and give the number of characters
double countNumber() {
	double nc;
	for ( nc = 0; getchar() != EOF; ++nc)
		;

	return nc;
}

int main() {

	double nc = countNumber();
	printf("\nNumber of chars in the input stream: %.0f\n", nc);

	return 0;
}
