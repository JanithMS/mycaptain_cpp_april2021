#include <iostream>
using namespace std;

int main()
{
    double num1, num2, numProduct;
    cout << "Enter two numbers: ";

    cin >> num1 >> num2;
 
    numProduct = num1 * num2;  

    cout << "Entered Numbers are " << num1 << " and " << num2 << " and Product is " << numProduct;    
    
    return 0;
}