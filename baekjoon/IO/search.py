import webbrowser
import sys
import os

if len(sys.argv)>1:
    problem=sys.argv[1]
else:
    problem=input()
problem_url="https://www.acmicpc.net/problem/"+problem
webbrowser.open(problem_url)

if not os.path.isfile(f"{problem}.py"):
    with open(f"{problem}.py","w") as f:
        1
os.system(f"code {problem}.py")
