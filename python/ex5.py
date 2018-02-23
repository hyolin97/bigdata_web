m,a,b,c,d,e,f,g,k=0,0,0,0,0,0,0,0,0
m=int(input("교환할 돈을 입력해주세요:"))
a=m//500
b=m-(a*500)
c=b//100
d=b-(c*100)
e=d//50
f=d-e*50
g=f//10
k=f-g*10
print("오백원짜리동전수:%d\n"%a)
print("백원짜리동전수:%d\n"%c)
print("오십원짜리동전수:%d\n"%e)
print("십원짜리동전수:%d\n"%g)

print("바꾸지 못한 잔돈:%d\n"%k)
