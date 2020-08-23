# Tangible Interaction with Busts and Statues

This readme will contain a summary of the prototyping work that was done for the master thesis to create the prototypes for the plaster bust of Ludwig I. as well as the miniature statues. Alongside all of the findings of the author regarding things that one has to pay attention to as well as some dos and don'ts will be shared.

## Table of contents

#### 1. Silicone mold from the bust of Ludwig I. and basic plaster castings
#### 2. Capacitive sensing
#### 3. Creation of the prototype of the interactive bust of Ludwig I.
#### 4. Creation of the prototypes of the interactive miniature statues

## 1. Silicone mold from the bust of Ludwig I. and basic plaster castings

In this section it will be described gradually how a silicone mold was created from the original Ludwig bust from the Staatliche Antikensammlung and how it was used to make further plaster castings.

The first step was to cut out a base plate (in this case made out of wood) where the head can rest on. In order to fixate the head onto the board and to prevent any silicone from leaking under the head before it fully cures Plasticine (a sort of modeling clay) was used. In order for it to be malleable it was put in the microwave for a short period of time which made working with it way easier. Then the clay was used to seal all of the crevices between the head and the base plate (see figure below).

<img src="https://user-images.githubusercontent.com/44895720/90312368-3b8a3d00-df04-11ea-8528-eccf78b39910.jpeg" width="600">

The next step was to build a wooden case around the bust to build a vessel for the silicone. This can be seen in the figure below.

<img src="https://user-images.githubusercontent.com/44895720/90312425-a5a2e200-df04-11ea-916f-551afaf232df.jpeg" height="600">

The silicone that was used is a SF33 - RTV2 silicone. This type of silicone is milky-transparent, very durable and heat-resistant. It’s a silicone that is made for making silicone molds and it consists of two parts:

* a base
* a catalyst

Once these two parts are properly mixed in a 1:1 ratio the silicone cures in around 3 hours at room temperature. Higher temperatures speed up the curing process. Normal silicone needs air to cure which would have been problematic here because the final mold is quite thick. The "SF33" means that its Shore hardness is "33" so it’s medium-hard. For this project 10 kg of silicone were used. But before the silicone got poured inside the vessel a thin layer of it was applied on the whole bust by using a small brush. This way it is ensured that there get no air bubbles trapped in between the plaster and the silicone. After this thin layer was dried the rest of the silicone got poured inside the vessel. The following figure shows the silicone mold once it was cured.

<img src="https://user-images.githubusercontent.com/44895720/90312479-14803b00-df05-11ea-9f67-daea6af736c2.jpeg" width="600">

The next step was to unmold the head. On some parts the head was a bit difficult to get out of the mold but in the end it worked out well. The next figure shows the finished silicone mold.

<img src="https://user-images.githubusercontent.com/44895720/90312531-88bade80-df05-11ea-94a2-e023685e7bfa.jpeg" width="600">

Next, it will be described how the silicone mold was used to create plaster castings of the bust of Ludwig I. To prevent the dried plaster from sticking to the silicone a spray was used which prevents sticking (Achem SG-1008S). Later on in the prototyping process the author found out that such a spray is not even necessary. Details will follow later. After some time this spray forms a waxy layer on the silicone. After that a bit of plaster got mixed with warm water in a ratio of 1.5:1 and once the mixture was properly mixed it got poured inside of the mold, the mold got tilted around and a brush was used to apply a thin layer of the plaster all around the inside of the silicone mold. This was done so that the plaster gets into every nook and cranny of the mold so that the resulting casting turns out well. The next batch of the plaster should be more viscous than the first batch was because this way it can be applied in a more generous way and it will dry out faster and stay on the places where it has been applied. To make the process a bit easier a wooden frame in the shape of the contour of the silicone mold got used which got placed on top of the mold and which had overlapping edges to the inside (around 1 cm) as a guide to see how thick the plaster casting has to get so that it can be properly unmolded. This can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90313836-de948400-df0f-11ea-9567-929971234b89.jpeg" height="600">

