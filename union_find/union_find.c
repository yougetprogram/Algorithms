#include <stdio.h>

int findParent(int parent[], int x){
    if(parent[x] == x) return x;
    return parent[x] = findParent(parent, parent[x]);
}

void unionFind(int parent[], int x, int y){
    int a = findParent(parent, x);
    int b = findParent(parent, y);
    if(a < b) parent[b] = a;
    else parent[a] = b;
}

int sameparent(int parent[], int x, int y){
    int a = findParent(parent, x);
    int b = findParent(parent, y);
    if(a == b) return 1;
    return 0;
}

int main(int argc, char *argv[]){
    int parent[9] = {0};
    for(int i = 0; i < 9; i++){
        parent[i] = i;
    }

    unionFind(parent, 1, 2);
    unionFind(parent, 2, 4);
    printf("1, 5 connect? %d", sameparent(parent, 1, 5));
    return 0;
}
