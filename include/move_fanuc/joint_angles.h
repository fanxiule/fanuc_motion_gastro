#include <move_fanuc/move_fanuc.h>
#include <math.h>

#ifndef JOINT_ANGLE_H
#define JOINT_ANGLE_H

std::vector<double> homing = {0, 0, 0, 0, 0, 0};

std::vector<double> clean_pan_away = {121.622419 * M_PI / 180, 10.351567 * M_PI / 180,
                                      -52.118777 * M_PI / 180, 62.344109 * M_PI / 180,
                                      -103.630656 * M_PI / 180, 31.936237 * M_PI / 180};

std::vector<double> take_clean_pan = {114.968872 * M_PI / 180, 18.678274 * M_PI / 180,
                                      -37.759511 * M_PI / 180, 67.134660 * M_PI / 180,
                                      -104.314617 * M_PI / 180, 35.497098 * M_PI / 180};

std::vector<double> sauce_dis_avoid_colli = {78.358491 * M_PI / 180, 0.612198 * M_PI / 180,
                                             -50.496943 * M_PI / 180, 78.950614 * M_PI / 180,
                                             -91.641420 * M_PI / 180, -32.901714 * M_PI / 180};

std::vector<double> sauce_dis_away = {38.992566 * M_PI / 180, -8.288363 * M_PI / 180,
                                      -49.019916 * M_PI / 180, 94.038939 * M_PI / 180,
                                      -80.737617 * M_PI / 180, 63.567683 * M_PI / 180};

std::vector<double> get_sauce = {48.815700 * M_PI / 180, 28.390052 * M_PI / 180,
                                 -33.350227 * M_PI / 180, 88.795225 * M_PI / 180,
                                 -91.439847 * M_PI / 180, 42.631606 * M_PI / 180};

std::vector<double> pan_1_above = {25.260676 * M_PI / 180, 50.134657 * M_PI / 180,
                                   13.220125 * M_PI / 180, 88.797131 * M_PI / 180,
                                   -91.439711 * M_PI / 180, 64.602859 * M_PI / 180};

std::vector<double> pan_1_stove = {25.253147 * M_PI / 180, 50.617135 * M_PI / 180,
                                   5.606243 * M_PI / 180, 88.795389 * M_PI / 180,
                                   -91.441002 * M_PI / 180, 48.580304 * M_PI / 180};

std::vector<double> pan_1_away = {25.255890 * M_PI / 180, 26.484077 * M_PI / 180,
                                  -33.253071 * M_PI / 180, 88.793368 * M_PI / 180,
                                  -91.901841 * M_PI / 180, 39.380327 * M_PI / 180};

std::vector<double> pan_2_above = {1.566151 * M_PI / 180, 48.722232 * M_PI / 180,
                                   15.780172 * M_PI / 180, 88.791981 * M_PI / 180,
                                   -91.440558 * M_PI / 180, 64.237048 * M_PI / 180};

std::vector<double> pan_2_stove = {1.564881 * M_PI / 180, 52.078335 * M_PI / 180,
                                   8.970320 * M_PI / 180, 88.795622 * M_PI / 180,
                                   -91.442190 * M_PI / 180, 52.138953 * M_PI / 180};

std::vector<double> pan_2_away = {1.567774 * M_PI / 180, 33.359658 * M_PI / 180,
                                  -22.623741 * M_PI / 180, 88.797671 * M_PI / 180,
                                  -91.436453 * M_PI / 180, 41.422765 * M_PI / 180};

std::vector<double> pan_3_above = {-29.064323 * M_PI / 180, 65.599999 * M_PI / 180,
                                   46.922083 * M_PI / 180, 97.241984 * M_PI / 180,
                                   -63.069441 * M_PI / 180, 78.773159 * M_PI / 180};

std::vector<double> pan_3_stove = {-29.063804 * M_PI / 180, 79.094567 * M_PI / 180,
                                   59.633200 * M_PI / 180, 97.240618 * M_PI / 180,
                                   -63.070759 * M_PI / 180, 74.092280 * M_PI / 180};

std::vector<double> pan_3_away = {-37.305127 * M_PI / 180, 45.337990 * M_PI / 180,
                                  -0.177134 * M_PI / 180, 116.223824 * M_PI / 180,
                                  -65.258079 * M_PI / 180, 51.032807 * M_PI / 180};

std::vector<double> serve_interim = {69.478201 * M_PI / 180, -41.839898 * M_PI / 180,
                                     -12.764022 * M_PI / 180, 91.966120 * M_PI / 180,
                                     -90.833559 * M_PI / 180, 131.136053 * M_PI / 180};

std::vector<double> serve_station = {166.919100 * M_PI / 180, 27.211037 * M_PI / 180,
                                     -12.321043 * M_PI / 180, 87.835891 * M_PI / 180,
                                     -90.379829 * M_PI / 180, 57.067914 * M_PI / 180};

