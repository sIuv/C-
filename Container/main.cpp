/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sluv
 *
 * Created on February 13, 2016, 12:20 PM
 */

/* #include <cstdlib> */
#include <iostream>
#include "list.h"

using namespace std;


int main(int argc, char** argv) {
    std::cout << "Linked list v1.0" << std::endl;
    linked_list list;
    std::cout << "is_empty(): " << list.is_empty() << std::endl;
    list.insert(1, 0);
    std::cout << "is_empty(): " << list.is_empty() << std::endl;
    //TODO: 1 shall be first not 0.
    list.insert(2, 0);
    list.insert(3, 0);
    list.insert(4, 0);
    list.insert(99, -1);
    list.insert(999, -1);
    list.insert(666, 1);
    list.insert(666, 99);
    list.insert(666, 99);
    list.insert(666, 99);
    std::cout << "Print reverse!" << std::endl;
    list.print_reverse();
    std::cout << "size(): " << list.size() << std::endl;
    list.print();
    list.remove(3);
    std::cout << "Remove 3" << std::endl;
    std::cout << "size(): " << list.size() << std::endl;
    list.print();
    list.remove(1);
    std::cout << "Remove 1" << std::endl;
    list.print();
    std::cout << "size(): " << list.size() << std::endl;
    std::cout << "Remove " << list.size() << std::endl;
    list.remove(list.size());
    list.print();
    std::cout << "size(): " << list.size() << std::endl;
    std::cout << "copy list to list2" << std::endl;
    linked_list list2 = list;
    list2.print();
    return 0;
}

