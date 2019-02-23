const http = require('http');
const express = require('express');
const bodyParser = require('body-parser');

const app = express();

app.use(bodyParser.urlencoded({ extended: false }));

app.post('/sms', (req, res) => {
  const { body } = req;
  const { From: msgFrom, Body: msgBody } = body;

  console.log(`${msgFrom === '+16476578586' ? 'Julian' : msgFrom} said, ${msgBody}`);
  

  // req.send(`${msgFrom} said, ${msgBody}`);
});

http.createServer(app).listen(3001, () => {
  console.log('Express server listening on port 3001');
});