sem=int(input("이수학기를 입력하시오:"))
sco=int(input("이수학점를 입력하시오:"))
if (sem==8) and (sco>=150):
    print("정상졸업자입니다.")
elif (sco>=150):
    print("조기졸업자입니다.")
else:
    print("졸업대상자가 아닙니다.")
