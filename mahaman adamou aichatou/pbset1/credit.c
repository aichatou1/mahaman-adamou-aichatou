//Mahaman Adamou Aichatou

#include <stdio.h>

#include <cs50.h>

int
main(void)

{
    long long w, e, m;
    int s, p, sum;


do

  {
w=get_long_long("type your credit card number: ");

}

 while (w<0);


for (e=w, s=0; e>0; e/=100)

 s+= e%10;


for(m=w/10, p=0; m>0; m/=100)

 {

 if (2* (m%10)>9)

{

 p+=(2*(m%10))/10;

 p+=(2*(m%10))%10;

}

  else

p+=2 *(m%10);

 }

    sum=s+p;


 if (sum%10==0)


 {


 if ((w >=340000000000000 && w<350000000000000) || (w>=370000000000000 && w<380000000000000))

  printf("well done.\n");


  else if (w>=510000000000000 && w<560000000000000)

printf("Good, it is a Mastercard\n");



 else if ((w>=4000000000000 && w<5000000000000) || (w>=4000000000000000 && w<5000000000000000))

 printf ("Good, it is a Visa Card\n");

 else

 printf("sorry card is not valid \n");
 }

}