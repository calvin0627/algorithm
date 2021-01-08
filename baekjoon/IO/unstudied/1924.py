m,d=map(int,input().split())
c=0
for i in range(1,m):
    if i in (1,3,5,7,8,10,12):
        c+=31
    elif i in (4,6,9,11):
        c+=30
    else:
        c+=28
c=(c+d)%7
if c==1:print('MON')
elif c==2:print('TUE')
elif c==3:print('WED')
elif c==4:print('THU')
elif c==5:print('FRI')
elif c==6:print('SAT')
else:print('SUN')

# 참고코드
# m,d=map(int,input().split());print('FSSMTWTRAUOUEHITNNEDU'[(d-5389465494//7**m)%7::7])
# ???