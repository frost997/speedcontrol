 //int data;
int trucX1 = A0; 
int trucY1 = A1;
int trucX2 = A2; 
int trucY2 = A3;
int KEY_VAL = 0;
int button = 5;
int CURRENT_VALUE;
int PREVIOUS_VALUE;
int CURRENT_VALUE1;
int PREVIOUS_VALUE1; 
int M0 = 2; 
int M1 = 3; 
int Pin_Analog7 = A7;     
int Pin_Digital4 = 4;  
int Pin_Digital6 = 6;  
int Pin_Digital7 = 7;
int Pin_Digital8 = 8;  
int Pin_Digital9 = 9;  
int Pin_Digital10 = 10;  
int Pin_Digital11 = 11;   
int Pin_Digital12 = 12;   


void setup ()
{
  pinMode(M0, OUTPUT);
  pinMode(M1, OUTPUT);
  digitalWrite(M0,LOW);
  digitalWrite(M1,LOW);
  pinMode(trucX2, INPUT);
  pinMode(trucY2, INPUT);
  pinMode(trucX1, INPUT);
  pinMode(trucY1, INPUT);
  pinMode(button, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop ()
{
  int KEY = digitalRead(button);
  int x1 = analogRead(trucX1);  // doc gia tri cua truc X
  int y1 = analogRead(trucY1);  // doc gia tri cua truc Y
  int x2 = analogRead(trucX2);  // doc gia tri cua truc X
  int y2 = analogRead(trucY2);

//  Serial.println(x1);
//  Serial.println(y1);
//  Serial.println();
//  Serial.println(x2);
//  Serial.println(y2);
//  Serial.println();

 if((x1>550 && x1<1024) && (y1>=365 && y1<=765)) {  
      CURRENT_VALUE = 1;
      if(CURRENT_VALUE != PREVIOUS_VALUE)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE);
    Serial.println(">");
    delay(5);
    }
    
    //thang
 }
  if((x1>=0 && x1<450) && (y1>=365 && y1<=765)){
     CURRENT_VALUE = 2;
    if(CURRENT_VALUE != PREVIOUS_VALUE)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE);
    Serial.println(">");
    delay(5);
    }
   
    }//lui  
  if((y1>550 && y1<1024) && (x1>=365 && x1<=765)){
     CURRENT_VALUE = 3;
     if(CURRENT_VALUE != PREVIOUS_VALUE)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE);
    Serial.println(">");
    delay(5);
    }
   
    
    }//phai
  if((y1>=0 && y1<450) && (x1>=365 && x1<765)){
    CURRENT_VALUE = 4;
    if(CURRENT_VALUE != PREVIOUS_VALUE)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE);
    Serial.println(">");
    delay(5);
    }
    
    
    }//trai 
  if((x1<530 && x1>430) && (y1<575 && y1>475))
  {
    CURRENT_VALUE = 0;
    if(CURRENT_VALUE != PREVIOUS_VALUE)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE);
    Serial.println(">");
    delay(5);
    }
    
    
    }//stop

////////////////////////////////////////////////////////
 if((x2>550 && x2<1024) && (y2>=365 && y2<=765))
 { 
  delay(5); 
  if((x2>550 && x2<1024) && (y2>=365 && y2<=765))
  {
     CURRENT_VALUE1 = 5;
     if(CURRENT_VALUE1 != PREVIOUS_VALUE1)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE1);
    Serial.println(">");
    delay(5);
    }
  }
    //thang
 }
  if((x2>=0 && x2<450) && (y2>=365 && y2<=765))
  {
     CURRENT_VALUE1 = 6;
     if(CURRENT_VALUE1 != PREVIOUS_VALUE1)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE);
    Serial.println(">");
    delay(5);
    }
    
  }//lui  
  
  if((y2>550 && y2<1024) && (x2>=365 && x2<=765))
  {
    CURRENT_VALUE1 = 7;
    if(CURRENT_VALUE1 != PREVIOUS_VALUE1)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE1);
    Serial.println(">");
    delay(5);
    } 
    
  }//phai
  if((y2>=0 && y2<450) && (x2>=365 && x2<765))
  {
    
   CURRENT_VALUE1 = 8;
   if(CURRENT_VALUE1 != PREVIOUS_VALUE1)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE1);
    Serial.println(">");
    delay(5);
    }
   
  }//trai 
  if((x2<530 && x2>430) && (y2<575 && y2>475))
  {
       CURRENT_VALUE1 = 9;
       if(CURRENT_VALUE1 != PREVIOUS_VALUE1)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE1);
    Serial.println(">");
    delay(5);
    }
    
  }
  if(KEY == 0)
  {
    CURRENT_VALUE1 = 10;
    if(CURRENT_VALUE1 != PREVIOUS_VALUE1)
    {
    Serial.println("<");
    Serial.println(CURRENT_VALUE1);
    Serial.println(">");
    delay(5);
    }

  } 
  
   PREVIOUS_VALUE1 = CURRENT_VALUE1;
   PREVIOUS_VALUE = CURRENT_VALUE;
 }
//tren hop kieng 
