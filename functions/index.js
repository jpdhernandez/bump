const functions = require('firebase-functions');
const request = require("request");
// // Create and Deploy Your First Cloud Functions
// // https://firebase.google.com/docs/functions/write-firebase-functions
//
// exports.helloWorld = functions.https.onRequest((request, response) => {
//  response.send("Hello from Firebase!");
// });


exports.sms = (req, res) => {
  const { body } = req;
  const { From: msgFrom, Body: msgBody } = body;

  res.status(200).json({
    message: `${msgFrom === '+16476578586' ? 'Julian' : msgFrom} said, ${msgBody}`
  });
};

exports.parse = (req, res) => {
  const url = req.query.url;

  const options = {
    method: 'GET',
    url: 'https://document-parser-api.lateral.io/',
    qs: { "url": url },
    headers: {
      'Access-Control-Allow-Origin': '*',
      'content-type': 'application/json',
      'subscription-key': '0b8b238af3bae8b43e6b8f27e0b76377'
    }
  };

  request(options, (error, _, body) => {
    if (error) throw new Error(error);

    const {body: articleBody} = JSON.parse(body);
    const urlSegments = url.split('/');

    res.status(200).json({
      title: urlSegments[urlSegments.length -1], body: articleBody.split('\n')[0]
    });
  })
}