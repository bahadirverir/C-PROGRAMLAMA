/* 8-) 10 elemanlı bir diziye klavyeden rastgele sayılar giriniz.  
Sayıların toplamını ve ortalamasını hesaplayan C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int dizi[10];
    int i;
    int toplam = 0;

    for (i = 0; i < 10; i++) {
        printf("dizi[%d] = ", i);
        scanf("%d", &dizi[i]);
    }
    for (i = 0; i < 10; i++) 
    {
        toplam += dizi[i];
    }
    
    float ortalama = toplam / 10.0;  
    printf("Toplam = %d, Ortalama = %.2f\n", toplam, ortalama);
    return 0;
}
