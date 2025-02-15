/* 16-) 2x3'lük bir matris oluşturulup, her satır ve sütundaki en büyük sayıları 
ekrana yazdırıcak C kodunu yazınız; */
#include <stdio.h>
int main() 
{
    int dizi[2][3];
    int satir_max[2], sutun_max[3];
    int i, j;
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("dizi[%d][%d]= ", i, j);
            scanf("%d", &dizi[i][j]);
        }
    }
    for (i = 0; i < 2; i++) 
    {
        satir_max[i] = dizi[i][0]; 
        for (j = 1; j < 3; j++) 
        {
            if (dizi[i][j] > satir_max[i]) 
            {
                satir_max[i] = dizi[i][j];
            }
        }
    }
    for (j = 0; j < 3; j++) 
    {
        sutun_max[j] = dizi[0][j]; 
        for (i = 1; i < 2; i++) 
        {
            if (dizi[i][j] > sutun_max[j]) 
            {
                sutun_max[j] = dizi[i][j];
            }
        }
    }
    for (i = 0; i < 2; i++) 
    {
        printf("Satir %d en büyük eleman: %d\n", i, satir_max[i]);
    }
    for (j = 0; j < 3; j++) 
    {
        printf("Sutun %d en büyük eleman: %d\n", j, sutun_max[j]);
    }
    return 0;
}