import sys
import os
print sys.path
sys.path.append('/usr/local/lib/python2.7/site-packages/')     #for allowing importing cv2 in my mac
from os import path
sys.path.append( path.dirname( path.dirname( path.abspath(__file__) ) ) )    #for allowing importing AlarmClock module
import argparse
import imutils
import cv2

from AlarmClock import Camera
from AlarmClock import Inference
from AlarmClock import ComputerVision
from AlarmClock import Sound

# construct the argument parse and parse the arguments
ap = argparse.ArgumentParser()
ap.add_argument("-hr", "--hour", type=int, default=4,
                help="alarm set at ")
ap.add_argument("-min", "--minute", type=int, default=5,
                help="alarm set at ")
args = vars(ap.parse_args())



# this is a threaded video stream
cam = Camera(camnum=0).start()
print "Starting webcam"


while True:

    frame = cam.read()  # grab the frame from the threaded video stream
    frame = imutils.resize(frame, width=400)  # resize the frame to have 400 pixel width
    cv2.imshow("Frame", frame)
    key = cv2.waitKey(1) & 0xFF
    # if the `q` key is pressed, break from the lop
    if key == ord("q"):
        cam.stop()
        break

# clean up the camera.
cv2.destroyAllWindows()
cam.stop()
print "Done"
