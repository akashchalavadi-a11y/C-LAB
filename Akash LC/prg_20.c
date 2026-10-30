#include <stdio.h>
struct Student
{
 int regno;
 char name[30];
 int m1, m2, m3, total;
 float percentage;
 char result[10];
};
int main()
{
 struct Student s[100], t;
 int n = 0, ch, i, key;
 FILE *fp;
 do
 {
 printf("\n1.Add 2.Display 3.Search\n");
 printf("4.Write File 5.Read File 6.Exit\n");
 printf("Enter choice: ");
 scanf("%d", &ch);
 switch (ch)
 {
 case 1:
 if (n >= 100)
 {
 printf("Record limit reached\n");
 break;
 }
 printf("Enter register number and name: ");
 scanf("%d%29s", &s[n].regno, s[n].name);
 printf("Enter three subject marks: ");
 scanf("%d%d%d", &s[n].m1, &s[n].m2, &s[n].m3);
 s[n].total = s[n].m1 + s[n].m2 + s[n].m3;
 s[n].percentage = s[n].total / 3.0;
 if (s[n].m1 < 35 || s[n].m2 < 35 ||
 s[n].m3 < 35)
 sprintf(s[n].result, "Fail");
 else
 sprintf(s[n].result, "Pass");
 n++;
 printf("Record added\n");
 break;
 case 2:
 for (i = 0; i < n; i++)
 {
 printf("%d %s Total=%d Percentage=%.2f Result=%s\n",
 s[i].regno, s[i].name, s[i].total,
 s[i].percentage, s[i].result);
 }
 break;
 case 3:
 printf("Enter register number: ");
 scanf("%d", &key);
 for (i = 0; i < n; i++)
 {
 if (s[i].regno == key)
 {
 printf("%d %s Total=%d Result=%s\n",
 s[i].regno, s[i].name,
 s[i].total, s[i].result);
 break;
 }
 }
 if (i == n)
 printf("Record not found\n");
 break;
 case 4:
 fp = fopen("students.txt", "w");
 if (fp == NULL)
 {
 printf("File cannot be opened\n");
 break;
 }
 for (i = 0; i < n; i++)
 fprintf(fp, "%d %s %d %d %d\n",
 s[i].regno, s[i].name,
 s[i].m1, s[i].m2, s[i].m3);
 fclose(fp);
 printf("Records written to file\n");
 break;
 case 5:
 fp = fopen("students.txt", "r");
 if (fp == NULL)
 {
 printf("File not found\n");
 break;
 }
 n = 0;
 while (n < 100 &&
 fscanf(fp, "%d%29s%d%d%d",
 &t.regno, t.name,
 &t.m1, &t.m2, &t.m3) == 5)
 {
 s[n] = t;
 s[n].total = t.m1 + t.m2 + t.m3;
 s[n].percentage = s[n].total / 3.0;
 if (t.m1 < 35 || t.m2 < 35 || t.m3 < 35)
 sprintf(s[n].result, "Fail");
 else
 sprintf(s[n].result, "Pass");
 n++;
 }
 fclose(fp);
 printf("Records read from file: %d\n", n);
 break;
 case 6:
 printf("Exiting program\n");
 break;
 default:
 printf("Invalid choice\n");
 }
 } while (ch != 6);
 return 0;
}
