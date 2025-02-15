/* 9-) 10 elemanlı bir diziye girilen sayılardan, en büyük ve en küçük 
sayının değerleri ve index numaralarını bulan C kodunu yazınız; */
#include <stdio.h>
int main() 
{
    int dizi[10];
    int i;
    for (i = 0; i < 10; i++) 
    {
        printf("dizi[%d] = ", i);
        scanf("%d", &dizi[i]);
    }
    int max = dizi[0], min = dizi[0];
    int max_index = 0, min_index = 0;

    for (i = 1; i < 10; i++) 
    {
        if (dizi[i] > max) 
        {
            max = dizi[i];
            max_index = i;
        }
        if (dizi[i] < min) 
        {
            min = dizi[i];
            min_index = i;
        }
    }
    printf("En büyük değer = %d, Index no = %d\n", max, max_index);
    printf("En küçük değer = %d, Index no = %d\n", min, min_index);
    return 0;
}
