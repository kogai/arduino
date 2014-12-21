const int LED = 9;
const int BUTTON = 7;

int val = 0;
int val_regacy = 0;
boolean state = false;
boolean state_regacy = false;

int bright = 0;
unsigned long startTime = 0;

void setup(){
	Serial.begin(9600);
	pinMode(LED, OUTPUT);
	pinMode(BUTTON, INPUT);
}

void loop(){
	val = digitalRead(BUTTON);

	if( val == HIGH && val_regacy == LOW ){
		startTime = millis();
		if( state == false ){
			state = true;
		}else if( state == true ){
			state = false;
		}
	}

	if( state == true && ( millis() - startTime ) > 500 ){
		bright++;
		delay(10);
		if( bright > 255 ){
			bright = 0;
		}
	}
	val_regacy = val;
    Serial.println( state );

	if( state == true ){
		analogWrite(LED, bright);
	}else{
		analogWrite(LED, 0);
	}
}