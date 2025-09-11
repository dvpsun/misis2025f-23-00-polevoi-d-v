
#pragma once
#ifndef MISIS2025S_3_SEMCV
#define MISIS2025S_3_SEMCV

#include <filesystem>
#include <string>
#include <vector>

#include <opencv2/core/mat.hpp>



std::string strid_from_mat(const cv::Mat& img, const int n = 4);

std::vector<std::filesystem::path> get_list_of_file_paths(const std::filesystem::path& path_lst);

cv::Mat gen_tgtimg00(const int lev0, const int lev1, const int lev2);

#endif