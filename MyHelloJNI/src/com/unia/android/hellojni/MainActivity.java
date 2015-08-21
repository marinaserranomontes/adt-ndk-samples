package com.unia.android.hellojni;

import android.app.Activity;
import android.os.Bundle;
import android.widget.TextView;

public class MainActivity extends Activity
{
	// native lib
    static {
        System.loadLibrary("hellondk");
    }
    native String getStringFromJNINative();
    
	TextView ndkText;
	
    @Override
    public void onCreate(Bundle savedInstanceState)
    {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.main);
        
        ndkText = (TextView) findViewById(R.id.ndkTextView);
        ndkText.setText( getStringFromJNINative() );
    }
}
