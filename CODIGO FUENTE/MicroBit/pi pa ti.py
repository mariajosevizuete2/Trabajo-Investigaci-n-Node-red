Mano = 0

def on_gesture_shake():
    global Mano
    Mano = randint(1, 3)
    if Mano == 1:
        basic.show_leds("""
            # # . . #
            # # . # .
            . # # . .
            # # . # .
            # # . . #
            """)
    else:
        if Mano == 2:
            basic.show_leds("""
                . # # # .
                # # # # #
                # # # # #
                # # # # #
                . # # # .
                """)
        else:
            if Mano == 3:
                basic.show_leds("""
                    # # # # #
                    # # . # #
                    # . # . #
                    # # . # #
                    # # # # #
                    """)
input.on_gesture(Gesture.SHAKE, on_gesture_shake)
