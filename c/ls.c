#include<stdio.h>
int main()
{
	int a[20],i,x,n;
	printf("enter elements");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the element to search: ");
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
	
		if(a[i]==x)
		{
			break;
		}
	}
	if(i<n)
	
	printf("element found at index %d",i);
	else
	printf("not found");
	return 0;
}
