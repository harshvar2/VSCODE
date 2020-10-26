#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<string.h>

#include<netinet/in.h>


struct student{
	int roll;
	float cgpa;
	char name[20]; 
	};

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
	
	/*send(client_socket,server_message,sizeof(server_message),0);*/
	
	//recieve Client data
	int n;
	recv(client_socket,&n,sizeof(int),0);
	
	
	
	
	struct student s[5]={{1,9.8,"Raju"},{2,9.7,"Shyam"},{3,9.6,"GHanshyam"},{4,9.8,"Baburao"},{5,9.9,"Bandiya"}};
	
	float a;char ba[20];
	
	for(int i=0;i<5;i++){
	if(s[i].roll==n)
	{
	
	
	strcpy(ba,s[i].name);
	send (client_socket,(char*)&ba,sizeof(ba),0); 
	
	
	a=s[i].cgpa;
	send(client_socket,(float*)&a,sizeof(a),0);
	
	
	
	
	}
	
	}
	
	
	
	
	//Print out the server response
	printf("Server:The name and Cgpa is %s\t %.1f",ba,a);
	
	
	
	
	close(server_socket);
	
	return 0;
}
