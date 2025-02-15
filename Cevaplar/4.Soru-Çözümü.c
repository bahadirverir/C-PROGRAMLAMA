/* 4-) Girilen bir sayının asal olup olmadığını, while döngüsü kullanarak kontrol eden C kodunu yazınız; */
#include <stdio.h>
int main()
{
    int sayı, i = 2, sayaç = 0;
    printf("Bir sayı giriniz: ");
    scanf("%d", &sayı);
    if (sayı < 2) 
    {
        printf("%d asal değildir.\n", sayı);
    } 
    else{
        while (i * i <= sayı) 
        {
            if (sayı % i == 0) 
            {
                sayaç++;
                break; 
            }
            i++;
        }
        if (sayaç == 0)
            printf("\n%d asaldır.\n", sayı);
        else
            printf("\n%d asal değildir.\n", sayı);
    }
    return 0;
}