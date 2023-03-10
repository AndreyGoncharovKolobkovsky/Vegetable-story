#ifndef VEGETABLE_H
#define VEGETABLE_H

#include "product.hpp"

class Vegetable: public Product{
protected:
    double weight;
public:
    Vegetable(date exp_date, int exp_time, double price, char name, double weight);
    double get_price();
};

#endif