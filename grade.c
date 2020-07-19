#include<stdio.h>
#include<stdlib.h>
void grade(int m);
int main()
{
    int m;
    system("color fd");
    printf("Enter your Marks:");
    scanf("%d",&m);
    printf("\n");
    if(m>100 || m<0)
        {
            system("color fc");
            printf("Invalid Marks(i.e.enter in between 0-100)");
            return 0;
        }
    grade(m);
}
void grade(int mark)
{
    system("color fa");
    if(mark>84)
        printf("Grade A");
    else if(mark>69)
        printf("Grade B");
    else if(mark>54)
        printf("Grade C");
    else if(mark>39)
        printf("Grade D");
    else
        {
            system("color fc");
            printf("Grade F");
        }
}
