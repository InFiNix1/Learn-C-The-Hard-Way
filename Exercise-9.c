#include<stdio.h>

int main(int argc, char* argv[])
{
    int numbers[4]={7};
    char name[4]={'a'};

    //first print them out raw
    printf("numbers: %d %d %d %d\n",
                                    numbers[0], numbers[1],
                                    numbers[2], numbers[3]);
    printf("name each %c %c %c %c\n",
                                    name[0], name[1], name[2], name[3]);

    printf("name: %s", name);

    //setup the numbers
    numbers[0]='1';
    numbers[1]='2';
    numbers[2]='3';
    numbers[3]='4';

   //setup the name
    name[0]=9;
    name[1]=10;
    name[2]=11;
    name[3]=12;
    //then print them out after initialized
    
    printf("\n\n\n\nnumbers:  %d %d %d %d\n",
                                    numbers[0], numbers[1],
                                    numbers[2], numbers[3]);

    printf("name each %c%c%c%c%c\n",
                                    name[0], name[1], name[2], name[3], name[4]);

    //print the name like a string
    printf("name: %s\n", name);

    //Another way to use name
    char* another="SAM";

    printf("another: %s\n", another);

    printf("another each : %c%c%c%c\n", another[0], another[1], another[2], another[3]);

    
    return 0;
}
