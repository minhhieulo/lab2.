
#include<bits/stdc++.h>

int main(){

 int n; 
 printf("nhap vao n "); 
 scanf("%d",&n); 

 float kq = 0, tm = 1;
 for(int i = 1; i <= n; i++){

   tm = tm/i;

   kq += tm;
 }
 printf("ket qua la %f",kq) ;
 return 0; 

}
