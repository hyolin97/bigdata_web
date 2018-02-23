coffee=0
def coffee_machine(coffee):
    print()
    print("#1.뜨거운물을 준비한다.")
    print("#2.종이컵을 준비한다.")
    if coffee==1:
        print("#3. 아메리카노를 탄다")
    elif coffee==2:
        print("#3. 카페라떼를 탄다")

    elif coffee==3:
        print("#3. 카푸치노를 탄다")
    elif coffee==4:
        print("#3. 에스프레소를 탄다")
    else:
        print()
    print("#4.물을 붓는다")
    print("#5. 스푼으로 저어서 녹인다")
    print()
coffee=int(input("어떤 커피를 드릴까요?(1:아메리카노, 2:카페라떼, 4:에스프레소 3.카푸치노:)"))

coffee_machine(coffee)
print("철수손님~커피 여기 있습니다")
coffee=int(input("어떤 커피를 드릴까요?(1:아메리카노, 2:카페라떼, 4:에스프레소 3.카푸치노:)"))

coffee_machine(coffee)
print("영희손님~커피 여기 있습니다")
coffee=int(input("어떤 커피를 드릴까요?(1:아메리카노, 2:카페라떼, 4:에스프레소 3.카푸치노:)"))

coffee_machine(coffee)
print("길동손님~커피 여기 있습니다")
coffee=int(input("어떤 커피를 드릴까요?(1:아메리카노, 2:카페라떼, 4:에스프레소 3.카푸치노:)"))

coffee_machine(coffee)
print("민수손님~커피 여기 있습니다")

    

    
