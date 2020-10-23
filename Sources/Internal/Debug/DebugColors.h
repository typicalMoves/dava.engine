#pragma once

#include "Base/BaseTypes.h"

namespace DAVA
{
static const uint32 CIEDE2000_COLORS_COUNT = 256;

//This colors have a enough color-difference to distinguish between.
//Color-difference calculated using color-distance metric,
//defined by International Commission on Illumination (CIE) in the year 2000.
static const uint32 CIEDE2000Colors[CIEDE2000_COLORS_COUNT] = {
    0xff00973b, 0xff00ffff, 0xffffe61c, 0xffff34ff, 0xff464aff, 0xff418900, 0xffa66f00, 0xff5900a3,
    0xffe5dbff, 0xff00497a, 0xffa60000, 0xffacff63, 0xff6297b7, 0xff434d00, 0xffffb08f, 0xff877d99,
    0xff07005a, 0xff939680, 0xffe6fffe, 0xff00441b, 0xff01c64f, 0xffff5d3b, 0xff533b4a, 0xff802fff,
    0xff5a6161, 0xff0009ba, 0xff00796b, 0xffa0c200, 0xff92aaff, 0xffc990ff, 0xffaa03b9, 0xff0061d1,
    0xffffefdd, 0xff350000, 0xff4b4f7b, 0xff99c2a1, 0xff180030, 0xffd8a60a, 0xff493301, 0xff6f8400,
    0xff012137, 0xff00b5ff, 0xffedffc2, 0xffbf79a0, 0xff4407cc, 0xffb2b9c0, 0xff99ffc2, 0xff091e00,
    0xff9c4800, 0xff62006f, 0xff66bd0c, 0xffffc3ee, 0xff756d45, 0xff687bb7, 0xffa1877a, 0xff668d78,
    0xff785588, 0xff9fd0fa, 0xff9a8aff, 0xffa057d1, 0xff59c4be, 0xff486645, 0xffed8600, 0xff4c6f88,
    0xff2d3634, 0xffbda8b4, 0xffaaa600, 0xff2c2c45, 0xff756363, 0xffc9c8a3, 0xff3f91ff, 0xff818a93,
    0xff295357, 0xffcffe00, 0xff6f5bb0, 0xffffd08c, 0xff663dd8, 0xff57f704, 0xffa1a1c8, 0xff006e1e,
    0xffd70079, 0xff0075a7, 0xffa96763, 0xff3758a0, 0xff2c006b, 0xff002677, 0xffff90d7, 0xff00979b,
    0xff799e54, 0xff9ff6ff, 0xff251620, 0xff8f4172, 0xffff23bc, 0xffc0ad99, 0xff65243a, 0xff292392,
    0xff34455b, 0xffdce8fd, 0xff554e40, 0xffa38900, 0xff987ecb, 0xff04e8a4, 0xff724e32, 0xff4c3a6a,
    0xff58ab83, 0xff1e1c00, 0xffcef7d1, 0xff284b00, 0xfff6d0c8, 0xff89a4a3, 0xff666c80, 0xff002822,
    0xff5056bf, 0xff0030e8, 0xff6d7966, 0xff7c00da, 0xff591aff, 0xffb4db8a, 0xff00021e, 0xff514e5b,
    0xffc595c8, 0xff330032, 0xff3268ff, 0xffd3e166, 0xffaccdcf, 0xff94acd0, 0xff79d37e, 0xff582c01,
    0xffff7b7a, 0xff018ed6, 0xff393335, 0xffa1af78, 0xffc6b2fe, 0xff7c7975, 0xff937383, 0xff4d3a94,
    0xfffff4b5, 0xffd5dcd2, 0xffbd5695, 0xff4a716a, 0xff251300, 0xff5f5202, 0xfff7a30a, 0xff7681e9,
    0xffddd5db, 0xffd1bc5e, 0xff444f3d, 0xff05647e, 0xff4e6802, 0xff752b96, 0xff46858d, 0xffc59596,
    0xffce73e7, 0xff786ad8, 0xffbe893e, 0xff4e83ca, 0xff878a51, 0xff3c115b, 0xff3b8155, 0xffc404e7,
    0xff5f0000, 0xff9973a9, 0xff60814b, 0xff8a7359, 0xffa75dff, 0xffbfc9f7, 0xff273164, 0xff013a51,
    0xffaa946b, 0xff58a051, 0xff025ba4, 0xff02171d, 0xff2700e2, 0xff63abe7, 0xff01604c, 0xff66699c,
    0xff7b5464, 0xff9e9797, 0xff666a00, 0xff061439, 0xff49d7f4, 0xffd24500, 0xff316c00, 0xffd0b6dd,
    0xff71657c, 0xffa4b29f, 0xff91d800, 0xff8aa015, 0xffe965bc, 0xfffeffff, 0xff99dcc6, 0xff3c3b20,
    0xff901167, 0xff643a6b, 0xffffe1f5, 0xfff2a0ff, 0xff35aacc, 0xff274537, 0xff00b48b, 0xff687879,
    0xff5a00c6, 0xff0a003b, 0xff4062c8, 0xff7c6029, 0xff342340, 0xff445a7d, 0xff7cb8cc, 0xff8381b8,
    0xff9951aa, 0xffc3d6b5, 0xff6984a3, 0xfff0949f, 0xff7145a7, 0xffa694b8, 0xff8cbb71, 0xff33b400,
    0xffc99e78, 0xffba806d, 0xff003f95, 0xff03ff5e, 0xfffcffe4, 0xff77e11b, 0xffe5b1bc, 0xff2f9176,
    0xff093100, 0xffcd6000, 0xff9600d2, 0xff635589, 0xff1d2029, 0xff13325b, 0xff426fa7, 0xff2e4189,
    0xff2a3a1a, 0xff5a4b49, 0xff858ca8, 0xffaaabf4, 0xffabf3a3, 0xffc8c600, 0xff668bea, 0xff9f8a95,
    0xffd2c9bd, 0xff64a09f, 0xff0047be, 0xff888165, 0xff85a483, 0xff233c45, 0xff5d6747, 0xff003f3a,
    0xff031206, 0xff71fbdf, 0xff7e8e86, 0xff58d098, 0xff7d8f6c, 0xffc2bfd7, 0xff6e3e3c, 0xff000000
};
}