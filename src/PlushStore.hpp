#pragma once
#include <string>
#include <vector>
#include "Plush.hpp"

class PlushStore {
    public:
    
        PlushStore (const std::string name) {
            _name = name;
        }

        PlushStore(){}

        std::string get_name() const {
            return _name;
        }

        void set_name(const std::string name){
            _name = name;
        }

        double get_wealth_amount() const {
            return _loan;
        }
        int get_stock_size() const {
            return _vecPlush.size();
        }

        void loan(const int addedLoan){
            _loan += addedLoan;
        }

        int get_debt_amount() const {
            return _loan * 1.1;
        }


        int make_plush(const int cost){
            auto plush = Plush(cost);
                
            if(0 <= get_wealth_amount() - cost || get_debt_amount() - cost ){
                _vecPlush.push_back(plush);
                _loan -= cost;
                _experience++;
                if(_loan < 0){
                    _loan = 0;
                }
            }
            return plush.get_cost();
        }

        int  get_experience(){
            return _experience;
        }
    private:
        std::string _name = "Andil";
        int _loan = 0;
        std::vector<Plush> _vecPlush {};
        int _experience = 0;
 
        
        
};