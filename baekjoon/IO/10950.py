# [print(eval('+'.join(input()))) for _ in range(int(input()))]

# 참고코드
# for a,_,c,_ in[*open(0)][1:]:print(int(a)+int(c))
# star operation(*): unpacking operator를 통해 stdin의 값들 2번째 줄부터 eof전까지 입력받는다 

# 참고코드2
exec('print(eval("+".join(input())));'*int(input()))
# eval()을 통해 입력들의 값을 계산후 print()로 출력하는 명령어에 
# *int(input())을 통해 받은 값만큼 곱하여(복사시켜) exec()을 통해 실행시킨다