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
    std::cout << "Hello world!" << std::endl;
    linked_list list;
    list.insert(5, 3);
    list.insert(5, 3);
    list.insert(5, 3);
    list.insert(5, 3);
    list.print();
    return 0;
}

