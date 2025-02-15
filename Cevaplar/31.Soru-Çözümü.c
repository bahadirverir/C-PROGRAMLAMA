/* 31-) 10 elemanlı bir dizi oluşturuluyor ve klavyeden rastgele değerler diziye giriliyor.
Dizi içersinide istenilen sayının olup olmadığını kontrol eden fonksiyonun C kodunu yazınız; */
#include <stdio.h>
int sayı_fonksiyon(int dizi[],int istenen) 
{
    int i;
    for(i=0;i<10;i++)
    {
        if (dizi[i]==istenen)
        {
            return i; 
        }
    }
        return -1; 
}

int main()
{
    int dizi[10]; 
    int i;
    for(i=0;i<10;i++)
    {
        printf("dizi[%d]= ",i);
        scanf("%d",&dizi[i]);
    }
    int istenen;
    printf("aradığın sayıyı gir: ");
    scanf("%d",&istenen);
    int sonuç = (sayı_fonksiyon(dizi,istenen));
    if (sonuç!=-1)
    {
        printf("istenen sayı %d dizide var ve indeksi: %d\n",istenen,sonuç);
    } 
    else
    {
        printf("istenen sayı %d dizide bulunmuyor\n",istenen);
    }
}