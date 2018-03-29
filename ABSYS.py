if __name__ == '__main__':
    for _ in range(int(input())):
        a = list(input().strip().split())
        pos = sum(i for i in range(len(a)) if 'm' in a[i])
        if pos == 4:
            a[4] = int(a[0]) + int(a[2])
        elif pos == 0:
            a[0] = int(a[4]) - int(a[2])
        else:
            a[2] = int(a[4]) - int(a[0])
        print(a[0], '+', a[2], '=',  a[4])
