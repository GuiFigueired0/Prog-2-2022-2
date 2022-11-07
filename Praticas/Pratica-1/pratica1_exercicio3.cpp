#include <iostream> 

using namespace std;

int calculaTamanhoString1 ( char *str1 ){

    int i = 0;
    for( ; str1[i] ; i++);

    return i;
}

int calculaTamanhoString2 ( char *str2 ){

    int i = 0;
    for( ; *(str2 + i) ; i++);

    return i;    
}

int calculaTamanhoString3 ( char *str3 ){

    char *strAux;
    for(strAux = str3; *strAux ; strAux++);

    return (strAux - str3)/sizeof(char);
}

int main(){

    char str[51];
    cout << " Digite alguma string ... ( com ate 50 caracteres ) : " ;
    cin.getline(str, 50);
    cout << "Tamanhos calculados:" << endl;
    cout << calculaTamanhoString1( &str[0] ) << " " << calculaTamanhoString2( &str[0] )
         << " " << calculaTamanhoString3( &str[0] ) ;
    cout << endl;
    
    return 0;
}