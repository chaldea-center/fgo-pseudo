System_Byte_array *Internal_Cryptography_Helpers__CloneByteArray(System_Byte_array *src, const MethodInfo *method)
{
  System_Byte_array *result; // x0
  System_Byte_array *v4; // x19
  Il2CppClass *v5; // x20
  __int64 v6; // x2

  if ( (byte_5978899 & 1) == 0 )
  {
    sub_2213A60(&byte___TypeInfo);
    byte_5978899 = 1;
  }
  if ( !src )
    return 0;
  result = (System_Byte_array *)System_Array__Clone((System_Array_o *)src, 0);
  if ( result )
  {
    v4 = result;
    v5 = byte___TypeInfo;
    result = (System_Byte_array *)sub_2213BB4(result, byte___TypeInfo);
    if ( !result )
    {
      sub_221405C(v4, v5, v6);
      return 0;
    }
  }
  return result;
}


uint16_t Internal_Cryptography_Helpers__NibbleToHex(uint8_t b, const MethodInfo *method)
{
  __int16 v2; // w8

  if ( b >= 0xAu )
    v2 = 55;
  else
    v2 = 48;
  return v2 + b;
}


System_Char_array *Internal_Cryptography_Helpers__ToHexArrayUpper(System_Byte_array *bytes, const MethodInfo *method)
{
  System_Byte_array *v2; // x19
  __int64 v3; // x10
  uint8_t *m_Items; // x9
  __int64 v5; // x8
  unsigned int v6; // w13
  unsigned int v7; // t1
  int v8; // w14
  unsigned int max_length; // w15
  int v10; // w16
  __int64 v11; // x14
  unsigned int v12; // w13
  int v13; // w15
  __int64 v14; // x10
  char *v15; // x15
  __int16 v16; // w16
  bool v17; // zf

  v2 = bytes;
  if ( (byte_597889A & 1) == 0 )
  {
    bytes = (System_Byte_array *)sub_2213A60(&char___TypeInfo);
    byte_597889A = 1;
  }
  if ( !v2 )
    goto LABEL_19;
  bytes = (System_Byte_array *)sub_2213B20(char___TypeInfo, (unsigned int)(2 * LODWORD(v2->max_length)));
  if ( (int)v2->max_length >= 1 )
  {
    v3 = 0;
    m_Items = v2->m_Items;
    v5 = 2LL * (unsigned int)v2->max_length;
    while ( 1 )
    {
      v7 = *m_Items++;
      v6 = v7;
      v8 = v7 >= 0xA0 ? 55 : 48;
      if ( !bytes )
        break;
      max_length = bytes->max_length;
      if ( (unsigned int)v3 >= max_length
        || (v10 = v8 + (v6 >> 4), v11 = v3 + 1, *(_WORD *)&bytes->m_Items[2 * (int)v3] = v10, (int)v3 + 1 >= max_length) )
      {
        sub_2213CE4(bytes);
      }
      v12 = v6 & 0xF;
      v13 = v3 + 1;
      v14 = v3 + 2;
      v15 = (char *)bytes + 2 * v13;
      if ( v12 >= 0xA )
        v16 = 55;
      else
        v16 = 48;
      v17 = v5 == v14;
      v3 = v11 + 1;
      *((_WORD *)v15 + 16) = v16 + v12;
      if ( v17 )
        return (System_Char_array *)bytes;
    }
LABEL_19:
    sub_2213CDC(bytes, method);
  }
  return (System_Char_array *)bytes;
}


System_String_o *Internal_Cryptography_Helpers__ToHexStringUpper(System_Byte_array *bytes, const MethodInfo *method)
{
  System_Char_array *v2; // x0
  const MethodInfo *v3; // x1

  v2 = Internal_Cryptography_Helpers__ToHexArrayUpper(bytes, method);
  return System_String__Ctor(v2, v3);
}


