#include<stdio.h>
void main()
{
	int a[100000],i,j,t,n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
		for(i=0;i<n;i++){
				for(j=0;j<n;j++)
				{
					if(a[i]<a[j])
					{
						t=a[i];
						a[i]=a[j];
						a[j]=t;
						
					}
				}
		}
		printf("%d",a[k-1]);
}
