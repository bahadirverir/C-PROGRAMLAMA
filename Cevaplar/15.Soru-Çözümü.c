/* 15-) İki 2x2'lik matris oluşturulup, her birine klavyeden sayılar girilecek ve 
bu iki matrisin toplamını farklı bir matrise atayıp ekrana yazdıracak C kodunu yazınız; */
#include <stdio.h>
int main() 
{
    int dizi_1[2][2], dizi_2[2][2], dizi_toplam[2][2];
    int i, j;
    printf("1. dizi için eleman girişi yap:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("dizi_1[%d][%d] = ", i, j);
            scanf("%d", &dizi_1[i][j]);
        }
    }
    printf("2. dizi için eleman girişi yap:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("dizi_2[%d][%d] = ", i, j);
            scanf("%d", &dizi_2[i][j]);
        }
    }
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            dizi_toplam[i][j] = dizi_1[i][j] + dizi_2[i][j];
        }
    }
    printf("\nMatrislerin toplamı:\n");
    for (i = 0; i < 2; i++) 
    {
        for (j = 0; j < 2; j++) 
        {
            printf("%d ", dizi_toplam[i][j]);
        }
        printf("\n");
    }
    return 0;
}