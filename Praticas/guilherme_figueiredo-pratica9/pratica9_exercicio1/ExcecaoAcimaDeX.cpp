#include <iostream>

#include "ExcecaoAcimaDeX.h"

const char* ExcecaoAcimaDeX::what() const noexcept {
    return "A soma de todos os numeros ultrapassa o valor limite";
}