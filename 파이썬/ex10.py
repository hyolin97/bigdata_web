giv=int(input())


a=giv//10000
giv=giv%10000
b=giv//1000
giv=giv%1000
c=giv//100
giv=giv%100
d=giv//10
giv=giv%10
total=a+b+c+d+giv
print(total)
