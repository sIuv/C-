/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   list.h
 * Author: sluv
 *
 * Created on February 13, 2016, 12:22 PM
 */
#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <cstring>

using namespace std;

class linked_list{
 public:
  linked_list();
/* linked_list(const linked_list& src);*/

  ~linked_list();

  /* linked_list& operator=(const linked_list& rhs); */

  // adds elementos to the back.
  /* linked_list& operator+=(const linked_list& rhs); */

  // inserting elements
   void insert(double value, size_t pos);
  // in front
  /* void push_front(double value); */
  // in back
  /* void push_back(double value); */
  // accessing elements
  /* double front() const; */
  /* double back() const; */
  /* double at(size_t pos) const; */

  // removing elements 
  void remove(size_t pos);
  // remove and access
  /* double pop_front(); */
  /* double pop_back(); */

  // informational
  size_t size() const;
  bool is_empty() const; 

  /* // output */
  void print() const;
  void print_reverse() const;

 private:
  struct node_t{
/*node_t(double value, node_t* next=0, node_t* prev=0);*/
    double value;
    node_t* next;
    node_t* prev;
  };
  node_t* head;
  node_t* tail;
};

#endif /* LIST_H */