void Internal_Cryptography_OidLookup___cctor(const MethodInfo *method)
{
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v8; // x1
  System_StringComparer_c *v9; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *s_ordinalIgnoreCase; // x19
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v11; // x20
  struct Internal_Cryptography_OidLookup_StaticFields *static_fields; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  System_StringComparer_c *v20; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *v21; // x20
  System_Collections_Generic_Dictionary_object__object__o *v22; // x19
  __int64 v23; // x0
  __int64 v24; // x1
  struct Internal_Cryptography_OidLookup_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  Internal_Cryptography_OidLookup___c_c *v33; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *s_friendlyNameToOid; // x19
  Il2CppObject *v35; // x20
  System_Func_T__TResult__o *v36; // x21
  Il2CppObject *v37; // x20
  System_Func_T__TResult__o *v38; // x22
  System_Collections_Generic_Dictionary_TKey__TElement__o *v39; // x0
  struct Internal_Cryptography_OidLookup_StaticFields *v40; // x8
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Collections_Generic_Dictionary_object__object__o *v47; // x19
  struct Internal_Cryptography_OidLookup_StaticFields *v48; // x0
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7

  if ( (byte_597A7D5 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___91578864);
    sub_2213A60(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
    sub_2213A60(&System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string___ctor___91604904);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_2213A60(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
    sub_2213A60(&System_Func_KeyValuePair_string__string___string__TypeInfo);
    sub_2213A60(&Internal_Cryptography_OidLookup_TypeInfo);
    sub_2213A60(&System_StringComparer_TypeInfo);
    sub_2213A60(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__);
    sub_2213A60(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__);
    sub_2213A60(&Internal_Cryptography_OidLookup___c_TypeInfo);
    sub_2213A60(&StringLiteral_18155/*"brainpoolP512t1"*/);
    sub_2213A60(&StringLiteral_1270/*"1.2.840.10046.2.1"*/);
    sub_2213A60(&StringLiteral_18143/*"brainpoolP160t1"*/);
    sub_2213A60(&StringLiteral_3675/*"CN"*/);
    sub_2213A60(&StringLiteral_1280/*"1.2.840.113549.1.1.7"*/);
    sub_2213A60(&StringLiteral_1354/*"1.3.36.3.3.2.8.1.1.13"*/);
    sub_2213A60(&StringLiteral_1294/*"1.2.840.113549.1.3.1"*/);
    sub_2213A60(&StringLiteral_11942/*"S"*/);
    sub_2213A60(&StringLiteral_1409/*"2.16.840.1.101.3.4.2.1"*/);
    sub_2213A60(&StringLiteral_1435/*"2.5.4.42"*/);
    sub_2213A60(&StringLiteral_1353/*"1.3.36.3.3.2.8.1.1.12"*/);
    sub_2213A60(&StringLiteral_1342/*"1.3.14.3.2.27"*/);
    sub_2213A60(&StringLiteral_1430/*"2.5.4.18"*/);
    sub_2213A60(&StringLiteral_1323/*"1.3.132.0.10"*/);
    sub_2213A60(&StringLiteral_19507/*"dnQualifier"*/);
    sub_2213A60(&StringLiteral_1279/*"1.2.840.113549.1.1.5"*/);
    sub_2213A60(&StringLiteral_1437/*"2.5.4.46"*/);
    sub_2213A60(&StringLiteral_1260/*"1.2.840.10045.3.1.3"*/);
    sub_2213A60(&StringLiteral_1322/*"1.2.840.113549.3.7"*/);
    sub_2213A60(&StringLiteral_1403/*"2.16.840.1.101.3.4.1.22"*/);
    sub_2213A60(&StringLiteral_1441/*"2.5.4.8"*/);
    sub_2213A60(&StringLiteral_24465/*"secP160r2"*/);
    sub_2213A60(&StringLiteral_23340/*"nistP192"*/);
    sub_2213A60(&StringLiteral_1321/*"1.2.840.113549.3.4"*/);
    sub_2213A60(&StringLiteral_19417/*"des"*/);
    sub_2213A60(&StringLiteral_1440/*"2.5.4.7"*/);
    sub_2213A60(&StringLiteral_1265/*"1.2.840.10045.4.1"*/);
    sub_2213A60(&StringLiteral_5607/*"ECDH_STD_SHA256_KDF"*/);
    sub_2213A60(&StringLiteral_22756/*"mosaicKMandUpdSig"*/);
    sub_2213A60(&StringLiteral_1281/*"1.2.840.113549.1.1.8"*/);
    sub_2213A60(&StringLiteral_22757/*"mosaicUpdatedSig"*/);
    sub_2213A60(&StringLiteral_16322/*"X21Address"*/);
    sub_2213A60(&StringLiteral_24634/*"sha256RSA"*/);
    sub_2213A60(&StringLiteral_3674/*"CMSRC2wrap"*/);
    sub_2213A60(&StringLiteral_18154/*"brainpoolP512r1"*/);
    sub_2213A60(&StringLiteral_5606/*"ECDH_STD_SHA1_KDF"*/);
    sub_2213A60(&StringLiteral_1271/*"1.2.840.113549.1.1.1"*/);
    sub_2213A60(&StringLiteral_1436/*"2.5.4.43"*/);
    sub_2213A60(&StringLiteral_1414/*"2.23.43.1.4.9"*/);
    sub_2213A60(&StringLiteral_26314/*"x962P239v3"*/);
    sub_2213A60(&StringLiteral_24464/*"secP160r1"*/);
    sub_2213A60(&StringLiteral_1368/*"1.3.6.1.5.5.7.2.1"*/);
    sub_2213A60(&StringLiteral_1429/*"2.5.4.17"*/);
    sub_2213A60(&StringLiteral_1264/*"1.2.840.10045.3.1.7"*/);
    sub_2213A60(&StringLiteral_11172/*"PostalCode"*/);
    sub_2213A60(&StringLiteral_1329/*"1.3.132.0.35"*/);
    sub_2213A60(&StringLiteral_1402/*"2.16.840.1.101.3.4.1.2"*/);
    sub_2213A60(&StringLiteral_1268/*"1.2.840.10045.4.3.3"*/);
    sub_2213A60(&StringLiteral_1258/*"1.2.840.10045.3.1.1"*/);
    sub_2213A60(&StringLiteral_1359/*"1.3.36.3.3.2.8.1.1.5"*/);
    sub_2213A60(&StringLiteral_7190/*"G"*/);
    sub_2213A60(&StringLiteral_12769/*"SN"*/);
    sub_2213A60(&StringLiteral_1263/*"1.2.840.10045.3.1.6"*/);
    sub_2213A60(&StringLiteral_24640/*"sha512RSA"*/);
    sub_2213A60(&StringLiteral_26313/*"x962P239v2"*/);
    sub_2213A60(&StringLiteral_1319/*"1.2.840.113549.2.5"*/);
    sub_2213A60(&StringLiteral_5605/*"ECC"*/);
    sub_2213A60(&StringLiteral_1439/*"2.5.4.6"*/);
    sub_2213A60(&StringLiteral_1305/*"1.2.840.113549.1.9.1"*/);
    sub_2213A60(&StringLiteral_1357/*"1.3.36.3.3.2.8.1.1.3"*/);
    sub_2213A60(&StringLiteral_23341/*"nistP224"*/);
    sub_2213A60(&StringLiteral_1363/*"1.3.36.3.3.2.8.1.1.9"*/);
    sub_2213A60(&StringLiteral_1317/*"1.2.840.113549.2.2"*/);
    sub_2213A60(&StringLiteral_1334/*"1.3.133.16.840.63.0.2"*/);
    sub_2213A60(&StringLiteral_1204/*"0.9.2342.19200300.100.1.25"*/);
    sub_2213A60(&StringLiteral_1327/*"1.3.132.0.33"*/);
    sub_2213A60(&StringLiteral_5598/*"E"*/);
    sub_2213A60(&StringLiteral_24628/*"sha1"*/);
    sub_2213A60(&StringLiteral_1267/*"1.2.840.10045.4.3.2"*/);
    sub_2213A60(&StringLiteral_26310/*"x962P192v2"*/);
    sub_2213A60(&StringLiteral_11657/*"RSA"*/);
    sub_2213A60(&StringLiteral_18145/*"brainpoolP192t1"*/);
    sub_2213A60(&StringLiteral_24636/*"sha384ECDSA"*/);
    sub_2213A60(&StringLiteral_5225/*"DSA"*/);
    sub_2213A60(&StringLiteral_5175/*"DH"*/);
    sub_2213A60(&StringLiteral_1362/*"1.3.36.3.3.2.8.1.1.8"*/);
    sub_2213A60(&StringLiteral_12073/*"SERIALNUMBER"*/);
    sub_2213A60(&StringLiteral_3673/*"CMS3DESwrap"*/);
    sub_2213A60(&StringLiteral_24630/*"sha1ECDSA"*/);
    sub_2213A60(&StringLiteral_1432/*"2.5.4.24"*/);
    sub_2213A60(&StringLiteral_24631/*"sha1RSA"*/);
    sub_2213A60(&StringLiteral_1406/*"2.16.840.1.101.3.4.1.45"*/);
    sub_2213A60(&StringLiteral_1255/*"1.2.840.10040.4.1"*/);
    sub_2213A60(&StringLiteral_24466/*"secP192k1"*/);
    sub_2213A60(&StringLiteral_1411/*"2.16.840.1.101.3.4.2.3"*/);
    sub_2213A60(&StringLiteral_1358/*"1.3.36.3.3.2.8.1.1.4"*/);
    sub_2213A60(&StringLiteral_1350/*"1.3.36.3.3.2.8.1.1.1"*/);
    sub_2213A60(&StringLiteral_1273/*"1.2.840.113549.1.1.11"*/);
    sub_2213A60(&StringLiteral_1405/*"2.16.840.1.101.3.4.1.42"*/);
    sub_2213A60(&StringLiteral_18149/*"brainpoolP256t1"*/);
    sub_2213A60(&StringLiteral_7684/*"I"*/);
    sub_2213A60(&StringLiteral_11659/*"RSASSA-PSS"*/);
    sub_2213A60(&StringLiteral_26240/*"wtls9"*/);
    sub_2213A60(&StringLiteral_1269/*"1.2.840.10045.4.3.4"*/);
    sub_2213A60(&StringLiteral_1308/*"1.2.840.113549.1.9.16.3.6"*/);
    sub_2213A60(&StringLiteral_5151/*"DC"*/);
    sub_2213A60(&StringLiteral_22607/*"md2"*/);
    sub_2213A60(&StringLiteral_1399/*"2.16.840.1.101.2.1.1.19"*/);
    sub_2213A60(&StringLiteral_1328/*"1.3.132.0.34"*/);
    sub_2213A60(&StringLiteral_22610/*"md4RSA"*/);
    sub_2213A60(&StringLiteral_1431/*"2.5.4.20"*/);
    sub_2213A60(&StringLiteral_13873/*"T"*/);
    sub_2213A60(&StringLiteral_11658/*"RSAES_OAEP"*/);
    sub_2213A60(&StringLiteral_8598/*"L"*/);
    sub_2213A60(&StringLiteral_18153/*"brainpoolP384t1"*/);
    sub_2213A60(&StringLiteral_1336/*"1.3.14.3.2.13"*/);
    sub_2213A60(&StringLiteral_26311/*"x962P192v3"*/);
    sub_2213A60(&StringLiteral_1347/*"1.3.14.7.2.3.1"*/);
    sub_2213A60(&StringLiteral_24637/*"sha384RSA"*/);
    sub_2213A60(&StringLiteral_22608/*"md2RSA"*/);
    sub_2213A60(&StringLiteral_24633/*"sha256ECDSA"*/);
    sub_2213A60(&StringLiteral_24641/*"shaRSA"*/);
    sub_2213A60(&StringLiteral_1428/*"2.5.4.13"*/);
    sub_2213A60(&StringLiteral_24624/*"sha"*/);
    sub_2213A60(&StringLiteral_22613/*"md5RSA"*/);
    sub_2213A60(&StringLiteral_24632/*"sha256"*/);
    sub_2213A60(&StringLiteral_24467/*"secP224k1"*/);
    sub_2213A60(&StringLiteral_22611/*"md5"*/);
    sub_2213A60(&StringLiteral_17401/*"aes192"*/);
    sub_2213A60(&StringLiteral_1274/*"1.2.840.113549.1.1.12"*/);
    sub_2213A60(&StringLiteral_11055/*"Phone"*/);
    sub_2213A60(&StringLiteral_1261/*"1.2.840.10045.3.1.4"*/);
    sub_2213A60(&StringLiteral_1478/*"3des"*/);
    sub_2213A60(&StringLiteral_22669/*"mgf1"*/);
    sub_2213A60(&StringLiteral_1433/*"2.5.4.3"*/);
    sub_2213A60(&StringLiteral_1331/*"1.3.132.0.9"*/);
    sub_2213A60(&StringLiteral_18147/*"brainpoolP224t1"*/);
    sub_2213A60(&StringLiteral_5610/*"ECDSA_P384"*/);
    sub_2213A60(&StringLiteral_1326/*"1.3.132.0.32"*/);
    sub_2213A60(&StringLiteral_19529/*"dsaSHA1"*/);
    sub_2213A60(&StringLiteral_1426/*"2.5.4.11"*/);
    sub_2213A60(&StringLiteral_10008/*"O"*/);
    sub_2213A60(&StringLiteral_1344/*"1.3.14.3.2.3"*/);
    sub_2213A60(&StringLiteral_1320/*"1.2.840.113549.3.2"*/);
    sub_2213A60(&StringLiteral_17399/*"aes128"*/);
    sub_2213A60(&StringLiteral_1333/*"1.3.132.1.11.2"*/);
    sub_2213A60(&StringLiteral_1345/*"1.3.14.3.2.4"*/);
    sub_2213A60(&StringLiteral_10832/*"POBox"*/);
    sub_2213A60(&StringLiteral_1318/*"1.2.840.113549.2.4"*/);
    sub_2213A60(&StringLiteral_1332/*"1.3.132.1.11.1"*/);
    sub_2213A60(&StringLiteral_1256/*"1.2.840.10040.4.3"*/);
    sub_2213A60(&StringLiteral_1340/*"1.3.14.3.2.22"*/);
    sub_2213A60(&StringLiteral_1352/*"1.3.36.3.3.2.8.1.1.11"*/);
    sub_2213A60(&StringLiteral_1276/*"1.2.840.113549.1.1.2"*/);
    sub_2213A60(&StringLiteral_11660/*"RSA_KEYX"*/);
    sub_2213A60(&StringLiteral_1427/*"2.5.4.12"*/);
    sub_2213A60(&StringLiteral_1400/*"2.16.840.1.101.2.1.1.20"*/);
    sub_2213A60(&StringLiteral_24629/*"sha1DSA"*/);
    sub_2213A60(&StringLiteral_24849/*"specifiedECDSA"*/);
    sub_2213A60(&StringLiteral_1325/*"1.3.132.0.31"*/);
    sub_2213A60(&StringLiteral_18148/*"brainpoolP256r1"*/);
    sub_2213A60(&StringLiteral_1337/*"1.3.14.3.2.15"*/);
    sub_2213A60(&StringLiteral_1330/*"1.3.132.0.8"*/);
    sub_2213A60(&StringLiteral_1275/*"1.2.840.113549.1.1.13"*/);
    sub_2213A60(&StringLiteral_18142/*"brainpoolP160r1"*/);
    sub_2213A60(&StringLiteral_26312/*"x962P239v1"*/);
    sub_2213A60(&StringLiteral_1341/*"1.3.14.3.2.26"*/);
    sub_2213A60(&StringLiteral_1266/*"1.2.840.10045.4.3"*/);
    sub_2213A60(&StringLiteral_10147/*"OU"*/);
    sub_2213A60(&StringLiteral_1257/*"1.2.840.10045.2.1"*/);
    sub_2213A60(&StringLiteral_1356/*"1.3.36.3.3.2.8.1.1.2"*/);
    sub_2213A60(&StringLiteral_9723/*"NO_SIGN"*/);
    sub_2213A60(&StringLiteral_24162/*"rc4"*/);
    sub_2213A60(&StringLiteral_22609/*"md4"*/);
    sub_2213A60(&StringLiteral_19646/*"ec192wapi"*/);
    sub_2213A60(&StringLiteral_1309/*"1.2.840.113549.1.9.16.3.7"*/);
    sub_2213A60(&StringLiteral_3394/*"C"*/);
    sub_2213A60(&StringLiteral_1360/*"1.3.36.3.3.2.8.1.1.6"*/);
    sub_2213A60(&StringLiteral_1262/*"1.2.840.10045.3.1.5"*/);
    sub_2213A60(&StringLiteral_18152/*"brainpoolP384r1"*/);
    sub_2213A60(&StringLiteral_18151/*"brainpoolP320t1"*/);
    sub_2213A60(&StringLiteral_5699/*"ESDH"*/);
    sub_2213A60(&StringLiteral_24635/*"sha384"*/);
    sub_2213A60(&StringLiteral_1307/*"1.2.840.113549.1.9.16.3.5"*/);
    sub_2213A60(&StringLiteral_5608/*"ECDH_STD_SHA384_KDF"*/);
    sub_2213A60(&StringLiteral_1324/*"1.3.132.0.30"*/);
    sub_2213A60(&StringLiteral_1339/*"1.3.14.3.2.2"*/);
    sub_2213A60(&StringLiteral_1338/*"1.3.14.3.2.18"*/);
    sub_2213A60(&StringLiteral_1278/*"1.2.840.113549.1.1.4"*/);
    sub_2213A60(&StringLiteral_4028/*"CPS"*/);
    sub_2213A60(&StringLiteral_1442/*"2.5.4.9"*/);
    sub_2213A60(&StringLiteral_1259/*"1.2.840.10045.3.1.2"*/);
    sub_2213A60(&StringLiteral_24638/*"sha512"*/);
    sub_2213A60(&StringLiteral_1361/*"1.3.36.3.3.2.8.1.1.7"*/);
    sub_2213A60(&StringLiteral_1407/*"2.16.840.1.101.3.4.1.5"*/);
    sub_2213A60(&StringLiteral_17400/*"aes128wrap"*/);
    sub_2213A60(&StringLiteral_1370/*"1.3.6.1.5.5.7.6.2"*/);
    sub_2213A60(&StringLiteral_5611/*"ECDSA_P521"*/);
    sub_2213A60(&StringLiteral_24463/*"secP160k1"*/);
    sub_2213A60(&StringLiteral_1410/*"2.16.840.1.101.3.4.2.2"*/);
    sub_2213A60(&StringLiteral_1346/*"1.3.14.3.2.7"*/);
    sub_2213A60(&StringLiteral_17404/*"aes256wrap"*/);
    sub_2213A60(&StringLiteral_1425/*"2.5.4.10"*/);
    sub_2213A60(&StringLiteral_24639/*"sha512ECDSA"*/);
    sub_2213A60(&StringLiteral_1335/*"1.3.14.3.2.12"*/);
    sub_2213A60(&StringLiteral_1277/*"1.2.840.113549.1.1.3"*/);
    sub_2213A60(&StringLiteral_24468/*"secP256k1"*/);
    sub_2213A60(&StringLiteral_1355/*"1.3.36.3.3.2.8.1.1.14"*/);
    sub_2213A60(&StringLiteral_5609/*"ECDSA_P256"*/);
    sub_2213A60(&StringLiteral_1343/*"1.3.14.3.2.29"*/);
    sub_2213A60(&StringLiteral_17402/*"aes192wrap"*/);
    sub_2213A60(&StringLiteral_1254/*"1.2.156.11235.1.1.2.1"*/);
    sub_2213A60(&StringLiteral_5428/*"Description"*/);
    sub_2213A60(&StringLiteral_24161/*"rc2"*/);
    sub_2213A60(&StringLiteral_18144/*"brainpoolP192r1"*/);
    sub_2213A60(&StringLiteral_1438/*"2.5.4.5"*/);
    sub_2213A60(&StringLiteral_17403/*"aes256"*/);
    sub_2213A60(&StringLiteral_18146/*"brainpoolP224r1"*/);
    sub_2213A60(&StringLiteral_18150/*"brainpoolP320r1"*/);
    sub_2213A60(&StringLiteral_1351/*"1.3.36.3.3.2.8.1.1.10"*/);
    sub_2213A60(&StringLiteral_1272/*"1.2.840.113549.1.1.10"*/);
    sub_2213A60(&StringLiteral_1404/*"2.16.840.1.101.3.4.1.25"*/);
    sub_2213A60(&StringLiteral_12931/*"STREET"*/);
    sub_2213A60(&StringLiteral_1434/*"2.5.4.4"*/);
    byte_597A7D5 = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor(
    v1,
    (const MethodInfo_3EECAE0 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
  Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_lateBoundOidToFriendlyName = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)Internal_Cryptography_OidLookup_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !*(&System_StringComparer_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo, v8);
  if ( !byte_5978E25 )
  {
    sub_2213A60(&System_StringComparer_TypeInfo);
    byte_5978E25 = 1;
  }
  v9 = System_StringComparer_TypeInfo;
  if ( !*(&System_StringComparer_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo, v8);
    v9 = System_StringComparer_TypeInfo;
  }
  s_ordinalIgnoreCase = (System_Collections_Generic_IEqualityComparer_TKey__o *)v9->static_fields->s_ordinalIgnoreCase;
  v11 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor_65981268(
    v11,
    s_ordinalIgnoreCase,
    (const MethodInfo_3EECB54 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___91578864);
  static_fields = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  static_fields->s_lateBoundFriendlyNameToOid = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->s_lateBoundFriendlyNameToOid,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !byte_5978E25 )
  {
    sub_2213A60(&System_StringComparer_TypeInfo);
    byte_5978E25 = 1;
  }
  v20 = System_StringComparer_TypeInfo;
  if ( !*(&System_StringComparer_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo, v19);
    v20 = System_StringComparer_TypeInfo;
  }
  v21 = (System_Collections_Generic_IEqualityComparer_TKey__o *)v20->static_fields->s_ordinalIgnoreCase;
  v22 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_67097260(
    v22,
    v21,
    (const MethodInfo_3FFD2AC *)Method_System_Collections_Generic_Dictionary_string__string___ctor___91604904);
  if ( !v22 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_1478/*"3des"*/,
    (Il2CppObject *)StringLiteral_1322/*"1.2.840.113549.3.7"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_17399/*"aes128"*/,
    (Il2CppObject *)StringLiteral_1402/*"2.16.840.1.101.3.4.1.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_17400/*"aes128wrap"*/,
    (Il2CppObject *)StringLiteral_1407/*"2.16.840.1.101.3.4.1.5"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_17401/*"aes192"*/,
    (Il2CppObject *)StringLiteral_1403/*"2.16.840.1.101.3.4.1.22"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_17402/*"aes192wrap"*/,
    (Il2CppObject *)StringLiteral_1404/*"2.16.840.1.101.3.4.1.25"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_17403/*"aes256"*/,
    (Il2CppObject *)StringLiteral_1405/*"2.16.840.1.101.3.4.1.42"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_17404/*"aes256wrap"*/,
    (Il2CppObject *)StringLiteral_1406/*"2.16.840.1.101.3.4.1.45"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18142/*"brainpoolP160r1"*/,
    (Il2CppObject *)StringLiteral_1350/*"1.3.36.3.3.2.8.1.1.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18143/*"brainpoolP160t1"*/,
    (Il2CppObject *)StringLiteral_1356/*"1.3.36.3.3.2.8.1.1.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18144/*"brainpoolP192r1"*/,
    (Il2CppObject *)StringLiteral_1357/*"1.3.36.3.3.2.8.1.1.3"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18145/*"brainpoolP192t1"*/,
    (Il2CppObject *)StringLiteral_1358/*"1.3.36.3.3.2.8.1.1.4"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18146/*"brainpoolP224r1"*/,
    (Il2CppObject *)StringLiteral_1359/*"1.3.36.3.3.2.8.1.1.5"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18147/*"brainpoolP224t1"*/,
    (Il2CppObject *)StringLiteral_1360/*"1.3.36.3.3.2.8.1.1.6"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18148/*"brainpoolP256r1"*/,
    (Il2CppObject *)StringLiteral_1361/*"1.3.36.3.3.2.8.1.1.7"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18149/*"brainpoolP256t1"*/,
    (Il2CppObject *)StringLiteral_1362/*"1.3.36.3.3.2.8.1.1.8"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18150/*"brainpoolP320r1"*/,
    (Il2CppObject *)StringLiteral_1363/*"1.3.36.3.3.2.8.1.1.9"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18151/*"brainpoolP320t1"*/,
    (Il2CppObject *)StringLiteral_1351/*"1.3.36.3.3.2.8.1.1.10"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18152/*"brainpoolP384r1"*/,
    (Il2CppObject *)StringLiteral_1352/*"1.3.36.3.3.2.8.1.1.11"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18153/*"brainpoolP384t1"*/,
    (Il2CppObject *)StringLiteral_1353/*"1.3.36.3.3.2.8.1.1.12"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18154/*"brainpoolP512r1"*/,
    (Il2CppObject *)StringLiteral_1354/*"1.3.36.3.3.2.8.1.1.13"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_18155/*"brainpoolP512t1"*/,
    (Il2CppObject *)StringLiteral_1355/*"1.3.36.3.3.2.8.1.1.14"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_3394/*"C"*/,
    (Il2CppObject *)StringLiteral_1439/*"2.5.4.6"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_3673/*"CMS3DESwrap"*/,
    (Il2CppObject *)StringLiteral_1308/*"1.2.840.113549.1.9.16.3.6"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_3674/*"CMSRC2wrap"*/,
    (Il2CppObject *)StringLiteral_1309/*"1.2.840.113549.1.9.16.3.7"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_3675/*"CN"*/,
    (Il2CppObject *)StringLiteral_1433/*"2.5.4.3"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_4028/*"CPS"*/,
    (Il2CppObject *)StringLiteral_1368/*"1.3.6.1.5.5.7.2.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5151/*"DC"*/,
    (Il2CppObject *)StringLiteral_1204/*"0.9.2342.19200300.100.1.25"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_19417/*"des"*/,
    (Il2CppObject *)StringLiteral_1346/*"1.3.14.3.2.7"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5428/*"Description"*/,
    (Il2CppObject *)StringLiteral_1428/*"2.5.4.13"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5175/*"DH"*/,
    (Il2CppObject *)StringLiteral_1270/*"1.2.840.10046.2.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_19507/*"dnQualifier"*/,
    (Il2CppObject *)StringLiteral_1437/*"2.5.4.46"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5225/*"DSA"*/,
    (Il2CppObject *)StringLiteral_1255/*"1.2.840.10040.4.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_19529/*"dsaSHA1"*/,
    (Il2CppObject *)StringLiteral_1342/*"1.3.14.3.2.27"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5598/*"E"*/,
    (Il2CppObject *)StringLiteral_1305/*"1.2.840.113549.1.9.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_19646/*"ec192wapi"*/,
    (Il2CppObject *)StringLiteral_1254/*"1.2.156.11235.1.1.2.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5605/*"ECC"*/,
    (Il2CppObject *)StringLiteral_1257/*"1.2.840.10045.2.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5606/*"ECDH_STD_SHA1_KDF"*/,
    (Il2CppObject *)StringLiteral_1334/*"1.3.133.16.840.63.0.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5607/*"ECDH_STD_SHA256_KDF"*/,
    (Il2CppObject *)StringLiteral_1332/*"1.3.132.1.11.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5608/*"ECDH_STD_SHA384_KDF"*/,
    (Il2CppObject *)StringLiteral_1333/*"1.3.132.1.11.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5609/*"ECDSA_P256"*/,
    (Il2CppObject *)StringLiteral_1264/*"1.2.840.10045.3.1.7"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5610/*"ECDSA_P384"*/,
    (Il2CppObject *)StringLiteral_1328/*"1.3.132.0.34"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5611/*"ECDSA_P521"*/,
    (Il2CppObject *)StringLiteral_1329/*"1.3.132.0.35"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_5699/*"ESDH"*/,
    (Il2CppObject *)StringLiteral_1307/*"1.2.840.113549.1.9.16.3.5"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_7190/*"G"*/,
    (Il2CppObject *)StringLiteral_1435/*"2.5.4.42"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_7684/*"I"*/,
    (Il2CppObject *)StringLiteral_1436/*"2.5.4.43"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_8598/*"L"*/,
    (Il2CppObject *)StringLiteral_1440/*"2.5.4.7"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_22607/*"md2"*/,
    (Il2CppObject *)StringLiteral_1317/*"1.2.840.113549.2.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_22608/*"md2RSA"*/,
    (Il2CppObject *)StringLiteral_1276/*"1.2.840.113549.1.1.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_22609/*"md4"*/,
    (Il2CppObject *)StringLiteral_1318/*"1.2.840.113549.2.4"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_22610/*"md4RSA"*/,
    (Il2CppObject *)StringLiteral_1277/*"1.2.840.113549.1.1.3"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_22611/*"md5"*/,
    (Il2CppObject *)StringLiteral_1319/*"1.2.840.113549.2.5"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_22613/*"md5RSA"*/,
    (Il2CppObject *)StringLiteral_1278/*"1.2.840.113549.1.1.4"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_22669/*"mgf1"*/,
    (Il2CppObject *)StringLiteral_1281/*"1.2.840.113549.1.1.8"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_22756/*"mosaicKMandUpdSig"*/,
    (Il2CppObject *)StringLiteral_1400/*"2.16.840.1.101.2.1.1.20"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_22757/*"mosaicUpdatedSig"*/,
    (Il2CppObject *)StringLiteral_1399/*"2.16.840.1.101.2.1.1.19"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_23340/*"nistP192"*/,
    (Il2CppObject *)StringLiteral_1258/*"1.2.840.10045.3.1.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_23341/*"nistP224"*/,
    (Il2CppObject *)StringLiteral_1327/*"1.3.132.0.33"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_9723/*"NO_SIGN"*/,
    (Il2CppObject *)StringLiteral_1370/*"1.3.6.1.5.5.7.6.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_10008/*"O"*/,
    (Il2CppObject *)StringLiteral_1425/*"2.5.4.10"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_10147/*"OU"*/,
    (Il2CppObject *)StringLiteral_1426/*"2.5.4.11"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_11055/*"Phone"*/,
    (Il2CppObject *)StringLiteral_1431/*"2.5.4.20"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_10832/*"POBox"*/,
    (Il2CppObject *)StringLiteral_1430/*"2.5.4.18"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_11172/*"PostalCode"*/,
    (Il2CppObject *)StringLiteral_1429/*"2.5.4.17"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24161/*"rc2"*/,
    (Il2CppObject *)StringLiteral_1320/*"1.2.840.113549.3.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24162/*"rc4"*/,
    (Il2CppObject *)StringLiteral_1321/*"1.2.840.113549.3.4"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_11657/*"RSA"*/,
    (Il2CppObject *)StringLiteral_1271/*"1.2.840.113549.1.1.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_11658/*"RSAES_OAEP"*/,
    (Il2CppObject *)StringLiteral_1280/*"1.2.840.113549.1.1.7"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_11659/*"RSASSA-PSS"*/,
    (Il2CppObject *)StringLiteral_1272/*"1.2.840.113549.1.1.10"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_11942/*"S"*/,
    (Il2CppObject *)StringLiteral_1441/*"2.5.4.8"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24463/*"secP160k1"*/,
    (Il2CppObject *)StringLiteral_1331/*"1.3.132.0.9"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24464/*"secP160r1"*/,
    (Il2CppObject *)StringLiteral_1330/*"1.3.132.0.8"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24465/*"secP160r2"*/,
    (Il2CppObject *)StringLiteral_1324/*"1.3.132.0.30"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24466/*"secP192k1"*/,
    (Il2CppObject *)StringLiteral_1325/*"1.3.132.0.31"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24467/*"secP224k1"*/,
    (Il2CppObject *)StringLiteral_1326/*"1.3.132.0.32"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24468/*"secP256k1"*/,
    (Il2CppObject *)StringLiteral_1323/*"1.3.132.0.10"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_12073/*"SERIALNUMBER"*/,
    (Il2CppObject *)StringLiteral_1438/*"2.5.4.5"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24628/*"sha1"*/,
    (Il2CppObject *)StringLiteral_1341/*"1.3.14.3.2.26"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24629/*"sha1DSA"*/,
    (Il2CppObject *)StringLiteral_1256/*"1.2.840.10040.4.3"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24630/*"sha1ECDSA"*/,
    (Il2CppObject *)StringLiteral_1265/*"1.2.840.10045.4.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24631/*"sha1RSA"*/,
    (Il2CppObject *)StringLiteral_1279/*"1.2.840.113549.1.1.5"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24632/*"sha256"*/,
    (Il2CppObject *)StringLiteral_1409/*"2.16.840.1.101.3.4.2.1"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24633/*"sha256ECDSA"*/,
    (Il2CppObject *)StringLiteral_1267/*"1.2.840.10045.4.3.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24634/*"sha256RSA"*/,
    (Il2CppObject *)StringLiteral_1273/*"1.2.840.113549.1.1.11"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24635/*"sha384"*/,
    (Il2CppObject *)StringLiteral_1410/*"2.16.840.1.101.3.4.2.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24636/*"sha384ECDSA"*/,
    (Il2CppObject *)StringLiteral_1268/*"1.2.840.10045.4.3.3"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24637/*"sha384RSA"*/,
    (Il2CppObject *)StringLiteral_1274/*"1.2.840.113549.1.1.12"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24638/*"sha512"*/,
    (Il2CppObject *)StringLiteral_1411/*"2.16.840.1.101.3.4.2.3"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24639/*"sha512ECDSA"*/,
    (Il2CppObject *)StringLiteral_1269/*"1.2.840.10045.4.3.4"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24640/*"sha512RSA"*/,
    (Il2CppObject *)StringLiteral_1275/*"1.2.840.113549.1.1.13"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_12769/*"SN"*/,
    (Il2CppObject *)StringLiteral_1434/*"2.5.4.4"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_24849/*"specifiedECDSA"*/,
    (Il2CppObject *)StringLiteral_1266/*"1.2.840.10045.4.3"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_12931/*"STREET"*/,
    (Il2CppObject *)StringLiteral_1442/*"2.5.4.9"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_13873/*"T"*/,
    (Il2CppObject *)StringLiteral_1427/*"2.5.4.12"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_26240/*"wtls9"*/,
    (Il2CppObject *)StringLiteral_1414/*"2.23.43.1.4.9"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_16322/*"X21Address"*/,
    (Il2CppObject *)StringLiteral_1432/*"2.5.4.24"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_26310/*"x962P192v2"*/,
    (Il2CppObject *)StringLiteral_1259/*"1.2.840.10045.3.1.2"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_26311/*"x962P192v3"*/,
    (Il2CppObject *)StringLiteral_1260/*"1.2.840.10045.3.1.3"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_26312/*"x962P239v1"*/,
    (Il2CppObject *)StringLiteral_1261/*"1.2.840.10045.3.1.4"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_26313/*"x962P239v2"*/,
    (Il2CppObject *)StringLiteral_1262/*"1.2.840.10045.3.1.5"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v22,
    (Il2CppObject *)StringLiteral_26314/*"x962P239v3"*/,
    (Il2CppObject *)StringLiteral_1263/*"1.2.840.10045.3.1.6"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v25 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v25->s_friendlyNameToOid = (struct System_Collections_Generic_Dictionary_string__string__o *)v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v25->s_friendlyNameToOid, (int32_t)v22, v26, v27, v28, v29, v30, v31);
  v33 = Internal_Cryptography_OidLookup___c_TypeInfo;
  s_friendlyNameToOid = Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_friendlyNameToOid;
  if ( !*(&Internal_Cryptography_OidLookup___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup___c_TypeInfo, v32);
    v33 = Internal_Cryptography_OidLookup___c_TypeInfo;
  }
  v35 = (Il2CppObject *)v33->static_fields->__9;
  v36 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v36,
    v35,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__,
    0);
  v37 = (Il2CppObject *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9;
  v38 = (System_Func_T__TResult__o *)sub_2213CCC(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v38,
    v37,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__,
    0);
  v39 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)s_friendlyNameToOid,
          (System_Func_TSource__TKey__o *)v36,
          (System_Func_TSource__TElement__o *)v38,
          (const MethodInfo_389C328 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
  v40 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v40->s_oidToFriendlyName = (struct System_Collections_Generic_Dictionary_string__string__o *)v39;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v40->s_oidToFriendlyName, (int32_t)v39, v41, v42, v43, v44, v45, v46);
  v47 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v47,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v47 )
LABEL_18:
    sub_2213CDC(v23, v24);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1294/*"1.2.840.113549.1.3.1"*/,
    (Il2CppObject *)StringLiteral_5175/*"DH"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1335/*"1.3.14.3.2.12"*/,
    (Il2CppObject *)StringLiteral_5225/*"DSA"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1336/*"1.3.14.3.2.13"*/,
    (Il2CppObject *)StringLiteral_24629/*"sha1DSA"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1337/*"1.3.14.3.2.15"*/,
    (Il2CppObject *)StringLiteral_24641/*"shaRSA"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1338/*"1.3.14.3.2.18"*/,
    (Il2CppObject *)StringLiteral_24624/*"sha"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1339/*"1.3.14.3.2.2"*/,
    (Il2CppObject *)StringLiteral_22610/*"md4RSA"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1340/*"1.3.14.3.2.22"*/,
    (Il2CppObject *)StringLiteral_11660/*"RSA_KEYX"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1343/*"1.3.14.3.2.29"*/,
    (Il2CppObject *)StringLiteral_24631/*"sha1RSA"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1344/*"1.3.14.3.2.3"*/,
    (Il2CppObject *)StringLiteral_22613/*"md5RSA"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1345/*"1.3.14.3.2.4"*/,
    (Il2CppObject *)StringLiteral_22610/*"md4RSA"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v47,
    (Il2CppObject *)StringLiteral_1347/*"1.3.14.7.2.3.1"*/,
    (Il2CppObject *)StringLiteral_22608/*"md2RSA"*/,
    (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v48 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v48->s_compatOids = (struct System_Collections_Generic_Dictionary_string__string__o *)v47;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v48->s_compatOids, (int32_t)v47, v49, v50, v51, v52, v53, v54);
}


System_String_o *Internal_Cryptography_OidLookup__NativeFriendlyNameToOid(
        System_String_o *friendlyName,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  uint32_t v5; // w0
  __int64 *v6; // x20
  __int64 *v7; // x8

  if ( (byte_597A7D4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6643/*"Extended Key Usage"*/);
    sub_2213A60(&StringLiteral_1418/*"2.5.29.17"*/);
    sub_2213A60(&StringLiteral_1314/*"1.2.840.113549.1.9.4"*/);
    sub_2213A60(&StringLiteral_8571/*"Key Usage"*/);
    sub_2213A60(&StringLiteral_1315/*"1.2.840.113549.1.9.5"*/);
    sub_2213A60(&StringLiteral_9407/*"Message Digest"*/);
    sub_2213A60(&StringLiteral_1313/*"1.2.840.113549.1.9.3"*/);
    sub_2213A60(&StringLiteral_1413/*"2.16.840.1.113730.1.1"*/);
    sub_2213A60(&StringLiteral_13416/*"Signing Time"*/);
    sub_2213A60(&StringLiteral_1424/*"2.5.29.37"*/);
    sub_2213A60(&StringLiteral_1416/*"2.5.29.14"*/);
    sub_2213A60(&StringLiteral_1306/*"1.2.840.113549.1.9.16.3.3"*/);
    sub_2213A60(&StringLiteral_10810/*"PKCS 7 Data"*/);
    sub_2213A60(&StringLiteral_3202/*"Basic Constraints"*/);
    sub_2213A60(&StringLiteral_13692/*"Subject Alternative Name"*/);
    sub_2213A60(&StringLiteral_4861/*"Content Type"*/);
    sub_2213A60(&StringLiteral_13693/*"Subject Key Identifier"*/);
    sub_2213A60(&StringLiteral_1417/*"2.5.29.15"*/);
    sub_2213A60(&StringLiteral_9808/*"Netscape Cert Type"*/);
    sub_2213A60(&StringLiteral_1301/*"1.2.840.113549.1.7.1"*/);
    sub_2213A60(&StringLiteral_1420/*"2.5.29.19"*/);
    sub_2213A60(&StringLiteral_21236/*"id-smime-alg-3DESwrap"*/);
    byte_597A7D4 = 1;
  }
  v5 = PrivateImplementationDetails___ComputeStringHash_81998700(friendlyName, 0);
  if ( v5 > 0x751680DD )
  {
    if ( v5 > 0xB4301663 )
    {
      switch ( v5 )
      {
        case 0xB85A3360:
          v6 = &StringLiteral_1424/*"2.5.29.37"*/;
          v7 = &StringLiteral_6643/*"Extended Key Usage"*/;
          break;
        case 0xCCB33EB4:
          v6 = &StringLiteral_1314/*"1.2.840.113549.1.9.4"*/;
          v7 = &StringLiteral_9407/*"Message Digest"*/;
          break;
        case 0xE2748DE9:
          v6 = &StringLiteral_1306/*"1.2.840.113549.1.9.16.3.3"*/;
          v7 = &StringLiteral_21236/*"id-smime-alg-3DESwrap"*/;
          break;
        default:
          return 0;
      }
    }
    else
    {
      switch ( v5 )
      {
        case 0x953B2236:
          v6 = &StringLiteral_1313/*"1.2.840.113549.1.9.3"*/;
          v7 = &StringLiteral_4861/*"Content Type"*/;
          break;
        case 0x9DCF2034:
          v6 = &StringLiteral_1413/*"2.16.840.1.113730.1.1"*/;
          v7 = &StringLiteral_9808/*"Netscape Cert Type"*/;
          break;
        case 0xB4301663:
          v6 = &StringLiteral_1418/*"2.5.29.17"*/;
          v7 = &StringLiteral_13692/*"Subject Alternative Name"*/;
          break;
        default:
          return 0;
      }
    }
  }
  else if ( v5 > 0x55D8B021 )
  {
    switch ( v5 )
    {
      case 0x5BEE62EFu:
        v6 = &StringLiteral_1416/*"2.5.29.14"*/;
        v7 = &StringLiteral_13693/*"Subject Key Identifier"*/;
        break;
      case 0x5F357EFDu:
        v6 = &StringLiteral_1315/*"1.2.840.113549.1.9.5"*/;
        v7 = &StringLiteral_13416/*"Signing Time"*/;
        break;
      case 0x751680DDu:
        v6 = &StringLiteral_1420/*"2.5.29.19"*/;
        v7 = &StringLiteral_3202/*"Basic Constraints"*/;
        break;
      default:
        return 0;
    }
  }
  else
  {
    if ( v5 != 61174027 )
    {
      if ( v5 == 1440264225 )
      {
        v6 = &StringLiteral_1301/*"1.2.840.113549.1.7.1"*/;
        v7 = &StringLiteral_10810/*"PKCS 7 Data"*/;
        goto LABEL_29;
      }
      return 0;
    }
    v6 = &StringLiteral_1417/*"2.5.29.15"*/;
    v7 = &StringLiteral_8571/*"Key Usage"*/;
  }
LABEL_29:
  if ( System_String__op_Equality(friendlyName, (System_String_o *)*v7, 0) )
    return (System_String_o *)*v6;
  else
    return 0;
}


System_String_o *Internal_Cryptography_OidLookup__NativeOidToFriendlyName(
        System_String_o *oid,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  uint32_t v5; // w0
  __int64 *v6; // x20
  __int64 *v7; // x8

  if ( (byte_597A7D3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6643/*"Extended Key Usage"*/);
    sub_2213A60(&StringLiteral_1418/*"2.5.29.17"*/);
    sub_2213A60(&StringLiteral_1314/*"1.2.840.113549.1.9.4"*/);
    sub_2213A60(&StringLiteral_8571/*"Key Usage"*/);
    sub_2213A60(&StringLiteral_1315/*"1.2.840.113549.1.9.5"*/);
    sub_2213A60(&StringLiteral_9407/*"Message Digest"*/);
    sub_2213A60(&StringLiteral_1313/*"1.2.840.113549.1.9.3"*/);
    sub_2213A60(&StringLiteral_1413/*"2.16.840.1.113730.1.1"*/);
    sub_2213A60(&StringLiteral_13416/*"Signing Time"*/);
    sub_2213A60(&StringLiteral_1424/*"2.5.29.37"*/);
    sub_2213A60(&StringLiteral_1416/*"2.5.29.14"*/);
    sub_2213A60(&StringLiteral_1306/*"1.2.840.113549.1.9.16.3.3"*/);
    sub_2213A60(&StringLiteral_10810/*"PKCS 7 Data"*/);
    sub_2213A60(&StringLiteral_3202/*"Basic Constraints"*/);
    sub_2213A60(&StringLiteral_13692/*"Subject Alternative Name"*/);
    sub_2213A60(&StringLiteral_4861/*"Content Type"*/);
    sub_2213A60(&StringLiteral_13693/*"Subject Key Identifier"*/);
    sub_2213A60(&StringLiteral_1417/*"2.5.29.15"*/);
    sub_2213A60(&StringLiteral_9808/*"Netscape Cert Type"*/);
    sub_2213A60(&StringLiteral_1301/*"1.2.840.113549.1.7.1"*/);
    sub_2213A60(&StringLiteral_1420/*"2.5.29.19"*/);
    sub_2213A60(&StringLiteral_21236/*"id-smime-alg-3DESwrap"*/);
    byte_597A7D3 = 1;
  }
  v5 = PrivateImplementationDetails___ComputeStringHash_81998700(oid, 0);
  if ( v5 > 0xC67AB912 )
  {
    if ( v5 > 0xD20A3896 )
    {
      switch ( v5 )
      {
        case 0xD30A3A29:
          v6 = &StringLiteral_8571/*"Key Usage"*/;
          v7 = &StringLiteral_1417/*"2.5.29.15"*/;
          break;
        case 0xDC06204E:
          v6 = &StringLiteral_9808/*"Netscape Cert Type"*/;
          v7 = &StringLiteral_1413/*"2.16.840.1.113730.1.1"*/;
          break;
        case 0xDF0A4D0D:
          v6 = &StringLiteral_3202/*"Basic Constraints"*/;
          v7 = &StringLiteral_1420/*"2.5.29.19"*/;
          break;
        default:
          return 0;
      }
    }
    else
    {
      switch ( v5 )
      {
        case 0xD105B9D5:
          v6 = &StringLiteral_6643/*"Extended Key Usage"*/;
          v7 = &StringLiteral_1424/*"2.5.29.37"*/;
          break;
        case 0xD10A3703:
          v6 = &StringLiteral_13692/*"Subject Alternative Name"*/;
          v7 = &StringLiteral_1418/*"2.5.29.17"*/;
          break;
        case 0xD20A3896:
          v6 = &StringLiteral_13693/*"Subject Key Identifier"*/;
          v7 = &StringLiteral_1416/*"2.5.29.14"*/;
          break;
        default:
          return 0;
      }
    }
  }
  else if ( v5 > 0xABE04A90 )
  {
    switch ( v5 )
    {
      case 0xACE04C23:
        v6 = &StringLiteral_9407/*"Message Digest"*/;
        v7 = &StringLiteral_1314/*"1.2.840.113549.1.9.4"*/;
        break;
      case 0xB1E05402:
        v6 = &StringLiteral_4861/*"Content Type"*/;
        v7 = &StringLiteral_1313/*"1.2.840.113549.1.9.3"*/;
        break;
      case 0xC67AB912:
        v6 = &StringLiteral_21236/*"id-smime-alg-3DESwrap"*/;
        v7 = &StringLiteral_1306/*"1.2.840.113549.1.9.16.3.3"*/;
        break;
      default:
        return 0;
    }
  }
  else
  {
    if ( v5 != -1411364208 )
    {
      if ( v5 == 2095896238 )
      {
        v6 = &StringLiteral_10810/*"PKCS 7 Data"*/;
        v7 = &StringLiteral_1301/*"1.2.840.113549.1.7.1"*/;
        goto LABEL_29;
      }
      return 0;
    }
    v6 = &StringLiteral_13416/*"Signing Time"*/;
    v7 = &StringLiteral_1315/*"1.2.840.113549.1.9.5"*/;
  }
LABEL_29:
  if ( System_String__op_Equality(oid, (System_String_o *)*v7, 0) )
    return (System_String_o *)*v6;
  else
    return 0;
}


bool Internal_Cryptography_OidLookup__ShouldUseCache(int32_t oidGroup, const MethodInfo *method)
{
  return 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Internal_Cryptography_OidLookup__ToFriendlyName(
        System_String_o *oid,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  Internal_Cryptography_OidLookup_c *v5; // x0
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *s_oidToFriendlyName; // x0
  Internal_Cryptography_OidLookup_c *v7; // x0
  Internal_Cryptography_OidLookup_c *v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3
  Internal_Cryptography_OidLookup_c *v11; // x0
  __int64 v13; // x0
  System_ArgumentNullException_o *v14; // x19
  System_String_o *v15; // x0
  __int64 v16; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_597A7D1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
    sub_2213A60(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_2213A60(&Internal_Cryptography_OidLookup_TypeInfo);
    byte_597A7D1 = 1;
  }
  value = 0;
  if ( !oid )
  {
    v13 = sub_2213A74(&System_ArgumentNullException_TypeInfo);
    v14 = (System_ArgumentNullException_o *)sub_2213CCC(v13);
    v15 = (System_String_o *)sub_2213A74(&StringLiteral_23513/*"oid"*/);
    System_ArgumentNullException___ctor_76615216(v14, v15, 0);
    v16 = sub_2213A74(&Method_Internal_Cryptography_OidLookup_ToFriendlyName__);
    sub_2213BA0(v14, v16);
  }
  v5 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
    v5 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
      v5 = Internal_Cryptography_OidLookup_TypeInfo;
    }
  }
  s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v5->static_fields->s_oidToFriendlyName;
  if ( !s_oidToFriendlyName )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)s_oidToFriendlyName,
          (Il2CppObject *)oid,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    v7 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
      v7 = Internal_Cryptography_OidLookup_TypeInfo;
    }
    s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v7->static_fields->s_compatOids;
    if ( !s_oidToFriendlyName )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)s_oidToFriendlyName,
            (Il2CppObject *)oid,
            &value,
            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
    {
      v8 = Internal_Cryptography_OidLookup_TypeInfo;
      if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
        v8 = Internal_Cryptography_OidLookup_TypeInfo;
      }
      s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v8->static_fields->s_lateBoundOidToFriendlyName;
      if ( !s_oidToFriendlyName )
        goto LABEL_25;
      if ( !System_Collections_Concurrent_ConcurrentDictionary_object__object___TryGetValue(
              s_oidToFriendlyName,
              (Il2CppObject *)oid,
              &value,
              (const MethodInfo_3EED95C *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
      {
        if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, v9);
        value = (Il2CppObject *)Internal_Cryptography_OidLookup__NativeOidToFriendlyName(oid, v9, 0, v10);
        if ( value )
        {
          v11 = Internal_Cryptography_OidLookup_TypeInfo;
          if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
            v11 = Internal_Cryptography_OidLookup_TypeInfo;
          }
          s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v11->static_fields->s_lateBoundOidToFriendlyName;
          if ( s_oidToFriendlyName )
          {
            System_Collections_Concurrent_ConcurrentDictionary_object__object___TryAdd(
              s_oidToFriendlyName,
              (Il2CppObject *)oid,
              value,
              (const MethodInfo_3EED2D8 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
            return (System_String_o *)value;
          }
LABEL_25:
          sub_2213CDC(s_oidToFriendlyName, *(_QWORD *)&oidGroup);
        }
      }
    }
  }
  return (System_String_o *)value;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Internal_Cryptography_OidLookup__ToOid(
        System_String_o *friendlyName,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  Internal_Cryptography_OidLookup_c *v5; // x0
  System_Collections_Generic_Dictionary_object__object__o *s_friendlyNameToOid; // x0
  Internal_Cryptography_OidLookup_c *v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  System_String_o *result; // x0
  Internal_Cryptography_OidLookup_c *v11; // x0
  __int64 v12; // x0
  System_ArgumentNullException_o *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_597A7D2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
    sub_2213A60(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_2213A60(&Internal_Cryptography_OidLookup_TypeInfo);
    byte_597A7D2 = 1;
  }
  value = 0;
  if ( !friendlyName )
  {
    v12 = sub_2213A74(&System_ArgumentNullException_TypeInfo);
    v13 = (System_ArgumentNullException_o *)sub_2213CCC(v12);
    v14 = (System_String_o *)sub_2213A74(&StringLiteral_20620/*"friendlyName"*/);
    System_ArgumentNullException___ctor_76615216(v13, v14, 0);
    v15 = sub_2213A74(&Method_Internal_Cryptography_OidLookup_ToOid__);
    sub_2213BA0(v13, v15);
  }
  if ( !friendlyName->fields._stringLength )
    return 0;
  v5 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
    v5 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
      v5 = Internal_Cryptography_OidLookup_TypeInfo;
    }
  }
  s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v5->static_fields->s_friendlyNameToOid;
  if ( !s_friendlyNameToOid )
    goto LABEL_24;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         s_friendlyNameToOid,
         (Il2CppObject *)friendlyName,
         &value,
         (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  v7 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
    v7 = Internal_Cryptography_OidLookup_TypeInfo;
  }
  s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v7->static_fields->s_lateBoundFriendlyNameToOid;
  if ( !s_friendlyNameToOid )
    goto LABEL_24;
  if ( System_Collections_Concurrent_ConcurrentDictionary_object__object___TryGetValue(
         (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)s_friendlyNameToOid,
         (Il2CppObject *)friendlyName,
         &value,
         (const MethodInfo_3EED95C *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, v8);
  result = Internal_Cryptography_OidLookup__NativeFriendlyNameToOid(friendlyName, v8, 0, v9);
  value = (Il2CppObject *)result;
  if ( result )
  {
    v11 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !*(&Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
      v11 = Internal_Cryptography_OidLookup_TypeInfo;
    }
    s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->s_lateBoundFriendlyNameToOid;
    if ( s_friendlyNameToOid )
    {
      System_Collections_Concurrent_ConcurrentDictionary_object__object___TryAdd(
        (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)s_friendlyNameToOid,
        (Il2CppObject *)friendlyName,
        value,
        (const MethodInfo_3EED2D8 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
      return (System_String_o *)value;
    }
LABEL_24:
    sub_2213CDC(s_friendlyNameToOid, *(_QWORD *)&oidGroup);
  }
  return result;
}


void Internal_Cryptography_OidLookup___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597A7D6 & 1) == 0 )
  {
    sub_2213A60(&Internal_Cryptography_OidLookup___c_TypeInfo);
    byte_597A7D6 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(Internal_Cryptography_OidLookup___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9 = (struct Internal_Cryptography_OidLookup___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void Internal_Cryptography_OidLookup___c___ctor(Internal_Cryptography_OidLookup___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *Internal_Cryptography_OidLookup___c____cctor_b__10_0(
        Internal_Cryptography_OidLookup___c_o *this,
        System_Collections_Generic_KeyValuePair_string__string__o kvp,
        const MethodInfo *method)
{
  System_String_o *value; // x19

  value = kvp.fields.value;
  if ( (byte_597A7D7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    byte_597A7D7 = 1;
  }
  return value;
}


System_String_o *Internal_Cryptography_OidLookup___c____cctor_b__10_1(
        Internal_Cryptography_OidLookup___c_o *this,
        System_Collections_Generic_KeyValuePair_string__string__o kvp,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = kvp.fields.key;
  if ( (byte_597A7D8 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    byte_597A7D8 = 1;
  }
  return key;
}


void Internal_Cryptography_Pal_CertificateData___ctor(
        Internal_Cryptography_Pal_CertificateData_o *this,
        System_Byte_array *rawData,
        const MethodInfo *method)
{
  System_Security_Cryptography_DerSequenceReader_o *v5; // x21
  System_Security_Cryptography_DerSequenceReader_o *Sequence; // x0
  __int64 v7; // x1
  System_Security_Cryptography_DerSequenceReader_o *v8; // x22
  unsigned int Integer; // w0
  __int64 v10; // x0
  System_Security_Cryptography_CryptographicException_o *v11; // x19
  struct System_Byte_array *IntegerBytes; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Security_Cryptography_DerSequenceReader_o *v19; // x23
  struct System_String_o *OidAsString; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  struct System_Byte_array *NextEncodedValue; // x1
  _QWORD *v35; // x24
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  System_Byte_array *v39; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v40; // x24
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_Security_Cryptography_DerSequenceReader_o *v47; // x23
  System_Byte_array *v48; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v49; // x24
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_Byte_array *v56; // x0
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  System_Byte_array *SubjectPublicKeyInfo; // x24
  System_Security_Cryptography_DerSequenceReader_o *v64; // x23
  System_Security_Cryptography_DerSequenceReader_o *v65; // x24
  struct System_String_o *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  __int64 v73; // x1
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  struct System_Byte_array *v80; // x1
  _QWORD *v81; // x25
  __int64 v82; // x8
  __int64 v83; // x0
  __int64 v84; // x0
  struct System_Byte_array *BitString; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  System_String_o *v92; // x2
  System_String_o *v93; // x3
  int32_t v94; // w4
  int32_t v95; // w5
  bool v96; // w6
  bool v97; // w7
  struct System_Byte_array *v98; // x0
  int32_t v99; // w1
  struct System_Byte_array **p_IssuerUniqueId; // x0
  System_String_o *v101; // x2
  System_String_o *v102; // x3
  int32_t v103; // w4
  int32_t v104; // w5
  bool v105; // w6
  bool v106; // w7
  struct System_Byte_array *v107; // x0
  int32_t v108; // w1
  struct System_Byte_array **p_SubjectUniqueId; // x0
  System_Collections_Generic_List_object__o *v110; // x24
  System_String_o *v111; // x2
  System_String_o *v112; // x3
  int32_t v113; // w4
  int32_t v114; // w5
  bool v115; // w6
  bool v116; // w7
  System_Security_Cryptography_DerSequenceReader_o *v117; // x24
  System_Security_Cryptography_DerSequenceReader_o *v118; // x25
  System_String_o *v119; // x28
  bool v120; // w29
  System_Byte_array *OctetString; // x0
  System_Collections_Generic_List_object__o *Extensions; // x26
  System_Byte_array *v123; // x19
  System_Security_Cryptography_X509Certificates_X509Extension_o *v124; // x27
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  struct System_Object_array *items; // x8
  _QWORD *v132; // x9
  __int64 size; // x10
  Il2CppClass **v134; // x0
  System_Security_Cryptography_DerSequenceReader_o *v135; // x22
  struct System_String_o *v136; // x0
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  __int64 v143; // x1
  System_String_o *v144; // x2
  System_String_o *v145; // x3
  int32_t v146; // w4
  int32_t v147; // w5
  bool v148; // w6
  bool v149; // w7
  struct System_Byte_array *v150; // x1
  _QWORD *v151; // x23
  __int64 v152; // x8
  __int64 v153; // x0
  __int64 v154; // x0
  struct System_Byte_array *v155; // x0
  System_String_o *v156; // x2
  System_String_o *v157; // x3
  int32_t v158; // w4
  int32_t v159; // w5
  bool v160; // w6
  bool v161; // w7
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  __int64 v168; // x0
  System_String_o *v169; // x0
  __int64 v170; // x0
  struct System_Byte_array *v171; // [xsp+8h] [xbp-68h]

  if ( (byte_597A7DB & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_byte___);
    sub_2213A60(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_X509Extension__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_X509Extension___ctor__);
    sub_2213A60(&System_Collections_Generic_List_X509Extension__TypeInfo);
    sub_2213A60(&System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
    sub_2213A60(&System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo);
    byte_597A7DB = 1;
  }
  v5 = (System_Security_Cryptography_DerSequenceReader_o *)sub_2213CCC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  v171 = rawData;
  System_Security_Cryptography_DerSequenceReader___ctor(v5, rawData, 0);
  if ( !v5 )
    goto LABEL_85;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v5, 0);
  if ( !Sequence )
    goto LABEL_85;
  v8 = Sequence;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(Sequence, 0) == 160 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0);
    if ( !Sequence )
      goto LABEL_85;
    Integer = System_Security_Cryptography_DerSequenceReader__ReadInteger(Sequence, 0);
    this->fields.Version = Integer;
    if ( Integer >= 3 )
    {
      v10 = sub_2213A74(&System_Security_Cryptography_CryptographicException_TypeInfo);
      v11 = (System_Security_Cryptography_CryptographicException_o *)sub_2213CCC(v10);
      System_Security_Cryptography_CryptographicException___ctor(v11, 0);
      goto LABEL_87;
    }
  }
  else
  {
    if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0) != 2 )
      goto LABEL_86;
    this->fields.Version = 0;
  }
  IntegerBytes = System_Security_Cryptography_DerSequenceReader__ReadIntegerBytes(v8, 0);
  this->fields.SerialNumber = IntegerBytes;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SerialNumber,
    (int32_t)IntegerBytes,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0);
  if ( !Sequence )
    goto LABEL_85;
  v19 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  this->fields.TbsSignature.fields.AlgorithmId = OidAsString;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.TbsSignature,
    (int32_t)OidAsString,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v19, 0) )
  {
    NextEncodedValue = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v19, 0);
  }
  else
  {
    v35 = Method_System_Array_Empty_byte___;
    v36 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v36 )
    {
      sub_224B964();
      v36 = v35[7];
    }
    v37 = *(_QWORD *)(v36 + 16);
    if ( (*(_WORD *)(v37 + 309) & 1) == 0 )
      v37 = sub_224B908();
    if ( !*(_DWORD *)(v37 + 228) )
      j_il2cpp_runtime_class_init_0(v37, v27);
    v38 = *(_QWORD *)(v35[7] + 16LL);
    if ( (*(_WORD *)(v38 + 309) & 1) == 0 )
      v38 = sub_224B908();
    NextEncodedValue = **(struct System_Byte_array ***)(v38 + 184);
  }
  this->fields.TbsSignature.fields.Parameters = NextEncodedValue;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.TbsSignature.fields.Parameters,
    (int32_t)NextEncodedValue,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v19, 0) )
    goto LABEL_86;
  v39 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v8, 0);
  v40 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_2213CCC(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor(v40, v39, 0);
  this->fields.Issuer = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.Issuer, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0);
  if ( !Sequence )
    goto LABEL_85;
  v47 = Sequence;
  this->fields.NotBefore = System_Security_Cryptography_DerSequenceReader__ReadX509Date(Sequence, 0);
  this->fields.NotAfter = System_Security_Cryptography_DerSequenceReader__ReadX509Date(v47, 0);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v47, 0) )
  {
LABEL_86:
    v168 = sub_2213A74(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v11 = (System_Security_Cryptography_CryptographicException_o *)sub_2213CCC(v168);
    v169 = (System_String_o *)sub_2213A74(&StringLiteral_2137/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_75865776(v11, v169, 0);
LABEL_87:
    v170 = sub_2213A74(&Method_Internal_Cryptography_Pal_CertificateData__ctor__);
    sub_2213BA0(v11, v170);
  }
  v48 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v8, 0);
  v49 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_2213CCC(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor(v49, v48, 0);
  this->fields.Subject = v49;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.Subject, (int32_t)v49, v50, v51, v52, v53, v54, v55);
  v56 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v8, 0);
  this->fields.SubjectPublicKeyInfo = v56;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SubjectPublicKeyInfo,
    (int32_t)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  SubjectPublicKeyInfo = this->fields.SubjectPublicKeyInfo;
  v64 = (System_Security_Cryptography_DerSequenceReader_o *)sub_2213CCC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor(v64, SubjectPublicKeyInfo, 0);
  if ( !v64 )
    goto LABEL_85;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v64, 0);
  if ( !Sequence )
    goto LABEL_85;
  v65 = Sequence;
  v66 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  this->fields.PublicKeyAlgorithm.fields.AlgorithmId = v66;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.PublicKeyAlgorithm,
    (int32_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v65, 0) )
  {
    v80 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v65, 0);
  }
  else
  {
    v81 = Method_System_Array_Empty_byte___;
    v82 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v82 )
    {
      sub_224B964();
      v82 = v81[7];
    }
    v83 = *(_QWORD *)(v82 + 16);
    if ( (*(_WORD *)(v83 + 309) & 1) == 0 )
      v83 = sub_224B908();
    if ( !*(_DWORD *)(v83 + 228) )
      j_il2cpp_runtime_class_init_0(v83, v73);
    v84 = *(_QWORD *)(v81[7] + 16LL);
    if ( (*(_WORD *)(v84 + 309) & 1) == 0 )
      v84 = sub_224B908();
    v80 = **(struct System_Byte_array ***)(v84 + 184);
  }
  this->fields.PublicKeyAlgorithm.fields.Parameters = v80;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.PublicKeyAlgorithm.fields.Parameters,
    (int32_t)v80,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v65, 0) )
    goto LABEL_86;
  BitString = System_Security_Cryptography_DerSequenceReader__ReadBitString(v64, 0);
  this->fields.PublicKey = BitString;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.PublicKey,
    (int32_t)BitString,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v64, 0) )
    goto LABEL_86;
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0) == 161 )
  {
    v98 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v8, 0);
    v99 = (int)v98;
    this->fields.IssuerUniqueId = v98;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
  }
  else
  {
    v99 = 0;
    this->fields.IssuerUniqueId = 0;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_IssuerUniqueId, v99, v92, v93, v94, v95, v96, v97);
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0) == 162 )
  {
    v107 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v8, 0);
    v108 = (int)v107;
    this->fields.SubjectUniqueId = v107;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
  }
  else
  {
    v108 = 0;
    this->fields.SubjectUniqueId = 0;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
  }
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_SubjectUniqueId, v108, v101, v102, v103, v104, v105, v106);
  v110 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_X509Extension__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v110,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_X509Extension___ctor__);
  this->fields.Extensions = (struct System_Collections_Generic_List_X509Extension__o *)v110;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.Extensions,
    (int32_t)v110,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  if ( this->fields.Version >= 2
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0) == 163 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0);
    if ( Sequence )
    {
      Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(Sequence, 0);
      if ( Sequence )
      {
        v117 = Sequence;
        while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v117, 0) )
        {
          Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v117, 0);
          if ( !Sequence )
            goto LABEL_85;
          v118 = Sequence;
          v119 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
          v120 = System_Security_Cryptography_DerSequenceReader__PeekTag(v118, 0) == 1
              && System_Security_Cryptography_DerSequenceReader__ReadBoolean(v118, 0);
          OctetString = System_Security_Cryptography_DerSequenceReader__ReadOctetString(v118, 0);
          Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
          v123 = OctetString;
          v124 = (System_Security_Cryptography_X509Certificates_X509Extension_o *)sub_2213CCC(System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo);
          System_Security_Cryptography_X509Certificates_X509Extension___ctor_82233672(v124, v119, v123, v120, 0);
          if ( !Extensions )
            goto LABEL_85;
          items = Extensions->fields._items;
          v132 = Method_System_Collections_Generic_List_X509Extension__Add__;
          ++Extensions->fields._version;
          if ( !items )
            goto LABEL_85;
          size = Extensions->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              Extensions,
              (Il2CppObject *)v124,
              *(const MethodInfo_4483C64 **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
          }
          else
          {
            v134 = &items->obj.klass + size;
            Extensions->fields._size = size + 1;
            v134[4] = (Il2CppClass *)v124;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)(v134 + 4),
              (int32_t)v124,
              v125,
              v126,
              v127,
              v128,
              v129,
              v130);
          }
          if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v118, 0) )
            goto LABEL_86;
        }
        goto LABEL_69;
      }
    }
