// Pin definitions
const int buttonRedPin = D3;  // Pin untuk tombol merah
const int ledRedPin = D12;    // Pin untuk LED merah
const int buttonBluePin = D2; // Pin untuk tombol biru
const int ledBluePin = D13;   // Pin untuk LED biru

void setup() {
  // Set pin modes
  pinMode(buttonRedPin, INPUT_PULLUP);   // Tombol merah dengan internal pull-up
  pinMode(ledRedPin, OUTPUT);            // LED merah
  pinMode(buttonBluePin, INPUT_PULLUP);  // Tombol biru dengan internal pull-up
  pinMode(ledBluePin, OUTPUT);           // LED biru
  
  // Nyalakan LED saat awal
  digitalWrite(ledRedPin, HIGH); // LED merah menyala
  digitalWrite(ledBluePin, HIGH); // LED biru menyala
}

void loop() {
  // Baca status tombol merah
  bool currentButtonRedState = digitalRead(buttonRedPin);

  // Jika tombol merah ditekan, matikan LED merah, jika dilepas, nyalakan LED merah
  if (currentButtonRedState == LOW) {
    digitalWrite(ledRedPin, LOW);  // Matikan LED merah saat tombol ditekan
  } else {
    digitalWrite(ledRedPin, HIGH); // Nyalakan LED merah saat tombol dilepas
  }

  // Baca status tombol biru
  bool currentButtonBlueState = digitalRead(buttonBluePin);

  // Jika tombol biru ditekan, matikan LED biru, jika dilepas, nyalakan LED biru
  if (currentButtonBlueState == LOW) {
    digitalWrite(ledBluePin, LOW);  // Matikan LED biru saat tombol ditekan
  } else {
    digitalWrite(ledBluePin, HIGH); // Nyalakan LED biru saat tombol dilepas
  }
}
