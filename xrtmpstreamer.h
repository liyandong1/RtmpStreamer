
#pragma once

#include <QtWidgets/QWidget>
#include "ui_xrtmpstreamer.h"

class XRtmpStreamer : public QWidget
{
	Q_OBJECT

public:
	XRtmpStreamer(QWidget *parent = Q_NULLPTR);

public slots:
	void Stream();

private:
	Ui::XRtmpStreamerClass ui;
};
