#include "Item.h"
using namespace std;
Item::Item(){
}

Item::Item(string name, int quantity, float cost)
{
    m_name = name;
    m_quantity = quantity;
    m_cost = cost;
}
string Item::getName()
{
    return m_name;
}
int Item::getQuantity()
{
    return m_quantity;
}

void Item::decreaseQuantity()
{
    m_quantity--;
}

float Item::getCost()
{
    return m_cost;
}
