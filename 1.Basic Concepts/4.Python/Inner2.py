#Inner/nested/local function = Demo()

def Hello ():
    print("Inside hello")

    def Demo():
        print("Inside Demo")
    Demo()

Hello()
