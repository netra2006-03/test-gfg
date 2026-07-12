/*
class Node {
  public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        if(head==NULL){
            head = new Node(x);
            return head;
        }
        Node* temp;
        
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next= new Node(x);
        return head;
    }
};