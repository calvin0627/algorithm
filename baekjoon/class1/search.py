import webbrowser
import sys
if len(sys.argv)>1:
    problem=sys.argv[1]
else:
    problem=input()
problem_url="https://www.acmicpc.net/problem/"+problem
webbrowser.open(problem_url)

