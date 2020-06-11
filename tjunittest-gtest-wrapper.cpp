/*
 * Copyright 2020 The Chromium Authors. All Rights Reserved.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

#include <gtest/gtest.h>

extern "C" int testBmp(int yuv, int noyuvpad, int autoalloc);
extern "C" int testThreeByte444(int yuv, int noyuvpad, int autoalloc);
extern "C" int testFourByte444(int yuv, int noyuvpad, int autoalloc);
extern "C" int testThreeByte422(int yuv, int noyuvpad, int autoalloc);
extern "C" int testFourByte422(int yuv, int noyuvpad, int autoalloc);
extern "C" int testThreeByte420(int yuv, int noyuvpad, int autoalloc);
extern "C" int testFourByte420(int yuv, int noyuvpad, int autoalloc);
extern "C" int testThreeByte440(int yuv, int noyuvpad, int autoalloc);
extern "C" int testFourByte440(int yuv, int noyuvpad, int autoalloc);
extern "C" int testThreeByte411(int yuv, int noyuvpad, int autoalloc);
extern "C" int testFourByte411(int yuv, int noyuvpad, int autoalloc);
extern "C" int testOnlyGray(int yuv, int noyuvpad, int autoalloc);
extern "C" int testThreeByteGray(int yuv, int noyuvpad, int autoalloc);
extern "C" int testFourByteGray(int yuv, int noyuvpad, int autoalloc);
extern "C" int testBufSize(int yuv, int noyuvpad, int autoalloc);
extern "C" int testYUVOnlyRGB444(int noyuvpad, int autoalloc);
extern "C" int testYUVOnlyRGB422(int noyuvpad, int autoalloc);
extern "C" int testYUVOnlyRGB420(int noyuvpad, int autoalloc);
extern "C" int testYUVOnlyRGB440(int noyuvpad, int autoalloc);
extern "C" int testYUVOnlyRGB411(int noyuvpad, int autoalloc);
extern "C" int testYUVOnlyRGBGray(int noyuvpad, int autoalloc);
extern "C" int testYUVOnlyGrayGray(int noyuvpad, int autoalloc);

const int YUV = 1;
const int NO_YUV = 0;
const int NO_YUV_PAD = 1;
const int YUV_PAD = 0;
const int AUTO_ALLOC = 1;
const int NO_AUTO_ALLOC = 0;

class TJUnitTestBMP : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestBMP, TestBMP) {
  EXPECT_EQ(testBmp(std::get<0>(GetParam()),
                    std::get<1>(GetParam()),
                    std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        BMPTests,
        TJUnitTestBMP,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestThreeByte444 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestThreeByte444, TestThreeByte444) {
  EXPECT_EQ(testThreeByte444(std::get<0>(GetParam()),
                             std::get<1>(GetParam()),
                             std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        ThreeByte444Tests,
        TJUnitTestThreeByte444,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestFourByte444 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestFourByte444, TestFourByte444) {
  EXPECT_EQ(testFourByte444(std::get<0>(GetParam()),
                            std::get<1>(GetParam()),
                            std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        FourByte444Tests,
        TJUnitTestFourByte444,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestThreeByte422 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestThreeByte422, TestThreeByte422) {
  EXPECT_EQ(testThreeByte422(std::get<0>(GetParam()),
                             std::get<1>(GetParam()),
                             std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        ThreeByte422Tests,
        TJUnitTestThreeByte422,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestFourByte422 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestFourByte422, TestFourByte422) {
  EXPECT_EQ(testFourByte422(std::get<0>(GetParam()),
                            std::get<1>(GetParam()),
                            std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        FourByte422Tests,
        TJUnitTestFourByte422,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestThreeByte420 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestThreeByte420, TestThreeByte420) {
  EXPECT_EQ(testThreeByte420(std::get<0>(GetParam()),
                             std::get<1>(GetParam()),
                             std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        ThreeByte420Tests,
        TJUnitTestThreeByte420,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestFourByte420 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestFourByte420, TestFourByte420) {
  EXPECT_EQ(testFourByte420(std::get<0>(GetParam()),
                            std::get<1>(GetParam()),
                            std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        FourByte420Tests,
        TJUnitTestFourByte420,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestThreeByte440 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestThreeByte440, TestThreeByte440) {
  EXPECT_EQ(testThreeByte440(std::get<0>(GetParam()),
                             std::get<1>(GetParam()),
                             std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        ThreeByte440Tests,
        TJUnitTestThreeByte440,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestFourByte440 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestFourByte440, TestFourByte440) {
  EXPECT_EQ(testFourByte440(std::get<0>(GetParam()),
                            std::get<1>(GetParam()),
                            std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        FourByte440Tests,
        TJUnitTestFourByte440,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestThreeByte411 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestThreeByte411, TestThreeByte411) {
  EXPECT_EQ(testThreeByte411(std::get<0>(GetParam()),
                             std::get<1>(GetParam()),
                             std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        ThreeByte411Tests,
        TJUnitTestThreeByte411,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestFourByte411 : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestFourByte411, TestFourByte411) {
  EXPECT_EQ(testFourByte411(std::get<0>(GetParam()),
                            std::get<1>(GetParam()),
                            std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        FourByte411Tests,
        TJUnitTestFourByte411,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestOnlyGray : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestOnlyGray, TestOnlyGray) {
  EXPECT_EQ(testOnlyGray(std::get<0>(GetParam()),
                         std::get<1>(GetParam()),
                         std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        OnlyGrayTests,
        TJUnitTestOnlyGray,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestThreeByteGray : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestThreeByteGray, TestThreeByteGray) {
  EXPECT_EQ(testThreeByteGray(std::get<0>(GetParam()),
                              std::get<1>(GetParam()),
                              std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        ThreeByteGrayTests,
        TJUnitTestThreeByteGray,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestFourByteGray : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestFourByteGray, TestFourByteGray) {
  EXPECT_EQ(testFourByteGray(std::get<0>(GetParam()),
                             std::get<1>(GetParam()),
                             std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        FourByteGrayTests,
        TJUnitTestFourByteGray,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestBufSize : public
  ::testing::TestWithParam<std::tuple<int, int, int>> {};

TEST_P(TJUnitTestBufSize, TestBufSize) {
  EXPECT_EQ(testBufSize(std::get<0>(GetParam()),
                        std::get<1>(GetParam()),
                        std::get<2>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        BufSizeTests,
        TJUnitTestBufSize,
        ::testing::Values(std::make_tuple(NO_YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV, NO_YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV, NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestYUVOnlyRGB444 : public
  ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(TJUnitTestYUVOnlyRGB444, TestYUVOnlyRGB444) {
  EXPECT_EQ(testYUVOnlyRGB444(std::get<0>(GetParam()),
                              std::get<1>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        YUVOnlyRGB444Tests,
        TJUnitTestYUVOnlyRGB444,
        ::testing::Values(std::make_tuple(YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestYUVOnlyRGB422 : public
  ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(TJUnitTestYUVOnlyRGB422, TestYUVOnlyRGB422) {
  EXPECT_EQ(testYUVOnlyRGB422(std::get<0>(GetParam()),
                              std::get<1>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        YUVOnlyRGB422Tests,
        TJUnitTestYUVOnlyRGB422,
        ::testing::Values(std::make_tuple(YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestYUVOnlyRGB420 : public
  ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(TJUnitTestYUVOnlyRGB420, TestYUVOnlyRGB420) {
  EXPECT_EQ(testYUVOnlyRGB420(std::get<0>(GetParam()),
                              std::get<1>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        YUVOnlyRGB420Tests,
        TJUnitTestYUVOnlyRGB420,
        ::testing::Values(std::make_tuple(YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestYUVOnlyRGB440 : public
  ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(TJUnitTestYUVOnlyRGB440, TestYUVOnlyRGB440) {
  EXPECT_EQ(testYUVOnlyRGB440(std::get<0>(GetParam()),
                              std::get<1>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        YUVOnlyRGB440Tests,
        TJUnitTestYUVOnlyRGB440,
        ::testing::Values(std::make_tuple(YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestYUVOnlyRGB411 : public
  ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(TJUnitTestYUVOnlyRGB411, TestYUVOnlyRGB411) {
  EXPECT_EQ(testYUVOnlyRGB411(std::get<0>(GetParam()),
                              std::get<1>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        YUVOnlyRGB411Tests,
        TJUnitTestYUVOnlyRGB411,
        ::testing::Values(std::make_tuple(YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestYUVOnlyRGBGray : public
  ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(TJUnitTestYUVOnlyRGBGray, TestYUVOnlyRGBGray) {
  EXPECT_EQ(testYUVOnlyRGBGray(std::get<0>(GetParam()),
                               std::get<1>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        YUVOnlyRGBGrayTests,
        TJUnitTestYUVOnlyRGBGray,
        ::testing::Values(std::make_tuple(YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, AUTO_ALLOC)));

class TJUnitTestYUVOnlyGrayGray : public
  ::testing::TestWithParam<std::tuple<int, int>> {};

TEST_P(TJUnitTestYUVOnlyGrayGray, TestYUVOnlyGrayGray) {
  EXPECT_EQ(testYUVOnlyGrayGray(std::get<0>(GetParam()),
                                std::get<1>(GetParam())), 0);
}

INSTANTIATE_TEST_SUITE_P(
        YUVOnlyGrayGrayTests,
        TJUnitTestYUVOnlyGrayGray,
        ::testing::Values(std::make_tuple(YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(YUV_PAD, AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, NO_AUTO_ALLOC),
                          std::make_tuple(NO_YUV_PAD, AUTO_ALLOC)));
