#include <MIDI.h>

// Simple tutorial on how to receive and send MIDI messages.
// Here, when receiving any message on channel 4, the Arduino
// will blink a led and play back a note for 1 second.

MIDI_CREATE_DEFAULT_INSTANCE();

#define LED 13   		    // LED pin on Arduino Uno

const int c = 2;
const int d = 3;
const int e = 4;
const int f = 5;
const int g = 6;
const int a = 7;
const int b = 8;

void setup()
{
    pinMode(LED, OUTPUT);
    pinMode(c, INPUT);
    pinMode(d, INPUT);
    pinMode(e, INPUT);
    pinMode(f, INPUT);
    pinMode(g, INPUT);
    pinMode(a, INPUT);
    pinMode(b, INPUT);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    MIDI.begin(4);          // Launch MIDI and listen to channel 4
    Serial.begin(57600);
}

void loop()
{
    if (digitalRead(c) == LOW)                // If we have received a message
    {
        digitalWrite(LED,HIGH);
        MIDI.sendNoteOn(60,127,1);  // Send a Note (pitch 42, velo 127 on channel 1)
        delay(300);		        // Wait for a second
        MIDI.sendNoteOff(60,0,1);   // Stop the note
        digitalWrite(LED,LOW);
    }
    
    if (digitalRead(d) == LOW)                // If we have received a message
    {
        digitalWrite(LED,HIGH);
        MIDI.sendNoteOn(62,127,1);  // Send a Note (pitch 42, velo 127 on channel 1)
        delay(300);		        // Wait for a second
        MIDI.sendNoteOff(62,0,1);   // Stop the note
        digitalWrite(LED,LOW);
    }
    
    if (digitalRead(e) == LOW)                // If we have received a message
    {
        digitalWrite(LED,HIGH);
        MIDI.sendNoteOn(64,127,1);  // Send a Note (pitch 42, velo 127 on channel 1)
        delay(300);		        // Wait for a second
        MIDI.sendNoteOff(64,0,1);   // Stop the note
        digitalWrite(LED,LOW);
    }
    
    if (digitalRead(f) == LOW)                // If we have received a message
    {
        digitalWrite(LED,HIGH);
        MIDI.sendNoteOn(65,127,1);  // Send a Note (pitch 42, velo 127 on channel 1)
        delay(300);		        // Wait for a second
        MIDI.sendNoteOff(65,0,1);   // Stop the note
        digitalWrite(LED,LOW);
    }
    
    if (digitalRead(g) == LOW)                // If we have received a message
    {
        digitalWrite(LED,HIGH);
        MIDI.sendNoteOn(67,127,1);  // Send a Note (pitch 42, velo 127 on channel 1)
        delay(300);		        // Wait for a second
        MIDI.sendNoteOff(67,0,1);   // Stop the note
        digitalWrite(LED,LOW);
    }
    
    if (digitalRead(a) == LOW)                // If we have received a message
    {
        digitalWrite(LED,HIGH);
        MIDI.sendNoteOn(69,127,1);  // Send a Note (pitch 42, velo 127 on channel 1)
        delay(300);		        // Wait for a second
        MIDI.sendNoteOff(69,0,1);   // Stop the note
        digitalWrite(LED,LOW);
    }
    
    if (digitalRead(b) == LOW)                // If we have received a message
    {
        digitalWrite(LED,HIGH);
        MIDI.sendNoteOn(70,127,1);  // Send a Note (pitch 42, velo 127 on channel 1)
        delay(300);		        // Wait for a second
        MIDI.sendNoteOff(70,0,1);   // Stop the note
        digitalWrite(LED,LOW);
    }
}
