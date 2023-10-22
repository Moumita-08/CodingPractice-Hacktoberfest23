#include<stdio.h>
void main()
{
	int n,i,arr[30],s,index;
	printf("Enter the range of array ");
	scanf("%d",&n);
	printf("Enter the elements ");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("Array is\n[");
	for(i=0;i<n;i++)
		printf("%d",arr[i]);
	printf("]");
	printf("\n");
	printf("Enter the search element ");
	scanf("%d",&s);
	for(i=0;i<n;i++)
	{
		if(arr[i]==s)
		{
			index=i;
			break;
		}
	}
	if(i<n)
		printf("Present\n%d",index);
	else
		printf("Sorry,item not found");
}
