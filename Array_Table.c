#include<stdio.h>
void main(){
     int a[] = {2,3,4,5,6};
      for(int j =0;j<5;j++)
      {
        for(int i=1;i<=10;i++){
            printf("%d * %d = %d\n",a[j] , i, a[j]*i);
        }
        printf("\n\n\n");
      }
}