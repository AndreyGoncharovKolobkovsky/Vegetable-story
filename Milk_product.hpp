#ifndef FORLEARNING2_MILK_PRODUCT_HPP
#include "Product.hpp"
#define FORLEARNING2_MILK_PRODUCT_HPP
class Milk_product: public Product{
private:
    bool package;
public:
    bool if_eco_friendly();
};
#endif //FORLEARNING2_MILK_PRODUCT_HPP