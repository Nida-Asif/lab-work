//this program is prepared by SP23-BCS-132 on 28-03-2023.this explain about determining max and min no
#include<stdio.h>
int main()
{
int no,max,min;
int i;
printf("enter 5 numbers\n");
scanf("%d",&no);
max=min=no;
for (i=1 ;i<=4 ;i++)
{
scanf("%d",&no);
if (no>max)
max=no;
if(no<min)
min=no;}
printf("max num=%d\n",max);
printf("min num=%d\n",min);
return 0;
}
