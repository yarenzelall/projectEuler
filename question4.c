/* QUESTION 4
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers. */

#include <stdio.h>

int polindrom(unsigned int num);

int main()
{

    unsigned int a, b, c, d, max = 0;
    
    for (a = 101; a <= 999; a++)
    {
        for (b = 101 + d; b <= 999; b++)
        {
            c = a * b;                   // tüm çarpımları fonksiyona yollayıp kontrol ediyoruz
            if (polindrom(c) && c > max) // her defasında max'ı kontrol ediyoruz.
            {
                max = c; // eğer yeni oluşan c değeri büyükse max'ı güncelliyoruz.
            }
        }
    }
    printf("max = %d", max);

    return 0;
}

int polindrom(unsigned int num) // num 9889 olsun
{
    unsigned int temp = num, tersnum = 0;
    while (temp)
    {
        tersnum = 10 * tersnum + temp % 10;
        temp = temp / 10;

        /* 1. döngüde while(9889) için tersnum 9 olacak ve temp 9889/10 dan 988 gelecek
        2.döngüde while(988) için tersnum 10 * 9 + 988 % 10 'dan 98 gelecek ve temp 988 / 10 dan 98 olacak 
        3.döngüde while(98) için tersnum 10 * 98 + 98 % 10 ' dan 988 gelecek ve temp 98 / 10 dan 9 gelecek
        4.döngüde while(9) için tersnum 10 * 988 + 9 % 10 ' dan 9889 gelecek ve temp 9 % 10 dan 9 gelecek */
    }
    return tersnum == num;
}
