#ifndef FORLEARNING2_CHEESE_HPP
#include "Milk_product.hpp"
#define FORLEARNING2_CHEESE_HPP
class Cheese: public Milk_product{
private:
    double weight;
    double hole_size;
public:
    double get_weight();
    double get_hole_size();
};
#endif //FORLEARNING2_CHEESE_HPP
