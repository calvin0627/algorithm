n=int(input())
for i in range(0,n-1):
    print(" "*(n-i-1)+str(" "*(2*i-1)).center(2*i+1,"*"))
print("*"*(2*n-1))

# 주의!!
# 문자열에 str()없이 바로 center함수를 사용하니 런타임 에러가 발생
# 아마 i=0일때는 2i-1이 0이하이고, 따라서 문자열이 아니라 None값일 것이고
# 이때는 center()함수가 호출될 수 없기 때문에 에러가 발생한 것으로 보인다.

# 참고코드
# N=int(input())
# for i in range(N):print(' '*(N-1-i)+'*'+'* '[i<N-1]*(i+i-1)+'*'*(i>0))
# ???