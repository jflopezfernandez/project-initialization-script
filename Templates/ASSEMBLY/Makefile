
vpath %.asm src
vpath %.inc include

CP       = cp -f -u
RM       = rm -f

OBJS     = main.o
LSTS     = $(patsubst %.o,%.lst,$(OBJS))

AS       = nasm
ASFLAGS  = -f elf64

LD       = ld
LDFLAGS  = 

TARGET   = {{PROJECT_NAME}}

all: $(TARGET)

$(TARGET): $(OBJS)
	$(LD) $(LDFLAGS) -o $@ $^

%.o: %.asm
	$(AS) $(ASFLAGS) -o $@ $^

listings: $(LSTS)

%.lst: %.asm
	$(AS) $(ASFLAGS) -l $@ $^

.PHONY: clean
clean:
	$(RM) $(LSTS) $(OBJS) $(TARGET)

.PHONY: install
install: $(TARGET)
	$(CP) ./$(TARGET) /usr/bin

.PHONY: uninstall
uninstall:
	$(RM) /usr/bin/$(TARGET)

