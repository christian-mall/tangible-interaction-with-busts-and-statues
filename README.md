# Tangible Interaction with Busts and Statues

This readme will contain a full documentation of the prototyping work that was done for the master thesis to create the prototypes for the plaster bust of the head of Ludwig I. as well as the miniature statues. Alongside all of the findings of the author of things that did or did not work and some dos and don'ts will be shared.

## 1. Silicone mold for the bust of Ludwig I. and plaster castings

In this section it will be described gradually how a silicone mold was created from the original Ludwig bust from the Staatliche Antikensammlung and how it was used to make further plaster castings.

### 1.1 Creation of the silicone mold

The first step was to cut out a base plate (in this case made out of wood) where the head can rest on. In order to fixate the head onto the board and to prevent any silicone from leaking under the head before it fully cures Plasticine (a sort of modeling clay) was used. In order for it to be malleable it was put in the microwave for a short period of time which made working with it way easier. Then the clay was used to seal all of the crevices between the head and the base plate (see figure below).

<img src="https://user-images.githubusercontent.com/44895720/90312368-3b8a3d00-df04-11ea-8528-eccf78b39910.jpeg" width="600">

The next step was to build a wooden case around the bust to build a vessel for the silicone. This can be seen in the figure below.

<img src="https://user-images.githubusercontent.com/44895720/90312425-a5a2e200-df04-11ea-916f-551afaf232df.jpeg" height="600">

The silicone that was used is a SF33 - RTV2 silicone. This type of silicone is milky-transparent, very durable and heat-resistant. It’s a silicone that is made for making silicone molds and it consists of two parts:

* a base
* a catalyst

Once these two parts are properly mixed in a 1:1 ratio the silicone cures in around 3 hours at room temperature. Higher temperatures speed up the curing process. Normal silicone needs air to cure which would have been problematic here because the final mold is quite thick. The "SF33" means that its Shore hardness is "33" so it’s medium-hard. For this project 10 kg of silicone were used. But before the silicone got poured inside the vessel a thin layer of it was applied on the whole bust by using small brush. This way it is ensured that there get no air bubbles trapped in between the plaster and the silicone. After this thin layer was dried the rest of the silicone got poured inside the vessel. The following figure shows the silicone mold once it was cured.

<img src="https://user-images.githubusercontent.com/44895720/90312479-14803b00-df05-11ea-9f67-daea6af736c2.jpeg" width="600">

The next step was to unmold the head. On some parts the head was a bit difficult to get out of the mold but in the end it worked out well. The next figure shows the finished silicone mold.

<img src="https://user-images.githubusercontent.com/44895720/90312531-88bade80-df05-11ea-94a2-e023685e7bfa.jpeg" width="600">

### 1.2 How to do the plaster castings

To prevent the dried plaster from sticking to the silicone a spray was used which prevents sticking (Achem SG-1008S). After some time this spray forms a waxy layer on the silicone. After that a bit of plaster got mixed with warm water in a ratio of 1.5:1 and once the mixture was properly mixed it got poured inside of the mold, the mold got tilted around and a brush was used to apply a thin layer of the plaster all around the inside of the silicone mold. This was done to get into every nook and cranny of the mold so that the resulting casting turns out well. The next batch of the plaster should be more viscous than the first batch was because this way it can be applied in a more generous way and it will dry out faster and stay on the places where it has been applied. To make the process a bit easier a wooden frame in the shape of the contour of the silicone mold got used which got placed on top of the mold and which had overlapping edges to the inside (around 1 cm) as a guide to see how thick the plaster casting has to get so that it can be properly unmolded. This can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90313836-de948400-df0f-11ea-9567-929971234b89.jpeg" height="600">

The following figure shows the cured plaster casting which can then be unmolded.

<img src="https://user-images.githubusercontent.com/44895720/90313858-13a0d680-df10-11ea-9ffc-a7d9a347820e.jpeg" height="600">

The final unmolded head can be seen in the next figure.

