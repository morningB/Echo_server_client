#define _WINSOCK_DEPRECATED_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#pragma comment(lib, "ws2_32");

#define BUFSIZE 512

int main(int argc, char* argv[]) {
	WSADATA wsa;
	if (WSAStartup(MAKEWORD(2, 2), &wsa) != 0)
		return -1;

	//socket()
	SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);
	printf("(1) socket 생성 완료\n");

	//connect()
	SOCKADDR_IN serveraddr;
	memset(&serveraddr, 0, sizeof(serveraddr));
	serveraddr.sin_family = AF_INET;
	serveraddr.sin_addr.s_addr = inet_addr("통신 IP 주소 입력");
	serveraddr.sin_port = htons(9000);

	connect(sock, (SOCKADDR*)&serveraddr, sizeof(serveraddr));
	printf("(2) 연결 요청보낼 문자열 입력: ");

	//send() & recv()
	while (1) {
		char buf[BUFSIZE + 1];
		printf("보낼 문자열 입력: ");
		scanf("%s", &buf);

		send(sock, buf, strlen(buf), 0);
		printf("(3) 입력 메세지 송신\n");
		if (strcmp(buf, "exit") == 0)
			break;
		int retval = recv(sock, buf, BUFSIZE, 0);
		buf[retval] = '\0';
		printf("(4) 메세지 수신: %s\n", buf);
	}
	printf("(5) 종료\n");
	closesocket(sock);
	WSACleanup();
	return 0;
}