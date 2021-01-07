print(sum(map(int,input().split())))

# 참고코드
# print(eval('+'.join(input())))
# eval(expression, globals=None, locals=None)의 expression으로 오는 string을 실행하는 함수이다
# 따라서 '+'.join()을 통해 'A+B'꼴의 문자열을 eval의 input으로 하여 그대로 실행하게 된다.
