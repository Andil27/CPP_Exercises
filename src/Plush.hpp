#pragma once


class Plush {
    public:
    
    Plush (const int cost) {
        _cost = cost;

    }

    Plush(){}

    int get_cost() const {
        return _cost;
    }

    void set_cost(const int cost){
        _cost = cost;
    }


    private:
        int _cost = 10;
};