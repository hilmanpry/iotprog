const int ledMerah = D12;  // Pin untuk LED merah
const int ledBiru = D13;   // Pin untuk LED biru

void setup() {
  pinMode(ledMerah, OUTPUT);  // Set pin ledMerah sebagai output
  pinMode(ledBiru, OUTPUT);   // Set pin ledBiru sebagai output
  Serial.begin(115200);       // Mulai komunikasi serial dengan baud rate 115200
  Serial.println("Ketik 'M' untuk menyalakan LED merah, 'm' untuk mematikannya, 'B' untuk menyalakan LED biru, 'b' untuk mematikannya, dan 'K' untuk mengedipkan LED merah."); 
}

void loop() {
  if (Serial.available() > 0) {
    char perintah = Serial.read();

    switch (perintah) {
      case 'M':
        digitalWrite(ledMerah, HIGH);  // Nyalakan LED merah
        Serial.println("LED merah dinyalakan."); // Kirim pesan ke Serial Monitor
        break;
      case 'm':
        digitalWrite(ledMerah, LOW);   // Matikan LED merah
        Serial.println("LED merah dimatikan."); // Kirim pesan ke Serial Monitor
        break;
      case 'B':
        digitalWrite(ledBiru, HIGH);   // Nyalakan LED biru
        Serial.println("LED biru dinyalakan."); // Kirim pesan ke Serial Monitor
        break;
      case 'b':
        digitalWrite(ledBiru, LOW);    // Matikan LED biru
        Serial.println("LED biru dimatikan."); // Kirim pesan ke Serial Monitor
        break;
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
  Serial.println("LED merah berkedip."); // Kirim pesan ke Serial Monitor saat LED berkedip
}
