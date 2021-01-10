while 1:
    try:print(input())
    except EOFError:break

# 참고코드
# print(open(0).read())
# 참고코드2
# import sys
# print(sys.stdin.read())
# stdin의 값들 그대로 출력하도록 한다
# 참고코드3
# import sys
# for l in sys.stdin:
#     print(l, end='')
# print에서 더해지는 \n을 지우고 각 stdin의 각 라인을 출력시킨다