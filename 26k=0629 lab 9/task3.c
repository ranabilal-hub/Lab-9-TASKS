#include <stdio.h>

int array(int a[], int n , int *max , int *min);
int array(int a[] , int n , int *max , int *min){
int sum= 0 ;
*max = a[0] , *min = a[0];
for(int i = 0; i <n; i++){
if(a[i]>*max){
    *max = a[i];
}
if(a[i]<*min){
    *min = a[i];
}
sum+=a[i];
}

return sum;
}
int main(){
    int a[6]= {1,2,3,4,5,6};
    int n =6;
    int max , min;
    int sum = array(a,n,&max,&min);
    printf("Sum is %d\n",sum);
     printf("Minimum number is %d\n",min);
     printf("maximum number is %d\n",max);
     return 0;
}
