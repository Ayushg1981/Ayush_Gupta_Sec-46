//Stack linkedList implementation
#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        next=NULL;
    }
};
class Stack{
public:
    Node* head;
    int size;
    Stack(){
        head=NULL;
        size=0;
    }
    void push(int val){
        Node* temp=new Node(val);
        temp->next=head;
        head=temp;
        size++;
    }
    void pop(){
        if(head==NULL){
            cout<<"segmentation error"<<endl;
            break;
        }
        head=head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"segmentation error"<<endl;
            break;
        }
        return head->val;
    }
    int size(){
        return size+1;
    }
    void print(Node* head){// to print in right order
        if(head) return;
        print(head->next);
        cout<<head->val<<" ";
    }
    void display(){
        Node* temp=head;
        print(temp);
        cout<<endl;
    }
}
int main(){
	
}