The following figure shows the cured plaster casting which can then be unmolded.

<img src="https://user-images.githubusercontent.com/44895720/90313858-13a0d680-df10-11ea-9ffc-a7d9a347820e.jpeg" height="600">

The final unmolded head can be seen in the next figure.

<img src="https://user-images.githubusercontent.com/44895720/90313893-4519a200-df10-11ea-8af2-313304300255.jpeg" height="600">

As can be seen there are a few darker spots on it. This is from the spray that has been used and this is why on subsequent experiments less of the spray was used (until the author found out that such a spray is not even necessary).

## 2. Capacitive sensing

This section will describe how the capacitive sensing capabilities have been built, what materials have been used etc.

For this project the following two Arduinos got used for programming:

* ARDUINO UNO REV3 (was used to implement the capacitive sensing)
* ARDUINO MEGA 2560 REV3 (was used for the prototype that involves RFID which will get explained later on)

There’s a "Capacitive Sensing Library" for Arduino that can turn two or more Arduino pins into a capacitive sensor with the help of copper foils and resistors. These sensors can then sense the capacitance of the human body. There are also dedicated sensors available that can be bought but the approach with the copper foils offers two important advantages:

* They are much slimmer and their size can be adjusted because one can just cut a sensor into the desired size and shape.
* They offer more customization on the software side so that the sensor can be programmed exactly the way which is best suited for the particular project.

The following figure shows how such pieces of copper foil can look like.

<img src="https://user-images.githubusercontent.com/44895720/90331894-82d20580-dfb8-11ea-8128-0a94e7270aa5.jpeg" width="600">

The most basic setup for one capacitive sensor just involves

* the Arduino
* a resistor (medium to high)
* a piece of foil (e. g. copper or aluminum)
* a wire

Because the capacitive signal is able to pass through various types of materials (including plastic, wood, or in this case plaster) the sensors are invisible in the end because they get placed behind the respective material. The following figure shows a very basic setup with one capacitive sensor (copper foil).

<img src="https://user-images.githubusercontent.com/44895720/90332690-4229ba80-dfbf-11ea-8b48-06e0c5690325.png" height="600">

Here, a 1 MΩ resistor is connected across pins 4 and 2 and a wire connects pin 2 with the copper foil. The code for this very basic, simple setup can be found under "Codes/Capacitive_Sensor_Value.ino". The way this works is the following: The "CapacitiveSensor" method toggles the send pin (pin 4) to a new state and then waits for the receive pin (pin 2) to change to the same state. The value that gets reported in the end is in arbitrary units. For many applications it is not advisable to just touch the bare sensor. Instead it should be covered with an insulating material like paper or plastic to get values which are in a more useful range. In the case of this project this is automatically achieved since the sensor is covered by plaster. When the state of the send pin changes, the state of the receive pin eventually changes as well. This delay is determined by an RC time constant (R * C, where R is the resistor value and C is the capacitance at the receive pin, plus any additional capacitance which might come from the human body).

The first basic tests didn’t yet involve the process of embedding the capacitive sensors into the plaster. Instead they dealt with using these sensors under a plane of plaster. For this purpose multiple sheets of plaster have been cast with varying thicknesses to see if the capacitive signal would be able to pass through the plaster. The pads of copper foil were glued under the plaster. There was no additional glue necessary because the copper foil that was used already came glued onto a sheet of paper so it could be peeled off and glued onto the plaster. As expected the results were better the thinner the layer of plaster that covered the copper was. After this basic test went well the next step was to try to get the capacitive sensing to work when there are multiple sensors next to each other. Such a setup can be seen in the next figure where the sheet of plaster is approximately 1 cm thick.

<img src="https://user-images.githubusercontent.com/44895720/90507994-1fcaa500-e157-11ea-9d69-16b462b32e87.jpeg" width="600">

