                                    //** */ // Matriz de LED 8x8//** */ //
                                    //** */ // Created by: Ulti
//** */ //                          My Discord: Ultimate Strength#2307 //** */ // 
                                    //** */ // Github: https://github.com/UltimateStrength
//** */ //                          If you use the Scripts Credit it with:
                                    //** */ // "Made by Ulti" or "FINISAUTEMPOTENTIAE ©" 
                                        //** */ // End Title //** */ //

#include <MatrizLed.h>
/* Cria o objeto Display para controlar a matriz de LED. */

MatrizLed Display;
void setup() {

/* Inicia o Display: (DIN, CLK, CS e o nº de displays */
/*conectados em série. */
    
Display.begin(8, 10, 9, 1);
    
/* Define o brilho dos LEDs na matriz para o valor 10.    */
/* (A intensidade varia de 0 a 15). */
    
Display.setIntensidad(10);
}
void loop() {
    
/* Chama a função que realiza a contagem de 0 a 9. */
    
contador();
    
/* Exibe a frase com efeito Rolagem no Display. A rolagem */
/* está definida num intervalo de 80 milissegundos.       */
    
Display.escribirFraseScroll("Robotica Parana", 80);
}

/* Função que exibe a contagem de 0 a 9. */

void contador() {
for (int i = 0; i < 10; i++) {
 Display.escribirCifra(i);
 delay(500);
 Display.borrar();
}
}