#VERSION = 0.1

# Paths
PREFIX = /usr/local

# flags
RWMCFLAGS += -Wall -Wextra -pedantic -Wold-style-declaration
RWMCFLAGS += -Wmissing-prototypes -Wno-unused-parameter
RWMLDFLAGS = $< -lX11 -lXinerama $(LDFLAGS)

# compiler ver
CC = gcc -std=c99