<img src="https://user-images.githubusercontent.com/44895720/90313893-4519a200-df10-11ea-8af2-313304300255.jpeg" height="600">

As can be seen there are a few darker spots on it. That is from the spray that has been used and that is why on subsequent experiments less of the spray was used.

## 2. Capacitive Sensing

This section will describe how the capacitive sensing capabilities have been built, what materials have been used etc.

For this project the following two Arduinos got used for the programming:

* ARDUINO UNO REV3 (got used to implement the capacitive sensing)
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

Here, a 1 MΩ transistor is connected across pins 4 and 2 and a wire connects pin 2 with the copper foil. The code for this very basic, simple setup can be found under "Codes/Capacitive_Sensor_Value.ino". The way this works is the following: The "CapacitiveSensor" method toggles the send pin (pin 4) to a new state and then waits for the receive pin (pin 2) to change to the same state. The value that gets reported in the end is in arbitrary units. For many applications it is not advisable to just touch the bare sensor. Instead it should be covered with an insulating material like paper or plastic to get values which are in a more useful range. In the case of this project this is automatically achieved since the sensor is covered by plaster. When the state of the send pin changes, the state of the receive pin eventually changes as well. This delay is determined by an RC time constant (R * C, where R is the resistor value and C is the capacitance at the receive pin, plus any additional capacitance which might come from the human body).

The first basic tests didn’t yet involve the process of embedding the capacitive sensors into the plaster. Instead they dealt with using these sensors under a plane of plaster. For this purpose multiple sheets of plaster have been cast with varying thicknesses to see if the capacitive signal would be able to pass through the plaster. The pads of copper foil were glued under the plaster. There was no additional glue necessary because the copper foil that was used already came glued onto a sheet of paper so it could be peeled off and glued onto the plaster. As expected the results were better the thinner the layer of plaster that covered the copper was. After this basic test went well the next step was to try to get the capacitive sensing to work when there are multiple sensors next to each other. Such a setup can be seen in the next figure where the sheet of plaster is approximately 1 cm thick.

<img src="https://user-images.githubusercontent.com/44895720/90507994-1fcaa500-e157-11ea-9d69-16b462b32e87.jpeg" width="600">

This of course brings one major problem: The plaster layer on top of the copper conducts capacitance so when one sensor is touched, there’s not only a signal on this particular one but the values rise on the adjacent sensors as well. This is especially a problem when the plaster hasn’t been fully dried but even if it is completely dry it sometimes makes discerning which sensor has been touched impossible. This being said there are some ways to get better results:

* The first one being again to make the plaster layer thinner.
* Another way to make the sensors better discernible from one another is to place them as far apart from each other as possible.
* And it also helps if the sensors aren’t too tiny. Making them a little big bigger can already make a huge difference. Coin-shaped sensors with a diameter of about 2.5 cm worked quite well.
* Another thing that got tested is whether it makes a difference if the sensor is touched on the non-glue side or on the glue side. The result was that it is better to touch it on the non-glue side because the glue apparently hinders the capacitive signal a bit but when put behind plaster the opposite is true. It is better if the foil gets properly glued onto the plaster so the direct contact is more important.
* Another finding was that the resistors that are used make a huge difference on the quality of the readings. Too small and the signal spikes can’t be seen, too big and the whole system gets overly reactive. Then, even if someone gets near cables there are already huge signal spikes. A value that worked quite well for this particular scenario was 2 MΩ. There occur some signal spikes when the hand gets near the cables but this isn't too much of an issue because the signal spikes are larger when the actual sensors get touched and the cables also get placed behind the bust (this will get described more detailed later on).

The next tests were to try to embed the copper foils into the plaster. This approach is much more difficult because the plaster now is not only on top of the foils but also behind which further amplifies the problem of the capacitive signal inadvertently spreading through the plaster. To improve the signal-to-noise ratio an experiment was conducted where two prototypes got compared. One simply had three capacitive sensors embedded into the plaster and the other one had the three capacitive sensors surrounded by another copper foil (with a thin gap in between). This copper foil got connected to a ground pin on the Arduino. This approach can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90509112-1b9f8700-e159-11ea-8a54-fb98fcc824ea.jpeg" width="600">

