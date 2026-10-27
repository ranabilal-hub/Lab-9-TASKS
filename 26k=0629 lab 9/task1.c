#include <stdio.h>

int sum(int a, int b);
int sum(int a, int b){
    return a+b;
}


int differ(int a, int b);
int differ(int a, int b){
    return a-b;
}


int product(int a, int b);
int product(int a, int b){
    return a*b;
}


int div(int a, int b);
int div(int a, int b){
    return a/b;
}

int main (){
    int a = 15 , b = 3;
    int choice;
    int (*p)(int , int);
    printf("Choose your choice\n");
    printf("1.Add \n 2.Subtrct \n 3.Product\n4.Divide\n");
    printf("Enter Choice: ");
    scanf("%d",&choice);

    switch(choice){
        case 1: p = sum;break;
        case 2: p = differ;break;
        case 3: p = product;break;
        case 4: p = div;break;
        default: printf("Invalid Choice\n");
    }
        printf("Answer is %d\n",p(a,b));
        return 0;
    
}