std::vector<double> serve_dish = {166.918950 * M_PI / 180, 24.097893 * M_PI / 180,
                                  19.387299 * M_PI / 180, 5.848084 * M_PI / 180,
                                  -90.379297 * M_PI / 180, 89.482923 * M_PI / 180};

std::vector<double> dirty_pan_away = {148.915964 * M_PI / 180, 38.562025 * M_PI / 180,
                                      -5.479263 * M_PI / 180, 60.158974 * M_PI / 180,
                                      -115.842658 * M_PI / 180, 45.464406 * M_PI / 180};

std::vector<double> drop_dirty_pan = {143.232728 * M_PI / 180, 49.226768 * M_PI / 180,
                                      10.437226 * M_PI / 180, 61.959098 * M_PI / 180,
                                      -115.286544 * M_PI / 180, 47.870450 * M_PI / 180};

std::vector<double> boiler_above_1 = {-42.578549 * M_PI / 180, 19.614329 * M_PI / 180,
                                      33.595392 * M_PI / 180, -0.979346 * M_PI / 180,
                                      -18.495314 * M_PI / 180, 1.050732 * M_PI / 180};

std::vector<double> boiler_above_2 = {-42.578549 * M_PI / 180, 19.614329 * M_PI / 180,
                                      33.595392 * M_PI / 180, -0.979346 * M_PI / 180,
                                      -18.995314 * M_PI / 180, 1.050732 * M_PI / 180}; //basically a duplicate of boiler_above_1
                                                                                       //to prevent error occurs when take pasta motion is required after putting pasta into boiler

std::vector<double> boiler_dump_pasta = {-42.578549 * M_PI / 180, 25.614329 * M_PI / 180,
                                         50.595392 * M_PI / 180, -0.979346 * M_PI / 180,
                                         -50.495314 * M_PI / 180, 1.050732 * M_PI / 180};

std::vector<double> boiler_take_pasta = {-42.583654 * M_PI / 180, 11.105878 * M_PI / 180,
                                         14.270558 * M_PI / 180, -0.978890 * M_PI / 180,
                                         -10.728018 * M_PI / 180, 1.050746 * M_PI / 180};

std::vector<double> pan_3_above_dump_pasta = {-14.433966 * M_PI / 180, 17.010349 * M_PI / 180,
                                              18.591261 * M_PI / 180, -0.979713 * M_PI / 180,
                                              -10.450058 * M_PI / 180, 1.046516 * M_PI / 180};

std::vector<double> pan_3_dump_pasta = {-6.424767 * M_PI / 180, 17.011138 * M_PI / 180,
                                        18.590814 * M_PI / 180, 63.476466 * M_PI / 180,
                                        -10.450371 * M_PI / 180, 1.046379 * M_PI / 180};

std::vector<double> boiler_away = {-35.066768 * M_PI / 180, -37.878931 * M_PI / 180,
                                   -36.528774 * M_PI / 180, 0.346747 * M_PI / 180,
                                   -1.227590 * M_PI / 180, -1.740399 * M_PI / 180};

std::vector<double> pasta_1_away = {-51.800769 * M_PI / 180, -6.124550 * M_PI / 180,
                                    -49.022255 * M_PI / 180, -49.535342 * M_PI / 180,
                                    42.658052 * M_PI / 180, 34.896748 * M_PI / 180};

std::vector<double> pasta_1_get_pasta = {-62.048382 * M_PI / 180, 31.985527 * M_PI / 180,
                                         -7.978740 * M_PI / 180, -47.735410 * M_PI / 180,
                                         42.646315 * M_PI / 180, 34.896478 * M_PI / 180};

std::vector<double> pasta_2_away = {-66.853461 * M_PI / 180, -6.125826 * M_PI / 180,
                                    -51.313610 * M_PI / 180, -45.853710 * M_PI / 180,
                                    48.046942 * M_PI / 180, 31.791163 * M_PI / 180};

std::vector<double> pasta_2_get_pasta = {-73.434164 * M_PI / 180, 23.807374 * M_PI / 180,
                                         -20.395527 * M_PI / 180, -46.213343 * M_PI / 180,
                                         47.392022 * M_PI / 180, 31.115173 * M_PI / 180};

std::vector<double> pasta_3_away = {-84.521972 * M_PI / 180, -7.076103 * M_PI / 180,
                                    -52.738759 * M_PI / 180, -45.858481 * M_PI / 180,
                                    46.917799 * M_PI / 180, 31.791204 * M_PI / 180};

std::vector<double> pasta_3_get_pasta = {-91.410976 * M_PI / 180, 31.270676 * M_PI / 180,
                                         -11.467696 * M_PI / 180, -45.858481 * M_PI / 180,
                                         46.914848 * M_PI / 180, 31.789418 * M_PI / 180};
#endif
