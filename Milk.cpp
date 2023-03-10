#include "Milk.hpp"

Milk::Milk(date exp_date, int exp_time, double price, char name, double fat, double volume, bool goats_milk) : Milk_product(true){
    this->exp_date = exp_date;
    this->exp_time = exp_time;
    this->price = price;
    this->name = name;
    this->fat = fat;
    this->volume = volume;
    this->goats_milk = goats_milk;
}

double Milk::get_fat() {
    return fat;
}
double Milk::get_volume() {
    return volume;
}
void Milk::recommendation(bool Allergic) {
    if (!goats_milk and Allergic) std::cout << "Warning: It is contraindicated for you to drink it" << std::endl;
    else std::cout << "it's fine" << std::endl;
}

double Milk::get_price(){
    return this->price;
}