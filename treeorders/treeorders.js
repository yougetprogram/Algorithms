// Tree 
class Tree {
    constructor(x){
        this.data=x;
        this.leftChild=null;
        this.rightChild=null;
    }
}

function preOrder(selector){
    if(selector != null){
        console.log(selector.data);
        preOrder(selector.leftChild);
        preOrder(selector.rightChild);
    }
}

function inOrder(selector){
    if(selector != null){
        inOrder(selector.leftChild);
        console.log(selector.data);
        inOrder(selector.rightChild);
    }
}

function postOrder(selector){
    if(selector != null){
        postOrder(selector.leftChild);
        postOrder(selector.rightChild);
        console.log(selector.data);
    }
}

arr = [1,2,3,4,5,6,7,8,9, 10];
for(let i = 0; i < arr.length; i++){
    let tre = new Tree(i);
    arr[i] = tre;
}

for(let i = 0; i < arr.length; i++){
    if(i % 2 == 0) arr[i/2].leftChild = arr[i];
    else arr[parseInt(i/2)].rightChild = arr[i];
}

preOrder(arr[1]);