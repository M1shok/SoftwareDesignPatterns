#include "editor.h"

std::string Editor::text() const
{
    return m_text;
}

void Editor::setText(const std::string &text)
{
    m_text = text;
}
