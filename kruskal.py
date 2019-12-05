#kruskal_algorithm
class Node :
    def __init__(self, cost, x, y):
        self.cost = cost
        self.x = x
        self.y = y

def getParent(lst, target):
    if(lst[target] == target) : return target
    else : return getParent(lst, lst[target])

def unionParent(lst, x, y):
    x = getParent(lst, x)
    y = getParent(lst, y)
    if(x < y) : lst[y] = x
    else : lst[x] = y

def sameParent(lst, x, y):
    x = getParent(lst, x)
    y = getParent(lst, y)
    if(x == y) : return 1
    else : return 0

lst = [Node(13, 4, 7), Node(12,1,7), Node(28, 1, 4), Node(24, 4, 2), Node(73, 7, 5), Node(67, 1, 2), Node(17, 1, 5), Node(62, 2, 5), Node(45, 5, 6), Node(37, 6, 3), Node(20, 3, 5)]
lst.sort(key=lambda obj:obj.cost)

sets = list(range(7))
sums = 0
for i in lst:
    if(sameParent(sets,i.x-1,i.y-1) != 1):
        sums += i.cost
        unionParent(sets,i.x-1,i.y-1)

print(sums)