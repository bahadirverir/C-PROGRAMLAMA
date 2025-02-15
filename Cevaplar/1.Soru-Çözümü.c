/* 1-) Girilen bir sayının faktöriyelini for döngüsü kullanarak hesaplayan C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int sayı;
    int faktöryel=1;
    int i;
    printf("sayı girişi yapınız: ");
    scanf("%d",&sayı);
    
    for(i=1;i<=sayı;i++)
    {
        faktöryel=faktöryel*i;
    }
    printf("Faktöryel = %d\n",faktöryel);
}