## 셸 스크립트 프로그래밍1



### 우분투의 bash 셸

Linux환경의 기본 셸

<img src="C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053446338.png" alt="image-20221226053446338" style="zoom:100%;" />





#### 지원 기능

1. alias 기능 = 명령어 단축 기능
2. history 기능: 위아래 화살표
3. 연산 기능
4. job control 기능
5. 자동 이름 완성 기능(탭)
6. 프롬프트 제어 기능
7. 명령 편집 기능





#### 환경변수

`echo $환경변수이름`으로 환경변수 값 확인 가능하다.

`export 환경변수 = 값`으로 환경변수 값을 변경 가능하다.

![image-20221226053458712](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053458712.png)



**주요 환경변수**

1. `HOME`: 현재 사용자 홈 dir
2. `LANG`: 기본 지원 언어
3. `TERM`: 로그인 터미널 타입
4. `USER`: 현재 사용자 이름
5. `COLUMNS`: 현재 터미널 컬럼 수
6. `PS1`: 1차 명령 프롬프트 변수
7. `BASH`: bash 셸 경로
8. `HISTFILE`: 히스토리 파일 경로
9. `HOSTNAME`: 호스트 이름
10. `LOGNAME`:로그인 이름
11. `MAIL`: 메일 보관경로

12. `PATH`: 실행파일 찾는 디렉터리 경로

13. `PWD`: 사용자의 현재 작업 디렉터리

14. `SHELL`: 로그인해서 사용하는 셸

15. `DISPLAY`: X 디스틀레이 이름

16. `LINES`: 현재 터미널 라인 수

17. `PS2`: 2차 명령 프롬프트

    ..등등





### 셸 스크립트 작성과 실행 기본



**특징**

- c언어와 유사하게 프로그래밍 가능

- 변수, 반복문, 제어문 사용 가능

- 별도로 **컴파일 없이, 텍스트 파일 형태로 바로 실행**
- vi, gedit으로 작성 가능
- 리눅스 많은 부분이 셸 스크립트로 작성돼 있음



**작성 및 실행**

1. vi나 gedit으로 작성한다.

2. 셸스크립트 파일의 확장명은 되도록 .sh로 한다.

3. 실행 방법으로는
   1. `sh <스크립트 파일>` 입력
   2. `chmod +x <스크립트파일>` 명령으로 실행가능 속성을 파일에 부여한 후 `./<스크립트파일>`명령으로 실행



#### 작성

```
$  vi name.sh #sh파일 생성 및 작성-->vi진입

#!/bin/sh		#셸 스크립트를 인식시키는 내용
echo 			#"사용자 이름: " $USER
echo 			#"홈 디렉터리: " $HOME
exit 0 

:wq				#저장 및 종료-->vi 탈출

$ ls -l
$ cat name.sh 	#파일 내용 확인
```



#### 실행방법1

```
$ sh name.sh	#sh파일 실행
```

![image-20221226053504946](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053504946.png)

- name.sh 셸스크립트 파일을 실행한 결과



#### 실행방법2

```

$ chmod +x	name.sh		# 파일에 실행속성 추가
$ ./name.sh				# 실행

```

![image-20221226053507778](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053507778.png)

![image-20221226053513291](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053513291.png)



- 실행속성이 추가되어 실행되는 모습의 name.sh





### 변수의 기본

1. 변수를 사용하기 전에 **미리** **선언하지 않으며**, 변수에 처음 값을 초기화하며 자동으로 변수가 생성

   -> 스크립트 언어는 선언이 없다(<-> 컴파일러 언어 ex. c언어, 파이썬)

   

2. 모든 변수는 '문자열'로 취급

   ![image-20221225190149953](C:\Users\he125\AppData\Roaming\Typora\typora-user-images\image-20221225190149953.png)

   

3. 변수 이름은 대소문자를 구분

4. 변수를 대입할때 '='좌우에는 공백이 없어야 한다.

​	![image-20221226053519232](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053519232.png)

![image-20221226053524406](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053524406.png)

​	-> 쌍따옴표로 감싸며 공백 사용 가능



5. '$'문자가 들어간 글자를 출력하려면 ' '(따옴표)로 묶어주거나 앞에 \ (원) 문자를 붙여주면 된다.

   ![image-20221226053528414](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053528414.png)

​				![image-20221226053532598](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053532598.png)

   - 쌍따옴표로 감싼 $dollar myvar는 보여지지 않았고, 따옴표로 감싼 '$dollar myvar2'는 출력
   - sh파일의 read myvar는 myvar라는 변수에 사용자로부터 값을 입력받는 명령



