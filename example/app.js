// This is a test harness for your module
// You should do something interesting in this harness 
// to test out the module and to provide instructions 
// to users on how to use it by example.


// open a single window
var window = Ti.UI.createWindow({
	backgroundColor:'white'
});
var label = Ti.UI.createLabel();
window.add(label);
window.open();

// TODO: write your module tests here
var tiiscan = require('com.infofab.iscan');
Ti.API.info("module is => " + tiiscan);

label.text = tiiscan.example();

//Ti.API.info("module exampleProp is => " + tiiscan.exampleProp);
//tiiscan.exampleProp = "This is a test value";