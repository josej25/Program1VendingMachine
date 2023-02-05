#ifndef VENDINGMACHINE_H
#define VENDINGMACHINE_H


#include <iostream>
#include <string>
#include <unordered_map>
#include "Item.h"
using namespace std;
class VendingMachine
{
    private:
        string m_machineName;
        unordered_map<string, Item> m_items;

    public:
        VendingMachine(string);
        void stockItem(Item);
        bool selectItem(string);
        string getName();
        void getItem(string, float);
        void showItems();
};


#endif // VENDINGMACHINE_H
