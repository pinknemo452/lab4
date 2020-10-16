#include<stdio.h>
#include"labFunctions.h"


int main() {
	char slovo[1000];
	char string[1000];
	printf("Enter a word: ");
	fgets(slovo, 1000, stdin);
	int wordsize = findsize(slovo);
	printf("enter string: ");
	fgets(string, 1000, stdin);
	int stringsize = findsize(string);
	char uniquechars[1000];
	int uniquecharsize = uniqueChars(wordsize, slovo, uniquechars);
	int charcount[1000];
	for (int i = 0; i < 1000; i++) {
		charcount[i] = 0;
	}
	for (int i = 0; i < stringsize; i++) {
		if (charequal(string[i], uniquecharsize, uniquechars) != -1) {
			charcount[charequal(string[i], uniquecharsize, uniquechars)] += 1;
		}
	}
	for (int i = 0; i < uniquecharsize; i++) {
		printf("%c: %d\n", uniquechars[i], charcount[i]);
	}
	return 0;
}