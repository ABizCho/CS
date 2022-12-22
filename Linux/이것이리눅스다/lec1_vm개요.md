## VM소개

가상머신은 별도의 환경 증설의 별도 추가비용 없이, 한 컴퓨터환경 내 가상의 컴퓨팅 환경을 만들어

해당 환경 내 또 다른 운영체제(게스트OS)를 설치 및 운영할 수 있도록 하는 프로그램이다.



아래의 이미지가 내 컴퓨터에 구축한 가상머신 상 우분투 환경의 모습

<img src="C:\Users\he125\AppData\Roaming\Typora\typora-user-images\image-20221222184736614.png" alt="image-20221222184736614" style="zoom: 50%;" />





### 호스트 OS, 게스트 OS

1. 호스트 OS: 실제 pc에 직접 설치되어있는 운영체제
2. 게스트 OS: 가상 머신상에 설치할 그 외 운영체제를 게스트 운영체제라고 한다.



​	*멀티부팅과는 다른 개념임





<img src="C:\Users\he125\AppData\Roaming\Typora\typora-user-images\image-20221222190656273.png" alt="image-20221222190656273" style="zoom: 80%;" />

가상머신 및 게스트 os를 구축했을 때 왼쪽에서 오른쪽 같은 모습이 된다.

1. VM 프로그램 상, **가상 라우터**가 만들어진다. 물리적 네트워크 카드에 **가상 IP**로 연결된다.

2.  VM상 개별로 격리된 가상환경(가상 컴퓨터)을 만들 수 있으며, 이 위에 게스트 OS등을 탑재하여 사용하게 된다.





### VM 특징 및 장점

1. 단일 컴퓨터만으로 실무 환경과 거의 비슷한 네트워크 컴퓨터 환경 구축 가능

2. OS 특징 시점을 저장하는 **스냅숏** 기능 사용 가능

3. 하드디스크 등 HW를 자유롭게 커스텀하여 테스트 가능

4. HOST OS 상태와 격리 시켜, 특정 상태를 저장 및 그대로 이어서 구동 가능 (Suspend)기능

   ![image-20221222191949527](C:\Users\he125\AppData\Roaming\Typora\typora-user-images\image-20221222191949527.png)



### 네트워크 정보 확인

호스트OS의 cmd의 ip 정보 확인 커맨드인 `ipconfig` 를 입력하여 vmbox 및 기타 게스트 IP정보를 확인할 수 있다.

나의 경우엔 WI-FI환경을 사용하고 있으므로, 

1. 밑쪽의 **무선LAN 어댑터** 쪽이 호스트IP가 될 것 같고.
2. 여친과 스타듀밸리(게임)를 안정적으로 플레이하기 위해 하마치로 가상 사설망을 돌리고 있는데, 이것이 2번의 이더넷 어댑터 정보일 것이므로
3. 3번의 이더넷 어댑터 3번이 VMBox로 구성한 게스트OS가 할당 받은 게스트IP일 것으로 생각한다.
   + 게스트OS에 고정IP를 부여하고 싶다면 [**이 자료**](https://chachahoya.tistory.com/8)를 참고하면 될듯.



<img src="C:\Users\he125\AppData\Roaming\Typora\typora-user-images\image-20221222193317039.png" alt="image-20221222193317039" style="zoom:80%;" />