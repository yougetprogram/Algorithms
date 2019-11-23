#include <stdio.h>
#include <stdlib.h>
int number = 15;
typedef struct treeNode {
    int data;
    struct treeNode *leftChild;
    struct treeNode *rightChild;
}tree;
tree *selector;

void preOrder(tree *selector){
    if(selector){
    printf("%d ", selector->data);
    preOrder(selector->leftChild);
    preOrder(selector->rightChild);
    }
}

void inOrder(tree *selector){
    if(selector){
    inOrder(selector->leftChild);
    printf("%d ", selector->data);
    inOrder(selector->rightChild);
    }
}

void postOrder(tree *selector){
    if(selector){
    postOrder(selector->leftChild);
    postOrder(selector->rightChild);
    printf("%d ", selector->data);
    }
}

int main(int argc, char *argv){
    /*tree arr[10];
    tree nodes[number + 1];
	for(int i = 1; i <= number; i++) {
		nodes[i].data = i;
		nodes[i].leftChild = NULL;
		nodes[i].rightChild = NULL;
	}
	for(int i = 1; i <= number; i++) {
		if(i % 2 == 0)
			nodes[i / 2].leftChild = &nodes[i];
		else
			nodes[i / 2].rightChild = &nodes[i];
	}
	preOrder(&nodes[1]);
	return 0;*/
    tree *arr[10];
    for(int i = 0; i < 10; i++){
        tree *temp = malloc(sizeof(tree));
        temp->data = i;
        temp->leftChild = NULL;
        temp->rightChild = NULL;
        arr[i] = temp;
    }
    for(int i = 0; i < 10; i++){
        if(i % 2 == 0) arr[i/2]->leftChild = arr[i];
        else arr[i/2]->rightChild = arr[i];
    }

    preOrder(arr[1]);
}