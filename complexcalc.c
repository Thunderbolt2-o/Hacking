#include<stdio.h>
#include<conio.h>
typedef struct Complex
{
int real; int imag;
}complex; main()
{
complex c1,c2;
int sum1,sum2,diff1,diff2,product1,product2;
printf("Enter the realpart of the complex number: "); scanf("%d %d",&c1.real,&c2.real);
printf("Enter the imaginarypart of the complex number: "); scanf("%d %d",&c1.imag,&c2.imag);
printf("The Complex numbers:\n");
printf("First Complex Number: %d+i%d\n",c1.real,c1.imag); printf("Second Complex Number: %d+i%d\n",c2.real,c2.imag); sum1=(c1.real+c2.real);
sum2=(c1.imag+c2.imag); diff1=(c1.real-c2.real); diff2=(c1.imag-c2.imag);
product1=(c1.real*c2.real-c1.imag*c2.imag); product2=(c1.real*c2.imag+c2.real*c1.imag);

printf("TheSummation:%d+i(%d)\nRealpart:%d\tImaginarypart:%d\n",sum1,sum2, sum1,sum2);
printf("The Difference:%d+i*(%d) \nReal part:%d\tImaginary part:%d\n",diff1,diff2,diff1,diff2);
printf("The Product:%d+i*(%d) \nReal part:%d\tImaginary part:%d\n",product1,product2,product1,product2);
return 0;
}
