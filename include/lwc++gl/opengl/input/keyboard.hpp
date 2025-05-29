#ifndef LWCPPGL_OPENGL_KEYBOARD_H
#define LWCPPGL_OPENGL_KEYBOARD_H

#include <lwc++gl/exports.hpp>

namespace lwcppgl 
{

/**
 * Пространство имён, предоставляющее интерфейс для управления клавиатурой.
 * Позволяет создавать, обновлять и управлять клавиатурой, а также
 * получать информацию о текущем состоянии клавиш.
 */
namespace keyboard 
{

    /* Printable keys */
    const int KEY_SPACE            = 32;
    const int KEY_APOSTROPHE       = 39;  /* ' */
    const int KEY_COMMA            = 44;  /* , */
    const int KEY_MINUS            = 45;  /* - */
    const int KEY_PERIOD           = 46;  /* . */
    const int KEY_SLASH            = 47;  /* / */
    const int KEY_0                = 48;
    const int KEY_1                = 49;
    const int KEY_2                = 50;
    const int KEY_3                = 51;
    const int KEY_4                = 52;
    const int KEY_5                = 53;
    const int KEY_6                = 54;
    const int KEY_7                = 55;
    const int KEY_8                = 56;
    const int KEY_9                = 57;
    const int KEY_SEMICOLON        = 59;  /* ; */
    const int KEY_EQUAL            = 61;  /* = */
    const int KEY_A                = 65;
    const int KEY_B                = 66;
    const int KEY_C                = 67;
    const int KEY_D                = 68;
    const int KEY_E                = 69;
    const int KEY_F                = 70;
    const int KEY_G                = 71;
    const int KEY_H                = 72;
    const int KEY_I                = 73;
    const int KEY_J                = 74;
    const int KEY_K                = 75;
    const int KEY_L                = 76;
    const int KEY_M                = 77;
    const int KEY_N                = 78;
    const int KEY_O                = 79;
    const int KEY_P                = 80;
    const int KEY_Q                = 81;
    const int KEY_R                = 82;
    const int KEY_S                = 83;
    const int KEY_T                = 84;
    const int KEY_U                = 85;
    const int KEY_V                = 86;
    const int KEY_W                = 87;
    const int KEY_X                = 88;
    const int KEY_Y                = 89;
    const int KEY_Z                = 90;
    const int KEY_LEFT_BRACKET     = 91;  /* [ */
    const int KEY_BACKSLASH        = 92;  /* \ */
    const int KEY_RIGHT_BRACKET    = 93;  /* ] */
    const int KEY_GRAVE_ACCENT     = 96; /* ` */
    const int KEY_WORLD_1          = 161;/* non-US #1 */
    const int KEY_WORLD_2          = 162;/* non-US #2 */

    /* Function keys */
    const int KEY_ESCAPE           = 256;
    const int KEY_ENTER            = 257;
    const int KEY_TAB              = 258;
    const int KEY_BACKSPACE        = 259;
    const int KEY_INSERT           = 260;
    const int KEY_DELETE           = 261;
    const int KEY_RIGHT            = 262;
    const int KEY_LEFT             = 263;
    const int KEY_DOWN             = 264;
    const int KEY_UP               = 265;
    const int KEY_PAGE_UP          = 266;
    const int KEY_PAGE_DOWN        = 267;
    const int KEY_HOME             = 268;
    const int KEY_END              = 269;
    const int KEY_CAPS_LOCK        = 280;
    const int KEY_SCROLL_LOCK      = 281;
    const int KEY_NUM_LOCK         = 282;
    const int KEY_PRINT_SCREEN     = 283;
    const int KEY_PAUSE            = 284;
    const int KEY_F1               = 290;
    const int KEY_F2               = 291;
    const int KEY_F3               = 292;
    const int KEY_F4               = 293;
    const int KEY_F5               = 294;
    const int KEY_F6               = 295;
    const int KEY_F7               = 296;
    const int KEY_F8               = 297;
    const int KEY_F9               = 298;
    const int KEY_F10              = 299;
    const int KEY_F11              = 300;
    const int KEY_F12              = 301;
    const int KEY_F13              = 302;
    const int KEY_F14              = 303;
    const int KEY_F15              = 304;
    const int KEY_F16              = 305;
    const int KEY_F17              = 306;
    const int KEY_F18              = 307;
    const int KEY_F19              = 308;
    const int KEY_F20              = 309;
    const int KEY_F21              = 310;
    const int KEY_F22              = 311;
    const int KEY_F23              = 312;
    const int KEY_F24              = 313;
    const int KEY_F25              = 314;
    const int KEY_KP_0             = 320;
    const int KEY_KP_1             = 321;
    const int KEY_KP_2             = 322;
    const int KEY_KP_3             = 323;
    const int KEY_KP_4             = 324;
    const int KEY_KP_5             = 325;
    const int KEY_KP_6             = 326;
    const int KEY_KP_7             = 327;
    const int KEY_KP_8             = 328;
    const int KEY_KP_9             = 329;
    const int KEY_KP_DECIMAL       = 330;
    const int KEY_KP_DIVIDE        = 331;
    const int KEY_KP_MULTIPLY      = 332;
    const int KEY_KP_SUBTRACT      = 333;
    const int KEY_KP_ADD           = 334;
    const int KEY_KP_ENTER         = 335;
    const int KEY_KP_EQUAL         = 336;
    const int KEY_LEFT_SHIFT       = 340;
    const int KEY_LEFT_CONTROL     = 341;
    const int KEY_LEFT_ALT         = 342;
    const int KEY_LEFT_SUPER       = 343;
    const int KEY_RIGHT_SHIFT      = 344;
    const int KEY_RIGHT_CONTROL    = 345;
    const int KEY_RIGHT_ALT        = 346;
    const int KEY_RIGHT_SUPER      = 347;
    const int KEY_MENU             = 348;
    const int KEY_LAST             = KEY_MENU;
}// namespace keyboard 


/**
 * Пространство имён, предоставляющее интерфейс управления клавиатурным вводом,
 * аналогичный LWJGL. Поддерживает получение текущего состояния клавиш,
 * обработку событий и настройку повторов нажатий.
 */
namespace keyboard {

