// var gcloud = require('@google-cloud/vision')({
//     keyFilename: './HTV3-840e8a72e2cd.json',
//     projectId: 'htv3-232622'
// });
// var vision = gcloud.vision();

// var image = 'otter_crossing.jpg';

// vision.detectText('image.jpg', function (err, text, apiResponse) {
//     ["faces, landmarks, labels, logos, properties, safeSearch, texts"]
// });




// // Imports the Google Cloud client library
// const vision = require('@google-cloud/vision');
 

// // Creates a client
// const client = new vision.ImageAnnotatorClient();







// Imports the Google Cloud client library.
const {Vision} = require('@google-cloud/vision');

// Instantiates a client. Explicitly use service account credentials by
// specifying the private key file. All clients in google-cloud-node have this
// helper, see https://github.com/GoogleCloudPlatform/google-cloud-node/blob/master/docs/authentication.md
const vision = new vision({
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