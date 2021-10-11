
MORSE_CODE = {
	'.-'      : 'A',
	'-...'    : 'B',
	'-.-.'    : 'C',
	'-..'     : 'D',
	'.'       : 'E',
	'..-.'    : 'F',
	'--.'     : 'G',
	'....'    : 'H',
	'..'      : 'I',
	'.---'    : 'J',
	'-.-'     : 'K',
	'.-..'    : 'L',
	'--'      : 'M',
	'-.'      : 'N',
	'---'     : 'O',
	'.--.'    : 'P',
	'--.-'    : 'Q',
	'.-.'     : 'R',
	'...'     : 'S',
	'-'       : 'T',
	'..-'     : 'U',
	'...-'    : 'V',
	'.--'     : 'W',
	'-..-'    : 'X',
	'-.--'    : 'Y',
	'--..'    : 'Z',
	'-----'   : '0',
	'.----'   : '1',
	'..---'   : '2',
	'...--'   : '3',
	'....-'   : '4',
	'.....'   : '5',
	'-....'   : '6',
	'--...'   : '7',
	'---..'   : '8',
	'----.'   : '9',
	'.-.-.-'  : '.',
	'--..--'  : ',',
	'..--..'  : '?',
	'.----.'  : "'",
	'-.-.--'  : '!',
	'-..-.'   : '/',
	'-.--.'   : '(',
	'-.--.-'  : ')',
	'.-...'   : '&',
	'---...'  : ':',
	'-.-.-.'  : ';',
	'-...-'   : '=',
	'.-.-.'   : '+',
	'-....-'  : '-',
	'..--.-'  : '_',
	'.-..-.'  : '"',
	'...-..-' : '$',
	'.--.-.'  : '@',
	'...---...' : 'SOS'
 }

def decodeMorse(morse_code):
	morse_code = morse_code.strip()
	decod = []
	for i, word in enumerate(morse_code.split("   ")):
		dec = ""
		for letter in word.split(" "):
			dec += MORSE_CODE[letter]
		decod.append(dec)
	print(" ".join(decod))


def decodeOpt(morse_code):
	return ' '.join(''.join(MORSE_CODE[letter] for letter in word.split(' ')) for word in morseCode.strip().split('   '))

def test_and_print():
	decodeMorse('.... . -.--   .--- ..- -.. .')
	decodeMorse('.   .')
	decodeMorse('.   .   .')
	decodeMorse('...   ---   ...')
	decodeMorse('   .   .    ')


if __name__ == '__main__':
	test_and_print()
