/* 2-) Girilen bir sayının faktöriyelini while döngüsü kullanarak hesaplyan C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int faktöriyel=1;
    int sayı;
    int i=1;
    
    printf("sayı gir : ");
    scanf("%d",&sayı);
    
    while(i<=sayı)
    {
        faktöriyel=faktöriyel*i;
        i++;
    }
    printf("faktöryel = %d\n",faktöriyel);
}