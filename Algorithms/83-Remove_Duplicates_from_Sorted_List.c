/*
 * Given a sorted linked list, delete all duplicates such that each element appear only once.
 *
 * For example,
 * Given 1->1->2, return 1->2.
 * Given 1->1->2->3->3, return 1->2->3. 
 */

#include <stdio.h>

struct ListNode {
	int val;
	struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head){
	struct ListNode* node = head;

	while(node!=NULL && node->next!=NULL){
		if(node->next->val==node->val){
			node->next = node->next->next;
		}else{
			node = node->next;
		}
	}

	return head;
}

int main(void){
	struct ListNode head = {1, NULL};
	struct ListNode next = {2, NULL};
	struct ListNode *test = &head;
	test->next = &next;

	test = deleteDuplicates(test);

	while(test!=NULL){
		printf("%d\n", test->val);
		test = test->next;
	}

	return 0;
}
