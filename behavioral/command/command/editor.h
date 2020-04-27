#ifndef EDITOR_H
#define EDITOR_H

#include <string>

class Editor
{
public:
    Editor() = default;
    ~Editor() = default;

    Editor(const Editor & e) = default;
    Editor(Editor && e) = default;

    Editor & operator = (const Editor & e) = default;
    Editor & operator = (Editor && e) = default;

public:
    std::string text() const;
    void setText(const std::string &text);

private:
    std::string m_text;
};

#endif // EDITOR_H
