#include<stdio.h>
void main()
{
    int x;
    float a,b,c,d,root1,root2,i;

    printf("\nEnter value of a :");
    scanf("%f",&a);

    printf("\nEnter value of b :");
    scanf("%f",&b);

    printf("\nEnter value of c :");
    scanf("%f",&c);

    d=b*b-4*a*c;

    if(d>0)
       {
         x=1;
       }
    else
    {
        if(d=0)
        {
            x=2;
        }
        else
        {
            x=3;
        }
    }
    switch(x)
    {
        case(1):
            root1=(-b+sqrt(d))/(2*a);
            root2=(-b-sqrt(d))/(2*a);
            printf("\nroot1 is :%f",root1);
            printf("\nroot2 is :%f",root2);
            break;
        case(2):
            root1=root2=-b/(2*a);
            printf("root1 is %f and root2 is %f",root1,root2);
            break;
        case(3):
            root1=root2=-b/(2*a);
            i=sqrt(-d/(2*a));
            printf("root1 is %f and root2 is %f",root1,root2);
            break;

    }
}
