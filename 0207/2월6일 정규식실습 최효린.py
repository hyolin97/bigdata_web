import re

passw,idw,kname,ename,tel,hp,email,jumin,ip,sogae = '','','','','','','','','',''
  


r= re.compile( '[0-9][^alpha]'    )##생년월일 정규식
while True :
    str = int(input("생년월일 입력"))
    if r.search(str) == None or (str<='1990' or str>='2017') :
         print("잘못입력")
         continue
    else :
         passw=str
         print(str)
         break   

r= re.compile( '[가-힣]'    )##한글이름  정규식
while True :
    str = input("한글이름입력")
    if r.search(str) == None or len(str)>=5:
         print("잘못입력")
         continue
    else :
         kname=str
         print(str)
         break



r= re.compile( '(\d)(\d{3-4})(\d{4})'    )##학번 정규식
while True :
    str = input("학번입력")
    if r.search(str) == None:
         print("잘못입력")
         continue
    else :
         tel=str
         print(str)
         break



r= re.compile(     )##주소 정규식
while True :
    str = input("주소입력")
    if r.search(str) == None:
         print("잘못입력")
         continue
    else :
         ip=str
         print(str)
         break     

  

        
        
        

