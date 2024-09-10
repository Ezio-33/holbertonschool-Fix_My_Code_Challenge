#!/usr/bin/node
/*
    Imprime un carré avec le caractère #
    
    La taille du carré doit être le premier argument 
    du programme.
*/

if (process.argv.length <= 2) {
  process.stderr.write("Argument manquant\n");
  process.stderr.write("Usage: ./1-print_square.js <taille>\n");
  process.stderr.write("Exemple: ./1-print_square.js 8\n");
  process.exit(1);
}

// Correction : Utiliser parseInt en base 10 au lieu de 16
size = parseInt(process.argv[2], 10);

for (let i = 0; i < size; i++) {
  for (let j = 0; j < size; j++) {
    process.stdout.write("#");
  }
  process.stdout.write("\n");
}
