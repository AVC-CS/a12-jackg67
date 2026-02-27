#include <iostream>
using namespace std;
int globalInt = 10;

int printAddress(int* addr) {
    cout << "Address: " << addr << endl;
    cout << "Address of localInt: " << &localInt << endl;
    return 0;
}

int main(){
    int num = 10;
    static int staticInt = 50;
    cout << "Address of num: " << &num << endl;
    cout << "Address of globalInt: " << &globalInt << endl;
    cout << "Address of staticInt: " << &staticInt << endl;
    printAddress(&num);
}