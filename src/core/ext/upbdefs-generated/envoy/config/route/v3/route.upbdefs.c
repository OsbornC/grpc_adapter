/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/config/route/v3/route.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include "upb/def.h"
#include "envoy/config/route/v3/route.upbdefs.h"
#include "envoy/config/route/v3/route.upb.h"

extern _upb_DefPool_Init envoy_config_core_v3_base_proto_upbdefinit;
extern _upb_DefPool_Init envoy_config_core_v3_config_source_proto_upbdefinit;
extern _upb_DefPool_Init envoy_config_core_v3_extension_proto_upbdefinit;
extern _upb_DefPool_Init envoy_config_route_v3_route_components_proto_upbdefinit;
extern _upb_DefPool_Init google_protobuf_wrappers_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_status_proto_upbdefinit;
extern _upb_DefPool_Init udpa_annotations_versioning_proto_upbdefinit;
extern _upb_DefPool_Init validate_validate_proto_upbdefinit;
static const char descriptor[1851] = {'\n', '!', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'r', 'o', 'u', 't', 'e', '/', 'v', '3', '/', 'r', 
'o', 'u', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\022', '\025', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 
'r', 'o', 'u', 't', 'e', '.', 'v', '3', '\032', '\037', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 
'r', 'e', '/', 'v', '3', '/', 'b', 'a', 's', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '(', 'e', 'n', 'v', 'o', 'y', '/', 'c', 
'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 'r', 'e', '/', 'v', '3', '/', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 'o', 'u', 'r', 
'c', 'e', '.', 'p', 'r', 'o', 't', 'o', '\032', '$', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'c', 'o', 
'r', 'e', '/', 'v', '3', '/', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', '.', 'p', 'r', 'o', 't', 'o', '\032', ',', 'e', 'n', 
'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'r', 'o', 'u', 't', 'e', '/', 'v', '3', '/', 'r', 'o', 'u', 't', 'e', 
'_', 'c', 'o', 'm', 'p', 'o', 'n', 'e', 'n', 't', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', '\036', 'g', 'o', 'o', 'g', 'l', 'e', 
'/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 's', '.', 'p', 'r', 'o', 't', 'o', '\032', 
'\035', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 's', 't', 'a', 't', 'u', 's', '.', 
'p', 'r', 'o', 't', 'o', '\032', '!', 'u', 'd', 'p', 'a', '/', 'a', 'n', 'n', 'o', 't', 'a', 't', 'i', 'o', 'n', 's', '/', 'v', 
'e', 'r', 's', 'i', 'o', 'n', 'i', 'n', 'g', '.', 'p', 'r', 'o', 't', 'o', '\032', '\027', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', 
'/', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '.', 'p', 'r', 'o', 't', 'o', '\"', '\335', '\010', '\n', '\022', 'R', 'o', 'u', 't', 'e', 
'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 't', 'i', 'o', 'n', '\022', '\022', '\n', '\004', 'n', 'a', 'm', 'e', '\030', '\001', ' ', '\001', 
'(', '\t', 'R', '\004', 'n', 'a', 'm', 'e', '\022', 'G', '\n', '\r', 'v', 'i', 'r', 't', 'u', 'a', 'l', '_', 'h', 'o', 's', 't', 's', 
'\030', '\002', ' ', '\003', '(', '\013', '2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'o', 'u', 
't', 'e', '.', 'v', '3', '.', 'V', 'i', 'r', 't', 'u', 'a', 'l', 'H', 'o', 's', 't', 'R', '\014', 'v', 'i', 'r', 't', 'u', 'a', 
'l', 'H', 'o', 's', 't', 's', '\022', '/', '\n', '\004', 'v', 'h', 'd', 's', '\030', '\t', ' ', '\001', '(', '\013', '2', '\033', '.', 'e', 'n', 
'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'o', 'u', 't', 'e', '.', 'v', '3', '.', 'V', 'h', 'd', 's', 'R', 
'\004', 'v', 'h', 'd', 's', '\022', 'D', '\n', '\025', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', '_', 'o', 'n', 'l', 'y', '_', 'h', 'e', 
'a', 'd', 'e', 'r', 's', '\030', '\003', ' ', '\003', '(', '\t', 'B', '\020', '\372', 'B', '\r', '\222', '\001', '\n', '\"', '\010', 'r', '\006', '\300', '\001', 
'\001', '\310', '\001', '\000', 'R', '\023', 'i', 'n', 't', 'e', 'r', 'n', 'a', 'l', 'O', 'n', 'l', 'y', 'H', 'e', 'a', 'd', 'e', 'r', 's', 
'\022', 'i', '\n', '\027', 'r', 'e', 's', 'p', 'o', 'n', 's', 'e', '_', 'h', 'e', 'a', 'd', 'e', 'r', 's', '_', 't', 'o', '_', 'a', 
'd', 'd', '\030', '\004', ' ', '\003', '(', '\013', '2', '\'', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 
'o', 'r', 'e', '.', 'v', '3', '.', 'H', 'e', 'a', 'd', 'e', 'r', 'V', 'a', 'l', 'u', 'e', 'O', 'p', 't', 'i', 'o', 'n', 'B', 
'\t', '\372', 'B', '\006', '\222', '\001', '\003', '\020', '\350', '\007', 'R', '\024', 'r', 'e', 's', 'p', 'o', 'n', 's', 'e', 'H', 'e', 'a', 'd', 'e', 
'r', 's', 'T', 'o', 'A', 'd', 'd', '\022', 'M', '\n', '\032', 'r', 'e', 's', 'p', 'o', 'n', 's', 'e', '_', 'h', 'e', 'a', 'd', 'e', 
'r', 's', '_', 't', 'o', '_', 'r', 'e', 'm', 'o', 'v', 'e', '\030', '\005', ' ', '\003', '(', '\t', 'B', '\020', '\372', 'B', '\r', '\222', '\001', 
'\n', '\"', '\010', 'r', '\006', '\300', '\001', '\001', '\310', '\001', '\000', 'R', '\027', 'r', 'e', 's', 'p', 'o', 'n', 's', 'e', 'H', 'e', 'a', 'd', 
'e', 'r', 's', 'T', 'o', 'R', 'e', 'm', 'o', 'v', 'e', '\022', 'g', '\n', '\026', 'r', 'e', 'q', 'u', 'e', 's', 't', '_', 'h', 'e', 
'a', 'd', 'e', 'r', 's', '_', 't', 'o', '_', 'a', 'd', 'd', '\030', '\006', ' ', '\003', '(', '\013', '2', '\'', '.', 'e', 'n', 'v', 'o', 
'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'H', 'e', 'a', 'd', 'e', 'r', 'V', 'a', 
'l', 'u', 'e', 'O', 'p', 't', 'i', 'o', 'n', 'B', '\t', '\372', 'B', '\006', '\222', '\001', '\003', '\020', '\350', '\007', 'R', '\023', 'r', 'e', 'q', 
'u', 'e', 's', 't', 'H', 'e', 'a', 'd', 'e', 'r', 's', 'T', 'o', 'A', 'd', 'd', '\022', 'K', '\n', '\031', 'r', 'e', 'q', 'u', 'e', 
's', 't', '_', 'h', 'e', 'a', 'd', 'e', 'r', 's', '_', 't', 'o', '_', 'r', 'e', 'm', 'o', 'v', 'e', '\030', '\010', ' ', '\003', '(', 
'\t', 'B', '\020', '\372', 'B', '\r', '\222', '\001', '\n', '\"', '\010', 'r', '\006', '\300', '\001', '\001', '\310', '\001', '\000', 'R', '\026', 'r', 'e', 'q', 'u', 
'e', 's', 't', 'H', 'e', 'a', 'd', 'e', 'r', 's', 'T', 'o', 'R', 'e', 'm', 'o', 'v', 'e', '\022', 'L', '\n', '#', 'm', 'o', 's', 
't', '_', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'c', '_', 'h', 'e', 'a', 'd', 'e', 'r', '_', 'm', 'u', 't', 'a', 't', 'i', 'o', 
'n', 's', '_', 'w', 'i', 'n', 's', '\030', '\n', ' ', '\001', '(', '\010', 'R', '\037', 'm', 'o', 's', 't', 'S', 'p', 'e', 'c', 'i', 'f', 
'i', 'c', 'H', 'e', 'a', 'd', 'e', 'r', 'M', 'u', 't', 'a', 't', 'i', 'o', 'n', 's', 'W', 'i', 'n', 's', '\022', 'G', '\n', '\021', 
'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', '_', 'c', 'l', 'u', 's', 't', 'e', 'r', 's', '\030', '\007', ' ', '\001', '(', '\013', '2', '\032', 
'.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'B', 'o', 'o', 'l', 'V', 'a', 'l', 'u', 
'e', 'R', '\020', 'v', 'a', 'l', 'i', 'd', 'a', 't', 'e', 'C', 'l', 'u', 's', 't', 'e', 'r', 's', '\022', 'i', '\n', '#', 'm', 'a', 
'x', '_', 'd', 'i', 'r', 'e', 'c', 't', '_', 'r', 'e', 's', 'p', 'o', 'n', 's', 'e', '_', 'b', 'o', 'd', 'y', '_', 's', 'i', 
'z', 'e', '_', 'b', 'y', 't', 'e', 's', '\030', '\013', ' ', '\001', '(', '\013', '2', '\034', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 
'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', 'R', '\036', 'm', 'a', 'x', 'D', 
'i', 'r', 'e', 'c', 't', 'R', 'e', 's', 'p', 'o', 'n', 's', 'e', 'B', 'o', 'd', 'y', 'S', 'i', 'z', 'e', 'B', 'y', 't', 'e', 
's', '\022', 'i', '\n', '\031', 'c', 'l', 'u', 's', 't', 'e', 'r', '_', 's', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 'r', '_', 'p', 'l', 
'u', 'g', 'i', 'n', 's', '\030', '\014', ' ', '\003', '(', '\013', '2', '-', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 
'g', '.', 'r', 'o', 'u', 't', 'e', '.', 'v', '3', '.', 'C', 'l', 'u', 's', 't', 'e', 'r', 'S', 'p', 'e', 'c', 'i', 'f', 'i', 
'e', 'r', 'P', 'l', 'u', 'g', 'i', 'n', 'R', '\027', 'c', 'l', 'u', 's', 't', 'e', 'r', 'S', 'p', 'e', 'c', 'i', 'f', 'i', 'e', 
'r', 'P', 'l', 'u', 'g', 'i', 'n', 's', '\022', 'n', '\n', '\027', 'r', 'e', 'q', 'u', 'e', 's', 't', '_', 'm', 'i', 'r', 'r', 'o', 
'r', '_', 'p', 'o', 'l', 'i', 'c', 'i', 'e', 's', '\030', '\r', ' ', '\003', '(', '\013', '2', '6', '.', 'e', 'n', 'v', 'o', 'y', '.', 
'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'o', 'u', 't', 'e', '.', 'v', '3', '.', 'R', 'o', 'u', 't', 'e', 'A', 'c', 't', 'i', 
'o', 'n', '.', 'R', 'e', 'q', 'u', 'e', 's', 't', 'M', 'i', 'r', 'r', 'o', 'r', 'P', 'o', 'l', 'i', 'c', 'y', 'R', '\025', 'r', 
'e', 'q', 'u', 'e', 's', 't', 'M', 'i', 'r', 'r', 'o', 'r', 'P', 'o', 'l', 'i', 'c', 'i', 'e', 's', ':', '&', '\232', '\305', '\210', 
'\036', '!', '\n', '\037', 'e', 'n', 'v', 'o', 'y', '.', 'a', 'p', 'i', '.', 'v', '2', '.', 'R', 'o', 'u', 't', 'e', 'C', 'o', 'n', 
'f', 'i', 'g', 'u', 'r', 'a', 't', 'i', 'o', 'n', '\"', '\203', '\001', '\n', '\026', 'C', 'l', 'u', 's', 't', 'e', 'r', 'S', 'p', 'e', 
'c', 'i', 'f', 'i', 'e', 'r', 'P', 'l', 'u', 'g', 'i', 'n', '\022', 'H', '\n', '\t', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 
'\030', '\001', ' ', '\001', '(', '\013', '2', '*', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 
'e', '.', 'v', '3', '.', 'T', 'y', 'p', 'e', 'd', 'E', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', 'C', 'o', 'n', 'f', 'i', 'g', 
'R', '\t', 'e', 'x', 't', 'e', 'n', 's', 'i', 'o', 'n', '\022', '\037', '\n', '\013', 'i', 's', '_', 'o', 'p', 't', 'i', 'o', 'n', 'a', 
'l', '\030', '\002', ' ', '\001', '(', '\010', 'R', '\n', 'i', 's', 'O', 'p', 't', 'i', 'o', 'n', 'a', 'l', '\"', 's', '\n', '\004', 'V', 'h', 
'd', 's', '\022', 'Q', '\n', '\r', 'c', 'o', 'n', 'f', 'i', 'g', '_', 's', 'o', 'u', 'r', 'c', 'e', '\030', '\001', ' ', '\001', '(', '\013', 
'2', '\"', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'c', 'o', 'r', 'e', '.', 'v', '3', '.', 'C', 
'o', 'n', 'f', 'i', 'g', 'S', 'o', 'u', 'r', 'c', 'e', 'B', '\010', '\372', 'B', '\005', '\212', '\001', '\002', '\020', '\001', 'R', '\014', 'c', 'o', 
'n', 'f', 'i', 'g', 'S', 'o', 'u', 'r', 'c', 'e', ':', '\030', '\232', '\305', '\210', '\036', '\023', '\n', '\021', 'e', 'n', 'v', 'o', 'y', '.', 
'a', 'p', 'i', '.', 'v', '2', '.', 'V', 'h', 'd', 's', 'B', '\201', '\001', '\n', '#', 'i', 'o', '.', 'e', 'n', 'v', 'o', 'y', 'p', 
'r', 'o', 'x', 'y', '.', 'e', 'n', 'v', 'o', 'y', '.', 'c', 'o', 'n', 'f', 'i', 'g', '.', 'r', 'o', 'u', 't', 'e', '.', 'v', 
'3', 'B', '\n', 'R', 'o', 'u', 't', 'e', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', 'D', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 
'o', 'm', '/', 'e', 'n', 'v', 'o', 'y', 'p', 'r', 'o', 'x', 'y', '/', 'g', 'o', '-', 'c', 'o', 'n', 't', 'r', 'o', 'l', '-', 
'p', 'l', 'a', 'n', 'e', '/', 'e', 'n', 'v', 'o', 'y', '/', 'c', 'o', 'n', 'f', 'i', 'g', '/', 'r', 'o', 'u', 't', 'e', '/', 
'v', '3', ';', 'r', 'o', 'u', 't', 'e', 'v', '3', '\272', '\200', '\310', '\321', '\006', '\002', '\020', '\002', 'b', '\006', 'p', 'r', 'o', 't', 'o', 
'3', 
};

static _upb_DefPool_Init *deps[9] = {
  &envoy_config_core_v3_base_proto_upbdefinit,
  &envoy_config_core_v3_config_source_proto_upbdefinit,
  &envoy_config_core_v3_extension_proto_upbdefinit,
  &envoy_config_route_v3_route_components_proto_upbdefinit,
  &google_protobuf_wrappers_proto_upbdefinit,
  &udpa_annotations_status_proto_upbdefinit,
  &udpa_annotations_versioning_proto_upbdefinit,
  &validate_validate_proto_upbdefinit,
  NULL
};

_upb_DefPool_Init envoy_config_route_v3_route_proto_upbdefinit = {
  deps,
  &envoy_config_route_v3_route_proto_upb_file_layout,
  "envoy/config/route/v3/route.proto",
  UPB_STRINGVIEW_INIT(descriptor, 1851)
};