MOUSEKEY_ENABLE        = no

VERBOSE                = no
DEBUG_MATRIX_SCAN_RATE = no
DEBUG_MATRIX           = no
CONSOLE_ENABLE         = no

COMBO_ENABLE           = yes
VPATH                  +=  keyboards/gboards/

SRC += matrix.c i2c_master.c

ifeq ($(strip $(DEBUG_MATRIX)), yes)
    OPT_DEFS += -DDEBUG_MATRIX
endif
