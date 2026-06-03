/*!	
	\file   init.hpp
	\brief   Prototype of the function for the initialization of table of symbols
	\author  Alicia Muriel Fernández
	\date    2026-06-14
	\version 1.0
*/

#ifndef _INIT_HPP_
#define _INIT_HPP_

// sin, cos, atan, fabs, ...
#include <math.h>

#include "table.hpp"

// IMPORTANT: This file must be before y.tab.h
#include "../ast/ast.hpp"
///////////////////////////////////////

//  interpreter.tab.h contains the number values of the tokens produced by the parser
#include "../parser/interpreter.tab.h"

///////////////////////////////////////
// NEW in example 13
#include "mathFunction.hpp"
#include "builtinParameter1.hpp"
///////////////////////////////////////

///////////////////////////////////////
// NEW in example 14
#include "builtinParameter0.hpp"
#include "builtinParameter2.hpp"
///////////////////////////////////////

/*!
  \ brief Predefined numeric constants
*/
static struct {
          std::string name ;
	      double value;
	      } numericConstant[] = {
	                    {"pi",    3.14159265358979323846},
	                    {"e",     2.71828182845904523536},
	                    {"gamma", 0.57721566490153286060},
	                    {"deg",  57.29577951308232087680},
	                    {"phi",   1.61803398874989484820},
	                    {"",      0}
	                   };

/*!
  \ brief Predefined logical constants
*/
static struct {
          std::string name ;
	      bool value;
	      } logicalConstant[] = { 
	                    {"verdadero", true},
	                    {"falso", false},
	                    {"",      0}
	                   };


/*!
  \ brief Predefined keywords
*/
static struct {
          std::string name ;
	      int token;
	      } keyword[] = { 
	                    {"si", IF},
                		{"entonces", THEN},
                		{"si_no", ELSE},
                		{"fin_si", END_IF},
                		{"mientras", WHILE},
                		{"hacer", DO},
                		{"fin_mientras", END_WHILE},
                		{"para", FOR},
                		{"desde", FROM},
                		{"hasta", TO},
                		{"paso", STEP},
                		{"fin_para", END_FOR},
                		{"repetir", REPEAT},
						{"mod", MODULO},
						{"y", AND},
						{"o", OR},
						{"no", NOT},
                		{"leer", READ},
                		{"escribir", PRINT},
                		{"leer_cadena", READ_STRING},      
                		{"borrar_pantalla", CLEAR_SCREEN_CMD}, 
                		{"lugar", PLACE_CMD},  
						{"selector", SWITCH},
                		{"caso", CASE},
                		{"defecto", DEFAULT},
                		{"fin_selector", END_SWITCH},
						{"red_text", RED_TEXT},
						{"green_text", GREEN_TEXT},
						{"blue_text", BLUE_TEXT},
						{"yellow_text", YELLOW_TEXT},
						{"reset_text", RESET_TEXT},
						{"factorial", FACTORIAL_KW},
                		{"", 0} 
	                   };

/*! \var function_1 
	\brief Predefined functions with 1 parameter 
*/
static struct {    /* Predefined functions names */ 
                std::string name ;
				lp::TypePointerDoubleFunction_1 function;
              } function_1 [] = {
	                   {"seno",     sin},
		               {"coseno",  cos},
		               {"atan",    atan},
		               {"log",     Log},
		               {"log10",   Log10},
		               {"exp",     Exp},
		               {"raiz",    Sqrt},
		               {"parte_entera", integer},
		               {"abs",     fabs},
		               {"",       0}
		              };

/*! \var function_0 
	\brief Predefined functions with 0 parameters 
*/
static struct {   
                std::string name ;
				lp::TypePointerDoubleFunction_0 function;
              } function_0 [] = {
						{"random", Random},
		                {"",       0}
		              };


/*! \var function_2 
	\brief Predefined functions with 2 parameters
*/
static struct {    /* Nombres predefinidos de funciones con 2 argumentos */ 
                std::string name ;
				lp::TypePointerDoubleFunction_2 function;
              } function_2 [] = {
	                   {"atan2",   Atan2},
		               {"",       0}
		              };
/*!		
	\brief   Initialize the table of symbols
	\param   t: Reference to the table of symbols
*/
void init(lp::Table &t);

// End of _INIT_HPP_
#endif
