---
# ⚾ 프로젝트 소개
- 프로젝트명 : 멀티플레이어 숫자야구 게임
- 프로젝트 기간 : 2025.03.13 ~ 2025.03.23
- 추가 수정 기간 : 2025.03.24 ~
- 게임 장르 : 추리 퍼즐 · 턴제 게임
- 프로젝트 소개 : 3자리 숫자를 추리하여 스트라이크와 볼을 통해 승패를 결정하는 멀티플레이어 숫자야구 게임입니다.  

---

## 시연 영상
![screenshot](https://github.com/user-attachments/assets/27fb7229-9c58-4e2f-843c-4f1d4c22b1ec)
[https://www.youtube.com/watch?v=iCYjIEvvt40&t=2s](https://www.youtube.com/watch?v=iCYjIEvvt40&t=2s)

---

## 기술 스택
<img src="https://github.com/user-attachments/assets/c95a6ae1-7ee6-4927-8b2d-eead485340a6" width="50"/>
<img src="https://github.com/user-attachments/assets/283dd601-4670-458f-84be-ba989a921535" width="50"/>
<img src="https://github.com/user-attachments/assets/a5342758-f2fa-4ace-9ab5-d4dacfc8735a" width="50"/>
<img src="https://github.com/user-attachments/assets/36ad0fa9-986a-47be-a6f2-8bef8a63bbb6" width="50"/>



---
## 주요 기능
### 1. 멀티플레이
- 언리얼의 리슨서버를 활용하여 멀티플레이 구현
- GameState를 사용하여 클라이언트에게 이벤트 브로드캐스트
- 게임 진행 상황 동기화

### 2. C++ 로직 분리  
- 난수 생성과 판정 로직을 블루프린트가 아닌 BlueprintFunctionLibbrary를 상속받아 C++로 구현하여 블루프린트에서 사용 가능하도록 제작
- 유지보수성과 로직 재사용성 향상  

### 3. 3자리 난수 생성
- TSet을 사용하여 중복되지 않는 랜덤 3자리 수를 자동 생성  

### 4. 스트라이크/볼 판정 및 점수 시스템  
- 입력된 숫자에 대해 실시간으로 스트라이크(S), 볼(B) 판정  
- 3S0B가 나오면 해당 플레이어가 점수를 얻고 게임 종료  

### 5. 무승부 처리  
- 양 플레이어 모두 정답을 맞히지 못한 경우 무승부

### 6. 턴 제한 시간 및 타이머 UI  
- 각 턴마다 입력 시간 제한을 두고  
- 제한 시간 초과 시 자동으로 기회 소진  
- 남은 시간은 UI로 시각화  

### 7. 실시간 점수판 UI  
- Host와 Guest의 입력값과 결과, 점수를 화면에 실시간으로 표시  
- 경기 상황을 직관적으로 확인 가능  

---

## 워크 플로우
![image](https://github.com/user-attachments/assets/5d85c300-2c58-44f4-ae37-1e9a5e00661a)

---

## 사용 기술

- Unreal Engine
- C++
- Blueprint
- Listen Server
