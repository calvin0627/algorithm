n = int(input())

for i in range(1,n+1):
    print('*'*i+'  '*(n-i)+'*'*i)
for i in range(n-1,0,-1):
    print('*'*i+'  '*(n-i)+'*'*i)

# 참고코드
# n=int(input())
# for i in range(1-n,n):
#     print((' '*abs(2*i)).center(2*n,'*'))
# 각 줄의 길이는 2n이고 
# 행마다 '*'의 수는 2, 4, ..., 2n, 2n-2, 2n-4 , ... 2개이고,
# 공백의 수는 반대로 2n-2, 2n-4, ..., 0, 2, 4, ..., 2n-2개이다.
# 이는 |2*(n-행순서)|로 나타낼 수 있다. 
# 그림에선 공백이 라인의 중간에 위치하므로 string.center()함수를 통해 나타낸다.

