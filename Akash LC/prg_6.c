#include <stdio.h>
int main()
{
 int a, b, ch;
 printf("1.Addition 2.Subtraction\n");
 printf("3.Multiplication 4.Division\n");
 printf("5.Remainder\n");
 printf("Enter choice: ");
 scanf("%d", &ch);
 printf("Enter two integers: ");
 scanf("%d%d", &a, &b);
 switch (ch)
 {
 case 1: printf("Result = %d\n", a + b); break;
 case 2: printf("Result = %d\n", a - b); break;
 case 3: printf("Result = %d\n", a * b); break;
 case 4:
 if (b != 0)
 printf("Result = %d\n", a / b);
 else
 printf("Division not possible\n");
 break;
 case 5:
 if (b != 0)
 printf("Result = %d\n", a % b);
 else
 printf("Remainder not possible\n");
 break;
 default: printf("Invalid choice\n");
 }
 return 0;
}
