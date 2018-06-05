#include<stdio.h>
int a[10000],n,size=1,i,j,t,carry,s;
main()
{
	a[0]=1;
	printf("enter n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact(i);
	for(i=size-1;i>=0;i--)
	printf("%d",a[i]);
	
}
fact(int n)
{
	carry=0;
	for(j=0;j<size;j++)
	{
		t=a[j]*n+carry;
		a[j]=t%10;
		carry=t/10;
		//printf("%d\t",a[j]);
	}
	while(carry!=0)
	{
		size++;
		s=carry%10;
		carry=carry/10;
		a[size-1]=s;
	}
}
