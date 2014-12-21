const int LED = 9;
const int BUTTON = 7;

int val = 0;
int val_regacy = 0;
boolean state = false;
boolean state_regacy = false;

void setup(){
	Serial.begin(9600);
	pinMode(LED, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop(){
	val = digitalRead(BUTTON);
	delay(100);
	val_regacy = val;

	if( val = HIGH && val_regacy == HIGH ){
		if( state == false ){
			state = true;
		}else if( state == true ){
			state = false;
		}
	}
    Serial.println( state );

	if( state == true ){
		analogWrite(LED, 10);
	}else{
		analogWrite(LED, 0);
	}
}