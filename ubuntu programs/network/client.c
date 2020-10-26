#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include<unistd.h>

int main(){
	//Create a socket
	int net_socket;
	net_socket=socket(AF_INET,SOCK_STREAM,0);
	if(net_socket>=-1)
	printf("Socket created succesfully\n");
	

	//specify an address for the socket
	struct sockaddr_in server_address;
	server_address.sin_family=AF_INET;
	server_address.sin_port=htons(7000);
	server_address.sin_addr.s_addr=inet_addr("127.0.0.1");
	
	//Connet to the socket
	int connection_status=connect(net_socket,(struct sockaddr *) &server_address, sizeof(server_address));
	if(connection_status>=-1)
	printf("Connection Succesful\n");
	
	//Send data to server
	char mts[1000];
	printf("Enter data to send to server\n");
	scanf("%[^\n]",mts);
	send(net_socket,mts,sizeof(mts),0);
	
	
	//Recieve data from the server
	/*char ch[100];
	for(int i=0;i<100;i++)
	{
	ch[i]='\0';
	}
	recv(net_socket,ch,sizeof(ch),0);
	
	printf("Message recieved\n");
	
	int l=strlen(ch);
	
	//Print out the server response
	printf("The length of server  data: %d",l);
	*/
	
	close(net_socket);	
	
	return 0;
}
