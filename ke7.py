import re
r=re.compile("ca{2,5}t")
print(r.search("cat"))
print(r.match("caaat"))
