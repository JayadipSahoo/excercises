#!/usr/bin/tcc -run
#include<stdio.h>
    int main(void){
    int a[10],n,i;
    system ("cls");
        printf("number: ");
        scanf("%d",&n);
            for(i=0;n>0;i++){
                    a[i]=n%2;
                    n=n/2;
                }
        printf("binary is ");
            for(i=i;i>=0;i--){
            printf("%d",a[i]);
                    }
    return 0;

}
