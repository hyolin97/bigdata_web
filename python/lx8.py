num=input("주민등록번호를 입력해주세요:")

if num[6]=='1' or num[6]=='3':
    print("남자입니다")
elif num[6]=='2' or num[6]=='4':
    print("여자입니다")
else:
    print("사람이 아닙니다")
