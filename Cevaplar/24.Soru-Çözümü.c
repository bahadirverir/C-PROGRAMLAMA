/* 24-) Kullanıcıdan alınan iki sayıya göre çarpım tablosu oluşturuluyor ve bu değerler bir
diziye kaydediliyor. Oluşturulan diziyi ekrana yazdıran C kodunu yazınız; */
#include <stdio.h>
int main() 
{
    int ilk_sayı, ikinci_sayı;
    int i, j;
    printf("Birinci sayıyı gir: ");
    scanf("%d", &ilk_sayı);
    printf("İkinci sayıyı gir: ");
    scanf("%d", &ikinci_sayı);

    int dizi[ilk_sayı][ikinci_sayı];
    for (i = 0; i < ilk_sayı; i++) 
    {
        for (j = 0; j < ikinci_sayı; j++) 
        {
            dizi[i][j] = (i + 1) * (j + 1); 
        }
    }
    printf("\nÇarpım Tablosu:\n");
    for (i = 0; i < ilk_sayı; i++) 
    {
        for (j = 0; j < ikinci_sayı; j++) 
        {
            printf("%4d", dizi[i][j]); 
        }
        printf("\n");
    }   
    return 0;
}