#include<stdio.h>
#include<stdlib.h>
#include"labFunctions.h"


int main() {
	char slovo[1000] = { 0 };
	char string[1000] = { 0 };
	printf("Enter a word: ");
	fgets(slovo, 1000, stdin);
	int wordsize = findsize(slovo);
	printf("enter string: ");
	fgets(string, 1000, stdin);
	int stringsize = findsize(string);
	char uniquechars[1000];
	int uniquecharsize = uniqueChars(wordsize, slovo, uniquechars);
	int charcount[1000] = { 0 };
	char substring[1000];
	int substringsize = 0;
	char temp[1000] = { 0 };
	int co = 0;
	int* subcharcount=(int*)malloc(uniquecharsize*sizeof(int));
	for (int i = 0; i < uniquecharsize; i++) {
		subcharcount[i] = 0;
	}
	for (int i = 0; i < stringsize; i++) {
		if (string[i] != ' ') {
			temp[co] = string[i];
			co++;
		}
		if ((string[i + 1] == ' ' )|| (string[i + 1] == '\n')) {
			for (int j = 0; j < co; j++) {
				if (charequal(temp[j], uniquecharsize, uniquechars) != -1) {
					subcharcount[charequal(temp[j], uniquecharsize, uniquechars)] += 1;
				}
			}
			if (temp[0] != 0) {
				printf("requested chars in word'");
				for (int j = 0; j < co; j++) {
					printf("%c", temp[j]);
				}
				printf("':\n");
				for (int j = 0; j < uniquecharsize; j++) {
					if (subcharcount[j] != 0) {
						printf("%c: %d\n", uniquechars[j], subcharcount[j]);
					}
				}
			}
			co = 0;
			for (int j = 0; j < uniquecharsize; j++) {
				subcharcount[j] = 0;
				
			}
			for (int j = 0; j < co; j++) {
				temp[j] = 0;
			}
		}
	}
	for (int i = 0; i < stringsize; i++) {
		if (charequal(string[i], uniquecharsize, uniquechars) != -1) {
			charcount[charequal(string[i], uniquecharsize, uniquechars)] += 1;
		}
	}
	printf("requested chars in string:\n");
	for (int i = 0; i < uniquecharsize; i++) {
		printf("%c: %d\n", uniquechars[i], charcount[i]);
	}
	return 0;
}