LABEL_85:
    sub_2213CDC(Sequence, v7);
  }
LABEL_69:
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0) )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v5, 0);
  if ( !Sequence )
    goto LABEL_85;
  v135 = Sequence;
  v136 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  this->fields.SignatureAlgorithm.fields.AlgorithmId = v136;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SignatureAlgorithm,
    (int32_t)v136,
    v137,
    v138,
    v139,
    v140,
    v141,
    v142);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v135, 0) )
  {
    v150 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v135, 0);
  }
  else
  {
    v151 = Method_System_Array_Empty_byte___;
    v152 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v152 )
    {
      sub_224B964();
      v152 = v151[7];
    }
    v153 = *(_QWORD *)(v152 + 16);
    if ( (*(_WORD *)(v153 + 309) & 1) == 0 )
      v153 = sub_224B908();
    if ( !*(_DWORD *)(v153 + 228) )
      j_il2cpp_runtime_class_init_0(v153, v143);
    v154 = *(_QWORD *)(v151[7] + 16LL);
    if ( (*(_WORD *)(v154 + 309) & 1) == 0 )
      v154 = sub_224B908();
    v150 = **(struct System_Byte_array ***)(v154 + 184);
  }
  this->fields.SignatureAlgorithm.fields.Parameters = v150;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SignatureAlgorithm.fields.Parameters,
    (int32_t)v150,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v135, 0) )
    goto LABEL_86;
  v155 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v5, 0);
  this->fields.SignatureValue = v155;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.SignatureValue,
    (int32_t)v155,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v5, 0) )
    goto LABEL_86;
  this->fields.RawData = v171;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)this, (int32_t)v171, v162, v163, v164, v165, v166, v167);
}


