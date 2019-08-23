//James Trevithick							jtrevithick2@cnm.edu							TrevithickP8

#ifndef ENIGMA_H
#define ENIGMA_H

#include <string>
#include <ctime>

using namespace std;

class Enigma
{
private:
	int key = 1;
	string message= "", codedMessage = "";
	void Encode();
	void Decode();

public:
	Enigma();
	void SetMessage(string msg);
	void SetMessage(string msg, int key);
	void SetCodedMessage(string codedMsg, int key);
	string GetCodedMessage() { return codedMessage; }
	string GetDecodedMessage() { return message; }
	int GetKey() { return key; }
};
#endif //ENIGMA_H
