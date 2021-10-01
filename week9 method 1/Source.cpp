#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



int main() {
	char x[1000];

	printf("Input 1 sentence : ");
	fgets(x, 1000, stdin);
	int count[5] = {0,0,0,0,0};
	int i=0;
	while (x[i] != NULL) {
		if (x[i] == 'a' || x[i] == 'A') {
			count[0] += 1;
			i++;
		}
		else if (x[i] == 'e' || x[i] =='E') {
			count[1] += 1;
			i++;
		}
		else if (x[i] == 'i' || x[i] == 'I') {
			count[2] += 1;
			i++;
		}
		else if (x[i] == 'o' || x[i] == 'O') {
			count[3] += 1;
			i++;
		}
		else if (x[i] == 'u' || x[i] == 'U') {
			count[4] += 1;
			i++;
		}
		else { i++; }
	}
	printf("Vowels list \n");
	printf(" a or A : %d \n", count[0]);
	printf(" e or E : %d \n", count[1]);
	printf(" i or I : %d \n", count[2]);
	printf(" o or O : %d \n", count[3]);
	printf(" u or U : %d \n", count[4]);
	return 0;
}