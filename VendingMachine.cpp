#include "VendingMachine.h"
#include <iostream>
using namespace std;

VendingMachine::VendingMachine(string machineName)
{
    m_machineName = machineName;
}

void VendingMachine::stockItem(Item item)
{
    m_items[item.getName()] = item;
}

bool VendingMachine::selectItem(string itemName)
{
    if (m_items.count(itemName) && m_items[itemName].getQuantity() > 0)
        {
            return true;
        }
        else {
            cout << "Item not available" << endl;
            return false;
            }
}

string VendingMachine::getName()
{
    return m_machineName;
}
void VendingMachine::getItem(string itemName, float money)
{
    if (money >= m_items[itemName].getCost()){
            m_items[itemName].decreaseQuantity();
            cout << "Here is your " << itemName << endl;
            }
    else {
        cout << "Not enough money" << endl;
    }
}

void VendingMachine::showItems()
{
    cout << "Items in " << m_machineName << ": " << endl;
    for (auto it = m_items.begin(); it != m_items.end(); it++) {
        cout << it->first << " (" << it->second.getQuantity() << ") " << it->second.getCost() << endl;
    }
}
