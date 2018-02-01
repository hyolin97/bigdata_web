foods={"떡볶이":"오뎅","짜장면":"단무지","라면":"김치","피자":"피클"}
while(True):
    myfood=input(str(list(foods.keys()))+"중 좋아하는 것은?")
    if myfood in foods:
        print("<%s> 궁합음식은 <%s> 입니다."%(myfood,foods.get(myfood)))
    elif myfood=="끝":
        break
    else:
        print("그런음식이 없습니다")
