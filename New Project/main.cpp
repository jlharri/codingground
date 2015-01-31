/* Jerry */

#include <iostream>

using namespace std;

void print_numbers(double a1, int a2)
{
   cout << "Answer1 = " << a1 << endl;
   cout << "Answer2 = " << a2 << endl;    

   cout << endl;
   return;    
}

int main()
{
   double answer1 = 1.8;
   int answer2;

   answer2 = ++answer1;
   print_numbers(answer1, answer2);
   
   answer1 = 1.8;
   answer2 = answer1++;
   print_numbers(answer1, answer2);

   return 0;
}

