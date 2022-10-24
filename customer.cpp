#include "customer.h"

void Customer::setFirstName(std::string temp) {
    this->firstName = temp;
}

void Customer::setLastName(std::string temp) {
    this->lastName = temp;
}

void Customer::setIdCustomer(int temp) {
    this->idCustomer = temp;
}

void Customer::setSurname(std::string temp) {
    this->surname = temp;
}

void Customer::setPhoneNumber(std::string temp) {
    this->phoneNumber = temp;
}

void Customer::setAddress(std::string temp) {
    this->address = temp;
}

int Customer::getIdCustomer() {
    return this->idCustomer;
}

std::string Customer::getFirstName() {
    return this->firstName;
}

std::string Customer::getLastName() {
    return this->lastName;
}

std::string Customer::getSurname() {
    return this->surname;
}

std::string Customer::getPhoneNumber() {
    return this->phoneNumber;
}

std::string Customer::getAddress() {
    return this->address;
}

Order Customer::createOrder() {
    Order order;
    order.setIdCustomer(getIdCustomer());
    order.setIdOrder(orders.size()+1);
    std::string tempText;
    int tempValue;
    std::cout<<"Input name: ";
    std::cin>>tempText;
    order.setName(tempText);
    std::cout<<std::endl;
    std::cout<<"Input group orders: ";
    std::cin>>tempText;
    order.setGroupNameOrders(tempText);
    std::cout<<std::endl;
    std::cout<<"Input cost: ";
    std::cin>>tempValue;
    order.setCost(tempValue);
    std::cout<<std::endl;
    std::cout<<"Input price: ";
    std::cin>>tempValue;
    order.setPrice(tempValue);
    std::cout<<std::endl;
    std::cout<<"Input number cabinet: ";
    std::cin>>tempValue;
    order.setNumberCabinet(tempValue);
    std::cout<<std::endl;
    std::cout<<"Input id admin: ";
    std::cin>>tempValue;
    order.setIdAdmin(tempValue);
    std::cout<<std::endl;
    std::cout<<"Input id worker: ";
    std::cin>>tempValue;
    order.setIdWorker(tempValue);
    std::cout<<std::endl;
    return order;
}

void Customer::addNewOrder() {
    orders.push_back(createOrder());
}

void Customer::printOrders() {
    for(auto item: orders){
        std::cout<<item.getIdCustomer()<<std::endl;
        std::cout<<item.getIdOrder()<<std::endl;
        std::cout<<item.getIdAdmin()<<std::endl;
        std::cout<<item.getIdWorker()<<std::endl;
        std::cout<<item.getName()<<std::endl;
        std::cout<<item.getGroupNameOrders()<<std::endl;
        std::cout<<item.getCost()<<std::endl;
        std::cout<<item.getPrice()<<std::endl;
        std::cout<<item.getNumberCabinet()<<std::endl;
    }
}


