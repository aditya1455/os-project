#include<stdio.h>
#include<conio.h>
struct resources
{
	bool xerox;
	bool book;
	bool mobile;
	bool ink;
};
int main()
{
	struct resources madam[10];
	ff[0].mobile=true;		
	madam[0].book = false;
	madam[0].xerox = false;
	madam[1].mobile=false;		
	madam[1].book = true;
	madam[1].xerox = false;
	madam[2].mobile=false;		
	madam[2].book = false;
	madam[2].xerox = true;
	while(madam[0].ink==false || madam[1].ink==false || madam[2].ink==false)
	{
		int display1,display2;
		printf("Enter any two ink that you want to keep on the shared table");
		printf("\n Menu \n 1.mobile \n 2.book \n 3.xerox ");
		scanf("%d%d",&display1,&display2);
		if(display1==1 && display2==2 && madam[2].ink==false)
		{
			madam[2].ink=true;
			printf("\n Third Student had completed his task");
		}
		if(display1==2 && display2==1 && madam[1].ink==false)
		{
			madam[1].ink=true;
			printf("\n Second student had completed his task");
		}
		if(display1==3 && display2==2 && madam[0].ink==false)
		{
			madam[0].ink=true;
			printf("\n First Student had completed his task");
		}
	}
	printf("\n Successfully all students completed their task's");
	return 0;
}
