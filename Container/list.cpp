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

linked_list& linked_list::operator=(const linked_list& rhs) {
  node_t* tmp = this->head;
  node_t* next = NULL;
  while(next != NULL) {
    next = tmp->next;
    delete tmp;
    tmp = next;
  }
  tail = NULL;
  head = NULL;
  node_t* listToCopy = rhs.tail;
  while (listToCopy != NULL) {
    insert(listToCopy->value, -1);
    listToCopy = listToCopy->next;
  }
  return *this;
}

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

void linked_list::remove(size_t pos) {
  node_t* cursor = tail;
  node_t* before_cursor = NULL;
  for(size_t i=1; i < pos; i++) {
    before_cursor = cursor;
    cursor = cursor->next;
  }
  if (pos == size()) {
    before_cursor->next = NULL;
    head = before_cursor;
  } else if(pos == 1) {
    tail = cursor->next;
  } else {
    before_cursor->next = cursor->next;
  }
  delete cursor;
}


void linked_list::insert(double value, size_t pos) {
  node_t* newnode = new node_t;
  newnode->value = value;

  if (head == NULL) {
    newnode->next = NULL;
    head = newnode;
    tail = newnode;
  }
  else {
    if (pos >= size()) {
      head->next = newnode;
      head = newnode;
    }
    else if (pos == 0) {
      newnode->next=tail;
      tail = newnode;
    }
    else if (pos < size()) {
      node_t* tmpnode = tail;
      for (size_t i=1; i < pos; i++) {
	tmpnode = tmpnode->next;
      }
      newnode->next = tmpnode->next;
      tmpnode->next = newnode;
    }
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

bool linked_list::is_empty() const {
  return head == NULL;
  }

void linked_list::print() const {
  node_t* tmpnode = tail;
  for (size_t i=1; i <= size(); i++) {
    std::cout << i << ": " << tmpnode->value << std::endl;
    tmpnode = tmpnode->next;
  }
};

void linked_list::print_reverse() const {
  node_t* node = tail;
  node_t* revnode = NULL;
  while (node != NULL) {
    node_t* tmpnode = new node_t;
    tmpnode->value = node->value;
    tmpnode->next = revnode;
    node = node->next;
    revnode = tmpnode;
  }
  for (size_t i=1; i < size(); i++) {
    std::cout << i << ": " << revnode->value << std::endl;
    revnode = revnode->next;
  }
};
