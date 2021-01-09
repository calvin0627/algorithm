n=int(input())
s="%"+str(n)+"s"
for i in range(1-n,n):
    print(s%("*"*(n-abs(i))))

# n=int(input())
# for i in range(1-n,n):
#     print(f"%{n}s"%("*"*(n-abs(i))))
# 왜 에러??