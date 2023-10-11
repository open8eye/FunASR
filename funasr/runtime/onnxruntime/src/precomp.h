#pragma once 
// system 
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <deque>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iterator>
#include <list>
#include <locale.h>
#include <vector>
#include <string>
#include <math.h>
#include <numeric>
#include <cstring>

#ifdef _WIN32
#include<io.h>
#ifndef R_OK
#define R_OK 4
#endif
#ifndef W_OK
#define W_OK 2
#endif
#ifndef X_OK
#define X_OK 0 
#endif
#ifndef F_OK
#define F_OK 0
#endif
#define access _access
#else
#include <unistd.h>
#endif

using namespace std;
// third part
#if defined(__APPLE__)
#include <onnxruntime/onnxruntime_cxx_api.h>
#else
#include "onnxruntime_run_options_config_keys.h"
#include "onnxruntime_cxx_api.h"
#include "itn-model.h"
#include "itn-processor.h"
#endif

#include "kaldi-native-fbank/csrc/feature-fbank.h"
#include "kaldi-native-fbank/csrc/online-feature.h"

// mine
#include <glog/logging.h>


#include "common-struct.h"
#include "com-define.h"
#include "commonfunc.h"
#include "predefine-coe.h"
#include "model.h"
#include "vad-model.h"
#include "punc-model.h"
#include "tokenizer.h"
#include "ct-transformer.h"
#include "ct-transformer-online.h"
#include "e2e-vad.h"
#include "fsmn-vad.h"
#include "encode_converter.h"
#include "vocab.h"
#include "audio.h"
#include "fsmn-vad-online.h"
#include "tensor.h"
#include "util.h"
#include "seg_dict.h"
#include "resample.h"
#include "paraformer.h"
#include "paraformer-online.h"
#include "offline-stream.h"
#include "tpass-stream.h"
#include "tpass-online-stream.h"
#include "funasrruntime.h"
