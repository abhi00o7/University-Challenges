import cv2
import numpy as np

cap = cv2.VideoCapture(1)

while True:
    _, frame = cap.read()
    hsv = cv2.cvtColor(frame, cv2.COLOR_BGR2HSV)  # hue saturation value

    laplacian = cv2.Laplacian(frame, cv2.CV_64F)

    lower_red = np.array([15, 0, 0])
    upper_red = np.array([[255, 255, 255]])

    mask = cv2.inRange(hsv, lower_red, upper_red)
    res = cv2.bitwise_and(frame, frame, mask=mask)

    cv2.imshow('natural_feed', frame)
    cv2.imshow('mask', mask)
    cv2.imshow('res', res)
    # sobel_horizontal = cv2.Sobel(frame, cv2.CV_64F, 1, 0, ksize = 5)
    # sobel_vertical = cv2.Sobel(frame, cv2.CV_64F, 0, 1, ksize = 5)

    # cv2.imshow('Original', frame)
    # cv2.imshow('Sobel Horizontal Filter',sobel_horizontal)
    # cv2.imshow('Sobel Vertical Filter',sobel_vertical)

    # cv2.imshow('natural_feed', frame)
    # cv2.imshow('laplacian', laplacian)

    if cv2.waitKey(0) & 0xFF == ord('q'):
        break

cv2.destroyAllWindows()
cap.release()

# if __name__ == "__main__":
#     main()
