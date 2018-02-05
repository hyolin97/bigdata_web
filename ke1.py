ip1=int(input())
ip2=int(input())

ip3=int(input())
result=ip1+ip2+ip3
if result%2==0:
    if ip1>ip2:
        print(ip1)
    elif ip1<=ip2:
        if ip2<ip3:
            print(ip3)
        else:
            print(ip2)
else:
    print(result)
