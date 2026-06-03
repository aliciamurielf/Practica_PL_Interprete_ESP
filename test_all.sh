#!/bin/bash

echo "==========================================="
echo "   Compilando el intérprete (make)...      "
echo "==========================================="
make

# Comprobamos si make falló
if [ $? -ne 0 ]; then
    echo "❌ Error de compilación. Abortando pruebas."
    exit 1
fi

echo -e "\n==========================================="
echo "   Ejecutando batería de pruebas (.p)      "
echo "==========================================="

# Buscar y ejecutar todos los ficheros .p en el directorio
for file in *.p; do
    if [ -f "$file" ]; then
        echo -e "\n▶▶▶ Ejecutando: $file"
        echo "-------------------------------------------"
        ./interpreter.exe "$file"
        echo "-------------------------------------------"
    fi
done

echo -e "\n✅ Todas las pruebas han finalizado."