n = int(input())
i = 1
flag = 0
while 2**i <= n:
    if 2**i == n:
        flag = 1
        break
    else:
        i = i + 1
if flag == 1:
    print("TAK")
else:
    print("NIE")
