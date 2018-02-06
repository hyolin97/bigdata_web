import re
r=re.compile(r"(.+)\?")
a="""https://search.daum.net/search?nil_suggest=btn&nil_ch=&rtupcoll=&w=tot&m=&f=&lpp=&DA=SBC&sug=&sq=&o=&sugo=&q=reg
 ?nil_suggest=btn&nil_ch=&rtupcoll=&w=t
 ot&m=&f=&lpp=&DA=SBC&sug=&sq=&o=&sugo=&q=reg
"""

print(r.findall(a))
#\b^[^\s]+[...$?]
