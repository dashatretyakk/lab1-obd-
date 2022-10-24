

#include "order.h"

void Order::setIdOrder(int temp) {
    this->idOrder = temp;
}

void Order::setIdCustomer(int temp) {
    this->idCustomer = temp;
}

void Order::setIdWorker(int temp) {
    this->idWorker = temp;
}

void Order::setIdAdmin(int temp) {
    this->idAdmin = temp;
}

void Order::setPrice(int temp) {
    this->price = temp;
}

void Order::setCost(int temp) {
    this->cost = temp;
}

void Order::setNumberCabinet(int temp) {
    this->numberCabinet = temp;
}

void Order::setName(std::string temp) {
    this->name = temp;
}

void Order::setGroupNameOrders(std::string temp) {
    this->groupNameOrders = temp;
}

int Order::getIdOrder() {
    return this->idOrder;
}

int Order::getIdCustomer() {
    return this->idCustomer;
}

int Order::getIdWorker() {
    return this->idWorker;
}

int Order::getIdAdmin() {
    return this->idAdmin;
}

int Order::getPrice() {
    return this->price;
}

int Order::getCost() {
    return this->cost;
}

int Order::getNumberCabinet() {
    return this->numberCabinet;
}

std::string Order::getName() {
    return this->name;
}

std::string Order::getGroupNameOrders() {
    return this->groupNameOrders;
}
