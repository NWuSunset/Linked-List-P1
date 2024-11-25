

class Node {
 public:
  Node(Student*); //Constructor that takes a Student pointer(will probably be used to add a student)
  ~Node();

  Node* getNext(); //get next Node pointer
  Student* getStudent(); //get student pointer
  void setNext(Node*); //set the next pointer to the corresponding node pointer

 private:
  Student* student;
  Node* next;
};

class Student {
 public:
  Student();
};
