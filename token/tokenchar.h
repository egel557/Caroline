#ifndef TOKENCHAR_H
#define _TOKENCHAR_H

#include "./tokentype.h"

const char* type2char (enum TokenType t) {
    switch (t)
    {
        case CHAR: return "CHAR";
        case STRING: return "STRING";
        case INT: return "INT";
        case REAL: return "REAL";
        case BOOL: return "BOOL";
        case NULLABLE: return "NULLABLE";
        case LOGICAL_AND: return "AND";
        case LOGICAL_OR: return "OR";
        case LOGICAL_NOT: return "NOT";
        case PRINT: return "PRINT";
        case INPUT: return "INPUT";
        case AS: return "AS";
        case IF: return "IF";
        case THEN: return "THEN";
        case ELSEIF: return "ELSEIF";
        case ELSE: return "ELSE";
        case ENDIF: return "ENDIF";
        case SWITCH: return "SWITCH";
        case CASE: return "CASE";
        case ENDSWITCH: return "ENDSWITCH";
        case DEFAULT: return "DEFAULT";
        case FOR: return "FOR";
        case TO: return "TO";
        case BY: return "BY";
        case WHILE: return "WHILE";
        case DO: return "DO";
        case ENDLOOP: return "ENDLOOP";
        case COMMENT: return "COMMENT";
        case ENDCOMMENT: return "ENDCOMMENT";
        case BREAK: return "BREAK";
        case CONTINUE: return "CONTINUE";
        case TRUE: return "TRUE";
        case FALSE: return "FALSE";
        case ASSIGN: return "=";
        case MINUS: return "-";
        case PLUS: return "+";
        case MUL: return "*";
        case DIV: return "/";
        case MODULO: return "%";
        case LS_THAN: return "<";
        case GR_THAN: return ">";
        case MINUSCREMENT: return "-=";
        case PLUSCREMENT: return "+=";
        case DIVCREMENT: return "/=";
        case MULTICREMENT: return "*=";
        case LS_THAN_EQ: return "<=";
        case GR_THAN_EQ: return ">=";
        case EQ: return "==";
        case NOT_EQ: return "!=";
        case DOT: return "DOT";
        case DELIMITER: return "DELIMITER";
        case COMMA: return "COMMA";
        case OPEN_PAR: return "(";
        case CLOSE_PAR: return ")";
        case HEX_CONSTANT: return "HEX";
        case DEC_CONSTANT: return "Decimal Number";
        case INT_CONSTANT: return "Integer";
        case REAL_CONSTANT: return "Real Number";
        case STR_CONSTANT: return "String";
        case CHAR_CONSTANT: return "Character";
        case IDENTIFIER: return "IDENTIFIER";
        case INVALID: return "INVALID";
        case PROG: return "PROG";
        case LINE: return "LINE";
        case OBJECT: return "OBJECT";
        case BASE_EXP: return "BASE_EXP";
        case TERM: return "TERM";
        case PREDICATE: return  "PREDICATE";
        case EXPR: return "EXPR";
        case ASSIGN_CON: return "ASSIGN_CON";
        case INPUT_CON: return "INPUT_CON";
        case OUTPUT_CON: return "OUTPUT_CON";
        case ENDLINE: return "ENDLINE";
        default: return "UNKNOWN";
    }
}

#endif