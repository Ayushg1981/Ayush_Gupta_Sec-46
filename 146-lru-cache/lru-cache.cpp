class LRUCache {
public:
    class Node {
        public:
            int key;
            int val;
            Node *next;
            Node *prev;
            Node(int _key,int _val){
                key=_key;
                val=_val;
            }
    };
    Node *head=new Node(-1,-1);
    Node *tail=new Node(-1,-1);

    int cap;
    unordered_map<int,Node*>mp;

    void addNode(Node *node){
        Node *nextNode=head->next;
        head->next=node;
        nextNode->prev=node;
        node->next=nextNode;
        node->prev=head;
    }

    void deleteNode(Node *node){
        Node* prevNode=node->prev;
        Node* nextNode=node->next;
        prevNode->next=nextNode;
        nextNode->prev=prevNode;
    }
    LRUCache(int capacity) {
        cap=capacity;
        head->next=tail;
        tail->prev=head;
    }
    
    int get(int key) {
        if(mp.find(key)!=mp.end()){
            Node *node=mp[key];
            int res=node->val;
            mp.erase(key);
            deleteNode(node);
            addNode(node);
            mp[key]=head->next;
            return res;
        }   
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key)!=mp.end()){
            Node *node=mp[key];
            mp.erase(key);
            deleteNode(node);
        }
        if(mp.size()>=cap){
            mp.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key,value));
        mp[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */