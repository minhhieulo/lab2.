#include<conio.h>
#include<stdio.h>
int main(){
float fkm; float tien;
printf("Nhap vao so km : ");
scanf("%f",&fkm);
if(fkm>=0&&fkm<=1){
tien=fkm*15000;
printf("Ban phai tra : %f d ",tien );
}
else if(fkm>=2&&6>fkm){
tien=fkm*13500;
printf("Ban phai tra :%f d",tien);
}
else if(fkm>=6){
tien=fkm*11000;
printf("Ban phai tra :%f d",tien); 
}
else if(fkm>120){
 tien=fkm/10;
 printf("Ban phai tra :%f d",tien); 
}
return(0);
}
