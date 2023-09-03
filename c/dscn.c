#include<stdio.h>
int main()
{
	int a[3][3],i,j,n, f = 0, p, q;
	printf("enter the element for A matrix\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (a[i][j]==n){
				f = 1;
				p = i; q=j;
				break;
			}
			
		}
	}
	for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
	printf("enter the key value to find\n");
	scanf("%d",&n);
	if(f == 1)
        printf("Element found at row =%d column = %d",i,j);
    else
        printf("Element not found");
        
        
        for(j = 0 ; j < 3 ; j++){
        	a[p][j]  = 0;
		}
		
		for(i = 0 ; i < 3 ; i++){
        	a[i][q]  = 0;
		}
		
		printf("the matrix will be\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}
  
    return 0;
}
