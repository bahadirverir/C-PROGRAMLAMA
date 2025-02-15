/* 27-) Klavyeden rastgele girilen bir sayıya göre ters şekilde üçgen oluşturan ve
bir dizi içerisine atarak diziyi ekrana yazdıran C kodunu yazınız; */
#include <stdio.h>
int main()
{
    char dizi[100];
    int sayı; 
    printf("sayıyı gir: ");
    scanf("%d",&sayı);
    
    int index = 0;
    int i,j; 
    
    for(i=sayı;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            dizi[index++] = '*';
            dizi[index++] = ' '; 
        }
        dizi[index++] = '\n'; 
    }
    for(i=0;i<index;i++)
    {
        printf("%c", dizi[i]);
    }
}