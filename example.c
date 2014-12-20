const int LED = 13;
const int LED2 = 12;
const int BUTTON = 7;

int val = 0;

void setup(){
	pinMode(LED, OUTPUT);
	pinMode(LED2, OUTPUT);
	digitalWrite(LED, HIGH);
	// pinMode(BUTTON, INPUT);
}

void loop(){
	digitalWrite(LED2, HIGH);
	delay(1);
	digitalWrite(LED2, LOW);
	delay(20);
}