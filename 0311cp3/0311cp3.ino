void setup() {
  int i;
  int led[] ={8,9,10,12,13,14,15,16};
  for(i=0;i<=7;i++)
  {
  pinMode(led[i],OUTPUT);
  digitalWrite (led[i],LOW);
  }
  pinMode(6,INPUT);
}

void loop() {
  boolean val =digitalRead(6);
  int i;
  int led[] ={8,9,10,12,13,14,15,16};
  if(val)
  {
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
  else
  {
for(i=0;i<=7;i++)
  {
   digitalWrite (led[i],HIGH);
   delay(100);
   digitalWrite (led[i],LOW); 
  }
  delay(1000);
    for(i=7;i>=0;i--)
  {
   digitalWrite (led[i],HIGH);
   delay(100);
   digitalWrite (led[i],LOW); 
  }
  delay(1000);
    }
}
