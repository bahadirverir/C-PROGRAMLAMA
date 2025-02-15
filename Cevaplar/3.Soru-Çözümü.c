/* 3-) Girilen bir sayının asal olup olmadığını, for döngüsü kullanarak kontrol eden C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int sayı, i, sayaç = 0;
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayı);
    
    if (sayı < 2) 
    {
        printf("%d asal değildir.\n", sayı);
    } 
    else 
    {
        for (i = 2; i * i <= sayı; i++) 
        {
            if (sayı % i == 0) 
            {
                sayaç++;
            }
        }        
        if (sayaç == 0)
            printf("\n%d asaldır.\n", sayı);
        else
            printf("\n%d asal değildir.\n", sayı);
    }
    return 0;
}