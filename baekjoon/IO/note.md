### unpacking operation 
#### \* operator ####
- iterative나 collection등을 개별인자로 분리해준다
#### \*\* operator ####
- dictionary type에서 unpacking 수행
#### 사용
- 함수의 인자 제한없이 인자를 받을 수 있다
    - \*연산자는 values, \*\*연산자는 options

### eval() exec() 
- eval() 실행가능한 문자열을 받아서 실행한 결과값 반환
- eval()이 연산을 받는다면, exec()은 수식을 받아서 실행시킴

### 연산자
- -~
- := 대입연산자
    - 더 큰 표현식의 부분으로 변수에 값을 대입하고, 값을 반환하게 해준다
    - 계산된 값이 또 사용될 필요가 있을때 복잡성을 줄이고 가독성을 개선하기 위해 사용한다