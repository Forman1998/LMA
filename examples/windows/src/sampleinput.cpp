#include "sampleinput.h"
#include <QIntValidator>
#include <QFocusEvent>

SampleInput::SampleInput(QWidget *parent)
    : QLineEdit(parent)
{
  setValidator(new QIntValidator(minValue, 2147483647, this)); // Optional max
}

void SampleInput::focusOutEvent(QFocusEvent *event)
{
  QLineEdit::focusOutEvent(event); // Keep default behavior

  bool ok;
  int value = text().toInt(&ok);
  if (!ok || value < minValue) {
    setText(QString::number(minValue)); // Reset to minimum
  }
}
