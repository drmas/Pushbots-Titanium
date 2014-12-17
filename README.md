# pushbots Module

## Description

TODO: Enter your module description here

## Accessing the pushbots Module

To access this module from JavaScript, you would do the following:

    var pushbots = require("com.pushbots.android");

The pushbots variable is a reference to the Module object.

## Reference

This is a wrapper for Pushbots Android module

### pushbots.enabled

Enable or disable push notification

### pushbots.alias

Write only property to set Pushbots alias

### pushbots.tag(tag, alias)

Function to set tag.

## Usage

- First you need to register to [Pushbots Website](http://pushbots.com)
- Next you need to add your Google Messaging and Pushbots ids in Android resources 'platform/android/res/values/pushbots.xml' 
```
<?xml version="1.0" encoding="utf-8"?>
<resources>
    <!-- Pushbots Application ID  -->
    <string name="pb_appid">[PushbotsAPPID]</string>
    <!-- GCM Sender ID -->
    <string name="pb_senderid">[GCMID]</string>
    
    <!-- Pushbots Log Level  log Tag “PB2” -->
    <string name="pb_logLevel">DEBUG</string>
</resources>
```
- After that you can use it in your titanium code

```
var pushbots = require('com.pushbots.android');

// to enable Pushbots notifications
pushbots.enabled = true;

```

## Author

Mohamed Shaban

## License

The MIT License (MIT)

Copyright (c) <year> <copyright holders>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
