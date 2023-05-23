#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode* res = NULL;
	res = malloc(sizeof(struct ListNode));

	int retenue = 0;
	int tmp = 0;
	while (l1->next != NULL && l2->next != NULL)
	{
		tmp = l1->val + l2->val;
		if (tmp < 10)
		{
			
		}
	}
}