def on_received_string(receivedString):
    global clock
    if clock < noon:
        clock += 1
radio.on_received_string(on_received_string)

noon = 0
clock = 0
radio.set_group(1)
clock = 1
noon = 8

def on_forever():
    global clock
    radio.send_number(0)
    if clock >= noon:
        game.add_score(1)
        basic.pause(200)
        clock = 0
    else:
        basic.pause(100)
        clock += 1
basic.forever(on_forever)
