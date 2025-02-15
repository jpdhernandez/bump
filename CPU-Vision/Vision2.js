// Imports the Google Cloud client library
const vision = require('@google-cloud/vision');

// Creates a client
const client = new vision.ImageAnnotatorClient({
  projectId: 'htv3-232622',
  keyFilename: './HTV3-840e8a72e2cd.json'
});

// Performs label detection on the image file
client
  .labelDetection('./otter_crossing.jpg')
  .then(results => {
    const labels = results[0].labelAnnotations;

    console.log('Labels:');
    labels.forEach(label => console.log(label.description));
  })
  .catch(err => {
    console.error('ERROR:', err);
  });