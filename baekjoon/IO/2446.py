# n=int(input())
# for i in map(abs,range(1-n,n)):
#     print(' '*(n-i-1)+"*"*(2*i+1))
# 왜 런타임에러???

a=int(input())
for i in range(1-a,a):i=abs(i);print(' '*(a-i-1)+'*'*(i*2+1))