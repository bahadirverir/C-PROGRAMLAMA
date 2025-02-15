/* 21-) N elemanlı bir dizi oluşturuluyor ve diziye rastgele sayılar giriliyor. 
Girilen sayıların aritmetik ortlamasını hesaplayıp ekrana yazdıran fonksiyonun C kodunu yazınız; */
#include <stdio.h>
float aritmetik_ortalama(int dizi[], int n)
{
    float toplam = 0;
    for(int i=0;i<n;i++)
    {
        toplam = toplam + dizi[i];
    }
    return toplam / n;
}

int main() 
{
    int n;
    printf("Kaç elemanlı dizi oluşturmak istiyorsun :");
    scanf("%d",&n);
    int dizi[n];
    int i;     
    for (i=0;i<n;i++) 
    {
        printf("dizi[%d]= ", i);
        scanf("%d", &dizi[i]);
    }
    printf("Dizinin aritmetik ortalaması = %.2f\n",(aritmetik_ortalama(dizi, n)));
}