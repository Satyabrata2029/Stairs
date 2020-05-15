#include<stdio.h>
int main()
{
	int i, j, n;
	printf("Enter number of stairs:");
	scanf("%d", &n);
	for(i=0;i<n;++i)//For outer loop//
	{
		for(j=0;j<=i;++j)//For inner loop of printing 01//
		{
			printf("01");
		}
		printf("\n");//For changing the cursor position to next line//
	}
	return 0;
}
