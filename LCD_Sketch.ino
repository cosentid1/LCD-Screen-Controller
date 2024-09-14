#include <LiquidCrystal.h>

#define UPPIN 12
#define LEFTPIN 11
#define DOWNPIN 10
#define RIGHTPIN 9

const int rs = 2, en = 3, d4 = 4, d5 = 5, d6 = 6, d7 = 7;

enum STATE {START, UP, DOWN, LEFT, RIGHT};
enum STATE myDir;

bool running;
char display[] = "..";
int row = 7, col = 0;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  lcd.begin(16, 2);
  pinMode(UPPIN, INPUT);
  pinMode(DOWNPIN, INPUT);
  pinMode(LEFTPIN, INPUT);
  pinMode(RIGHTPIN, INPUT);
  myDir = START;
  running = false;
}

void loop() {
  // put your main code here, to run repeatedly:
  if(!running) return;
  GetInput();
  DrawScreen();
  delay(100);
  lcd.clear();
  Serial.println(myDir);
  delay(100);
}

void GetInput(){
  if (digitalRead(UPPIN) == HIGH){
    myDir = UP;
  }else if (digitalRead(LEFTPIN) == HIGH){
    myDir = LEFT;
  }else if (digitalRead(DOWNPIN) == HIGH){
    myDir = DOWN;
  }else if (digitalRead(RIGHTPIN) == HIGH){
    myDir = RIGHT;
  }
}

void DrawScreen(){
  if (myDir == LEFT){

  }else if (myDir == RIGHT){
    row++;
    if (row > 15) row = 0;
    lcd.setCursor(row, col);
    lcd.print(display[0]);
    if (row+1 > 15){
      lcd.setCursor(0, col);  
    }
    lcd.print(display[1]);
  }else if (myDir == UP){
    myDir = DOWN;
  }else if (myDir == DOWN){
    myDir = RIGHT;
  }else{
    lcd.setCursor(row, col);
    lcd.print(display);
  }
}
