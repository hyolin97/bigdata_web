m=int(input("진수(2/8/10/16)를 선택하시오"))
k=int(input("첫번째 수를 입력하시오:"))
t=int(input("두번째수를 입력하시오:"))
if m==16:
    mon1=hex(k)

    mon2=hex(t)
elif m==8:
    mon1=oct(k)
    mon2=oct(t)
elif m==10:
    mon1=int(k)
    mon2=int(t)
elif m==2:
    mon1=bin(k)
    mon2=bin(t)
tota=mon1&mon2
print(tota)
