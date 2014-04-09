#include<stdio.h>
int main()
{
int i,n,k,j=0,a;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{scanf("%d",&a);
if(a%k==0)
j++; }
return 0;
}
