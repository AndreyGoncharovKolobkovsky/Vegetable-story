#include "vegetable.hpp"

Vegetable::Vegetable(date exp_date, int exp_time, double price, char name, double weight) : Product() {
    this->exp_date = exp_date;
    this->exp_time = exp_time;
    this->price = price;
    this->name = name;
    this->weight = weight;
}

double Vegetable::get_price(){
    return this->weight * this->price;
}