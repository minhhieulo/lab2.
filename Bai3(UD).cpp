#include <stdio.h>
#include<math.h> 
main(){
    int n;
    do{
       printf("nhap so tien can rut: ");
	   scanf("%d",&n);
       }
    while (n<10000);
    if (n%10000!=0){
       printf("So tien phai chia chet cho 10.000");
       return 1;
       }
    int motTram = n/100000;
    n = n % 100000;
    int namMuoi = n/50000;
    n = n % 50000;
    int haiMuoi = n/20000;
    n = n % 20000;
    int muoi = n/10000; 
    printf("Ket qua: %d",&motTram, &namMuoi, &haiMuoi, &muoi);
    return 0;
}
