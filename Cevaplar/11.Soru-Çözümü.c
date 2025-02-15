/* 11-) girilen kelimenin uzunluğunu bulan foknsiyonun C kodunu yazınız; */
#include <stdio.h>
int Kelime_uzunlugu(char dizi[]) 
{
    int uzunluk = 0;
    while (dizi[uzunluk] != '\0') 
    {
        uzunluk++;
    }
    return uzunluk;
}

int main() 
{
    char dizi[100];
    printf("\n\n");
    printf("Bir kelime giriniz: ");
    scanf("%s",dizi);
    printf("Kelime uzunluğu: %d\n",Kelime_uzunlugu(dizi));
    printf("\n");
    
}