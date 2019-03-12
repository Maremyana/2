#include <stdlib.h>
#include <stdio.h>
#include <iostream>

int main()
{
	const int N = 30;
	int a[N] = { 0 };
//:)
	for (int i = 2; i < N; i++) {
		printf("%3d", i);}
	printf("\n");
	for (int i = 2; i*i < N; i++) {
		if (a[i] == 0) {
			for (int j = i * i; j < N; j += i) {
				(a[j] = 1);}
		}
	}
		
	for (int i = 2; i < N; i++) {
		printf("%3d", a[i]);}
	printf("\n");
	printf("Prostie chisla:");
	for (int i = 2; i < N; i++) {
		if (a[i] == 0)
			printf(" %d ", i);}
	system("pause");
	return 0;
}
