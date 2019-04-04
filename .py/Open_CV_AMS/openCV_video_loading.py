'''
this python script captures and saves the output of the live webcam feed to the file
uses openCV for its operations

use "q" to exit from the popup window.
'''

import cv2
import numpy as np

cap = cv2.VideoCapture(0)  # initiates the webcam
# fourcc = cv2.VideoWriter_fourcc(*'XVID')
# out = cv2.VideoWriter('output.avi', fourcc, 20.0, (640, 480)) # for saving the video file
new_path = 'C:/Program Files (x86)/Python37-32/Lib/site-packages/cv2/data/data/'
new_path_2 = 'C:/Users/kumar/Desktop/C0d3/.py/Open_CV_AMS'
face_cascade = cv2.CascadeClassifier(
    new_path+
    'haarcascade_frontalface_alt2.xml')
while True:
    ret, frame = cap.read()

    gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
    # hsv = cv2.cvtColor(frame, cv2.COLOR_BAYER_BG2GRAY)
    faces = face_cascade.detectMultiScale(
        gray,
        1.3,
        5
    )
        # scaleFactor=1.2,
        # minNeighbors=5,
        # minSize=(20, 20)
    for(x, y, w, h) in faces:
        print(x, y, w, h)

    # out.write(frame)

    cv2.imshow('natural_feed', frame)
    cv2.imshow('gray_feed', gray)
    # cv2.imshow('hsv', hsv)

    if cv2.waitKey(1) & 0xFF == ord('q'):
        break

# out.release()
cap.release()
cv2.destroyAllWindows()
