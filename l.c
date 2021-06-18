#include <stdio.h>

int main() 
{
    int a[10], o[10], e[10];
    int i, j = 0, k = 0, n;
 
    printf("Enter the size of array:");
    scanf("%d", &n);
 
    printf("Enter the elements of the array:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
 
 
    for(i=0; i<n; i++)
    {
        if (a[i]%2==0)
        {
            e[j] = a[i];
            j++;
        }
        else
        {
            o[k] = a[i];
            k++;
        }
    }
 
    printf("The array of even elements is: \n");
    for (i = 0; i <j; i++)
    {
        printf("%d ", e[i]);
    }
 
    printf("\nThe array of odd elements is: \n");
    for (i = 0; i <k ; i++)
    {
        printf("%d ", o[i]);
    }
 
}