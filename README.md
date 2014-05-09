HFCustomKeyboard
================
A really rather good software keyboard for IPads

![The DWS Custom Keyboard](http://Keyboard.png)

It will just pop up like the standard keyboard, when any inputText field it is attached to becomes firstResponder.

Functionality
-------------
Standard keyboard + numeric keypad + joystick + cursor keys + home, end, move by word, delete right, and insert date, time, email, location.....

On most keys, it is clearly indicated where you can:

1. Press the key to get the character on the key (as per normal)
2. Press the key and slide finger DOWN before releasing, to get the CAPITAL letter
3. Press the key and slide finger UP before releasing to get the symbol at the top of the key (similar to SHIFT+key, with no shift!)
4. Press the key and slide LEFT before releasing to perform that function (eg, keys z,x,c,v and a are undo, cut copy, paste and select all)

The standard keyboard is enhanced with the following:

1. A joystick, like those found on laptops, a small joystick in the middle of the keyboard. Put your finger on it, and slide your finger around to move the caret.
2. Cursor keys - character left, character right, line up, line down.
(Also: slide on the left arrow to move WORDLEFT. Slide right on the right arrow to move WORDRIGHT).
3. Change default base keyboard, and then add overlays as required for maths, currency symbols or codes, accented characters ......
4. Word (slide up), sentence (simple press), or paragraph (slide down) selection key. Plus select all by sliding left on the A key.

##Installation

Import these three files into your project:


* DWSCustomKeyboard.h
* libDWSCustomKeyboard.a
* DWSKeyboardResources.bundle

making sure they are added to your target.

You may need to add
CoreLocation.framework
to the build phase "Link Binary With Libraries", and then add #import <CoreLocation/CoreLocation.h> to your .pch

On the build settings tab, find the "Linking" section. Add -ObjC as a setting to "Other Link Flags".

##Use

It's dead easy!
Import the header #import DWSCustomKeyboard.h
Set the inputView to [DWSCustomKeyboard sharedInstance] on your inputText fields, for example:


	 #import "ViewController.h"
	 #import "DWSCustomKeyboard.h"                                        <------------ IMPORT
	
	
	 @interface ViewController ()
	 @property (strong, nonatomic) IBOutlet UITextView *textView;
	 
	 @end
	 
	 @implementation ViewController
	 
	 - (void)viewDidLoad
	 {
	     [super viewDidLoad];
	     // Do any additional setup after loading the view, typically from a nib.
	   _textView.inputView = [DWSCustomKeyboard sharedInstance] ;         <------------ INSTANTIATE
	 }
	 - (void)didReceiveMemoryWarning
	 {
	     [super didReceiveMemoryWarning];
	     // Dispose of any resources that can be recreated.
	 }
	 
	 @end


##Statement of fitness for purpose

The current version is 0.9.
It is a BETA version.
The functionality is pretty good.
It should accommodate UITextView and UITextField, although the UITextView support is a little stronger.
The keyboard layouts supplied are reasonable for testing, but not optimised for stenographic touch-typists.

I would welcome comments, suggestions, criticisms, inputs, remarks, observations ... and suchlike.

DerekSmith [@] HarmonyFactory [.] com


