int Pulsador = 13;  //El pulsador está conectado en la placa al pin 13 - Si el montaje fuese en Protoboard sería al pin 2

int Rojo = 2;   //El LED Rojo está conectado en la placa al pin 2 - Si el montaje fuese en Protoboard sería al pin 10
int Amarillo = 8; //El LED Amarillo está conectado en la placa al pin 8 - Si el montaje fuese en Protoboard sería al pin 9
int Verde = 7;    //El LED Verde está conectado en la placa al pin 2 - Si el montaje fuese en Protoboard sería al pin 8

boolean Estado = LOW;
void setup()
{
  pinMode(Pulsador, INPUT); //Definimos la variable "Pulsador" como una entrada
  
  pinMode(Rojo, OUTPUT);    //Definimos la variable "Rojo" como una salida
  pinMode(Amarillo, OUTPUT);  //Definimos la variable "Amarillo" como una salida
  pinMode(Verde, OUTPUT);   //Definimos la variable "Verde" como una salida
  
}

void loop()
{
  Estado = digitalRead(Pulsador);   //El valor de la variable "Estado" es el igual a la lectura digital de la variable "Pulsador"
                    // Es decir, "Estado" será HIGH si pulsamos y LOW si no pulsamos el botón rojo
  
  digitalWrite(Verde, HIGH);      //En el estado inicial, el LED Verde (el de los coches) estará encendido
  
  if (Estado == HIGH){        //Si pulsamos el botón rojo, es decir la variable "Estado" se activa
    
    delay (1000);         //Esperamos 1 segundo
    
    digitalWrite(Verde, LOW);   //Apagamos el LED Verde
    digitalWrite(Amarillo, HIGH); //Encendemos el LED Amarillo
    
    delay (3000);         //Esperamos 3 segundos 
    
    digitalWrite(Amarillo, LOW);  //Apagamos el LED Amarillo
    digitalWrite(Rojo, HIGH);   //Encendemos el LED Rojo
    
    delay(5000);          //Esperamos 5 segundos
    
    digitalWrite(Rojo, LOW);      //Apgagamos el LED Rojo
  }
}

// El "void loop()" es un bucle que se repetirá continuamente
