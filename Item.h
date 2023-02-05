#ifndef ITEM_H
#define ITEM_H


#include <string>
using namespace std;

class Item
{
    private:
        string m_name;
        int m_quantity;
        float m_cost;

    public:
        Item();
        Item(string, int, float);
        string getName();
        int getQuantity();
        void decreaseQuantity();
        float getCost();
};

#endif // ITEM_H
