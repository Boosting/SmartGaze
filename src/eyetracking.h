// The SmartGaze Eye Tracker
// Copyright (C) 2016  Tristan Hume
// Released under GPLv2, see LICENSE file for full text

#include <opencv2/imgproc/imgproc.hpp>

struct TrackingData;

TrackingData *setupTracking();
void trackFrame(TrackingData *dat, cv::Mat &m);
