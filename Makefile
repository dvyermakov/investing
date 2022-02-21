APPNAME = investing

SRCS += main.cpp

all:
	g++ $(SRCS) -o $(APPNAME)

clean:
	rm -f $(APPNAME)