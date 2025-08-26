#include<stdio.h>
int main(){
    int a,b,c ;
    printf("ENTER VALUE OF A AND B:");
    scanf("%d %d",&a,&b);
    c=a/b;
    printf("THE VALUE OF REMAINDER IS:%d ",a-(b*c));//WE COULD ALSO DECLARE A NEW VARIABLE TO STORE THE VALUE OF REMAINDER

    return 0;
}