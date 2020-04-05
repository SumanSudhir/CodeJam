import sys

temp  = input().split(" ")
t = int(temp[0])
b = int(temp[1])

for i in range(t):
    store = ""
    for j in range(b):
        print(j+1)
        sys.stdout.flush()
        temp = int(input())
        store += str(temp)
        if(j+1)%b == 0:
            print(store)
            sys.stdout.flush()

    ok = input()

sys.exit()
