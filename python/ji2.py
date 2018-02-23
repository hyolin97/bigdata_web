math_score=[80,50,90,75,35]
list1=[]
def maxlist(list1):
    list1.append(math_score)
    for i in len(list1):
        for r in len(list1):
            list1[i]>=list1[r]
            print(list1)
                        
        


print(maxlist(math_score))
