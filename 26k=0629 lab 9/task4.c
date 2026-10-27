#include <stdio.h>

int  rowadd(int a[][3], int row , int col);
int  rowadd(int a[][3], int row , int col){
  
    for(int i = 0 ; i<row;i++){
          int sum  = 0;
        for(int j = 0 ;j<col;j++){
            sum += a[i][j];
        }
     printf("Sum of Row %d is %d\n",i +1, sum);
    }
    return 0;
}
int main(){
    int row =3 , col = 3;
    int a[3][3] = {
        {2, 3, 4},
        {5, 6, 7},
        {0, 1, 8},
    };
    rowadd(a,row,col);
    return 0;
}