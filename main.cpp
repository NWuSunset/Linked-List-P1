#include <iostream>
#include <cstring>
#include "Node.h"

using namespace std;

int main() {
  //do stuff
  Node* node = new Node;
  Node* nextNode = new Node;

  cout << node->getNext() << endl;
  node->setNext(nextNode);
  cout << "Next node: " << node->getNext() << endl;
  cout << "Student: " << node->getStudent() << endl;

  return 0;
}
