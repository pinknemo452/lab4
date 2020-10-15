#include"labFunctions.h"
int findsize(char* array) {
	int stringsize = 0;
	while ((*(array + stringsize) != '\n') || (*(array + stringsize) != 10)) {
		stringsize++;
	}
	return stringsize;
}
int uniqueChars(int slovoLength, char* slovo,char* uniquechars) {
	for (int i = 0; i < 1000; i++) {
		*(uniquechars+i) = 0;
	}
	int unique = 0, count = 0;
	for (int i = 0; i <= slovoLength; i++) {
		for (int j = slovoLength-1; j > i; j--) {
			if (*(slovo + i) == *(slovo + j)) {
				count = 1;
			}
		}
		if (count != 1) {
			*(uniquechars+unique) = *(slovo + i);
			
			unique++;
		}
		count = 0;
	}
	unique--;
	return unique;
}
int charequal(char a, int uniquecharsize, char* uniquechar) {
	for (int i = 0; i < uniquecharsize; i++) {
		if (a == *(uniquechar + i)) {
			return i;
		}
	}
	return -1;
}