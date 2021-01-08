input()
l=list(map(int,input().split()))
print(min(l),max(l))

# 참고코드
# print(min(a:=[*map(int,[*open(0)][1].split())]),max(a))
# 대입 연산자(:=)를 통해 a에 입력을 리스트로 만들어 넣음과 동시에 사용한다