#include<stdio.h>

int main()
{
    int bugs=100;
    double bug_rate=1.2;

    printf("You have %d bugs, at the imaginary rate of %.3f\n", bugs, bug_rate);
    
    long universe_of_defects=1L*1024L*1024L*1024*1024*1024*1024*5;
    printf("The Entire Universe has %ld bugs in it\n", universe_of_defects);

    double expected_bugs= bugs*bug_rate;
    printf("You are expected to have %f bugs\n", expected_bugs);

    double part_of_universe=expected_bugs/universe_of_defects;
    printf("That is only a %e portion of the Universe\n", part_of_universe);

    //this is null or empty space or void
    char null_byte='A';
    char null_again='\0';
    printf("Let us check again %d\n", null_again);

    int care_percent=bugs*null_byte;

    int val=1;
    val=val*null_byte;
    printf("Val should be 65 which represents \'A\' and is --->  %d\n", val);
    printf("That means You shoudl care %d%%\n", care_percent);

    return 0;
}
