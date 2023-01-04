#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define MAX 64

int main(){
    int fd, length = 0;
    
    char buf[MAX];

    // 파일 열기
    if((fd = open("test", O_RDONLY)) == -1){
        perror("open failed");
        exit(1);
    }
 
    // 파일 읽기
    length = read(fd, buf, MAX);

    // 읽은 문자들 출력
    puts(buf);

    // 문자열 총 길이 출력
    printf("total character in test: %d\n", length);
    close(fd);

    return 0;
}