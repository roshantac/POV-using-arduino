void TR();
void TW();
void ON();
int cnt=0;
int sinc; 
int leds[]={4,5,6,7,8,9,10}; 
int s1=200;
int s2=200;
int s3=200;
int s4=200;
int s5=150;
int s6=150; 
int s7=200;
int s8=1000;
int _[] = {0,0,0,0,0,0,0, 0,0,0,0,0,0,0, 0,0,0,0,0,0,0, 0,0,0,0,0,0,0, 0,0,0,0,0,0,0}; 
int A[] = {0,1,1,1,1,1,1, 1,0,0,1,0,0,0, 1,0,0,1,0,0,0, 1,0,0,1,0,0,0, 0,1,1,1,1,1,1};
int C[] = {0,1,1,1,1,1,0, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 0,1,0,0,0,1,0}; 
int E[] = {1,1,1,1,1,1,1, 1,0,0,1,0,0,1, 1,0,0,1,0,0,1, 1,0,0,1,0,0,1, 1,0,0,1,0,0,1};  
int E1[] = {0,0,0,0,0,0,0, 0,1,1,0,1,1,0, 0,1,1,0,1,1,0, 0,1,1,0,1,1,0, 0,1,1,0,1,1,0};
int G[] = {1,1,1,1,1,1,1, 1,0,0,0,0,0,1, 1,0,0,1,1,1,1, 1,0,0,1,0,0,0, 1,0,0,1,1,1,1}; 
int G1[] = {0,0,0,0,0,0,0, 0,1,1,1,1,1,0, 0,1,1,0,1,1,0, 0,1,1,0,1,1,1, 0,1,1,0,0,0,0};
int H[] = {1,1,1,1,1,1,1, 0,0,0,1,0,0,0, 0,0,0,1,0,0,1, 0,0,0,1,0,0,0, 1,1,1,1,1,1,1}; 
int I[] = {0,0,0,0,0,0,0, 1,0,0,0,0,0,1, 1,1,1,1,1,1,1, 1,0,0,0,0,0,1, 0,0,0,0,0,0,0}; 
int J[] = {0,0,0,0,1,1,0, 0,0,0,0,0,0,1, 0,0,0,0,0,0,1, 0,0,0,0,0,0,1, 1,1,1,1,1,1,0}; 
int L[] = {1,1,1,1,1,1,1, 0,0,0,0,0,0,1, 0,0,0,0,0,0,1, 0,0,0,0,0,0,1, 0,0,0,0,0,0,1}; 
int L1[] = {0,0,0,0,0,0,0, 1,1,1,1,1,1,0, 1,1,1,1,1,1,0, 1,1,1,1,1,1,0, 1,1,1,1,1,1,0};
int M[] = {1,1,1,1,1,1,1, 0,1,0,0,0,0,0, 0,0,1,0,0,0,0, 0,1,0,0,0,0,0, 1,1,1,1,1,1,1}; 
int N[] = {1,1,1,1,1,1,1, 0,1,0,0,0,0,0, 0,0,1,0,0,0,0, 0,0,0,1,0,0,0, 1,1,1,1,1,1,1}; 
int O[] = {0,1,1,1,1,1,0, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 1,0,0,0,0,0,1, 0,1,1,1,1,1,0}; 
int O1[] = {1,0,0,0,0,0,1, 0,1,1,1,1,1,0, 0,1,1,1,1,1,0, 0,1,1,1,1,1,0, 1,0,0,0,0,0,1};
int P[] = {0,0,0,0,0,0,0, 1,1,1,1,1,1,1, 1,0,0,1,0,0,0, 1,0,0,1,0,0,0, 0,1,1,0,0,0,0}; 
int S[] = {1,1,1,1,0,0,1, 1,0,0,1,0,0,1, 1,0,0,1,0,0,1, 1,0,0,1,0,0,1, 1,0,0,1,1,1,1}; 
int S1[] = {0,0,0,0,1,1,0, 0,1,1,0,1,1,0, 0,1,1,0,1,1,0, 0,1,1,0,1,1,0, 0,1,1,0,0,0,0};
int T[] = {1,0,0,0,0,0,0, 1,0,0,0,0,0,0, 1,1,1,1,1,1,1, 1,0,0,0,0,0,0, 1,0,0,0,0,0,0}; 
int T1[] = {0,1,1,1,1,1,1, 0,1,1,1,1,1,1, 0,0,0,0,0,0,0, 0,1,1,1,1,1,1, 0,1,1,1,1,1,1};
int Z[] = {0,0,0,0,0,0,0, 0,0,0,0,0,0,0, 0,0,0,0,0,0,0, 0,0,0,0,0,0,0, 0,0,0,0,0,0,0}; 
int _0[] = {0,1,1,1,1,1,0, 1,0,0,0,1,0,1, 1,0,0,1,0,0,1, 1,0,1,0,0,0,1, 0,1,1,1,1,1,0}; 
int _1[] = {0,1,0,0,0,0,1, 1,1,1,1,1,1,1, 0,0,0,0,0,0,1, 0,0,0,0,0,0,0, 0,0,0,0,0,0,0}; 
int _2[] = {0,1,0,0,0,0,1, 1,0,0,0,0,1,1, 1,0,0,0,1,0,1, 1,0,0,1,0,0,1, 0,1,1,0,0,0,1}; 
int _3[] = {0,1,0,0,0,1,0, 1,0,0,0,0,0,1, 1,0,0,1,0,0,1, 1,0,0,1,0,0,1, 0,1,1,0,1,1,0}; 
int _6[] = {0,1,1,1,1,1,1, 1,0,0,1,0,0,1, 1,0,0,1,0,0,1, 1,0,0,1,0,0,1, 0,0,0,0,1,1,0};
int dota; 
int lag; 
void setup()
{ 
  pinMode(4, OUTPUT); 
  pinMode(5, OUTPUT); 
  pinMode(6, OUTPUT); 
  pinMode(7, OUTPUT); 
  pinMode(8, OUTPUT); 
  pinMode(9, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(12, INPUT); 
  Serial.begin(9600); 
  Serial.flush();
  dota = 900; 
  lag =1000;
  delay(5000);
  
  

}
  void refresh() 
  { 
    for(int z=0;z<7;z++) 
    { 
      digitalWrite(z+4,LOW); 
    } 
   }     
   void prnt(int caracter[]) 
  {
  int y; 
  for (y=0; y<7; y++) { digitalWrite(y+4, caracter[y+28]); } 
  delayMicroseconds(lag); 
  refresh();  
  for (y=0; y<7; y++) { digitalWrite(y+4, caracter[y+21]); } 
  delayMicroseconds(lag); 
  refresh(); 
  for (y=0; y<7; y++) { digitalWrite(y+4, caracter[y+14]); } 
  delayMicroseconds(lag); 
  refresh(); 
  for (y=0; y<7; y++) { digitalWrite(y+4, caracter[y+7]); } 
  delayMicroseconds(lag); 
  refresh(); 
  for (y=0; y<7; y++) { digitalWrite(y+4, caracter[y]); } 
  delayMicroseconds(lag); 
  refresh(); 
  for (y=0; y<7; y++) { digitalWrite(y+4, 0); } 
  delayMicroseconds(dota); 
  } 

 
  
  void camp()
{
  s7=200;
 
  while(s8>0)
  {
 s8--;
  { 
    for(int x=0;x<1;x++) 
    { 
      char caracter = 'H'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
           
          case 'H': prnt(_6); 
                    break; 
                     
  } 
  }



caracter = 'Z'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }





caracter = 'J'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'J': prnt(_1); 
                    break; 
           
  } 
  }