System_String_o *Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(
        System_Byte_array *extensionBytes,
        int32_t matchType,
        System_String_o *otherOid,
        const MethodInfo *method)
{
  System_Security_Cryptography_DerSequenceReader_o *v7; // x21
  System_Security_Cryptography_DerSequenceReader_o *Sequence; // x0
  __int64 v9; // x1
  unsigned __int8 v10; // w23
  System_Security_Cryptography_DerSequenceReader_o *v11; // x22
  System_String_o *OidAsString; // x0
  __int64 v14; // x0
  System_Security_Cryptography_CryptographicException_o *v15; // x19
  System_String_o *v16; // x0
  __int64 v17; // x0

  if ( (byte_597A7DE & 1) == 0 )
  {
    sub_2213A60(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    byte_597A7DE = 1;
  }
  v7 = (System_Security_Cryptography_DerSequenceReader_o *)sub_2213CCC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor(v7, extensionBytes, 0);
  if ( !v7 )
    goto LABEL_21;
  if ( matchType )
    v10 = matchType | 0x80;
  else
    v10 = -96;
  if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v7, 0) )
    return 0;
  while ( System_Security_Cryptography_DerSequenceReader__PeekTag(v7, 0) != v10 )
  {
LABEL_12:
    System_Security_Cryptography_DerSequenceReader__SkipValue(v7, 0);
LABEL_15:
    if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v7, 0) )
      return 0;
  }
  if ( matchType )
  {
    if ( (unsigned int)(matchType - 1) < 2 || matchType == 6 )
      return System_Security_Cryptography_DerSequenceReader__ReadIA5String(v7, 0);
    goto LABEL_12;
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v7, 0);
  if ( !Sequence )
    goto LABEL_21;
  v11 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  if ( !System_String__op_Equality(OidAsString, otherOid, 0) )
    goto LABEL_15;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v11, 0) != 160 )
  {
    v14 = sub_2213A74(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v15 = (System_Security_Cryptography_CryptographicException_o *)sub_2213CCC(v14);
    v16 = (System_String_o *)sub_2213A74(&StringLiteral_2137/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_75865776(v15, v16, 0);
    v17 = sub_2213A74(&Method_Internal_Cryptography_Pal_CertificateData_FindAltNameMatch__);
    sub_2213BA0(v15, v17);
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v11, 0);
  if ( !Sequence )
LABEL_21:
    sub_2213CDC(Sequence, v9);
  return System_Security_Cryptography_DerSequenceReader__ReadUtf8String(Sequence, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Internal_Cryptography_Pal_CertificateData__GetNameInfo(
        Internal_Cryptography_Pal_CertificateData_o *this,
        int32_t nameType,
        bool forIssuer,
        const MethodInfo *method)
{
  System_String_o *SimpleNameInfo; // x19
  System_String_o **v8; // x8
  System_String_o *v9; // x23
  System_Nullable_Int32Enum__o v10; // x0
  int32_t v11; // w1
  __int64 v12; // x8
  System_String_o **v13; // x8
  System_Nullable_Int32Enum__o v14; // x0
  System_String_o *v15; // x24
  System_Collections_Generic_List_object__o *Extensions; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x19
  Il2CppClass *klass; // x8
  System_Byte_array *monitor; // x19
  System_Nullable_Int32Enum__o v22; // x0
  int32_t Value; // w1
  const MethodInfo *v24; // x3
  int v25; // w24
  struct System_Collections_Generic_List_T__o *list; // x23
  __int64 *v27; // x8
  System_String_o *v28; // x22
  __int64 v29; // x8
  System_Collections_Generic_List_object__c *v30; // x8
  System_Collections_Generic_List_object__o *v31; // x20
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x20
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x20
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  System_String_o *v49; // x0
  System_String_o *v50; // x1
  System_String_o *v51; // x21
  int v52; // w22
  __int64 v53; // x21
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+0h] [xbp-90h] BYREF
  __int64 v60; // [xsp+18h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v61; // [xsp+20h] [xbp-70h] BYREF
  __int64 v62; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_597A7DC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_X509Extension__get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_2213A60(&Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    sub_2213A60(&Method_System_Nullable_GeneralNameType___ctor__);
    sub_2213A60(&Method_System_Nullable_GeneralNameType__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_GeneralNameType__get_Value__);
    sub_2213A60(&StringLiteral_1418/*"2.5.29.17"*/);
    sub_2213A60(&StringLiteral_1305/*"1.2.840.113549.1.9.1"*/);
    sub_2213A60(&StringLiteral_1367/*"1.3.6.1.4.1.311.20.2.3"*/);
    sub_2213A60(&StringLiteral_1433/*"2.5.4.3"*/);
    sub_2213A60(&StringLiteral_1419/*"2.5.29.18"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597A7DC = 1;
  }
  v62 = 0;
  memset(&v61, 0, sizeof(v61));
  v60 = 0;
  if ( !nameType )
  {
    v12 = 72;
    if ( forIssuer )
      v12 = 48;
    SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
                       *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData
                                                                                                 + v12),
                       *(const MethodInfo **)&nameType);
    if ( SimpleNameInfo )
      return SimpleNameInfo;
    if ( forIssuer )
      v13 = (System_String_o **)&StringLiteral_1419/*"2.5.29.18"*/;
    else
      v13 = (System_String_o **)&StringLiteral_1418/*"2.5.29.17"*/;
    v9 = *v13;
    v62 = 0;
    goto LABEL_20;
  }
  SimpleNameInfo = 0;
  if ( forIssuer )
    v8 = (System_String_o **)&StringLiteral_1419/*"2.5.29.18"*/;
  else
    v8 = (System_String_o **)&StringLiteral_1418/*"2.5.29.17"*/;
  v9 = *v8;
  v62 = 0;
  if ( nameType > 2 )
  {
    if ( (unsigned int)(nameType - 3) >= 2 )
    {
      if ( nameType != 5 )
        goto LABEL_38;
      v10 = (System_Nullable_Int32Enum__o)&v62;
      v11 = 6;
    }
    else
    {
      v10 = (System_Nullable_Int32Enum__o)&v62;
      v11 = 2;
    }
    goto LABEL_23;
  }
  if ( nameType == 1 )
  {
LABEL_20:
    v10 = (System_Nullable_Int32Enum__o)&v62;
    v11 = 1;
LABEL_23:
    System_Nullable_Int32Enum____ctor(
      v10,
      v11,
      (const MethodInfo_45E4698 *)Method_System_Nullable_GeneralNameType___ctor__);
    v15 = 0;
    goto LABEL_24;
  }
  if ( nameType != 2 )
    goto LABEL_38;
  v14 = (System_Nullable_Int32Enum__o)&v62;
  System_Nullable_Int32Enum____ctor(v14, 0, (const MethodInfo_45E4698 *)Method_System_Nullable_GeneralNameType___ctor__);
  v15 = (System_String_o *)StringLiteral_1367/*"1.3.6.1.4.1.311.20.2.3"*/;
LABEL_24:
  if ( !(_BYTE)v62 )
  {
    SimpleNameInfo = 0;
    goto LABEL_38;
  }
  Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
  if ( !Extensions )
    goto LABEL_86;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    Extensions,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
  v61 = v59;
  v59.fields._list = 0;
  *(_QWORD *)&v59.fields._index = &v61;
  while ( 1 )
  {
    v17 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v61,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
    if ( !v17 )
      break;
    current = v61.fields._current;
    if ( !v61.fields._current )
      sub_2213CDC(v17, v18);
    klass = v61.fields._current[1].klass;
    if ( !klass )
      sub_2213CDC(v17, v18);
    if ( System_String__op_Equality((System_String_o *)klass->_1.name, v9, 0) )
    {
      monitor = (System_Byte_array *)current[1].monitor;
      v22 = (System_Nullable_Int32Enum__o)&v62;
      Value = System_Nullable_Int32Enum___get_Value(
                v22,
                (const MethodInfo_45E46B0 *)Method_System_Nullable_GeneralNameType__get_Value__);
      SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(monitor, Value, v15, v24);
      if ( SimpleNameInfo )
      {
        v25 = 16;
        goto LABEL_34;
      }
    }
  }
  SimpleNameInfo = 0;
  v25 = 13;
LABEL_34:
  list = v59.fields._list;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    *(System_Collections_Generic_List_Enumerator_object__o **)&v59.fields._index,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
  if ( list )
    sub_2213CD4(list);
  if ( v25 == 13 )
  {
LABEL_38:
    if ( nameType == 1 )
    {
      v27 = &StringLiteral_1305/*"1.2.840.113549.1.9.1"*/;
    }
    else
    {
      if ( nameType != 3 )
        return (System_String_o *)StringLiteral_1/*""*/;
      v27 = &StringLiteral_1433/*"2.5.4.3"*/;
    }
    v28 = (System_String_o *)*v27;
    if ( !*v27 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v29 = 72;
    if ( forIssuer )
      v29 = 48;
    Extensions = (System_Collections_Generic_List_object__o *)Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
                                                                *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData + v29),
                                                                *(const MethodInfo **)&nameType);
    if ( Extensions )
    {
      v30 = Extensions->klass;
      v31 = Extensions;
      v32 = *(unsigned __int16 *)&Extensions->klass->_2.rank;
      if ( *(_WORD *)&Extensions->klass->_2.rank )
      {
        p_offset = &v30->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
        {
          --v32;
          p_offset += 4;
          if ( !v32 )
            goto LABEL_50;
        }
        v34 = (__int64)&v30->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_50:
        v34 = sub_224BC3C(Extensions, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0);
      }
      v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD))v34)(
              v31,
              *(_QWORD *)(v34 + 8));
      v60 = v35;
      v59.fields._list = 0;
      *(_QWORD *)&v59.fields._index = &v60;
      while ( 1 )
      {
        v37 = v60;
        if ( !v60 )
          sub_2213CDC(v35, v36);
        v38 = *(_QWORD *)v60;
        v39 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
        {
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v40 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v39;
            v40 += 4;
            if ( !v39 )
              goto LABEL_58;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_58:
          v41 = sub_224BC3C(v60, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
        if ( (v42 & 1) == 0 )
          break;
        v44 = v60;
        if ( !v60 )
          sub_2213CDC(v42, v43);
        v45 = *(_QWORD *)v60;
        v46 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
        {
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v47 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_66;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_66:
          v48 = sub_224BC3C(v60, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0);
        }
        v49 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
        v51 = v50;
        v35 = System_String__op_Equality(v49, v28, 0);
        if ( (v35 & 1) != 0 )
        {
          v52 = 16;
          SimpleNameInfo = v51;
          goto LABEL_71;
        }
      }
      v52 = 20;
LABEL_71:
      v53 = v60;
      if ( v60 )
      {
        v54 = *(_QWORD *)v60;
        v55 = *(unsigned __int16 *)(*(_QWORD *)v60 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v60 + 302LL) )
        {
          v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
          {
            --v55;
            v56 += 4;
            if ( !v55 )
              goto LABEL_76;
          }
          v57 = v54 + 16LL * *v56 + 312;
        }
        else
        {
LABEL_76:
          v57 = sub_224BC3C(v60, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
      }
      if ( v52 != 20 )
        return SimpleNameInfo;
      return (System_String_o *)StringLiteral_1/*""*/;
    }
LABEL_86:
    sub_2213CDC(Extensions, *(_QWORD *)&nameType);
  }
  return SimpleNameInfo;
}


System_String_o *Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *ReverseRdns; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c *klass; // x8
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *v6; // x19
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x22
  System_String_o *v13; // x23
  System_String_o *v14; // x24
  System_String_o *v15; // x25
  System_String_o *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x9
  int *v19; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  System_String_o *v25; // x0
  System_String_o *v26; // x1
  System_String_o *v27; // x20
  int v28; // w26
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v34; // [xsp+18h] [xbp-68h]

  if ( (byte_597A7DD & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_2213A60(&StringLiteral_1305/*"1.2.840.113549.1.9.1"*/);
    sub_2213A60(&StringLiteral_1433/*"2.5.4.3"*/);
    sub_2213A60(&StringLiteral_1426/*"2.5.4.11"*/);
    sub_2213A60(&StringLiteral_1425/*"2.5.4.10"*/);
    byte_597A7DD = 1;
  }
  ReverseRdns = Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(name, method);
  if ( !ReverseRdns )
    sub_2213CDC(0, v4);
  klass = ReverseRdns->klass;
  v6 = ReverseRdns;
  v7 = *(unsigned __int16 *)&ReverseRdns->klass->_2.rank;
  if ( *(_WORD *)&ReverseRdns->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v9 = sub_224BC3C(ReverseRdns, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *, _QWORD))v9)(
          v6,
          *(_QWORD *)(v9 + 8));
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v34 = v10;
LABEL_11:
  v16 = v13;
LABEL_12:
  v13 = v16;
  v16 = v14;
LABEL_13:
  v14 = v16;
  v16 = v15;
  while ( 1 )
  {
    v15 = v16;
    if ( !v34 )
      sub_2213CDC(v10, v11);
    v17 = *(_QWORD *)v34;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v19 = (int *)(*(_QWORD *)(v17 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v19 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v18;
        v19 += 4;
        if ( !v18 )
          goto LABEL_19;
      }
      v20 = v17 + 16LL * *v19 + 312;
    }
    else
    {
LABEL_19:
      v20 = sub_224BC3C(v34, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v34, *(_QWORD *)(v20 + 8)) & 1) == 0 )
    {
      v16 = 0;
      v28 = 10;
      goto LABEL_37;
    }
    v21 = *(_QWORD *)v34;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v23 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_26;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_26:
      v24 = sub_224BC3C(v34, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0);
    }
    v25 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v34, *(_QWORD *)(v24 + 8));
    v16 = v26;
    v27 = v25;
    if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_1433/*"2.5.4.3"*/, 0) )
      break;
    v10 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_1426/*"2.5.4.11"*/, 0);
    if ( (v10 & 1) == 0 )
    {
      v10 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_1425/*"2.5.4.10"*/, 0);
      if ( (v10 & 1) != 0 )
        goto LABEL_13;
      v10 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_1305/*"1.2.840.113549.1.9.1"*/, 0);
      if ( (v10 & 1) == 0 )
      {
        if ( !v12 )
          v12 = v16;
        goto LABEL_11;
      }
      goto LABEL_12;
    }
  }
  v28 = 9;
