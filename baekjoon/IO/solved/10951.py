while True:
    try:
        print(eval('+'.join(input())))
    except EOFError:
        break
# 문제에서 따로 인풋의 길이를 정해주지 않으므로 무한루프를 통해 입력을 받고
# EOFError가 일어날때 루프를 벗어나도록하였다

# 참고코드
# for l in open(0):print(eval(l[0]+'+'+l[2]))
# file descriptor을 0으로 하여 eof가 올때 까지 input을 받도록 하였다.
# 입력값의 범위가 0~9이므로 'A B'의꼴에서 0, 2 번째값들을 더하도록 하였다