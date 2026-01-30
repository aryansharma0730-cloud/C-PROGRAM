#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int add=a+b;
    int sub=a-b;
    int mult=a*b;
    float div = (float)a/b;
    printf("%d\n",add);
    printf("%d\n",sub);
    printf("%d\n",mult);
    printf("%f\n",div);
    return 0;
}
