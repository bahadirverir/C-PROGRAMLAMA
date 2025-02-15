/* 25-) 10 elemanlı bir dizi oluşturuluyor ve klavyeden rastgele sayılar diziye giriliyor.
Girilen sayıların ortalamasını hesaplayıp sayıları ortalamanın altında ve üstünde
olan sayılar şeklinde ekrana yazdıran C kodunu yazınız; */
#include <stdio.h>
int main() 
{
    int dizi[10];
    int i;
    int toplam = 0;
    int ortalama;
    for(i = 0; i < 10; i++) 
    {
        printf("dizi[%d]= ", i);
        scanf("%d", &dizi[i]);
        toplam = toplam + dizi[i]; 
    }
    ortalama = toplam / 10;
    printf("Ortalama: %.2f\n", (float)ortalama); 
    printf("Ortalamanın üzerindeki sayılar: ");
    int found = 0; 
    for(i = 0; i < 10; i++) 
    {
        if(dizi[i] > ortalama) 
        {
            printf("%d ", dizi[i]);
            found = 1;
        }
    }
    if (!found) printf("Yok");
    printf("\n");
    printf("Ortalamanın altındaki sayılar: ");
    found = 0; 
    for(i = 0; i < 10; i++) 
    {
        if(dizi[i] < ortalama) 
        {
            printf("%d ", dizi[i]);
            found = 1;
        }
    }
    if (!found) printf("Yok");
    printf("\n");
    return 0;
}