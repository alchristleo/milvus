// Copyright (C) 2019-2020 Zilliz. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied. See the License for the specific language governing permissions and limitations under the License

#pragma once

#include <string>

namespace milvus {
namespace knowhere {

/* used in 0.7.0 */
enum class OldIndexType {
    INVALID = 0,
    FAISS_IDMAP = 1,
    FAISS_IVFFLAT_CPU,
    FAISS_IVFFLAT_GPU,
    FAISS_IVFFLAT_MIX,  // build on gpu and search on cpu
    FAISS_IVFPQ_CPU,
    FAISS_IVFPQ_GPU,
    SPTAG_KDT_RNT_CPU,
    FAISS_IVFSQ8_MIX,
    FAISS_IVFSQ8_CPU,
    FAISS_IVFSQ8_GPU,
    FAISS_IVFSQ8_HYBRID,  // only support build on gpu.
    NSG_MIX,
    FAISS_IVFPQ_MIX,
    SPTAG_BKT_RNT_CPU,
    HNSW,
    ANNOY,
    FAISS_BIN_IDMAP = 100,
    FAISS_BIN_IVFLAT_CPU = 101,
};

using IndexType = std::string;

/* used in 0.8.0 */
namespace IndexEnum {
constexpr const char* INVALID = "";
constexpr const char* INDEX_FAISS_IDMAP = "IDMAP";
constexpr const char* INDEX_FAISS_IVFFLAT = "IVF_FLAT";
constexpr const char* INDEX_FAISS_IVFPQ = "IVF_PQ";
constexpr const char* INDEX_FAISS_IVFSQ8 = "IVF_SQ8";
constexpr const char* INDEX_FAISS_IVFSQ8H = "IVF_SQ8_HYBRID";
constexpr const char* INDEX_FAISS_BIN_IDMAP = "BIN_IDMAP";
constexpr const char* INDEX_FAISS_BIN_IVFFLAT = "BIN_IVF_FLAT";
constexpr const char* INDEX_NSG = "NSG";
constexpr const char* INDEX_SPTAG_KDT_RNT = "SPTAG_KDT_RNT";
constexpr const char* INDEX_SPTAG_BKT_RNT = "SPTAG_BKT_RNT";
constexpr const char* INDEX_HNSW = "HNSW";
constexpr const char* INDEX_ANNOY = "ANNOY";
}  // namespace IndexEnum

enum class IndexMode { MODE_CPU = 0, MODE_GPU = 1 };

extern std::string
OldIndexTypeToStr(const int32_t type);

extern int32_t
StrToOldIndexType(const std::string& str);
}  // namespace knowhere
}  // namespace milvus
