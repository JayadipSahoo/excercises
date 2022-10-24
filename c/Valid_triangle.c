#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter The Length of Triangles: \n");
    scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c&&(b+c)>a&&(c+a)>b)
    {
        printf("\nTriangle Can be Formed.");
    }
    else
    {
        printf("\nTriangle can not be drawn.");
    }
    return 0;
}