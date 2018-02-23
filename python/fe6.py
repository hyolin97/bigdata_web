import random
pa1=random.randint(1,6)
pa2=random.randint(1,6)
print("첫번째 주자의 주사위결과:%d"%pa1)
print("두번째 주자의 주사위결과:%d"%pa2)
if pa1>pa2:
    print("첫번째주자 승리")
elif pa1<pa2:
    print("두번째주자 승리")
else:
    print("비겼습니다")
