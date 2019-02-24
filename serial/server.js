const comPort = 'COM5';
var serialport = require('serialport');
// Open the port
var port = new serialport(comPort, {
  baudRate: 9600
});
port.on("open", function () {
  console.log(comPort + ' is open');
  setTimeout(() => {
    port.write('ABCD\n');
  }, 2000);
});
