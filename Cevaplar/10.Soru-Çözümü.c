/* 10-) 10 elemanlı bir diziye girilen değerleri ters sırayla ekrana yazdıran C kodunu yazınız; */
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

    printf("\nGirilen değerler ters sırayla:\n");
    for (i = 9; i >= 0; i--) 
    {
        printf("dizi[%d] = %d\n", i, dizi[i]);
    }
    return 0;
}