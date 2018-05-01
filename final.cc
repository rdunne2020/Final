/**
 *@file final.cc
 *This program counts lines and words from an input file in the main parameter
 *@author Rory Dunne
 *@date 5/1/2018
*/

 /* Sample implementation of wc utility. */
     #include <stdlib.h>
     #include <stdio.h>
     #include <stdarg.h>
     #include <ctype.h>
     //#include "wc.h"

     typedef unsigned long count_t;  /* Counter type */

     /* Current file counters: chars, words, lines */
     count_t ccount;
     count_t wcount;
     count_t lcount;

     /* Totals counters: chars, words, lines */
     count_t total_ccount = 0;
     count_t total_wcount = 0;
     count_t total_lcount = 0;

     using namespace std;

     /**
     *@brief Counts the lines in the file
     *@param pointer to a character pName
     *@return the number of lines
     */

     int countLine(char* pName)
     {
       int linenum = 0;
       return linenum;
     }
     /**
      *@brief Counts the characters in the file
      *@param pointer to a character pName
      *@return the number of characters
     */

     int countChar(char* pName)
     {
       int charnum = 0;
       return charnum;
     }
     /**
      *@brief This is the main function, it also takes the argument that reads in the file
      *@param int argc, char** argv[]
      *@return 0
     */

     int main(int argc, char** argv[])
     {

       return 0;
     }
