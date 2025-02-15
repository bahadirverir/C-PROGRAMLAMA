/* 22-) Girilen aralıktaki asal sayıları bulan ve bunları bir diziye 
kaydedip ekrana yazdıran fonksiyonun C kodunu yazınız; */
#include <stdio.h>
#include <stdbool.h>
int asal_fonksiyon(int baslangic, int bitis) 
{
    int asal_dizi[100]; 
    int index = 0; 
    bool asal; 
    for (int i=baslangic;i<=bitis;i++) 
    {
        asal = true; 
        for (int j=2;j*j<=i;j++) 
        {
            if (i%j==0) 
            {
                asal = false; 
                break;
            }
        }
        if(asal)
        {  
            asal_dizi[index] = i;
            index++;
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}

int main()
{
    int baslangic, bitis;
    printf("Başlangıç değeri gir: ");
    scanf("%d",&baslangic);
    printf("Bitiş değeri gir: ");
    scanf("%d",&bitis);
    printf("Girilen araliktaki asal sayilar:\n");
    asal_fonksiyon(baslangic, bitis);
}