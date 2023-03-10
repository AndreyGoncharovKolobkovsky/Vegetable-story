#ifndef PRODUCT_H
#define PRODUCT_H

#include <iostream>
using namespace std;

struct date{
    unsigned int day;
    unsigned int month;
    unsigned int year;
};

class Product{
protected:
    date exp_date;    //expirstion date 
    int exp_time;   // expiration time in hours
    double price;
    char name;
public:
    Product(); 
    virtual double get_price() {return 0;};
    date get_exp_date();
    int get_exp_time();
    bool if_expired(date current_date);
};

#endif