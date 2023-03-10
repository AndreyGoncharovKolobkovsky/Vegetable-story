#ifndef FORLEARNING2_MILK_HPP
#include "Milk_product.hpp"
#define FORLEARNING2_MILK_HPP
class Milk: public Milk_product{
private:
    double fat;
    double volume;
    bool goats_milk;
public:
    Milk(date exp_date, int exp_time, double price, char name, double fat, double volume, bool goats_milk);
    double get_fat();
    double get_volume();
    void recommendation(bool Allergic);
    double get_price();
};
#endif //FORLEARNING2_MILK_HPP
