#!/usr/bin/python3
import importlib

def crackme4():
    try:
        hidden_4 = importlib.import_module('100-crackme')
        if hasattr(hidden_4, 'password'):
            password = hidden_4.password
            with open('100-password', 'w') as password_file:
                password_file.write(password)
                print('Password found and saved to 100-password: {}'.format(password))
        else:
            print('Password not found in the module.')
    except ImportError:
        print('Module "100-password"not found.')

if __name__ == '__main__':
    crackme4()
