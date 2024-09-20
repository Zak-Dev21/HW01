
#include <iostream>
using namespace std;

int main()
{
    int user_num;
    int quotient;
    int remainder;
    char binary[32]; //used to hold binary string
    int index = 0; // used to track position in binary string

    cout << "Enter a positive integer number: ";
    cin >> user_num;

    quotient = user_num;


    while (quotient != 0) {
        remainder = quotient % 2;
        binary[index] = remainder + '0'; // converting remainder to a char
        index++;
        quotient = quotient / 2;
        //binary (concatenate with remainder)
    }

    cout << "Binary representation : ";
    for (int i = index - 1; i >= 0; i--) {
        cout << binary[i];
    }
    
    

    return 0;
}
