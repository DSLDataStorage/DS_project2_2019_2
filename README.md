## DS_project2_2019_2
### 2019-2 Data Structure Project#2

### Due date: 2019/11/8 23h 59m 59s.



#### 본 프로젝트는 여행 일정 관리 시스템을 구현하는 것으로 상세한 설명은 프로젝트 문서와 다음 설명을 참고한다.
##### 여행 일정 관리 시스템은 사용자가 등록한 지역 및 도시 정보를 이용하여 도시 간의 이동 거리가 최소가 되도록 여행 일정을 설계해주는 시스템이다. 
##### 본 프로젝트는 지정된 자료구조와 그래프를 활용하여 여행 일정 관리 시스템을 구축하는 것으로, 도시 정보는 도시의 이름을 기준으로 하여 AVL tree에 저장한다. 그리고 Graph를 이용하여 최단 거리를 가지는 여행 일정 그래프를 설계한다. 전체적인 시스템 구조는 다음과 같이 구성되어 있다. 

![main](https://user-images.githubusercontent.com/50433145/66695287-cace2f00-ecfa-11e9-97a4-c6b94d33474e.JPG)

##### Graph는 비방향성을 가지며 완전연결되어 있다. Graph의 노드는 도시정보를 가지고 있고, 간선으로는 연결된 두 도시의 위치정보의 차로 이루어져 있다. 총 5개의 노드에 대한 완전 연결 Graph에 대한 예시는 다음과 같다. 

<img src="https://user-images.githubusercontent.com/50433145/66795037-571c6400-ef3e-11e9-81a1-59834655bdcc.JPG" width="50%">

##### AVL tree는 도시의 이름을 기준으로 도시들의 객체 정보가 저장되어 있다. AVL tree를 구성하는 노드들은 Balance Factor(BF)를 가지고 있으며, 이를 활용하여 트리의 균형을 유지한다. AVL tree 구성의 예시는 다음과 같다. 

<img src="https://user-images.githubusercontent.com/50433145/66795173-c8f4ad80-ef3e-11e9-837e-614d6897d65b.JPG" width="70%" height="70%">


## <u>**Notice**</u>
--------------------------
### (( 11/1 추가 사항 ))
![추가자료](https://user-images.githubusercontent.com/50433145/67996680-ce1e6000-fc93-11e9-8a13-b79125b31bb2.JPG)

### 1. 프로젝트 문서 및 소스코드 수정사항 ( update 10/23 )

#### [2019_DS_Project2_ver2.pdf](https://github.com/DSLDataStorage/DS_project2_2019_2/files/3736999/2019_DS_Project2_ver2.pdf)
#### [2019_DS_Project2_ver3.pdf](https://github.com/DSLDataStorage/DS_project2_2019_2/files/3742331/2019_DS_Project2_ver3.pdf)
#### [2019_DS_Project2_ver4.pdf](https://github.com/DSLDataStorage/DS_project2_2019_2/files/3753691/2019_DS_Project2_ver4.pdf)
#### [2019_DS_Project2_ver5.pdf](https://github.com/DSLDataStorage/DS_project2_2019_2/files/3759259/2019_DS_Project2_ver5.pdf)


```
10/15 - 프로젝트 문서의 [그림 5] Graph 구성의 예 수정 ( 노드 번호를 도시의 이름순이 되도록 수정 ver2 )
10/16 - Base 코드 Manager.cpp 수정 ( run() 내부에서 호출되는 함수 이름 수정 )
10/17 - Base 코드 Graph.h 수정 ( 멤버 변수 mList, vertex 를 PDF 와 동일하게 수정 )
10/18 - 프로젝트 문서의 Functional Requirement의 SEARCH_AVL 사용법 수정 ( 도시 이름 -> 도시위치정보 ) 
10/22 - 프로젝트 문서의 Functional Requirement의 INSERT 에러 코드 오타 수정( 100 -> 200 )
      - 프로젝트 문서의 구현시 반드시 정의해야하는 Class 멤버 변수의 4.Graph 클래스의 멤버 변수의 이름을 matrix(=mList), mst(=mstMatrix)
        와같이 두 이름 모두 가능하도록 표기하여 수정
10/23 - new) 프로젝트 문서의 Functional Requirement의 SEARCH_AVL과 DELETE_AVL의 에러코드를 Error code 표에 명시한거와 같이 수정 ( 
            SEARCH_AVL - 500 , DELETE_AVL - 400 )
       - 그림 3의 Graph 클래스의 Size변수의 사용여부는 선택사항
```


### 2. 자주들어오는 질문 
**Q. base 코드의 멤버변수가 public으로 되어 있어요~**  
A. 그냥 private으로 된것처럼 get/set함수를 이용해서 멤버변수를 이용해주시면 됩니다.   


**Q. LOAD랑 INSERT도 명령어 인자 추가 혹은 부족할때 예외처리해야하나요??**  
A. LOAD랑 INSERT는 그런 경우가 없다고 가정하였으니 안해도됩니다!! 

**Q. SEARCH_AVL 이랑 DELETE_AVL 의 에러코드는 각각 뭔가요??**    
A. 표에 나와있는것으로 해서 SEARCH_AVL은 500, DELETE_AVL은 400 입니다. Manager.cpp의 run() 함수에 선언된 순서와 헷갈리시지 않길 바랍니다!!

**Q. City list 파일의 구분자는 무엇인가요?**    
A. 모두 탭으로 구분해서 고유번호와 도시 이름, 나라 이름을 구분해서 입력하시면 됩니다!

--------------------------
### Knowledge 
##### 아래 명령어 예시에서 앞의 $ 로 시작되는 부분은 명령어 입력 부분이고, 그 외 는 출력 부분임
##### 리눅스 명령어 요약
1. ls  :  list로 현재 작업중인 디렉토리의 파일 및 포함된 디렉토리 목록들을 표시 ( -a, -l 속성으로 자세한 출력 가능)
2. pwd  :  print working directory로 현재 작업중인 디렉토리의 절대경로 위치 출력
3. cd  : change directory로 디렉토리 를 변경( . : 현재 디렉토리, .. : 상위 디렉토리 ) 
```
$ ls
Documents Download
$ ls -l
drwxr-xr-x 2 user user     4096 Sep 13  2018 Documents
drwxr-xr-x 2 user user     4096 Sep 26  2018 Downloads
$ pwd
/home/user
$ cd Download
$ pwd
/home/user/Downloads
```
### requirement
##### 먼저 해당 github에 저장되어 있는 base 코드를 다운받는다.
```
$ sudo apt-get install git
$ git clone https://github.com/DSLDataStorage/DS_project2_2019_2.git
```
##### 특정 디렉토리에서 ls 명령어를 입력하였을때, 다음과 같이 필요한 모든 소스코드와 텍스트파일, Makefile이 존재해야한다.
```
$ ls
AVLNode.cpp AVLNode.h AVLTree.cpp AVLTree.h city_list.txt CityData.cpp CityData.h command.txt Graph.cpp
Graph.h log.txt main.cpp Makefile Manager.cpp Manager.h
```

### how to compile this project
##### make명령어 실행 후 ls명령어를 통해 해당 디렉토리를 확인해 보면 run 이라는 파일이 생긴것을 확인 할 수 있다. 
```
$ make
g++ -std=c++11 -g -o run AVLNode.cpp AVLTree.cpp CityData.cpp Manager.cpp Graph.cpp main.cpp AVLTree.h Manager.h Graph.h AVLNode.h CityData.h

$ ls
AVLNode.cpp AVLNode.h AVLTree.cpp AVLTree.h city_list.txt CityData.cpp CityData.h command.txt Graph.cpp
Graph.h log.txt main.cpp Makefile Manager.cpp **run** Manager.h
```
### how to run code
##### ./(생성된 실행파일) 의 형식으로 생성된 run 실행파일을 실행한다.
##### 실행하면 결과로 log.txt파일이 생성되면서 결과가 log.txt 에 저장된다. (아래 log.txt 파일의 출력결과는 base 코드의 출력 예시임으로 실제 base 코드에서는 LOAD 명령어를 수행하여 AVL에 저장하는 부분이 포함되어 있지 않음) 
```
$ ./run
$ cat log.txt
==> command 1) LOAD
Success
```
