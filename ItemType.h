#ifndef ITEMTYPE_H
#define ITEMTYPE_H


//const int MAX_ITEMS = 5;
enum RelationType{LESS, GREATER, EQUAL};

class ItemType
{
    public:
        ItemType();
        //~ItemType();
        RelationType comparedTo(ItemType) const;
        void initialize(int number);
        void printItem();

    protected:

    private:
        int value;
};

#endif // ITEMTYPE_H
