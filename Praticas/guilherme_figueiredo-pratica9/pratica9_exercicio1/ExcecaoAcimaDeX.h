#ifndef EXCECAO_ACIMA_DE_X__H
#define EXCECAO_ACIMA_DE_X__H

#include <iostream> 
#include <exception>

class ExcecaoAcimaDeX : public std::exception
{
public:
    virtual const char* what() const noexcept override;
};

#endif
