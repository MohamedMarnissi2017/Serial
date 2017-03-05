/****************************************************************
**                                                             **
**                          TÍTOL:                             **
**                   NumberComunication6                       **
**                                                             **
**  NOM: Mohamed el Marnissi                  DATA: 05/03/2017 **
****************************************************************/
//************************ INCLUDE ******************************



//*********************** VARIABLES *****************************

int numero;// estableix la variable numero amb valor int
float op1;// estableix la variable op1 amb valor float
float op2;// estableix la variable op2 amb valor float
int i=-1;// estableix la variable i amb valor int
//************************** SETUP ******************************

void setup()
{
  Serial.begin(9600);// Inicia comunicacio serie a velocitat 9600
  Serial.print("Introdueix els teus numeros un a un (per finalitzar entra 0):");//Imprimeix a monitor serie la frase "Introdueix els teus numeros un a un (per finalitzar entra 0):"


}

//*************************** LOOP ******************************

void loop() {
  while (Serial.available() > 0) {  //inicia funcio while amb la condiciono seguent: si hi ha algun missatge al canal serei el llegeix, si aquest es superior a 0 es compleix la condicio
    numero = Serial.parseInt();// La variable mida sera igual al missatge en valor int que arribi per el canal serie
   Serial.print(numero);//Imprimeix a monitor serie el valor de la variable numero
   Serial.print("-");//Imprimeix a monitor serie el simbo "-"
   op1=op1+numero;//Executa operacio, op1 sera igual a la suma de ella mateixa mes la variable numero
   i++;// incrementa el valor de la variable i en un
   op2=op1/i;// executa operacio, op2 sera igual a variable op1 partit de variable i
   if(numero==0)//inicia funcio if am la condicio, si variable numero es igual a 0 es compleix
   {
    Serial.println();//obre linia nova
    Serial.println();//obre linia nova
    Serial.print("S'han entrat ");//Imprimeix a monitor serie "S'han entrat "
    Serial.print(i);//Imprimeix a monitor serie el valor de la variable i
    Serial.print(" numeros, la suma de tots ells es ");//Imprimeix a monitor serie " numeros, la suma de tots ells es "
Serial.print(op1);//Imprimeix a monitor serie el valor de la variable op1
Serial.print(" i la mitja es de ");//Imprimeix a monitor serie " i la mitja es de "
Serial.println(op2);//Imprimeix a monitor serie el valor de la variable op2
Serial.println();//obre linia nova
Serial.print("Introdueix els teus numeros un a un (per finalitzar entra 0):");//Imprimeix a monitor serie "Introdueix els teus numeros un a un (per finalitzar entra 0):"

   }
    if (Serial.read() == '\n')//llegeix linia nova, Finalitza lectura serie...
      {}
     
    }
}
