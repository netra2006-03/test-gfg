/* Structure of linked list Node
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    int getCount(Node* head) {
        int length=1;
        // Code here
        if(head==NULL){
            return 0;
        }
        else if(head->next==NULL){
            return 1;
        }
        else{
            Node *p=head;
            while(p->next!=NULL){
                p=p->next;
                length++;
            }
        }
        return length;
    }
};