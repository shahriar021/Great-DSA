class MyLinkedList {
    private :
     struct Node{

        int val;
        Node* next;
        Node(int val){
           this->val=val;
           this->next=nullptr;
        }

    };

    Node* head;
    int size;

public:
    MyLinkedList() {
        head=nullptr;
        size=0;
    }
    
    int get(int index) {

        if(index<0 || index>=size){
            return -1;
        }

        Node* cur=head;

        for(int i=0;i<index;i++){
            cur=cur->next;
        }

        return cur->val;
        
    }
    
    void addAtHead(int val) {

        Node* newNode = new Node(val);

        Node* cur=head;

        newNode->next=cur;
        head=newNode;
        size++;
        
    }
    
    void addAtTail(int val) {

        Node* newNode = new Node(val);

        Node* cur=head;
        if(!head){
            head=newNode;
        }else{
            while(cur->next!=nullptr){
            cur=cur->next;
        }
        cur->next=newNode;
        }

        size++;
        
    }
    
    void addAtIndex(int index, int val) {

        Node* newNode = new Node(val);
        Node* cur=head;

        if(index<0 || index>size){
            return;
        }
        if(index==0){
            addAtHead(val);
            return;
        }
        else{
                for(int i=0;i<index-1;i++){
                    cur=cur->next;
                }
            newNode->next=cur->next;
            cur->next=newNode;
        }
        size++;
        
    }
    
    void deleteAtIndex(int index) {

        Node* temp=head;

      


        if(index<0 || index>=size){
            return;
        }

        if(index==0){
            temp=head;
            head=head->next;
        }else{
            Node* cur=head;
            for(int i=0;i<index-1;i++){
            cur=cur->next;
        }
        temp=cur->next;
        cur->next=temp->next;
        }
        delete temp;
        size--;
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */