#include<stdio.h>
#include"labFunctions.h"


int main() {
	char slovo[1000];
	char string[1000];
	printf("Enter a word: ");
	fgets(slovo, 1000, stdin);
	printf("enter string: ");
	fgets(string, 1000, stdin);
	charcount(slovo,string);
	return 0;
}