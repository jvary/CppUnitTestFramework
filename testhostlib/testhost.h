//------------------------------------------------------------------------
// Initial code by Kretikus Roman, released on MIT license
// Copyright (c) 2025
//    https://github.com/Kretikus/CppUnitTestFrameworkWrapper
//
// This file is under the MIT License (MIT).
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// ==========================================================================
// Additional work by Julien Vary for Genetec, Inc.
//------------------------------------------------------------------------

// --------------------------------------------------------------------------
#define EXPORT __attribute__((visibility("default")))
#define EXPORTC extern "C" EXPORT

extern "C"
{
    typedef void (*OnLoadedTestSo)(void *pContext, const char* soName, const char* extraData);
    typedef void (*OnUnloadedTestSo)(void *pContext, const char* soName);
}

EXPORTC int cutf_testhostmain(int argc, char* argv[]);
EXPORTC void cutf_register_onload_callback(void *pContext, OnLoadedTestSo pfCallback);
EXPORTC void cutf_register_onunload_callback(void *pContext, OnUnloadedTestSo pfCallback );
