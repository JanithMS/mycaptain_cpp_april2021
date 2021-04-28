#include <iostream>
using namespace std;

bool isPrimeNumber(int n);

int main() {
    int n, i;
    bool isPrimeFlag = false;

    cout << "Enter a positive  integer: ";
    cin >> n;

    for(i = 2; i <= n/2; ++i) {
        if (isPrimeNumber(i)) {
          int j = n - i;
            if (isPrimeNumber(j)) {
                cout << n << " = " << i << " + " << j << endl;
                isPrimeFlag = true;
            }
        }
    }

    if (!isPrimeFlag)
      cout << n << " can't be expressed as sum of two prime numbers.";

    return 0;
}

bool isPrimeNumber(int n)
{
    int k;
    bool isPrimeNum = true;

    if (n == 0 || n == 1) {
        isPrimeNum = false;
    }
    else {
        for(k = 2; k <= n/2; ++k) {
            if(n % k == 0) {
                isPrimeNum = false;
                break;
            }
        }
    }

    return isPrimeNum;
}