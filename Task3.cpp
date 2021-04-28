#include <iostream>
using namespace std;
int main()
{
   int array[5];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; ++i)
      cin >> array[i];

   cout << "You entered: ";
  
   for(int j = 0; j < 5; ++j)
      cout << endl << *(array + j);

   return 0;
}