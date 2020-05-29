#include<stdio.h>

int main(int argc, char* argv[])
{
    int distance=4343;
    float power=2.345f;
    double super_power=12412.242312;
    char initial='S';
    char first_name[]="Sauronil";
    char last_name[]="Das";
    char str[]="";
    char c='I';

    printf("You are %o Kilometers away\n", distance);
    printf("You have %.4f power\n", power);
    printf("You have %f super power\n", super_power);
    printf("Initial is %c.\n", initial);
    printf("Your First Name is %s\n", first_name);
    printf("Your Last Name is %s\n", last_name);
    printf("Your Full name is %s %c. %s\n", first_name,  initial, last_name);
    printf("This should be an empty string --->> %s\n", str);
    printf("This should be an empty character ---> %c\n", c);
    printf("Lets See what this does %%\n");
    
    return 0;
}
