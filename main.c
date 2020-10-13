#include<stdio.h>
char* uniqueChars(int slovoLength, char* slovo) {
	char uniquechars[1000];
	for (int i = 0; i < 1000; i++) {
		uniquechars[i] = 0;
	}
	int unique = 0, count = 0;
	for (int i = 0; i <= slovoLength; i++) {
		for (int j = slovoLength-1 ; j > i; j--) {
			if (*(slovo + i) == *(slovo + j)) {
				count = 1;
			}
		}
		if (count != 1) {
			uniquechars[unique] = *(slovo + i);
			unique++;
		}
		count = 0;
	}
	char* pointer = uniquechars;
	return pointer;
}
int charequal(char a,int uniquecharsize,char* uniquechar) {
	for (int i = 0; i < uniquecharsize; i++) {
		if (a == *(uniquechar + i)) {
			return i;
		}
	}
	return -1;
}
void charcount(char* word,char* string) {
	int wordsize = 0;
	while (*(word + wordsize) != '\n') {
		wordsize++;
	}
	//printf("%d ", wordsize);
	int stringsize = 0;
	while (*(string + stringsize) != '\n') {
		stringsize++;
	}
	//printf("%d ", stringsize);
	char* uniquechar = uniqueChars(wordsize, word);
	int uniquecharsize = 0;
	while (*(uniquechar + uniquecharsize)!='\n') {
		uniquecharsize++;
	}
	//printf("%d \n", uniquecharsize);
	int charcount[1000];
	for (int i = 0; i < 1000; i++) {
		charcount[i] = 0;
	}
	for (int i = 0; i < stringsize; i++) {
		if (charequal(*(string+i), uniquecharsize,uniquechar) != -1 ) {
			charcount[charequal(*(string + i), uniquecharsize, uniquechar)] += 1;
		}
	}
	for (int i = 0; i < uniquecharsize; i++) {
		printf("%c: %d\n", *(uniquechar + i), charcount[i]);
	}
}
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