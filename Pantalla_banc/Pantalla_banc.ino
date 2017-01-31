/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       Hello World3                          **
**                                                             **
**  NOM: MOHAMED EL MARNISSI                  DATA: 30/01/2017 **
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************

int pantalla1=0;

//************************** SETUP ******************************

void setup()                
{
  Serial.begin(9600);       // Inicia comunicacio serie a velocitat 9600
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
   Serial.println("Que vols fer?"); // envia misatge ''Hello world'' a l'ordinador
  Serial.println("1-");
  Serial.println("2-");
  Serial.println("3-");
}                           

//*************************** LOOP ******************************

void loop() {                 

 
                  
 if (digitalRead(2)==HIGH)
  {Serial.println("pantalla1");}
 // send data only when you receive data:
        
   // Lee del puerto serie una instrucción
   while(1) {
      // Espera la recepción de un dato
      while(Serial.available() == 0);

      // Si se recibe una orden correcta, sale al siguiente paso
      pantalla1 = Serial.read();

      // Orden de encendido de un led
      if (pantalla1 == 'pantalla1')  
     {Serial.println("funciona");}
      
   }}                          
//************************** FUNCIONS ***************************
