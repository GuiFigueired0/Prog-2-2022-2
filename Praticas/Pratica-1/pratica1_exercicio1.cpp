#include <iostream>

using namespace std;

int main(){

    long int value1 = 200000;
    long int value2 = 0;

    //a
    long int *longPtr;

    //b
    longPtr = &value1;

    //c
    cout << *longPtr << endl;

    //d
    value2 = *longPtr;

    //e
    cout << value2 << endl;

    //f
    cout << &value1 << endl;

    //g
    cout << longPtr << endl;

    /*
    O valor armazendo no ponteiro LongPtr é
    o endereço da variável value1:
    0x7ffc2f910b38 (valor do momento no terminal)
    */

    return 0;
}