LABEL_37:
  v29 = *(_QWORD *)v34;
  v30 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
    {
      --v30;
      v31 += 4;
      if ( !v30 )
        goto LABEL_41;
    }
    v32 = v29 + 16LL * *v31 + 312;
  }
  else
  {
LABEL_41:
    v32 = sub_224BC3C(v34, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v32)(v34, *(_QWORD *)(v32 + 8));
  if ( v28 == 10 )
  {
    v16 = v15;
    if ( !v15 )
    {
      v16 = v14;
      if ( !v14 )
      {
        if ( v13 )
          return v13;
        else
          return v12;
      }
    }
  }
  return v16;
}


System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_597A7DF & 1) == 0 )
  {
    sub_2213A60(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    byte_597A7DF = 1;
  }
  v3 = sub_2213CCC(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 40) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 56) = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 56), (int32_t)name, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)v3;
}


void Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21___ctor(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__MoveNext(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v2; // x19
  int32_t _1__state; // w8
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name; // x8
  System_Byte_array *raw; // x21
  System_Security_Cryptography_DerSequenceReader_o *v6; // x20
  System_Collections_Generic_Stack_T__o *v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Collections_Generic_Stack_T__o *rdnReaders_5__2; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v28; // x21
  Il2CppObject *OidAsString; // x20
  const MethodInfo_43A0D68 *v30; // x4
  unsigned int v31; // w8
  Il2CppObject *v32; // x2
  System_String_o *Utf8String; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  bool result; // w0
  struct System_Collections_Generic_KeyValuePair_string__string__o v41; // [xsp+0h] [xbp-50h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v42; // 0:x0.16

  v2 = this;
  if ( (byte_597A7E0 & 1) == 0 )
  {
    sub_2213A60(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Stack_DerSequenceReader__get_Count__);
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_2213A60(&System_Collections_Generic_Stack_DerSequenceReader__TypeInfo);
    byte_597A7E0 = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
    goto LABEL_13;
  }
  if ( !_1__state )
  {
    name = v2->fields.name;
    v2->fields.__1__state = -1;
    if ( !name )
      goto LABEL_36;
    raw = name->fields._raw;
    v6 = (System_Security_Cryptography_DerSequenceReader_o *)sub_2213CCC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
    System_Security_Cryptography_DerSequenceReader___ctor(v6, raw, 0);
    v7 = (System_Collections_Generic_Stack_T__o *)sub_2213CCC(System_Collections_Generic_Stack_DerSequenceReader__TypeInfo);
    System_Collections_Generic_Stack_object____ctor(
      v7,
      (const MethodInfo_3B5CB8C *)Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    v2->fields._rdnReaders_5__2 = (struct System_Collections_Generic_Stack_DerSequenceReader__o *)v7;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&v2->fields._rdnReaders_5__2,
      (int32_t)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    if ( !v6 )
      goto LABEL_36;
    if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v6, 0) )
      goto LABEL_32;
    do
    {
      rdnReaders_5__2 = (System_Collections_Generic_Stack_T__o *)v2->fields._rdnReaders_5__2;
      this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)System_Security_Cryptography_DerSequenceReader__ReadSet(
                                                                                     v6,
                                                                                     0);
      if ( !rdnReaders_5__2 )
        goto LABEL_36;
      System_Collections_Generic_Stack_object___Push(
        rdnReaders_5__2,
        (Il2CppObject *)this,
        (const MethodInfo_3B5D25C *)Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    }
    while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v6, 0) );
