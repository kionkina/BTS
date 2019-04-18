#include <iostream>

#include <string>
#include "BST.h"

BST::BST(){
  root = nullptr;
}

BST::~BST(){
  std::cout << "In the destructor\n";
  
}

void BST::insert(int data){
  Node *newNode = new Node(data);
  Node *r = root;
  if (r==nullptr){
    r = newNode;
    return;
  }
  
  bool done = false;

  while (!(done)){
  if (data < r->getData()){
    if (r->getRight() == nullptr){
    r->setRight(newNode);
    done = true;
    }
    else{
      r = r->getRight();
    }
  }

  if (r->getLeft() == nullptr){
    r->setLeft(newNode);
    done = true;
    return;
  }
  else {
    r = r->getLeft();
  }
}

}



std::string BST::getDebugString(){
  std::string s = "";
  return s;
}