This is the backside of the setup (before the additional plaster got poured). This additional grounding made the readings better. Then this approach got further refined. Instead of placing an additional copper foil around the sensors the additional copper foil simply got put behind the sensors. In order to avoid any shortages a layer of hot glue which acts as an isolating layer was used. A schematic drawing of this approach can be seen in the next figure.

<img src="https://user-images.githubusercontent.com/44895720/90509635-ed6e7700-e159-11ea-9079-f76818043c06.png" width="600">

There are of course no gaps in between the layers but this way the drawing is a bit easier to read. The bottom layer is the thin layer that gets applied onto the silicone mold. After that follows the copper foil that acts as the capacitive sensor. Then follows the layer of hot glue for the isolation followed by the second layer of copper foil. This is the layer that gets connected to a ground pin of the Arduino. Last but not least follows the second plaster layer which can basically be as thick as one wants to ensure enough stability to be able to get the cast out of the mold. Something important to note about using this Capacitive Sensing library in general is that the whole system is not the most stable one. Some minor shifts from the cables could be enough sometimes that the sensor readings weren’t usable anymore. Also it turned out that it is best if the cables don’t touch one another because apparently this causes some capacitive interferences. These are issues that got addressed later on.

## 3. First prototype of the interactive bust

In this section it will be described how the first prototype of the interactive bust was built using the findings and tricks described in the previous section. The first step was to spray a thin layer of the anti-sticking spray into the silicone mold so that the plaster won’t stick later on (later it was found out that this step is not necessary). Once it’s dried it forms a waxy layer. Then, tilting the mold and using a brush, a thin layer of plaster got applied all over the inside of the silicone mold. There were some spots left where the plaster ran off (mainly due to the anti-sticking spray) and this is why this process got repeated once. After drying, the copper foil sensors got applied. For the first test sensors got applied behind the forehead, the nose, the cheeks and the mouth. Then the layer of hot glue was applied. The result can be seen in the next figure.

<img src="https://user-images.githubusercontent.com/44895720/90517991-72f82400-e166-11ea-8e5f-4d2d06786aea.jpeg" height="600">

Then comes the second layer of copper foil (for the grounding). The foil just got applied onto the areas that have sensors underneath it. The following figure shows that.

<img src="https://user-images.githubusercontent.com/44895720/90518132-a175ff00-e166-11ea-8f47-c509df9af933.jpeg" height="600">

The last step was to pour the rest of the plaster and then let everything dry for a couple of days. After unmolding it turned out that parts of the nose and lips broke off so it is really important to get the thickness of the first layer just right.
* When this layer is too thin it is later impossible to unmold the head properly because the layer will crack during the process or parts will break off.
* If the layer is too thick the capacitive sensing will get problematic.

A thickness of about 1-2 mm worked well except for the nose and lips parts. To solve this problem a few approaches got tried which will get explained later on.

Other than the fact that some parts broke off the capacitive sensing worked well with this bust. One issue that emerged is that some of the sensors were not exactly placed at the locations where they should have been. This was due to the fact that once the first layer of plaster got poured the details in the mold can’t be seen as well anymore so placing the sensors down at particular locations is a bit of a challenge. This problem will get addressed later on.

## 4. Pre-study

After having found out what works best for casting a basic version of the interactive bust a pre-study got conducted. For this study a new bust got cast. This was just a basic plaster version of that bust that contained no sensors. One of the goals of this study was to find out where potential museum visitors would like to touch the statue to get which kind of information and also how they interact with the statue (tapping, swiping etc.). Another goal was to find out how to best convey to the visitors that certain parts of the bust are made for tangible interaction in the first place. The study itself is not discussed in this chapter. It will be explained in depth in the actual thesis. Instead, this chapter just focuses on the prototyping work that was being done during the pre-study phase and on the findings related the material plaster.

