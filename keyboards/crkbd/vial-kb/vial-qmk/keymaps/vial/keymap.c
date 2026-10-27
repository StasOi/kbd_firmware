#include QMK_KEYBOARD_H


#ifdef LAYOUT_split_3x6_3_ex2
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T, KC_LCTL,    KC_RCTL,    KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, KC_LALT,    KC_RALT,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, TL_LOWR,  KC_SPC,     KC_ENT, TL_UPPR, KC_RGUI
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_LCTL,    KC_RCTL,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,    KC_RALT, KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC, KC_LCTL,    KC_RCTL, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LALT,    KC_RALT, KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3_ex2(
  //,--------------------------------------------------------------.  ,--------------------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------'  `--------+--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------.  ,--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RGUI
                                      //`--------------------------'  `--------------------------'
  )
};
#else
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,  KC_ESC,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, TL_LOWR,  KC_SPC,     KC_ENT, TL_UPPR, KC_RALT
                                      //`--------------------------'  `--------------------------'

  ),

  [1] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_LEFT, KC_DOWN,   KC_UP,KC_RIGHT, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [2] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_MINS,  KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,  KC_GRV,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  ),

  [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
#endif

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
  [0] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [1] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [2] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
  [3] = { ENCODER_CCW_CW(RGB_MOD, RGB_RMOD), ENCODER_CCW_CW(RGB_HUI, RGB_HUD), ENCODER_CCW_CW(RGB_VAI, RGB_VAD), ENCODER_CCW_CW(RGB_SAI, RGB_SAD), },
};
#endif

// ---------------------------------------------------------------------------
// Цвет подсветки в зависимости от активного слоя
//
// Оттенок (hue, 0-255) слоёв 1-3 хранится в памяти клавиатуры и меняется
// кейкодами "Layer Hue +/-" (вкладка Custom в Vial): нажатие меняет цвет слоя,
// который активен в данный момент. На слое 0 работает обычный эффект RGB Matrix.
// Hue: 0 красный, 43 жёлтый, 85 зелёный, 128 бирюзовый, 170 синий, 213 пурпурный.
//
// LC_ONLY_ASSIGNED = 1: на слоях 1-3 светятся только клавиши с назначением
// (не KC_NO и не KC_TRNS), остальные погашены. 0: светятся все клавиши слоя.
//
// Раскладка Vial хранится в памяти только на основной половинке, поэтому
// какие клавиши назначены, считает master и по RPC отправляет вторую половинке.
// ---------------------------------------------------------------------------
#ifdef RGB_MATRIX_ENABLE
#include "transactions.h"

#define LC_ONLY_ASSIGNED 1

enum layer_color_keycodes {
    LC_HUE_UP = QK_KB_0, // в Vial: Custom -> "Layer Hue +"
    LC_HUE_DN,           // "Layer Hue -"
    LC_RESET,            // "Layer Colors Reset"
};

#define LC_LAYERS     3     // слои 1..3
#define LC_MAGIC      0xA5  // признак того, что в памяти уже есть наши данные
#define LC_HUE_STEP   8     // шаг изменения оттенка за одно нажатие
#define LC_SAVE_DELAY 2000  // мс бездействия до записи в память

typedef union {
    uint32_t raw;
    struct {
        uint8_t hue[LC_LAYERS];
        uint8_t magic;
    };
} layer_cfg_t;

// То, что нужно для отрисовки: считается на master, на slave приходит по RPC
typedef struct {
    uint32_t raw;                // layer_cfg_t.raw
    uint8_t  layer;              // активный слой
    uint8_t  mask[MATRIX_ROWS];  // бит колонки = 1, если у клавиши есть назначение
} lc_view_t;

static layer_cfg_t lc;
static lc_view_t   lc_view;
static lc_view_t   lc_last_sent;
static bool        lc_dirty      = false;
static uint32_t    lc_dirty_time = 0;

static void lc_defaults(void) {
    lc.hue[0] = 170; // слой 1: синий
    lc.hue[1] = 85;  // слой 2: зелёный
    lc.hue[2] = 0;   // слой 3: красный
    lc.magic  = LC_MAGIC;
}

static void lc_save(void) {
    eeconfig_update_user(lc.raw);
}

static void lc_mark_dirty(void) {
    lc_dirty      = true;
    lc_dirty_time = timer_read32();
}

