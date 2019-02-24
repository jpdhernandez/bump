const http = require('http');
const express = require('express');
const bodyParser = require('body-parser');
const request = require("request");

const app = express();

const comPort = 'COM5';
const serialport = require('serialport');
// Open the port
const port = new serialport(comPort, {
  baudRate: 9600
});
port.on("open", function () {
  console.log('listening to ' + comPort);
});

function writeToSerial(text) {
  setTimeout(() => {
    port.write(`${text}\n`);
  }, 2000);
}


app.use(bodyParser.urlencoded({ extended: false }));

app.post('/sms', (req, res) => {
  const { body } = req;
  const { From: msgFrom, Body: msgBody } = body;
  const from = msgFrom === '+16476578586' ? 'Julian' : msgFrom;
  console.log(`${from}: ${msgBody}`);
  
  writeToSerial(`${from}: ${msgBody.trim()}`);
});

app.get('/parse/', (req, res) => {
  const url = req.query.url;

  const options = {
    method: 'GET',
    url: 'https://us-central1-ageless-talent-159119.cloudfunctions.net/parse/',
    qs: { "url": url },
  };

  request(options, function (error, response, body) {
    if (error) throw new Error(error);

    const {title, body: articleBody} = JSON.parse(body);
    writeToSerial(`Title: ${title}, ${articleBody.trim()}`);
  });
});

http.createServer(app).listen(3001, () => {
  console.log('Express server listening on port 3001');
});