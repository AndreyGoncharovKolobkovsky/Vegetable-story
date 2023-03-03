#include "Milk.hpp"
#include <iostream>
double Milk::get_fat() {
    return fat;
}
double Milk::get_volume() {
    return volume;
}
void Milk::recommendation(bool Allergic) {
    if(!goats_milk and Allergic) std::cout << "Warning: It is contraindicated for you to drink it";
}