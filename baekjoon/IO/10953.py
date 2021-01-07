for _ in range(int(input())):
    print(eval(input().replace(',','+')))

# 참고코드
# for s in range(int(input())):
#     print(sum(eval(input())))
# 입력값이 A,B의 형태이기 때문에 eval을 통해 tuple를 만들어 sum을 수행한다