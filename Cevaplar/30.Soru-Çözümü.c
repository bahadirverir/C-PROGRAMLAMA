/* 30-) 2'ye 3'lük bir matris oluşturuluyor klavyeden sayılar matrise giriliyor.
oluşturulan matrisi tek boyutlu bir dizi haline getirip ekrana yazdıran C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int matris[2][3];
    int dizi[6];
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Matris[%d][%d]= ",i,j);
            scanf("%d",&matris[i][j]);
        }
    }
    int index = 0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            dizi[index] = matris[i][j];
            index++;
        }
    }
    printf("tek boyutlu dizi yazdırılıyor:\n");
    for(i=0;i<6;i++)
    {
        printf("%d\n",dizi[i]);
    }
}