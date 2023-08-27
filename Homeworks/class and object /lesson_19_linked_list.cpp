#include<iostream>
#include<iostream>
using namespace std;

template <class T>
class Node{
public:
    T value;
    Node* next;
    Node(){
        cout << "Enter the value: ";
        cin >> value;
    }//default constructor
    ~Node(){
        delete next;
    }
    void output(){
        cout << "nodal value is : " << value << endl;
    }
};//class node

template <class T>
class LinkedList{
private:
    Node<T>* head;
    int length; //length of the linked list
public:
    LinkedList(){
        length = 0;
        head = NULL;
    }//defalut constructon
    ~LinkedList(){
        while(head!=NULL){
            Node<T> *p = head;
            head = head->next;
            if(p!=NULL) delete p; 
        }
    }
    void output(){
        Node<T> *p = head;
        while(p!= NULL){
            p->output();
            p = p->next;
        } //end iof while loop
    }
    // insert a new node at the end of linked list
    void insert(){
        //case 1: the linked list is empty
        if(length == 0){
            head = new Node<T>();
            length = 1;
        }
        else {
            //case 2: the linked list is not empty
            //case 2.1 : locate the last node in the linked list
            Node<T> *p = head;
            while(p->next != NULL) p = p->next;
            //case 2.1 : add the new node
            p->next = new Node<T>(); length++;

        } 

    }
    // void delete(){

    // }

};
int main(){
    LinkedList<int> andrew;
    andrew.insert();
    andrew.insert();
    andrew.insert();
    andrew.output();




    return 0;
}