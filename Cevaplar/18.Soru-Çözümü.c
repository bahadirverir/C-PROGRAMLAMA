/* 18-) 2'ye 2'lik bir matris oluşturuluyor ve klavyeden rastgele sayılar matrise giriliyor.  
Girilen sayıları büyükten küçüğe sıralayıp ekrana yazdıran C kodunu yazınız; */
#include <stdio.h>
int main() 
{
    int dizi[2][2];
    int temp;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("dizi[%d][%d]= ", i, j);
            scanf("%d", &dizi[i][j]);
        }
    }
    int array[4], index = 0;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            array[index++] = dizi[i][j];
        }
    }
    for (int i = 0; i < 4 - 1; i++) 
    {
        for (int j = 0; j < 4 - i - 1; j++) 
        {
            if (array[j] < array[j + 1]) 
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    index = 0;
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            dizi[i][j] = array[index++];
        }
    }
    printf("\nMatrisi büyükten küçüğe sıralamak:\n\n");
    for (int i = 0; i < 2; i++) 
    {
        for (int j = 0; j < 2; j++) 
        {
            printf("%d ", dizi[i][j]);
            printf("\n");
        }
    }
    return 0;
}