#ifndef LWCPPGL_OPENGL_DISPLAY_H
#define LWCPPGL_OPENGL_DISPLAY_H

#include <lwc++gl/exports.hpp>

namespace lwcppgl 
{

/**
 * Класс, описывающий режим отображения экрана, включая разрешение, частоту обновления
 * и возможность использования в полноэкранном режиме.
 *
 * Объекты этого класса используются при установке и выборе режимов отображения.
 */
class LWCPPGL_API display_mode {
    int  m_w, m_h;
    int  m_refrash_rate;
    bool m_can_fullscreen;

    friend class display_impl;

    /**
     * Внутренний конструктор для полного управления параметрами режима.
     * Используется только реализацией библиотеки.
     *
     * @param w ширина в пикселях
     * @param h высота в пикселях
     * @param refrash частота обновления в герцах
     */
    display_mode(int w, int h, int refrash);

public:
    /**
     * Создаёт режим отображения по умолчанию.
     * Разрешение и частота обновления будут равны нулю.
     */
    display_mode();

    /**
     * Создаёт режим отображения с заданным разрешением.
     * Частота обновления и возможность полноэкранного режима определяются системой.
     *
     * @param w ширина в пикселях
     * @param h высота в пикселях
     */
    display_mode(int w, int h);

    /**
     * Конструктор копирования.
     *
     * @param other другой режим отображения
     */
    display_mode(const display_mode& other);

    /**
     * Конструктор перемещения.
     *
     * @param other другой режим отображения
     */
    display_mode(display_mode&& other);

    /**
     * Оператор копирующего присваивания.
     *
     * @param other другой режим отображения
     * @return ссылка на текущий объект
     */
    display_mode& operator=(const display_mode& other);

    /**
     * Оператор перемещающего присваивания.
     *
     * @param other другой режим отображения
     * @return ссылка на текущий объект
     */
    display_mode& operator=(display_mode&& other);

    /**
     * Возвращает ширину режима отображения в пикселях.
     *
     * @return ширина
     */
    int get_width() const;

    /**
     * Возвращает высоту режима отображения в пикселях.
     *
     * @return высота
     */
    int get_heigth() const;

    /**
     * Возвращает частоту обновления экрана.
     *
     * @return частота обновления
     */
    int get_freequency() const;

    /**
     * Возвращает true, если этот режим может быть использован в полноэкранном режиме.
     *
     * @return true, если поддерживается fullscreen; false — если нет
     */
    bool can_fullscreen() const;

    /**
     * Записывает человекочитаемое строковое представление режима отображения в буфер.
     * Пример строки: "1920x1080 @60"
     *
     * @param buf указатель на буфер
     * @param buf_size размер буфера в байтах
     * @return количество записанных символов (не включая завершающий ноль)
     */
    int to_string(char buf[], int buf_size) const;
};

/**
 * Пространство имён, предоставляющее интерфейс для управления окном отображения.
 * Позволяет создавать, обновлять и управлять окном, а также
 * получать информацию о текущем состоянии окна и доступных режимах отображения.
 */
namespace display {

    /**
     * Возвращает текущую ширину окна отображения в пикселях.
     *
     * @return ширина окна
     */
    LWCPPGL_API int LWCPPGL_CALL get_width();

    /**
     * Возвращает текущую высоту окна отображения в пикселях.
     *
     * @return высота окна
     */
    LWCPPGL_API int LWCPPGL_CALL get_height();

    /**
     * Записывает человекочитаемое строковое представление состояния окна в предоставленный буфер.
     *
     * @param buf 
     *      Указатель на буфер, в который будет записана строка
     * 
     * @param bufsize 
     *      Размер буфера в байтах
     * 
     * @return 
     *      Количество символов, записанных в буфер, без учёта завершающего нуля.
     */
    LWCPPGL_API int LWCPPGL_CALL to_string(char buf[], int bufsize);

    /**
     * Возвращает текущую координату X окна на экране.
     *
     * @return Положение окна по оси X
     */
    LWCPPGL_API int LWCPPGL_CALL get_x();

    /**
     * Возвращает текущую координату Y окна на экране.
     *
     * @return Положение окна по оси Y
     */
    LWCPPGL_API int LWCPPGL_CALL get_y();

    /**
     * Получает список доступных режимов отображения.
     *
     * @param buf 
     *      Указатель на массив, в который будут записаны режимы отображения
     * 
     * @param bufsize 
     *      Количество элементов, которое может вместить массив
     * 
     * @return 
     *      Фактическое количество записанных режимов
     */
    LWCPPGL_API int LWCPPGL_CALL get_available_display_modes(display_mode buf[], int bufsize);

    /**
     * Создаёт окно отображения и инициализирует графический контекст.
     * Должен быть вызван до начала рендеринга.
     */
    LWCPPGL_API void LWCPPGL_CALL create();

