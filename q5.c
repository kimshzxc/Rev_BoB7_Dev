#include <stdio.h>
#include <stdlib.h>

struct s1{
	int data;
	struct s1 *next;
};

struct s2{
	struct s1 *head;
	struct s1 *tail;
};


void list_init(struct s2 *node){
	node->tail = NULL;
	node->head = node->tail;
}

void list_add_to_tail(struct s2 *node, int num){
	if ( node->head == NULL){
		node->tail = malloc(16); 
		node->tail->data = num;
		node->tail->next = NULL;
		node->head = node->tail;
	}
	else {
		node->tail->next = malloc(16);
		node->tail->next->data = num;
		node->tail->next->next = NULL;
		node->tail = node->tail->next;
	}
}

void list_printall(struct s2 *node){
	struct s1 *node1 = node->head;

	while(node1 != NULL){
		printf("%d\n", node1->data);
		node1 = node1->next;
	}
}

int main(){
	struct s2 node1;
	list_init(&node1);
	list_add_to_tail(&node1, 1);
	list_add_to_tail(&node1, 2);
	list_add_to_tail(&node1, 3);
	list_printall(&node1);
	return 0;
}

