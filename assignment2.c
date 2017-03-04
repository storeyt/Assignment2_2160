// welcome to assignment 2 for comp 2160


#include <stdio.h>
#include <math.h>

// Constants ************************************
#define char MAX_STRENGTH = '#';
#define char MED_STRENGTH = '=';
#define char MIN_STRENGTH = '-';
#define char LIGHT_SOURCE = '%';
#define char WAS_ILLUM = ',';

#define int MAX_ILLUM = 3;

// Main method ************************************

int main ( int argc, char *argv[]) {

char character; 
int moves;
char line;

// will need to be changed with each new map 
int mapLength;
int mapWidth;

// we need the size of the map before we can initialize this
char map[][];

character = fgetc()



}

char readInput (char * inputName){

    FILE *file = fopen(inputName, "r");
    char *input;
    int inp;
    int size = 0;
    

    if(file == NULL){

        return NULL;

    } else{

        while(inp = fgetc(file) != EOF){
            input[size++] = inp;
            
        }
        

    }
    return input;

}