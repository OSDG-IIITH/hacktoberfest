#include<stdio.h>

int main() {
	char word[101];
	int i, j;
	for (i = 0; ;i++) {
		scanf("%c", &word[i]);
		if (word[i] == '\n')
			break;
	}
	for (j = 0; j < i; j++) {
		if (word[j] < 'a') {
			printf(".%c", word[j]);
			word[j] = (word[j] + 32);
			printf(".%c", word[j]);
		}
		if ((word[j] !=  'a') || (word[j] != 'e') || (word[j] != 'i') || (word[j] != 'o') || (word[j] != 'u'))
			printf(".%c", word[j]);
	}
	return 0;
}
