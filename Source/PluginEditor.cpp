/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"


//==============================================================================
Project0AudioProcessorEditor::Project0AudioProcessorEditor (Project0AudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (400, 300);
}

Project0AudioProcessorEditor::~Project0AudioProcessorEditor()
{
    //processor.shouldPlaySound = false;
    //processor.shouldPlaySound->beginChangeGesture();
    //processor.shouldPlaySound->setValueNotifyingHost(false);
    //processor.shouldPlaySound->endChangeGesture();
    
    Project0AudioProcessor::UpdateAutomatableParamater(processor.shouldPlaySound, false);
};

//==============================================================================
void Project0AudioProcessorEditor::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));

    g.setColour (Colours::white);
    g.setFont (15.0f);
    g.drawFittedText ("White Noise Generator", getLocalBounds(), Justification::centred, 1);
}

void Project0AudioProcessorEditor::resized()
{
    // This is generally where you'll want to lay out the positions of any
    // subcomponents in your editor..
}

void Project0AudioProcessorEditor::mouseUp(const MouseEvent &e)
{
    //processor.shouldPlaySound->beginChangeGesture();
    //processor.shouldPlaySound->setValueNotifyingHost(!processor.shouldPlaySound->get());
    //processor.shouldPlaySound->endChangeGesture();
    
    Project0AudioProcessor::UpdateAutomatableParamater(processor.shouldPlaySound,
                                                       !processor.shouldPlaySound->get());
}


void Project0AudioProcessorEditor::mouseDown(const MouseEvent &e)
{
    //processor.shouldPlaySound = true;
}
