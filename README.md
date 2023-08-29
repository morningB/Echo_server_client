# Echo_server_client
> Echo 서버와 클라이언트 통신에 대한 코드

- Echo
: 반사 따위의 작용으로 충분한 진폭과 명확한 지연을 갖고 되돌아오는 파
- Echo 서버
: 클라이언트가 전송한 데이터를 그대로 되돌려 전송하는 기능을 가진 서버

## 시나리오 예시

1. 하나의 컴퓨터에서는 Echo Server가 동작하며, 하나의 컴퓨터에서는 Echo Client가 동작한다
2. 서버 프로그램이 먼저 시작되어 클라이언트의 접속을 대기
3. 클라이언트 프로그램은 서버로 접근, 연결 후 클라이언트는 서버로 메시지 전송
4. 서버는 클라이언트로부터 받은 메시지를 클라이언트에게 회신
  ![image](https://github.com/morningB/Echo_server_client/assets/114423035/6577da30-30bf-4f2a-bbe3-b758f70d6060)

## 단순 채팅 프로그램

- 다음과 같이 채팅을 주고받는 프로그램 구현
: 서버가 클라이언트의 접속을 대기
: 클라이언트가 먼저 채팅을 입력하고, 이를 수신한 후 서버가 채팅을 입력
- IP주소는 각자의 상황에 맞게 하면 됨

  ## 결과
  
  - 서버 (반드시 먼저 실행)
    
![image](https://github.com/morningB/Echo_server_client/assets/114423035/daa8220a-1d7f-43a3-b63f-1f2434b9792f)


  - 클라이언트
    
![image](https://github.com/morningB/Echo_server_client/assets/114423035/822d198c-eff9-4101-bb7d-c77dca42a5f7)
