
;==============================================================================
;
;                            {{PROJECT_NAME}}
;
;==============================================================================
;
;   Author:     Jose Fernando Lopez Fernandez
;
;   Date:       {{DATE}}
;
;   Description:
;
;       {{DESCRIPTION}}
;
;------------------------------------------------------------------------------

                SECTION .text
                GLOBAL _start
_start:         MOV     RDI, 0x01       ; Set exit return code EXIT_FAILURE
                MOV     RAX, 0x3C       ; Set syscall exit
                SYSCALL

