/* 12-) 10 elemanlı bir diziye girilen sayıları büyükten küçüğe sıralayan C kodunu yazınız; */
#include <stdio.h>
int main() 
{
    int dizi[10];
    int i, j, temp;
    for (i = 0; i < 10; i++) 
    {
        printf("Dizinin %d. elemanını giriniz: ", i);
        scanf("%d", &dizi[i]);
    }

    for (i = 0; i < 10; i++) {
        for (j = i + 1; j < 10; j++) 
        {
            if (dizi[i] < dizi[j]) 
            {
                temp = dizi[i];
                dizi[i] = dizi[j];
                dizi[j] = temp;
            }
        }
    }
    printf("\nGirilen değerlerin büyükten küçüğe sıralanmış hali:\n");
    for (i = 0; i < 10; i++) 
    {
        printf("dizi[%d] = %d\n", i, dizi[i]);
    }
    return 0;
}