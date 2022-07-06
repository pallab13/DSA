#include <iostream>
#include <queue>

using namespace std;

#define Size(arr)  (sizeof(arr)/sizeof(*arr) ) 

class Node{
public:
	int data;
	Node* next;
	Node* down;
};



Node* createList(int arr[], int size){

	Node* head = NULL;
	Node* temp1 = NULL;
	Node* temp2 = NULL;
	for(int i = 0; i < size; i++ ){
		if(head == NULL){
			temp1 = new Node();
			temp1->data = arr[i];
			temp1->next = NULL;
			head = temp1;
			
		}
		else{
			temp2 = new Node();
			temp2->data = arr[i];
			temp2->next = NULL;
			temp1->next = temp2;
			temp1 = temp1->next;
		}

		temp1->down = NULL;

	}

	return head;

}

Node* createListWhole(){
	int arr1[] = {10, 5, 12, 7, 11 };
	int arr2[] = {4, 20, 13 };
	int arr3[] = {17, 6 };
	int arr4[] = {2 };
	int arr5[] = {16 };
	int arr6[] = {3 };
	int arr7[] = {9, 8 };
	int arr8[] = {19, 15 };

	Node* head1 = createList(arr1, Size(arr1));
	Node* head2 = createList(arr2, Size(arr2));
	Node* head3 = createList(arr3, Size(arr3));
	Node* head4 = createList(arr4, Size(arr4));
	Node* head5 = createList(arr5, Size(arr5));
	Node* head6 = createList(arr6, Size(arr6));
	Node* head7 = createList(arr7, Size(arr7));
	Node* head8 = createList(arr8, Size(arr8));
	
	head1->down = head2;
	head1->next->next->next->down = head3;
	head2->next->down = head4;
	head2->next->next->down = head5;
	head3->down = head7;
	head5->down = head6;
	head7->down = head8;
	

	return head1;
	

}

void flattenList(Node* head){
	queue <Node*> q;
	Node* temp = head;
	Node* temp_new = NULL;
	Node* tail = head;
	while(tail->next){
		tail = tail->next;
	}

	if(temp == NULL){
		return;
	}

	while(temp != tail){
		if(temp->down){
			tail->next = temp->down;
			temp_new = temp->down;

			while(temp_new->next){
				temp_new = temp_new->next;
			}
			tail = temp_new;

		}

		temp = temp->next;

	}



}

void printList(Node* head){
	Node* temp = head;
	while(temp){
		cout << temp->data << " ";
		temp = temp->next;
	}
}


int main(){

	Node *head = NULL;
    head = createListWhole();
    flattenList(head);
    printList(head);
    return 0;
	


	return 0;
}