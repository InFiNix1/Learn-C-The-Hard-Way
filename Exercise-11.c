#include<stdio.h>

int main(int argc, char* argv[])
{
    // go through each string in argv[]
    int i=argc-1;
    while(i>=0)
    {
        if(argc==1)
        {
            printf("You Dont have Any Aruments\n");
        }
        else if(argc>1 && argc<4) 
        {

            printf("argc %d: %s\n", i, argv[i]);
            i--;
        }
        else
        {
            printf("You have TOO MANY Arguments\n");
            break;
        }
    }

    // lets make our own strings 

    char* states[]={"Assam", "West Bengal", "Maharashtra", "Karnataka"};

    int num_states=4;
    i=num_states-1; //watch for this
    while(i>=0)
    {
        printf("states %d: %s\n", i, states[i]);
        i--;
    }

    printf("\n\n------------------------------\n\n");
    i=0;
    while(i<num_states && i<argc)
    {
        states[i]=argv[i];
        printf("Changed STATES %d: %s\n", i, states[i]);
        i++;
    }



    return 0;
}
