#ifndef TREEOPS_H
#define TREEOPS_H
using namespace std;

class MyTree{
 public:
  MyTree(void);
  MyTree(const MyTree&);
  ~MyTree(void);
  void operator=(const MyTree&);
  MyTree* getParent(void);
  MyTree* getLeft(void);
  MyTree* getRight(void);
  int getValue(void);
  void setParent(MyTree*);
  void setLeft(MyTree*);
  void setRight(MyTree*);
  void setValue(int);
  void insert(int);
  void printPreorder(void);
  void printInorder(void);
  void printPostorder(void);
  void rotateLeft(void);
  void rotateRight(void);
  void deleteNode(int);
  int getHeight();
  
 private:
  int value;
  MyTree* parent;
  MyTree* left;
  MyTree* right;
};

#endif
