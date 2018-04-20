#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
 
void fork() 	
{
    int y = 1;
     
    if (fork() == 0)
        printf("Child has y = %d\n", ++y);
        printf("Non-interactive process ")
    else
        printf("Parent has y = %d\n", --y);
        printf("Interactive Process")
}
int main()
{
    fork();
    return 0;
}
