#include <stdlib.h>
#include <assert.h>

#include "list.h"
#include "common.h"

static uint16_t values[256];

typedef struct listitem *node;

//For an empty list, both member variables(prev & next) point to the head.

static void divide_half(node head, node *front, node *back){

	node slow;
	node fast;

	if(!list_empty(head->list) || !list_is_singular(head->list)){
		*a = original;
		*b = NULL;
	}
	else{
		slow = head;
		fast = original->next;

		while(fast != NULL){
			fast = fast->next;

			if(fast != NULL){
				slow = slow->next;
				fast = fast->next;
			}
		}
	}

	*front = head;
	*back = slow->next;
	slow->next = NULL;
		

}

node merge_list (node a, node b){

	node mergeList = NULL;

	if(!list_empty(a->list))

}

