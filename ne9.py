fru1=input("과일을 입력하세요:")
fru2=input("과일을 입력하세요:")
fru3=input("과일을 입력하세요:")
fru4=input("과일을 입력하세요:")
fru5=input("과일을 입력하세요:")
i=0
list1=[fru1,fru2,fru3,fru4,fru5]

for i in range (0,5,1):
    if i<2:
        list1[i]=list1[4-i]
        print(list1[i])
        i=i+1
    else:
        list1[i]=list1[4-i]
        print(list1[i])
        i=i+1
    
    
