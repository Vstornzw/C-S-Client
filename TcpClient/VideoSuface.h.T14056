#ifndef VIDEOSUFACE_H
#define VIDEOSUFACE_H

#include <QObject>
#include <QAbstractVideoSurface>

class VideoSuface : public QAbstractVideoSurface {
  Q_OBJECT
 public:
  //VideoSuface();
  explicit VideoSuface(QObject *parent = 0);

  //处理图片的采集格式
  QList<QVideoFrame::PixelFormat>
          supportedPixelFormats(
          QAbstractVideoBuffer::HandleType
          type = QAbstractVideoBuffer::NoHandle) const;
//  QList<QVideoFrame::pixelFormat>
//          supportedPixelFormats(
//          QAbstractVideoBuffer::HandleType
//          type = QAbstractVideoBuffer::NoHandle) const;

//  //获取图片的帧数并处理
  bool present(const QVideoFrame &frame);

 signals:
  void sigFrameChanged(QVideoFrame);

 public slots:

};

#endif // VIDEOSUFACE_H
