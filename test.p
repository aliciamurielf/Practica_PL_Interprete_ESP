borrar_pantalla;

# ==========================================
# TEST 1: COLORES EN TERMINAL
# ==========================================
red_text;
escribir('--- 1. TEST DE COLORES ---');
escribir('Este texto saldra completamente en ROJO');
blue_text;
escribir('Y este texto cambia a AZUL');
reset_text;
escribir('Y aqui volvemos al color por defecto del sistema.\n');

# ==========================================
# TEST 2: CADENAS (STRINGS)
# ==========================================
yellow_text;
escribir('--- 2. TEST DE CADENAS (STRINGS) ---');
reset_text;

cadena1 := 'Hola';
cadena2 := 'Mundo';

blue_text;
escribir('Concatenacion y Secuencias de escape:');
reset_text;
saludo := cadena1 || ' \t ' || cadena2 || '\n';
escribir('Resultado:\n' || saludo);

blue_text;
escribir('Uso de comillas simples escapadas:');
reset_text;
escribir('El profesor dijo: \'El interprete esta de matricula\' \n');

blue_text;
escribir('Operadores Relacionales con Cadenas:');
reset_text;
si ('abeja' < 'zorro') entonces
    escribir('\t[OK] \'abeja\' es menor que \'zorro\'');
si_no
    escribir('\t[ERROR] Fallo en el operador < con cadenas');
fin_si;

si ('Zaragoza' > 'Alicante') entonces
    escribir('\t[OK] \'Zaragoza\' es mayor que \'Alicante\'');
fin_si;

si ('Lunes' <> 'Martes') entonces
    escribir('\t[OK] Las cadenas son distintas\n');
fin_si;

# ==========================================
# TEST 3: OPERADORES DE AMPLIACION
# ==========================================
yellow_text;
escribir('--- 3. TEST DE OPERADORES DE AMPLIACION ---');
reset_text;

blue_text;
escribir('Unarios (++ y --):');
reset_text;
a := 5;
a++;
escribir('El valor 5 tras hacer a++ es: ');
escribir(a);
a--;
escribir('El valor tras hacer a-- vuelve a ser: ');
escribir(a);

blue_text;
escribir('\nAsignaciones Compuestas (+:=, -:=, *:=, /:=):');
reset_text;
b := 10;
b +:= 5;
escribir('10 +:= 5 es: ');
escribir(b);
b /:= 3;
escribir('15 /:= 3 es: ');
escribir(b);

blue_text;
escribir('\nOperador Factorial Posfijo (!):');
reset_text;
escribir('El factorial de 6! es: ');
escribir(6!);

blue_text;
escribir('\nOperador Ternario (? :):');
reset_text;
edad := 20;
estado := (edad >= 18) ? 'Mayor de edad' : 'Menor de edad';
escribir('Con 20 anos el estado es: ');
escribir(estado);

edad2 := 15;
estado2 := (edad2 >= 18) ? 'Mayor de edad' : 'Menor de edad';
escribir('Con 15 anos el estado es: ');
escribir(estado2);
escribir('\n');

# ==========================================
# TEST 4: BUCLE DO-WHILE
# ==========================================
yellow_text;
escribir('--- 4. TEST DEL BUCLE HACER-MIENTRAS ---');
reset_text;

blue_text;
escribir('Bucle normal (Iterando de 0 a 2)');
reset_text;
iteracion := 0;
hacer {
    escribir('\tEjecutando iteracion: ');
    escribir(iteracion);
    iteracion++;
} mientras (iteracion < 3);

blue_text;
escribir('\nEjecucion garantizada con condicion falsa\n');
reset_text;

valor_falso := 10;
hacer {
    escribir('\t[OK] El bucle se ha ejecutado una vez a pesar de que 10 no es menor que 5.\n');
} mientras (valor_falso < 5);

green_text;
escribir('\n==========================================');
escribir('Bateria de pruebas completada con exito.');
escribir('==========================================');
reset_text;