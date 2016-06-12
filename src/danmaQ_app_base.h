#ifndef __DANMAQ_APP_BASE_H__
#define __DANMAQ_APP_BASE_H__
#include <QWidget>

class BaseDanmakuApp: public QWidget
{
public:
	int lineHeight, fontSize, screenCount;
	QString fontFamily;
	float speedScale;
};

#endif
