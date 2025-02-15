/* 14-) 3x3'lük bir matris oluşturulup, girilen sayılar tek ve çift olmak üzere 
kendi aralarında toplanarak, bu sayıların adetleriyle birlikte ekrana yazdıracak C kodunu yazınız; */
#include <stdio.h>
int main() 
{
    int dizi[3][3];
    int tek_toplam = 0, çift_toplam = 0;
    int tek_sayaç = 0, çift_sayaç = 0;
    int i, j;
    
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("dizi[%d][%d] = ", i, j);
            scanf("%d", &dizi[i][j]);
            if (dizi[i][j] % 2 == 0) 
            {
                çift_toplam += dizi[i][j];
                çift_sayaç++;
            }
            else 
            {
                tek_toplam += dizi[i][j];
                tek_sayaç++;
            }
        }
    }
    printf("\nTek sayıların toplamı = %d\n", tek_toplam);
    printf("Tek sayıların adedi = %d\n", tek_sayaç);
    printf("Çift sayıların toplamı = %d\n", çift_toplam);
    printf("Çift sayıların adedi = %d\n", çift_sayaç);
    return 0;
}