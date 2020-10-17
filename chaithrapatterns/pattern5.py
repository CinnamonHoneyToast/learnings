n=5
for i in range(1,2*n):
    for j in range(1,2*n):
        if  i==n or j==n:
             print("+",end=" ")
        else:
             print(" ",end=" ")
    print()