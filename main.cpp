#include <iostream>
#include "customer.h"
#include <vector>

Customer createCustomer(){
    std::cout <<"Create customer"<<std::endl;
    std::string tempText;
    Customer customer;
    int tempValue;
    std::cout<<"Input name: ";
    std::cin>>tempText;
    customer.setFirstName(tempText);
    std::cout<<std::endl;
    std::cout<<"Input last name: ";
    std::cin>>tempText;
    customer.setLastName(tempText);
    std::cout<<std::endl;
    std::cout<<"Input surname: ";
    std::cin>>tempText;
    customer.setSurname(tempText);
    std::cout<<std::endl;
    std::cout<<"Input address: ";
    std::cin>>tempText;
    customer.setAddress(tempText);
    std::cout<<std::endl;
    std::cout<<"Input phone number: ";
    std::cin>>tempText;
    customer.setPhoneNumber(tempText);
    std::cout<<std::endl;
    return customer;
}
int main() {
    std::vector<Customer> customers;
    bool flag = true;
    while (flag){
        int choice;
        int choiceCustomer, choiceOrder;
        std::cout<<"Input choice:\n1.Exit\n2.Add new customer\n3.Add new order\n4.Delete order\n5.Print orders\n"
        <<std::endl;
        std::cin >> choice;
        switch (choice) {
            case 1:
                flag = false;
                break;
            case 2:
                customers.push_back(createCustomer());
                customers[customers.size()].setIdCustomer(customers.size()+1);
                break;
            case 3:
                std::cout<<"Choice customer id"<<std::endl;
                for(int i = 0; i<customers.size();i++){
                    std::cout<<i<<"\t";
                }
                std::cout<<std::endl;
                std::cin>>choiceCustomer;
                customers[choiceCustomer-1].addNewOrder();
                break;
            case 4:
                std::cout<<"Choice customer id"<<std::endl;
                for(int i = 0; i<customers.size();i++){
                    std::cout<<i<<"\t";
                }
                std::cout<<std::endl;
                std::cin>>choiceCustomer;
                std::cout<<"Choice order id"<<std::endl;
                for(int i = 0; i<customers[choiceCustomer-1].getSizeOrderTable();i++){
                    std::cout<<i<<"\t";
                }
                std::cout<<std::endl;
                std::cin>>choiceOrder;
                customers[choiceCustomer-1].deleteOrder(choiceOrder-1);
                break;
            case 5:
                std::cout<<"Choice customer id"<<std::endl;
                for(int i = 0; i<customers.size();i++){
                    std::cout<<i<<"\t";
                }
                std::cout<<std::endl;
                std::cin>>choiceCustomer;
                customers[choiceCustomer-1].printOrders();
                break;
        }

    }
    return 0;
}