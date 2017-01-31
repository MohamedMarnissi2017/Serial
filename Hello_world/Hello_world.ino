/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                       Hello World                           **
**                                                             **
**  NOM: MOHAMED EL MARNISSI                  DATA: 30/01/2017 **
****************************************************************/
//************************ INCLUDE ****************************** 



//*********************** VARIABLES *****************************



//************************** SETUP ******************************

void setup() {                 


}                             

//*************************** LOOP ******************************

void loop() {                 
  Serial.begin(9600);       // Inicia comunicacio serie a velocitat 9600
  Serial.println("Hello world!"); // envia misatge ''Hello world'' a l'ordinador
  delay(1000);                  //esperat 1 segon
}                             //El programar fara una comunicacio amb l'ordinador on enviara hello world al monitor serie del arduino, 
                              // s'esperar un segon i repetira aquesta comunicacio com que el programa esta escrit a ``loop´´ aixo ho fara de manera repetida
//************************** FUNCIONS ***************************