    /**
     * Уничтожает окно и освобождает все связанные ресурсы.
     * После вызова create() необходимо вызвать снова для повторного использования.
     */
    LWCPPGL_API void LWCPPGL_CALL destroy();

    /**
     * Обновляет состояние окна, обрабатывает события ввода и отображает содержимое буфера.
     * Должен вызываться каждый кадр.
     */
    LWCPPGL_API void LWCPPGL_CALL update();

    /**
     * Устанавливает заголовок окна.
     *
     * @param title 
     *      Указатель на строку заголовка (должна быть null-terminated)
     */
    LWCPPGL_API void LWCPPGL_CALL set_title(const char* title);

    /**
     * Делает графический контекст текущим в вызывающем потоке.
     * Необходимо перед рендерингом, если контекст ещё не активен.
     */
    LWCPPGL_API void LWCPPGL_CALL context_make_current();

    /**
     * Устанавливает возможность изменения размера окна пользователем.
     *
     * @param resizable 
     *      true, если разрешено изменение размера; false — иначе
     */
    LWCPPGL_API void LWCPPGL_CALL set_resizable(bool resizable);

    /**
     * Устанавливает положение окна на экране.
     *
     * Если значение x или y равно -1, то соответствующая координата будет автоматически
     * выровнена по центру экрана с учётом текущего размера окна.
     *
     * @param x 
     *      Координата X окна в пикселях, либо -1 для центрирования по горизонтали
     * 
     * @param y 
     *      Координата Y окна в пикселях, либо -1 для центрирования по вертикали
     */
    LWCPPGL_API void LWCPPGL_CALL set_location(int x, int y);

    /**
     * Устанавливает режим отображения для окна.
     * Должен быть выбран из списка, полученного через get_available_display_modes().
     *
     * @param mode 
     *      Структура с параметрами нового режима отображения
     */
    LWCPPGL_API void LWCPPGL_CALL set_display_mode(const display_mode& mode);

    /**
     * Включает или выключает полноэкранный режим.
     *
     * @param fullscreen 
     *      true для включения полноэкранного режима; false — для оконного
     */
    LWCPPGL_API void LWCPPGL_CALL set_fullscreen(bool fullscreen);

    /**
     * Ограничивает количество кадров в секунду.
     *
     * @param fps целевая частота кадров
     */
    LWCPPGL_API void LWCPPGL_CALL sync(int fps);

    /**
     * Возвращает текущий режим отображения рабочего стола.
     * Обычно используется для восстановления стандартного режима.
     *
     * @return структура с параметрами режима рабочего стола
     */
    LWCPPGL_API display_mode LWCPPGL_CALL get_desktop_display_mode();

    /**
     * Проверяет, находится ли окно в полноэкранном режиме.
     *
     * @return 
     *      true, если полноэкранный режим активен; false — иначе
     */
    LWCPPGL_API bool LWCPPGL_CALL is_fullscreen();

    /**
     * Проверяет, создано ли окно.
     *
     * @return 
     *      true, если окно создано и инициализировано; false — иначе
     */
    LWCPPGL_API bool LWCPPGL_CALL is_created();

    /**
     * Проверяет, сфокусировано ли окно.
     *
     * @return 
     *      true, если окно в фокусе ввода; false — иначе
     */
    LWCPPGL_API bool LWCPPGL_CALL is_focused();

    /**
     * Проверяет, разрешено ли изменение размера окна.
     *
     * @return 
     *      true, если окно можно растягивать; false — иначе
     */
    LWCPPGL_API bool LWCPPGL_CALL is_resizable();

    /**
     * Проверяет, запрошено ли закрытие окна (например, нажатием на крестик).
     *
     * @return 
     *      true, если запрошено закрытие окна; false — иначе
     */
    LWCPPGL_API bool LWCPPGL_CALL is_close_requested();

    /**
     * Проверяет, свёрнуто ли окно (иконифицировано).
     *
     * @return 
     *  true, если окно свёрнуто; false — иначе
     */
    LWCPPGL_API bool LWCPPGL_CALL is_iconified();
    
    /**
     * Устанавливает иконку окна приложения.
     *
     * Функция задаёт иконку окна, отображаемую в заголовке и на панели задач. 
     * Иконка должна быть передана в виде массива пикселей, расположенных построчно 
     * в формате RGBA.
     *
     * @param pixels   
     *      Указатель на массив пикселей изображения. Размер должен быть ( w * h ) байт.
     *      Или nullptr, чтобы удалить иконку.
     * 
     * @param w        
     *      Ширина изображения иконки в пикселях.
     * 
     * @param h        
     *      Высота изображения иконки в пикселях.
     */
    LWCPPGL_API void LWCPPGL_CALL set_icon(unsigned char* pixels, int w, int h);

    /**
     * Возвращает текущий заголовок окна.
     *
     * @return 
     *      указатель на строку заголовка (null-terminated)
     */
    LWCPPGL_API const char* LWCPPGL_CALL get_title();
}

}

#endif//LWCPPGL_OPENGL_DISPLAY_H

