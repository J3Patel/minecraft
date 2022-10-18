





int axe = A3;
int pickAxe = A4;
int otherStuff = A5;
unsigned long axeHitLastTime;
int hitInbetweenTimeInMili = 3000;
unsigned long hits = 0;
void setup() {
  
}



void loop() {
  
  readAxe();
  readPickAxe();
  readOtherStupStuff();
}

void readAxe() {
  int val = analogRead(axe);
  if (val >= 1023) {
    axeHitLastTime = millis();
    hits += 1;
  }

  if (millis() - axeHitLastTime < hitInbetweenTimeInMili) {
    // enable hit key
  } else {
    // release hit key
  }
}

void readPickAxe() {
  int val = analogRead(pickAxe);
  if (val >= 1023) {
    axeHitLastTime = millis();
    hits += 1;
  }

  if (millis() - axeHitLastTime < hitInbetweenTimeInMili) {
    // enable hit key
  } else {
    // release hit key
  }
}

void readOtherStupStuff() {
  int val = analogRead(otherStuff);
  if (val >= 1023) {
    axeHitLastTime = millis();
    hits += 1;
  }

  if (millis() - axeHitLastTime < hitInbetweenTimeInMili) {
    // enable hit key
  } else {
    // release hit key
  }
}
