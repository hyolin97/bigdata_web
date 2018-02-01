sc1=int(input("점수를 입력하시오/ 과목1:"))
sc2=int(input("과목2:"))
sc3=int(input("과목3:"))
tot=(sc1+sc2+sc3)/3
if (sc1<40 or sc2<40 or sc3<40):
    print("과락")
elif tot>=60 :
    print("합격")
else:
    print("불합격")
    
