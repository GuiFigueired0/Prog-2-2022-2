#include <iostream> 
#include <exception>

class ExcecaoAcimaDeX : public std::exception
{
private:
    /* data */
public:
    ExcecaoAcimaDeX(/* args */);
    ~ExcecaoAcimaDeX();
};

ExcecaoAcimaDeX::ExcecaoAcimaDeX(/* args */)
{
}

ExcecaoAcimaDeX::~ExcecaoAcimaDeX()
{
}

