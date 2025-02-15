/* 17-) 3x3'lük bir matris oluşturuluyor ve klavyeden rastgele sayılar matrise giriliyor.  
Buna göre bu matrisi ters sırada ekrana yazdıran C kodunu yazınız; */
#include <stdio.h>
int main() 
{
    int dizi[3][3];
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            printf("dizi[%d][%d]= ", i, j);
            scanf("%d", &dizi[i][j]);
        }
    }
    printf("\nMatristeki değerler ters sırada yazılıyor...\n\n");
    for (int i = 2; i >= 0; i--) 
    {
        for (int j = 2; j >= 0; j--) 
        {
            printf("%d ", dizi[i][j]);
            printf("\n");
        }
        
    }
    return 0;
}