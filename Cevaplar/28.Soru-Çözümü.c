/* 28-) 10 elemanlı bir dizi oluşturuluyor ve klavyeden rastgele sayılar diziye giriliyor.
Sayılar içerisinde tekrar edenleri bulup ekrana yazdıran C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int dizi[10];
    int i,j;
    for(i=0;i<10;i++)
    {
        printf("dizi[%d]= ",i);
        scanf("%d",&dizi[i]);
    }
    printf("dizideki tekrar eden elemanlar ");
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(dizi[i]==dizi[j])
            {
                printf("%d ",dizi[i]);
                break;
            }
        }
    }
}   