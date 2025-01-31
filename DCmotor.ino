int motorRight1 = 2;  // توصيل المحرك الأيمن
int motorRight2 = 3;
int motorLeft1 = 4;   // توصيل المحرك الأيسر
int motorLeft2 = 5;

void setup() {
  pinMode(motorRight1, OUTPUT);
  pinMode(motorRight2, OUTPUT);
  pinMode(motorLeft1, OUTPUT);
  pinMode(motorLeft2, OUTPUT);
}

void loop() {
  // الحركة للأمام لمدة 30 ثانية
  digitalWrite(motorRight1, HIGH);
  digitalWrite(motorRight2, LOW);
  digitalWrite(motorLeft1, HIGH);
  digitalWrite(motorLeft2, LOW);
  delay(30000);

  // الحركة للخلف لمدة دقيقة
  digitalWrite(motorRight1, LOW);
  digitalWrite(motorRight2, HIGH);
  digitalWrite(motorLeft1, LOW);
  digitalWrite(motorLeft2, HIGH);
  delay(60000);

  // الحركة يمينًا ويسارًا بالتناوب لمدة دقيقة
  for (int i = 0; i < 5; i++) {  // 5 دورات للتناوب
    // يمين
    digitalWrite(motorRight1, LOW);
    digitalWrite(motorRight2, HIGH);
    digitalWrite(motorLeft1, HIGH);
    digitalWrite(motorLeft2, LOW);
    delay(6000);  // 6 ثواني لكل اتجاه

    // يسار
    digitalWrite(motorRight1, HIGH);
    digitalWrite(motorRight2, LOW);
    digitalWrite(motorLeft1, LOW);
    digitalWrite(motorLeft2, HIGH);
    delay(6000);
  }
}
