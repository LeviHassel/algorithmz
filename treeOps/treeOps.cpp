#include "treeOps.h"
#include <iostream>
#include <cmath>
using namespace std;

MyTree::MyTree(){
  value = 0;
  parent = NULL;
  left = NULL;
  right = NULL;
}

MyTree::MyTree( const MyTree& other){
  delete parent;
  delete left;
  delete right;
  value = other.value;
  parent = other.parent;
  left = other.left;
  right = other.right;
}

void MyTree::operator=( const MyTree& other){
  delete parent;
  delete left;
  delete right;
  value = other.value;
  parent = other.parent;
  left = other.left;
  right = other.right;
}

MyTree::~MyTree(){
  delete left;
  left = 0;
  delete right;
  right = 0;
}

MyTree* MyTree::getParent(){
  return parent;
}

MyTree* MyTree::getLeft(){
  return left;
}

MyTree* MyTree::getRight(){
  return right;
}

int MyTree::getValue(){
  return value;
}

void MyTree::setParent( MyTree* par ){
  parent = par;
}

void MyTree::setLeft( MyTree* lft ){
  left = lft;
}

void MyTree::setRight( MyTree* rght ){
  right = rght;
}

void MyTree::setValue( int val ){
  value = val;
}

void MyTree::insert( int val ){
  if( !getValue() ){
    setValue( val );
  }
  else if( val < getValue() && !getLeft() ){
    left = new MyTree();
    left->setParent( this );
    left->setValue( val );
  }
  else if( val > getValue() && !getRight() ){
    right = new MyTree();
    right->setParent( this );
    right->setValue( val );
  }
  else if( val < getValue() ){
    left->insert( val );
  }
  else{
    right->insert( val );
  }

  if( getLeft() && getRight() && left->getHeight() > ( right->getHeight() + 2 ) || !getRight() && getLeft() && left->getHeight() > 2 ){
    rotateRight();
  }

  if( getLeft() && getRight() && right->getHeight() > ( left->getHeight() + 2 ) || !getLeft() && getRight() && getRight()->getHeight() > 2 ){
    rotateLeft();
  }
}

void MyTree::printPreorder(){
    if( getValue() ){
        cout << getValue();
    }
    if( getLeft() && (left->getValue() != 0) ){
        cout << ",";
        getLeft()->printPreorder();
    }
    if( getRight() && (right->getValue() != 0) ){
        cout << ",";
        getRight()->printPreorder();
    }
}

void MyTree::printInorder(){
    if( getLeft() && (left->getValue() != 0) ){
        getLeft()->printInorder();
        cout << ",";
    }
    if( getValue() ){
        cout << getValue();
    }
    if( getRight() && (right->getValue() != 0) ){
        cout << ",";
        getRight()->printInorder();
    }
}

void MyTree::printPostorder(){
    if( getLeft() && (left->getValue() != 0) ){
        getLeft()->printPostorder();
        cout << ",";
    }
    if( getRight() && (right->getValue() != 0) ){
        getRight()->printPostorder();
        cout << ",";
    }
    if( getValue() ){
        cout << getValue();
    }
}

int MyTree::getHeight(){
  if( getLeft() && !getRight() ){
    return getLeft()->getHeight() + 1;
  }
  else if( getRight() && !getLeft() ){
    return getRight()->getHeight() + 1;
  }
  else if( getRight() && getLeft() ){
    return fmax( getRight()->getHeight() , getLeft()->getHeight() ) + 1;
  }
  else if( getValue() && !getLeft() && !getRight() ){
    return 1;
  }
  return 0;
}

/* Rotate a MyTree to the left */
void MyTree::rotateLeft() {
    MyTree *ogLeft = left;
    MyTree *ogRight_left = right->getLeft();
    MyTree *ogRight_right = right->getRight();
    int ogRoot_val = value;

    setValue(right->getValue());
    setRight(ogRight_right);
    left = new MyTree();
    left->setParent(this);
    left->setValue(ogRoot_val);
    left->setRight(ogRight_left);
    left->setLeft(ogLeft);
}

/* Rotate a MyTree to the right */
void MyTree::rotateRight(){
    MyTree *ogRight = right;
    MyTree *ogLeft_left = left->getLeft();
    MyTree *ogLeft_right = left->getRight();
    int ogRoot_val = value;

    setValue(left->getValue());
    setLeft(ogLeft_left);
    right = new MyTree();
    right->setParent(this);
    right->setValue(ogRoot_val);
    right->setLeft(ogLeft_right);
    right->setRight(ogRight);
}

/* Recieves a number and (if it exists in the MyTree) delete it */
void MyTree::deleteNode( int key ){
	// If the current node is the key, delete it 
    if(getValue() == key){
        if((!getLeft()) && (!getRight())){
            setValue(0);
            setParent(0);
        }
        else if(!getLeft()) {
            setValue(right->getValue());
            right->deleteNode(value);
        }
        else if(!getRight()){
            setValue(left->getValue());
            left->deleteNode(value);
        }
        else if(getParent()){
            if((parent->getValue()) > value){
                if(!right->getLeft()){
                    setValue(right->getValue());
                    right->deleteNode(value);
                }
                else {
                    setValue(right->getLeft()->getValue());
                    right->getLeft()->deleteNode(value);
                }
            }
            else if((parent->getValue()) < value){
                if(!left->getRight()){
                    setValue(left->getValue());
                    left->deleteNode(value);
                }
                else {
                    setValue(left->getRight()->getValue());
                    left->getRight()->deleteNode(value);
                }
            }
        }
        else {
            if(!right->getLeft()){
                setValue(right->getValue());
                right->deleteNode(value);
            }
            else if(!right->getRight()){
                setValue(right->getLeft()->getValue());
                right->getLeft()->deleteNode(value);
            }
            else if(!left->getLeft()){
                setValue(left->getRight()->getValue());
                left->getRight()->deleteNode(value);
            }
            else if(!left->getRight()){
                setValue(left->getValue());
                left->deleteNode(value);
            }
            else {
                setValue(0);
                setRight(0);
                setLeft(0);
            }
        }
    }
	
	// If the key is smaller than the root's value, then it's in the left sub-tree (if it exists)
	else if( key < getValue() && getLeft() ){
        left->deleteNode(key);
    }
	
	// If the key is larger than the root's value, then it's in the right sub-tree (if it exists)
    else if( key > getValue() && getRight() ){
        right->deleteNode(key);
    }
}