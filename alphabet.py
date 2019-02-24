import mraa
import time

# initialise gpio 29
gpio_1 = mraa.Gpio(29)

# initialise gpio 30
gpio_2 = mraa.Gpio(30)

# initialise gpio 31
gpio_3 = mraa.Gpio(31)

# initialise gpio 32
gpio_4 = mraa.Gpio(32)

# initialise gpio 33
gpio_5 = mraa.Gpio(33)

# initialise gpio 34
gpio_6 = mraa.Gpio(34)

# set gpio 29 to output
gpio_1.dir(mraa.DIR_OUT)

# set gpio 30 to output
gpio_2.dir(mraa.DIR_OUT)

# set gpio 31 to output
gpio_3.dir(mraa.DIR_OUT)

# set gpio 32 to output
gpio_4.dir(mraa.DIR_OUT)

# set gpio 33 to output
gpio_5.dir(mraa.DIR_OUT)

# set gpio 34 to output
gpio_6.dir(mraa.DIR_OUT)

letter = 'A'

if letter == 'A' or letter == 'a':
    print('a')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(0)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'E' or letter == 'e':
    print('e')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'I' or letter == 'i':
    print ('i')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'O' or letter == 'o':
    print ('o')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'U' or letter == 'u':
    print ('u')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(0)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(1)

elif letter == 'B' or letter == 'b':
    print ('b')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'C' or letter == 'c':
    print ('c')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'D' or letter == 'd':
    print ('d')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'F' or letter == 'f':
    print ('f')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'G' or letter == 'g':
    print ('g')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'H' or letter == 'h':
    print ('h')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'J' or letter == 'j':
    print ('j')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == 'K' or letter == 'k':
    print ('k')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(0)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'L' or letter == 'l':
    print ('l')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'M' or letter == 'm':
    print ('m')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'N' or letter == 'n':
    print ('n')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'P' or letter == 'p':
    print ('p')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'Q' or letter == 'q':
    print ('q')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'R' or letter == 'r':
    print ('r')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'S' or letter == 's':
    print ('s')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'T' or letter == 't':
    print ('t')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == 'V' or letter == 'v':
    print ('v')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(1)

elif letter == 'W' or letter == 'w':
    print ('w')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(1)

elif letter == 'X' or letter == 'x':
    print ('x')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(1)

elif letter == 'Y' or letter == 'y':
    print ('y')
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)

elif letter == 'Z' or letter == 'z':
    print ('z')
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)

elif letter == '#':
    print ('#')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)

elif letter == '0':
    print ('0')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '1':
    print ('1')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(0)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '2':
    print ('2')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '3':
    print ('3')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '4':
    print ('4')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '5':
    print ('5')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '6':
    print ('6')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '7':
    print ('7')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(1)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '8':
    print ('8')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(1)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '9':
    print ('9')
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(0)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(1)
    time.sleep(1)
    gpio_1.write(0)
    gpio_2.write(1)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '!':
    print ('!')
    gpio_1.write(0)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(1)
    gpio_6.write(0)

elif letter == ',':
    print (',')
    gpio_1.write(0)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(0)
    gpio_6.write(0)

elif letter == '-':
    print ('-')
    gpio_1.write(0)
    gpio_2.write(0)
    gpio_3.write(0)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(1)

elif letter == '.':
    print ('.')
    gpio_1.write(0)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(1)
    gpio_5.write(0)
    gpio_6.write(1)

elif letter == '?':
    print ('?')
    gpio_1.write(0)
    gpio_2.write(0)
    gpio_3.write(1)
    gpio_4.write(0)
    gpio_5.write(1)
    gpio_6.write(1)

else:
    print ('error')