This of course brings one major problem: The plaster layer on top of the copper conducts capacitance so when one sensor is touched, there’s not only a signal on this particular one but the values rise on the adjacent sensors as well. This is especially a problem when the plaster hasn’t been fully dried but even if it is completely dry it sometimes makes discerning which sensor has been touched impossible. This being said there are some ways to get better results:

* The first one being again to make the plaster layer thinner.
* Another way to make the sensors better discernible from one another is to place them as far apart from each other as possible.
* And it also helps if the sensors aren’t too tiny. Making them a little bit bigger can already make a huge difference. Coin-shaped sensors with a diameter of about 2.5 cm worked quite well.
* Another thing that got tested is whether it makes a difference if the sensor is touched on the non-glue side or on the glue side. The result was that it is better to touch it on the non-glue side because the glue apparently hinders the capacitive signal a bit but when put behind plaster the opposite is true. It is better if the foil gets properly glued onto the plaster so the direct contact is more important.
* Another finding was that the resistors that are used make a huge difference on the quality of the readings. Too small and the signal spikes can’t be seen, too big and the whole system gets overly reactive. Then, even if someone gets near cables there are already huge signal spikes. A value that worked quite well for this particular scenario was 2 MΩ. There occur some signal spikes when the hand gets near the cables but this isn't too much of an issue because the signal spikes are larger when the actual sensors get touched and the cables also get placed behind the bust (this will get described more detailed later on).

The next tests were to try to embed the copper foils into the plaster. This approach is much more difficult because the plaster now is not only on top of the foils but also behind which further amplifies the problem of the capacitive signal inadvertently spreading throughout the plaster. To improve the signal-to-noise ratio an experiment was conducted where two prototypes got compared.

* One simply had three capacitive sensors embedded into the plaster.
* The other one had the three capacitive sensors surrounded by another copper foil (with a thin gap in between). This copper foil got connected to a ground pin on the Arduino. This approach can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90509112-1b9f8700-e159-11ea-8a54-fb98fcc824ea.jpeg" width="600">

This is the backside of the setup (before the additional plaster got poured). This additional grounding made the readings better. Then this approach got further refined. Instead of placing an additional copper foil around the sensors the additional copper foil simply got put behind the sensors. In order to avoid any shortages a layer of hot glue which acts as an isolating layer was used. A schematic drawing of this approach can be seen in the next figure.

<img src="https://user-images.githubusercontent.com/44895720/90509635-ed6e7700-e159-11ea-9079-f76818043c06.png" width="600">

There are of course no gaps in between the layers but this way the drawing is a bit easier to read. The bottom layer is the thin layer that gets applied onto the silicone mold. After that follows the copper foil that acts as the capacitive sensor. Then follows the layer of hot glue for the isolation followed by the second layer of copper foil. This is the layer that gets connected to a ground pin of the Arduino. Last but not least follows the second plaster layer which can basically be as thick as one wants to ensure enough stability to be able to get the casting out of the mold. Something important to note about using this Capacitive Sensing library in general is that the whole system is not the most stable one. Some minor shifts from the cables could be enough sometimes that the sensor readings weren’t usable anymore. Also it turned out that it is best if the cables don’t touch one another because apparently this causes some capacitive interferences. These are issues that got addressed later on.

## 3. Creation of the prototype of the interactive bust of Ludwig I.

In this chapter it will be described step-by-step how the final prototype of the interactive bust of Ludwig I. was created. Alongside some tips will be shared as well as things to pay attention to.

### Step 1: Preparation of the silicone mold

The first step was to prepare the silicone mold. While at first the author used some anti-sticking spray so that the dried plaster doesn't stick to the silicone the author later found out that this is not necessary because the silicone itself has a surface which makes sure that the plaster doesn't stick to it. But there's one product that improves the surface of the final bust a bit and that is a leveling agent. The specific product that got used is called "HINRISID Oberflächenentspanner auf Tensidbasis". When using it the surface of the bust gets a bit smoother because the plaster gets dispersed more evenly. To apply the product it is best when it gets mixed with a little bit of water and then applied onto the inside of the silicone mold using a brush. Then is has to dry for about 2 minutes and then one has to fan it dry. The author used some kitchen roll to dab dry the parts which had a bit of excess liquid.

