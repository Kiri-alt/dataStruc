#include <iostream>

using namespace std;

int main(void){
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if(a >= 0 && a < 128)
    {
        cout << "You entered: " << a;
        return 0;
    }
    else 
    {
        cout << "Error: input needs to be a positive interger smaller than 128.";
        return 1;
    }
}
