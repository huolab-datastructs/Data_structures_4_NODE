#pragma once
#include "../../C/UTILITY.H"
typedef char Node_entry;

class Node {
public:
//  data members
   Node_entry entry;
   Node *next;

//  constructors
   Node();
   Node(Node_entry item, Node *add_on = NULL);
};
