def reverse(num):
    m = num
    while m >= 1:
        r = (r * 10) + (m % 10)
    return int(r / 10)


def read_no(st):
    (N, M) = (0, 0)
    for k in range(len(st)):
        if st[k] == " ":
            N = int(st[:k])
            M = int(st[k + 1:])
            break
    return N, M


(ls, fls) = ([], [])
for i in range(int(input())):
    Sum2 = 0
    ls.append(input())
    (num1, num2) = (read_no(ls[i]))
    Sum2 = reverse(num1) + reverse(num2)
    fls.append(reverse(Sum2))
for i in range(len(fls)):
    print(fls[i])
