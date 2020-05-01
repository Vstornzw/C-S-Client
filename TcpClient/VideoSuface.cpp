#include "VideoSuface.h"

VideoSuface::VideoSuface(QObject *parent) : QAbstractVideoSurface(parent) {

}
//处理图片的采集格式
QList<QVideoFrame::PixelFormat>
VideoSuface::supportedPixelFormats(
        QAbstractVideoBuffer::HandleType type) const
{
    return QList<QVideoFrame::PixelFormat>()
            << QVideoFrame::Format_RGB32;
}

//获取图片的帧数并处理
bool VideoSuface::present(const QVideoFrame &frame) {
  emit sigFrameChanged(frame);
  return true;
}
