


#define EMPTY                   0
#define DWORZEC_NADODRZE        1
#define PLAC_SZTASZICA          2
#define POMORSKA                3
#define DMOWSKIEGO              4
#define PLAC_JANA_PAWLA_II      5
#define PLAC_ORLAT_LWOWSKICH    6
#define PLAC_LEGIONOW           7
#define ARKADY_CAPITOL          8
#define DWORZEC_GLOWNY_PKP      9
#define PULAWSKIEGO             10
#define KOSCIUSZKI              11
#define KOMUNY_PARYSKIEJ        12
#define PLAC_WROBLEWSKIEGO      13
#define URZAD_WOJEWODZKI        14
#define MOST_GRUNWALDZKI        15
#define PLAC_GRUNWALDZKI        16
#define PIASTOWSKA              17
#define PRUSA                   18
#define WYSZYNSKIEGO            19
#define NOWOWIEJSKA             20
#define SLOWIANSKA              21
#define BISKUPIN                22
#define SPOLDZILCZA             23
#define CHELMONSKIEGO           24
#define TRAMWAJOWA              25
#define ZOO                     26
#define HALA_STULECIA           27
#define KLINIKI                 28
#define TRZEBNICKA              29
#define BRONIEWSKIEGO           30
#define KEPISKA                 31
#define WOLOWSKA                32
#define POSWIETNE               33
#define REJA                    34
#define KATEDRA                 35
#define GALERIA_DOMINIKASKA     36
#define HOTEL_WROCLAW           37
#define WIELKA                  38
#define RONDO                   39
#define SZTABOWA                40
#define HALLERA                 41
#define JASTRZEBIA              42
#define ORLA                    43
#define KRZYKI                  44
#define KSIAZE_MALE             45
#define GLUBCZYCKA              46
#define KARWINSKA               47
#define PARK_WSCHODNI           48
#define ARMII_KRAJOWEJ          49
#define KRAKOWSKA_CH            50
#define KRAKOWSKA               51
#define NA_NISKICH_LAKACH       52
#define PLAC_ZGODY              53
#define SWIDNICKA               54
#define RYNEK                   55
#define MLODYCH_TECHNIKOW       56
#define PLAC_STRZEGOMSKI        57
#define ZACHODNIA               58
#define NIEDZWIDZIA             59
#define MALOPANEWSKA            60
#define KWISKA                  61
#define DH_ASTRA                62
#define PARK_ZACHODNI           63
#define BAJANA                  64
#define METALOWCOW              65
#define PILCZYCE                66
#define STADION_WROCLAW         67
#define GLINIANKI               68
#define KOSMONAUTOW_SZPITAL     69
#define GRABOWA                 70
#define KAMIENIOGORSKA          71
#define ZLOTNICKA               72
#define WSCHOWSKA               73
#define JELENIOGORSKA           74
#define LESNICA                 75
#define OPOROW                  76
#define GRABISZYNSKA            77
#define FAT                     78
#define HUTMEN                  79
#define BZOWA                   80
#define FADROMA                 81
#define STALOWA                 82
#define PERECA                  83
#define NARODOWE_FORUM_MUZYKI   84
#define RENOMA                  85
#define OPERA                   86
#define OLAWSKA                 87
#define WITA_STWOSZA            88
#define UNIWERSYTECKA           89
#define DUBOIS                  90
#define PLAC_BEMA               91
#define NA_SZANCACH             92
#define JEDNOSCI_NARODOWEJ      93
#define DASZYNSKIEGO            94
#define MOSTY_WARSZAWSKIE       95
#define KROMERA                 96
#define KETRZYNSKA              97
#define KWIDZYNSKA              98
#define GESIA                   99
#define BOCIANIA                100
#define KOWALE                  101
#define PAULINSKA               102
#define UNIWERSYTET             103
#define DWORZEC_AUTOBUSOWY      104
#define DYREKCYJNA              105
#define JOANNITOW               106
#define GAJOWA                  107
#define PRUDNICKA               108
#define KAMIENNA                109
#define BARDZKA                 110
#define NYSKA                   111
#define TRANSBUD                112
#define KLIMASA                 113
#define TARNOGAJ                114
#define PARK_POLUDNIOWY         115
#define PULTUSKA                116
#define WEIGLA                  117
#define JAWOROWA                118
#define WISNIOWA                119
#define UNIWERSYTET_EKONOM      120
#define SANOCKA                 121
#define WZGORZE_PARTYZANTOW     122
#define PLAC_NOWY_TARG          123
#define HALA_TARGOWA            124
#define OGROD_BOTANICZNY        125
#define GORNICKIEGO             126
#define GRUNWALDZKA             127
#define KOCHANOWSKIEGO          128
#define CHOPINA                 129
#define KALOWICZA               130
#define STADION_OLIMPIJSKI      131
#define _9_MAJA                 132
#define GODEBSKIEGO             133
#define SEPOLNO                 134
#define OSOBOWICE               135
#define MOST_MILENIJNY          136
#define OSOBOWICKA_CM_I         137
#define SERBSKA                 138
#define MOST_OSOBOWICKI         139
#define KLECZKOWSKA             140
#define GAJOWICKA               141
#define MIELECKA                142
#define OJCA_BAYZEMA            143
#define ALEJA_PRACY             144
#define KAMIENSKIEGO            145
#define BALTYCKA                146
#define PARK_STAROMIEJSKI       147
#define RADIO_I_TELEWIZJA       148
#define PRZYJAZNI               149
#define BRATERSKA               150
#define SASIEDZKA               151
#define KLECINA                 152
#define FIOLKOWA                153
#define DOLMED                  154
#define SRUBOWA                 155
#define WROCLAWSKI_PARK_PRZEM   156
#define GORNICZA                157
#define MODRA                   158
#define PILCZYCKA               159
#define KOLISTA                 160
#define KRYNICKA                161
#define MORWOWA                 162
#define SWIERADOWSKA            163
#define GAJ                     164
#define KOZANOW                 165
#define KOZANOWSKA              166
#define BUJWIDA                 167
#define WROZAMET                168
#define PIRAMOWICZA             169
#define KOSMONAUTOW_ZERNIKI     170
#define STADION_MIEJSKI         171
#define FORUM_MUZYKI            172
#define GRABISZYNSKA_CM_I       173
#define GRABISZYNSKA_CM_II      174
#define ZAWALNA                 175
#define OSOBOWICKA_CM_II        176
#define GAJ_PETLA               177
#define DOKERSKA                178








