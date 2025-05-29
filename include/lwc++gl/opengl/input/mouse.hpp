#ifndef LWCPPGL_OPENGL_INPUT_MOUSE_H
#define LWCPPGL_OPENGL_INPUT_MOUSE_H

#include <lwc++gl/exports.hpp>

namespace lwcppgl
{

namespace mouse
{

    /**
     * Создаёт мышь и инициализирует необходимые ресурсы.
     * 
     * @see is_created()
     * @see destroy()
     */
    LWCPPGL_API void LWCPPGL_CALL create();

    /**
     * Обновляет внутреннее состояние мыши.
     *
     * Эта функция должна вызываться один раз за кадр. Она собирает и обрабатывает все события мыши, 
     * обновляет положение курсора, смещения и состояние кнопок.
     */
    LWCPPGL_API void LWCPPGL_CALL update();

    /**
     * Уничтожает мышь и освобождает все связанные ресурсы.
     * 
     * @see create()
     * @see is_created()
     */
    LWCPPGL_API void LWCPPGL_CALL destroy();

    /**
     * Очищает внутреннюю очередь событий мыши.
     *
     * После вызова этой функции все необработанные события (нажатия) будут отброшены.
     * 
     * @see next()
     */
    LWCPPGL_API void LWCPPGL_CALL discard_events();

    /**
     * Устанавливает позицию курсора в окне.
     *
     * Позиция задаётся в пикселях относительно верхнего левого угла клиентской области окна.
     *
     * @param x Новая координата курсора по оси X. Если значение равно -1, курсор будет центрирован по X.
     * @param y Новая координата курсора по оси Y. Если значение равно -1, курсор будет центрирован по Y.
     *
     * @note Функция не учитывает захват курсора. После захвата позиция автоматически всегда устанавливается в центр окна.
     * 
     * @see get_x()
     * @see get_y()
     */
    LWCPPGL_API void LWCPPGL_CALL set_cursor_position(int x, int y);

    /**
     * Включает или отключает захват курсора.
     *
     * Когда курсор захвачен, он скрывается и фиксируется в центре окна.
     *
     * @param grabbed 
     *                  Если true — курсор захватывается. 
     *                  Если false — возвращается в обычное положение.
     * 
     * @see is_grabbed()
     */
    LWCPPGL_API void LWCPPGL_CALL set_grabbed(bool grabbed);

    /**
     * Устанавливает иконку курсора.
     *
     * @param pixels Указатель на массив пикселей изображения курсора в формате RGBA (4 байта на пиксель).
     * @param w Ширина изображения курсора в пикселях.
     * @param h Высота изображения курсора в пикселях.
     */
    LWCPPGL_API void LWCPPGL_CALL set_icon(unsigned char* pixels, int w, int h);

    /**
     * Проверяет, нажата ли указанная кнопка мыши.
     *
     * @param button Номер кнопки: 0 — левая, 1 — правая, 2 — средняя и т.д.
     * 
     * @return true, если кнопка нажата в текущем кадре.
     */
    LWCPPGL_API bool LWCPPGL_CALL is_button_down(int button);

    /**
     * Проверяет, была ли мышь успешно создана.
     *
     * @return true, если вызов create() уже происходил и destroy() ещё не был вызван.
     * 
     * @see create()
     * @see destroy()
     */
    LWCPPGL_API bool LWCPPGL_CALL is_created();

    /**
     * Проверяет, находится ли курсор в режиме захвата.
     *
     * @return true, если курсор в данный момент захвачен (set_grabbed(true) была вызвана).
     * 
     * @see set_grabbed()
     */
    LWCPPGL_API bool LWCPPGL_CALL is_grabbed();

    /**
     * Проверяет, находится ли курсор в пределах клиентской области окна.
     *
     * @return true, если курсор внутри окна и оно в фокусе.
     */
    LWCPPGL_API bool LWCPPGL_CALL is_inside_window();

    /**
     * Возвращает состояние кнопки из текущего события очереди.
     *
     * Используется совместно с функцией next(). Позволяет узнать, была ли кнопка нажата или отпущена.
     *
     * @return true, если кнопка была нажата (press), false — если отпущена (release).
     * 
     * @see next()
     * @see get_event_button()
     */
    LWCPPGL_API bool LWCPPGL_CALL get_event_button_state();

    /**
     * Переходит к следующему событию мыши в очереди.
     *
     * События включают нажатие/отпускание кнопок мыши и могут использоваться для обработки input-логики.
     *
     * @return true, если найдено следующее событие и теперь доступно через get_event_* функции; false — если очередь пуста.
     *
     * @see get_event_button()
     * @see get_event_button_state()
     */
    LWCPPGL_API bool LWCPPGL_CALL next();

    /**
     * Получает код кнопки мыши из текущего события.
     *
     * Используется только после успешного вызова next().
     *
     * @return Целочисленный код кнопки (0 — левая, 1 — правая и т.д.).
     * 
     * @see get_event_button_state()
     * @see next()
     */
    LWCPPGL_API int LWCPPGL_CALL get_event_button();

    /**
     * Возвращает текущую позицию курсора по X.
     *
     * @return Положение курсора по горизонтали в пикселях.
     * 
     * @see get_y()
     * @see set_cursor_position()
     */
    LWCPPGL_API int LWCPPGL_CALL get_x();

    /**
     * Возвращает текущую позицию курсора по Y.
     *
     * @return Положение курсора по вертикали в пикселях.
     * 
     * @see get_x()
     * @see set_cursor_position()
     */
    LWCPPGL_API int LWCPPGL_CALL get_y();

    /**
     * Возвращает смещение курсора по оси X с последнего вызова update().
     *
     * Это значение показывает, на сколько пикселей курсор сдвинулся по горизонтали.
     * Значение автоматически сбрасывается в 0 после вызова.
     *
     * @return Смещение по X с прошлого кадра.
     * 
     * @note Для работы необходим вызов update().
     * @see get_dy()
     */
    LWCPPGL_API int LWCPPGL_CALL get_dx();

    /**
     * Возвращает смещение курсора по оси Y с последнего вызова update().
     *
     * Это значение показывает, на сколько пикселей курсор сдвинулся по вертикали.
     * Значение автоматически сбрасывается в 0 после вызова.
     *
     * @return Смещение по Y с прошлого кадра.
     * 
     * @note Для работы необходим вызов update().
     * @see get_dx()
     */
    LWCPPGL_API int LWCPPGL_CALL get_dy();

    /**
     * Возвращает изменение колеса прокрутки мыши с момента последнего вызова.
     *
     * Значение показывает, сколько единиц прокрутки произошло. Может быть положительным (вверх) или отрицательным (вниз).
     * Значение автоматически сбрасывается в 0 после вызова.
     *
     * @return Суммарное изменение колеса мыши с прошлого кадра.
     * 
     * @note Для работы необходим вызов update().
     */
    LWCPPGL_API int LWCPPGL_CALL get_dwheel();

}// namespace mouse 

}// namespace lwcppgl


#endif//LWCPPGL_OPENGL_INPUT_MOUSE_H