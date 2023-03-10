#include "Milk_product.hpp"

Milk_product::Milk_product(bool package) : Product(){
    this->package = package;
}

bool Milk_product::if_eco_friendly(){
    return package;
}