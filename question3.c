/*    QUESTION3
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ? */

#include <stdio.h>

int asaltest(long long int sayi); // sayı asalsa 1 dönecek değilse 0

int main()
{
    long long int sayi; // sayıyı int ile tanımlayamıyoruz. O nedenle 64 bite cıkmamız gerekiyor.
    long long int i;    // for için tanımladık
    int sayac;          // 34 = 7^1.2^1 ile ifade edilir. Hangi çarpandan kaç adet olduğunu görmek için sayaç ekledik

    printf("LUTFEN BIR SAYI GIRINIZ: ");
    scanf("%llu", &sayi);

    for (i = 2; i <= sayi; i++) // her sayi 1'e bölündüğü için 2 den başlatıyoruz.
    {
        sayac = 0; // her defasında sayacı sıfırlamalıyız.Çünkü fordan dolayı i hep artıcak
        if (sayi % i == 0)
            printf("Sayi %d'ye tam bolunur\n", i);
        while (asaltest(i) == 1 && (sayi % i) == 0) // eger o anki i değeri asalsa ve sayıyı tam bölüyorsa gittiği yere kadar bölücez ve sayacı arttırıcaz.
        {
            sayi = sayi / i;
            sayac++;
        }
        if (sayac > 0) // sayac büyükse sıfırdan ekrana o anki i değerinin kaç kere böldüğünü yazıyoruz.
            printf("%llu^%d \n", i, sayac);
    }
}

int asaltest(long long int sayi)
{
    int asal = 1;
    
    /*  örneğin 19 sayısının asallığını test ederken önce 2'ye böleriz.
        19:2=9,555.. olacağı için virgüllü bir sonucu daha fazla bölmemize gerek yok.
        o nedenle for döngüsünde sayi/2 yaparız. */
        
    for (int j = 2; j <= sayi / 2; j++)
    {
        if (sayi % j == 0) // eger girilen sayı asalsa zaten bu if'e girmez. O nedenle en başta asal=1 yaptık.
        {                 
            asal = 0;     // ama asal değilse girecektir ve o zaman da asal'ı 0 yaparız.
            break;
        }
    }
    return asal;
}
