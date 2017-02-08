default: run

run: signals
	./signals

signals: signals.c

clean:
	rm -f signals
