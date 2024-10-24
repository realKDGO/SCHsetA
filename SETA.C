//School activity Set A if-else
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<time.h>
void menu() {
  clrscr();
  printf("\n|======CHOOSE PROBLEM======|\n");
  printf("|1. Problem 1              |\n");
  printf("|2. Problem 2              |\n");
  printf("|3. Problem 3              |\n");
  printf("|4. Exit                   |\n");
  printf("|==========================|\n");
  printf("Choose a problem: ");
}
//Problem 1.
void prob1() {
 char gender;
 clrscr();


  printf("Enter your gender: ");
  gender=getche();
  gender=toupper(gender);

  if(gender == 'M') {
   printf("\nWelcome, sir!");
} else if(gender == 'F') {
   printf("\nWelcome, madam!");
} else {
   printf("\nError");
}

  getch();
}

//Problem 2.
void prob2() {
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
   printf("\nError: Invalid discount percentage");
} else {
   finprc=price-(price*(disc/100));
   printf("\n%s, the final price is: %.2f",name,finprc);
}

  getch();
}

//Problem 3.
void prob3() {
  int num,tens,units,sum,product;
  clrscr();

  printf("Enter two-digit number: ");
  scanf("%d",&num);

  tens = num / 10;
  units = num % 10;

  sum = tens + units;
  product = tens * units;

  if(sum > product) {
   printf("\nI have control of myself.");
} else {
   printf("\nI lost to myself");
}

 getch();
}

int main() {
 int option;
 clrscr();

 do{
  menu();
  scanf("%d",&option);

  switch(option) {
   case 1:
    prob1();
    break;
   case 2:
    prob2();
    break;
   case 3:
    prob3();
    break;
   case 4:
    printf("Thank You! Goodbye.");
    sleep(2);
    printf("\nProgram Exiting...");
    sleep(1);
    break;
   default:
    printf("Error: Invalid Option!");
  }
} while(option != 4);

 return 0;
}