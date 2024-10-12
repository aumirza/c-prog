#include <iostream>

using namespace std;

int binaryToDecimal(int binaryNum)
{
    int decimalNum = 0;
    int pow = 1;

    while (binaryNum > 0)
    {
        int lastDigit = binaryNum % 10;
        decimalNum += lastDigit * pow;

        binaryNum /= 10;
        pow *= 2;
    }
    return decimalNum;
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter a binary number: ";
    cin >> n;
    int decimalNum = binaryToDecimal(n);
    cout << "Decimal number: " << decimalNum << endl;
    return 0;
}
