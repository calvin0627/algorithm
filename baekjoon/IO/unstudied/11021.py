a=0
exec("a+=1;print('Case #{}: {}'.format(a,eval('+'.join(input()))));"*int(input()))

# 참고 코드
# import sys
# for i in range(1,int(input())+1):
#     print(f"Case #{i}: {sum(list(map(int,sys.stdin.readline().split())))}")
# input() 대신 sys.stdin.readlin() 사용
# string format f-string 형식 사용