Before the pre-study got conducted there had to be found a solution to be able to see on the bust where and how a participant touched it after he or she lifted the finger.

* **Infrared camera:** The first idea was to use an infrared camera for that but when this approach got tested it turned out that it is not suitable for this use case because of numerous issues. One problem was that the temperature traces that the participant left onto the bust once he/she touched it quickly disappeared once the finger got lifted off of the surface. This was not a problem when the participant touched a part of the statue for a longer period of time but in this case the opposite problem came up: The residual heat was present way too long. Cooling these parts wouldn’t work because then it would be too cold on these parts. Also it would have been difficult to conduct the study over several days because ideally the ambient temperature would be constant all of the time so that the infrared camera can get properly calibrated to these exact conditions in order to deliver comparable results.
* **UV colors/UV pigments:** The next idea was to use UV colors alongside a black light. The idea was that participants wear gloves and dip their fingers into a UV color prior to touching the bust. The issue with this approach was that the UV color couldn’t be removed from the bust afterwards even though the bust was treated with several layers of clear paint before. A better approach was to use UV pigments which got mixed with toothpaste. This mixture was easier to remove but not well enough. Once a few participants touched the statue the residual paint accumulated. The following figure shows how UV traces look like under a black light and on the top of the bust the problem with the residual paint can be seen.

<img src="https://user-images.githubusercontent.com/44895720/90626977-ced0b480-e21b-11ea-8a86-4c77815b06fe.png" height="600">


* **Water colors:** The final solution was to just use water colors. The participants wore gloves, dipped their fingers into water and then into the water color and then touched the statue. This approach worked well because the water color could easily be removed with a damp towel afterwards.

The next task was to find out how to best take a picture of the statue after a participant interacted with it. The goal was that this picture gets always taken from the same position with the same angle so that multiple pictures could then be laid on top of each other and blended together in a graphics editor. The first step was to cut out a piece of wood in the shape of the head and then glue the bust onto that piece of wood. Additionally a camera mount for a tripod got screwed onto the backside of the wood so that the bust can be mounted onto a tripod (half of the participants interacted with the bust while it was mounted onto a tripod while the other half interacted with it while it was lying down on a table). Then multiple wooden brackets got cut into shape and screwed onto a wooden base plate so that the bust perfectly fit in between them (see following figure).

<img src="https://user-images.githubusercontent.com/44895720/90627754-b1e8b100-e21c-11ea-901b-94a502f2b76d.jpeg" width="600">

Lastly a contraption got built so that the smartphone which was used to take the picture could always be placed in the exact same location. The finished contraption can be seen on the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90627851-d93f7e00-e21c-11ea-905d-62db70a77f03.jpeg" height="600">

Then the pre-study could be started. As previously stated the study is explained in the actual master thesis while this GitHub document just focuses on the prototyping and material work that was conducted. Based on topics regarding Ludwig's life which have been chosen by the author and based on where the participants touched the statue and also the way they touched it to get certain kinds on information the following decisions were made for the next prototype of the bust:

* Tapping on the forehead –> Information regarding the foundation of the Glyptothek
* Swiping across the lips –> Information regarding Ludwig’s wife
* Swiping across the forehead –> Information regarding Ludwig’s poetry
* Swiping across the nose –> Information regarding Ludwig’s business communication

The following figure shows the exact parts marked in an image editor.

<img src="https://user-images.githubusercontent.com/44895720/90652271-2a139e80-e23e-11ea-99e6-d67ce119e601.jpg" height="600">

To mark these interactive parts the author decided to use color because this was the preferred method of the people who participated in the pre-study.

## 5. Further prototypes of the bust

