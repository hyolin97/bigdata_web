pu=int(input("숫자를 입력하시오:"))
if pu>10:
    
    if pu%2==0:
        print("%d는 10보다 큰 짝수입니다."%pu)
    else:
        print("%d는 10보다 큰 홀수입니다."%pu)
else:
    if pu%2==0:
        print("%d는 10보다 작은 짝수입니다."%pu)
    else:
        print("%d는 10보다 작은 홀수입니다."%pu)
    
    