### Step 2: Apply the first layer of plaster

Then some plaster got mixed with water (in a ration of 1.5:1). It is important to pour the plaster into the water and not vice versa to avoid any clumping. Then it has to be mixed together properly until smooth.

**Notes about different types of plaster:** Something very important is that there are multiple types of plaster available. While a basic plaster which can be found in any hardware store works it doesn't yield the best results. Using gypseous alabaster brings three advantages: Firstly, it is easier to work with it since it cures more slowly. So once the plaster and the water get mixed together the amount of time when the plaster is viscous is much longer. Secondly, it becomes much harder. This helps with the structural integrity of the bust. And lastly, the color is different: While the basic plaster is a bit grayish, the gypseous alabaster is more white.

Then the plaster got applied in a thin layer of about 1-2 mm thickness. It helps when the mold gets tilted around a bit and when a brush gets used to get the plaster into every nook and cranny of the silicone mold. It is very important that the first layer of plaster doesn't exhibit any holes.

**Notes about the thickness of the plaster:** It makes a huge difference how thick this first layer is. It is important to make it as thin as possible because that helps with the capacitive sensing but when making it too thin the risk is that parts of the bust break off during the unmolding process. When making the layer too thick the capacitance can't properly get through the layer later on. A thickness of about 1-2 mm works best.

Before the plaster dried the author used some gauze and pressed it into the parts of the nose and lips. The reason is that the first prototypes exhibited some structural weaknesses in these areas and the gauze helps to add some more stability to these parts. There are a few things to note:
* The gauze must not pressed down into the plaster too hard. Otherwise it will be seen on the outside of the bust later on. It just has to be gently pressed into the viscous plaster
* It is possible to also use other materials which give additional structural strength (like polymer fibers or a fiberglass cloth) but the gauze soaks up the plaster a bit which is why this material is superior to the other options since this means that it does a better job of giving additional strength to the outer layer.

Then the plaster has to dry. It is best to let the plaster dry at least overnight. The result of this step can be seen in the following picture.

<img src="https://user-images.githubusercontent.com/44895720/90979216-f3969600-e553-11ea-9ac6-b886fd5458d9.jpg" height="600">

### Step 3: Adding the sensors

The next step was to add the sensors. The author decided to use copper foil for this. The foil came pre-glued onto paper so it could be peeled off and then glued onto the dried plaster. It is important that the sensors aren't too small. Otherwise the capacitive sensing will get problematic later on. Coin-shaped sensors with a diameter of about 2.5 cm worked well. It has to be ensured that the sensors have good contact with the plaster. This can be a bit challenging on very curved surfaces like on the nose but a few cuts with a scissor help the copper foil to adhere to the surface of the plaster. The sensors on the hair part are deliberately bigger because there the goal was that is doesn't matter where exactly the user touches the bust. Lastly, some wires needed to be soldered to the sensors. The following picture shows the result of this step.

<img src="https://user-images.githubusercontent.com/44895720/90979719-50e01680-e557-11ea-9ca2-efe19886f93d.jpg" height="600">

### Step 4: Adding the hot glue

Then follows the isolating layer. The author chose to use hot glue for this purpose. The hot glue doesn't need to be applied everywhere but just on a rectangle that covers all of the sensors. It would propably be even enough when just the sensors get covered altouth this did not explicitely get tested. During this step one has to pay attention that every part of the sensor is covered so that there are no holes in the hot glue layer. Otherwise there can be a short circuit later on due to the grounding layer (that now follows) being in contact with the sensors. The result of this step can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90979736-6f461200-e557-11ea-9d59-ec8756725c11.jpg" height="600">
