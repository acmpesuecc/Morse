int ledPin = 9;
int led = ledPin;

// Start the Serial Monitor
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void space() {
  delay(1200);
}

void dot() {
  digitalWrite(led, HIGH);
  delay(300);
  digitalWrite(led, LOW);
  delay(300);
}

void dash() {
  digitalWrite(led, HIGH);
  delay(900);
  digitalWrite(led, LOW);
  delay(300);
}

void gap() {
  delay(600);
}

// It takes each character and map it to the morse code output

void morse(char input) {
  Serial.println(input);
  if (input == 'a' || input == 'A') {
    dot();
    dash();
  } else if (input == 'b' || input == 'B') {
    dash();
    dot();
    dot();
    dot();

  } else if (input == 'c' || input == 'C') {
    dash();
    dot();
    dash();
    dot();


  } else if (input == 'd' || input == 'D') {
    dash();
    dot();
    dot();
  } else if (input == 'e' || input == 'E') {
    dot();

  } else if (input == 'f' || input == 'F') {
    dot();
    dot();
    dash();
    dot();
  } else if (input == 'g' || input == 'G') {
    dash();
    dash();
    dot();
  } else if (input == 'h' || input == 'H') {
    dot();
    dot();
    dot();
    dot();
  } else if (input == 'i' || input == 'I') {
    dot();
    dot();
  } else if (input == 'j' || input == 'J') {
    dot();
    dash();
    dash();
    dash();
  } else if (input == 'k' || input == 'K') {
    dash();
    dot();
    dash();
  } else if (input == 'l' || input == 'L') {
    dot();
    dash();
    dot();
    dot();
  } else if (input == 'm' || input == 'M') {
    dash();
    dash();
  } else if (input == 'n' || input == 'N') {
    dash();
    dot();
  } else if (input == 'o' || input == 'O') {
    dash();
    dash();
    dash();
  } else if (input == 'p' || input == 'P') {
    dot();
    dash();
    dash();
    dot();
  } else if (input == 'q' || input == 'Q') {
    dash();
    dash();
    dot();
    dash();
  } else if (input == 'r' || input == 'R') {
    dot();
    dash();
    dot();
  } else if (input == 's' || input == 'S') {
    dot();
    dot();
    dot();
  } else if (input == 't' || input == 'T') {
    dash();
  } else if (input == 'u' || input == 'U') {
    dot();
    dot();
    dash();
  } else if (input == 'v' || input == 'V') {
    dot();
    dot();
    dot();
    dash();
  } else if (input == 'w' || input == 'W') {
    dot();
    dash();
    dash();
  } else if (input == 'x' || input == 'X') {
    dash();
    dot();
    dot();
    dash();
  } else if (input == 'y' || input == 'Y') {
    dash();
    dot();
    dash();
    dash();
  } else if (input == 'z' || input == 'Z') {
    dash();
    dash();
    dot();
    dot();
  } else if (input == ' ') {
    space();
  } 
  gap();
}


void loop() {
  char n;
  int len = 0;
  int len1 = 0;
  char c;
  int choice = 0;
  String binval;
  
  Serial.println("Please enter 0 for buzzer as output and 1 for led as output");
  while (Serial.available() == 0) {
  }
  c=Serial.read();
  Serial.println("Please enter your string: ");
  // Loop which waits for user to enter string in Serial Monitor
  while (Serial.available() == 0) {
  }
  String input = Serial.readString();
  input.trim();
  Serial.read();
  choice=c-'0';
  ledPin=ledPin+choice;
  led=led+choice;
  len = input.length();
    Serial.println(input);
    for (int i = 0; i < len; i++) {
      n = input.charAt(i);
      morse(n);
    }
  }
