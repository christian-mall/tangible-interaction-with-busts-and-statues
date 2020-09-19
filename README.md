# Tangible Interaction with Busts and Statues

This readme will contain a summary of the prototyping work that was done for the master thesis to create the prototypes of the plaster bust of Ludwig I. as well as the miniature statues. Alongside, all of the findings of the author regarding things that one has to pay attention to as well as some dos and don'ts will be shared.

## Table of contents

#### 1. Silicone mold from the bust of Ludwig I. and basic plaster castings
#### 2. Capacitive sensing
#### 3. Pre-study
#### 4. Audio/Video output
#### 5. Creation of the prototype of the interactive bust of Ludwig I.
#### 6. Creation of the prototypes of the interactive miniature statues

## 1. Silicone mold from the bust of Ludwig I. and basic plaster castings

In this section it will be described gradually how a silicone mold was created from the original Ludwig bust from the Staatliche Antikensammlungen and how it was used to make further plaster castings.

The first step was to cut out a base plate (in this case made out of wood) where the head can rest on. In order to fixate the head onto the board and to prevent any silicone from leaking under the head before it fully cures Plasticine (a sort of modeling clay) was used. In order for it to be malleable it was put in the microwave for a short period of time which made working with it way easier. Then the clay was used to seal all of the crevices between the head and the base plate (see figure below).

<img src="https://user-images.githubusercontent.com/44895720/90312368-3b8a3d00-df04-11ea-8528-eccf78b39910.jpeg" width="600">

The next step was to build a wooden case around the bust to build a vessel for the silicone. This can be seen in the figure below.

<img src="https://user-images.githubusercontent.com/44895720/90312425-a5a2e200-df04-11ea-916f-551afaf232df.jpeg" height="600">

The silicone that was used is a "SF33 - RTV2" silicone. This type of silicone is milky-transparent, very durable and heat-resistant. It’s a silicone that is made for making silicone molds and it consists of two parts:

* a base
* a catalyst

Once these two parts are properly mixed in a 1:1 ratio the silicone cures in around 3 hours at room temperature. Higher temperatures speed up the curing process. Normal silicone needs air to cure which would have been problematic here because the final mold is quite thick. The "SF33" means that its Shore hardness is "33" so it’s medium-hard. For this project 10 kg of silicone were used. But before the silicone got poured inside the vessel an anti-sticking spray ("Achem SG-1008S") was used to spray a thin layer onto the bust. This is important so that the silicone doesn't stick afterwards. After the spray was dried (it forms a waxy layer) a thin layer of the silicone was applied on the whole bust by using a small brush. This way it is ensured that there get no air bubbles trapped in between the plaster and the silicone. Then the rest of the silicone got poured inside the vessel. The following figure shows the silicone mold once it was cured.

<img src="https://user-images.githubusercontent.com/44895720/90312479-14803b00-df05-11ea-9f67-daea6af736c2.jpeg" width="600">

The next step was to unmold the head. On some parts the head was a bit difficult to get out of the mold but in the end it worked out well. The next figure shows the finished silicone mold.

<img src="https://user-images.githubusercontent.com/44895720/90312531-88bade80-df05-11ea-94a2-e023685e7bfa.jpeg" width="600">

Next, it will be described how the silicone mold was used to create plaster castings of the bust of Ludwig I. To prevent the dried plaster from sticking to the silicone the anti-sticking spray was used again. Later on in the prototyping process the author found out that it was only necessary to use the spray to create the silicone mold. It doesn't need to get used to create the plaster castings. After some time this spray forms a waxy layer on the silicone. After that a bit of plaster got mixed with warm water in a ratio of 1.5:1 and once the mixture was properly mixed it got poured inside of the mold, the mold got tilted around and a brush was used to apply a thin layer of the plaster all around the inside of the silicone mold. This was done so that the plaster gets into every nook and cranny of the mold so that the resulting casting turns out well. The next batch of the plaster should be more viscous than the first batch was because this way it can be applied in a more generous way and it will dry out faster and stay on the places where it has been applied. To make the process a bit easier a wooden frame in the shape of the contour of the silicone mold got used which got placed on top of the mold and which had overlapping edges to the inside (around 1 cm) as a guide to see how thick the plaster casting has to get so that it can be properly unmolded. This can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90313836-de948400-df0f-11ea-9567-929971234b89.jpeg" height="600">

The following figure shows the cured plaster casting which can then be unmolded.

<img src="https://user-images.githubusercontent.com/44895720/90313858-13a0d680-df10-11ea-9ffc-a7d9a347820e.jpeg" height="600">

The final unmolded head can be seen in the next figure.

<img src="https://user-images.githubusercontent.com/44895720/90313893-4519a200-df10-11ea-8af2-313304300255.jpeg" height="600">

As can be seen there are a few darker spots on it. This is from the spray that has been used and this is why on subsequent experiments less of the spray was used (until the author found out that such a spray is not even necessary).

## 2. Capacitive sensing

This section will describe how the capacitive sensing capabilities have been built, what materials have been used etc.

