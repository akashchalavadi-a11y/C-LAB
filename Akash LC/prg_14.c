#include <stdio.h>
int main()
{
 int a[100], n, key, i, count = 0;
 printf("Enter number of elements: ");
 scanf("%d", &n);
 for (i = 0; i < n; i++)
 scanf("%d", &a[i]);
 printf("Enter element to search: ");
 scanf("%d", &key);
 for (i = 0; i < n; i++)
 {
 if (a[i] == key)
 {
 printf("Position = %d\n", i + 1);
 count++;
 }
 }
 if (count == 0)
 printf("Element not found\n");
 else
 printf("Frequency = %d\n", count);
 return 0;
}
