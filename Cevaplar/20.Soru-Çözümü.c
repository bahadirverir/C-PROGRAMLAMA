/* 20-) 10 elemanlı dizi oluşturuluyor ve rastgele sayılar diziye giriliyor.
Girilen değerlerden çift olanları ve çift olanların toplamını ekrana yazan fonksiyonun C kodunu yazınız; */
#include <stdio.h>
int çift_fonksiyon(int dizi[]) 
{
    int çift_toplam = 0;
    int çift_var = 0; 
    printf("Çift sayılar: ");
    for (int i = 0; i < 10; i++) 
    {
        if (dizi[i] % 2 == 0) 
        {
            printf(",%d", dizi[i]);
            çift_toplam += dizi[i];
            çift_var = 1;
            if (i != 9 && dizi[i + 1] % 2 == 0) 
            {
                printf(", ");
            }
        }
    }
    if (çift_var == 0) 
    {
        printf("Hiç çift sayı yok.\n");
    } 
    else 
    {
        printf("\nToplam: %d\n", çift_toplam);
    }
    return 0;
}

int main() 
{
    int dizi[10];
    for (int i = 0; i < 10; i++) 
    {
        printf("dizi[%d]= ", i);
        scanf("%d", &dizi[i]);
    }
    çift_fonksiyon(dizi);
    return 0;
}