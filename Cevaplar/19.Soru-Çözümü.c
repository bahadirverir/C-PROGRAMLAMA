/* 19-) 10 elemanlı bir dizi oluşturuluyor ve klavyeden sayılar diziye giriliyor.
Diziye girilen sayılardan kaç tanesinin asal olduğunu ekrana yazan fonksiyonun C kodunu yazınız; */
#include <stdio.h>
int asal_bulma(int dizi[]) 
{
    int sayaç = 0;
    for (int i = 0; i < 10; i++) 
    {
        if (dizi[i] <= 1) continue;
        int asal = 1;
        for (int j = 2; j < dizi[i]; j++) 
        {
            if (dizi[i] % j == 0) 
            {
                asal = 0; 
                break; 
            }
        }
        if (asal==1)
        {
            sayaç++;
        } 
    }
    return sayaç; 
}

int main() 
{
    int dizi[10];
    for (int i = 0; i < 10; i++) 
    {
        printf("dizi[%d]= ", i);
        scanf("%d", &dizi[i]);
    }
    printf("Diziye girilen sayılardan %d tanesi asaldır\n",(asal_bulma(dizi)));
}