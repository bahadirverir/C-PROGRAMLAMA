/* 5-) Girilen sayıların toplamı 100'ü geçtiğinde duracak ve 
toplam ile sayı adedini yazdıracak C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int toplam=0;
    int sayı;
    int sayaç=0;
    do
    {
        printf("sayı girişi yap: ");
        scanf("%d",&sayı);
        toplam=toplam+sayı;
        sayaç++;
    } 
    while (toplam<100);
    printf("Toplam = %d , adet = %d",toplam,sayaç);
    printf("\n\n");
}