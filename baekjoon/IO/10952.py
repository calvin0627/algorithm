for a,_,b,_ in open(0):
    if(int(a)):print(int(a)+int(b))

# 참고코드
# for a,_,b,_ in [*open(0)]:print(int(a)+int(b))
# *를 통해 open