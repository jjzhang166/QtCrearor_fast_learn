// checksum 0x5a59 version 0x3000a
/*
  This file was generated by the Qt Quick Application wizard of Qt Creator.
  QmlApplicationViewer is a convenience class containing mobile device specific
  code such as screen orientation handling. Also QML paths and debugging are
  handled here.
  It is recommended not to modify this file, since newer versions of Qt Creator
  may offer an updated version of it.
*/

#ifndef QMLAPPLICATIONVIEWER_H
#define QMLAPPLICATIONVIEWER_H

#include <QtDeclarative/QDeclarativeView>

class QmlApplicationViewer : public QDeclarativeView
{
    Q_OBJECT

public:
    enum ScreenOrientation {
        ScreenOrientationLockPortrait,
        ScreenOrientationLockLandscape,
        ScreenOrientationAuto
    };

    explicit QmlApplicationViewer(QWidget *parent = 0);
    virtual ~QmlApplicationViewer();

    void setMainQmlFile(const QString &file);
    void addImportPath(const QString &path);
    void setOrientation(ScreenOrientation orientation);
    void showExpanded();

private:
    class QmlApplicationViewerPrivate *m_d;
};

#endif // QMLAPPLICATIONVIEWER_H
