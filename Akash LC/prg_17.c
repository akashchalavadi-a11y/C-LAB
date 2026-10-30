#include <stdio.h>
int main()
{
 char a[100], b[100], copy[100], rev[100];
 char concat[200];
 int i, j, len = 0, len2 = 0, cmp = 0, pal = 1;
 printf("Enter first string: ");
 scanf("%99s", a);
 printf("Enter second string: ");
 scanf("%99s", b);
 while (a[len] != '\0')
 len++;
 while (b[len2] != '\0')
 len2++;
 for (i = 0; i < len; i++)
 {
 copy[i] = a[i];
 rev[i] = a[len - 1 - i];
 }
 copy[len] = '\0';
 rev[len] = '\0';
 for (i = 0; i < len; i++)
 {
 if (a[i] != rev[i])
 pal = 0;
 }
 for (i = 0; i < len; i++)
 concat[i] = a[i];
 for (j = 0; j < len2; j++)
 concat[i++] = b[j];
 concat[i] = '\0';
 i = 0;
 while (a[i] != '\0' && b[i] != '\0')
 {
 if (a[i] != b[i])
 {
 cmp = a[i] - b[i];
 break;
 }
 i++;
 }
 if (cmp == 0)
 cmp = a[i] - b[i];
 printf("Length of first string = %d\n", len);
 printf("Length of second string = %d\n", len2);
 printf("Copied string = %s\n", copy);
 printf("Concatenated string = %s\n", concat);
 printf("Comparison = %d\n", cmp);
 printf("Reversed string = %s\n", rev);
 if (pal)
 printf("First string is palindrome\n");
 else
 printf("First string is not palindrome\n");
 return 0;
}
