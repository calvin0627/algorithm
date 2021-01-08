import sys
import os

if len(sys.argv)>1:
    done=sys.argv[1]
else:
    done=input("problem number: ")
with open("io_problems.txt","r") as f:
    data=f.read().replace(' ','')
    problems=data.split(',')
    problems.remove(done)
with open("io_problems.txt","w") as f:
    f.write(', '.join(problems))

path=os.getcwd()
folder="solved"
if not os.path.isdir(f"./{folder}"):
    os.system(f"mkdir {folder}")
os.system(f'mv {done}.py {folder}')