For this project the following two Arduinos got used for programming:

* "ARDUINO UNO REV3" (was used to implement the capacitive sensing; got powered through a Laptop via USB)
* "ARDUINO MEGA 2560 REV3" (was used for the prototypes that involve RFID which will get explained later on; got powered with a USB power supply)

There’s a "Capacitive Sensing Library" for Arduino that can turn two or more Arduino pins into a capacitive sensor with the help of copper foils and resistors. These sensors can then sense the capacitance of the human body. There are also dedicated sensors available that can be bought but the approach with the copper foils offers two important advantages:

* They are much slimmer and their size can be adjusted because one can just cut a sensor into the desired size and shape.
* They offer more customization on the software side so that the sensor can be programmed exactly the way which is best suited for the particular project.

The following figure shows how such pieces of copper foil can look like.

<img src="https://user-images.githubusercontent.com/44895720/90331894-82d20580-dfb8-11ea-8128-0a94e7270aa5.jpeg" width="600">

The most basic setup for one capacitive sensor just involves:

* the Arduino
* a resistor (medium to high)
* a piece of foil (e. g. copper or aluminum)
* a wire

Because the capacitive signal is able to pass through various types of materials (including plastic, wood, or in this case plaster) the sensors are invisible in the end because they get placed behind the respective material. The following figure shows a very basic setup with one capacitive sensor (copper foil).

<img src="https://user-images.githubusercontent.com/44895720/90332690-4229ba80-dfbf-11ea-8b48-06e0c5690325.png" height="600">

