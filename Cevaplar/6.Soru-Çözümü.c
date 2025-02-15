/* 6-)İki sayının toplamını veren fonksiyonun C kodunu yazınız; */
#include <stdio.h>
int toplama(int a, int b)
{
    return a+b;
}

int main()
{
    int a,b;
    printf("\n");
    printf("1.sayıyı gir: ");
    scanf("%d",&a);
    printf("2.sayıyı gir: ");
    scanf("%d",&b);
    printf("toplam= %d\n",(toplama(a,b)));
    printf("\n");
}