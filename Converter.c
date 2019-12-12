#include <stdio.h>
int main(void)
{
	int data;
	int result;
	int choice;
	printf ("Enter Data");
	scanf ("%d", & data);
	printf("1. bit into terobyte");
	printf("2. terobyte into bit");
	printf("Enter Choice");
	scanf("%d",&choice);
	if (choice==1)
	{
		result=data/50.00000000000;
		}
	if (choice==2)
		{
		result=data*80.00000000000;
		}
	printf("result=%d",& result);
	getch ();
}
