
#include <stdio.h>
struct ITEM1{
    int itemcode;
    char name[50];
    int qty;
    float price;
};
struct ITEM2{
    int itemcode;
    char name[50];
    int qty;
    float price;
};
struct ITEM3{
    int itemcode;
    char name[50];
    int qty;
    float price;
};
int main()
{
    struct ITEM1 i1={101,"item1",100,55.00};
    struct ITEM2 i2={102,"item2",50,10.50};
    struct ITEM3 i3={103,"item3",30,20.10};
int totalamount=i1.qty*i1.price+i2.qty*i2.price+i3.qty*i3.price;
printf("total amount of worth 3 itmes is=%d",totalamount);
}

