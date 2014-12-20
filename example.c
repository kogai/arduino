const int LED = 13;
const int LED2 = 9;
const int BUTTON = 7;

int i = 0;

void setup(){
	Serial.begin(9600);
	pinMode(LED, OUTPUT);
	pinMode(LED2, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop(){
	analogWrite(LED2, 50);
	delay(1);
	digitalWrite(LED2, LOW);
	delay(20);
	Serial.println(digitalRead(BUTTON));
	// for ( i = 0; i < 255; ++i)
	// {
	// 	analogWrite(LED2, i);
	// 	delay(25);
	// }
}