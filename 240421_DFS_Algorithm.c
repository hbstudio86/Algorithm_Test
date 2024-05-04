#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#define MAX 100

//8puzzle ����
// 2 8 3  1 2 3
// 1 6 4  8 e 4
// 7 0 5  7 6 5

//���� ����
typedef struct _node {

	//puzzle[y][x]
	int puzzle[3][3];
	int empty_X;
	int empty_Y;
	struct _node* _path;

}NODE;

//Operator
//��带 ����... ���¿��ٰ� �־� ��� �ڳ� �ٷ�
//open�� close�� ������ node�� �ִ��� Ȯ�� �ʿ���----�ʿ� ����
//parents node�� compare�ϸ� ��
NODE opUp(NODE*);

//���� ���
void printNODE(NODE*);

//open,close�� ������ node�� ���� �ϴ���Ȯ��
//1 exist, 0 noexist
//parents node�� �ּҸ� �̿��ؼ� ���� expanded node�� ���ٸ�...
//int nodeSame(NODE*, STACK*, STACK*);
int nodeSame(NODE*);

//open�� close�� �����ε�... �ٵ� �̰��� ũ�⸦ ������� �����ؾ� ����?
//100�� ������ ����Ѱ�??
typedef struct _stack {

	NODE* data[100];
	int top;

}STACK;

//node is input to list.
STACK OPEN = { {NULL,},-1 };
STACK CLOSE = { {NULL,},-1 };

//stack operator
int isFull(STACK);
int isEmpty(STACK);
void stPush(STACK*, NODE*);
NODE* stPop(STACK*);

void opexp(NODE);	//expand operator

typedef struct _path {

	NODE* pPath;

}PATH;	//no use

int main(void) {

	//initial status
	NODE snode = { {{2,8,3},{1,6,4},{7,0,5}},1,2,NULL };

	//Goal status
	NODE gnode = { {{1,2,3},{8,0,4},{7,6,5}},1,1,NULL };

	//stack setting
	//stPop(&OPEN);
	//stPush(&OPEN, &node);
	//stPush(&OPEN, &gnode);
	//stPop(&OPEN);
	//stPop(&OPEN);
	//stPop(&OPEN);

	printNODE(&snode);
	//printNODE(&gnode);
	opUp(&snode);
	printNODE(&snode);

	printf("Hello world");

	return 0;
}

void opexp(NODE node) {


}

int isFull(STACK stack) {
	if (stack.top == MAX - 1) {
		return 1;	// is full
	}
	return 0;	//is not full
}
int isEmpty(STACK stack) {
	if (stack.top == -1) {
		return 1;	//is empty
	}
	return 0;	// is not empty
}

void stPush(STACK *stack, NODE* pnode) {
	if (isFull(*stack) != 1) {
		(*stack).data[++(*stack).top] = pnode;
	}
	printf("%p ---> %p \n", pnode, (*stack).data[(*stack).top - 1]);
}
NODE* stPop(STACK *stack) {
	if (isEmpty((*stack)) != 1) {
		printf("stack data : %p\n", (*stack).data[(*stack).top]);
		return (*stack).data[(*stack).top--];
	}
	printf("STACK IS EMPTY\n");
	return NULL;
}

//empty slot replacement
NODE opUp(NODE* node) {
	/*if (node->empty_Y > 0) {
		node->puzzle[node->empty_Y][node->empty_X] = node->puzzle[node->empty_Y-1][node->empty_X];
		node->puzzle[node->empty_Y-1][node->empty_X] = 0;
		node->empty_Y--;	
	 }*/
	//�θ� node�� ���� �׷��ϱ� ó�� ���� ������ ��, �ƴ϶�� ���� node�� ��ĭ�� ��ġ�� �θ� node�� ��ĭ�� ��ġ�� �� �ϴ� ����
	//
	if (node->_path == NULL || (node->empty_X != node->_path->empty_X && node->empty_Y != node->_path->empty_Y)) {
		//node�� ���� �����ؾ� ��
	}
}

//int nodeSame(NODE* node, STACK* open, STACK* closed) {
//	int stackCNT = 0;
//	do {
//		//���� list�� node�� ���� �Ѵٸ�...
//		if (open->data[stackCNT] != NULL) {
//			//1. empty position compare
//			//2. puzzle compare; summary??
//			if (node->empty_X == open->data[stackCNT]->empty_X && node->empty_Y == open->data[stackCNT]->empty_Y) {
//				for (int i = 0; i < 9; i++) {
//					for (int j = 0; j < 9; j++) {
//						
//						if(node->puzzle[i][j])
//					}
//				}
//
//			}
//		}
//		if (closed->data[stackCNT] != NULL) {
//
//		}
//		stackCNT++;
//	} while (open->data[stackCNT] == NULL && closed->data[stackCNT] == NULL);
//}

int nodeSame(NODE* pnode) {

}

void printNODE(NODE* node) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("[%d] ", node->puzzle[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}