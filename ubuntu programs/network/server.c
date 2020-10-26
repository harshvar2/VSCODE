#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>

#include<netinet/in.h>

int main(){
	
	char server_message[256]="You have reached the server";
	//Create the server  socket
	int server_socket=socket(AF_INET,SOCK_STREAM,0);
	if(server_socket>=-1)
	printf("socket created succesfully\n");
	
	//define the server address
	struct sockaddr_in server_address,client;
	server_address.sin_family=AF_INET;
	server_address.sin_port=htons(7000);
	server_address.sin_addr.s_addr=inet_addr("127.0.0.1");
	
	//Bind the socket to our specified IP and Port
	int b=bind(server_socket,(struct sockaddr*) & server_address,sizeof(server_address));
	if(b>=-1)
	printf("Bind succesfull\n");
	
	int l=listen(server_socket,5);
	if(l>=-1)
	printf("Listen Succesfull\n");
	
	int client_socket;
	int lg=sizeof(client);
	client_socket = accept(server_socket,(struct sockaddr*)&client,&lg);
	if(client_socket>=-1)
	printf("Connection Success\n");
	
	
	//Send the message 
	send(client_socket,server_message,sizeof(server_message),0);
	
	//recieve Client data
	char mfc[1000];
	for(int i=0;i<100;i++)
	{
	mfc[i]='\0';
	}
	recv(client_socket,mfc,sizeof(mfc),0);
	int l1=strlen(mfc);
	printf("Message recieved\n");
	
	//Print out the server response
	printf("The length of client  data: %d",l1);
	
	
	
	
	
	close(server_socket);
	
	return 0;
}
