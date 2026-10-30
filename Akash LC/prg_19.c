#include <stdio.h>
#include <stdlib.h>
int main()
{
 int *p, n, i, sum = 0;
 int large, small;
 float avg;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 if (n <= 0)
 return 0;
 p = (int *)malloc(n * sizeof(int));
 if (p == NULL)
 {
 printf("Memory allocation failed\n");
 return 1;
 }
 printf("Enter elements:\n");
 for (i = 0; i < n; i++)
 {
 scanf("%d", p + i);
 sum += *(p + i);
 }
 large = small = *p;
 for (i = 1; i < n; i++)
 {
 if (*(p + i) > large)
 large = *(p + i);
 if (*(p + i) < small)
 small = *(p + i);
 }
 avg = (float)sum / n;
 printf("Sum = %d\n", sum);
 printf("Average = %.2f\n", avg);
 printf("Largest = %d\n", large);
 printf("Smallest = %d\n", small);
 free(p);
 return 0;
}
