const comPort = '/dev/cu.usbserial';
const serialPort = require('serialport').SerialPort
const sp = new serialPort(comPort, { baudrate: 9600, parser: parserJaCircuitsChrono() });

sp.on("open", function () {
  console.log(comPort + ' is open');
  sp.write(0x80);
  sp.write('123456\r');
});