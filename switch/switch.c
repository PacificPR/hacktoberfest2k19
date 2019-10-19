#include<curses.h>
#include <stdlib.h>
#include<stdio.h>
//including headers, curses.h instead of conio.h as it is supported by latest
//unix machines

int incr(int x);
int decr(int x);

int main()
{
    int num,ch;
    printf("enter the  two digit number of your choice");
    scanf("%d",&num);
    //accepting the number 
    
    int temp1,res;
    while(true){
    printf("This is the following menu options\n");
    printf("----------1.Choose here for incrementing the number-----------------\n");
    printf("----------2.Choose here for decrementing the number-------------------\n");
    printf("----------3.EXIT THE PROGRAM----------------------------\n");
    printf("enter the choice");
    scanf("%d",&ch);
    //accepting choice of user
    
    switch(ch)
    {
        case 1: res=incr(num);
                printf("the incremented number is %d\n",res);
                num=res;
                break;
        case 2: temp1=decr(num);
                res=decr(temp1);
                printf("the decremented number is %d\n",res);
                num=res;
                break;
        case 3: exit(0);

        default: printf("WRONG CHOICE ");
        
    }
    }       
    

    return 0;
}

int incr(int x)
{
     x=x+1;
     return x;
}
int decr(int x)
{
    x=x-1;
    return x;
}