void Macierz(short int** macierz_sasiedztw, unsigned int liczba_przystankow)
{
    for(int i = 0; i <= liczba_przystankow; i++)
        for(int j = 0; j <= liczba_przystankow; j++)
            macierz_sasiedztw[i][j] = 0;

    // OL - DWORZEC NADODRZE -> DWORZEC GLOWNY PKP
    macierz_sasiedztw[DWORZEC_NADODRZE]     [PLAC_SZTASZICA]        = 2;
    macierz_sasiedztw[PLAC_SZTASZICA]       [POMORSKA]              = 2;
    macierz_sasiedztw[POMORSKA]             [DMOWSKIEGO]            = 2;
    macierz_sasiedztw[DMOWSKIEGO]           [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [PLAC_ORLAT_LWOWSKICH]  = 2;
    macierz_sasiedztw[PLAC_ORLAT_LWOWSKICH] [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [DWORZEC_GLOWNY_PKP]    = 3;

    // 0L - DWORZEC GLOWNY PKP -> DWORZEC NADODRZE
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [PULAWSKIEGO]           = 2;
    macierz_sasiedztw[PULAWSKIEGO]          [KOSCIUSZKI]            = 1;
    macierz_sasiedztw[KOSCIUSZKI]           [KOMUNY_PARYSKIEJ]      = 1;
    macierz_sasiedztw[KOMUNY_PARYSKIEJ]     [PLAC_WROBLEWSKIEGO]    = 2;
    macierz_sasiedztw[PLAC_WROBLEWSKIEGO]   [URZAD_WOJEWODZKI]      = 2;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [MOST_GRUNWALDZKI]      = 1;
    macierz_sasiedztw[MOST_GRUNWALDZKI]     [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [PIASTOWSKA]            = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [PRUSA]                 = 2;
    macierz_sasiedztw[PRUSA]                [WYSZYNSKIEGO]          = 2;
    macierz_sasiedztw[WYSZYNSKIEGO]         [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [SLOWIANSKA]            = 2;
    macierz_sasiedztw[SLOWIANSKA]           [DWORZEC_NADODRZE]      = 2;


    // 0P - DWORZEC NADODRZE -> DWORZEC GLOWNY PKP
    macierz_sasiedztw[DWORZEC_NADODRZE]     [SLOWIANSKA]            = 2;
    macierz_sasiedztw[SLOWIANSKA]           [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [WYSZYNSKIEGO]          = 2;
    macierz_sasiedztw[WYSZYNSKIEGO]         [PRUSA]                 = 1;
    macierz_sasiedztw[PRUSA]                [PIASTOWSKA]            = 2;
    macierz_sasiedztw[PIASTOWSKA]           [PLAC_GRUNWALDZKI]      = 3;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [MOST_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[MOST_GRUNWALDZKI]     [URZAD_WOJEWODZKI]      = 1;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [PLAC_WROBLEWSKIEGO]    = 2;
    macierz_sasiedztw[PLAC_WROBLEWSKIEGO]   [KOMUNY_PARYSKIEJ]      = 2;
    macierz_sasiedztw[KOMUNY_PARYSKIEJ]     [KOSCIUSZKI]            = 1;
    macierz_sasiedztw[KOSCIUSZKI]           [PULAWSKIEGO]           = 1;
    macierz_sasiedztw[PULAWSKIEGO]          [DWORZEC_GLOWNY_PKP]    = 2;

    // 0P - DWORZEC GLOWNY PKP -> DWORZEC NADODRZE
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [ARKADY_CAPITOL]        = 3;
    macierz_sasiedztw[ARKADY_CAPITOL]       [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [PLAC_ORLAT_LWOWSKICH]  = 2;
    macierz_sasiedztw[PLAC_ORLAT_LWOWSKICH] [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [DMOWSKIEGO]            = 2;
    macierz_sasiedztw[DMOWSKIEGO]           [POMORSKA]              = 2;
    macierz_sasiedztw[POMORSKA]             [PLAC_SZTASZICA]        = 3;
    macierz_sasiedztw[PLAC_SZTASZICA]       [DWORZEC_NADODRZE]      = 1;


    // 1 - POSWIETNE -> BISKUPIN
    macierz_sasiedztw[POSWIETNE]            [WROZAMET]              = 1;
    macierz_sasiedztw[WROZAMET]             [KEPISKA]               = 1;
    macierz_sasiedztw[KEPISKA]              [KAMIENSKIEGO]          = 1;
    macierz_sasiedztw[KAMIENSKIEGO]         [BRONIEWSKIEGO]         = 2;
    macierz_sasiedztw[BRONIEWSKIEGO]        [TRZEBNICKA]            = 3;
    macierz_sasiedztw[TRZEBNICKA]           [DWORZEC_NADODRZE]      = 2;
    macierz_sasiedztw[DWORZEC_NADODRZE]     [SLOWIANSKA]            = 2;
    macierz_sasiedztw[SLOWIANSKA]           [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [WYSZYNSKIEGO]          = 2;
    macierz_sasiedztw[WYSZYNSKIEGO]         [PRUSA]                 = 1;
    macierz_sasiedztw[PRUSA]                [PIASTOWSKA]            = 2;
    macierz_sasiedztw[PIASTOWSKA]           [PLAC_GRUNWALDZKI]      = 3;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [KLINIKI]               = 2;
    macierz_sasiedztw[KLINIKI]              [HALA_STULECIA]         = 2;
    macierz_sasiedztw[HALA_STULECIA]        [ZOO]                   = 1;
    macierz_sasiedztw[ZOO]                  [TRAMWAJOWA]            = 1;
    macierz_sasiedztw[TRAMWAJOWA]           [CHELMONSKIEGO]         = 1;
    macierz_sasiedztw[CHELMONSKIEGO]        [PIRAMOWICZA]           = 1;
    macierz_sasiedztw[PIRAMOWICZA]          [SPOLDZILCZA]           = 1;
    macierz_sasiedztw[SPOLDZILCZA]          [BISKUPIN]              = 1;

    // 1 - BISKUPIN -> POSWIETNE
    macierz_sasiedztw[BISKUPIN]             [SPOLDZILCZA]           = 1;
    macierz_sasiedztw[SPOLDZILCZA]          [PIRAMOWICZA]           = 1;
    macierz_sasiedztw[PIRAMOWICZA]          [CHELMONSKIEGO]         = 1;
    macierz_sasiedztw[CHELMONSKIEGO]        [TRAMWAJOWA]            = 1;
    macierz_sasiedztw[TRAMWAJOWA]           [ZOO]                   = 1;
    macierz_sasiedztw[ZOO]                  [HALA_STULECIA]         = 1;
    macierz_sasiedztw[HALA_STULECIA]        [KLINIKI]               = 2;
    macierz_sasiedztw[KLINIKI]              [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [PIASTOWSKA]            = 2;
    macierz_sasiedztw[PIASTOWSKA]           [PRUSA]                 = 2;
    macierz_sasiedztw[PRUSA]                [WYSZYNSKIEGO]          = 2;
    macierz_sasiedztw[WYSZYNSKIEGO]         [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [SLOWIANSKA]            = 2;
    macierz_sasiedztw[SLOWIANSKA]           [DWORZEC_NADODRZE]      = 2;
    macierz_sasiedztw[DWORZEC_NADODRZE]     [TRZEBNICKA]            = 2;
    macierz_sasiedztw[TRZEBNICKA]           [BRONIEWSKIEGO]         = 3;
    macierz_sasiedztw[BRONIEWSKIEGO]        [KAMIENSKIEGO]          = 2;
    macierz_sasiedztw[KAMIENSKIEGO]         [KEPISKA]               = 1;
    macierz_sasiedztw[KEPISKA]              [WROZAMET]              = 1;
    macierz_sasiedztw[WROZAMET]             [POSWIETNE]             = 1;


    // 2 - BISKUPIN -> KRZYKI
    macierz_sasiedztw[BISKUPIN]             [SPOLDZILCZA]           = 1;
    macierz_sasiedztw[SPOLDZILCZA]          [PIRAMOWICZA]           = 1;
    macierz_sasiedztw[PIRAMOWICZA]          [CHELMONSKIEGO]         = 1;
    macierz_sasiedztw[CHELMONSKIEGO]        [TRAMWAJOWA]            = 1;
    macierz_sasiedztw[TRAMWAJOWA]           [ZOO]                   = 1;
    macierz_sasiedztw[ZOO]                  [HALA_STULECIA]         = 1;
    macierz_sasiedztw[HALA_STULECIA]        [KLINIKI]               = 2;
    macierz_sasiedztw[KLINIKI]              [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [REJA]                  = 2;
    macierz_sasiedztw[REJA]                 [KATEDRA]               = 2;
    macierz_sasiedztw[KATEDRA]              [URZAD_WOJEWODZKI]      = 1;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [GALERIA_DOMINIKASKA]   = 4;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [WZGORZE_PARTYZANTOW]   = 2;
    macierz_sasiedztw[WZGORZE_PARTYZANTOW]  [DWORZEC_GLOWNY_PKP]    = 2;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [ARKADY_CAPITOL]        = 3;
    macierz_sasiedztw[ARKADY_CAPITOL]       [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [RONDO]                 = 2;
    macierz_sasiedztw[RONDO]                [SZTABOWA]              = 1;
    macierz_sasiedztw[SZTABOWA]             [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [JASTRZEBIA]            = 1;
    macierz_sasiedztw[JASTRZEBIA]           [ORLA]                  = 2;
    macierz_sasiedztw[ORLA]                 [KRZYKI]                = 2;


    // 2 - KRZYKI -> BISKUPIN
    macierz_sasiedztw[KRZYKI]               [ORLA]                  = 2;
    macierz_sasiedztw[ORLA]                 [JASTRZEBIA]            = 1;
    macierz_sasiedztw[JASTRZEBIA]           [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [SZTABOWA]              = 2;
    macierz_sasiedztw[SZTABOWA]             [RONDO]                 = 1;
    macierz_sasiedztw[RONDO]                [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [DWORZEC_GLOWNY_PKP]    = 3;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [WZGORZE_PARTYZANTOW]   = 2;
    macierz_sasiedztw[WZGORZE_PARTYZANTOW]  [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [URZAD_WOJEWODZKI]      = 3;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [KATEDRA]               = 2;
    macierz_sasiedztw[KATEDRA]              [REJA]                  = 2;
    macierz_sasiedztw[REJA]                 [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [KLINIKI]               = 2;
    macierz_sasiedztw[KLINIKI]              [HALA_STULECIA]         = 2;
    macierz_sasiedztw[HALA_STULECIA]        [ZOO]                   = 1;
    macierz_sasiedztw[ZOO]                  [TRAMWAJOWA]            = 1;
    macierz_sasiedztw[TRAMWAJOWA]           [CHELMONSKIEGO]         = 1;
    macierz_sasiedztw[CHELMONSKIEGO]        [PIRAMOWICZA]           = 1;
    macierz_sasiedztw[PIRAMOWICZA]          [SPOLDZILCZA]           = 1;
    macierz_sasiedztw[SPOLDZILCZA]          [BISKUPIN]              = 1;

    // 3 - LESNICA -> KSIAZE_MALE
    macierz_sasiedztw[LESNICA]              [JELENIOGORSKA]         = 1;
    macierz_sasiedztw[JELENIOGORSKA]        [WSCHOWSKA]             = 1;
    macierz_sasiedztw[WSCHOWSKA]            [ZLOTNICKA]             = 1;
    macierz_sasiedztw[ZLOTNICKA]            [KAMIENIOGORSKA]        = 1;
    macierz_sasiedztw[KAMIENIOGORSKA]       [KOSMONAUTOW_SZPITAL]   = 1;
    macierz_sasiedztw[KOSMONAUTOW_SZPITAL]  [GRABOWA]               = 2;
    macierz_sasiedztw[GRABOWA]              [KOSMONAUTOW_ZERNIKI]   = 1;
    macierz_sasiedztw[KOSMONAUTOW_ZERNIKI]  [GLINIANKI]             = 1;
    macierz_sasiedztw[GLINIANKI]            [STADION_MIEJSKI]       = 1;
    macierz_sasiedztw[STADION_MIEJSKI]      [PILCZYCE]              = 3;
    macierz_sasiedztw[PILCZYCE]             [METALOWCOW]            = 1;
    macierz_sasiedztw[METALOWCOW]           [BAJANA]                = 1;
    macierz_sasiedztw[BAJANA]               [PARK_ZACHODNI]         = 1;
    macierz_sasiedztw[PARK_ZACHODNI]        [DH_ASTRA]              = 1;
    macierz_sasiedztw[DH_ASTRA]             [KWISKA]                = 2;
    macierz_sasiedztw[KWISKA]               [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [PLAC_STRZEGOMSKI]      = 2;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [MLODYCH_TECHNIKOW]     = 1;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [RYNEK]                 = 2;
    macierz_sasiedztw[RYNEK]                [SWIDNICKA]             = 3;
    macierz_sasiedztw[SWIDNICKA]            [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [PLAC_WROBLEWSKIEGO]    = 3;
    macierz_sasiedztw[PLAC_WROBLEWSKIEGO]   [PLAC_ZGODY]            = 2;
    macierz_sasiedztw[PLAC_ZGODY]           [NA_NISKICH_LAKACH]     = 2;
    macierz_sasiedztw[NA_NISKICH_LAKACH]    [KRAKOWSKA]             = 2;
    macierz_sasiedztw[KRAKOWSKA]            [KRAKOWSKA_CH]          = 1;
    macierz_sasiedztw[KRAKOWSKA_CH]         [ARMII_KRAJOWEJ]        = 1;
    macierz_sasiedztw[ARMII_KRAJOWEJ]       [PARK_WSCHODNI]         = 1;
    macierz_sasiedztw[PARK_WSCHODNI]        [KARWINSKA]             = 2;
    macierz_sasiedztw[KARWINSKA]            [GLUBCZYCKA]            = 1;
    macierz_sasiedztw[GLUBCZYCKA]           [KSIAZE_MALE]           = 1;

    // 3 - KSIAZE_MALE -> LESNICA
    macierz_sasiedztw[KSIAZE_MALE]          [GLUBCZYCKA]            = 1;
    macierz_sasiedztw[GLUBCZYCKA]           [KARWINSKA]             = 1;
    macierz_sasiedztw[KARWINSKA]            [PARK_WSCHODNI]         = 1;
    macierz_sasiedztw[PARK_WSCHODNI]        [ARMII_KRAJOWEJ]        = 1;
    macierz_sasiedztw[ARMII_KRAJOWEJ]       [KRAKOWSKA_CH]          = 1;
    macierz_sasiedztw[KRAKOWSKA_CH]         [KRAKOWSKA]             = 1;
    macierz_sasiedztw[KRAKOWSKA]            [NA_NISKICH_LAKACH]     = 2;
    macierz_sasiedztw[NA_NISKICH_LAKACH]    [PLAC_ZGODY]            = 2;
    macierz_sasiedztw[PLAC_ZGODY]           [PLAC_WROBLEWSKIEGO]    = 3;
    macierz_sasiedztw[PLAC_WROBLEWSKIEGO]   [GALERIA_DOMINIKASKA]   = 3;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [SWIDNICKA]             = 2;
    macierz_sasiedztw[SWIDNICKA]            [RYNEK]                 = 3;
    macierz_sasiedztw[RYNEK]                [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [MLODYCH_TECHNIKOW]     = 2;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_STRZEGOMSKI]      = 1;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [KWISKA]                = 1;
    macierz_sasiedztw[KWISKA]               [DH_ASTRA]              = 2;
    macierz_sasiedztw[DH_ASTRA]             [PARK_ZACHODNI]         = 1;
    macierz_sasiedztw[PARK_ZACHODNI]        [BAJANA]                = 1;
    macierz_sasiedztw[BAJANA]               [METALOWCOW]            = 1;
    macierz_sasiedztw[METALOWCOW]           [PILCZYCE]              = 2;
    macierz_sasiedztw[PILCZYCE]             [STADION_MIEJSKI]       = 1;
    macierz_sasiedztw[STADION_MIEJSKI]      [GLINIANKI]             = 2;
    macierz_sasiedztw[GLINIANKI]            [KOSMONAUTOW_ZERNIKI]   = 1;
    macierz_sasiedztw[KOSMONAUTOW_ZERNIKI]  [GRABOWA]               = 1;
    macierz_sasiedztw[GRABOWA]              [KOSMONAUTOW_SZPITAL]   = 3;
    macierz_sasiedztw[KOSMONAUTOW_SZPITAL]  [KAMIENIOGORSKA]        = 1;
    macierz_sasiedztw[KAMIENIOGORSKA]       [ZLOTNICKA]             = 1;
    macierz_sasiedztw[ZLOTNICKA]            [WSCHOWSKA]             = 1;
    macierz_sasiedztw[WSCHOWSKA]            [JELENIOGORSKA]         = 1;
    macierz_sasiedztw[JELENIOGORSKA]        [LESNICA]               = 1;


    // 4 - BISKUPIN -> OPOROW
    macierz_sasiedztw[BISKUPIN]             [SPOLDZILCZA]           = 1;
    macierz_sasiedztw[SPOLDZILCZA]          [PIRAMOWICZA]           = 1;
    macierz_sasiedztw[PIRAMOWICZA]          [CHELMONSKIEGO]         = 1;
    macierz_sasiedztw[CHELMONSKIEGO]        [TRAMWAJOWA]            = 1;
    macierz_sasiedztw[TRAMWAJOWA]           [ZOO]                   = 1;
    macierz_sasiedztw[ZOO]                  [HALA_STULECIA]         = 1;
    macierz_sasiedztw[HALA_STULECIA]        [KLINIKI]               = 2;
    macierz_sasiedztw[KLINIKI]              [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [MOST_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[MOST_GRUNWALDZKI]     [URZAD_WOJEWODZKI]      = 1;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [SWIDNICKA]             = 2;
    macierz_sasiedztw[SWIDNICKA]            [FORUM_MUZYKI]          = 2;
    macierz_sasiedztw[FORUM_MUZYKI]         [PLAC_LEGIONOW]         = 3;
    macierz_sasiedztw[PLAC_LEGIONOW]        [GRABISZYNSKA]          = 2;
    macierz_sasiedztw[GRABISZYNSKA]         [PERECA]                = 2;
    macierz_sasiedztw[PERECA]               [STALOWA]               = 1;
    macierz_sasiedztw[STALOWA]              [FADROMA]               = 1;
    macierz_sasiedztw[FADROMA]              [BZOWA]                 = 1;
    macierz_sasiedztw[BZOWA]                [HUTMEN]                = 1;
    macierz_sasiedztw[HUTMEN]               [FAT]                   = 2;
    macierz_sasiedztw[FAT]                  [FIOLKOWA]              = 1;
    macierz_sasiedztw[FIOLKOWA]             [GRABISZYNSKA_CM_I]     = 2;
    macierz_sasiedztw[GRABISZYNSKA_CM_I]    [GRABISZYNSKA_CM_II]    = 1;
    macierz_sasiedztw[GRABISZYNSKA_CM_II]   [OPOROW]                = 1;

    // 4 - OPOROW -> BISKUPIN
    macierz_sasiedztw[OPOROW]               [GRABISZYNSKA_CM_II]    = 1;
    macierz_sasiedztw[GRABISZYNSKA_CM_II]   [GRABISZYNSKA_CM_I]     = 1;
    macierz_sasiedztw[GRABISZYNSKA_CM_I]    [FIOLKOWA]              = 1;
    macierz_sasiedztw[FIOLKOWA]             [FAT]                   = 2;
    macierz_sasiedztw[FAT]                  [HUTMEN]                = 1;
    macierz_sasiedztw[HUTMEN]               [BZOWA]                 = 2;
    macierz_sasiedztw[BZOWA]                [FADROMA]               = 1;
    macierz_sasiedztw[FADROMA]              [STALOWA]               = 1;
    macierz_sasiedztw[STALOWA]              [PERECA]                = 1;
    macierz_sasiedztw[PERECA]               [GRABISZYNSKA]          = 2;
    macierz_sasiedztw[GRABISZYNSKA]         [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [FORUM_MUZYKI]          = 2;
    macierz_sasiedztw[FORUM_MUZYKI]         [SWIDNICKA]             = 3;
    macierz_sasiedztw[SWIDNICKA]            [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [URZAD_WOJEWODZKI]      = 3;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [MOST_GRUNWALDZKI]      = 1;
    macierz_sasiedztw[MOST_GRUNWALDZKI]     [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [KLINIKI]               = 2;
    macierz_sasiedztw[KLINIKI]              [HALA_STULECIA]         = 2;
    macierz_sasiedztw[HALA_STULECIA]        [ZOO]                   = 1;
    macierz_sasiedztw[ZOO]                  [TRAMWAJOWA]            = 1;
    macierz_sasiedztw[TRAMWAJOWA]           [CHELMONSKIEGO]         = 1;
    macierz_sasiedztw[CHELMONSKIEGO]        [PIRAMOWICZA]           = 1;
    macierz_sasiedztw[PIRAMOWICZA]          [SPOLDZILCZA]           = 1;
    macierz_sasiedztw[SPOLDZILCZA]          [BISKUPIN]              = 1;


    // 5 - KSIAZE MALE -> OPOROW
    macierz_sasiedztw[KSIAZE_MALE]          [GLUBCZYCKA]            = 1;
    macierz_sasiedztw[GLUBCZYCKA]           [KARWINSKA]             = 1;
    macierz_sasiedztw[KARWINSKA]            [PARK_WSCHODNI]         = 1;
    macierz_sasiedztw[PARK_WSCHODNI]        [ARMII_KRAJOWEJ]        = 1;
    macierz_sasiedztw[ARMII_KRAJOWEJ]       [KRAKOWSKA_CH]          = 1;
    macierz_sasiedztw[KRAKOWSKA_CH]         [KRAKOWSKA]             = 1;
    macierz_sasiedztw[KRAKOWSKA]            [NA_NISKICH_LAKACH]     = 2;
    macierz_sasiedztw[NA_NISKICH_LAKACH]    [PLAC_ZGODY]            = 2;
    macierz_sasiedztw[PLAC_ZGODY]           [PLAC_WROBLEWSKIEGO]    = 3;
    macierz_sasiedztw[PLAC_WROBLEWSKIEGO]   [GALERIA_DOMINIKASKA]   = 3;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [WZGORZE_PARTYZANTOW]   = 2;
    macierz_sasiedztw[WZGORZE_PARTYZANTOW]  [DWORZEC_GLOWNY_PKP]    = 2;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [ARKADY_CAPITOL]        = 3;
    macierz_sasiedztw[ARKADY_CAPITOL]       [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [GRABISZYNSKA]          = 2;
    macierz_sasiedztw[GRABISZYNSKA]         [PERECA]                = 2;
    macierz_sasiedztw[PERECA]               [STALOWA]               = 1;
    macierz_sasiedztw[STALOWA]              [FADROMA]               = 1;
    macierz_sasiedztw[FADROMA]              [BZOWA]                 = 1;
    macierz_sasiedztw[BZOWA]                [HUTMEN]                = 1;
    macierz_sasiedztw[HUTMEN]               [FAT]                   = 2;
    macierz_sasiedztw[FAT]                  [FIOLKOWA]              = 1;
    macierz_sasiedztw[FIOLKOWA]             [GRABISZYNSKA_CM_I]     = 2;
    macierz_sasiedztw[GRABISZYNSKA_CM_I]    [GRABISZYNSKA_CM_II]    = 1;
    macierz_sasiedztw[GRABISZYNSKA_CM_II]   [OPOROW]                = 1;

    // 5 - OPOROW -> KSIAZE MALE
    macierz_sasiedztw[OPOROW]               [GRABISZYNSKA_CM_II]    = 1;
    macierz_sasiedztw[GRABISZYNSKA_CM_II]   [GRABISZYNSKA_CM_I]     = 1;
    macierz_sasiedztw[GRABISZYNSKA_CM_I]    [FIOLKOWA]              = 1;
    macierz_sasiedztw[FIOLKOWA]             [FAT]                   = 2;
    macierz_sasiedztw[FAT]                  [HUTMEN]                = 1;
    macierz_sasiedztw[HUTMEN]               [BZOWA]                 = 2;
    macierz_sasiedztw[BZOWA]                [FADROMA]               = 1;
    macierz_sasiedztw[FADROMA]              [STALOWA]               = 1;
    macierz_sasiedztw[STALOWA]              [PERECA]                = 1;
    macierz_sasiedztw[PERECA]               [GRABISZYNSKA]          = 2;
    macierz_sasiedztw[GRABISZYNSKA]         [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [DWORZEC_GLOWNY_PKP]    = 3;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [WZGORZE_PARTYZANTOW]   = 2;
    macierz_sasiedztw[WZGORZE_PARTYZANTOW]  [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [PLAC_WROBLEWSKIEGO]    = 3;
    macierz_sasiedztw[PLAC_WROBLEWSKIEGO]   [PLAC_ZGODY]            = 2;
    macierz_sasiedztw[PLAC_ZGODY]           [NA_NISKICH_LAKACH]     = 2;
    macierz_sasiedztw[NA_NISKICH_LAKACH]    [KRAKOWSKA]             = 2;
    macierz_sasiedztw[KRAKOWSKA]            [KRAKOWSKA_CH]          = 1;
    macierz_sasiedztw[KRAKOWSKA_CH]         [ARMII_KRAJOWEJ]        = 1;
    macierz_sasiedztw[ARMII_KRAJOWEJ]       [PARK_WSCHODNI]         = 1;
    macierz_sasiedztw[PARK_WSCHODNI]        [KARWINSKA]             = 2;
    macierz_sasiedztw[KARWINSKA]            [GLUBCZYCKA]            = 1;
    macierz_sasiedztw[GLUBCZYCKA]           [KSIAZE_MALE]           = 1;

    // 6 - KRZYKI -> KOWALE
    macierz_sasiedztw[KRZYKI]               [ORLA]                  = 2;
    macierz_sasiedztw[ORLA]                 [JASTRZEBIA]            = 1;
    macierz_sasiedztw[JASTRZEBIA]           [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [SZTABOWA]              = 2;
    macierz_sasiedztw[SZTABOWA]             [RONDO]                 = 1;
    macierz_sasiedztw[RONDO]                [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [RENOMA]                = 2;
    macierz_sasiedztw[RENOMA]               [OPERA]                 = 2;
    macierz_sasiedztw[OPERA]                [SWIDNICKA]             = 1;
    macierz_sasiedztw[SWIDNICKA]            [OLAWSKA]               = 1;
    macierz_sasiedztw[OLAWSKA]              [WITA_STWOSZA]          = 1;
    macierz_sasiedztw[WITA_STWOSZA]         [UNIWERSYTECKA]         = 1;
    macierz_sasiedztw[UNIWERSYTECKA]        [DUBOIS]                = 2;
    macierz_sasiedztw[DUBOIS]               [PLAC_BEMA]             = 2;
    macierz_sasiedztw[PLAC_BEMA]            [NA_SZANCACH]           = 1;
    macierz_sasiedztw[NA_SZANCACH]          [JEDNOSCI_NARODOWEJ]    = 1;
    macierz_sasiedztw[JEDNOSCI_NARODOWEJ]   [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [DASZYNSKIEGO]          = 1;
    macierz_sasiedztw[DASZYNSKIEGO]         [MOSTY_WARSZAWSKIE]     = 1;
    macierz_sasiedztw[MOSTY_WARSZAWSKIE]    [KROMERA]               = 3;
    macierz_sasiedztw[KROMERA]              [KETRZYNSKA]            = 1;
    macierz_sasiedztw[KETRZYNSKA]           [KWIDZYNSKA]            = 1;
    macierz_sasiedztw[KWIDZYNSKA]           [GESIA]                 = 1;
    macierz_sasiedztw[GESIA]                [BOCIANIA]              = 2;
    macierz_sasiedztw[BOCIANIA]             [KOWALE]                = 1;

    // 6 - KOWALE -> KRZYKI
    macierz_sasiedztw[KOWALE]               [BOCIANIA]              = 1;
    macierz_sasiedztw[BOCIANIA]             [GESIA]                 = 1;
    macierz_sasiedztw[GESIA]                [KWIDZYNSKA]            = 1;
    macierz_sasiedztw[KWIDZYNSKA]           [KETRZYNSKA]            = 1;
    macierz_sasiedztw[KETRZYNSKA]           [KROMERA]               = 2;
    macierz_sasiedztw[KROMERA]              [MOSTY_WARSZAWSKIE]     = 2;
    macierz_sasiedztw[MOSTY_WARSZAWSKIE]    [DASZYNSKIEGO]          = 1;
    macierz_sasiedztw[DASZYNSKIEGO]         [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [JEDNOSCI_NARODOWEJ]    = 1;
    macierz_sasiedztw[JEDNOSCI_NARODOWEJ]   [NA_SZANCACH]           = 1;
    macierz_sasiedztw[NA_SZANCACH]          [PLAC_BEMA]             = 2;
    macierz_sasiedztw[PLAC_BEMA]            [DUBOIS]                = 2;
    macierz_sasiedztw[DUBOIS]               [UNIWERSYTET]           = 3;
    macierz_sasiedztw[UNIWERSYTET]          [RYNEK]                 = 3;
    macierz_sasiedztw[RYNEK]                [FORUM_MUZYKI]          = 2;
    macierz_sasiedztw[FORUM_MUZYKI]         [RENOMA]                = 2;
    macierz_sasiedztw[RENOMA]               [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [RONDO]                 = 2;
    macierz_sasiedztw[RONDO]                [SZTABOWA]              = 1;
    macierz_sasiedztw[SZTABOWA]             [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [JASTRZEBIA]            = 1;
    macierz_sasiedztw[JASTRZEBIA]           [ORLA]                  = 2;
    macierz_sasiedztw[ORLA]                 [KRZYKI]                = 2;


    // 7 - KRZYKI -> POSWIETNE
    macierz_sasiedztw[KRZYKI]               [ORLA]                  = 2;
    macierz_sasiedztw[ORLA]                 [JASTRZEBIA]            = 1;
    macierz_sasiedztw[JASTRZEBIA]           [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [SZTABOWA]              = 2;
    macierz_sasiedztw[SZTABOWA]             [RONDO]                 = 1;
    macierz_sasiedztw[RONDO]                [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [RENOMA]                = 2;
    macierz_sasiedztw[RENOMA]               [OPERA]                 = 2;
    macierz_sasiedztw[OPERA]                [SWIDNICKA]             = 1;
    macierz_sasiedztw[SWIDNICKA]            [OLAWSKA]               = 1;
    macierz_sasiedztw[OLAWSKA]              [WITA_STWOSZA]          = 1;
    macierz_sasiedztw[WITA_STWOSZA]         [UNIWERSYTECKA]         = 1;
    macierz_sasiedztw[UNIWERSYTECKA]        [DUBOIS]                = 2;
    macierz_sasiedztw[DUBOIS]               [PAULINSKA]             = 2;
    macierz_sasiedztw[PAULINSKA]            [DWORZEC_NADODRZE]      = 1;
    macierz_sasiedztw[DWORZEC_NADODRZE]     [TRZEBNICKA]            = 2;
    macierz_sasiedztw[TRZEBNICKA]           [BRONIEWSKIEGO]         = 3;
    macierz_sasiedztw[BRONIEWSKIEGO]        [KAMIENSKIEGO]          = 2;
    macierz_sasiedztw[KAMIENSKIEGO]         [KEPISKA]              = 1;
    macierz_sasiedztw[KEPISKA]             [WROZAMET]              = 1;
    macierz_sasiedztw[WROZAMET]             [POSWIETNE]             = 1;

    // 7 - POSWIETNE -> KRZYKI
    macierz_sasiedztw[POSWIETNE]            [WROZAMET]              = 1;
    macierz_sasiedztw[WROZAMET]             [KEPISKA]              = 1;
    macierz_sasiedztw[KEPISKA]             [KAMIENSKIEGO]          = 1;
    macierz_sasiedztw[KAMIENSKIEGO]         [BRONIEWSKIEGO]         = 2;
    macierz_sasiedztw[BRONIEWSKIEGO]        [TRZEBNICKA]            = 3;
    macierz_sasiedztw[DWORZEC_NADODRZE]     [PAULINSKA]             = 2;
    macierz_sasiedztw[PAULINSKA]            [DUBOIS]                = 1;
    macierz_sasiedztw[DUBOIS]               [UNIWERSYTET]           = 3;
    macierz_sasiedztw[UNIWERSYTET]          [RYNEK]                 = 3;
    macierz_sasiedztw[RYNEK]                [FORUM_MUZYKI]          = 3;
    macierz_sasiedztw[FORUM_MUZYKI]         [RENOMA]                = 2;
    macierz_sasiedztw[RENOMA]               [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [WIELKA]                = 2;
    macierz_sasiedztw[WIELKA]               [RONDO]                 = 1;
    macierz_sasiedztw[RONDO]                [SZTABOWA]              = 2;
    macierz_sasiedztw[SZTABOWA]             [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [JASTRZEBIA]            = 1;
    macierz_sasiedztw[JASTRZEBIA]           [ORLA]                  = 2;
    macierz_sasiedztw[ORLA]                 [KRZYKI]                = 2;

    // 8 - ZAWALNA - > TARNOGAJ
    macierz_sasiedztw[ZAWALNA]              [TRZEBNICKA]            = 3;
    macierz_sasiedztw[TRZEBNICKA]           [DWORZEC_NADODRZE]      = 2;
    macierz_sasiedztw[DWORZEC_NADODRZE]     [SLOWIANSKA]            = 2;
    macierz_sasiedztw[SLOWIANSKA]           [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [JEDNOSCI_NARODOWEJ]    = 1;
    macierz_sasiedztw[JEDNOSCI_NARODOWEJ]   [NA_SZANCACH]           = 1;
    macierz_sasiedztw[NA_SZANCACH]          [PLAC_BEMA]             = 2;
    macierz_sasiedztw[PLAC_BEMA]            [HALA_TARGOWA]          = 2;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [GALERIA_DOMINIKASKA]   = 1;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [WZGORZE_PARTYZANTOW]   = 2;
    macierz_sasiedztw[WZGORZE_PARTYZANTOW]  [DWORZEC_GLOWNY_PKP]    = 3;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [DWORZEC_AUTOBUSOWY]    = 2;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DYREKCYJNA]            = 1;
    macierz_sasiedztw[DYREKCYJNA]           [JOANNITOW]             = 1;
    macierz_sasiedztw[JOANNITOW]            [GAJOWA]                = 1;
    macierz_sasiedztw[GAJOWA]               [PRUDNICKA]             = 2;
    macierz_sasiedztw[PRUDNICKA]            [KAMIENNA]              = 1;
    macierz_sasiedztw[KAMIENNA]             [BARDZKA]               = 2;
    macierz_sasiedztw[BARDZKA]              [NYSKA]                 = 1;
    macierz_sasiedztw[NYSKA]                [TRANSBUD]              = 1;
    macierz_sasiedztw[TRANSBUD]             [KLIMASA]               = 2;
    macierz_sasiedztw[KLIMASA]              [TARNOGAJ]              = 1;

    // 8 - TARNOGAJ -> ZAWALNA
    macierz_sasiedztw[TARNOGAJ]             [KLIMASA]               = 1;
    macierz_sasiedztw[KLIMASA]              [TRANSBUD]              = 2;
    macierz_sasiedztw[TRANSBUD]             [NYSKA]                 = 1;
    macierz_sasiedztw[NYSKA]                [BARDZKA]               = 2;
    macierz_sasiedztw[BARDZKA]              [KAMIENNA]              = 1;
    macierz_sasiedztw[KAMIENNA]             [PRUDNICKA]             = 1;
    macierz_sasiedztw[PRUDNICKA]            [GAJOWA]                = 1;
    macierz_sasiedztw[GAJOWA]               [DYREKCYJNA]            = 1;
    macierz_sasiedztw[DYREKCYJNA]           [DWORZEC_AUTOBUSOWY]    = 2;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DWORZEC_GLOWNY_PKP]    = 3;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [WZGORZE_PARTYZANTOW]   = 2;
    macierz_sasiedztw[WZGORZE_PARTYZANTOW]  [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [HALA_TARGOWA]          = 1;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_BEMA]             = 2;
    macierz_sasiedztw[PLAC_BEMA]            [NA_SZANCACH]           = 1;
    macierz_sasiedztw[NA_SZANCACH]          [JEDNOSCI_NARODOWEJ]    = 1;
    macierz_sasiedztw[JEDNOSCI_NARODOWEJ]   [SLOWIANSKA]            = 4;
    macierz_sasiedztw[SLOWIANSKA]           [DWORZEC_NADODRZE]      = 2;
    macierz_sasiedztw[DWORZEC_NADODRZE]     [TRZEBNICKA]            = 2;
    macierz_sasiedztw[TRZEBNICKA]           [ZAWALNA]               = 3;


    // 9 - SEPOLNO  -> PARK_POLUDNIOWY
    macierz_sasiedztw[SEPOLNO]              [GODEBSKIEGO]           = 1;
    macierz_sasiedztw[GODEBSKIEGO]          [_9_MAJA]               = 1;
    macierz_sasiedztw[_9_MAJA]              [STADION_OLIMPIJSKI]    = 1;
    macierz_sasiedztw[STADION_OLIMPIJSKI]   [KALOWICZA]             = 1;
    macierz_sasiedztw[KALOWICZA]            [CHOPINA]               = 1;
    macierz_sasiedztw[CHOPINA]              [KOCHANOWSKIEGO]        = 2;
    macierz_sasiedztw[KOCHANOWSKIEGO]       [GRUNWALDZKA]           = 1;
    macierz_sasiedztw[GRUNWALDZKA]          [PIASTOWSKA]            = 1;
    macierz_sasiedztw[PIASTOWSKA]           [GORNICKIEGO]           = 1;
    macierz_sasiedztw[GORNICKIEGO]          [OGROD_BOTANICZNY]      = 1;
    macierz_sasiedztw[OGROD_BOTANICZNY]     [PLAC_BEMA]             = 3;
    macierz_sasiedztw[PLAC_BEMA]            [HALA_TARGOWA]          = 2;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [GALERIA_DOMINIKASKA]   = 1;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [WZGORZE_PARTYZANTOW]   = 2;
    macierz_sasiedztw[WZGORZE_PARTYZANTOW]  [DWORZEC_GLOWNY_PKP]    = 3;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [DWORZEC_AUTOBUSOWY]    = 2;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DYREKCYJNA]            = 1;
    macierz_sasiedztw[DYREKCYJNA]           [SANOCKA]               = 2;
    macierz_sasiedztw[SANOCKA]              [UNIWERSYTET_EKONOM]    = 1;
    macierz_sasiedztw[UNIWERSYTET_EKONOM]   [WISNIOWA]              = 2;
    macierz_sasiedztw[WISNIOWA]             [JAWOROWA]              = 1;
    macierz_sasiedztw[JAWOROWA]             [WEIGLA]                = 2;
    macierz_sasiedztw[WEIGLA]               [PULTUSKA]              = 1;
    macierz_sasiedztw[PULTUSKA]             [PARK_POLUDNIOWY]       = 1;

    // 9 - PARK_POLUDNIOWY -> SEPOLNO
    macierz_sasiedztw[PARK_POLUDNIOWY]      [PULTUSKA]              = 1;
    macierz_sasiedztw[PULTUSKA]             [WEIGLA]                = 1;
    macierz_sasiedztw[WEIGLA]               [JAWOROWA]              = 2;
    macierz_sasiedztw[JAWOROWA]             [WISNIOWA]              = 1;
    macierz_sasiedztw[WISNIOWA]             [UNIWERSYTET_EKONOM]    = 2;
    macierz_sasiedztw[UNIWERSYTET_EKONOM]   [SANOCKA]               = 1;
    macierz_sasiedztw[SANOCKA]              [DYREKCYJNA]            = 2;
    macierz_sasiedztw[DYREKCYJNA]           [DWORZEC_AUTOBUSOWY]    = 1;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DWORZEC_GLOWNY_PKP]    = 2;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [WZGORZE_PARTYZANTOW]   = 2;
    macierz_sasiedztw[WZGORZE_PARTYZANTOW]  [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [HALA_TARGOWA]          = 1;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_BEMA]             = 2;
    macierz_sasiedztw[PLAC_BEMA]            [OGROD_BOTANICZNY]      = 3;
    macierz_sasiedztw[OGROD_BOTANICZNY]     [GORNICKIEGO]           = 1;
    macierz_sasiedztw[GORNICKIEGO]          [PIASTOWSKA]            = 1;
    macierz_sasiedztw[PIASTOWSKA]           [GRUNWALDZKA]           = 1;
    macierz_sasiedztw[GRUNWALDZKA]          [KOCHANOWSKIEGO]        = 1;
    macierz_sasiedztw[KOCHANOWSKIEGO]       [CHOPINA]               = 2;
    macierz_sasiedztw[CHOPINA]              [KALOWICZA]             = 1;
    macierz_sasiedztw[KALOWICZA]            [STADION_OLIMPIJSKI]    = 1;
    macierz_sasiedztw[STADION_OLIMPIJSKI]   [_9_MAJA]               = 1;
    macierz_sasiedztw[_9_MAJA]              [GODEBSKIEGO]           = 1;
    macierz_sasiedztw[GODEBSKIEGO]          [SEPOLNO]               = 1;


    // 10 - LESNICA -> BISKUPIN
    macierz_sasiedztw[LESNICA]              [JELENIOGORSKA]         = 1;
    macierz_sasiedztw[JELENIOGORSKA]        [WSCHOWSKA]             = 1;
    macierz_sasiedztw[WSCHOWSKA]            [ZLOTNICKA]             = 1;
    macierz_sasiedztw[ZLOTNICKA]            [KAMIENIOGORSKA]        = 1;
    macierz_sasiedztw[KAMIENIOGORSKA]       [KOSMONAUTOW_SZPITAL]   = 1;
    macierz_sasiedztw[KOSMONAUTOW_SZPITAL]  [GRABOWA]               = 2;
    macierz_sasiedztw[GRABOWA]              [KOSMONAUTOW_ZERNIKI]   = 1;
    macierz_sasiedztw[KOSMONAUTOW_ZERNIKI]  [GLINIANKI]             = 1;
    macierz_sasiedztw[GLINIANKI]            [STADION_MIEJSKI]       = 1;
    macierz_sasiedztw[STADION_MIEJSKI]      [PILCZYCE]              = 3;
    macierz_sasiedztw[PILCZYCE]             [METALOWCOW]            = 1;
    macierz_sasiedztw[METALOWCOW]           [BAJANA]                = 1;
    macierz_sasiedztw[BAJANA]               [PARK_ZACHODNI]         = 1;
    macierz_sasiedztw[PARK_ZACHODNI]        [DH_ASTRA]              = 1;
    macierz_sasiedztw[DH_ASTRA]             [KWISKA]                = 2;
    macierz_sasiedztw[KWISKA]               [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [NIEDZWIDZIA]           = 1;
    macierz_sasiedztw[NIEDZWIDZIA]          [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [PLAC_STRZEGOMSKI]      = 2;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [MLODYCH_TECHNIKOW]     = 1;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [RYNEK]                 = 2;
    macierz_sasiedztw[RYNEK]                [SWIDNICKA]             = 3;
    macierz_sasiedztw[SWIDNICKA]            [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [URZAD_WOJEWODZKI]      = 3;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [KATEDRA]               = 2;
    macierz_sasiedztw[KATEDRA]              [REJA]                  = 2;
    macierz_sasiedztw[REJA]                 [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [KLINIKI]               = 2;
    macierz_sasiedztw[KLINIKI]              [HALA_STULECIA]         = 2;
    macierz_sasiedztw[HALA_STULECIA]        [ZOO]                   = 1;
    macierz_sasiedztw[ZOO]                  [TRAMWAJOWA]            = 1;
    macierz_sasiedztw[TRAMWAJOWA]           [CHELMONSKIEGO]         = 1;
    macierz_sasiedztw[CHELMONSKIEGO]        [PIRAMOWICZA]           = 1;
    macierz_sasiedztw[PIRAMOWICZA]          [SPOLDZILCZA]           = 1;
    macierz_sasiedztw[SPOLDZILCZA]          [BISKUPIN]              = 1;

    // 10 - BISKUPIN -> LESNICA
    macierz_sasiedztw[BISKUPIN]             [SPOLDZILCZA]           = 1;
    macierz_sasiedztw[SPOLDZILCZA]          [PIRAMOWICZA]           = 1;
    macierz_sasiedztw[PIRAMOWICZA]          [CHELMONSKIEGO]         = 1;
    macierz_sasiedztw[CHELMONSKIEGO]        [TRAMWAJOWA]            = 1;
    macierz_sasiedztw[TRAMWAJOWA]           [ZOO]                   = 1;
    macierz_sasiedztw[ZOO]                  [HALA_STULECIA]         = 1;
    macierz_sasiedztw[HALA_STULECIA]        [KLINIKI]               = 2;
    macierz_sasiedztw[KLINIKI]              [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [REJA]                  = 2;
    macierz_sasiedztw[REJA]                 [KATEDRA]               = 2;
    macierz_sasiedztw[KATEDRA]              [URZAD_WOJEWODZKI]      = 1;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [GALERIA_DOMINIKASKA]   = 4;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [SWIDNICKA]             = 2;
    macierz_sasiedztw[SWIDNICKA]            [RYNEK]                 = 3;
    macierz_sasiedztw[RYNEK]                [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [MLODYCH_TECHNIKOW]     = 2;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_STRZEGOMSKI]      = 1;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [KWISKA]                = 1;
    macierz_sasiedztw[KWISKA]               [DH_ASTRA]              = 2;
    macierz_sasiedztw[DH_ASTRA]             [PARK_ZACHODNI]         = 1;
    macierz_sasiedztw[PARK_ZACHODNI]        [BAJANA]                = 1;
    macierz_sasiedztw[BAJANA]               [METALOWCOW]            = 1;
    macierz_sasiedztw[METALOWCOW]           [PILCZYCE]              = 2;
    macierz_sasiedztw[PILCZYCE]             [STADION_MIEJSKI]       = 1;
    macierz_sasiedztw[STADION_MIEJSKI]      [GLINIANKI]             = 2;
    macierz_sasiedztw[GLINIANKI]            [KOSMONAUTOW_ZERNIKI]   = 1;
    macierz_sasiedztw[KOSMONAUTOW_ZERNIKI]  [GRABOWA]               = 1;
    macierz_sasiedztw[GRABOWA]              [KOSMONAUTOW_SZPITAL]   = 3;
    macierz_sasiedztw[KOSMONAUTOW_SZPITAL]  [KAMIENIOGORSKA]        = 1;
    macierz_sasiedztw[KAMIENIOGORSKA]       [ZLOTNICKA]             = 1;
    macierz_sasiedztw[ZLOTNICKA]            [WSCHOWSKA]             = 1;
    macierz_sasiedztw[WSCHOWSKA]            [JELENIOGORSKA]         = 1;
    macierz_sasiedztw[JELENIOGORSKA]        [LESNICA]               = 1;

    // 11 - KROMERA -> GRABISZYNSKA_CM_I
    macierz_sasiedztw[KROMERA]              [MOSTY_WARSZAWSKIE]     = 2;
    macierz_sasiedztw[MOSTY_WARSZAWSKIE]    [DASZYNSKIEGO]          = 1;
    macierz_sasiedztw[DASZYNSKIEGO]         [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [JEDNOSCI_NARODOWEJ]    = 1;
    macierz_sasiedztw[JEDNOSCI_NARODOWEJ]   [NA_SZANCACH]           = 1;
    macierz_sasiedztw[NA_SZANCACH]          [PLAC_BEMA]             = 2;
    macierz_sasiedztw[PLAC_BEMA]            [HALA_TARGOWA]          = 2;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [GALERIA_DOMINIKASKA]   = 1;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [WZGORZE_PARTYZANTOW]   = 2;
    macierz_sasiedztw[WZGORZE_PARTYZANTOW]  [DWORZEC_GLOWNY_PKP]    = 2;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [ARKADY_CAPITOL]        = 3;
    macierz_sasiedztw[ARKADY_CAPITOL]       [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [GRABISZYNSKA]          = 2;
    macierz_sasiedztw[GRABISZYNSKA]         [PERECA]                = 2;
    macierz_sasiedztw[PERECA]               [STALOWA]               = 1;
    macierz_sasiedztw[STALOWA]              [FADROMA]               = 1;
    macierz_sasiedztw[FADROMA]              [BZOWA]                 = 1;
    macierz_sasiedztw[BZOWA]                [HUTMEN]                = 1;
    macierz_sasiedztw[HUTMEN]               [FAT]                   = 2;
    macierz_sasiedztw[FAT]                  [FIOLKOWA]              = 1;
    macierz_sasiedztw[FIOLKOWA]             [GRABISZYNSKA_CM_I]     = 1;

    // 11 - GRABISZYNSKA_CM_I -> KROMERA
    macierz_sasiedztw[GRABISZYNSKA_CM_I]    [FIOLKOWA]              = 1;
    macierz_sasiedztw[FIOLKOWA]             [FAT]                   = 2;
    macierz_sasiedztw[FAT]                  [HUTMEN]                = 1;
    macierz_sasiedztw[HUTMEN]               [BZOWA]                 = 2;
    macierz_sasiedztw[BZOWA]                [FADROMA]               = 1;
    macierz_sasiedztw[FADROMA]              [STALOWA]               = 1;
    macierz_sasiedztw[STALOWA]              [PERECA]                = 1;
    macierz_sasiedztw[PERECA]               [GRABISZYNSKA]          = 2;
    macierz_sasiedztw[GRABISZYNSKA]         [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [FORUM_MUZYKI]          = 2;
    macierz_sasiedztw[FORUM_MUZYKI]         [SWIDNICKA]             = 3;
    macierz_sasiedztw[SWIDNICKA]            [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [HALA_TARGOWA]          = 1;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_BEMA]             = 2;
    macierz_sasiedztw[PLAC_BEMA]            [NA_SZANCACH]           = 1;
    macierz_sasiedztw[NA_SZANCACH]          [JEDNOSCI_NARODOWEJ]    = 1;
    macierz_sasiedztw[JEDNOSCI_NARODOWEJ]   [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [DASZYNSKIEGO]          = 1;
    macierz_sasiedztw[DASZYNSKIEGO]         [MOSTY_WARSZAWSKIE]     = 1;
    macierz_sasiedztw[MOSTY_WARSZAWSKIE]    [KROMERA]               = 3;


    // 14 - OSOBOWICE -> FAT
    macierz_sasiedztw[OSOBOWICE]            [MOST_MILENIJNY]        = 1;
    macierz_sasiedztw[MOST_MILENIJNY]       [OSOBOWICKA_CM_I]       = 1;
    macierz_sasiedztw[OSOBOWICKA_CM_I]      [OSOBOWICKA_CM_II]      = 1;
    macierz_sasiedztw[OSOBOWICKA_CM_II]     [SERBSKA]               = 2;
    macierz_sasiedztw[SERBSKA]              [MOST_OSOBOWICKI]       = 1;
    macierz_sasiedztw[MOST_OSOBOWICKI]      [KLECZKOWSKA]           = 2;
    macierz_sasiedztw[KLECZKOWSKA]          [PLAC_SZTASZICA]        = 3;
    macierz_sasiedztw[PLAC_SZTASZICA]       [POMORSKA]              = 2;
    macierz_sasiedztw[POMORSKA]             [RYNEK]                 = 4;
    macierz_sasiedztw[RYNEK]                [FORUM_MUZYKI]          = 2;
    macierz_sasiedztw[FORUM_MUZYKI]         [RENOMA]                = 2;
    macierz_sasiedztw[RENOMA]               [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [RONDO]                 = 2;
    macierz_sasiedztw[RONDO]                [SZTABOWA]              = 1;
    macierz_sasiedztw[SZTABOWA]             [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [GAJOWICKA]             = 2;
    macierz_sasiedztw[GAJOWICKA]            [MIELECKA]              = 2;
    macierz_sasiedztw[MIELECKA]             [OJCA_BAYZEMA]          = 2;
    macierz_sasiedztw[OJCA_BAYZEMA]         [ALEJA_PRACY]           = 1;
    macierz_sasiedztw[ALEJA_PRACY]          [FAT]                   = 2;

    // 14 - FAT -> OSOBOWICE
    macierz_sasiedztw[FAT]                  [HUTMEN]                = 2;
    macierz_sasiedztw[HUTMEN]               [BZOWA]                 = 2;
    macierz_sasiedztw[BZOWA]                [FADROMA]               = 1;
    macierz_sasiedztw[FADROMA]              [STALOWA]               = 1;
    macierz_sasiedztw[STALOWA]              [PERECA]                = 1;
    macierz_sasiedztw[PERECA]               [GRABISZYNSKA]          = 2;
    macierz_sasiedztw[GRABISZYNSKA]         [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [PLAC_ORLAT_LWOWSKICH]  = 2;
    macierz_sasiedztw[PLAC_ORLAT_LWOWSKICH] [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [DMOWSKIEGO]            = 2;
    macierz_sasiedztw[DMOWSKIEGO]           [POMORSKA]              = 2;
    macierz_sasiedztw[POMORSKA]             [PLAC_SZTASZICA]        = 3;
    macierz_sasiedztw[PLAC_SZTASZICA]       [KLECZKOWSKA]           = 2;
    macierz_sasiedztw[KLECZKOWSKA]          [MOST_OSOBOWICKI]       = 2;
    macierz_sasiedztw[MOST_OSOBOWICKI]      [SERBSKA]               = 1;
    macierz_sasiedztw[SERBSKA]              [OSOBOWICKA_CM_II]      = 2;
    macierz_sasiedztw[OSOBOWICKA_CM_II]     [OSOBOWICKA_CM_I]       = 1;
    macierz_sasiedztw[OSOBOWICKA_CM_I]      [MOST_MILENIJNY]        = 2;
    macierz_sasiedztw[MOST_MILENIJNY]       [OSOBOWICE]             = 1;

    // 15 - PARK_POLUDNIOWY -> POSWIETNE
    macierz_sasiedztw[PARK_POLUDNIOWY]      [PULTUSKA]              = 1;
    macierz_sasiedztw[PULTUSKA]             [WEIGLA]                = 1;
    macierz_sasiedztw[WEIGLA]               [JAWOROWA]              = 2;
    macierz_sasiedztw[JAWOROWA]             [WISNIOWA]              = 1;
    macierz_sasiedztw[WISNIOWA]             [UNIWERSYTET_EKONOM]    = 2;
    macierz_sasiedztw[UNIWERSYTET_EKONOM]   [SANOCKA]               = 1;
    macierz_sasiedztw[SANOCKA]              [DWORZEC_AUTOBUSOWY]    = 3;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DWORZEC_GLOWNY_PKP]    = 1;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [FORUM_MUZYKI]          = 2;
    macierz_sasiedztw[FORUM_MUZYKI]         [RYNEK]                 = 3;
    macierz_sasiedztw[RYNEK]                [POMORSKA]              = 4;
    macierz_sasiedztw[POMORSKA]             [PLAC_SZTASZICA]        = 2;
    macierz_sasiedztw[PLAC_SZTASZICA]       [KLECZKOWSKA]           = 2;
    macierz_sasiedztw[KLECZKOWSKA]          [BALTYCKA]              = 3;
    macierz_sasiedztw[BALTYCKA]             [KAMIENSKIEGO]          = 3;
    macierz_sasiedztw[KAMIENSKIEGO]         [KEPISKA]              = 1;
    macierz_sasiedztw[KEPISKA]             [WROZAMET]              = 1;
    macierz_sasiedztw[WROZAMET]             [POSWIETNE]             = 1;

    // 15 - POSWIETNE -> PARK_POLUDNIOWY
    macierz_sasiedztw[POSWIETNE]            [WROZAMET]              = 1;
    macierz_sasiedztw[WROZAMET]             [KEPISKA]               = 1;
    macierz_sasiedztw[KEPISKA]              [KAMIENSKIEGO]          = 2;
    macierz_sasiedztw[KAMIENSKIEGO]         [BALTYCKA]              = 1;
    macierz_sasiedztw[BALTYCKA]             [KLECZKOWSKA]           = 3;
    macierz_sasiedztw[KLECZKOWSKA]          [PLAC_SZTASZICA]        = 3;
    macierz_sasiedztw[PLAC_SZTASZICA]       [POMORSKA]              = 2;
    macierz_sasiedztw[POMORSKA]             [RYNEK]                 = 4;
    macierz_sasiedztw[RYNEK]                [FORUM_MUZYKI]          = 2;
    macierz_sasiedztw[FORUM_MUZYKI]         [PLAC_LEGIONOW]         = 3;
    macierz_sasiedztw[PLAC_LEGIONOW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [DWORZEC_AUTOBUSOWY]    = 3;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DYREKCYJNA]            = 1;
    macierz_sasiedztw[DYREKCYJNA]           [SANOCKA]               = 2;
    macierz_sasiedztw[SANOCKA]              [UNIWERSYTET_EKONOM]    = 1;
    macierz_sasiedztw[UNIWERSYTET_EKONOM]   [WISNIOWA]              = 2;
    macierz_sasiedztw[WISNIOWA]             [JAWOROWA]              = 1;
    macierz_sasiedztw[JAWOROWA]             [WEIGLA]                = 2;
    macierz_sasiedztw[WEIGLA]               [PULTUSKA]              = 1;
    macierz_sasiedztw[PULTUSKA]             [PARK_POLUDNIOWY]       = 1;

    // 17 - SEPOLNO -> KLECINA
    macierz_sasiedztw[SEPOLNO]              [GODEBSKIEGO]           = 1;
    macierz_sasiedztw[GODEBSKIEGO]          [_9_MAJA]               = 1;
    macierz_sasiedztw[_9_MAJA]              [STADION_OLIMPIJSKI]    = 1;
    macierz_sasiedztw[STADION_OLIMPIJSKI]   [KALOWICZA]             = 1;
    macierz_sasiedztw[KALOWICZA]            [CHOPINA]               = 1;
    macierz_sasiedztw[CHOPINA]              [KOCHANOWSKIEGO]        = 2;
    macierz_sasiedztw[KOCHANOWSKIEGO]       [GRUNWALDZKA]           = 1;
    macierz_sasiedztw[GRUNWALDZKA]          [PIASTOWSKA]            = 1;
    macierz_sasiedztw[PIASTOWSKA]           [GORNICKIEGO]           = 1;
    macierz_sasiedztw[GORNICKIEGO]          [OGROD_BOTANICZNY]      = 1;
    macierz_sasiedztw[OGROD_BOTANICZNY]     [PLAC_BEMA]             = 3;
    macierz_sasiedztw[PLAC_BEMA]            [HALA_TARGOWA]          = 2;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [GALERIA_DOMINIKASKA]   = 1;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [PARK_STAROMIEJSKI]     = 2;
    macierz_sasiedztw[PARK_STAROMIEJSKI]    [OPERA]                 = 2;
    macierz_sasiedztw[OPERA]                [ARKADY_CAPITOL]        = 4;
    macierz_sasiedztw[ARKADY_CAPITOL]       [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [RONDO]                 = 2;
    macierz_sasiedztw[RONDO]                [SZTABOWA]              = 1;
    macierz_sasiedztw[SZTABOWA]             [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [JASTRZEBIA]            = 1;
    macierz_sasiedztw[JASTRZEBIA]           [ORLA]                  = 2;
    macierz_sasiedztw[ORLA]                 [KRZYKI]                = 2;
    macierz_sasiedztw[KRZYKI]               [RADIO_I_TELEWIZJA]     = 2;
    macierz_sasiedztw[RADIO_I_TELEWIZJA]    [PRZYJAZNI]             = 2;
    macierz_sasiedztw[PRZYJAZNI]            [BRATERSKA]             = 1;
    macierz_sasiedztw[BRATERSKA]            [SASIEDZKA]             = 1;
    macierz_sasiedztw[SASIEDZKA]            [KLECINA]               = 1;

    // 17 - KLECINA -> SEPOLNO
    macierz_sasiedztw[KLECINA]              [SASIEDZKA]             = 1;
    macierz_sasiedztw[SASIEDZKA]            [BRATERSKA]             = 1;
    macierz_sasiedztw[BRATERSKA]            [PRZYJAZNI]             = 1;
    macierz_sasiedztw[PRZYJAZNI]            [RADIO_I_TELEWIZJA]     = 2;
    macierz_sasiedztw[RADIO_I_TELEWIZJA]    [KRZYKI]                = 2;
    macierz_sasiedztw[KRZYKI]               [ORLA]                  = 2;
    macierz_sasiedztw[ORLA]                 [JASTRZEBIA]            = 1;
    macierz_sasiedztw[JASTRZEBIA]           [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [SZTABOWA]              = 2;
    macierz_sasiedztw[SZTABOWA]             [RONDO]                 = 1;
    macierz_sasiedztw[RONDO]                [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [RENOMA]                = 2;
    macierz_sasiedztw[RENOMA]               [OPERA]                 = 2;
    macierz_sasiedztw[OPERA]                [PARK_STAROMIEJSKI]     = 1;
    macierz_sasiedztw[PARK_STAROMIEJSKI]    [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [HALA_TARGOWA]          = 1;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_BEMA]             = 2;
    macierz_sasiedztw[PLAC_BEMA]            [OGROD_BOTANICZNY]      = 3;
    macierz_sasiedztw[OGROD_BOTANICZNY]     [GORNICKIEGO]           = 1;
    macierz_sasiedztw[GORNICKIEGO]          [PIASTOWSKA]            = 1;
    macierz_sasiedztw[PIASTOWSKA]           [GRUNWALDZKA]           = 1;
    macierz_sasiedztw[GRUNWALDZKA]          [KOCHANOWSKIEGO]        = 1;
    macierz_sasiedztw[KOCHANOWSKIEGO]       [CHOPINA]               = 2;
    macierz_sasiedztw[CHOPINA]              [KALOWICZA]             = 1;
    macierz_sasiedztw[KALOWICZA]            [STADION_OLIMPIJSKI]    = 1;
    macierz_sasiedztw[STADION_OLIMPIJSKI]   [_9_MAJA]               = 1;
    macierz_sasiedztw[_9_MAJA]              [GODEBSKIEGO]           = 1;
    macierz_sasiedztw[GODEBSKIEGO]          [SEPOLNO]               = 1;


    // 20 - OPOROW -> LESNICA
    macierz_sasiedztw[OPOROW]               [GRABISZYNSKA_CM_II]    = 1;
    macierz_sasiedztw[GRABISZYNSKA_CM_II]   [GRABISZYNSKA_CM_I]     = 1;
    macierz_sasiedztw[GRABISZYNSKA_CM_I]    [FIOLKOWA]              = 1;
    macierz_sasiedztw[FIOLKOWA]             [FAT]                   = 2;
    macierz_sasiedztw[FAT]                  [ALEJA_PRACY]           = 1;
    macierz_sasiedztw[ALEJA_PRACY]          [OJCA_BAYZEMA]          = 2;
    macierz_sasiedztw[OJCA_BAYZEMA]         [MIELECKA]              = 1;
    macierz_sasiedztw[MIELECKA]             [GAJOWICKA]             = 2;
    macierz_sasiedztw[GAJOWICKA]            [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [SZTABOWA]              = 2;
    macierz_sasiedztw[SZTABOWA]             [RONDO]                 = 1;
    macierz_sasiedztw[RONDO]                [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [RENOMA]                = 2;
    macierz_sasiedztw[RENOMA]               [FORUM_MUZYKI]          = 3;
    macierz_sasiedztw[FORUM_MUZYKI]         [RYNEK]                 = 3;
    macierz_sasiedztw[RYNEK]                [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [MLODYCH_TECHNIKOW]     = 2;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_STRZEGOMSKI]      = 1;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [KWISKA]                = 1;
    macierz_sasiedztw[KWISKA]               [DH_ASTRA]              = 2;
    macierz_sasiedztw[DH_ASTRA]             [PARK_ZACHODNI]         = 1;
    macierz_sasiedztw[PARK_ZACHODNI]        [BAJANA]                = 1;
    macierz_sasiedztw[BAJANA]               [METALOWCOW]            = 1;
    macierz_sasiedztw[METALOWCOW]           [PILCZYCE]              = 2;
    macierz_sasiedztw[PILCZYCE]             [STADION_MIEJSKI]       = 1;
    macierz_sasiedztw[STADION_MIEJSKI]      [GLINIANKI]             = 2;
    macierz_sasiedztw[GLINIANKI]            [KOSMONAUTOW_ZERNIKI]   = 1;
    macierz_sasiedztw[KOSMONAUTOW_ZERNIKI]  [GRABOWA]               = 1;
    macierz_sasiedztw[GRABOWA]              [KOSMONAUTOW_SZPITAL]   = 3;
    macierz_sasiedztw[KOSMONAUTOW_SZPITAL]  [KAMIENIOGORSKA]        = 1;
    macierz_sasiedztw[KAMIENIOGORSKA]       [ZLOTNICKA]             = 1;
    macierz_sasiedztw[ZLOTNICKA]            [WSCHOWSKA]             = 1;
    macierz_sasiedztw[WSCHOWSKA]            [JELENIOGORSKA]         = 1;
    macierz_sasiedztw[JELENIOGORSKA]        [LESNICA]               = 1;

    // 20 - LESNICA -> OPOROW
    macierz_sasiedztw[LESNICA]              [JELENIOGORSKA]         = 1;
    macierz_sasiedztw[JELENIOGORSKA]        [WSCHOWSKA]             = 1;
    macierz_sasiedztw[WSCHOWSKA]            [ZLOTNICKA]             = 1;
    macierz_sasiedztw[ZLOTNICKA]            [KAMIENIOGORSKA]        = 1;
    macierz_sasiedztw[KAMIENIOGORSKA]       [KOSMONAUTOW_SZPITAL]   = 1;
    macierz_sasiedztw[KOSMONAUTOW_SZPITAL]  [GRABOWA]               = 2;
    macierz_sasiedztw[GRABOWA]              [KOSMONAUTOW_ZERNIKI]   = 1;
    macierz_sasiedztw[KOSMONAUTOW_ZERNIKI]  [GLINIANKI]             = 1;
    macierz_sasiedztw[GLINIANKI]            [STADION_MIEJSKI]       = 1;
    macierz_sasiedztw[STADION_MIEJSKI]      [PILCZYCE]              = 3;
    macierz_sasiedztw[PILCZYCE]             [METALOWCOW]            = 1;
    macierz_sasiedztw[METALOWCOW]           [BAJANA]                = 1;
    macierz_sasiedztw[BAJANA]               [PARK_ZACHODNI]         = 1;
    macierz_sasiedztw[PARK_ZACHODNI]        [DH_ASTRA]              = 1;
    macierz_sasiedztw[DH_ASTRA]             [KWISKA]                = 2;
    macierz_sasiedztw[KWISKA]               [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [PLAC_STRZEGOMSKI]      = 2;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [MLODYCH_TECHNIKOW]     = 1;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [RYNEK]                 = 2;
    macierz_sasiedztw[RYNEK]                [FORUM_MUZYKI]          = 2;
    macierz_sasiedztw[FORUM_MUZYKI]         [RENOMA]                = 2;
    macierz_sasiedztw[RENOMA]               [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [RONDO]                 = 2;
    macierz_sasiedztw[RONDO]                [SZTABOWA]              = 1;
    macierz_sasiedztw[SZTABOWA]             [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [GAJOWICKA]             = 2;
    macierz_sasiedztw[GAJOWICKA]            [MIELECKA]              = 2;
    macierz_sasiedztw[MIELECKA]             [OJCA_BAYZEMA]          = 2;
    macierz_sasiedztw[OJCA_BAYZEMA]         [ALEJA_PRACY]           = 1;
    macierz_sasiedztw[ALEJA_PRACY]          [FAT]                   = 2;
    macierz_sasiedztw[FAT]                  [FIOLKOWA]              = 2;
    macierz_sasiedztw[FIOLKOWA]             [GRABISZYNSKA_CM_I]     = 2;
    macierz_sasiedztw[GRABISZYNSKA_CM_I]    [GRABISZYNSKA_CM_II]    = 1;
    macierz_sasiedztw[GRABISZYNSKA_CM_II]   [OPOROW]                = 1;


    // 23 - KROMERA -> WROCLAWSKI_PARK_PRZEMYSLOWY
    macierz_sasiedztw[KROMERA]              [MOSTY_WARSZAWSKIE]     = 2;
    macierz_sasiedztw[MOSTY_WARSZAWSKIE]    [DASZYNSKIEGO]          = 1;
    macierz_sasiedztw[DASZYNSKIEGO]         [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [JEDNOSCI_NARODOWEJ]    = 1;
    macierz_sasiedztw[JEDNOSCI_NARODOWEJ]   [NA_SZANCACH]           = 1;
    macierz_sasiedztw[NA_SZANCACH]          [PLAC_BEMA]             = 2;
    macierz_sasiedztw[PLAC_BEMA]            [HALA_TARGOWA]          = 2;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [GALERIA_DOMINIKASKA]   = 1;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [SWIDNICKA]             = 2;
    macierz_sasiedztw[SWIDNICKA]            [RYNEK]                 = 3;
    macierz_sasiedztw[RYNEK]                [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [MLODYCH_TECHNIKOW]     = 2;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_STRZEGOMSKI]      = 1;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [DOLMED]                = 2;
    macierz_sasiedztw[DOLMED]               [SRUBOWA]               = 1;
    macierz_sasiedztw[SRUBOWA]              [WROCLAWSKI_PARK_PRZEM] = 2;

    // 23 - WROCLAWSKI_PARK_PRZEMYSLOWY -> KROMERA
    macierz_sasiedztw[WROCLAWSKI_PARK_PRZEM][SRUBOWA]               = 2;
    macierz_sasiedztw[SRUBOWA]              [DOLMED]                = 1;
    macierz_sasiedztw[DOLMED]               [PLAC_STRZEGOMSKI]      = 2;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [MLODYCH_TECHNIKOW]     = 1;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [RYNEK]                 = 2;
    macierz_sasiedztw[RYNEK]                [SWIDNICKA]             = 3;
    macierz_sasiedztw[SWIDNICKA]            [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [PLAC_NOWY_TARG]        = 1;
    macierz_sasiedztw[PLAC_NOWY_TARG]       [HALA_TARGOWA]          = 1;
    macierz_sasiedztw[HALA_TARGOWA]         [PLAC_BEMA]             = 3;
    macierz_sasiedztw[PLAC_BEMA]            [NA_SZANCACH]           = 1;
    macierz_sasiedztw[NA_SZANCACH]          [JEDNOSCI_NARODOWEJ]    = 1;
    macierz_sasiedztw[JEDNOSCI_NARODOWEJ]   [NOWOWIEJSKA]           = 2;
    macierz_sasiedztw[NOWOWIEJSKA]          [DASZYNSKIEGO]          = 1;
    macierz_sasiedztw[DASZYNSKIEGO]         [MOSTY_WARSZAWSKIE]     = 1;
    macierz_sasiedztw[MOSTY_WARSZAWSKIE]    [KROMERA]               = 3;

    // 24 - FAT -> OSOBOWICE
    macierz_sasiedztw[FAT]                  [ALEJA_PRACY]           = 1;
    macierz_sasiedztw[ALEJA_PRACY]          [OJCA_BAYZEMA]          = 2;
    macierz_sasiedztw[OJCA_BAYZEMA]         [MIELECKA]              = 1;
    macierz_sasiedztw[MIELECKA]             [GAJOWICKA]             = 2;
    macierz_sasiedztw[GAJOWICKA]            [HALLERA]               = 1;
    macierz_sasiedztw[HALLERA]              [SZTABOWA]              = 2;
    macierz_sasiedztw[SZTABOWA]             [RONDO]                 = 1;
    macierz_sasiedztw[RONDO]                [WIELKA]                = 1;
    macierz_sasiedztw[WIELKA]               [HOTEL_WROCLAW]         = 2;
    macierz_sasiedztw[HOTEL_WROCLAW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [RENOMA]                = 2;
    macierz_sasiedztw[RENOMA]               [FORUM_MUZYKI]          = 2;
    macierz_sasiedztw[FORUM_MUZYKI]         [RYNEK]                 = 3;
    macierz_sasiedztw[RYNEK]                [POMORSKA]              = 4;
    macierz_sasiedztw[POMORSKA]             [PLAC_SZTASZICA]        = 2;
    macierz_sasiedztw[PLAC_SZTASZICA]       [KLECZKOWSKA]           = 2;
    macierz_sasiedztw[KLECZKOWSKA]          [MOST_OSOBOWICKI]       = 2;
    macierz_sasiedztw[MOST_OSOBOWICKI]      [SERBSKA]               = 1;
    macierz_sasiedztw[SERBSKA]              [OSOBOWICKA_CM_II]      = 2;
    macierz_sasiedztw[OSOBOWICKA_CM_II]     [OSOBOWICKA_CM_I]       = 1;
    macierz_sasiedztw[OSOBOWICKA_CM_I]      [MOST_MILENIJNY]        = 2;
    macierz_sasiedztw[MOST_MILENIJNY]       [OSOBOWICE]             = 1;

    // 24 - OSOBOWICE -> FAT
    macierz_sasiedztw[OSOBOWICE]            [MOST_MILENIJNY]        = 1;
    macierz_sasiedztw[MOST_MILENIJNY]       [OSOBOWICKA_CM_I]       = 1;
    macierz_sasiedztw[OSOBOWICKA_CM_I]      [OSOBOWICKA_CM_II]      = 1;
    macierz_sasiedztw[OSOBOWICKA_CM_II]     [SERBSKA]               = 2;
    macierz_sasiedztw[SERBSKA]              [MOST_OSOBOWICKI]       = 1;
    macierz_sasiedztw[MOST_OSOBOWICKI]      [KLECZKOWSKA]           = 2;
    macierz_sasiedztw[KLECZKOWSKA]          [PLAC_SZTASZICA]        = 3;
    macierz_sasiedztw[PLAC_SZTASZICA]       [POMORSKA]              = 2;
    macierz_sasiedztw[POMORSKA]             [DMOWSKIEGO]            = 2;
    macierz_sasiedztw[DMOWSKIEGO]           [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [PLAC_ORLAT_LWOWSKICH]  = 2;
    macierz_sasiedztw[PLAC_ORLAT_LWOWSKICH] [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [GRABISZYNSKA]          = 2;
    macierz_sasiedztw[GRABISZYNSKA]         [PERECA]                = 2;
    macierz_sasiedztw[PERECA]               [STALOWA]               = 1;
    macierz_sasiedztw[STALOWA]              [FADROMA]               = 1;
    macierz_sasiedztw[FADROMA]              [BZOWA]                 = 1;
    macierz_sasiedztw[BZOWA]                [HUTMEN]                = 1;
    macierz_sasiedztw[HUTMEN]               [FAT]                   = 3;

    // 31 - STADION_MIEJSKI -> GAJ
    macierz_sasiedztw[STADION_MIEJSKI]      [GORNICZA]              = 2;
    macierz_sasiedztw[GORNICZA]             [MODRA]                 = 1;
    macierz_sasiedztw[MODRA]                [PILCZYCKA]             = 1;
    macierz_sasiedztw[PILCZYCKA]            [KOLISTA]               = 1;
    macierz_sasiedztw[KOLISTA]              [KWISKA]                = 3;
    macierz_sasiedztw[KWISKA]               [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [PLAC_STRZEGOMSKI]      = 2;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [MLODYCH_TECHNIKOW]     = 1;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [PLAC_ORLAT_LWOWSKICH]  = 2;
    macierz_sasiedztw[PLAC_ORLAT_LWOWSKICH] [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [DWORZEC_AUTOBUSOWY]    = 3;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DYREKCYJNA]            = 1;
    macierz_sasiedztw[DYREKCYJNA]           [JOANNITOW]             = 1;
    macierz_sasiedztw[JOANNITOW]            [GAJOWA]                = 1;
    macierz_sasiedztw[GAJOWA]               [PRUDNICKA]             = 2;
    macierz_sasiedztw[PRUDNICKA]            [KAMIENNA]              = 1;
    macierz_sasiedztw[KAMIENNA]             [BARDZKA]               = 1;
    macierz_sasiedztw[BARDZKA]              [KRYNICKA]              = 1;
    macierz_sasiedztw[KRYNICKA]             [GAJ_PETLA]             = 1;
    macierz_sasiedztw[GAJ_PETLA]            [SWIERADOWSKA]          = 1;
    macierz_sasiedztw[SWIERADOWSKA]         [GAJ]                   = 1;

    // 31 - GAJ -> STADION MIEJSKI
    macierz_sasiedztw[GAJ]                  [SWIERADOWSKA]          = 1;
    macierz_sasiedztw[SWIERADOWSKA]         [MORWOWA]               = 1;
    macierz_sasiedztw[MORWOWA]              [KRYNICKA]              = 1;
    macierz_sasiedztw[KRYNICKA]             [BARDZKA]               = 1;
    macierz_sasiedztw[BARDZKA]              [KAMIENNA]              = 1;
    macierz_sasiedztw[KAMIENNA]             [PRUDNICKA]             = 1;
    macierz_sasiedztw[PRUDNICKA]            [GAJOWA]                = 1;
    macierz_sasiedztw[GAJOWA]               [DYREKCYJNA]            = 1;
    macierz_sasiedztw[DYREKCYJNA]           [DWORZEC_AUTOBUSOWY]    = 2;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DWORZEC_GLOWNY_PKP]    = 1;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [PLAC_ORLAT_LWOWSKICH]  = 2;
    macierz_sasiedztw[PLAC_ORLAT_LWOWSKICH] [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [MLODYCH_TECHNIKOW]     = 2;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_STRZEGOMSKI]      = 1;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [KWISKA]                = 1;
    macierz_sasiedztw[KWISKA]               [KOLISTA]               = 4;
    macierz_sasiedztw[KOLISTA]              [PILCZYCKA]             = 1;
    macierz_sasiedztw[PILCZYCKA]            [MODRA]                 = 1;
    macierz_sasiedztw[MODRA]                [GORNICZA]              = 1;
    macierz_sasiedztw[GORNICZA]             [STADION_MIEJSKI]       = 2;

    // 32 - DOKERSKA -> GAJ
    macierz_sasiedztw[DOKERSKA]             [KOZANOWSKA]            = 1;
    macierz_sasiedztw[KOZANOWSKA]           [MODRA]                 = 1;
    macierz_sasiedztw[MODRA]                [PILCZYCKA]             = 1;
    macierz_sasiedztw[PILCZYCKA]            [KOLISTA]               = 1;
    macierz_sasiedztw[KOLISTA]              [KWISKA]                = 3;
    macierz_sasiedztw[KWISKA]               [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [NIEDZWIDZIA]           = 1;
    macierz_sasiedztw[NIEDZWIDZIA]          [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [PLAC_STRZEGOMSKI]      = 2;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [MLODYCH_TECHNIKOW]     = 1;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [PLAC_ORLAT_LWOWSKICH]  = 2;
    macierz_sasiedztw[PLAC_ORLAT_LWOWSKICH] [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [DWORZEC_AUTOBUSOWY]    = 3;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DYREKCYJNA]            = 1;
    macierz_sasiedztw[DYREKCYJNA]           [JOANNITOW]             = 1;
    macierz_sasiedztw[JOANNITOW]            [GAJOWA]                = 1;
    macierz_sasiedztw[GAJOWA]               [PRUDNICKA]             = 2;
    macierz_sasiedztw[PRUDNICKA]            [KAMIENNA]              = 1;
    macierz_sasiedztw[KAMIENNA]             [BARDZKA]               = 1;
    macierz_sasiedztw[BARDZKA]              [KRYNICKA]              = 1;
    macierz_sasiedztw[KRYNICKA]             [GAJ_PETLA]             = 1;
    macierz_sasiedztw[GAJ_PETLA]            [SWIERADOWSKA]          = 1;
    macierz_sasiedztw[SWIERADOWSKA]         [GAJ]                   = 1;

    // 32 - GAJ -> DOKERSKA
    macierz_sasiedztw[GAJ]                  [SWIERADOWSKA]          = 1;
    macierz_sasiedztw[SWIERADOWSKA]         [MORWOWA]               = 1;
    macierz_sasiedztw[MORWOWA]              [KRYNICKA]              = 1;
    macierz_sasiedztw[KRYNICKA]             [BARDZKA]               = 1;
    macierz_sasiedztw[BARDZKA]              [KAMIENNA]              = 1;
    macierz_sasiedztw[KAMIENNA]             [PRUDNICKA]             = 1;
    macierz_sasiedztw[PRUDNICKA]            [GAJOWA]                = 1;
    macierz_sasiedztw[GAJOWA]               [DYREKCYJNA]            = 1;
    macierz_sasiedztw[DYREKCYJNA]           [DWORZEC_AUTOBUSOWY]    = 2;
    macierz_sasiedztw[DWORZEC_AUTOBUSOWY]   [DWORZEC_GLOWNY_PKP]    = 1;
    macierz_sasiedztw[DWORZEC_GLOWNY_PKP]   [ARKADY_CAPITOL]        = 2;
    macierz_sasiedztw[ARKADY_CAPITOL]       [PLAC_LEGIONOW]         = 2;
    macierz_sasiedztw[PLAC_LEGIONOW]        [PLAC_ORLAT_LWOWSKICH]  = 2;
    macierz_sasiedztw[PLAC_ORLAT_LWOWSKICH] [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [MLODYCH_TECHNIKOW]     = 2;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_STRZEGOMSKI]      = 1;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [KWISKA]                = 1;
    macierz_sasiedztw[KWISKA]               [KOLISTA]               = 4;
    macierz_sasiedztw[KOLISTA]              [PILCZYCKA]             = 1;
    macierz_sasiedztw[PILCZYCKA]            [MODRA]                 = 1;
    macierz_sasiedztw[MODRA]                [KOZANOWSKA]            = 1;
    macierz_sasiedztw[KOZANOWSKA]           [DOKERSKA]              = 1;

    // 33 - PILCZYCE -> STADION_OLIMPIJSKI
    macierz_sasiedztw[PILCZYCE]             [METALOWCOW]            = 1;
    macierz_sasiedztw[METALOWCOW]           [BAJANA]                = 1;
    macierz_sasiedztw[BAJANA]               [PARK_ZACHODNI]         = 1;
    macierz_sasiedztw[PARK_ZACHODNI]        [DH_ASTRA]              = 1;
    macierz_sasiedztw[DH_ASTRA]             [KWISKA]                = 2;
    macierz_sasiedztw[KWISKA]               [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [PLAC_STRZEGOMSKI]      = 2;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [MLODYCH_TECHNIKOW]     = 1;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [RYNEK]                 = 2;
    macierz_sasiedztw[RYNEK]                [SWIDNICKA]             = 3;
    macierz_sasiedztw[SWIDNICKA]            [GALERIA_DOMINIKASKA]   = 2;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [URZAD_WOJEWODZKI]      = 3;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [MOST_GRUNWALDZKI]      = 1;
    macierz_sasiedztw[MOST_GRUNWALDZKI]     [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [BUJWIDA]               = 2;
    macierz_sasiedztw[BUJWIDA]              [KOCHANOWSKIEGO]        = 3;
    macierz_sasiedztw[KOCHANOWSKIEGO]       [CHOPINA]               = 1;
    macierz_sasiedztw[CHOPINA]              [KALOWICZA]             = 1;
    macierz_sasiedztw[KALOWICZA]            [STADION_OLIMPIJSKI]    = 1;

    // 33 - STADION_OLIMPIJSKI -> PILCZYCE
    macierz_sasiedztw[STADION_OLIMPIJSKI]   [KALOWICZA]             = 1;
    macierz_sasiedztw[KALOWICZA]            [CHOPINA]               = 1;
    macierz_sasiedztw[CHOPINA]              [KOCHANOWSKIEGO]        = 2;
    macierz_sasiedztw[KOCHANOWSKIEGO]       [BUJWIDA]               = 2;
    macierz_sasiedztw[BUJWIDA]              [PLAC_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[PLAC_GRUNWALDZKI]     [MOST_GRUNWALDZKI]      = 2;
    macierz_sasiedztw[MOST_GRUNWALDZKI]     [URZAD_WOJEWODZKI]      = 1;
    macierz_sasiedztw[URZAD_WOJEWODZKI]     [GALERIA_DOMINIKASKA]   = 3;
    macierz_sasiedztw[GALERIA_DOMINIKASKA]  [SWIDNICKA]             = 2;
    macierz_sasiedztw[SWIDNICKA]            [RYNEK]                 = 3;
    macierz_sasiedztw[RYNEK]                [PLAC_JANA_PAWLA_II]    = 2;
    macierz_sasiedztw[PLAC_JANA_PAWLA_II]   [MLODYCH_TECHNIKOW]     = 2;
    macierz_sasiedztw[MLODYCH_TECHNIKOW]    [PLAC_STRZEGOMSKI]      = 1;
    macierz_sasiedztw[PLAC_STRZEGOMSKI]     [ZACHODNIA]             = 2;
    macierz_sasiedztw[ZACHODNIA]            [NIEDZWIDZIA]           = 2;
    macierz_sasiedztw[NIEDZWIDZIA]          [MALOPANEWSKA]          = 1;
    macierz_sasiedztw[MALOPANEWSKA]         [KWISKA]                = 1;
    macierz_sasiedztw[KWISKA]               [DH_ASTRA]              = 2;
    macierz_sasiedztw[DH_ASTRA]             [PARK_ZACHODNI]         = 1;
    macierz_sasiedztw[PARK_ZACHODNI]        [BAJANA]                = 1;
    macierz_sasiedztw[BAJANA]               [METALOWCOW]            = 1;
    macierz_sasiedztw[METALOWCOW]           [PILCZYCE]              = 2;
}
