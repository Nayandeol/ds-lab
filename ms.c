#include<stdio.h>
int main()
{
int n1,n2,k,i,j;
int a[100],b[100],c[200];
printf("enter the size of the first array");
scanf("%d",&n1);
printf("enter the array element: ");
for(int i=0;i<n1;i++)
{
scanf("%d",&a[i]);
}
printf("enter the size of the second array: ");
scanf("%d",&n2);
printf("enter the array element: ");
for(int i=0;i<n2;i++)
{
scanf("%d",&b[i]);
}
i=j=k=0;
while(i<n1&&j<n2)
{
if(a[i]>=b[j])
{
c[k]=b[j];
k++;
j++;
}
else
{
c[k]=a[i];
i++;
k++;
}
}
while(i<n1)
{
c[k]=a[i];
k++;
i++;
}
while(j<n2)
{
c[k]=b[j];
k++;
j++;
}
printf("merged array is: ");
for(int i=0;i<k;i++)
{
printf("%d",c[i]);
}
}

