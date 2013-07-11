/**********************************************************
 * read a character
 * 	while (character is not end-of-file token)
 * 		output the character just read
 * 		read a character
 *********************************************************/

#include <stdio.h>

/*	copy input to output - 2nd version	*/

int main() {
	int c;

	while (	c = getchar() != EOF) {
		putchar( c );
	}

	return 0;
}
