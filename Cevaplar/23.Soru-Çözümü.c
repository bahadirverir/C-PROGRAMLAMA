/* 23-) 5 elemanlı bir dizi oluşturuluyor ve klavyeden rastgele sayılar diziye giriliyor
girilen sayıların karekökünü hesaplayıp ekrana yazdıran fonksiyonun C kodunu yazınız; */
#include <stdio.h>
#include <math.h>
int karekök_fonksiyon(float dizi[])
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("karekök(%.2f) = %.2f\n",dizi[i],sqrt(dizi[i]));
    }
    return 0;
}

int main() 
{   
    float dizi[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("dizi[%d]= ",i);
        scanf("%f",&dizi[i]);
    }
    karekök_fonksiyon(dizi);
}