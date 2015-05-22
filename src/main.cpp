#include "ae.h"
#include <stdio.h>

int timerEvent(struct aeEventLoop *eventLoop, long long id, void *clientData) {
	printf("timer running...\n");
	return 1000;
}

int main(int argc, char** argv)
{
	aeEventLoop *el = aeCreateEventLoop(100);
	if(aeCreateTimeEvent(el, 1000, timerEvent, NULL, NULL) == AE_ERR) {
		printf("Can't create the serverCron time event.");
		return 1;
	}
	aeMain(el);
	aeDeleteEventLoop(el);
}