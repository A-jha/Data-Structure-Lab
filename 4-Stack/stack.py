# import maxsize from sys module
# used to return -inf when stack is empty
from sys import maxsize

# Function to create stack


def createStack():
    stack = []
    return stack

# create is empty


def isEmpty(stack):
    return len(stack) == 0

# push an item into stack


def push(stack, x):
    stack.append(x)
    print(x + " is pushed into stack.")

# Pop an item from stack


def pop(stack):
    if(isEmpty(stack)):
        return str(-maxsize-1)

    return stack.pop()

# peek function to return top


def peek(stack):
    if(isEmpty(stack)):
        return str(-maxsize-1)
    return stack[len(stack)-1]


# driver program to test avobe function
stack = createStack()
print(pop(stack))
push(stack, str(10))
push(stack, str(20))
push(stack, str(30))
print(pop(stack) + " popped from stack")
