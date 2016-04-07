#include "messages.h"
#include <cstdlib>

using namespace std;

const int MESSAGE_COUNT = 5;

string  message() {

    switch(rand()%MESSAGE_COUNT) {
        case 0: return "Hello World";
	case 1: return "Greetings Earth";
	case 2: return "Howdy Planet";
	case 3: return "Hi Sphere";
	case 4: return "Aloha Globe";
	default: return "Error";
    }
   
}
