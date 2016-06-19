#include<stdio.h>
#include<conio.h>
 typedef struct
 {
     int numerator;
     int denominator;
 }rational;
 rational makerational(int,int);
 rational equal_rational(rational,rational);
 rational add_rational(rational,rational);
 int main()

   rational makerational(int a,int b)
 {
  
     rational r_number;
     r_number.numerator= a;
     r_number.denominator= b;
     return r_number;
 }
 rational equal_rational(rational a,rational b)
 {
 	if(a.numerator*b.denominator==a.denominator*b.numerator)
 	{
printf("they are equal.\n");
 }
 	else
 	{
 		printf("they are not equal.\n");
 	}
 }
 rational add_rational(rational r1, rational r2)
 {
 rational result;
 result.numerator=(r1.numerator*r2.denominator)+(r2.numerator*r1.denominator);
 result.denominator=(r1.denominator*r2.denominator);
 return result;
 }
 
