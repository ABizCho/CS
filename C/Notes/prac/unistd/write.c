#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
// #include <stdlib.h>

int main(int argc, char* argv[]){
    int fd;

    // 파일을 쓰기전용으로 생성하면서 열고, 권한 값을 644로 준다.
    if((fd = open("test_w", O_WRONLY | O_CREAT, 0644)) == -1){

    perror("open failed");
    exit(1);
    }

    // 파일에 명령인수의 내용을 쓴다.
    if(write(fd, argv[1], strlen(argv[1])) == -1){
        perror("write failed");
        exit(1);
    }

    close(fd);

    return 0;
}
