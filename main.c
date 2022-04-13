#include <stdio.h>

int main(void) {
/*
  int y;
  printf("please enter a year: ");
  scanf("%d", &y);
  if(y%400 == 0){
    printf("%d is not a leap year.", y);
  }else if(y%4 == 0){
    printf("%d is a leap year.", y);
    
  }else{
    printf("%d is not a leap year.", y);
  }*/


// student grade programme

int n;
printf("Please enter your number: ");
scanf("%d", &n);

if(n<60)
printf("Your number is = %d means you failed this course.", n);
else if(n>=60 && n<63)
printf("Your number is = %d means you got D grade",n);

else if(n>=60 && n<63)
printf("Your number is = %d means you got D grade",n);

else if(n>=63 && n<67)
printf("Your number is = %d means you got D+ grade",n);


else if(n>=67 && n<70)
printf("Your number is = %d means you got c- grade",n);

else if(n>=70 && n<73)
printf("Your number is = %d means you got c grade",n);

else if(n>=73 && n<77)
printf("Your number is = %d means you got c+ grade",n);

else if(n>=77 && n<80)
printf("Your number is = %d means you got B- grade",n);
else if(n>=80 && n<83)
printf("Your number is = %d means you got B grade",n);
else if(n>=83 && n<87)
printf("Your number is = %d means you got B+  grade",n);

else if(n>=87 && n<90)
printf("Your number is = %d means you got A- grade",n);

else if(n>=90 && n<97)
printf("Your number is = %d means you got A grade",n);

else if(n>=97 && n<100)
printf("Your number is = %d means you got A+ grade",n);

else
printf("you have entered more than 100 or less than 0");


  return 0;
}