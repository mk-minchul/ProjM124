import cv2
import imutils


def get_first_frame(frame, width, blur):
    """

    :param frame: frame grabbed from calling 'camera1 = cv2.VideoCapture( camnum ) \ camera1.read()'
    :param width: desired width of the frame ex) 200. If 0, no blur.
    :param blur: desired blur parameter ex) 31
    :return: gray scaled blurred and reshaped frame.
    """
    frame = imutils.resize(frame, width=width)
    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    if blur != 0:
        gray = cv2.GaussianBlur(gray, (blur, blur), 0)
    first_frame = gray
    return first_frame


def detect_movements(first_frame, frame, width, blur, minimum_area):
    """

    :param first_frame:
    :param frame:
    :param width:
    :param blur:
    :param minimum_area:
    :return:
    """
    text = 'no movement'
    # resize the frame, convert it to grayscale, and blur it
    frame = imutils.resize(frame, width=width)

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    gray = cv2.GaussianBlur(gray, (blur, blur), 0)

    # compute the absolute difference between the current frame and
    frameDelta = cv2.absdiff(first_frame, gray)
    thresh = cv2.threshold(frameDelta, 25, 255, cv2.THRESH_BINARY)[1]

    # dilate the thresholded image to fill in holes, then find contours
    # on thresholded image
    thresh = cv2.dilate(thresh, None, iterations=2)

    (cnts, _) = cv2.findContours(thresh.copy(), cv2.RETR_EXTERNAL, cv2.CHAIN_APPROX_SIMPLE)

    # loop over the contours
    for c in cnts:
        # if the contour is too small, ignore it
        if cv2.contourArea(c) < minimum_area:
            continue

        # compute the bounding box for the contour, draw it on the frame,
        # and update the text
        (x, y, w, h) = cv2.boundingRect(c)
        cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)
        text = "movement"

    return text, frame


def put_text(frame, var_bed, var_move, var_time, alarm_start, var_light):
    import datetime

    cv2.putText(frame, "{}".format(var_move), (10, 20),
                cv2.FONT_HERSHEY_SIMPLEX, 0.35, (0, 0, 255), 1)
    cv2.putText(frame, "{}".format(var_time), (10, 32),
                cv2.FONT_HERSHEY_SIMPLEX, 0.35, (0, 0, 255), 1)
    cv2.putText(frame, "alarm set at", (10, 44),
                cv2.FONT_HERSHEY_SIMPLEX, 0.35, (0, 0, 255), 1)
    cv2.putText(frame, alarm_start.strftime("%A %d %B %H:%M"),
                (10, 54), cv2.FONT_HERSHEY_SIMPLEX, 0.35, (0, 0, 255), 1)
    cv2.putText(frame, "{}".format(var_bed), (10, 66),
                cv2.FONT_HERSHEY_SIMPLEX, 0.35, (0, 0, 255), 1)
    cv2.putText(frame, "{}".format(var_light), (10, 76),
                cv2.FONT_HERSHEY_SIMPLEX, 0.35, (0, 0, 255), 1)
    cv2.putText(frame, datetime.datetime.now().strftime("%A %d %B %Y"),
                (10, frame.shape[0] - 20), cv2.FONT_HERSHEY_SIMPLEX, 0.35, (0, 0, 255), 1)
    cv2.putText(frame, datetime.datetime.now().strftime("%H:%M:%S"),
                (10, frame.shape[0] - 10), cv2.FONT_HERSHEY_SIMPLEX, 0.35, (0, 0, 255), 1)
    return frame
