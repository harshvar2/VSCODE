package main

import "context"

func main() {
	ctx := context.Background()
	// context  with cancel
	doSomething(ctx)
	// context with deadline
	something(ctx)
}
