#include "../../C/UTILITY.H"
#include "../../C/UTILITY.CPP"
#include "NODE.H"
 
void main()
{
 
   Node first_node('a'); //  Node first_node stores data 'a'.
   Node *p0 = &first_node;  //  p0 points to first_Node.
   Node *p1 = new Node('b'); //  A second node storing 'b' is created.
   p0->next = p1;  //  The second Node is linked after first_node.
   Node *p2 = new Node('c', p0);  //  A third Node storing 'c' is created.
       //  The third Node links back to the first node, *p0.
   p1->next = p2;  //  The third Node is linked after the second Node.
 
   cout << p0 << " " << p1 << " " << p2 << " " << "\n";
   cout << p0->entry << " " << p1->entry << " " << p2->entry << " " << "\n";
   cout << p0->next << " " << p1->next << " " << p2->next << " " << "\n";
 
}
