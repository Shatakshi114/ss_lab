/*
============================================================================
Name : program7.c
Author : Shatakshi Tiwari
Description : Write a program to copy file1 into file2 ($cp file1 file2)
Date: 23rd , Aug 2023
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(int argc , char  *argv[])
{
       if(argc !=3) 
       {
       printf("incorrect no. of arguments\n");
       }
     return 0 ;

       int fd_read = open(argv[1] , O_RDONLY);
       int fd_write =  open(argv[2] , O_WRONLY|O_CREAT);
       if(fd_read == -1 || fd_write ==-1 ) 
{
	       printf("ERROR\n");
}

while(1)
{
	char buf;
	int char_read = read(fd_read , &buf, 1 );
	if(char_read == 0)
		break ; 
	int char_write = write(fd_write ,&buf , 1 );
}

int fd_read_close = close(fd_read);
int fd_write_close = close(fd_write);

if(fd_read_close == -1 || fd_write_close == -1 )

{
	printf("ERROR\n");
}
return 0 ;
}




//// three arg are taken for ./a.ot and two files
// open returns value of fd >> 0 for input , 1 for output , 2 for error 