caracter = 'Z'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }




caracter = 'N'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'N': prnt(N); 
                    break; 
  } 
  }



  
caracter = 'Z'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }


caracter = 'O'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'O': prnt(O);  
                    break; 
  } 
  }



caracter = 'I'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'I': prnt(I); 
                    break; 
           
  } 
  }


caracter = 'Z'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }
  



caracter = 'P'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'P': prnt(P); 
                    break; 
           
  } 
  }


caracter = 'Z'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }

caracter = 'M'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'M': prnt(M); 
                    break; 
           
  } 
  }



caracter = 'Z'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }



caracter = 'A'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'A': prnt(A); 
                    break; 
           
  } 
  }



caracter = 'C'; 
      sinc=(caracter-'0'); 
      if (sinc>0) 
      { 
        switch (caracter) 
        { 
          case 'C': prnt(C); 
                    break; 
           
  } 
  }


   
  } 
  } 
  }
  } 




void LST()
{ s3=200;
  while(s4>0)
  {
  s4--;
  { 
    for(int y=0;y<1;y++) 
    { 
   char  caracter1 = 'O'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'O': prnt(O); 
                    break; 
           
        }
      }

caracter1 = 'Z'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }


caracter1 = 'G'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'G': prnt(G); 
                    break; 
           
  } 
  }


