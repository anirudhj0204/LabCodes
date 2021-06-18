#include<stdio.h>


int main() {
  int n, a[50];
  int b[50]={0};


  printf("Enter the size of the array:");
	scanf("%d", &n);
	
	printf("Enter the elements of the array:");
	for(int i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n; i++)
		b[a[i]]++;
	for (int i = 0; i < n; i++) {
		if (b[i] != 0)
			printf("Frequency of %d is %d.\n", i, b[i]);
  }
}
