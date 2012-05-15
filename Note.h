#ifndef NOTE_H
#define NOTE_H

#include <QString>
#include <QDebug>
#include <QSet>

class Note {
public:
  Note(int midi_number);
  QString to_string() const;
  int tone, octave;
};

QDebug operator<<(QDebug debug, const Note& note);
bool operator==(const Note& n1, const Note& n2);
uint qHash(const Note& note);

class Note_set: public QSet<Note> {
public:

  QString to_string();
};

#endif // NOTE_H
