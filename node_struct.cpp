#include <iostream>

using namespace std;

//a new data type defined before main()
struct Node
{
    int data;
    Node* next;
};

int main()
{
    Node* first = new Node;
    cout << "first = " << first << endl;
    cout << "first address = " << &first << endl; 
    first->data = 10;
    cout << "first->data = " << first->data << endl;
    //first->next = nullptr;
    first->next = new Node;
    cout << "2nd node addr: first->next = " << first->next << endl;

    //first->next: Node*
    //pointer to Node->member of Node
    first->next->data = 20;
    //address of the second Node
    first->next->next = nullptr;
    cout << "2nd node data: first->next->data = " << first->next->data << endl;

    return 0;
}