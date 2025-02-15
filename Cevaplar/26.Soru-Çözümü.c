/* 26-) 10 elemanlı bir dizi oluşturuluyor ve klavyeden rastgele sayılar diziye giriliyor
Girilen sayıları küçükten büyüğe doğru sıralayıp ekrana yazdıran C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int dizi[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("dizi[%d]= ",i);
        scanf("%d",&dizi[i]);
    }
    int j,temp;
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(dizi[i]>dizi[j])
            {
                temp=dizi[i];
                dizi[i]=dizi[j];
                dizi[j]=temp;
            }
        }
    }
    printf("dizi tekrardan sıralanıyor...");
    i=0;
    while(i<10)
    {
        printf("\ndizi[%d]= %d",i,dizi[i]);
        i++;
    }
    printf("\n");
}