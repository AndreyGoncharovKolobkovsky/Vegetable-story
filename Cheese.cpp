#include "Cheese.hpp"

Cheese::Cheese(date exp_date, int exp_time, double price, char name, double weight, double hole_size) : Milk_product(false){
    this->exp_date = exp_date;
    this->exp_time = exp_time;
    this->price = price;
    this->name = name;
    this->weight = weight;
    this->hole_size = hole_size;
}

double Cheese::get_weight() {
    return weight;
}

double Cheese::get_hole_size() {
    return hole_size;
}

double Cheese::get_price(){
    return this->price;
}
