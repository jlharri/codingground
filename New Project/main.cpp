/* Jerry */

#include <iostream>

using namespace std;

int main()
{
   double answer1 = 1.8;
   int answer2, answer3;
   answer2 = ++answer1;
   cout << "Answer1 = " << answer1 << endl;
   cout << "Answer2 = " << answer2 << endl;    

   cout << endl;
   
   answer1 = 1.8;
   answer3 = answer1++;
   cout << "Answer1 = " << answer1 << endl;
   cout << "Answer3 = " << answer3 << endl;
   return 0;
}

