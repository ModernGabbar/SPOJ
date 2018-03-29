t = int(input())
for k in range(t):
    n = int(input())
    a_temp = input()
    a = []
    for j in range(40):
        if a_temp[j] == 'T':
            a.append(0)
        else:
            a.append(1)
    ls = [0, 0, 0, 0, 0, 0, 0, 0]
    for i in range(38):
        if a[i] + a[i+1] + a[i+2] == 1:
            if a[i] == 1:
                _index = 4
            elif a[i+1] == 1:
                _index = 2
            else:
                _index = 1
        elif a[i] + a[i+1] + a[i+2] == 2:
            if a[i] == 0:
                _index = 3
            elif a[i+1] == 0:
                _index = 5
            else:
                _index = 6
        elif a[i] + a[i+1] + a[i+2] == 0:
            _index = 0
        else:
            _index = 7
        ls[_index] = ls[_index] + 1
    print(n,end=' ')
    for l in range(8):
        print(ls[l],end=' ')
    print()
