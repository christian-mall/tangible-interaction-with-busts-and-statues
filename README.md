# Tangible Interaction with Busts and Statues

This readme will contain a full documentation of the prototyping work that was done for the master thesis to create the prototypes for the plaster bust of the head of Ludwig I. as well as the miniature statues. Alongside all of the findings of the author of things that did or did not work and some dos and don'ts will be shared.

## Silicone mold for the bust of Ludwig I. and plaster castings

In this section it will be described gradually how a silicone mold was created from the original Ludwig bust from the Staatliche Antikensammlung and how it was used to make further plaster castings.

### Creation of the silicone mold

The first step was to cut out a base plate (in this case made out of wood) where the head can rest on. In order to fixate the head onto the board and to prevent any silicone from leaking under the head before it fully cures Plasticine (a sort of modeling clay) was used. In order for it to be malleable it was put in the microwave for a short period of time which made working with it way easier. Then the clay was used to seal all of the crevices between the head and the base plate (see figure below).

<img src="https://user-images.githubusercontent.com/44895720/90312368-3b8a3d00-df04-11ea-8528-eccf78b39910.jpeg" width="600">

The next step was to build a wooden case around the bust to build a vessel for the silicone. This can be seen on the figure below.

<img src="https://user-images.githubusercontent.com/44895720/90312425-a5a2e200-df04-11ea-916f-551afaf232df.jpeg" height="600">

The silicone that was used is a SF33 - RTV2 silicone. This type of silicone is milky-transparent, very durable and heat-resistant. It’s a silicone that is made for making silicone molds and it consists of two parts:

* a base
* a catalyst

Once these two parts are properly mixed in a 1:1 ratio the silicone cures in around 3 hours at room temperature. Higher temperatures speed up the curing process. Normal silicone needs air to cure which would have been problematic here because the final mold is quite thick. The "SF33" means that its Shore hardness is "33" so it’s medium-hard. For this project 10 kg of silicone were used. But before the silicone got poured inside the vessel a thin layer of it was applied on the whole bust by using small brush. This way it is ensured that there get no air bubbles trapped in between the plaster and the silicone. After this thin layer was dried the rest of the silicone got poured inside the vessel. The following figure shows the silicone mold once it was cured.

<img src="https://user-images.githubusercontent.com/44895720/90312479-14803b00-df05-11ea-9f67-daea6af736c2.jpeg" width="600">

The next step was to unmold the head. On some parts the head was a bit difficult to get out of the mold but in the end it worked out well. The next figure shows the finished silicone mold.

<img src="https://user-images.githubusercontent.com/44895720/90312531-88bade80-df05-11ea-94a2-e023685e7bfa.jpeg" width="600">

### How to do the plaster castings

To prevent the dried plaster to stick to the silicone a spray was used which prevents sticking (Achem SG-1008S). After some time this spray forms a waxy layer on the silicone. After that the plaster got mixed with warm water in a ratio of 1.5:1 and once the mixture was properly mixed it got poured inside of the mold, the mold got tilted around and a brush was used to apply a thin layer of the plaster all around the inside of the silicone mold. This was done to get into every nook and cranny of the mold so that the resulting casting turns out well. The next batch of the plaster should be more viscous than the first batch was because this way it can be applied in a more generous way and it will dry out faster and stay on the places where it has been applied. To make the process a bit easier a wooden frame in the shape of the silicone mold got used which got placed on top of the mold and which had overlapping edges to the inside (around 1 cm) as a guide to see how thick the plaster casting has to get so that it can be properly unmolded. This can be seen on the following figure.

<img src="https://user-images.githubusercontent.com/44895720/90313836-de948400-df0f-11ea-9567-929971234b89.jpeg" height="600">

The following figure shows the cured plaster casting which can then be unmolded.

<img src="https://user-images.githubusercontent.com/44895720/90313858-13a0d680-df10-11ea-9ffc-a7d9a347820e.jpeg" height="600">

The final unmolded head can be soon on the next figure.

<img src="https://user-images.githubusercontent.com/44895720/90313893-4519a200-df10-11ea-8af2-313304300255.jpeg" height="600">

As can be seen there are a few darker spots on it. That is from the spray that has been used and that is why on subsequent experiments less of the spray was used.

## Capacitive Sensing

This section will describe how the capacitive sensing capabilities have been built, what materials have been used etc.

For this project the following two Arduinos got used for the programming:

* ARDUINO UNO REV3 (got used to implement the capacitive sensing)
* ARDUINO MEGA 2560 REV3 (was used for the prototype that involves RFID which will get explained later on)

There’s a "Capacitive Sensing Library" for Arduino that can turn two or more Arduino pins into a capacitive sensor with the help of copper foils and resistors. These sensors can then sense the capacitance of the human body. There are also dedicated sensors available that can be bought but the approach with the copper foils offers two important advantages. They are much slimmer and their size can be adjusted because one can just cut a sensor into the desired size and shape and they also offer more customization on the software side so that the sensor can be programmed exactly the way which is best suited for the particular project.
