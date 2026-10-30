#include <stdio.h>
int main()
{
 int a[100], n, i, sum = 0;
 int large, small, even = 0, odd = 0;
 float mean;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 if (n < 1 || n > 100)
 return 0;
 for (i = 0; i < n; i++)
 {
 scanf("%d", &a[i]);
 sum += a[i];
 if (i == 0)
 large = small = a[i];
 if (a[i] > large)
 large = a[i];
 if (a[i] < small)
 small = a[i];
 if (a[i] % 2 == 0)
 even++;
 else
 odd++;
 }
 mean = (float)sum / n;
 printf("Sum = %d\n", sum);
 printf("Mean = %.2f\n", mean);
 printf("Largest = %d\n", large);
 printf("Smallest = %d\n", small);
 printf("Even elements = %d\n", even);
 printf("Odd elements = %d\n", odd);
 return 0;
}
