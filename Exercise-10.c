#include<stdio.h>

int main(int argc, char* argv[])
{
    int i=0;
     //go through each string in argv
     //why I'm skipping argv[0]
     //lets make our own array of strings
     char *cities[]={"Kolkata", "Delhi", "Mumbai", "Bangalore"};

     int num_cities=4;

     cities[1]=argv[1];
     argv[2]=cities[2];

     cities[3]="Guwahati";
     argv[3]="Minesota";

     while(i<argc)
     {
         printf("arg %-2d: %-8s\n", i, argv[i]);
         i++;
     }
     i=0;
     while(i<num_cities)
     {
         printf("city: %-2d - %-8s\n", i, cities[i]);
         i++;
     }

     printf("\n\n%s%s%s\n\n", cities[0], cities[1], cities[2]);
     printf("\n\nARGC COUNT: %d\n", argc);
     return 0;
}
