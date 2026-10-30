#include <stdio.h>
int main()
{
 int m[5], i, total = 0, fail = 0;
 float per;
 printf("Enter marks in five subjects:\n");
 for (i = 0; i < 5; i++)
 {
 scanf("%d", &m[i]);
 total += m[i];
 if (m[i] < 35)
 fail = 1;
 }
 per = total / 5.0;
 printf("Total = %d\n", total);
 printf("Percentage = %.2f\n", per);
 if (fail)
 printf("Result = Fail\n");
 else if (per >= 75)
 printf("Result = Distinction\n");
 else if (per >= 60)
 printf("Result = First Class\n");
 else if (per >= 50)
 printf("Result = Second Class\n");
 else
 printf("Result = Pass Class\n");
 return 0;
}
