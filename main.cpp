#include <iostream>
#include <cstring>
#include "Node.h"
#include "Student.h"

using namespace std;

int main() {

  Student* student = new Student;
   
  Node* node = new Node(student);
  Node* nextNode = new Node();


  //Testing that it works.
  cout << "Student Passing in: " << student << endl;
  cout << "Next Node passing in: " << nextNode << endl;
  cout << "Before setting next: " <<  node->getNext() << endl;
  node->setNext(nextNode);
  cout << "Next node (after setting next): " << node->getNext() << endl;
  cout << "Student in node: " << node->getStudent() << endl;

  return 0;
}
