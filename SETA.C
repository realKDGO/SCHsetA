//School activity Set A if-else
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
//Problem 1.
int main() {
 char gender;
 clrscr();

  printf("Enter your gender: ");
  scanf("%c",&gender);
  gender=toupper(gender);

  if(gender == 'M') {
   printf("Welcome, sir!");
} else if(gender == 'F') {
   printf("Welcome, madam!");
} else {
   printf("Error");
}

  getch();
  return 0;
}

//Problem 2.
/* int main() {
  char name[20];
  float price,disc,finprc;
  clrscr();

  //Getting the name of user
  printf("Enter your name: ");
  scanf("%s",&name);
  //Getting the original price
  printf("Enter original price: ");
  scanf("%f",&price);
  //Getting the discount percentage
  printf("Enter discount percentage: ");
  scanf("%f",&disc);

  //Performing the calculations for final price.
  if(disc >= 100) {
   printf("Error: Invalid discount percentage");
} else {
   finprc=price-(price*(disc/100));
   printf("%s, the final price is: %.2f",name,finprc);
}

  getch();
  return 0;
}*/

//Problem 3.
/* int main() {
  int num,tens,units,sum,product;
  clrscr();

  printf("Enter two-digit number: ");
  scanf("%d",&num);

  tens = num / 10;
  units = num % 10;

  sum = tens + units;
  product = tens * units;

  if(sum > product) {
   printf("I have control of myself.");
} else {
   printf("I lost to myself");
}

 getch();
 return 0;
}*/