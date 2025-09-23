#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
    Node (int val){
        this->val=val;
        next=NULL;
        prev=NULL;
    }
};
class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head=tail=NULL;
        size=0;
    } 
    void InsertAtHead(int val){
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            temp->next=head;
            head->prev=temp;//extra
            head=temp;
        }
        size++;
    }
    void InsertAtTail(int val){ //if tail is not given we can use while loop to the end
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
            temp->prev=tail;
            tail=temp;
        }
        size++;
    }
    void InsertAt(int idx,int val){
        if(idx<0 || idx>size) cout<<"Invalid Index"<<endl;
        else if(idx==0) InsertAtHead(val);
        else if(idx==size) InsertAtTail(val);
        else{
            Node* t=new Node(val);
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            t->next=temp->next;
            temp->next=t;
            t->prev=temp;//extra
            t->next->prev=t;//extra
            size++;
        }
    }
    void DeleteAtHead(){
        if(size==0) cout<<"No Element To delete"<<endl;
        else{
            head=head->next;
            head->prev=NULL;//change
            size--;
        }
    }
    void DeleteAtTail(){
        if(size==0) cout<<"No Element To delete"<<endl;
        else{
            Node* temp=head;
            while(temp->next!=tail){
                temp=temp->next;
            }
            temp->next=NULL;
            tail=temp;
            size--;
        }
    }
    void DeleteAt(int idx){
        if(idx<0 || idx>=size) cout<<"Invalid Index"<<endl;
        else if(idx==0) DeleteAtHead();
        else if(idx==size-1) DeleteAtTail();
        else{
            Node* temp=head;
            for(int i=1;i<=idx-1;i++){
                temp=temp->next;
            }
            temp->next=temp->next->next;
            temp->next->prev=temp;//change
            size--;
        }
    }
    int get(int idx){
        Node* temp=head;
        for(int i=0;i<idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main(){
    LinkedList a;
    a.InsertAtHead(10);
    a.display();
    a.InsertAtTail(20);
    a.display();
    a.InsertAt(1,80);
    a.display();
    a.InsertAt(3,50);
    a.InsertAt(0,70);
    int b=a.get(4);
    a.display();
    cout<<b<<endl;
    a.DeleteAt(1);
    a.display();
    a.DeleteAtHead();
    a.DeleteAtTail();
    a.display();
}