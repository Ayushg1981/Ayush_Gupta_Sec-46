#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node (int val){
        this->val=val;
        this->next=NULL;
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
            head=temp;
        }
        size++;
    }
    void InsertAtTail(int val){ 
        Node* temp= new Node(val);
        if(size==0) head=tail=temp;
        else{
            tail->next=temp;
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
            size++;
        }
    }
    void DeleteAtHead(){
        if(size==0) cout<<"No Element To delete"<<endl;
        else{
            head=head->next;
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
            size--;
        }
    }
    int getsize(){
        return size;
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
    void removeMid(){
        DeleteAt(getsize()/2);
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




// Given the head of a linked list and an integer val , remove all the 
//nodes of the linked list that has Node->val == val , and return the new head.
//Input: head = [1,2,6,3,4,5,6], val = 6
//Output: [1,2,3,4,5]
// #include<iostream>
// using namespace std;
// class Node{
// public:
//     int val;
//     Node* next;
//     Node (int val){
//         this->val=val;
//         this->next=NULL;
//     }
// };
// void display(Node* a){
//     Node* temp=a;
//     while(temp!=NULL){
//         cout<<temp->val<<" ";
//         temp=temp->next;
//     }
//     cout<<endl;
// }
// class Solution {
// public:
//     Node* removeElements(Node* head, int val) {
//     Node *curr = head;
//     while (curr and curr->val == val) {
//         curr = curr->next;
//     }
//     head = curr;
//     while (curr) {
//         if (curr->next and curr->next->val == val)
//             curr->next = curr->next->next;
//         else
//             curr = curr->next;
//     }
//     return head;
//     }
// };
// int main(){
//     Node* a=new Node(1);
//     Node* b=new Node(2);
//     Node* c=new Node(1);
//     Node* d=new Node(4);
//     Node* e=new Node(5);
//     a->next=b;
//     b->next=c;
//     c->next=d;
//     d->next=e;
//     Solution x;
//     a=x.removeElements(a,1);
//     display(a);
// }




//Find the length of loop in Cycle of Linked L
// int findLength() {
//     node *fast = head->next;
//     node *slow = head;
//     int fl = 0;
//     while(fast and fast->next) {
//         if(fast == slow) {
//             fl = 1;
//             break;
//         }
//         fast = fast->next->next;
//         slow = slow->next;
//     }
//     if(fl == 0) return 0;
//     int cnt = 1;
//     slow = slow->next;
//     while(slow != fast) {
//         cnt++;
//         slow = slow->next;
//     }
//     return cnt;
// }