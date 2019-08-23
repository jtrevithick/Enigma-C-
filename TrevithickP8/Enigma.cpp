//James Trevithick							jtrevithick2@cnm.edu							TrevithickP8

#include "Enigma.h"


//Encode the message
void Enigma::Encode()
{
	codedMessage = "";
	for (int i = 0; i < message.length(); i++) {
		int c = message[i];
		int offset;
		if (c + key > 126)
		{
			offset = c + key - 126;
			c = 31 + offset;
		}
		
		else {
			c = c + key;
		}
	
		codedMessage += (char)(c);
	}
}

//Decode the message
void Enigma::Decode()
{
	message = "";
	for (int i = 0; i < codedMessage.length(); i++) {
		int c = codedMessage[i];
		int offset;
		if (c - key < 32) 
		{
			offset = c - key + 165;
			c = 32 - offset;
		}
	
		else {
			c = c - key;
		}
		message += (char)(c);
	}
}

Enigma::Enigma()
{
	srand((unsigned)time(nullptr));
}

void Enigma::SetMessage(string msg)
{
	//randomly create key between 1-50
	if (key <= 50) {
	key = rand()%50+1;

	}
	else
	{
		key = 1;
	}
	
	message = msg;
	Encode();

}


//sends message to user
void Enigma::SetMessage(string msg, int key)
{
	this->key = key;
	message = msg;
	Encode();

}

//sends the coded message to user
void Enigma::SetCodedMessage(string codedMsg, int key)
{
	codedMessage = codedMsg;
	this->key = key;
	Decode();

}


