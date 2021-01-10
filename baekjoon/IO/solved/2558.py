print(eval(input()+'+'+input()))

# 참고 코드
# print(sum(map(int,open(0))))
# file descriptor 0, 1, 2 는 stdin, stdout, stderr
# 나타내므로 eof가 나올때까지의 각 라인의 값들을 더하게 된다
# 내 콘솔창에서는 eof를 어떻게 표현하는지 몰라 끝없이 값들을 더하지만
# 백준에서는 input들 끝에 eof가 있어서 수행되는듯 하다