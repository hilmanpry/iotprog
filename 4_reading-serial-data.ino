const int ledMerah = D12;  // Pin untuk LED merah
const int ledBiru = D13;   // Pin untuk LED biru

void setup() {
  pinMode(ledMerah, OUTPUT);  // Set pin ledMerah sebagai output
  pinMode(ledBiru, OUTPUT);   // Set pin ledBiru sebagai output
  Serial.begin(115200);       // Mulai komunikasi serial dengan baud rate 115200
}

void loop() {
  if (Serial.available() > 0) {
    char perintah = Serial.read();

    switch (perintah) {
      case 'M':
        digitalWrite(ledMerah, HIGH);  // Nyalakan LED merah
        break;
      case 'm':
        digitalWrite(ledMerah, LOW);   // Matikan LED merah
        break;
      case 'B':
        digitalWrite(ledBiru, HIGH);   // Nyalakan LED biru
        break;
      case 'b':
        digitalWrite(ledBiru, LOW);    // Matikan LED biru
        break;
      // Tambahkan kasus lain untuk fitur tambahan di sini, misalnya:
      case 'K':
        kedipkanLED(ledMerah);  // Fungsi untuk mengedipkan LED merah
        break;
    }
  }
}

void kedipkanLED(int pinLED) {
  // Fungsi untuk mengedipkan LED
  digitalWrite(pinLED, HIGH);
  delay(500);
  digitalWrite(pinLED, LOW);
  delay(500);
}