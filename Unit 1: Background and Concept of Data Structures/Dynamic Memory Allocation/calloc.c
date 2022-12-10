// Writing program to calculate sum and average using DMA (calloc).

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    float average = 0, sum = 0;
    float *a; // pointer to float
    printf("How many elements you want to include?\n");
    scanf("%d", &n);
    a = (float *)calloc(n, sizeof(float)); // allocate memory using calloc
    for (i = 0; i < n; i++)
    {
        printf("\nEnter value for element %d: \n", (i + 1));
        scanf("%f", (a + i));
        sum = sum + *(a + i);
    }
    average = sum / n;
    printf("The sum of the all numbers that you entered is: %f \n", sum);
    printf("The average of the all numbers that you entered is: %f \n", average);
    free(a); // free the memory
    return 0;
}