In this section it will be described how the findings and discoveries in the former sections have been used to build the more advanced prototypes of the bust of Ludwig I. In the last section it became clear that the participants favored certain parts of the statue for interaction regarding different topics regarding the life of Ludwig I. The next question was now how to mark these parts. As said earlier they got marked with color. The initial plan was to make the plaster casting of the bust and then apply color on the interactive parts on the finished bust. But this approach also has a downside. The problem is the following: After applying the thin layer of plaster at the beginning of the casting process the fine details of the silicone mold can’t be seen as well anymore. This makes it hard to place the copper foil pads down into exactly the spots that one wants. While this was not very problematic for the first test of the bust now it is important to get the location just right. This is why another approach got used (at least at first because in the end the author returned to this method; details will be explained later on). It turned out that it was easy to make the plaster itself colored just by mixing the plaster/water mixture with wall color. This made it possible to apply colored plaster onto the parts of the silicone mold that later will get equipped with the sensors. Not only does this make it obsolete to apply color on the outside of the bust but the colored spots can also be used as a guide for the copper foil placement. This approach worked but is also not perfect. Since this approach requires two batches of plaster for the outer layer (the normal one and the colored batch) it is harder to get the plaster into every nook and cranny of the silicone mold by tilting it around because then the two parts would mix. This is why another approach got used for the later prototypes which will get explained later on.

Another thing that got changed in comparison to the construction of the first bust was how the hot glue got applied. Instead of applying it everywhere inside of the head it just got applied in a rectangle that contains all of the sensors (the same surface as the second layer of copper foil). This is sufficient and speeds up the process a bit.

After a few days (when the plaster was cured) the bust could be de-molded. All of the sections turned out well except for the nose and the lips. This part of the plaster broke off and pieces got stuck in the silicone mold. The problem was that these parts are way more curved than e. g. the forehead or the cheeks and because the outer layer of plaster is very thin these parts got stuck inside of the mold and cracked when de-molding. This was a problem because simply making the outer layer of plaster thicker is not really an option because that would make the readings of the capacitive signal worse. As seen earlier it is important that the layer that covers the sensors is as thin as possible especially when there are multiple sensors which are adjacent to each other with not much space in between them. So before casting another bust the focus was just on this nose/lip part. The next experiment was to not just use plaster as the outer layer but instead mix the plaster with polymer fibers. The fibers that got used for this experiment are like thin, lightweight plastic fibers. The idea was that this gives more structural integrity to the outer plaster layer so that nothing gets damaged during the unmolding process. So for this trial the plaster just got applied on the problematic areas. The rest of the procedure (sensors, hot glue etc.) got done as the times before. This worked well in the end. When the part got unmolded nothing cracked or fell off.

So for the next prototype of the bust this approach got used. The polymer fibers got mixed into the plaster on the nose and lip parts of the bust while regular plaster was used in the areas which didn’t pose any problems when the bust got demolded. As seen earlier when mixing the color directly with the plaster to mark the interactive spots the problem occurs that it is more difficult to evenly distribute the plaster. This is why the original idea got used which was to mark the interactive spots after demolding on the outside using color. But as seen before the problem then is that the interactive areas where the copper pads have to be placed down can hardly be seen accurately once the outer layer of plaster is cast. This is why a solution had to be found to mark these spots before pouring the plaster. The solution that was found involves a laser pointer mounted on a wooden plank. A wooden plank was cut and a hole got drilled inside of it so that a laser pointer could fit into it. Then this plank got placed on top of the silicone mold and moved around to the different spots so that at each position the laser pointer pointed at the exact position where a copper pad should be. The respective positions then got marked on the plank and also on the silicone mold. This can be seen in the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90657962-4b2abe00-e243-11ea-8e12-2937ced0aea2.jpeg" height="600">

The resulting bust turned out better than the previous one, the lips were completely intact but the nose broke off again albeit not as much. It could be fixed a bit by gluing it back down using some more plaster. While the result wasn’t perfect it was sufficient to continue with the next steps. The problem that the nose didn’t turn out flawlessly again got addressed later on.
