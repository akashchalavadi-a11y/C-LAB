#include <stdio.h>
int main()
{
 int a[10][10], b[10][10], c[10][10];
 int r1, c1, r2, c2, ch, i, j, k;
 printf("Enter rows and columns of matrix A: ");
 scanf("%d%d", &r1, &c1);
 printf("Enter rows and columns of matrix B: ");
 scanf("%d%d", &r2, &c2);
 if (r1 < 1 || r1 > 10 || c1 < 1 || c1 > 10 ||
 r2 < 1 || r2 > 10 || c2 < 1 || c2 > 10)
 {
 printf("Invalid dimensions\n");
 return 0;
 }
 printf("Enter matrix A:\n");
 for (i = 0; i < r1; i++)
 for (j = 0; j < c1; j++)
 scanf("%d", &a[i][j]);
 printf("Enter matrix B:\n");
 for (i = 0; i < r2; i++)
 for (j = 0; j < c2; j++)
 scanf("%d", &b[i][j]);
 printf("1.Add 2.Subtract 3.Transpose 4.Multiply\n");
 printf("Enter choice: ");
 scanf("%d", &ch);
 if (ch == 1 || ch == 2)
 {
 if (r1 != r2 || c1 != c2)
 {
 printf("Invalid dimensions\n");
 return 0;
}
 for (i = 0; i < r1; i++)
 for (j = 0; j < c1; j++)
 c[i][j] = (ch == 1)
 ? a[i][j] + b[i][j]
 : a[i][j] - b[i][j];
 }
 else if (ch == 3)
 {
 printf("Transpose of A:\n");
 for (j = 0; j < c1; j++)
 {
 for (i = 0; i < r1; i++)
 printf("%d ", a[i][j]);
 printf("\n");
 }
 return 0;
 }
 else if (ch == 4)
 {
 if (c1 != r2)
 {
 printf("Invalid dimensions\n");
 return 0;
 }
 for (i = 0; i < r1; i++)
 {
 for (j = 0; j < c2; j++)
 {
 c[i][j] = 0;
 for (k = 0; k < c1; k++)
 c[i][j] += a[i][k] * b[k][j];
 }
 }
 }
 else
 {
     printf("Invalid choice\n");
 return 0;
 }
 printf("Result:\n");
 for (i = 0; i < r1; i++)
 {
 for (j = 0; j < c2; j++)
 printf("%d ", c[i][j]);
 printf("\n");
 }
 return 0;
}
