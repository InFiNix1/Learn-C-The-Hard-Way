#include<stdio.h>

int main(int argc, char* argv[])
{
    int i=0;
    int u_argc=argc-1;
    if(u_argc==0)
    {
        printf("You have NO ARGUMENTS\n");
    }
    else if(u_argc==1)
    {
        printf("You only have one argument. YOU SUCK\n");
    }
    else if(argc>0 && argc<4)
    {
        i=1;
        printf("Here are your arguments\n");
        for(; i<argc; i++)
        {
            printf("arg %d: %s\n", i, argv[i]);
        }
    }
    else 
    {
        printf("You Have TOO MANY arguments\n");
    } 
    return 0;
}
