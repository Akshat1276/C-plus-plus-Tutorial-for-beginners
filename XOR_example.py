t = int(input())
inputlist=[]
for _ in range(t):
    n=int(input())
    inputlist.append(n)

def printlist(n):
    lis=[2*i for i in range(1,n)]
    xor=0
    for i in lis:    
        xor=xor^i
    lis.append(xor^1)
    print(*lis)

for i in inputlist:
    printlist(i)