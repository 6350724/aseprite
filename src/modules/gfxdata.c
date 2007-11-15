/* ase -- allegro-sprite-editor: the ultimate sprites factory
 * Copyright (C) 2001-2005, 2007  David A. Capello
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

typedef struct DATA
{
  char w, h;         /* width and height of the bitmap */
  const char *line;  /* scanline data */
} DATA;

static DATA gfx_data[GFX_BITMAP_COUNT] =
{
  /* GFX_LINKFRAME */
  { 8, 8,
    "########"
    "#......#"
    "#.###..#"
    "#.##...#"
    "#.#.#..#"
    "#....#.#"
    "#......#"
    "########" },
  /* GFX_KEYFRAME */
  { 4, 5,
    " ## "
    "#  #"
    "#  #"
    "#  #"
    " ## " },
  /* GFX_ANI_FIRST */
  { 8, 8,
    " ##   # "
    " ##  ## "
    " ## ### "
    " ###### "
    " ## ### "
    " ##  ## "
    " ##   # "
    "        " },
  /* GFX_ANI_PREV */
  { 8, 8,
    "   # ## "
    "  ## ## "
    " ### ## "
    "#### ## "
    " ### ## "
    "  ## ## "
    "   # ## "
    "        " },
  /* GFX_ANI_PLAY */
  { 8, 8,
    "  #     "
    "  ##    "
    "  ###   "
    "  ####  "
    "  ###   "
    "  ##    "
    "  #     "
    "        " },
  /* GFX_ANI_NEXT */
  { 8, 8,
    " ## #   "
    " ## ##  "
    " ## ### "
    " ## ####"
    " ## ### "
    " ## ##  "
    " ## #   "
    "        " },
  /* GFX_ANI_LAST */
  { 8, 8,
    " #    ##"
    " ##   ##"
    " ###  ##"
    " #### ##"
    " ###  ##"
    " ##   ##"
    " #    ##"
    "        " },
  /* GFX_TOOL_MARKER */
  { 8, 8,
    "## ## ##"
    "#      #"
    "        "
    "#      #"
    "#      #"
    "        "
    "#      #"
    "## ## ##" },
  /* GFX_TOOL_DOTS */
  { 8, 8,
    "    #   "
    "  #   # "
    "        "
    " #      "
    "        "
    " #      "
    "        "
    "  #     " },
  /* GFX_TOOL_PENCIL */
  { 8, 8,
    "        "
    "    ### "
    "   # ## "
    "  # ### "
    " # ###  "
    " ####   "
    "# ##    "
    "##      " },
  /* GFX_TOOL_BRUSH */
  { 8, 8,
    "###     "
    "  ###   "
    "    ##  "
    "     ## "
    "      # "
    "       #"
    "     ###"
    "   #### " },
  /* GFX_TOOL_FLOODFILL */
  { 8, 8,
    "        "
    " #####  "
    "#     # "
    "# ## ## "
    "# ##### "
    "#### ## "
    "####### "
    " #####  " },
  /* GFX_TOOL_SPRAY */
  { 8, 8,
    "#       "
    " #   #  "
    "# # ### "
    " # #   #"
    "#  ### #"
    "   ### #"
    "   ### #"
    "   #####" },
  /* GFX_TOOL_LINE */
  { 8, 8,
    "       #"
    "      ##"
    "     ## "
    "    ##  "
    "   ##   "
    "  ##    "
    " ##     "
    "##      " },
  /* GFX_TOOL_RECTANGLE */
  { 8, 8,
    "########"
    "#      #"
    "#      #"
    "#      #"
    "#      #"
    "#      #"
    "########"
    "        " },
  /* GFX_TOOL_ELLIPSE */
  { 8, 8,
    "  ####  "
    " #    # "
    "#      #"
    "#      #"
    "#      #"
    " #    # "
    "  ####  "
    "        " },
  /* GFX_TOOL_CONFIGURATION */
  { 8, 8,
    "  # #   "
    "  # #   "
    "### ### "
    "        "
    "### ### "
    "  # #   "
    "  # #   "
    "        " },
  /* GFX_TARGET_ONE */
  { 32, 16,
    "                                "
    "                                "
    "                                "
    "                                "
    "      ###################       "
    "      #                 #       "
    "      #                 #       "
    "      #                 #       "
    "      #                 #       "
    "      #                 #       "
    "      ###################       "
    "                                "
    "                                "
    "                                "
    "                                "
    "                                " },
  /* GFX_TARGET_FRAMES */
  { 32, 16,
    "                                "
    "                                "
    "                                "
    "                                "
    "      ###################       "
    "      #       #  #      #       "
    "      #    #####  #     #       "
    "      #    ######  #    #       "
    "      #    #####  #     #       "
    "      #       #  #      #       "
    "      ###################       "
    "                                "
    "                                "
    "                                "
    "                                "
    "                                " },
  /* GFX_TARGET_LAYERS */
  { 32, 16,
    "                                "
    "   ###################          "
    "   #                 #          "
    "   #                 #          "
    "   #                 ####       "
    "   #                 #  #       "
    "   #                 #  ####    "
    "   ###################  #  #    "
    "      #                 #  #    "
    "      #                 #  #    "
    "      ###################  #    "
    "         #                 #    "
    "         #                 #    "
    "         ###################    "
    "                                "
    "                                " },
  /* GFX_TARGET_FRAMES_LAYERS */
  { 32, 16,
    "                                "
    "   ###################          "
    "   #       #  #      #          "
    "   #    #####  #     #          "
    "   #    ######  #    ####       "
    "   #    #####  #     #  #       "
    "   #       #  #      #  ####    "
    "   ###################  #  #    "
    "      #                 #  #    "
    "      #                 #  #    "
    "      ###################  #    "
    "         #                 #    "
    "         #                 #    "
    "         ###################    "
    "                                "
    "                                " },
  /* GFX_FILE_HOME */
  { 7, 9,
    "   #   "
    "  # #  "
    " #   # "
    "#######"
    "#     #"
    "# ### #"
    "# # # #"
    "# # # #"
    "#######" },
  /* GFX_FILE_FONTS */
  { 7, 9,
    "       "
    "#######"
    "#######"
    "# ### #"
    "  ###  "
    "  ###  "
    "  ###  "
    "  ###  "
    " ##### " },
  /* GFX_FILE_PALETTES */
  { 7, 9,
    "       "
    "###### "
    "#######"
    "##   ##"
    "##   ##"
    "#######"
    "###### "
    "##     "
    "##     " },
  /* GFX_FILE_MKDIR */
  { 7, 9,
    "       "
    " ###   "
    "#   ###"
    "#     #"
    "#     #"
    "#     #"
    "#     #"
    "#     #"
    "#######" },
  /* GFX_BRUSH_CIRCLE */
  { 7, 7,
    "  ###  "
    " ##### "
    "#######"
    "#######"
    "#######"
    " ##### "
    "  ###  " },
  /* GFX_BRUSH_SQUARE */
  { 7, 7,
    "#######"
    "#######"
    "#######"
    "#######"
    "#######"
    "#######"
    "#######" },
  /* GFX_BRUSH_LINE */
  { 6, 6,
    "#     "
    " #    "
    "  #   "
    "   #  "
    "    # "
    "     #" },
  /* GFX_DRAWMODE_OPAQUE */
  { 7, 7,
    "##     "
    "###    "
    " ###   "
    "  ###  "
    "   ### "
    "    ###"
    "     ##" },
  /* GFX_DRAWMODE_GLASS */
  { 7, 7,
    "##     "
    "###  .."
    " ##%..."
    "  %%%. "
    " ..%%# "
    "....###"
    "..   ##" },
  /* GFX_DRAWMODE_SEMI */
  { 8, 6,
    " # #    "
    "# # #   "
    " # # #  "
    "  # # # "
    "   # # #"
    "    # # " },
  /* GFX_SCALE_1 */
  { 11, 11,
    "##         "
    "#.##       "
    " #..##     "
    " #....#    "
    "  #..##    "
    "  #.#.#    "
    "   ###.#   "
    "      #.#  "
    "       #.# "
    "        #.#"
    "         ##" },
  /* GFX_SCALE_2 */
  { 7, 12,
    "   #   "
    "  #.#  "
    "  #.#  "
    " #...# "
    " #...# "
    "#.....#"
    "###.###"
    "  #.#  "
    "  #.#  "
    "  #.#  "
    "  #.#  "
    "   #   " },
  /* GFX_SCALE_3 */
  { 12, 7,
    "     ##     "
    "   ##.#     "
    " ##...##### "
    "#..........#"
    " ##...##### "
    "   ##.#     "
    "     ##     " },
  /* GFX_ROTATE_1 */
  { 11, 11,
    "      ##   "
    "   ####.## "
    "  #.......#"
    " #..###.## "
    " #.#  ##   "
    " #.#       "
    "##.##      "
    "#...#      "
    " #.#       "
    " #.#       "
    "  #        " },
  /* GFX_ROTATE_2 */
  { 15, 10,
    "      ###      "
    "     #...#     "
    "  # #.###.# #  "
    "  ##.#   #.##  "
    " #..#     #..# "
    " #..##   ##..# "
    "#.##       ##.#"
    "##           ##"
    "               "
    "               " },
  /* GFX_ROTATE_3 */
  { 10, 15,
    "      ##  "
    "    ##.#  "
    "  ##..#   "
    "   #..#   "
    "  #.##    "
    " #.# #    "
    "#.#       "
    "#.#       "
    "#.#       "
    " #.# #    "
    "  #.##    "
    "   #..#   "
    "  ##..#   "
    "    ##.#  "
    "      ##  " },
};
