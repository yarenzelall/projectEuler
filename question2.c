
/* QUESTION 2:
Each new term in the Fibonacci sequence is generated by adding the previous two terms.
By starting with 1 and 2, the first 10 terms will be:
    1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/

#include <stdio.h>

int fibonacci(int limit);

int main()
{
    int limit;
    printf("4 MILYONU GECMEYEN BIR LIMIT DEGERI GIRIN: ");
    scanf("%d", &limit);

    if (limit > 4000000) // Kontrol yapıyoruz.
    {
        printf("GECERSIZ DEGER GIRDINIZ!");
        return 0;
    }
    printf("%d", fibonacci(limit)); // girilen degeri fonksiyona yolluyoruz.
}

/* Aslında fibonacci dizilerinde gizli bir 0 vardır.
        0   1   1   
        a1  a2  b
b ile gösterilen toplayarak bulduğumuz yeni sayı oluyor. Limite ulaşıp ulaşmadığımızı b ile kontrol edicez 
Eger limit degerinden kucukse de çift olup olmadığına bakıcaz Sayıları topladıkça dizi büyüyeceği için a1,a2 degerlerini kaydırmamız gerekiyor
        0   1   1   2
            a1  a2  b
artık a2 yerine a1 yazdık. Ve b yerine de a2 yazdık. Cunku toplayarak oluşan yeni terim artık dizinin son terimi oluyor */

int fibonacci(int limit)
{
    int a1 = 0, a2 = 1, b, i, toplam = 0; // fonksiyonumuzda ilk terim 0 ikinci terim 1
    for (i = 0; i < limit; i++)           // hangi terimde 4 milyon olcağını bilmediğimiz için limite kadar götürüyoruz
    {
        b = a1 + a2; //
        printf("%d  ", b);
        if (b > 4000000)     // eğer toplam limitden buyukse break diyerek çıkar.
            break;           //
        else if (b % 2 == 0) //eger küçükse de toplamın çift olup olmadığına bakar.
            toplam += b;
        a1 = a2; // kaydırma işlemi
        a2 = b;  //     yapılır.
    }
    printf("\n\n___SONUC___\n");
    return toplam;
}
