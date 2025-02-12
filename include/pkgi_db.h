#pragma once

#include <stdint.h>

#define MAX_CONTENT_TYPES 12

typedef enum {
    PresenceUnknown,
    PresenceIncomplete,
    PresenceInstalled,
    PresenceMissing,
} DbPresence;

typedef enum {
    SortByTitle,
    SortByRegion,
    SortByName,
    SortBySize,
} DbSort;

typedef enum {
    SortAscending,
    SortDescending,
} DbSortOrder;

typedef enum {
    DbFilterRegionASA = 0x01,
    DbFilterRegionEUR = 0x02,
    DbFilterRegionJPN = 0x04,
    DbFilterRegionUSA = 0x08,

    // TODO: implement these two
    DbFilterInstalled = 0x10,
    DbFilterMissing   = 0x20,

    DbFilterContentGame     = 0x000100,
    DbFilterContentRUS	    = 0x000200,
    DbFilterContentPS2	    = 0x000400,
    DbFilterContentPS1	    = 0x000800,
    DbFilterContentDLC      = 0x001000,
    DbFilterContentTheme    = 0x002000,
    DbFilterContentAvatar   = 0x004000,
    DbFilterContentDemo     = 0x008000,
    DbFilterContentManager  = 0x010000,
    DbFilterContentApp      = 0x020000,
    DbFilterContentCheat    = 0x040000,

    DbFilterAllRegions = DbFilterRegionUSA | DbFilterRegionEUR | DbFilterRegionJPN | DbFilterRegionASA,
    DbFilterAllContent = DbFilterContentGame | DbFilterContentRUS | DbFilterContentPS2 | DbFilterContentPS1 | DbFilterContentDLC | DbFilterContentTheme | DbFilterContentAvatar | DbFilterContentDemo | DbFilterContentManager | DbFilterContentApp | DbFilterContentCheat,
    DbFilterAll = DbFilterAllRegions | DbFilterAllContent | DbFilterInstalled | DbFilterMissing,
} DbFilter;

typedef enum {
    ContentUnknown,
    ContentGame,
    ContentRUS,
    ContentPS2,
    ContentPS1,
    ContentDLC,
    ContentTheme,
    ContentAvatar,
    ContentDemo,
    ContentManager,
    ContentApp,
    ContentCheat,
} ContentType;

typedef struct {
    DbPresence presence;
    const char* content;
    ContentType type;
    const char* name;
    const char* description;
    const uint8_t* rap;
    const char* url;
    const uint8_t* digest;
    int64_t size;
} DbItem;

typedef enum {
    RegionASA,
    RegionEUR,
    RegionJPN,
    RegionUSA,
    RegionUnknown,
} GameRegion;

typedef struct Config {
    DbSort sort;
    DbSortOrder order;
    uint8_t content;
    uint32_t filter;
    uint8_t version_check;
    uint8_t dl_mode_background;
    uint8_t music;
    uint8_t allow_refresh;
} Config;


int pkgi_db_reload(char* error, uint32_t error_size);
int pkgi_db_update(const char* update_url, uint32_t update_len, char* error, uint32_t error_size);
void pkgi_db_get_update_status(uint32_t* updated, uint32_t* total);

void pkgi_db_configure(const char* search, const Config* config);

uint32_t pkgi_db_count(void);
uint32_t pkgi_db_total(void);
DbItem* pkgi_db_get(uint32_t index);

GameRegion pkgi_get_region(const char* content);
ContentType pkgi_get_content_type(uint32_t content);
