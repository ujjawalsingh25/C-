/*Name :- Ujjawal Kumar
Roll : - 13000320103
ECE_B
Practical Test 1*/

#include <stdio.h>
void check_number(int num)
{
   int temp, digit;
   int sum = 0;
   temp = num;
   while (temp != 0)
   {
      digit = temp % 10;
      sum = sum + digit*digit*digit;
      temp = temp / 10;
   }

   if (sum == num)
   {
      printf("%d\n", num);
   }
}
int main()
{
   for (int i = 1; i <= 1000; i++)
   {
      check_number(i);
   }
   return 0;
}