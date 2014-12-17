package com.pushbots.android;

import com.pushbots.push.Pushbots;

import android.app.Application;

public class MyApplication extends Application {
	  @Override
	    public void onCreate() {
	        super.onCreate();
	    	Pushbots.sharedInstance().init(this);
	       Pushbots.sharedInstance().setPushEnabled(true);
	        }
}
