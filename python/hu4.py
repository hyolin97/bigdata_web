import urllib.request
import re
str1='''https://search.daum.net/search?nil_suggest=btn&nil_ch=&rtupcoll=&w=tot&m=&f=&lpp=&DA=SBC&sug=&sq=&o=&sugo=&q=reg
 ?nil_suggest=btn&nil_ch=&rtupcoll=&w=tot&m=&f=&lpp=&DA=SBC&sug=&sq=&o=&sugo=&q=reg
'''
st=urllib.request.Request.url(str1)


def input_query():
    q=str(input("검색어 입력하세요:"))
    return "&query=" +q
