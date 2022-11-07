#include <iostream>

using namespace std;

int main(){

    char str[51];
    char *iniStr;
    char *endOfStr;
    char *aux;

    cin.getline(str, 51);
    iniStr = &str[0];

    for(endOfStr= iniStr; *endOfStr ; endOfStr++);
    
    for(   ; iniStr != endOfStr ; endOfStr--){
        
        cout << *endOfStr;

    }

    cout << *endOfStr << endl;

    return 0;
}