### 숫자의 계산

1. 변수에 대입된 값은 모두 문자열

2. 따라서 변수에 있는 값을 이용해 +,-,*,/ 등 산술연산을 하기 위해선 **expr**을 사용

3. `변수명=백틱+ expr 연산 +백틱`  처럼 역따옴표(백틱)으로 expr 연산을 감싸 사용한다

   -> 이꼴 좌우 공백은 절대 불가

4. 수식에 괄호 또는 곱하기는 그 앞에 꼭 역슬래쉬( \ ,원화 )를 붙여 사용



![image-20221226053538222](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053538222.png)

​			![image-20221226053542653](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053542653.png)



### 파라미터 변수

1. 파라미터 변수는 $0, $1, $2... 같은 형태를 가진다
2. 전체 파라미터 표현 = $*



```
#!/bin/sh
echo "실행파일 이름은 <$0>이다"
echo "첫번째 파라미터는 <$1>이고, 두번째 파라미터는 <$2>이다"
echo "전체 파라미터는 <$*>다"
exit 0
```

![image-20221226053546101](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053546101.png)

				- 파일 실행 시 이처럼 파라미터 값을 후미에 입력 가능하다.



### 기본 if

**형식**

```
if [ 조건 ]			# 중괄호 시작과 끝부분 띄어쓰기 필수!
then
	참일 경우 실행
fi
```



![image-20221226053549384](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053549384.png)

​			![image-20221226053552036](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053552036.png)



### if~else문

**형식**

```
if [ 조건 ]
then 
	참일 경우 실행
else 
	거짓일 경우 실행
fi
```

![image-20221226053554491](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053554491.png)

![image-20221226053556852](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053556852.png)





### 조건문에 들어가는 비교연산자

아래처럼 문자열 비교 와 산술비교 를 구분하여 가능하다.



산술비교 옵션을 살펴보면

1. -eq: equal
2. -ne: not equal
3. -gt: greater than
4. -ge: greater equal
5. -lt: lowert than
6. -le: lower equal
7. !수식: 수식이 거짓이라면 참

같이 풀어진다.

![image-20221226053601449](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053601449.png)



- 따라서 위의 `100 -eq 200`은 100이 200과 같다면 으로 풀어지며, else파트가 출력되는 것





### 파일과 관련된 조건 (중요)



**파일 조건 옵션**

1. **-d** 파일이름: 파일이 `디렉터리`면 참
2. **-e** 파일이름: 파일이 `존재하면` 참
3. **-f** 파일이름: 파일이 `일반 파일`이면 참
4. **-g** 파일이름: 파일에 `set-group-id`가 설정되면 참
5. **-r** 파일이름: 파일이 `읽기 가능`이면 참
6. **-s** 파일이름: 파일 `크기가 0이 아니면` 참
7. **-u** 파일이름: 파일에 `set-user-id`가 설정되면 참
8. **-w** 파일이름: 파일이 `쓰기 가능 상태`이면 참
9. **-x** 파일이름: 파일이 `실행 가능 상태`이면 참



```
#!/bin/sh
fname=/lib/systemd/system/cron.service
if [ -f $fname ]		# $fname으로 특정한 파일이 일반 파일이라면 참
then
	head -5 $fname		# 참이라면, 파일 앞의 5줄을 출력해라.
else
	echo "cron 서버가 설치되지 않았습니다."
fi

exit 0
```

![image-20221226053604527](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053604527.png)

![image-20221226053607516](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053607516.png)





### case ~ esac 문

if문은 참과 거짓의 두 경우만 사용하는 2중분기인 반면

여러가지 경우의 수가 있다면 다중분기가 가능한 case문을 사용한다.





#### case ~ esac 문 (1)

![image-20221226053609745](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053609745.png)

			- 위처럼 `$1` 파라미터로 들어온 변수의 값이 각 case의 string과 매칭되는 곳의 명령문을 실행함.

![image-20221226053612266](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053612266.png)





#### case ~ esac 문 (2)

![image-20221226053614425](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053614425.png)

					1. | 를 OR로 인식하여 여러 입력을 허용토록 설정
					1. [nN]*는 정규식으로 맨 앞에 소문자 n 혹은 대문자 N일 경우 모두 허용한다는 설정
					1. *)는 yes케이스, no케이스 모두 아닐 경우 향하는 분기





![image-20221226053616565](C:\Users\he125\OneDrive\바탕 화면\CS\Linux\이것이리눅스다\assets\image-20221226053616565.png)