void eeconfig_init_user(void) { // вызывается при сбросе памяти клавиатуры
    lc_defaults();
    lc_save();
}

static void lc_calc_view(void) {
    lc_view.raw   = lc.raw;
    lc_view.layer = get_highest_layer(layer_state | default_layer_state);
    for (uint8_t r = 0; r < MATRIX_ROWS; r++) {
        lc_view.mask[r] = 0;
        if (lc_view.layer == 0) {
            continue;
        }
        for (uint8_t c = 0; c < MATRIX_COLS; c++) {
            uint16_t kc = keymap_key_to_keycode(lc_view.layer, (keypos_t){.row = r, .col = c});
            if (kc > KC_TRNS) { // KC_NO = 0, KC_TRNS = 1
                lc_view.mask[r] |= (uint8_t)(1U << c);
            }
        }
    }
}

// slave: принять данные от master
static void lc_sync_slave_handler(uint8_t in_buflen, const void *in_data, uint8_t out_buflen, void *out_data) {
    if (in_buflen == sizeof(lc_view)) {
        memcpy(&lc_view, in_data, sizeof(lc_view));
        lc.raw = lc_view.raw;
    }
}

void keyboard_post_init_user(void) {
    lc.raw = eeconfig_read_user();
    if (lc.magic != LC_MAGIC) {
        lc_defaults();
        lc_save();
    }
    lc_calc_view();
    transaction_register_rpc(USER_SYNC_A, lc_sync_slave_handler);
}

void housekeeping_task_user(void) {
    if (!is_keyboard_master()) {
        return;
    }

    // отложенная запись в память: не пишем на каждое нажатие
    if (lc_dirty && timer_elapsed32(lc_dirty_time) > LC_SAVE_DELAY) {
        lc_dirty = false;
        lc_save();
    }

    // пересчёт при смене слоя/цвета и раз в полсекунды (на случай правки раскладки в Vial)
    static uint32_t last_calc = 0;
    uint8_t         layer_now = get_highest_layer(layer_state | default_layer_state);
    if (layer_now != lc_view.layer || lc.raw != lc_view.raw || timer_elapsed32(last_calc) > 500) {
        last_calc = timer_read32();
        lc_calc_view();
    }

    // отправка slave при изменениях и раз в секунду; не чаще раза в 20 мс
    static uint32_t last_try = 0, last_ok = 0;
    bool            changed  = memcmp(&lc_view, &lc_last_sent, sizeof(lc_view)) != 0;
    if ((changed || timer_elapsed32(last_ok) > 1000) && timer_elapsed32(last_try) > 20) {
        last_try = timer_read32();
        if (transaction_rpc_send(USER_SYNC_A, sizeof(lc_view), &lc_view)) {
            lc_last_sent = lc_view;
            last_ok      = timer_read32();
        }
    }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LC_HUE_UP:
        case LC_HUE_DN:
        case LC_RESET:
            if (record->event.pressed) {
                uint8_t layer = get_highest_layer(layer_state | default_layer_state);
                if (keycode == LC_RESET) {
                    lc_defaults();
                    lc_mark_dirty();
                } else if (layer >= 1 && layer <= LC_LAYERS) {
                    if (keycode == LC_HUE_UP) {
                        lc.hue[layer - 1] += LC_HUE_STEP;
                    } else {
                        lc.hue[layer - 1] -= LC_HUE_STEP;
                    }
                    lc_mark_dirty();
                }
            }
            return false;
    }
    return true;
}

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    uint8_t layer = lc_view.layer;
    if (layer == 0 || layer > LC_LAYERS) {
        return true; // стандартная анимация
    }

    layer_cfg_t cfg = {.raw = lc_view.raw};
    HSV         hsv = {cfg.hue[layer - 1], 255, rgb_matrix_get_val()};
    RGB         rgb = hsv_to_rgb(hsv);

#if LC_ONLY_ASSIGNED
    for (uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, 0, 0, 0);
    }
    for (uint8_t r = 0; r < MATRIX_ROWS; r++) {
        for (uint8_t c = 0; c < MATRIX_COLS; c++) {
            uint8_t i = g_led_config.matrix_co[r][c];
            if (i == NO_LED || i < led_min || i >= led_max) {
                continue;
            }
            if (lc_view.mask[r] & (1U << c)) {
                rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
            }
        }
    }
#else
    for (uint8_t i = led_min; i < led_max; i++) {
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
#endif
    return false;
}
#endif
