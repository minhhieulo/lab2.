#include <stdio.h>
 
int main(){
    int n, tmp;
    printf("nhap vao so n : ") ;
    scanf("%d", &n);
    int r = 0;
    while(n > 0){
        tmp = n % 10;
        r = r * 10 + tmp;
        n = n / 10;
    }
    printf("sau khi dao lai la :  %d", r);
}
