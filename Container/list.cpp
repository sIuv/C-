/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "list.h"

using namespace std;

linked_list::linked_list() {
  head = NULL;
  tail = NULL;
};

linked_list::~linked_list() {
  node_t* tmp = this->head;
  node_t* next = NULL;
  while(next != NULL) {
    next = tmp->next;
    delete tmp;
    tmp = next;
  }
  tmp = NULL;
  next = NULL;
};

void linked_list::insert(double value, size_t pos) {
  node_t* newnode = new node_t;
  newnode->value = value;

  if (head == NULL) {
    newnode->next = NULL;
    head = newnode;
    tail = newnode;
  }
  else {
    head->next = newnode;
    head = newnode;
  }
};

size_t linked_list::size() const {
  node_t* tmpnode = tail;
  size_t counter = 0;
  while (tmpnode != NULL) {
    counter++;
    tmpnode = tmpnode->next;
  }
  return counter;
};

void linked_list::print() const {
  node_t* tmpnode = tail;
  while (tmpnode != NULL) {
    std::cout << tmpnode->value << std::endl;
    tmpnode = tmpnode->next;
  }
};
