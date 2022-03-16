
def findAnswer(lst,lst2):
    while(len(lst2)>=0):
        q = []
        for i in range(len(lst)):
            if(lst[i][3]=='1'):
                q.append(i)
        

n = int(input())
lst = []

for i in range(n):
    a = input().split(" ")
    lst.append(a)

m = int(input())

lst2 = []
for i in range(m):
    a = input().split(" ")
    lst2.append(a)

findAnswer(lst,lst2)
