

#include <string>
#ifndef ORDERS_H
#define ORDERS_H


class Order {
public:
    void setIdOrder(int temp);
    void setIdCustomer(int temp);
    void setIdWorker(int temp);
    void setIdAdmin(int temp);
    void setPrice(int temp);
    void setCost(int temp);
    void setNumberCabinet(int temp);
    void setName(std::string temp);
    void setGroupNameOrders(std::string temp);

    int getIdOrder();
    int getIdCustomer();
    int getIdWorker();
    int getIdAdmin();
    int getPrice();
    int getCost();
    int getNumberCabinet();
    std::string getName();
    std::string getGroupNameOrders();

private:
    int idOrder;
    int idCustomer;
    int idWorker;
    int idAdmin;
    std::string name;
    std::string groupNameOrders;
    int price;
    int cost;
    int numberCabinet;

};


#endif
 

