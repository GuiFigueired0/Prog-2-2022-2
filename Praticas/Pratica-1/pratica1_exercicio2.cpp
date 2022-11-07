#include <iostream> 

using namespace std;

void leiaInteiros ( int &num1 , int &num2) {

    cin >> num1;
    cin >> num2;

    return;
}

void leiaInteiros2 ( int *num1 , int *num2) {

    cin >> *num1;
    cin >> *num2;

    return;
}

int main () {

    int a , b ;
    int c , d ;

    // passagem por referencia
    leiaInteiros (a,b) ;
    cout << a << " " << b << endl;

    // utilize ponteiros
    leiaInteiros2 (&c , &d) ;
    cout << c << " " << d << endl;

    return 0;
}