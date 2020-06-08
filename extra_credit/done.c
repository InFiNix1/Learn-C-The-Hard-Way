#include<stdio.h>

int main(int argc, char* argv[])
{
    if(argc==1)
    {
        printf("ERROR: You Need One Argument\n");
        //this is how to abort a program
        return 1;
    }

    int i=1;
    int j=0;

    for(i=1; i<argc; i++)
    {
        for(j=0; argv[i][j]!='\0'; j++)
        {
            char letter = argv[i][j];
            if(letter>=97 && letter<=122)
            {
                letter=letter-32;
            }

            switch(letter)
            {
                case 'A': 
                    printf("%d: 'A'\n", j);
                    break;

                case 'E': 
                    printf("%d: 'E'\n", j);
                    break;

                case 'I': 
                    printf("%d: 'I'\n", j);
                    break;

                case 'O': 
                    printf("%d: 'O'\n", j);
                    break;

                case 'U': 
                    printf("%d: 'U'\n", j);
                    break;
                    //I re-iterate, Zed - Shaw here wanted to teach us about fall-through
                    //and why break is important and how to implement fallthrough.
                case 'Y':
                    if(j>2)
                    {
                        printf("%d: 'Y'\n", j);
                        break;
                    }
                    //break;

                default: 
                    printf("%d: %c is not a vowel\n", j, letter);
            }

        }
        printf("\n-------------------------------------\n\n");
    }
    return 0;
}
