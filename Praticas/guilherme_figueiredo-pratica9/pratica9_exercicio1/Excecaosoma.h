//#ifdef EXCECAO_SOMA_H
#define EXCECAO_SOMA_H

#include <vector>

class Excecaosoma
{
private:
    unsigned int _x; 
    std::vector<int> _n;
    int total;

public:
    Excecaosoma();
    ~Excecaosoma();

    void somaValores();
};


//#endif