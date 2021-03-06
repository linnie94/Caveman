BIN = caveman

SRCS = main.c Util.c Map.c Ghost.c Portal.c
OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

CFLAGS = -Wshadow -Wall -Wpedantic -Wextra -g
LDFLAGS = -lm -lSDL2

$(BIN): $(OBJS)
	gcc $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(BIN)

%.o : %.c Makefile
	gcc $(CFLAGS) -MMD -MP -MT $@ -MF $*.td -c $<
	mv -f $*.td $*.d

%.d: ;
-include *.d

clean:
	rm -f $(BIN) $(OBJS) $(DEPS)
