#include <iostream>
using namespace std;

int main(){


    cout << "Enter the value of n: " << endl;
    int n= 4;

    for(int i=0;i<n;i++){

        // stars
        for (int j =0; j<i+1; j++)
        {
            cout << "* ";
        }
        // spaces
        for (int j =0; j<2*(n-i-1); j++)
        {
            cout << "  ";
        }
        // stars
                for (int j =0; j<i+1; j++)
        {
            cout << "* ";
        }
        // new line
        cout << endl;
    }

    for (int i=0;i<n;i++){
        // stars
        for (int j =0; j<n-i; j++)
        {
            cout << "* ";
        }
        // spaces
        for (int j =0; j<2*i; j++)
        {
            cout << "  ";
        }
        // stars
        for (int j =0; j<n-i; j++)
        {
            cout << "* ";
        }
        // new line
        cout << endl;
    }

    return 0;
}