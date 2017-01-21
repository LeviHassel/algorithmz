#include "treeOps.h"
#include <iostream>
using namespace std;

int main(){
  MyTree tree;
  tree.insert( 36 );
  tree.insert( 19 );
  tree.insert( 35 );
  tree.deleteNode( 19 );
  tree.deleteNode( 39 );
  tree.deleteNode( 39 );
  tree.printPreorder();
  cout << endl;
  tree.printInorder();
  cout << endl;
  tree.printPostorder();
  cout << endl;
  return 0;
}
