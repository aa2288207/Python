#include "unp.h"
struct args{
	long arg1;
	long arg2;
};
struct result{
    long sum;
};
void
str_echo(int sockfd)
{
    ssize_t n;
    struct args args;
	struct  result result;
	for(; ;){
        if((n=Read(sockfd,&args,sizeof(args)))==0)
			return;
		result.sum=args.arg1*args.arg2;
		Writen(sockfd,&result,sizeof(result));
   }

}