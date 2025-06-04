#ifndef SAMPLEINPUT_H
#define SAMPLEINPUT_H

#include <QLineEdit>

class SampleInput : public QLineEdit
{
  Q_OBJECT

public:
  explicit SampleInput(QWidget *parent = nullptr);

protected:
  void focusOutEvent(QFocusEvent *event) override;

private:
  int minValue = 18000;
};

#endif // SAMPLEINPUT_H
