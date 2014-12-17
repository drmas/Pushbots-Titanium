// This is a test harness for your module
// You should do something interesting in this harness
// to test out the module and to provide instructions
// to users on how to use it by example.


// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'white'
});
var label = Ti.UI.createLabel();
win.add(label);
win.open();

var pushbots = require('com.pushbots.android');
Ti.API.info("module is => " + pushbots);

// to enable Pushbots notifications
pushbots.enabled = true;

// to disable Pushbots notifications
//pushbots.enabled = false;

// to change Pushbots alias
//pushbots.alias = "myNewAlias";

// to set tags
//pushbots.tag('my tag', 'myAlias');

label.text = "Pushbot enabled = " + pushbots.enabled;