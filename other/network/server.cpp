#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>

int main(){
  int sockfd;
  int client_sockfd;
  struct sockaddr_in addr;

  socklen_t len = sizeof(struct sockaddr_in);
  struct sockaddr_in from_addr;

  char buf[1024];

  memset(buf, 0, sizeof(buf));
  if((sockfd = socket(AF_INET, SOCK_STREAM, 0))<0){
    perror("socket");
  }
  addr.sin_family = AF_INET;
  addr.sin_port = htons(1234);
  addr.sin_addr.s_addr = INADDR_ANY;

  if(bind(sockfd, (struct sockaddr *)&addr, sizeof(addr))<0){
    perror("bind");
  }

  if(listen(sockfd, SOMAXCONN) < 0){
    perror("listen");
  }
  int rsize;
  while(1){
    rsize = recv(client_sockfd, buf, sizeof(buf), 0);

    if(rsize==0){
      break;
    }else if(rsize==-1){
      perror("recv");
    }else{
      printf("receive:%s\n", buf);
      sleep(1);

      printf("send%s\n", buf);
      write(client_sockfd, buf, rsize);
    }
  }
  close(client_sockfd);
  close(sockfd);
  return 0;
}