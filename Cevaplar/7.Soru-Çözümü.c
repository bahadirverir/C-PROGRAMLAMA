/* 7-) Girilen bir sayının faktöriyel değerini hesaplayan fonksiyonun C kodunu yazınız; */
#include <stdio.h>
int faktöriyel_bulma(int sayı) 
{
    if (sayı == 0 || sayı == 1) 
    {
        return 1;
    }
    int i = 1;
    int faktöriyel = 1;
    while (i <= sayı) 
    {
        faktöriyel *= i;
        i++;  
    }
    return faktöriyel; 
}

int main() 
{
    int sayı;
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayı);
    printf("Sonuç = %d\n", faktöriyel_bulma(sayı));
    return 0;
}