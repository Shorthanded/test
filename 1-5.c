/**********************************************************
 * read a character
 * 	while (character is not end-of-file token)
 * 		output the character just read
 * 		read a character
 *********************************************************/

#include <stdio.h>

/*	count characters in input, first version	*/

int main() {

	long nc = 0;

	while (	getchar() != EOF) {
		nc++;
		printf("%ld\n", nc);
	}

	return 0;
}
