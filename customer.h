
#include <string>
#include <vector>
#include <iostream>
#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "order.h"
class Customer {
public:
    void setFirstName(std::string temp);
    void setLastName(std::string temp);
    void setSurname(std::string temp);
    void setPhoneNumber(std::string temp);
    void setAddress(std::string temp);
    void setIdCustomer(int temp);

    int getIdCustomer();
    std::string getFirstName();
    std::string getLastName();
    std::string getSurname();
    std::string getPhoneNumber();
    std::string getAddress();

    void addNewOrder();
    int getSizeOrderTable(){
        return orders.size();
    }
    void deleteOrder(int deleteValue){
        orders.erase(orders.begin()+deleteValue);
    }
    void printOrders();

private:
    Order createOrder();
    int idCustomer;
    std::string firstName;
    std::string lastName;
    std::string surname;
    std::string phoneNumber;
    std::string address;
    std::vector<Order> orders;
};


#endif
 

