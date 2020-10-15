#include<stdio.h>
#include<conio.h>

void main()
{
int x,y,count;
float z,simp_int;
clrscr();

for(count=1;count<=3;count++)
{
print(“\n\nEnter the value for x, y & z\n\n”);
scanf(“%d%d%f”,&x,&y,&z);

simp_int=x*y*z/100;
printf(“Simple Interest=%f”,simp_in);
}
getch();
}
