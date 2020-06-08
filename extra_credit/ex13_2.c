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

            if(letter == 'a' || letter == 'A')
            {
                printf("%d: 'A' is a vowel\n", j);
            }
            else if(letter == 'e' || letter == 'E')
            {
                printf("%d: 'E' is a vowel\n", j);
            }

            else if(letter == 'i' || letter == 'I')
            {
                printf("%d: 'I' is a vowel\n", j);
            }

            else if(letter == 'o' || letter == 'O')
            {
                printf("%d: 'O' is a vowel\n", j);
            }
            else if(letter == 'U' || letter == 'u')
            {
                printf("%d: 'E' is a vowel\n", j);
            }
            else if(letter == 'y' || letter == 'Y')
            {
                if(j>2)
                {
                    printf("%d: 'Y' is a vowel\n", j);
                }
                else
                {
                    printf("%d: 'Y' is not a vowel\n", j);
                }
            }
            else
            {
                printf("%d: \'%c\' is not a vowel\n", j, letter);
            }
        }

        printf("\n-------------------------------------\n\n");
    }
    return 0;
}
