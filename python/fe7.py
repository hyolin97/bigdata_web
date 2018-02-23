import random
time=random.randrange(0,24)

wea=random.choice(["True","False"])
if (6<=time<=9)and (wea=="True"):
    print(time)
    print("시입니다\n")
    print("날씨가 화창하고 오전 6시부터 오전 9시사이여서 종달새가 노래를한다.")
else:
    print(time)
    print("시입니다\n")
    print("날씨가 좋지않고 시간이 오전 6시부터 오전 9시가 아니여서 종달새가 노래를 안한다.")
    
