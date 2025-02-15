/* 32-) 10 elemanlı bir dizi oluşturuluyor ve klavyeden rastgele değerler diziye giriliyor.
Dizinin mod ve medyan değerlerini hesaplayıp ekrana yazdıran fonksiyonun C kodunu yazınız; */
#include <stdio.h>
int HesaplaModMedyan(int dizi[], int *mod, int *medyan)
{
    int sayac[100]={0}; 
    int tekrar=0;
    int i; 
    for(i=0;i<10;i++) 
    {
        sayac[dizi[i]]++;
        if(sayac[dizi[i]]>tekrar)
        {
            tekrar = sayac[dizi[i]];
            *mod = dizi[i];
        }
    }
    int j;
    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(dizi[j]>dizi[j+1])
            {
                int temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;}}}
    if(10%2==0)
    {
        *medyan = (dizi[10/2 - 1] + dizi[10/2])/2;
    } 
    else{
        *medyan = dizi[10/2];
        }
    return 0;
}

int main()
{
    int dizi[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("dizi[%d]= ",i);
        scanf("%d",&dizi[i]);
    }
    int mod;
    int medyan;
    HesaplaModMedyan(dizi, &mod, &medyan);
    printf("Dizinin modu: %d\n", mod);
    printf("Dizinin medyani: %d\n", medyan);
}