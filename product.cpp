#include "product.hpp"

Product::Product(){
    cout << "product done." << endl;
};

date Product::get_exp_date(){
    return this->exp_date;
}

int Product::get_exp_time(){
    return this->exp_time;
}

bool Product::if_expired(date current_date){
    date prod_date = this->get_exp_date();
    if (prod_date.day == current_date.day and prod_date.month == current_date.month and prod_date.year == current_date.year){
        cout << "last day, might not want to consume." << endl;
        return true;
    }
    else{
        if (current_date.year > prod_date.year){
            cout << "expired." << endl;
            return 0;
        }
        else if (current_date.month > prod_date.month and current_date.year == prod_date.year){
            cout << "expired." << endl;
            return 0;
        }
        else if (current_date.day > prod_date.day and current_date.month == prod_date.month and current_date.year == prod_date.year){
            cout << "expired." << endl;
            return 0;
        }
        else{
            cout << "not expired." << endl;
            return 1;
        }
    }
}

// double Product::get_price(){};