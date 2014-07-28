def hash (s) :
    h = 7
    letters = "acdegilmnoprstuw"
    for i in range(len(s)):
        h = (h * 37 + letters.index(s[i]))
    return h

def unhash (i) :
   uh = i
   letters = "acdegilmnoprstuw"
   answer = ""

   while (uh > 7) : 
     nextUh = uh / 37
     modUh = uh % 37
     uh = nextUh
     answer = letters[modUh] + answer
   return answer

## print unhash(hash("leepadg"))
print unhash(910897038977002)
