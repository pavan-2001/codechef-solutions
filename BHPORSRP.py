
def solve_prob():
    ele=[]
    ele.append(input().lower())
    str1='berhampore'
    str2='serampore'
    res=any(str1 in sub for sub in ele)
    res1=any(str2 in sub for sub in ele)
    if res==True and res1==True:
        print('Both')
    elif res!=True and res1==True:
        print('GCETTS')
    elif res==True and res1!=True:
        print('GCETTB')
    else:
        print('Others')
    
t=int(input())
while t>0:
    solve_prob()
    t=t-1
