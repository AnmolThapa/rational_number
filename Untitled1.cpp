#include<stdio.h>
#include<conio.h>
 typedef struct
 {
     int numerator;
     int denominator;
 }
 rational;
 rational makerational(int,int);
 rational mul_rational(rational,rational);
 int main()
 {   rational r1 = makerational(5,3);
     rational r2 = makerational (6,7);
     rational mul=mul_rational(r1,r2);
     printf("%d%d",mul.numerator,mul.denominator);

 rational makerational (int a,int b)
 {
     rational r_number;
     r_number.numerator=a;
     r_number.denominator=b;
     return r_number;
 }
 rational mul_rational(rational r1,rational r2)
 {
 rational result;
 result.numerator=(r1.denominator,r1.numerator) * (r2.denominator,r2.numerator);
 result.denominator=(r2.denominator*r2.denominator);
 return result;
 }
