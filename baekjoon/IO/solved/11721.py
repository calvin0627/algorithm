s=input()
for i,c in enumerate(s):
    print(c,end='')
    if i%10==9:print()

# 참고코드
# s=input()
# while s:
#     print(s[:10])
#     s=s[10:]
# 문자열이 빌때까지 반복되고 10단위로 slice를 수행한다