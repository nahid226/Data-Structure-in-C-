#include "ItemType.h"
#include<iostream>
using namespace std;
ItemType::ItemType()
{
    value = 0;
}
RelationType ItemType::comparedTo(ItemType otherItem) const
{
    if(value < otherItem.value)
    {
        return LESS;
    }
    else if(value > otherItem.value)
    {
        return GREATER;
    }
    else
    {
        return EQUAL;
    }
}
void ItemType::initialize(int number)
{
    value = number;
}
void ItemType::printItem()
{
    cout<< value << " ";
}

