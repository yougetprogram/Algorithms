def getparent(parent, x):
    if(parent[x] == x) : return x
    return getparent(parent, parent[x])

def unionparent(parent, x, y):
    a = getparent(parent, x)
    b = getparent(parent, y)
    if(a < b) : parent[b] = a
    else : parent[a] = b

def sameparent(parent, x, y):
    a = getparent(parent, x)
    b = getparent(parent, y) 
    if(a == b) : return 1
    return 0

parent = list(map(lambda x : x, range(10)))
unionparent(parent, 1,2)
unionparent(parent, 3,4)
unionparent(parent, 1,3)
print("1,3 conneted? {}".format(sameparent(parent, 1,3)))