/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   NumberComunication6                       **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 05/03/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int numero;// estableix la variable hores
float op1;
float op2;
int i=-1;
//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.print("Introdueix els teus numeros un a un (per finalitzar entra 0):");//Imprimeix a monitor serie la frase "Quina mida te el cargol en cm?"


}

//*************************** LOOP ******************************

void loop() {
  while (Serial.available() > 0) {  //inicia funcio while amb la condiciono seguent: si hi ha algun missatge al canal serei el llegeix, si aquest es superior a 0 es compleix la condicio
    numero = Serial.parseInt();// La variable mida sera igual al missatge en valor int que arribi per el canal serie
   Serial.print(numero);//Imprimeix a monitor serie el valor de la variable mida
   Serial.print("-");//Imprimeix a monitor serie el valor de la variable mida
   op1=op1+numero;
   i++;
   op2=op1/i;
   if(numero==0)
   {
    Serial.println();
    Serial.println();
    Serial.print("S'han entrat ");
    Serial.print(i);
    Serial.print(" numeros, la suma de tots ells es ");
Serial.print(op1);
Serial.print(" i la mitja es de ");
Serial.println(op2);
Serial.println();
Serial.print("Introdueix els teus numeros un a un (per finalitzar entra 0):");

   }
    if (Serial.read() == '\n')//llegeix linia nova, Finalitza lectura serie...
      {}
     
    }
}
