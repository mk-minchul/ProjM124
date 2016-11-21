from threading import Thread
import cv2
import imutils

class Camera:
    def __init__(self, camnum=0, width= 100):
        self.width = width
        # initialize the video camera stream and read the first frame
        # from the stream
        self.stream = cv2.VideoCapture(camnum)
        (self.grabbed, self.frame) = self.stream.read()
        # initialize the variable used to indicate if the thread should
        # be stopped
        self.stopped = False

    def start(self):
        # start the thread to read frames from the video stream
        Thread(target=self.update, args=()).start()
        return self

    def update(self):
        # keep looping infinitely until the thread is stopped
        while True:
            # if the thread indicator variable is set, stop the thread
            if self.stopped:
                return

            # otherwise, read the next frame from the stream
            (self.grabbed, self.frame) = self.stream.read()

    def read(self):
        # return the frame most recently read
        # first resize the image.
        self.frame = imutils.resize(self.frame, width=self.width)
        # color is converted to the format that QI image takes.
        self.frame2 = cv2.cvtColor(self.frame, cv2.COLOR_BGR2RGB)
        return self.frame2

    def read_raw(self):
        # return the frame most recently read
        # first resize the image.
        self.frame3 = imutils.resize(self.frame, width=self.width)
        return self.frame3

    def stop(self):
        # indicate that the thread should be stopped
        self.stopped = True