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

void reverse_linked_list(Node** head_pointer){

	Node* prev_node = NULL;
	Node* next_node = NULL;
	Node* current = *head_pointer;


	while(current){

		next_node = current->next;
		current->next = prev_node;
		prev_node = current;
		current = next_node;
	}
	*head_pointer = prev_node;

}


bool loop_detect_reverse(Node* head_pointer){

    Node* temp = head_pointer;
    reverse_linked_list(&head_pointer);

    if(temp == head_pointer){
        reverse_linked_list(&temp);
        return true;
    }
    else{
        reverse_linked_list(&temp);
        return false;
    }

}

int main(){

    Node* head = NULL;
    push(&head, 5);
	push(&head, 4);
	push(&head, 3);
	push(&head, 2);
	// push(&head, 1);

    // head->next->next->next->next = head;

    bool val = loop_detect_reverse(head);


    cout << val << endl;

    return 0;
}