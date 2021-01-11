import sys
n,m=map(int,input().split())
board=[sys.stdin.readline() for _ in range(n)]

board=[[1 if for j in i]for i in board]

for i in range(n-8):
    for j in range(m-8):
        if board[i:i+8][j:j+8] 

bw_true=["bw"*4 for _ in range(8)]
wb_true=["wb"*4 for _ in range(8)]


print(board)