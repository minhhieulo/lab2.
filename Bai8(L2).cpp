
#include <conio.h>
#include <stdio.h>
 int ktNamNhuan(int nam){
   	if ((nam%4==0 && nam%100!=0) || (nam%400==0));}

   int check(int thang, int nam,int ngay ){
        switch (thang)
        {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
              return 31;
              break;
            case 2:
                if (ktNamNhuan) ;
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                return 30;
                break;
        }
    }
 void ngaytieptheo(int nam ,int thang ,int ngay)
{
  int nngay =ngay ;int nthang =thang ;int nnam=nam;
  if(nam >0&&thang>0&&thang<13&&ngay>0&&ngay <=(check(thang,nam,ngay)))
  {
    nngay=ngay+1;
    if(thang!=12&&ngay==check(thang,nam,ngay))
    {
      nngay=1;
      nthang=thang+1;
    }
    else if(thang==12&&ngay==check(thang,nam,ngay))
    {
      nngay =1;
      nnam=nam+1;
      nthang=1;
    }
    else if(thang==2)
    {
      if(ktNamNhuan(nam) )
      {
        if(ngay==29)
        {
          nngay=1;
          nthang=thang+1;
        }
      }
      else
      {
        if(ngay==28)
        {
          nngay=1;nthang=thang+1;
        }
      }
    }     
  }
    printf("\nNgay tiep theo : %d:%d:%d",nngay ,nthang,nnam );
}   
int main() {
  int thang, nam, ngay ;
  do {
  	printf( "\nNhap ngay ban can kiem tra: ");
    scanf("%d", &ngay);
    printf( "\nNhap thang ban can kiem tra: ");
    scanf("%d", &thang);
    printf("Nhap nam ban can kiem tra: ");
    scanf("%d",&nam);
  } while (nam < 0 || thang < 1 || thang >12||ngay <1|| ngay>31);
 
  printf("So ngay trong thang la : %d \n", check(thang,nam,ngay ));
 ngaytieptheo(ngay ,thang ,nam );
}

