void setup() {
  int i;
  int led[] ={6,7,8,10,12,14,15,16};
  for(i=0;i<=7;i++)
  {
  pinMode(led[i],OUTPUT);
  digitalWrite (led[i],LOW);
  }
}

void loop() {
  int i;
  int led[] ={6,7,8,10,12,14,15,16};
  
  for(i=0;i<=7;i++)
  {
    digitalWrite (led[i],HIGH);
    }  
    delay(100);
  for(i=0;i<=7;i++)
  {
    digitalWrite (led[i],LOW);
    }
    delay(100); 
  for(i=0;i<=7;i++)
  {
    digitalWrite (led[i],HIGH);
    }
    delay(100);
  for(i=0;i<=7;i++)
  {
    digitalWrite (led[i],LOW);
    }
    delay(100);
  for(i=0;i<=7;i++)
  {
   digitalWrite (led[i],HIGH);
   delay(100);
   digitalWrite (led[i],LOW); 
  }


  for(i=0;i<=7;i++)
  {
    digitalWrite (led[i],HIGH);
    }  
    delay(100);
  for(i=0;i<=7;i++)
  {
    digitalWrite (led[i],LOW);
    }
    delay(100); 
  for(i=0;i<=7;i++)
  {
    digitalWrite (led[i],HIGH);
    }
    delay(100);
  for(i=0;i<=7;i++)
  {
    digitalWrite (led[i],LOW);
    }
    delay(100);
  for(i=7;i>=0;i--)
  {
   digitalWrite (led[i],HIGH);
   delay(100);
   digitalWrite (led[i],LOW); 
  }

}
