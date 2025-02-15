/* 29-) 3'e 3'lük bir matris oluşturuluyor ve klavyeden rastgele sayılar matrise giriliyor.
Matris içerisindeki en büyük ve en küçük sayıyı bulup ekrana yazdrıan C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int dizi[3][3];
    int i,j;
    int en_büyük,en_kücük;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("dizi[%d][%d]= ",i,j);
            scanf("%d",&dizi[i][j]);
        }
    }
    en_büyük = en_kücük = dizi[0][0]; 
    for(i=0;i<3;i++) 
    {
        for(j=0;j<3;j++)
        {
            if(dizi[i][j]>en_büyük)
            {
                en_büyük = dizi[i][j];
            }
            if (dizi[i][j]<en_kücük)
            {
                en_kücük = dizi[i][j];
            }
        }
    }   
    printf("en büyük değer = %d\n",en_büyük);
    printf("en küçük değer = %d\n",en_kücük);
}