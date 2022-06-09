#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

void push(Node** head_pointer, int data){

	Node* temp = new Node();
	temp->data = data;
	temp->next = *head_pointer;
	*head_pointer = temp;

}



int loop_type_detect(Node* head_pointer){

    Node* slow_pointer = NULL;
    Node* fast_pointer = NULL;
    slow_pointer = head_pointer;
    fast_pointer = head_pointer;

    while(fast_pointer->next != NULL && fast_pointer->next->next != NULL){

        if( head_pointer == fast_pointer->next  || head_pointer == fast_pointer->next->next ){
            return 2;
        }

        slow_pointer = slow_pointer->next;
        fast_pointer = fast_pointer->next->next;

        if(slow_pointer == fast_pointer){
            return 1;
        }

    }

    return 0;



}

int main(){

    Node* head = NULL;
    push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	// push(&head, 1);

    head->next->next->next = head->next;
    int val = loop_type_detect(head);


    cout << val << endl;

    return 0;
}