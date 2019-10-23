 #define P0 6
#define P1 7
#define P2 8
#define P3 9
#define P4 10
#define P5 11
#define P6 12
char let='A';
void setup()
{
  // Serial.begin(9600);
  pinMode(P0,OUTPUT);
  pinMode(P1,OUTPUT);
  pinMode(P2,OUTPUT);
  pinMode(P3,OUTPUT);
  pinMode(P4,OUTPUT);
  pinMode(P5,OUTPUT);
  pinMode(P6,OUTPUT);
  pinMode(P7,OUTPUT);
  pinMode(P8,OUTPUT);
}
void disp(char let)
{
  switch(let)
  {
  case 'A':
    {
      // digitalWrite(P7,HIGH);
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      // digitalWrite(P7,HIGHI);
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      //digitalWrite(P7,HIGHI);
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      //digitalWrite(P7,HIGH);
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;
  case 'B':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'C':
    {
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;
  case 'D':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'E':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;
  case 'F':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'G':
    {
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'H':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'I':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'J':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'K':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);

      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,LOW);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,LOW);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'L':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'M':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'N':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'O':
    {
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'P':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'Q':
    {
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,LOW);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,LOW);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;

  case 'R':
    {
      digitalWrite(P8,LOW);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,LOW);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,LOW);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,LOW);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,LOW);
      digitalWrite(P6,LOW);
      digitalWrite(P5,LOW);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,LOW);
      digitalWrite(P2,LOW);
      digitalWrite(P1,LOW);
      digitalWrite(P0,LOW);
      delay(1);
      
      digitalWrite(P8,HIGH);
      digitalWrite(P7,HIGH);
      digitalWrite(P6,HIGH);
      digitalWrite(P5,HIGH);
      digitalWrite(P4,HIGH);
      digitalWrite(P3,HIGH);
      digitalWrite(P2,HIGH);
      digitalWrite(P1,HIGH);
      digitalWrite(P0,HIGH);
      delay(1);
    }
    break;
  }
}

void loop()
{
  //while(Serial.available())
  //{
  // char ch=Serial.read();

string in="";
if(Serial.available())
in  = Serial.readString();
int i=0;
for(i=0;i<strlen(in);i++)
{
  char ch=in[i];
  {

    if(ch=='A')
    {
      Serial.println('A');
      disp('A');
    }

    if(ch=='B')
    {
      Serial.println('B');
      disp('B');
    }

    if(ch=='C')
    {
      Serial.println('C');
      disp('C');
    }

    if(ch=='D')
    {
      Serial.println('D');
      disp('D');
    }

    if(ch=='E')
    {
      Serial.println('E');
      disp('E');
    } 

    if(ch=='F')
    {
      Serial.println('F');
      disp('F');
    }

    if(ch=='G')
    {
      Serial.println('G');
      disp('G');
    }

    if(ch=='H')
    {
      Serial.println('H');
      disp('H');
    }

    if(ch=='I')
    {
      Serial.println('I');
      disp('I');
    }

    if(ch=='J')
    {
      Serial.println('J');
      disp('J');
    }

    if(ch=='K')
    {
      Serial.println('K');
      disp('K');
    }

    if(ch=='L')
    {
      Serial.println('L');
      disp('L');
    }

    if(ch=='M')
    {
      Serial.println('M');
      disp('M');
    }

    if(ch=='N')
    {
      Serial.println('N');
      disp('N');
    }

    if(ch=='O')
    {
      Serial.println('O');
      disp('O');
    }

    if(ch=='P')
    {
      Serial.println('P');
      disp('P');
    }

    if(ch=='Q')
    {
      Serial.println('Q');
      disp('Q');
    }

    if(ch=='R')
    {
      Serial.println('R');
      disp('R');
    }

    if(ch=='S')
    {
      Serial.println('S');
      disp('S');
    }

    if(ch=='T')
    {
      Serial.println('T');
      disp('T');
    }

    if(ch=='U')
    {
      Serial.println('U');
      disp('U');
    }

    if(ch=='V')
    {
      Serial.println('V');
      disp('V');
    }

    if(ch=='W')
    {
      Serial.println('W');
      disp('W');
    }

    if(ch=='X')
    {
      Serial.println('X');
      disp('X');
    }

    if(ch=='Y')
    {
      Serial.println('Y');
      disp('Y');
    }

    if(ch=='Z')
    {
      Serial.println('Z');
      disp('Z');
    }
  }
}







