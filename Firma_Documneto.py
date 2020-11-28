import nacl.secret
import nacl.utils
import base64

nonce = nacl.utils.random(nacl.secret.SecretBox.NONCE_SIZE)
key = nacl.utils.random(nacl.secret.SecretBox.KEY_SIZE)
box = nacl.secret.SecretBox(key)

def firma():
    text = open("D:\\sat.txt", "r")
    line = text.readline()

    while line:
        line = text.readline()

    global message
    message = line.encode()
    global encrypted
    encrypted = box.encrypt(message, nonce)

def verificar():
    firma()
    deencrypted = box.decrypt(encrypted)
    if(deencrypted == message):
        print('Firma válida')
    else:
        print('Firma inválida')

def decidir():
    op = input('s para firmar, v para verificar:')
    if op == 's':
        firma()
        print('Firma:',base64.b64encode(encrypted))
    elif op == 'v':
        verificar()
    else:
        print('opción inválida')

decidir()