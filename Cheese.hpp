#ifndef FORLEARNING2_CHEESE_HPP
#include "Milk_product.hpp"
#define FORLEARNING2_CHEESE_HPP
class Cheese: public Milk_product{
private:
    double weight;
    double hole_size;
public:
    Cheese(date exp_date, int exp_time, double price, char name, double weight, double hole_size);
    double get_weight();
    double get_hole_size();
    double get_price();
};
#endif //FORLEARNING2_CHEESE_HPP
