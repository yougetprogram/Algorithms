let parent = [1,2,3,4,5,6,7,8,9];

function getparent(parent, x){
    if(parent[x] == x) return x;
    return getparent(parent, parent[x]);    
}

function unionparent(parent, x, y){
    let a = getparent(parent, x);
    let b = getparent(parent, y);
    if(a < b) parent[b] = a;
    else parent[a] = b;
}

function sameparent(parent, x, y){
    let a = getparent(parent, x);
    let b = getparent(parent, y);
    if(a == b) return 1;
    else return 0;
}

for(let i = 0; i < parent.length; i++){
    parent[i] = i;
}

unionparent(parent, 1, 2);
unionparent(parent, 5,6);
unionparent(parent, 2, 5);
console.log("1, 5, connect?", sameparent(parent, 1, 6));

