#include <iostream>

using namespace std;

int main()
{
    
    int num, count = 0;
    cout << "enter the number: ";
    cin>>num;
    int dividend = num;
    while(dividend) {
        if (dividend%2 == 1) 
            count++; 
        dividend /= 2;
    }
    cout << "setbits count in the number is " << count << endl;

    return 0;
}
