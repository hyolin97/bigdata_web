mixlist=['apple',5,'banana','grape',3,8,6,'melon']
i=0
while i<=7:
    if type(mixlist[i])==str:
        print(mixlist[i])
        print("type은 문자다")
        i+=1
    else:
        print(mixlist[i])
        print("type은 숫자다")
        i+=1
