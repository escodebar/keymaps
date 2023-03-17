MOUSEKEY_ENABLE        = no

VERBOSE                = yes
DEBUG_MATRIX_SCAN_RATE = no
DEBUG_MATRIX           = yes
CONSOLE_ENABLE         = no

VPATH                  +=  keyboards/gboards/

SRC += matrix.c i2c_master.c
iteq ($(strip $(DEBUG_MATRIX)), yes)
    OPT_DEFS += -DDEBUG_MATRIX
endif
