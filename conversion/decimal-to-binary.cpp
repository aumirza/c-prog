#include <iostream>

using namespace std;

int decimalToBinary(int decimalNum)
{
    int binaryNum = 0;
    int power = 1;

    while (decimalNum > 0)
    {
        int remainder = decimalNum % 2;
        decimalNum = decimalNum / 2;
        binaryNum += remainder * power;
        power = power * 10;
    }

    return binaryNum;
}

int main()
{

    int decimalNum;
    int binaryNum;

    cout << "Enter a decimal number: ";
    cin >> decimalNum;

    binaryNum = decimalToBinary(decimalNum);

    cout << "The binary number is: " << binaryNum << endl;
}