#pragma once

#define VIAL_KEYBOARD_UID {0x89, 0x36, 0x2A, 0xC7, 0xFA, 0xD8, 0x89, 0x45}
#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

// Передавать номер активного слоя на вторую половинку, чтобы
// подсветка по слоям работала на обеих
#define SPLIT_LAYER_STATE_ENABLE

// Свой канал для синхронизации цветов слоёв между половинками
#define SPLIT_TRANSACTION_IDS_USER USER_SYNC_A