The program Fritzing (https://fritzing.org) was used in this master thesis to create the wiring diagrams and some parts (e. g. the copper pads) are custom-made by the author because they didn't exist pre-made in the program. Here, a 1 MΩ resistor is connected across pins 4 and 2 and a wire connects pin 2 with the copper foil. The code for this very basic, simple setup can be found under "Codes/Capacitive_Sensor_Value.ino". The way this works is the following: The "capacitiveSensor" method toggles a microcontroller send pin (pin 4) to a new state and then waits for the receive pin (pin 2) to change to the same state. The value that gets reported in the end is in arbitrary units. For many applications it is not advisable to just touch the bare sensor. Instead, it should be covered with an insulating material like paper or plastic to get values which are in a more useful range. In the case of this project this is automatically achieved since the sensors are covered by plaster. When the state of the send pin changes, the state of the receive pin eventually changes as well. This delay is determined by an RC time constant (R * C, where R is the resistor value and C is the capacitance at the receive pin, plus any additional capacitance which might come from the human body). In order to detect swipe gestures the author decided to use two sensors (in this example called A and B). When a swipe from A to B should get detected one just has to register the times when the sensors have been touched and see if the time difference is under a certain threshold which one has to define beforehand. In the final prototype of the bust the majority of interactions rely on swipe gestures which can be seen in the final code.

The first basic tests didn’t yet involve the process of embedding the capacitive sensors into the plaster. Instead, they dealt with using these sensors under a plane of plaster. For this purpose multiple sheets of plaster have been cast with varying thicknesses to see if the capacitive signal would be able to pass through the plaster. The pads of copper foil were glued under the plaster. There was no additional glue necessary because the copper foil that was used already came glued onto a sheet of paper so it could be peeled off and glued onto the plaster. As expected the results were better the thinner the layer of plaster that covered the copper was. After this basic test went well the next step was to try to get the capacitive sensing to work when there are multiple sensors next to each other. Such a setup can be seen in the next figure where the sheet of plaster is approximately 1 cm thick.

<img src="https://user-images.githubusercontent.com/44895720/90507994-1fcaa500-e157-11ea-9d69-16b462b32e87.jpeg" width="600">

This of course brings one major problem: The plaster layer on top of the copper conducts capacitance so when one sensor is touched, there’s not only a signal on this particular one but the values rise on the adjacent sensors as well. This is especially a problem when the plaster hasn’t been fully dried but even if it is completely dry it sometimes makes discerning which sensor has been touched impossible. This being said there are some ways to get better results:

* The first one being again to make the plaster layer thinner.
* Another way to make the sensors better discernible from one another is to place them as far apart from each other as possible.
* And it also helps if the sensors aren’t too tiny. Making them a little bit bigger can already make a huge difference. Coin-shaped sensors with a diameter of about 2.5 cm worked quite well.
* Another thing that got tested is whether it makes a difference if the sensor is touched on the non-glue side or on the glue side. The result was that it is better to touch it on the non-glue side because the glue apparently hinders the capacitive signal a bit but when put behind plaster the opposite is true. It is better if the foil gets properly glued onto the plaster so the direct contact is more important.
* Another finding was that the resistors that are used make a huge difference on the quality of the readings. Too small and the signal spikes can’t be seen, too big and the whole system gets overly reactive. Then, even if someone gets near cables there are already huge signal spikes. A value that worked quite well for this particular scenario was 2 MΩ. There occur some signal spikes when the hand gets near the cables but this isn't too much of an issue because the signal spikes are larger when the actual sensors get touched and the cables also get placed behind the bust (this will get described more detailed later on).
* And lastly, the author found out than when the Laptop isn't connected to power, the readings were far more stable.

The next tests were to try to embed the copper foils into the plaster. This approach is much more difficult because now the plaster is not only on top of the foils but also behind which further amplifies the problem of the capacitive signal inadvertently spreading throughout the plaster. To improve the signal-to-noise ratio an experiment was conducted where two prototypes got compared.

* One simply had three capacitive sensors embedded into the plaster.
* The other one had the three capacitive sensors surrounded by another copper foil (with a thin gap in between). This copper foil got connected to a ground pin on the Arduino. This approach can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90509112-1b9f8700-e159-11ea-8a54-fb98fcc824ea.jpeg" width="600">

This is the backside of the setup (before the additional plaster got poured). This additional grounding made the readings better. Then this approach got further refined. Instead of placing an additional copper foil around the sensors the additional copper foil simply got put behind the sensors. In order to avoid any short circuit a layer of hot glue which acts as an isolating layer was used. A schematic drawing of this approach (using two sensors) can be seen in the next figure.

<img src="https://user-images.githubusercontent.com/44895720/93201569-a91ec880-f751-11ea-95db-4f21d86e1888.png" width="600">

There are of course no gaps in between the layers but this way the drawing is a bit easier to read. The bottom plaster layer is the thin layer that gets applied onto the silicone mold. After that follow the copper foils that act as the capacitive sensors. Then follows the layer of hot glue for the isolation followed by the second layer of copper foil. This is the layer that gets connected to a ground pin of the Arduino. Last but not least follows the second plaster layer which can basically be as thick as one wants to ensure enough stability to be able to get the casting out of the mold. Something important to note about using this Capacitive Sensing Library in general is that the whole system is not the most stable one. Some minor shifts from the cables could be enough sometimes that the sensor readings weren’t usable anymore. Also it turned out that it is best if the cables don’t touch one another because apparently this causes some capacitive interferences. This is why the author decided to use a different solution for this project. The solution that was found was to use the "Adafruit 12-Key Capacitive Touch Sensor Breakout - MPR121". As the name suggests it supports up to 12 individual touch pads. The MPR121 chip handles filtering and can also be configured to be more or less sensible. The following figure shows how this touch chip gets connected to the Arduino (there are two sensors connected to the chip).

<img src="https://user-images.githubusercontent.com/44895720/90981707-e2a15100-e562-11ea-84c9-8a61558dca98.png" height="600">

To be able to program the chip there is the "Adafruit_MPR121" library that has to be installed. There is a basic program under "Codes/Capacitive_Sensors_MPR121.ino" which outputs which sensor has been touched and released in the serial monitor. The way it works is that this code keeps track of the 12 "bits" for each touch. The sensor measures the capacitance with "counts". There’s a baseline count number which depends on different factors like the temperature or the humidity. When the number changes a significant amount it is considered as a touch or release. To be precise, each sensor has two values: The aforementioned base value ("cap.baselineData(i)") and the current filtered data reading ("cap.filteredData(i)") (i goes from 0 to 11). When the current reading is within 12 counts of the baseline value it is considered that the sensor is not touched. When the reading is more than 12 counts smaller than the baseline value a touch gets reported. There’s also the possibility to see if a particular sensor is touched (e. g. sensor #4: "if (cap.touched() & (1 « 4)) { do something }"). There are also commands to get the baseline and filtered data of each sensor ("filteredData(sensornumber);" respectively "baselineData(sensornumber);"). And lastly, there’s also the possibility to change the thresholds for touch detection but just for all sensors globally. Compared with the previous approach that didn’t involve this dedicated touch sensing chip there are two things to note:

* Whereas the sensor values changed quite a bit when the sensors were touched versus when they were not touched when using the Capacitive Sensing Library for the Arduino (e. g. 90 versus almost 0) this is not the case at all when using the MPR121 chip. The spread is much smaller. Common values when a sensor is not touched are around 120 and when it is touched the values go down to around 110. Of course these values can be much different in other applications but these are some typical values that the author encountered for this particular usage scenario. At first, the fact that the spread is so small raised some concerns because as seen earlier when having multiple sensors next to each other embedded into the plaster the problem occurs that there’s not only a signal spike recorded for the sensors that indeed got touched but also on the adjacent ones (albeit not as big). Of course one would think that a bigger spread in the values makes it easier to discern which sensor got touched. However, it turned out that a huge advantage of the MPR121 chip is that when one sensor gets touched no changes occur in the values of the adjacent sensors. This makes it possible to easily discern which sensor has been touched even though the change in values is so small.
* The former approach with the Capacitive Sensing Library worked but it worked a bit unreliably. As seen earlier, while readings were fine most of the time, small movements of the cables sometimes caused problems so that the sensor values weren’t usable anymore. One also had to pay attention so that the cables don’t touch one another because when they do this sometimes caused problems. These are all problems that vanished when using the MPR121. The whole system was much more stable than previously and even when all of the cables were muddled and touched each other the sensor values remained solid. The only thing that one has to pay attention to in this regard is that it isn't advisable to bundle a bunch of cables together with cable ties. The sensors are still usable but the value differences when the sensors are touched versus when they aren't touched get smaller then.

Another method to improve the capacitive readings in comparison to the previous approach was to implement a calibration phase at the start. The way this works is the following: When the Arduino program is started there's a calibration phase which lasts 20 seconds and in which the author touches every sensor from the bust multiple times. The software is programmed so that it registers the minimum and maximum values of each sensor during that calibration phase. Afterwards, when the calibration is done, and the program is in its normal state, a touch is registered when the value goes down into the range of "minimum value + x" where "x" is a value that has to be defined beforehand. When this value would be 0 that could be problematic because when a sensor was pressed very hard during the calibration phase and doesn't get pressed so hard again later on during the normal interaction phase, a touch would never get registered. The values that the author used for this project range from 1-4 as can be seen in the final code. Once the calibration is done the program can run normally for as long as desired. Just when the bust gets moved to a completely different location which might e. g. be way more humid the calibration should be done again because the readings will be different in this new location.

One more note: Through an experiment the author found out that it is very important to make the connection of the sensors to the MPR121 as direct as possible. The author tried to use a D-sub connector to connect the sensors of the final bust to the MPR121 to tidy the connections up a bit but that didn't turn out well: The value range (untouched vs. touched) became way smaller then (about 5 units instead of 10). Apparently, the connector reduces the capacitive signal. When using a D-sub connector between the MPR121 and the Arduino (as the author also did) that's no problem.

## 3. Pre-study

After having done some basic tests regarding capacitive sensing a pre-study got conducted. The full study is described in-depth in the master thesis while this section will just focus on the prototyping work and the material explorations in this stage that the author conducted. For this study a new bust got cast. This was just a basic plaster version of it that contained no sensors. One of the goals of this study was to find out where potential museum visitors would like to touch the statue to get which kind of information and also how they interact with the statue (tapping, swiping etc.). Another goal was to find out how to best convey to the visitors that certain parts of the bust are made for tangible interaction in the first place. Before the pre-study got conducted there had to be found a solution to be able to see on the bust where and how a participant touched it after he or she lifted the finger. The author tested multiple approaches:

* The first idea was to use an **infrared camera** for that but when this approach got tested it turned out that it is not suitable for this use case because of numerous issues. One problem was that the temperature traces that a user left onto the bust once he/she touched it quickly disappeared once the finger got lifted off of the surface. This was not a problem when the participant touched a part of the statue for a longer period of time but in this case the opposite problem came up: The residual heat was present way too long. Cooling these parts wouldn’t work because then it would be too cold on these parts. Also it would have been difficult to conduct the study over several days because ideally the ambient temperature would be constant all of the time so that the infrared camera can get properly calibrated to these exact conditions in order to deliver comparable results.
* The next idea was to use **UV colors** alongside a black light. The idea was that participants wear gloves and dip their fingers into a UV color prior to touching the bust. The issue with this approach was that the UV color couldn’t be removed from the bust afterwards even though the bust was treated with several layers of clear paint before. A better approach was to use UV pigments which got mixed with toothpaste. This mixture was easier to remove but not well enough. Once a few participants touched the statue the residual paint accumulated. This can be seen in the following figure (the actual traces are on the lips while residual traces can be seen on the forehead).

<img src="https://user-images.githubusercontent.com/44895720/91060639-7dfdf900-e62b-11ea-8108-af3e0e74e8f9.jpeg" height="600">

* The final solution was to just use **water colors**. The participants wore gloves, dipped their fingers into water and then into the water color and then touched the statue. This approach worked well because the water color could easily be removed with a damp towel afterwards. The following figure shows some touch traces that the participants' fingers left on the bust (multiple images got combined into a single one for this image because the color got removed with a damp towel each time after a participant touched it).

<img src="https://user-images.githubusercontent.com/44895720/91163598-1ea4f500-e6ce-11ea-9e07-da3a50a2078c.png" height="600">

Based on where the participants touched the statue and also the way they touched it to get certain kinds on information the following decisions were made for the next prototype of the bust:

* Tapping on the forehead –> Information regarding the foundation of the Glyptothek
* Swiping across the lips –> Information regarding Ludwig’s wife
* Swiping across the forehead –> Information regarding Ludwig’s poetry
* Swiping across the nose –> Information regarding Ludwig’s business communication

The topics have been chosen by the author but what interaction triggers what topic got determined by the study. During the further prototyping process the author decided to also include 2 capacitive sensors in the hair. This should trigger some information regarding Lola Montez. The following figure shows the exact parts marked in an image editor.

<img src="https://user-images.githubusercontent.com/44895720/91066571-2747ed80-e632-11ea-8ef5-80dcc5b5ccc1.jpeg" height="600">

To mark these interactive parts the author decided to use color because this was the preferred method of the people who participated in the pre-study. As mentioned earlier, the actual study is described in the master thesis.

## 4. Audio/Video output

The next task was figuring out how exactly the output should be presented once a potential visitor interacts with the statue. The author decided to use two different form of output: Audio and a display. The decision to provide audio output was pretty straightforward. It is an easy and fast way to convey information and even visually impaired people can benefit from this type of output. So now the next step was to formulate some short texts for each of the five different scenarios (information about the Glyptothek, information regarding Ludwig’s wife etc.). See the master thesis for these full texts. Then these texts got recorded as audio recordings (.mp3 format) and stored onto a microSD card. To play these recordings using an Arduino there are multiple options. One option would be to use the "ARDUINO ETHERNET SHIELD 2" which contains a microSD card reader. Alongside the microSD card reader an Ethernet shield offers many additional features but if the only goal is to have a microSD card reader an even better option is to use the "DFPlayer Mini MP3 Player For Arduino". This is a small MP3 module with a built-in microSD card reader that can output directly to a speaker. It even features a digital-to-analog converter (DAC). Before being able to use it it is necessary to install the "DFRobotDFPlayerMini" library for the Arduino. As a speaker a simple 8 MΩ speaker was used. The following figure shows a wiring diagram for a setup that involves the MP3 player and a speaker.

<img src="https://user-images.githubusercontent.com/44895720/91063335-26ad5800-e62e-11ea-9389-5be6e2bb1850.png" width="600">

Before trying the audio output in combination with the bust a basic test was performed with two capacitive sensors and two different audio recordings. Depending on which sensor was touched a different recording should play. The code to implement this functionality can be found under "Codes/Capacitive_Audio.ino". Some important notes are that the microSD card has to be formatted in either the FAT16 or the FAT32 format and that the .mp3 files have to be placed in a folder called "MP3" which has to be put in the root directory. The .mp3 files themselves have to be named "0001.mp3", "0002.mp3" etc.

Additionally, the idea was to also present content in a different way when a user interacts with the bust. There the author decided to add a visual modality to the auditory one. There are multiple ways to make this happen but most of them don’t fit in this particular use case. One option would be to simply display content on a computer screen which is adjacent to the statue. Another one would be to get a standalone LCD or OLED display and display content there. Both of these options are not suited for this thesis because having these digital screens next to the bust does not fit in the realm of tangible interaction with a plaster bust which has an analogue element to it through touching the bust. So the solution was to get an e-paper display. Although of course being also digital, e-paper displays (like their name already implies) mimic the appearance of ink on paper so they have a rather analogue look. Conventional displays like e. g. LCDs are backlit and emit light whereas e-paper displays reflect light which makes them similar to paper. The particular display that was used for this thesis is the "Waveshare 5.83inch e-Paper HAT". This panel is a 600 x 448 pixel two color display which is capable of displaying black and white content. This raw panel additionally requires a driver board. The one that was used for this thesis is the "Waveshare E-Paper Shield". This is a universal driver board which can be used to connect an e-paper raw panel to an Arduino. The display gets connected to the shield via a ribbon cable which is included in delivery and the shield can simply be put on top of the Arduino UNO. The only issue is that the shield blocks all of the Arduino pins. This is why the "PROTO SHIELD REV3 (UNO SIZE)" got used as an "intermediate ceiling". The e-paper shield also has an external SPI RAM chip onboard which makes it possible to use it for SD card reading and writing. The first step to being able to program this display is to download the demo code from the website and then import the "EPD" library. The SD card needs to be formatted in the FAT format and the images need to be monochrome BMPs. As mentioned previously, five audio files got recorded which get played when the user interacts with different parts of the bust. Alongside this auditory modality the plan was to additionally display one image each which goes together with the respective audio recording and which gets displayed on the e-paper display. So five simple, fitting images got drawn using an iPad Pro, an Apple Pencil and the iPadOS app "Paper". The images got exported (as .pngs), scaled to 600 x 448 pixel and saved as .bmps. A website got used to convert these images into monochrome .bmp images (https://online-converting.com/image/convert2bmp/). Lastly, the images got saved onto a microSD card which got inserted into the e-paper shield. See the master thesis for the actual images.

## 5. Creation of the prototype of the interactive bust of Ludwig I.

In this chapter it will be described step-by-step how the final prototype of the interactive bust of Ludwig I. was created. Alongside, some tips will be shared as well as things to pay attention to. The final code for this prototype can be found under "Codes/FINAL_Capacitive_CalibratedV3_IMAGE.ino".

### Step 1: Mark the positions of the sensors

This first step is sort of a pre-step to the actual creation of the bust. Depending on the specific needs for the project it is not absolutely necessary. When the exact placement of the sensors is not really crucial one can omit this step. But in this particular project the exact placement is very important. The reason why it is then necessary to mark the positions of the sensors beforehand is the following: Once the first layer of plaster gets poured the small details in the silicone mold can't be properly seen anymore. The solution that was found involves a laser pointer mounted on a wooden plank. A wooden plank was cut and a hole got drilled inside of it so that a laser pointer could fit into it. Then this plank got placed on top of the silicone mold and moved around to the different spots so that at each position the laser pointer pointed at the exact position where a copper pad should be. Then the respective positions got marked on the plank and also on the silicone mold. This can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90980971-a66bf180-e55e-11ea-9e1a-79c73a982089.jpeg" height="600">

### Step 2: Preparation of the silicone mold

The next step was to prepare the silicone mold. While at first the author used some anti-sticking spray so that the dried plaster doesn't stick to the silicone the author later found out that this is not necessary because the silicone itself has a surface which makes sure that the plaster doesn't stick to it. But there's one product that improves the surface of the final bust a bit and that is a leveling agent. The specific product that got used is called "HINRISID Oberflächenentspanner auf Tensidbasis". When using it the surface of the bust gets a bit smoother because the plaster gets dispersed more evenly. To apply the product it is best when it gets mixed with a little bit of water and then applied onto the inside of the silicone mold using a brush. Then is has to dry for about 2 minutes and then one has to fan it dry. The author used some kitchen roll to dab dry the parts which had a bit of excess liquid.

### Step 3: Apply the first layer of plaster

Then some plaster got mixed with water (in a ration of 1.5:1). It is important to pour the plaster into the water and not vice versa to avoid any clumping. Then it has to be mixed together properly until smooth.

**Notes about different types of plaster:** Something very important is that there are multiple types of plaster available. While a basic plaster which can be found in any hardware store works it doesn't yield the best results. Using gypseous alabaster brings three advantages: Firstly, it is easier to work with it since it cures more slowly. So once the plaster and the water get mixed together the amount of time when the plaster is viscous is much longer. Secondly, it becomes much harder. This helps with the structural integrity of the bust. And lastly, the color is different: While the basic plaster is a bit grayish, the gypseous alabaster is more white.

Then the plaster got applied in a thin layer of about 1-2 mm thickness. It helps when the mold gets tilted around a bit and when a brush gets used to get the plaster into every nook and cranny of the silicone mold. It is very important that the first layer of plaster doesn't exhibit any holes.

**Notes about the thickness of the plaster:** It makes a huge difference how thick this first layer is. It is important to make it as thin as possible because that helps with the capacitive sensing but when making it too thin the risk is that parts of the bust break off during the unmolding process. When making the layer too thick the capacitance can't properly get through the layer later on. A thickness of about 1-2 mm works best.

Before the plaster dried the author used some gauze and pressed it into the parts of the nose and lips. The reason is that the first prototypes exhibited some structural weaknesses in these areas and the gauze helps to add some more stability to these parts. There are a few things to note:
* The gauze must not be pressed down into the plaster too hard. Otherwise, it will be seen on the outside of the bust later on. It just has to be gently pressed into the viscous plaster.
* It is possible to also use other materials which give structural strength (like polymer fibers or a fiberglass cloth) but the gauze soaks up the plaster a bit which is why this material is superior to the other options since this means that it does a better job of giving additional strength to the outer layer.

Then the plaster has to dry. It is best to let the plaster dry at least overnight. The result of this step can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90979216-f3969600-e553-11ea-9ac6-b886fd5458d9.jpg" height="600">

### Step 4: Adding the sensors

The next step was to add the sensors. The author decided to use copper foil for this. The foil came pre-glued onto paper so it could be peeled off and then glued onto the dried plaster. In order to be sure that the sensors get placed at the exact locations where they should be the trick with the laser pointer got used. It is important that the sensors aren't too small. Otherwise, the capacitive sensing will get problematic later on. Coin-shaped sensors with a diameter of about 2.5 cm worked well. It has to be ensured that the sensors have good contact with the plaster. This can be a bit challenging on very curved surfaces like on the nose but a few cuts with a scissor help the copper foil to adhere to the surface of the plaster. The sensors on the hair part are deliberately bigger because there the goal was that is doesn't matter where exactly the user touches the bust. Lastly, some wires needed to be soldered to the sensors. The following figure shows the result of this step.

<img src="https://user-images.githubusercontent.com/44895720/90979719-50e01680-e557-11ea-9ca2-efe19886f93d.jpg" height="600">

### Step 5: Adding the hot glue

Then follows the isolating layer. The author chose to use hot glue for this purpose. The hot glue doesn't need to be applied everywhere but just on a rectangle that covers all of the sensors. It would propably be even enough when just the sensors get covered although this did not explicitely get tested. During this step one has to pay attention that every part of the sensors is covered so that there are no holes in the hot glue layer. Otherwise, there can be a short circuit later on due to the grounding layer (that now follows) being in contact with the sensors. The result of this step can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90979736-6f461200-e557-11ea-9d59-ec8756725c11.jpg" height="600">

### Step 6: Adding the grounding layer

The next step is to add the grounding layer. Again, the author chose the copper foil for that. The grounding layer is important to improve the results of the capacitive sensing. As with the hot glue, the grounding foil got applied in a rectangle that covers all sensors. Then a cable needs to be soldered to this layer. The next figure shows the result of this step. Note: The picture got taken before this wire got added.

<img src="https://user-images.githubusercontent.com/44895720/90979905-4eca8780-e558-11ea-9270-7024f56e728f.jpg" height="600">

### Step 7: Adding the Moltofill

This is a step that is not absolutely necessary but it is best to do. This step involves applying a layer of Moltofill. The reason is the following: Liquid plaster doesn't combine well with already cured plaster and it also expands when drying so the problem is that the second plaster layer might cause the first one to crack a bit because it expands a little bit. So the idea is to apply a thin layer of Moltofill before applying the second plaster layer. The Moltofill should be slightly dried but not all the way before the second plaster layer gets poured so that it combines well. The following figure shows the result after adding the Moltofill and letting it slightly dry.

<img src="https://user-images.githubusercontent.com/44895720/90980025-1d9e8700-e559-11ea-8cb6-1be0be3214f3.jpg" height="600">

### Step 8: Adding the last layer of plaster

The last step regarding the creation of the bust itself is to add the second layer of plaster. This layer can basically be as thick as one wants to give enough structural stability to the bust. The next figure shows the result.

<img src="https://user-images.githubusercontent.com/44895720/90980130-cb119a80-e559-11ea-85d0-3b55a79fdc10.jpg" height="600">

The next figure shows an updated version of the schematic drawing from earlier. For this example, just two sensors are shown. The left one has a layer of gauze under it to give more stability while the right one is just left as is. It can also be seen that the layer of Moltofill got added to the drawing. This is the layer under the second plaster layer.

<img src="https://user-images.githubusercontent.com/44895720/93202286-bbe5cd00-f752-11ea-918c-a16a37363d3e.png" width="600">

### Step 9: Unmolding

Before unmolding the bust it is best to let it cure for a couple of days. Even then the outside is slightly damp. This is why it is advised to give the bust another 1-2 days after unmolding to dry out more. The resulting bust can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90980165-09a75500-e55a-11ea-8721-b6d557fc9c75.jpg" height="600">

### Step 10: Marking the interactive parts on the outside of the bust

This is an optional step but the author decided to mark the interactive parts on the outside of the bust because it was important in the scope of the master thesis. There are multiple ways to mark interactive parts on the bust. These are the ones that the author explored in the scope of the thesis:

* **Colored markings:** The easiest way is to use colored markings. This can be achieved by just using water color and apply the color onto the outside of the bust using either a brush or a finger. The author also experimented with wax colors but these left a sticky texture on the bust. The only thing one has to pay attention to is that the brush/finger is not too wet when applying the water color. Otherwise, the color runs off, ruining the bust. A skin colored water color was used for the interactive parts on the face while a brown color was used for the hair part. The color got applied using a brush. An alternative way to get colored markings is to make the plaster itself colored on certain parts in step 3 by mixing one batch with wall color so that one has two batches: The normal plaster one and the colored one. The issue is that this makes it way harder when trying to evenly distribute the plaster to get the thin first layer because one has to pay attention to not inadvertendly mixing these two parts.
* **Structural markings:** Another possibility is to use some kinds of structural markings. The author tried out a lot of different approaches for this and in the end found one that works well. The first idea was to use a gauze which gets pressed inside the outer layer of plaster from the inside when it isn't fully cured yet. This didn't work well. When too less pressure got applied the structure couldn't be seen on the outside and if too much pressure got applied the gauze could be seen. This approach was especially problematic for curved areas. Using joint tape instead of gauze worked better but also not well enough. In the end, the author decided to apply the joint tape in a different manner. The way this works is the following: The self-adhesive joint tape got placed onto the interactive parts from the finished bust (from the outside). Then a very small amount of additional plaster got smeared onto these parts. Then, after the plaster was slightly dry but not dried all the way, the joint tape got removed, leaving behind a checkered structural marking. These structural markings are way more subtle than the markings with color and they offer an additional modality when touched alongside the visual one.
* **Markings with cloths:** Another option is to use a cloth to create some markings. The author decided to do this with felt. The cut out felt pieces (different colors, as with the water colors) just got glued onto the plaster using superglue. This way of highlighting is obviously way more explicit which might not be fitting for one's particular usage scenario.

The following figure shows all of these three resulting busts alongside the original plaster bust which got provided by the Staatliche Antikensammlungen.

<img src="https://user-images.githubusercontent.com/44895720/90982668-eb952100-e568-11ea-9ef4-73038cea1cec.jpeg" width="600">

### Step 11: Mounting the bust

This is another optional step but for the thesis the author decided to mount the bust onto a box to properly display it. The first goal was that users can comfortably interact with the bust and the second goal was that all of the electronic parts could be hidden so that users don’t see any cables etc. hanging around. The solution was to build a wooden box which can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/93352593-4b66ab00-f83b-11ea-9128-100c20a867e2.png" height="600">

The idea is that the bust gets placed on the right hand side while all of the cables get fed through the two bigger holes on the right. Through a wooden cross that got attached to the back side of the bust with tile adhesive (see following picture) it can be mounted onto the slated board using the small hole that got drilled inside of it and with the help of a screw and a nut.

<img src="https://user-images.githubusercontent.com/44895720/93353136-dd6eb380-f83b-11ea-9e46-0a1e77b583e4.jpeg" height="600">

On the left hand side of the box the e-paper display gets placed and the cables can be routed to the back side of the box through a hole that has been cut into the slated board. This made it possible to neatly display the bust for users who can then easily interact with it.

The following figure shows the back side of the wooden box with a few annotations regarding the different parts of the setup.

<img src="https://user-images.githubusercontent.com/44895720/93350551-0e011e00-f839-11ea-82cd-499829e33fb6.jpeg" width="600">

## 6. Creation of the prototypes of the interactive miniature statues

In this chapter it will be described how the final prototypes of the interactive miniature statues were created. The final code for these prototypes can be found under "Codes/FINAL_RFID.ino". But first, some general info. The first question that needed to be addressed is how these smaller statues could be made interactive in a way that would be fun and engaging for the users. Because they are much smaller than the bust, working with capacitive sensors is not really a solution because they can't be so small that they could be used in this scenario. Also it probably wouldn't be a fun experience for the users to e. g. interact with different parts of a face on such a small scale.

So the idea was to work with "radio-frequency identification" (RFID). In the past, this technology mainly got used for identifying animals, anti-theft devices or admission control but the areas of application get bigger and bigger. RFID systems are widely available also for private use. In the following, the basics of this technology will get described. A typical RFID system consists of three components:

* a computer
* a reader with a coupling unit (coil, antenna)
* an RFID transponder

How these components interact with each other can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/91175969-e3142600-e6e1-11ea-939f-21281ceea17d.png" width="600">

The reader which is connected to a PC via a serial connection or network connection can serve either as a pure reader or a writer/reader device. The application that is running on the PC sends commands and data to the reader and gets data back from the reader. These commands can e. g. be the readout of all of the ID numbers from the transponders within the reading range or to write data onto the transponder. The reader then encodes these commands and modulates them onto a magnetic or electromagnetic alternating field. This alternating field additionally serves the purpose of providing the transponders with energy (this is the case for passive transponders; there are also active transponders which have their own power supply). All transponders which are within the field of the reader receive the transmitted commands and data and send their individual answers back to the reader. Typically, a transponder consists of a microchip and a coupling unit. This coupling unit can either be a coil or an antenna.

The products that were used in this project are:

* an "ARDUINO MEGA 2560 REV3"
* the "RFID-RC522" as the reader
* simple plastic transponders which contain a coil

The next step was to connect the reader to the Arduino. The following figure shows the wiring diagram.

<img src="https://user-images.githubusercontent.com/44895720/91176213-3a19fb00-e6e2-11ea-96a1-393cd8f616f7.png" height="600">

The next step is to find out the "Unique Identification Number" (UID) of the transponders. Every transponder has such a unique number. In order to be able to do any programming with this setup one needs to import the "MFRC522" library. Then it is possible to find out the number of each of the transponders with a short Arduino sketch. The code can be found under "Codes/RFID_Codes.ino".

Then the idea was to build base blocks made from plaster which each house an RFID tag. Then it is possible to place a small statue on top of the block. Before trying to embed any of the RFID parts into plaster the first experiment was to see whether the signal could pass through layers of plaster. For this the reader got placed behind a sheet of plaster and then the tags got laid on top of the plaster. This worked without any problems. The next step was to embed the tags into the plaster blocks. In order to cast the plaster blocks a silicone baking mold was used. The block on the left in the following figure shows how such a block looks.

<img src="https://user-images.githubusercontent.com/44895720/91176426-8bc28580-e6e2-11ea-83e7-dc643a6caf1d.jpeg" width="600">

Later, the cavity in the center got filled with plaster so that the surface is even but the decorative frame was left untouched because it adds a nice visual touch to the block. The block on the right is shown from its underside where a hole has been drilled into the plaster so that an RFID tag can fit right in. Then the hole simply got filled back up with some more plaster.

King and queen Playmobil figures got used as miniature statues which should represent Ludwig I. and his wife Therese. These got glued on top of the plaster blocks as can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/91176547-b7de0680-e6e2-11ea-8b09-1d81c92c52ff.jpeg" width="600">

As with the interactive bust the idea was that once a museum visitor interacts with one of the statues an audio recording plays so another "DFPlayer Mini MP3 Player For Arduino" got used for this purpose. So the next step was to record these two audio recordings (the same procedure as for the bust). The full texts can be found in the master thesis.

The e-paper display did not get used for this particular application. For display purposes the wooden box got used again. As can be seen in the previous figure where the wooden box was shown three storing positions got built on top of the box. The left and right ones are for the miniature statues while the middle one contains the RFID reader which is hidden underneath the wooden base. When the king figure gets placed into the middle position which got marked with blue color the audio recording narrating some information regarding Ludwig I. gets played and when the queen figure gets placed there the audio recording narrating information regarding Therese gets played.

The following figure shows the back side of the wooden box with a few annotations regarding the different parts of the setup.

<img src="https://user-images.githubusercontent.com/44895720/93354156-ffb50100-f83c-11ea-9abe-4ba9bfd1102c.jpeg" height="600">
