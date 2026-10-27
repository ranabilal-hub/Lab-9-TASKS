#include <stdio.h>

void input(int *a , int *b , int *c);
void input(int *a , int *b , int *c){
printf("Enter 3 numbers \n");
scanf("%d %d %d", a , b, c);
}
int Maximum(int a , int b , int c);
int Maximum(int a , int b , int c){
   int maximum = 0;
    if(maximum<a){
        maximum = a;
    }
    if(maximum <b){
        maximum = b;
    }if(maximum<c){
        maximum = c;
    }
    return maximum;
}
int main(){
int a  , b , c;
input(&a,&b,&c);
printf("Maximum number is %d\n",Maximum(a,b,c));
return 0;

}