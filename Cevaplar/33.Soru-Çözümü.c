/*33-) Klavyeden rastgele girilen bir kelime dizi içerisine kaydediliyor. 
Girilen kelimeyi ters sırada olacak şekilde ekrana yazdıran fonksiyonun C kodunu yazınız; */
#include <stdio.h>
int kelime_fonksiyon(char dizi[])
{
    int uzunluk = 0;
    while(dizi[uzunluk]!='\0')
    {
        uzunluk++;
    }
    printf("kelime ters sırada yazdırılıyor\n");
    int i;
    for(i=uzunluk-1;i>=0;i--) 
    {
        printf("%c",dizi[i]);    
    }
    if(dizi[i]=='\0')
    {
        printf("\n");
    }
    return 0;
}

int main()
{
    char dizi[100];
    printf("Bir kelime giriniz: ");
    scanf("%s",dizi);
    (kelime_fonksiyon(dizi));
}