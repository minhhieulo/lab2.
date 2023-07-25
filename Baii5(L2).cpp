#include<stdio.h>
#include<math.h>
int main()
{
  long temp, n,a,s=0;
  int count = 0;
  do
  {
    printf("\nNhap vao so nguyen n lon hon 0: ");
    scanf("%ld", &n);
  }while(n <= 0);
  for(;n!=0;){
		a = n % 10;
		s += a;
		n /= 10;
	}
  temp = n;
  if(n == 0) count = 1;
  while(temp != 0)
  {
    count++;
    temp = temp / 10;
  }
  printf("\nso luong cua %ld là: %d", n, count);
  printf("\ntong la : %d",s); 
  
}

