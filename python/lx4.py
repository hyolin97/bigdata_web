inStr="<<<파<<이>>썬>>>"
outStr=""
for i in range(0,len(inStr)):
    if inStr[i]!='<':
        if inStr[i]!='>':
            outStr+=inStr[i]
print("원 문자열==>"+'['+inStr+']')
print("공백제거==>"+'['+outStr+']')
