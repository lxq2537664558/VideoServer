#include <sys/epoll.h>

class CEpoll
{
public:
	CEpoll(int size);
	void AddEvent(int sockfd);
	void DelEvent(int sockfd);
	int Wait(struct epoll_event *ev_read,int counts);
	int Getepoll();
private:
	int epfd;
};