LABEL_32:
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v2->fields._rdnReaders_5__2;
    if ( !this )
LABEL_36:
      sub_2213CDC(this, method);
    if ( SLODWORD(this->fields.__2__current.fields.key) > 0 )
    {
      v15 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_3B5D160 *)Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
      v2->fields._rdnReader_5__3 = (struct System_Security_Cryptography_DerSequenceReader_o *)v15;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v2->fields._rdnReader_5__3,
        (int32_t)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      while ( 1 )
      {
LABEL_13:
        this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v2->fields._rdnReader_5__3;
        if ( !this )
          goto LABEL_36;
        if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(
                (System_Security_Cryptography_DerSequenceReader_o *)this,
                0) )
        {
          v2->fields._rdnReader_5__3 = 0;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields._rdnReader_5__3, 0, v22, v23, v24, v25, v26, v27);
          goto LABEL_32;
        }
        this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v2->fields._rdnReader_5__3;
        if ( !this )
          goto LABEL_36;
        this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)System_Security_Cryptography_DerSequenceReader__ReadSequence(
                                                                                       (System_Security_Cryptography_DerSequenceReader_o *)this,
                                                                                       0);
        if ( !this )
          goto LABEL_36;
        v28 = this;
        OidAsString = (Il2CppObject *)System_Security_Cryptography_DerSequenceReader__ReadOidAsString(
                                        (System_Security_Cryptography_DerSequenceReader_o *)this,
                                        0);
        v31 = System_Security_Cryptography_DerSequenceReader__PeekTag(
                (System_Security_Cryptography_DerSequenceReader_o *)v28,
                0);
        v32 = 0;
        if ( v31 <= 0x13 )
        {
          if ( v31 == 12 )
          {
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadUtf8String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v28,
                           0);
            goto LABEL_28;
          }
          if ( v31 == 19 )
          {
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadPrintableString(
                           (System_Security_Cryptography_DerSequenceReader_o *)v28,
                           0);
            goto LABEL_28;
          }
        }
        else
        {
          switch ( v31 )
          {
            case 0x14u:
              Utf8String = System_Security_Cryptography_DerSequenceReader__ReadT61String(
                             (System_Security_Cryptography_DerSequenceReader_o *)v28,
                             0);
              goto LABEL_28;
            case 0x16u:
              Utf8String = System_Security_Cryptography_DerSequenceReader__ReadIA5String(
                             (System_Security_Cryptography_DerSequenceReader_o *)v28,
                             0);
              goto LABEL_28;
            case 0x1Eu:
              Utf8String = System_Security_Cryptography_DerSequenceReader__ReadBMPString(
                             (System_Security_Cryptography_DerSequenceReader_o *)v28,
                             0);
LABEL_28:
              v32 = (Il2CppObject *)Utf8String;
              break;
          }
        }
        if ( v32 )
        {
          v42.fields.key = (Il2CppObject *)&v41;
          v42.fields.value = OidAsString;
          v41 = (struct System_Collections_Generic_KeyValuePair_string__string__o)0LL;
          System_Collections_Generic_KeyValuePair_object__object____ctor(
            v42,
            v32,
            (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_string__string___ctor__,
            v30);
          v2->fields.__2__current = v41;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current, 0, v34, v35, v36, v37, v38, v39);
          result = 1;
          v2->fields.__1__state = 1;
          return result;
        }
      }
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o *Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v10; // x20
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *_3__name; // x1

  if ( (byte_597A7E2 & 1) == 0 )
  {
    sub_2213A60(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    byte_597A7E2 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_2213CCC(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__name = this->fields.__3__name;
  v10->fields.name = _3__name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.name, (int32_t)_3__name, v4, v5, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o *)v10;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_KeyValuePair_string__string__o Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  struct System_String_o *value; // x1
  struct System_String_o *key; // x0
  System_Collections_Generic_KeyValuePair_string__string__o result; // 0:x0.16

  value = this->fields.__2__current.fields.value;
  key = this->fields.__2__current.fields.key;
  result.fields.value = value;
  result.fields.key = key;
  return result;
}


void __noreturn Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_IEnumerator_Reset(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_IEnumerator_get_Current(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_KeyValuePair_string__string__o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_597A7E1 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Generic_KeyValuePair_string__string__TypeInfo);
    byte_597A7E1 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(
                           System_Collections_Generic_KeyValuePair_string__string__TypeInfo,
                           &_2__current);
}


void Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_IDisposable_Dispose(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  ;
}


void Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks___ctor(
        Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Exception_o *Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks__CreateMissingMetadataException(
        Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *this,
        System_Type_o *attributeType,
        const MethodInfo *method)
{
  System_Reflection_MissingMetadataException_o *v3; // x19

  if ( (byte_5978896 & 1) == 0 )
  {
    sub_2213A60(&System_Reflection_MissingMetadataException_TypeInfo);
    byte_5978896 = 1;
  }
  v3 = (System_Reflection_MissingMetadataException_o *)sub_2213CCC(System_Reflection_MissingMetadataException_TypeInfo);
  System_Reflection_MissingMetadataException___ctor(v3, 0);
  return (System_Exception_o *)v3;
}


void Internal_Runtime_Augments_RuntimeAugments___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5978895 & 1) == 0 )
  {
    sub_2213A60(&Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
    sub_2213A60(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    byte_5978895 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
  System_Object___ctor(v1, 0);
  Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields->s_reflectionExecutionDomainCallbacks = (struct Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __noreturn Internal_Runtime_Augments_RuntimeAugments__ReportUnhandledException(
        System_Exception_o *exception,
        const MethodInfo *method)
{
  System_Runtime_ExceptionServices_ExceptionDispatchInfo_o *v2; // x0
  __int64 v3; // x1

  v2 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(exception, 0);
  if ( v2 )
    System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(v2, 0);
  sub_2213CDC(0, v3);
}


Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *Internal_Runtime_Augments_RuntimeAugments__get_Callbacks(
        const MethodInfo *method)
{
  __int64 v1; // x1
  Internal_Runtime_Augments_RuntimeAugments_c *v2; // x0

  if ( (byte_5978894 & 1) == 0 )
  {
    sub_2213A60(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    byte_5978894 = 1;
  }
  v2 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  if ( !*(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Internal_Runtime_Augments_RuntimeAugments_TypeInfo, v1);
    v2 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  }
  return v2->static_fields->s_reflectionExecutionDomainCallbacks;
}


void Internal_Runtime_Augments_RuntimeThread___cctor(const MethodInfo *method)
{
  if ( (byte_5978898 & 1) == 0 )
  {
    sub_2213A60(&Internal_Runtime_Augments_RuntimeThread_TypeInfo);
    byte_5978898 = 1;
  }
  Internal_Runtime_Augments_RuntimeThread_TypeInfo->static_fields->OptimalMaxSpinWaitsPerSpinIteration = 64;
}


void Internal_Runtime_Augments_RuntimeThread___ctor(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        System_Threading_Thread_o *t,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.thread = t;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)t, v5, v6, v7, v8, v9, v10);
}


Internal_Runtime_Augments_RuntimeThread_o *Internal_Runtime_Augments_RuntimeThread__Create(
        System_Threading_ParameterizedThreadStart_o *start,
        int32_t maxStackSize,
        const MethodInfo *method)
{
  System_Threading_Thread_o *v5; // x21
  __int64 v6; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5978897 & 1) == 0 )
  {
    sub_2213A60(&Internal_Runtime_Augments_RuntimeThread_TypeInfo);
    sub_2213A60(&System_Threading_Thread_TypeInfo);
    byte_5978897 = 1;
  }
  v5 = (System_Threading_Thread_o *)sub_2213CCC(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_77590380(v5, start, maxStackSize, 0);
  v6 = sub_2213CCC(Internal_Runtime_Augments_RuntimeThread_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)v5, v7, v8, v9, v10, v11, v12);
  return (Internal_Runtime_Augments_RuntimeThread_o *)v6;
}


int32_t Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId(const MethodInfo *method)
{
  return 1;
}


void Internal_Runtime_Augments_RuntimeThread__Sleep(int32_t millisecondsTimeout, const MethodInfo *method)
{
  System_Threading_Thread__Sleep(millisecondsTimeout, 0);
}


bool Internal_Runtime_Augments_RuntimeThread__SpinWait(int32_t iterations, const MethodInfo *method)
{
  System_Threading_Thread__SpinWait(iterations, 0);
  return 1;
}


void Internal_Runtime_Augments_RuntimeThread__Start(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        Il2CppObject *state,
        const MethodInfo *method)
{
  System_Threading_Thread_o *thread; // x0

  thread = this->fields.thread;
  if ( !thread )
    sub_2213CDC(0, state);
  System_Threading_Thread__Start_77590844(thread, state, 0);
}


bool Internal_Runtime_Augments_RuntimeThread__Yield(const MethodInfo *method)
{
  return System_Threading_Thread__Yield(0);
}


// local variable allocation has failed, the output may be wrong!
void Internal_Runtime_Augments_RuntimeThread__set_IsBackground(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Threading_Thread_o *thread; // x0

  thread = this->fields.thread;
  if ( !thread )
    sub_2213CDC(0, value);
  System_Threading_Thread__set_IsBackground(thread, value, 0);
}


void Internal_Threading_Tasks_Tracing_TaskTrace__TaskScheduled(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        int32_t CreatingTaskID,
        int32_t TaskCreationOptions,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_5978893 & 1) == 0 )
  {
    sub_2213A60(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_5978893 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    ((void (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))s_callbacks->klass[1]._1.element_class)(
      s_callbacks,
      (unsigned int)OriginatingTaskSchedulerID,
      (unsigned int)OriginatingTaskID,
      (unsigned int)TaskID,
      (unsigned int)CreatingTaskID,
      (unsigned int)TaskCreationOptions,
      s_callbacks->klass[1]._1.castClass);
}


void Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitBegin_Asynchronous(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_5978890 & 1) == 0 )
  {
    sub_2213A60(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_5978890 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    ((void (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, _QWORD, _QWORD, _QWORD, const char *))s_callbacks->klass[1]._1.name)(
      s_callbacks,
      (unsigned int)OriginatingTaskSchedulerID,
      (unsigned int)OriginatingTaskID,
      (unsigned int)TaskID,
      s_callbacks->klass[1]._1.namespaze);
}


void Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitBegin_Synchronous(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_5978891 & 1) == 0 )
  {
    sub_2213A60(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_5978891 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    ((void (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, _QWORD, _QWORD, _QWORD, _QWORD))s_callbacks->klass[1]._1.byval_arg.data)(
      s_callbacks,
      (unsigned int)OriginatingTaskSchedulerID,
      (unsigned int)OriginatingTaskID,
      (unsigned int)TaskID,
      *(_QWORD *)&s_callbacks->klass[1]._1.byval_arg.bits);
}


void Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitEnd(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_5978892 & 1) == 0 )
  {
    sub_2213A60(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_5978892 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    ((void (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, _QWORD, _QWORD, _QWORD, _QWORD))s_callbacks->klass[1]._1.this_arg.data)(
      s_callbacks,
      (unsigned int)OriginatingTaskSchedulerID,
      (unsigned int)OriginatingTaskID,
      (unsigned int)TaskID,
      *(_QWORD *)&s_callbacks->klass[1]._1.this_arg.bits);
}


bool Internal_Threading_Tasks_Tracing_TaskTrace__get_Enabled(const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_597888F & 1) == 0 )
  {
    sub_2213A60(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_597888F = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    LOBYTE(s_callbacks) = ((__int64 (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, void *))s_callbacks->klass[1]._1.image)(
                            s_callbacks,
                            s_callbacks->klass[1]._1.gc_desc);
  return (char)s_callbacks;
}