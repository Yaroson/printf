/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/28 09:01:27 by ysoroko           #+#    #+#             */
/*   Updated: 2021/01/11 11:48:47 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/* 
** PRINTF ARGUMENTS STRUCTURE
** %[flags][width][.precision][length]specifier
*/

//!!!!!!!!!!!!!!!!!!!!!printf("%020.8%") works (with 'c' it doesn't!!!);
int main()
{
	int t;
	char c;

	c = 'a';
	t = 50;
	ft_printf("pp %.50d\n", 10000);
	ft_printf("p1 %.4s\n", "cccc");
	ft_printf("p2 %.10s\n", "cccc");
	ft_printf("p3 %.4s\n", NULL);
	ft_printf("p4 %.5s\n", "aaaaa");
	ft_printf("p5 %.3d\n", 100);
	ft_printf("p6 %.0d\n", 100);
	ft_printf("p7 %.4d\n", 100);
	ft_printf("p8 %.10d\n", 100);
	ft_printf("p9 %.50d\n", 100);
	ft_printf("p10 %.1d\n", 100);
	ft_printf("p11 %.3d\n", 100);
	ft_printf("p12 %.0d\n", 0);
	ft_printf("p13 %.3i\n", 100);
	ft_printf("p14 %.0i\n", 100);
	ft_printf("p15 %.4i\n", 100);
	ft_printf("p16 %.10i\n", 100);
	ft_printf("p17 %.50i\n", 100);
	ft_printf("p18 %.1i\n", 100);
	ft_printf("p19 %.3x\n", 100);
	ft_printf("p20 %.0x\n", 0);
	ft_printf("p21 %.3x\n", 100);
	ft_printf("p22 %.0x\n", 100);
	ft_printf("p23 %.4x\n", 100);
	ft_printf("p24 %.10x\n", 100);
	ft_printf("p25 %.50x\n", 100);
	ft_printf("p26 %.1x\n", 100);
	ft_printf("p27 %.3x\n", 100);
	ft_printf("p28 %.0x\n", 0);
	ft_printf("p29 %.3u\n", 100);
	ft_printf("p30 %.0u\n", 100);
	ft_printf("p31 %.4u\n", 100);
	ft_printf("p32 %.10u\n", 100);
	ft_printf("p33 %.50u\n", 100);
	ft_printf("p34 %.1u\n", 100);
	ft_printf("p35 %.3u\n", 100);
	ft_printf("p36 %.0u\n", 0);
	ft_printf("%%\n");
	ft_printf("Hello 42 school! %s\n", NULL);
	ft_printf("%010%\n");
	ft_printf("%d\n", 2147483647);
	ft_printf("%x\n", 2147483647);
	ft_printf("%X\n", 2147483647);
	ft_printf("%x\n", 0);
	ft_printf("%010x\n", 0);
	ft_printf("%010x\n", 20);
	ft_printf("%010x\n", -20);
	ft_printf("%10x\n", 20);
	ft_printf("%10.2x\n", -20);
	ft_printf("%-10x\n", 50);
	ft_printf("%-15x\n", 0);
	ft_printf("%.1x\n", 500);
	ft_printf("%*.*x\n", 50, 10, 2);
	ft_printf("%x\n", -1);
	ft_printf("%40.50d\n", 50);
    ft_printf("%d\n", -589);
    ft_printf("%-4d\n", -2464);
    ft_printf("%.5d\n", -2372);
	ft_printf("%p\n", NULL);
	ft_printf("%15p\n", NULL);
	ft_printf("%-15p\n", NULL);
    ft_printf("ret = %d\n", ft_printf("%%p::[%010d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%10d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", -8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%010d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%10d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%.5d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.1d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%010.1d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%01.50d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%1.50d]\n", 8473));
    ft_printf("ret = %d\n", ft_printf("%%p::[%0100.50d]\n", 8473));
	ft_printf("%c\n", 'a');
	ft_printf("%10c\n", 't');
	ft_printf("%1c\n", 'y');
	ft_printf("%50.2s\n", "Coucou");
	ft_printf("%50.2s\n", NULL);
	ft_printf("%5.0s\n", "Hello");
	ft_printf("%.1s\n", "Test");
	ft_printf("%10s\n", NULL);
	ft_printf("%10s\n", "Ok");
	ft_printf("%d\n", ft_printf("1chiffre 1 %d chiffre 2 %d\n", 42, -42));
	ft_printf("%d\n", ft_printf("4chiffre 1 %-12d chiffre 2 %-12d\n", 42, -42));
	ft_printf("t1 %050d\n", 10);
	ft_printf("t2 %-50d\n", 10);
	ft_printf("t3 %50.0d\n", 10);
	ft_printf("t4 %50.50d\n", 10);
	ft_printf("t5 %50.10d\n", 10);
	ft_printf("t6 %*.*d\n", 50,  5, 10);
	ft_printf("t7 %1.50d\n", -10);
	ft_printf("t8 %1.50d\n", 10);
	ft_printf("t9 %2.2d\n", 10);
	ft_printf("t10 %2.2d\n", -10);
	ft_printf("t12 %.0d\n", 0);
	ft_printf("t13 %01d\n", -20);
	ft_printf("t14 %10d\n", 1000);
	ft_printf("%d\n", ft_printf("5chiffre 1 %0d chiffre 2 %0d\n", 42, -42));
	ft_printf("%d\n", ft_printf("6chiffre 1 %012d chiffre 2 %012d\n", 42, -42));
	ft_printf("%d\n", ft_printf("8chiffre 1 %*d chiffre 2 %*d\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("15chiffre 1 %.d chiffre 2 %.d\n", 42, -42));
	ft_printf("%d\n", ft_printf("4caractere 1 %12c caractere 2 %12c\n", 'a', 'c'));
	ft_printf("1caractere 1 %c caractere 2 %c\n", 'a', 'c');
	ft_printf("%d\n", ft_printf("1hexa-maj 1 %X hexa-maj 2 %X\n", 42, -42));
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %12X hexa-maj 2 %int12X\n", 42, -42));
	ft_printf("%d\n", ft_printf("4hexa-maj 1 %-12X hexa-maj 2 %-12X\n", 42, -42));
	ft_printf("%d\n", ft_printf("5hexa-maj 1 %0X hexa-maj 2 %0X\n", 42, -42));
	ft_printf("%d\n", ft_printf("6hexa-maj 1 %012X hexa-maj 2 %012X\n", 42, -42));
	ft_printf("%d\n", ft_printf("8hexa-maj 1 %*X hexa-maj 2 %*X\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("1unsigned 1 %u unsigned 2 %u\n", 42, -42));
	ft_printf("%d\n", ft_printf("4unsigned 1 %12u unsigned 2 %12u\n", 42, -42));
	ft_printf("%d\n", ft_printf("4unsigned 1 %-12u unsigned 2 %-12u\n", 42, -42));
	ft_printf("%d\n", ft_printf("5unsigned 1 %0u unsigned 2 %0u\n", 42, -42));
	ft_printf("%d\n", ft_printf("6unsigned 1 %012u unsigned 2 %012u\n", 42, -42));
	ft_printf("%d\n", ft_printf("8unsigned 1 %*u unsigned 2 %*u\n", 42, 6, 6, 6));
	ft_printf("%d\n", ft_printf("15unsigned 1 %.u unsigned 2 %.u\n", 42, -42));
	ft_printf("%d\n", ft_printf("%%\n")); 
	ft_printf("%d\n", ft_printf("%-.12u\n", -20000000));
	ft_printf("%d\n", ft_printf("%-.12i\n", -20000000));
	ft_printf("%d\n", ft_printf("truc\n"));
	ft_printf("04 Test de chiffre sans h : %d, et %d\n", 432767, -432767);
	ft_printf("31 This is an int : %.0d\n", 0);
	ft_printf("32 This is an int : %0d\n", 0);
	ft_printf("percent 1 %012%\n");
	ft_printf("percent 2 %12%\n");
	ft_printf("percent 3 %-12%\n");
	ft_printf("percent 4 %0%\n");
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", t);
	ft_printf("%d\n", ft_printf("1string 1 %s string 2 %s\n", "toto", "bonjour"));
	ft_printf("%d\n", ft_printf("4string 1 %12s string 2 %12s\n", "toto", "bonjour"));
	ft_printf("%d\n", ft_printf("4string 1 %-12s string 2 %-12s\n", "toto", "bonjour"));
	ft_printf("st1 %*.*d\n", 10, 10, 50);
	ft_printf("st2 %*.*d\n", 1, 50, 50);
	ft_printf("st3 %*.*d\n", 0, 0, 50);
	ft_printf("st4 %*.*d\n", 0, 50, 50);
	ft_printf("st5 %*.*d\n", 10, 0, 50);
	ft_printf("st6 %*.*d\n", 10, 10, 50);
	ft_printf("st12 %*d\n", 10, 50);
	ft_printf("st13 %*d\n", 0, 0);
	ft_printf("st14 %.*d\n", 0, 0);
	ft_printf("st15 %*d\n", 50, 5);
	ft_printf("st16 %0.*d\n", 50, 5);
	ft_printf("st17 %0.*d\n", 0, 0);
	ft_printf("st7 %*.*s\n", 1, 50, "hey");
	ft_printf("st8 %*.*s\n", 0, 0, "coucou");
	ft_printf("st9 %*.*s\n", 0, 50, "hey");
	ft_printf("st10 %*.*s\n", 10, 0, "dsa");
	ft_printf("st11 %*.*s\n", 10, 10, "hello");
	ft_printf("st8 %.*s\n", 0, "coucou");
	ft_printf("st9 %*s\n", 0, "hey");
	ft_printf("st10 %*s\n", 10, "dsa");
	ft_printf("st118 %*s\n", 100, "hello");
	ft_printf("st119 %*s\n", 1000, "hello");
	ft_printf("st120 %*s\n", 10000, "hello");
	ft_printf("st121 %*s\n", 100000, "hello");
	ft_printf("st118 %*d\n", 100, 0);
	ft_printf("st119 %*d\n", 1000, 10);
	ft_printf("st120 %*d\n", 10000, 467);
	ft_printf("st121 %*d\n", 100000, -589);
	ft_printf("ultimate1 %*d        %*i\n", 500, 0, 10, 10);
	ft_printf("ultimate2 %*d %*s %*x %*X %*i %*u\n", 1, 5000, 1, "hey", 10, 54700, 1, 300, 10000, -55, 1, -60);
	ft_printf("ultimate3 %*.*d %*.*s\n", 1, 50, 5000, 1, 0, "hey");
	ft_printf("ultimate4 %*.*x %*.*X\n", 1, 50, 5000, 1, 0, 10);
	ft_printf("ultimate5 %*.*u\n", 1, 50, 5000);
	ft_printf("neg1 %*s\n", -9, "coucou");
	ft_printf("neg2 %*.*s\n", -9, 4, "coucou");
	ft_printf("neg3 %*s\n", -9, NULL);
	ft_printf("neg4 %*.*s\n", 0, 0, "coucou");
	ft_printf("neg5 %*s\n", -100, "coucou");
	ft_printf("neg6 %*s\n", -156, "coucou");
	ft_printf("neg7 %*.*s\n", -1586, 15, "coucou");
	ft_printf("neg8 %*.*s\n", -1586, 15, "coucou");
	ft_printf("neg9 %*.*s\n", 15856, 155, "coucou");
	ft_printf("neg10 %*.*s\n", -15586, 15, "coucou");
	ft_printf("neg11 %*.*s\n", -15586, 15, "coucou");
	ft_printf("neg1 %*d\n", -9, 150);
	ft_printf("neg2 %*.*d\n", -9, 4, 1555);
	ft_printf("neg3 %*d\n", -9, -255);
	ft_printf("neg4 %*.*d\n", 0, 0, -30);
	ft_printf("neg5 %*d\n", -100, -589);
	ft_printf("neg6 %*d\n", -156, 15555);
	ft_printf("neg7 %*.*d\n", -1586, 15, 0);
	ft_printf("neg8 %*.*d\n", -1586, 15, 300);
	ft_printf("neg9 %*.*d\n", 15856, 155, -3000);
	ft_printf("neg10 %*.*d\n", -15586, 15, 150);
	ft_printf("neg11 %*.*d\n", -15586, 15, 0);
	ft_printf("***************%*s%*d**************%*u*************\n", 10, "coucou", 10, 10, -50, 20);
	ft_printf("taaa %100s\n", "hello");
	//ft_printf("%.*x\n", -25, -245678);
	//printf("%.*x\n", -25, -245678);

	printf("%0*d", 8, -18);

	return (0);
}



/* 
** PRINTF ARGUMENTS STRUCTURE
** %[flags][width][.precision][length]specifier
*/

/*
** TYPE SPECIFIERS:
**
** %C = Char
** %S = String
** %P = Address
** %D + I = Integer (no difference between the two for the output)
** %U = Unsigned Integer
** %x = Hexadecimal with base "0123456789abcdef"
** %X = Hexadecimal with base "0123456789ABCDEF"
** %% = only a '%' char is printed (warning, printf("%020.8%") != printf("%020.8c", 'c'))
*/  


/*
** FLAGS:
**
** "Width":		Specifies how many spaces are needed for the printed string. (= number before the '.' flag)
**				- By default, the character is formatted to the right (Ex: printf("%5s\n", "ha") --> "   ha")
**				- If the width is too little to print, it's ignored ("Ex: printf("%2s\n", "haha"); --> "haha")
**				- Works with all the formats "cspdiuxX% "
**				- Several widths separated by other flags --> error
**				- Format = Unsigned int
**
**
** "Precision":	Specifies the precision for the numbers (= number after '.' if it's present)
**				- Undefined behaviour with: "%cp"
**				- With "%s" string format specifier, sets the number of chars from the string that will be printed
				  (Ex: printf("%4.2s\n", "ahah") --> "  ah")
				  if precision is bigger than the needed string->only prints the string(all the chars)
				  if precision is less than the needed string -> prints only [precision] chars from the string
				  if precision is '0' -> prints an empty string ""
**				- With "%diUxX" format specifiers, it sets the number of chars in the output string
**				  Unlike with "%s", it will always print at least the number itself, even if the precision is too little
**				  If the precision is bigger than the space needed to print the number, it will fill the rest of it (left) with '0'.
**				- In combination with WIDTH: 
**					1) The precision sort of "callocs" a string with "precision" number of '0'. It then writes inside the number
**					2) The width sort of "mallocs" a string with "width" number of spaces in it.It then writes the string from 1) inside
**				- If there is a '.', but no number afterwards --> no effect
**				- If a precision of 0 is used with a '0' in diUxX -> prints nothing
**				- If a precision is used with '-' flag -> '-' flag is ignored
**				- If precision > width, only precision is printed
**				- FORMAT = UNSIGNED INT
**
** "0":			Fills in the extra spaces from the width specifier with '0' char
** 				- Ignored with no width, with '-' flag, and with precision present
**				- If the width is less than the necessary spaces to print the number - ignored
**				- Undefined behaviour with "%s", "%c" and "%p" type specifiers
**				- Multiple "0" --> no problem
**				- '0' after the point -> ignored only when there is no '*', otherwise --> error
**
** "-":			Instead of formatting the output string to the right, does it to the left
**				- Example: "printf("%-4s\n", "ha"); --> "ha  "
**				  (without the "-": "printf("%4s\n", "ha"); --> "  ha")
**				- Overrides the "0" flag
**				- Works with all the type specifiers: "cspdiuxX%"
**				- "-" after the "." --> error
**				- Multiple "-" before the "." --> no problem
**
** "*":			Instead of the number explicitly written in first printf argument, the width or precision
**				(depending on whether '*' is before orafter the '.' flag will be instead taken from the next printf argument)
**				- Example: "printf("%*.*s", 8, 3, "haha") ---> "     hah" (Width = 8, Precision = 3)
**				- Multiple "*" before/after '.' --> error
**				- Both "*" and the width/precision int are present --> error
**				- '0' or '-' cannot be after '*' --> error
*/
