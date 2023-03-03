#ifndef FORLEARNING2_MILK_HPP
#include "Milk_product.hpp"
#define FORLEARNING2_MILK_HPP
class Milk: public Milk_product{
private:
    double fat;
    double volume;
    bool goats_milk;
public:
    double get_fat();
    double get_volume();
    void recommendation(bool Allergic);
};
#endif //FORLEARNING2_MILK_HPP
