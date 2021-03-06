#include <iostream>
#include <math.h>

using namespace std;

// Helper function to print out my tests
// See the bottom of this file for the full function
void print_numbers(const char* text, double a1, int a2);

int main()
{
   double answer1;
   int answer2;

   answer1 = 1.8; 
   answer2 = answer1++;
   print_numbers("answer1++", answer1, answer2);

   return 0;
}

// This function is temporary -- holds other tests I want to run
void others()
{
   double answer1; 
   int answer2; 
   
   answer1 = 1.8;
   answer2 = ++answer1;
   print_numbers("++answer1", answer1, answer2);

   answer1 = 1.8;
   answer2 = answer1;
   if (answer2 != answer1) answer2++;
   print_numbers("if-then(answer1)", answer1, answer2);

   answer1 = 1.8;
   answer2 = round(answer1);
   print_numbers("round(answer1)", answer1, answer2);

   answer1 = 1.3;
   answer2 = round(answer1);
   print_numbers("round(answer1)", answer1, answer2);

   answer1 = 1.3;
   answer2 = ceil(answer1);
   print_numbers("ceil(answer1)", answer1, answer2);

   return;
}

void print_numbers(const char* text, double a1, int a2)
{
   cout << text << endl;
   cout << "Answer1 = " << a1 << endl;
   cout << "Answer2 = " << a2 << endl;    

   cout << endl;
   return;    
}