caracter1 = 'Z'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }



caracter1 = 'S'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'S': prnt(S); 
                    break; 
           
  } 
  }






caracter1 = 'Z'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }




caracter1 = 'T'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'T': prnt(T); 
                    break; 
  } 
  }



caracter1 = 'Z'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }




caracter1 = 'E'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'E': prnt(E); 
                    break; 
           
  } 
  }



caracter1 = 'Z'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }




caracter1 = 'L'; 
      sinc=(caracter1-'0'); 
      if (sinc>0) 
      { 
        switch (caracter1) 
        { 
           
          case 'L': prnt(L); 
                    break; 
                     
  } 
  }



  
  } 
  } 
  }

  
  
}




void TR()
{  
  
 while(s1>0)
  {
  { s1--;
    for(int i=0;i<1;i++) 
    { 
      char caracter2 = 'K'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
           
          case 'K': prnt(_3); 
                    break; 
                     
  } 
  }
  } 
  } 
  }

}


void TW()
{  s1=200; 
  while(s2>0)
  {
  { s2--;
    for(int d=0;d<1;d++) 
    { 
      char caracter4 = 'U'; 
      sinc=(caracter4-'0'); 
      if (sinc>0) 
      { 
        switch (caracter4) 
        { 
           
          case 'U': prnt(_2); 
                    break; 
                     
  } 
  }
  } 
  } 
  }

}



void ON()
{  
  
 s2=200;
  
  while(s3>0)
  {
  
  {s3--; 
    for(int j=0;j<1;j++) 
    { 
      char caracter3 = 'V'; 
      sinc=(caracter3-'0'); 
      if (sinc>0) 
      { 
        switch (caracter3) 
        { 
           
          case 'V': prnt(_1); 
                    break; 
                     
  } 
  }
  } 
  } 
  }

}



void OF()
{  
  s4=200;
  while(s6>0)
  {
 s6--;
  { 
    for(int j=0;j<1;j++) 
    { 
      char caracter7 = 'Z'; 
      sinc=(caracter7-'0'); 
      if (sinc>0) 
      { 
        switch (caracter7) 
        { 
           
          case 'Z': prnt(Z); 
                    break; 
                     
  } 
  }
  } 
  } 
  }

}  
  


void LSTR()
{s6=200;
  while(s7>0)
  {
    s7--;
  { 
    for(int y=0;y<1;y++) 
    { 
   char  caracter2 = 'O'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'O': prnt(O); 
                    break; 
           
        }
      }

caracter2 = 'Z'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }


caracter2 = 'G'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'G': prnt(G1); 
                    break; 
           
  } 
  }


caracter2 = 'Z'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }



caracter2 = 'S'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'S': prnt(S1); 
                    break; 
           
  } 
  }






caracter2 = 'Z'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }




caracter2 = 'T'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'T': prnt(T1); 
                    break; 
  } 
  }



caracter2 = 'Z'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }




caracter2 = 'E'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'E': prnt(E1); 
                    break; 
           
  } 
  }



caracter2 = 'Z'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
          case 'Z': prnt(Z); 
                    break; 
  } 
  }




caracter2 = 'L'; 
      sinc=(caracter2-'0'); 
      if (sinc>0) 
      { 
        switch (caracter2) 
        { 
           
          case 'L': prnt(L1); 
                    break; 
                     
  } 
  }

  
  } 
  } 
  }

  
  
}


  
  void loop() 
{
TR();
delay(1000);
TW();
delay(1000);    
ON();
delay(1000);
LST();
delay(2000);
OF();
delay(2000);
LSTR();
delay(2000);
camp();
delay(2000);
}