    /**
     * Инициализирует клавиатурный ввод.
     * Должен быть вызван до начала обработки клавиш.
     */
    LWCPPGL_API void LWCPPGL_CALL create();

    /**
     * Освобождает ресурсы, связанные с клавиатурным вводом.
     * После вызова требуется повторный вызов create() перед дальнейшим использованием.
     */
    LWCPPGL_API void LWCPPGL_CALL destroy();

    /**
     * Включает или отключает генерацию повторяющихся событий при удержании клавиш.
     *
     * @param enable true для включения повторов, false для отключения
     */
    LWCPPGL_API void LWCPPGL_CALL enable_repeat_events(bool enable);

    /**
     * Проверяет, инициализирована ли клавиатура.
     *
     * @return true, если клавиатура создана; false — иначе
     */
    LWCPPGL_API bool LWCPPGL_CALL is_created();

    /**
     * Проверяет, удерживается ли указанная клавиша в данный момент.
     *
     * @param key 
     *      Код клавиши
     * 
     * @return 
     *      true, если клавиша нажата; false — иначе
     */
    LWCPPGL_API bool LWCPPGL_CALL is_key_down(int key);

    /**
     * Возвращает состояние клавиши из текущего события клавиатуры.
     * Должен вызываться после успешного вызова next_key().
     *
     * @return true, если событие — нажатие клавиши; false — отпускание
     */
    LWCPPGL_API bool LWCPPGL_CALL get_event_key_state();

    /**
     * Переходит к следующему событию клавиши (нажатие или отпускание).
     * Событие затем можно проанализировать с помощью get_event_key() и get_event_key_state().
     *
     * @return true, если новое событие доступно; false — если события закончились
     */
    LWCPPGL_API bool LWCPPGL_CALL next_key();

    /**
     * Переходит к следующему символу, введённому с клавиатуры.
     * Событие затем можно получить с помощью get_event_character().
     *
     * @return true, если символ доступен; false — если символов больше нет
     */
    LWCPPGL_API bool LWCPPGL_CALL next_char();

    /**
     * Проверяет, включены ли повторы нажатий клавиш.
     *
     * @return true, если повторные события включены; false — иначе
     */
    LWCPPGL_API bool LWCPPGL_CALL are_repeat_events_enabled();

    /**
     * Возвращает символ из текущего события символа.
     * Должен вызываться после успешного вызова next_char().
     *
     * @return код символа в юникоде
     */
    LWCPPGL_API int LWCPPGL_CALL get_event_character();

    /**
     * Возвращает код клавиши из текущего события клавиши.
     * Должен вызываться после успешного вызова next_key().
     *
     * @return код клавиши
     */
    LWCPPGL_API int LWCPPGL_CALL get_event_key();

    /**
     * Обновляет состояние клавиатуры.
     */
    LWCPPGL_API void LWCPPGL_CALL update();

    /**
     * Удаляет все необработанные события клавиш.
     */
    LWCPPGL_API void LWCPPGL_CALL discard_events();
}

}// namespace lwcppgl 

#endif//LWCPPGL_OPENGL_KEYBOARD_H