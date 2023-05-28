#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode res;
	struct ListNode* current = &res;
	//res = malloc(sizeof(struct ListNode));
	res.val = 0;
	res.next = NULL;

	int retenue = 0;
	int tmp = 0;
	while (l1 != NULL || l2 != NULL || retenue != 0)
	{
		current->next = malloc(sizeof(struct ListNode));
		current = current->next;
		current->next = NULL;
		if (l1 == NULL && l2 == NULL)
			tmp = retenue;
		else if (l1 == NULL)
			tmp = l2->val + retenue;
		else if (l2 == NULL)
			tmp = l1->val + retenue;
		else
			tmp = l1->val + l2->val + retenue;
		if (tmp < 10)
		{
			current->val = tmp;
			retenue = 0;
		}
		else
		{
			current->val = tmp%10;
			retenue = tmp/10;
		}
		if (l1 != NULL)
			l1 = l1->next;
		if (l2 != NULL)
			l2 = l2->next;
	}
	return (res.next);
}

void putNumbers(struct ListNode* l, int a, int b, int c)
{
	l->val = a;
	l->next = malloc(sizeof(struct ListNode));
	l = l->next;
	l->val = b;
	l->next = malloc(sizeof(struct ListNode));
	l = l->next;
	l->val = c;
	l->next = NULL;
}

void print_list(struct ListNode* l)
{
	while(l != NULL)
	{
		printf("%d", l->val);
		printf(" ");
		l = l->next;
	}
	printf("\n");
}

int main(void)
{
	struct ListNode *list1;
	list1 = malloc(sizeof(struct ListNode));
	list1->val = 0;
	list1->next = NULL;
	struct ListNode *list2;
	list2 = malloc(sizeof(struct ListNode));
	list2->val = 0;
	list2->next = NULL;
	struct ListNode *list3;
	list3 = malloc(sizeof(struct ListNode));
	list3->val = 0;
	list3->next = NULL;

	putNumbers(list1, 2, 4, 3);
	putNumbers(list2, 5, 6, 4);
	list3 = addTwoNumbers(list1, list2);
	// while(list3 != NULL)
	// {
	// 	printf("%d\n", list3->val);
	// 	list3 = list3->next;
	// }
	print_list(list1);
	print_list(list2);
	print_list(list3);
	free(list1);
	free(list3);
	free(list2);
}