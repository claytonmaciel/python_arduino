import serial

# Iniciando conexao serial
arduino = serial.Serial('/dev/cu.usbmodem141301', 9600, timeout=1)

while True:
    dados = str(arduino.readline())
    print(dados)
    #print(dados[2:-5])

arduino.close()
