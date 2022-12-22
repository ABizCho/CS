## 셸 스크립트 프로그래밍



### 우분투의 bash 셸

Linux환경의 기본 셸

<img src="C:\Users\he125\AppData\Roaming\Typora\typora-user-images\image-20221222194406887.png" alt="image-20221222194406887" style="zoom: 50%;" />





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

![image-20221222195039094](C:\Users\he125\AppData\Roaming\Typora\typora-user-images\image-20221222195039094.png)



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





### 셸 스크립트 프로그래밍



**특징**

- c언어와 유사하게 프로그래밍 가능

- 변수, 반복문, 제어문 사용 가능

- 별도로 **컴파일 없이, 텍스트 파일 형태로 바로 실행**
- vi, gedit으로 작성 가능
- 리눅스 많은 부분이 셸 스크립트로 작성돼 있음



**방법 등**

- 셸 스크립트 파일의 확장명은 되도록 `.sh`로 한다.





(마저 작성해주세요 https://www.inflearn.com/course/%EC%9D%B4%EA%B2%83%EC%9D%B4-%EC%9A%B0%EB%B6%84%ED%88%AC-%EB%A6%AC%EB%88%85%EC%8A%A4%EB%8B%A4/unit/6279?tab=curriculum  5분부터)