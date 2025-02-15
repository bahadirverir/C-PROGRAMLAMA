/* 13-) 4x4'lük bir matris oluşturulup, köşe elemanlarının toplamını bulan C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int dizi[4][4];
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("dizi[%d][%d]= ",i,j);
            scanf("%d",&dizi[i][j]);
        }
    }
    int toplam=0;
    toplam = (dizi[0][0]+dizi[0][3]+dizi[3][0]+dizi[3][3]);
    printf("toplam = %d",toplam);
    printf("\n\n");
}