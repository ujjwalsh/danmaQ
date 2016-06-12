#ifndef __DANMAKU_WINDOW_H__
#define __DANMAKU_WINDOW_H__
#include <QWidget>
#include <QVector>
#include "danmaku_ui.h"

class BaseDanmakuApp;

class DMWindow: public QWidget
{
	Q_OBJECT

public:
	DMWindow(BaseDanmakuApp *parent);
	DMWindow(int screenNumber, BaseDanmakuApp *parent);
	~DMWindow();
	BaseDanmakuApp *app;

	int slot_y(int slot);


public slots:
	void new_danmaku(QString text, QString color, QString position);
	void delete_danmaku(Danmaku*);
	void clear_fly_slot(int slot);

private:
	QVector<bool> fly_slots, fixed_slots;
	int lineHeight;
	
	void init_slots();
	int allocate_slot(Position);
	QString escape_text(QString &);

};

#endif
