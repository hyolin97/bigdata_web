def high_score(p1,p2,p3,p4,p5,p6):
    score=[p1,p2,p3,p4,p5,p6]
    if score[0]<score[1]:
        if score[1]<score[2]:
            if score[2]<score[3]:
                if score[3]<score[4]:
                    if score[4]<score[5]:
                        print("최고점은 %d입니다."%score[5])
                    else:
                        print("최고점은 %d입니다."%score[4])
                elif score[3]>score[5]and score[3]>score[4]:
                    print("최고점은 %d입니다."%score[3])
            elif score[2]>score[3]and  score[2]>score[4]and score[2]>score[5]:
                print("최고점은 %d입니다."%score[2])
        elif score[1]>score[3]and  score[1]>score[4]and score[1]>score[5]and score[1]>score[2]:
            print("최고점은 %d입니다."%score[1])
    elif score[0]>score[3]and  score[0]>score[4]and score[0]>score[5]and score[0]>score[2]and score[0]>score[1]:
        print("최고점은 %d입니다."%score[0])

p1=int(input("학생점수:"))
p2=int(input("학생점수:"))
p3=int(input("학생점수:"))
p4=int(input("학생점수:"))
p5=int(input("학생점수:"))
p6=int(input("학생점수:"))
high_score(p1,p2,p3,p4,p5,p6)
