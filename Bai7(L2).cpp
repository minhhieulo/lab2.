	
#include <stdio.h>
#include <conio.h>
#include<stdio.h>
#include<math.h> 
int  main()
{
    char loai;
    float tien=0;
    int songay;
    printf("Nhap so ngay thue phong: ");
    scanf("%d", &songay);
    printf("Nhap loai phong\n: ");
    scanf("%c", &loai);
    switch (loai)
    {
    case 'A':
        tien = songay * 250000;
        if (songay > 10)
            tien = tien - tien * 10 / 100;
        break;
    case 'B':
        tien = songay * 200000;
        if (songay > 10)
            tien = tien - tien * 8 / 100;
        break;
    case 'C':
        tien = songay * 150000;
        if (songay > 10)
            tien = tien - tien * 8 / 100;
        break;
    }
    printf("So tien thue phong la: %f", tien);
    _getch();
}
