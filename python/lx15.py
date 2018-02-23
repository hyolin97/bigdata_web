score=int(input("점수를 입력하세요:"))
if score>=90:
    if score<95:
        print("A")
    else :
        print("A+")
else:
    if score>=80:
        if score<85 :
            print("B")
        else:
            print("B+")
        
    else:
        if score>=70:
            if score<75:
                print("C")
            else:
                print("C+")
            
        else :
            if score>=60:
                if score<65:
                    print("D")
                else :
                    print("D+")
            else:
                print("F")
print("학점입니다!")
