//
//  keyboard_locales.cpp
//  Moonlight
//
//  Created by Даниил Виноградов on 09.01.2022.
//

#include "keyboard_view.hpp"

void KeyboardView::createLocales() {
    locales.clear();
    locales.push_back(KeyboardLocale{
        .name = "English",
        .localization = {
            {"Remove", "Remove"}, {"Esc", "Esc"}, {"0", ")"}, {"1", "!"}, {"2", "@"}, {"3", "#"}, {"4", "$"}, {"5", "%"}, {"6", "^"},
            {"7", "&"}, {"8", "*"}, {"9", "("}, {"a", "A"}, {"b", "B"}, {"c", "C"}, {"d", "D"}, {"e", "E"}, {"f", "F"}, {"g", "G"},
            {"h", "H"}, {"i", "I"}, {"j", "J"}, {"k", "K"}, {"l", "L"}, {"m", "M"}, {"n", "N"}, {"o", "O"}, {"p", "P"}, {"q", "Q"},
            {"r", "R"}, {"s", "S"}, {"t", "T"}, {"u", "U"}, {"v", "V"}, {"w", "W"}, {"x", "X"}, {"y", "Y"}, {"z", "Z"}, {"Return", "Return"}, {"Space", "Space"},
            {"Ctrl", "Ctrl"}, {"Alt", "Alt"}, {"Shift", "Shift"}, {"Win", "Win"}, {".", ">"}, {",", "<"}, {"F1", "F1"}, {"F2", "F2"}, {"F3", "F3"}, {"F4", "F4"},
            {"F5", "F5"}, {"F6", "F6"}, {"F7", "F7"}, {"F8", "F8"}, {"F9", "F9"}, {"F10", "F10"}, {"F11", "F11"}, {"F12", "F12"}, {"Tab", "Tab"}, {"Delete", "Delete"},
            {";", ":"}, {"/", "?"}, {"`", "~"}, {"[", "{"}, {"\\", "|"}, {"]", "}"}, {"'", "\""}, {"-", "_"}, {"=", "+"}, {"\u2193", "\u2193"},
            {"\u2190", "\u2190"}, {"\u2192", "\u2192"}, {"\u2191", "\u2191"}, {"CapsLock", "CapsLock"},
        }
    });

    locales.push_back(KeyboardLocale{
        .name = "Russian",
        .localization = {
            {"Remove", "Remove"}, {"Esc", "Esc"}, {"0", ")"}, {"1", "!"}, {"2", "\""}, {"3", "№"}, {"4", ";"}, {"5", "%"}, {"6", ":"},
            {"7", "?"}, {"8", "*"}, {"9", "("}, {"ф", "Ф"}, {"и", "И"}, {"с", "С"}, {"в", "В"}, {"у", "У"}, {"а", "А"}, {"п", "П"},
            {"р", "Р"}, {"ш", "Ш"}, {"о", "О"}, {"л", "Л"}, {"д", "Д"}, {"ь", "Ь"}, {"т", "Т"}, {"щ", "Щ"}, {"з", "З"}, {"й", "Й"},
            {"к", "К"}, {"ы", "Ы"}, {"е", "Е"}, {"г", "Г"}, {"м", "М"}, {"ц", "Ц"}, {"ч", "Ч"}, {"н", "Н"}, {"я", "Я"}, {"Ввод", "Ввод"}, {"Пробел", "Пробел"},
            {"Ctrl", "Ctrl"}, {"Alt", "Alt"}, {"Shift", "Shift"}, {"Win", "Win"}, {"ю", "Ю"}, {"б", "Б"}, {"F1", "F1"}, {"F2", "F2"}, {"F3", "F3"}, {"F4", "F4"},
            {"F5", "F5"}, {"F6", "F6"}, {"F7", "F7"}, {"F8", "F8"}, {"F9", "F9"}, {"F10", "F10"}, {"F11", "F11"}, {"F12", "F12"}, {"Tab", "Tab"}, {"Delete", "Delete"},
            {"ж", "Ж"}, {".", ","}, {"ё", "Ë"}, {"х", "Х"}, {"\\", "/"}, {"ъ", "Ъ"}, {"э", "Э"}, {"-", "_"}, {"=", "+"}, {"\u2193", "\u2193"},
            {"\u2190", "\u2190"}, {"\u2192", "\u2192"}, {"\u2191", "\u2191"}, {"CapsLock", "CapsLock"},
        }
    });

    //TODO: - Add more languages
}