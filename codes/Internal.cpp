System_Byte_array *Internal_Cryptography_Helpers__CloneByteArray(System_Byte_array *src, const MethodInfo *method)
{
  System_Byte_array *result; // x0
  System_Byte_array *v4; // x19

  if ( (byte_4CCE885 & 1) == 0 )
  {
    sub_1C713B0(&byte___TypeInfo);
    byte_4CCE885 = 1;
  }
  if ( !src )
    return 0;
  result = (System_Byte_array *)System_Array__Clone((System_Array_o *)src, 0);
  if ( result )
  {
    v4 = result;
    result = (System_Byte_array *)sub_1C714EC(result);
    if ( !result )
    {
      sub_1C719A4(v4);
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
  unsigned __int64 max_length; // x9
  unsigned __int64 v4; // x8
  unsigned int v5; // w14
  unsigned int v6; // w15
  int v7; // w16
  unsigned int v8; // w17
  unsigned int v9; // w16
  unsigned int v10; // w15
  unsigned int v11; // w14
  __int16 v12; // w17

  v2 = bytes;
  if ( (byte_4CCE886 & 1) == 0 )
  {
    bytes = (System_Byte_array *)sub_1C713B0(&char___TypeInfo);
    byte_4CCE886 = 1;
  }
  if ( !v2 )
    goto LABEL_19;
  bytes = (System_Byte_array *)sub_1C71458(char___TypeInfo, (unsigned int)(2 * LODWORD(v2->max_length)));
  if ( (int)v2->max_length >= 1 )
  {
    max_length = (unsigned int)v2->max_length;
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
LABEL_18:
        sub_1C71610(bytes);
      v6 = v2->m_Items[v4];
      v7 = v6 >= 0xA0 ? 55 : 48;
      if ( !bytes )
        break;
      v8 = bytes->max_length;
      if ( v5 >= v8 )
        goto LABEL_18;
      method = (const MethodInfo *)(v7 + (v6 >> 4));
      v9 = v5 + 1;
      *(_WORD *)&bytes->m_Items[2 * v5] = (_WORD)method;
      if ( v5 + 1 >= v8 )
        goto LABEL_18;
      v10 = v6 & 0xF;
      v11 = v5 + 1;
      if ( v10 >= 0xA )
        v12 = 55;
      else
        v12 = 48;
      ++v4;
      *(_WORD *)&bytes->m_Items[2 * v11] = v12 + v10;
      v5 = v9 + 1;
      if ( (__int64)v4 >= (int)max_length )
        return (System_Char_array *)bytes;
    }
LABEL_19:
    sub_1C71608(bytes, method);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_StringComparer_c *v8; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *s_ordinalIgnoreCase; // x19
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v10; // x20
  struct Internal_Cryptography_OidLookup_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_StringComparer_c *v18; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *v19; // x20
  System_Collections_Generic_Dictionary_object__object__o *v20; // x19
  __int64 v21; // x0
  __int64 v22; // x1
  struct Internal_Cryptography_OidLookup_StaticFields *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  Internal_Cryptography_OidLookup___c_c *v30; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *s_friendlyNameToOid; // x19
  Il2CppObject *v32; // x20
  System_Func_T__TResult__o *v33; // x21
  Il2CppObject *v34; // x20
  System_Func_T__TResult__o *v35; // x22
  System_Collections_Generic_Dictionary_TKey__TElement__o *v36; // x0
  struct Internal_Cryptography_OidLookup_StaticFields *v37; // x8
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  System_Collections_Generic_Dictionary_object__object__o *v44; // x19
  struct Internal_Cryptography_OidLookup_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7

  if ( (byte_4CD09D1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___78518488);
    sub_1C713B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
    sub_1C713B0(&System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor___78543104);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C713B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C713B0(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
    sub_1C713B0(&System_Func_KeyValuePair_string__string___string__TypeInfo);
    sub_1C713B0(&Internal_Cryptography_OidLookup_TypeInfo);
    sub_1C713B0(&System_StringComparer_TypeInfo);
    sub_1C713B0(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__);
    sub_1C713B0(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__);
    sub_1C713B0(&Internal_Cryptography_OidLookup___c_TypeInfo);
    sub_1C713B0(&StringLiteral_17419/*"brainpoolP512t1"*/);
    sub_1C713B0(&StringLiteral_1187/*"1.2.840.10046.2.1"*/);
    sub_1C713B0(&StringLiteral_17407/*"brainpoolP160t1"*/);
    sub_1C713B0(&StringLiteral_3528/*"CN"*/);
    sub_1C713B0(&StringLiteral_1197/*"1.2.840.113549.1.1.7"*/);
    sub_1C713B0(&StringLiteral_1271/*"1.3.36.3.3.2.8.1.1.13"*/);
    sub_1C713B0(&StringLiteral_1211/*"1.2.840.113549.1.3.1"*/);
    sub_1C713B0(&StringLiteral_11446/*"S"*/);
    sub_1C713B0(&StringLiteral_1326/*"2.16.840.1.101.3.4.2.1"*/);
    sub_1C713B0(&StringLiteral_1352/*"2.5.4.42"*/);
    sub_1C713B0(&StringLiteral_1270/*"1.3.36.3.3.2.8.1.1.12"*/);
    sub_1C713B0(&StringLiteral_1259/*"1.3.14.3.2.27"*/);
    sub_1C713B0(&StringLiteral_1347/*"2.5.4.18"*/);
    sub_1C713B0(&StringLiteral_1240/*"1.3.132.0.10"*/);
    sub_1C713B0(&StringLiteral_18700/*"dnQualifier"*/);
    sub_1C713B0(&StringLiteral_1196/*"1.2.840.113549.1.1.5"*/);
    sub_1C713B0(&StringLiteral_1354/*"2.5.4.46"*/);
    sub_1C713B0(&StringLiteral_1177/*"1.2.840.10045.3.1.3"*/);
    sub_1C713B0(&StringLiteral_1239/*"1.2.840.113549.3.7"*/);
    sub_1C713B0(&StringLiteral_1320/*"2.16.840.1.101.3.4.1.22"*/);
    sub_1C713B0(&StringLiteral_1358/*"2.5.4.8"*/);
    sub_1C713B0(&StringLiteral_23364/*"secP160r2"*/);
    sub_1C713B0(&StringLiteral_22320/*"nistP192"*/);
    sub_1C713B0(&StringLiteral_1238/*"1.2.840.113549.3.4"*/);
    sub_1C713B0(&StringLiteral_18618/*"des"*/);
    sub_1C713B0(&StringLiteral_1357/*"2.5.4.7"*/);
    sub_1C713B0(&StringLiteral_1182/*"1.2.840.10045.4.1"*/);
    sub_1C713B0(&StringLiteral_5405/*"ECDH_STD_SHA256_KDF"*/);
    sub_1C713B0(&StringLiteral_21754/*"mosaicKMandUpdSig"*/);
    sub_1C713B0(&StringLiteral_1198/*"1.2.840.113549.1.1.8"*/);
    sub_1C713B0(&StringLiteral_21755/*"mosaicUpdatedSig"*/);
    sub_1C713B0(&StringLiteral_15708/*"X21Address"*/);
    sub_1C713B0(&StringLiteral_23518/*"sha256RSA"*/);
    sub_1C713B0(&StringLiteral_3527/*"CMSRC2wrap"*/);
    sub_1C713B0(&StringLiteral_17418/*"brainpoolP512r1"*/);
    sub_1C713B0(&StringLiteral_5404/*"ECDH_STD_SHA1_KDF"*/);
    sub_1C713B0(&StringLiteral_1188/*"1.2.840.113549.1.1.1"*/);
    sub_1C713B0(&StringLiteral_1353/*"2.5.4.43"*/);
    sub_1C713B0(&StringLiteral_1331/*"2.23.43.1.4.9"*/);
    sub_1C713B0(&StringLiteral_25066/*"x962P239v3"*/);
    sub_1C713B0(&StringLiteral_23363/*"secP160r1"*/);
    sub_1C713B0(&StringLiteral_1285/*"1.3.6.1.5.5.7.2.1"*/);
    sub_1C713B0(&StringLiteral_1346/*"2.5.4.17"*/);
    sub_1C713B0(&StringLiteral_1181/*"1.2.840.10045.3.1.7"*/);
    sub_1C713B0(&StringLiteral_10711/*"PostalCode"*/);
    sub_1C713B0(&StringLiteral_1246/*"1.3.132.0.35"*/);
    sub_1C713B0(&StringLiteral_1319/*"2.16.840.1.101.3.4.1.2"*/);
    sub_1C713B0(&StringLiteral_1185/*"1.2.840.10045.4.3.3"*/);
    sub_1C713B0(&StringLiteral_1175/*"1.2.840.10045.3.1.1"*/);
    sub_1C713B0(&StringLiteral_1276/*"1.3.36.3.3.2.8.1.1.5"*/);
    sub_1C713B0(&StringLiteral_6892/*"G"*/);
    sub_1C713B0(&StringLiteral_12256/*"SN"*/);
    sub_1C713B0(&StringLiteral_1180/*"1.2.840.10045.3.1.6"*/);
    sub_1C713B0(&StringLiteral_23524/*"sha512RSA"*/);
    sub_1C713B0(&StringLiteral_25065/*"x962P239v2"*/);
    sub_1C713B0(&StringLiteral_1236/*"1.2.840.113549.2.5"*/);
    sub_1C713B0(&StringLiteral_5403/*"ECC"*/);
    sub_1C713B0(&StringLiteral_1356/*"2.5.4.6"*/);
    sub_1C713B0(&StringLiteral_1222/*"1.2.840.113549.1.9.1"*/);
    sub_1C713B0(&StringLiteral_1274/*"1.3.36.3.3.2.8.1.1.3"*/);
    sub_1C713B0(&StringLiteral_22321/*"nistP224"*/);
    sub_1C713B0(&StringLiteral_1280/*"1.3.36.3.3.2.8.1.1.9"*/);
    sub_1C713B0(&StringLiteral_1234/*"1.2.840.113549.2.2"*/);
    sub_1C713B0(&StringLiteral_1251/*"1.3.133.16.840.63.0.2"*/);
    sub_1C713B0(&StringLiteral_1121/*"0.9.2342.19200300.100.1.25"*/);
    sub_1C713B0(&StringLiteral_1244/*"1.3.132.0.33"*/);
    sub_1C713B0(&StringLiteral_5397/*"E"*/);
    sub_1C713B0(&StringLiteral_23512/*"sha1"*/);
    sub_1C713B0(&StringLiteral_1184/*"1.2.840.10045.4.3.2"*/);
    sub_1C713B0(&StringLiteral_25062/*"x962P192v2"*/);
    sub_1C713B0(&StringLiteral_11174/*"RSA"*/);
    sub_1C713B0(&StringLiteral_17409/*"brainpoolP192t1"*/);
    sub_1C713B0(&StringLiteral_23520/*"sha384ECDSA"*/);
    sub_1C713B0(&StringLiteral_5028/*"DSA"*/);
    sub_1C713B0(&StringLiteral_4979/*"DH"*/);
    sub_1C713B0(&StringLiteral_1279/*"1.3.36.3.3.2.8.1.1.8"*/);
    sub_1C713B0(&StringLiteral_11570/*"SERIALNUMBER"*/);
    sub_1C713B0(&StringLiteral_3526/*"CMS3DESwrap"*/);
    sub_1C713B0(&StringLiteral_23514/*"sha1ECDSA"*/);
    sub_1C713B0(&StringLiteral_1349/*"2.5.4.24"*/);
    sub_1C713B0(&StringLiteral_23515/*"sha1RSA"*/);
    sub_1C713B0(&StringLiteral_1323/*"2.16.840.1.101.3.4.1.45"*/);
    sub_1C713B0(&StringLiteral_1172/*"1.2.840.10040.4.1"*/);
    sub_1C713B0(&StringLiteral_23365/*"secP192k1"*/);
    sub_1C713B0(&StringLiteral_1328/*"2.16.840.1.101.3.4.2.3"*/);
    sub_1C713B0(&StringLiteral_1275/*"1.3.36.3.3.2.8.1.1.4"*/);
    sub_1C713B0(&StringLiteral_1267/*"1.3.36.3.3.2.8.1.1.1"*/);
    sub_1C713B0(&StringLiteral_1190/*"1.2.840.113549.1.1.11"*/);
    sub_1C713B0(&StringLiteral_1322/*"2.16.840.1.101.3.4.1.42"*/);
    sub_1C713B0(&StringLiteral_17413/*"brainpoolP256t1"*/);
    sub_1C713B0(&StringLiteral_7365/*"I"*/);
    sub_1C713B0(&StringLiteral_11176/*"RSASSA-PSS"*/);
    sub_1C713B0(&StringLiteral_24992/*"wtls9"*/);
    sub_1C713B0(&StringLiteral_1186/*"1.2.840.10045.4.3.4"*/);
    sub_1C713B0(&StringLiteral_1225/*"1.2.840.113549.1.9.16.3.6"*/);
    sub_1C713B0(&StringLiteral_4955/*"DC"*/);
    sub_1C713B0(&StringLiteral_21611/*"md2"*/);
    sub_1C713B0(&StringLiteral_1316/*"2.16.840.1.101.2.1.1.19"*/);
    sub_1C713B0(&StringLiteral_1245/*"1.3.132.0.34"*/);
    sub_1C713B0(&StringLiteral_21614/*"md4RSA"*/);
    sub_1C713B0(&StringLiteral_1348/*"2.5.4.20"*/);
    sub_1C713B0(&StringLiteral_13327/*"T"*/);
    sub_1C713B0(&StringLiteral_11175/*"RSAES_OAEP"*/);
    sub_1C713B0(&StringLiteral_8252/*"L"*/);
    sub_1C713B0(&StringLiteral_17417/*"brainpoolP384t1"*/);
    sub_1C713B0(&StringLiteral_1253/*"1.3.14.3.2.13"*/);
    sub_1C713B0(&StringLiteral_25063/*"x962P192v3"*/);
    sub_1C713B0(&StringLiteral_1264/*"1.3.14.7.2.3.1"*/);
    sub_1C713B0(&StringLiteral_23521/*"sha384RSA"*/);
    sub_1C713B0(&StringLiteral_21612/*"md2RSA"*/);
    sub_1C713B0(&StringLiteral_23517/*"sha256ECDSA"*/);
    sub_1C713B0(&StringLiteral_23525/*"shaRSA"*/);
    sub_1C713B0(&StringLiteral_1345/*"2.5.4.13"*/);
    sub_1C713B0(&StringLiteral_23508/*"sha"*/);
    sub_1C713B0(&StringLiteral_21617/*"md5RSA"*/);
    sub_1C713B0(&StringLiteral_23516/*"sha256"*/);
    sub_1C713B0(&StringLiteral_23366/*"secP224k1"*/);
    sub_1C713B0(&StringLiteral_21615/*"md5"*/);
    sub_1C713B0(&StringLiteral_16723/*"aes192"*/);
    sub_1C713B0(&StringLiteral_1191/*"1.2.840.113549.1.1.12"*/);
    sub_1C713B0(&StringLiteral_10617/*"Phone"*/);
    sub_1C713B0(&StringLiteral_1178/*"1.2.840.10045.3.1.4"*/);
    sub_1C713B0(&StringLiteral_1395/*"3des"*/);
    sub_1C713B0(&StringLiteral_21670/*"mgf1"*/);
    sub_1C713B0(&StringLiteral_1350/*"2.5.4.3"*/);
    sub_1C713B0(&StringLiteral_1248/*"1.3.132.0.9"*/);
    sub_1C713B0(&StringLiteral_17411/*"brainpoolP224t1"*/);
    sub_1C713B0(&StringLiteral_5408/*"ECDSA_P384"*/);
    sub_1C713B0(&StringLiteral_1243/*"1.3.132.0.32"*/);
    sub_1C713B0(&StringLiteral_18720/*"dsaSHA1"*/);
    sub_1C713B0(&StringLiteral_1343/*"2.5.4.11"*/);
    sub_1C713B0(&StringLiteral_9613/*"O"*/);
    sub_1C713B0(&StringLiteral_1261/*"1.3.14.3.2.3"*/);
    sub_1C713B0(&StringLiteral_1237/*"1.2.840.113549.3.2"*/);
    sub_1C713B0(&StringLiteral_16721/*"aes128"*/);
    sub_1C713B0(&StringLiteral_1250/*"1.3.132.1.11.2"*/);
    sub_1C713B0(&StringLiteral_1262/*"1.3.14.3.2.4"*/);
    sub_1C713B0(&StringLiteral_10403/*"POBox"*/);
    sub_1C713B0(&StringLiteral_1235/*"1.2.840.113549.2.4"*/);
    sub_1C713B0(&StringLiteral_1249/*"1.3.132.1.11.1"*/);
    sub_1C713B0(&StringLiteral_1173/*"1.2.840.10040.4.3"*/);
    sub_1C713B0(&StringLiteral_1257/*"1.3.14.3.2.22"*/);
    sub_1C713B0(&StringLiteral_1269/*"1.3.36.3.3.2.8.1.1.11"*/);
    sub_1C713B0(&StringLiteral_1193/*"1.2.840.113549.1.1.2"*/);
    sub_1C713B0(&StringLiteral_11177/*"RSA_KEYX"*/);
    sub_1C713B0(&StringLiteral_1344/*"2.5.4.12"*/);
    sub_1C713B0(&StringLiteral_1317/*"2.16.840.1.101.2.1.1.20"*/);
    sub_1C713B0(&StringLiteral_23513/*"sha1DSA"*/);
    sub_1C713B0(&StringLiteral_23708/*"specifiedECDSA"*/);
    sub_1C713B0(&StringLiteral_1242/*"1.3.132.0.31"*/);
    sub_1C713B0(&StringLiteral_17412/*"brainpoolP256r1"*/);
    sub_1C713B0(&StringLiteral_1254/*"1.3.14.3.2.15"*/);
    sub_1C713B0(&StringLiteral_1247/*"1.3.132.0.8"*/);
    sub_1C713B0(&StringLiteral_1192/*"1.2.840.113549.1.1.13"*/);
    sub_1C713B0(&StringLiteral_17406/*"brainpoolP160r1"*/);
    sub_1C713B0(&StringLiteral_25064/*"x962P239v1"*/);
    sub_1C713B0(&StringLiteral_1258/*"1.3.14.3.2.26"*/);
    sub_1C713B0(&StringLiteral_1183/*"1.2.840.10045.4.3"*/);
    sub_1C713B0(&StringLiteral_9750/*"OU"*/);
    sub_1C713B0(&StringLiteral_1174/*"1.2.840.10045.2.1"*/);
    sub_1C713B0(&StringLiteral_1273/*"1.3.36.3.3.2.8.1.1.2"*/);
    sub_1C713B0(&StringLiteral_9339/*"NO_SIGN"*/);
    sub_1C713B0(&StringLiteral_23078/*"rc4"*/);
    sub_1C713B0(&StringLiteral_21613/*"md4"*/);
    sub_1C713B0(&StringLiteral_18836/*"ec192wapi"*/);
    sub_1C713B0(&StringLiteral_1226/*"1.2.840.113549.1.9.16.3.7"*/);
    sub_1C713B0(&StringLiteral_3260/*"C"*/);
    sub_1C713B0(&StringLiteral_1277/*"1.3.36.3.3.2.8.1.1.6"*/);
    sub_1C713B0(&StringLiteral_1179/*"1.2.840.10045.3.1.5"*/);
    sub_1C713B0(&StringLiteral_17416/*"brainpoolP384r1"*/);
    sub_1C713B0(&StringLiteral_17415/*"brainpoolP320t1"*/);
    sub_1C713B0(&StringLiteral_5493/*"ESDH"*/);
    sub_1C713B0(&StringLiteral_23519/*"sha384"*/);
    sub_1C713B0(&StringLiteral_1224/*"1.2.840.113549.1.9.16.3.5"*/);
    sub_1C713B0(&StringLiteral_5406/*"ECDH_STD_SHA384_KDF"*/);
    sub_1C713B0(&StringLiteral_1241/*"1.3.132.0.30"*/);
    sub_1C713B0(&StringLiteral_1256/*"1.3.14.3.2.2"*/);
    sub_1C713B0(&StringLiteral_1255/*"1.3.14.3.2.18"*/);
    sub_1C713B0(&StringLiteral_1195/*"1.2.840.113549.1.1.4"*/);
    sub_1C713B0(&StringLiteral_3879/*"CPS"*/);
    sub_1C713B0(&StringLiteral_1359/*"2.5.4.9"*/);
    sub_1C713B0(&StringLiteral_1176/*"1.2.840.10045.3.1.2"*/);
    sub_1C713B0(&StringLiteral_23522/*"sha512"*/);
    sub_1C713B0(&StringLiteral_1278/*"1.3.36.3.3.2.8.1.1.7"*/);
    sub_1C713B0(&StringLiteral_1324/*"2.16.840.1.101.3.4.1.5"*/);
    sub_1C713B0(&StringLiteral_16722/*"aes128wrap"*/);
    sub_1C713B0(&StringLiteral_1287/*"1.3.6.1.5.5.7.6.2"*/);
    sub_1C713B0(&StringLiteral_5409/*"ECDSA_P521"*/);
    sub_1C713B0(&StringLiteral_23362/*"secP160k1"*/);
    sub_1C713B0(&StringLiteral_1327/*"2.16.840.1.101.3.4.2.2"*/);
    sub_1C713B0(&StringLiteral_1263/*"1.3.14.3.2.7"*/);
    sub_1C713B0(&StringLiteral_16726/*"aes256wrap"*/);
    sub_1C713B0(&StringLiteral_1342/*"2.5.4.10"*/);
    sub_1C713B0(&StringLiteral_23523/*"sha512ECDSA"*/);
    sub_1C713B0(&StringLiteral_1252/*"1.3.14.3.2.12"*/);
    sub_1C713B0(&StringLiteral_1194/*"1.2.840.113549.1.1.3"*/);
    sub_1C713B0(&StringLiteral_23367/*"secP256k1"*/);
    sub_1C713B0(&StringLiteral_1272/*"1.3.36.3.3.2.8.1.1.14"*/);
    sub_1C713B0(&StringLiteral_5407/*"ECDSA_P256"*/);
    sub_1C713B0(&StringLiteral_1260/*"1.3.14.3.2.29"*/);
    sub_1C713B0(&StringLiteral_16724/*"aes192wrap"*/);
    sub_1C713B0(&StringLiteral_1171/*"1.2.156.11235.1.1.2.1"*/);
    sub_1C713B0(&StringLiteral_5230/*"Description"*/);
    sub_1C713B0(&StringLiteral_23077/*"rc2"*/);
    sub_1C713B0(&StringLiteral_17408/*"brainpoolP192r1"*/);
    sub_1C713B0(&StringLiteral_1355/*"2.5.4.5"*/);
    sub_1C713B0(&StringLiteral_16725/*"aes256"*/);
    sub_1C713B0(&StringLiteral_17410/*"brainpoolP224r1"*/);
    sub_1C713B0(&StringLiteral_17414/*"brainpoolP320r1"*/);
    sub_1C713B0(&StringLiteral_1268/*"1.3.36.3.3.2.8.1.1.10"*/);
    sub_1C713B0(&StringLiteral_1189/*"1.2.840.113549.1.1.10"*/);
    sub_1C713B0(&StringLiteral_1321/*"2.16.840.1.101.3.4.1.25"*/);
    sub_1C713B0(&StringLiteral_12417/*"STREET"*/);
    sub_1C713B0(&StringLiteral_1351/*"2.5.4.4"*/);
    byte_4CD09D1 = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor(
    v1,
    (const MethodInfo_33EACF0 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
  Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_lateBoundOidToFriendlyName = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)Internal_Cryptography_OidLookup_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
  if ( !byte_4CCEE5C )
  {
    sub_1C713B0(&System_StringComparer_TypeInfo);
    byte_4CCEE5C = 1;
  }
  v8 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v8 = System_StringComparer_TypeInfo;
  }
  s_ordinalIgnoreCase = (System_Collections_Generic_IEqualityComparer_TKey__o *)v8->static_fields->s_ordinalIgnoreCase;
  v10 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1C715FC(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor_54439264(
    v10,
    s_ordinalIgnoreCase,
    (const MethodInfo_33EAD60 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___78518488);
  static_fields = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  static_fields->s_lateBoundFriendlyNameToOid = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&static_fields->s_lateBoundFriendlyNameToOid,
    (int32_t)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !byte_4CCEE5C )
  {
    sub_1C713B0(&System_StringComparer_TypeInfo);
    byte_4CCEE5C = 1;
  }
  v18 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v18 = System_StringComparer_TypeInfo;
  }
  v19 = (System_Collections_Generic_IEqualityComparer_TKey__o *)v18->static_fields->s_ordinalIgnoreCase;
  v20 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_55356764(
    v20,
    v19,
    (const MethodInfo_34CAD5C *)Method_System_Collections_Generic_Dictionary_string__string___ctor___78543104);
  if ( !v20 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_1395/*"3des"*/,
    (Il2CppObject *)StringLiteral_1239/*"1.2.840.113549.3.7"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_16721/*"aes128"*/,
    (Il2CppObject *)StringLiteral_1319/*"2.16.840.1.101.3.4.1.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_16722/*"aes128wrap"*/,
    (Il2CppObject *)StringLiteral_1324/*"2.16.840.1.101.3.4.1.5"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_16723/*"aes192"*/,
    (Il2CppObject *)StringLiteral_1320/*"2.16.840.1.101.3.4.1.22"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_16724/*"aes192wrap"*/,
    (Il2CppObject *)StringLiteral_1321/*"2.16.840.1.101.3.4.1.25"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_16725/*"aes256"*/,
    (Il2CppObject *)StringLiteral_1322/*"2.16.840.1.101.3.4.1.42"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_16726/*"aes256wrap"*/,
    (Il2CppObject *)StringLiteral_1323/*"2.16.840.1.101.3.4.1.45"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17406/*"brainpoolP160r1"*/,
    (Il2CppObject *)StringLiteral_1267/*"1.3.36.3.3.2.8.1.1.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17407/*"brainpoolP160t1"*/,
    (Il2CppObject *)StringLiteral_1273/*"1.3.36.3.3.2.8.1.1.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17408/*"brainpoolP192r1"*/,
    (Il2CppObject *)StringLiteral_1274/*"1.3.36.3.3.2.8.1.1.3"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17409/*"brainpoolP192t1"*/,
    (Il2CppObject *)StringLiteral_1275/*"1.3.36.3.3.2.8.1.1.4"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17410/*"brainpoolP224r1"*/,
    (Il2CppObject *)StringLiteral_1276/*"1.3.36.3.3.2.8.1.1.5"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17411/*"brainpoolP224t1"*/,
    (Il2CppObject *)StringLiteral_1277/*"1.3.36.3.3.2.8.1.1.6"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17412/*"brainpoolP256r1"*/,
    (Il2CppObject *)StringLiteral_1278/*"1.3.36.3.3.2.8.1.1.7"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17413/*"brainpoolP256t1"*/,
    (Il2CppObject *)StringLiteral_1279/*"1.3.36.3.3.2.8.1.1.8"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17414/*"brainpoolP320r1"*/,
    (Il2CppObject *)StringLiteral_1280/*"1.3.36.3.3.2.8.1.1.9"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17415/*"brainpoolP320t1"*/,
    (Il2CppObject *)StringLiteral_1268/*"1.3.36.3.3.2.8.1.1.10"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17416/*"brainpoolP384r1"*/,
    (Il2CppObject *)StringLiteral_1269/*"1.3.36.3.3.2.8.1.1.11"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17417/*"brainpoolP384t1"*/,
    (Il2CppObject *)StringLiteral_1270/*"1.3.36.3.3.2.8.1.1.12"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17418/*"brainpoolP512r1"*/,
    (Il2CppObject *)StringLiteral_1271/*"1.3.36.3.3.2.8.1.1.13"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_17419/*"brainpoolP512t1"*/,
    (Il2CppObject *)StringLiteral_1272/*"1.3.36.3.3.2.8.1.1.14"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_3260/*"C"*/,
    (Il2CppObject *)StringLiteral_1356/*"2.5.4.6"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_3526/*"CMS3DESwrap"*/,
    (Il2CppObject *)StringLiteral_1225/*"1.2.840.113549.1.9.16.3.6"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_3527/*"CMSRC2wrap"*/,
    (Il2CppObject *)StringLiteral_1226/*"1.2.840.113549.1.9.16.3.7"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_3528/*"CN"*/,
    (Il2CppObject *)StringLiteral_1350/*"2.5.4.3"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_3879/*"CPS"*/,
    (Il2CppObject *)StringLiteral_1285/*"1.3.6.1.5.5.7.2.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_4955/*"DC"*/,
    (Il2CppObject *)StringLiteral_1121/*"0.9.2342.19200300.100.1.25"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_18618/*"des"*/,
    (Il2CppObject *)StringLiteral_1263/*"1.3.14.3.2.7"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5230/*"Description"*/,
    (Il2CppObject *)StringLiteral_1345/*"2.5.4.13"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_4979/*"DH"*/,
    (Il2CppObject *)StringLiteral_1187/*"1.2.840.10046.2.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_18700/*"dnQualifier"*/,
    (Il2CppObject *)StringLiteral_1354/*"2.5.4.46"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5028/*"DSA"*/,
    (Il2CppObject *)StringLiteral_1172/*"1.2.840.10040.4.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_18720/*"dsaSHA1"*/,
    (Il2CppObject *)StringLiteral_1259/*"1.3.14.3.2.27"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5397/*"E"*/,
    (Il2CppObject *)StringLiteral_1222/*"1.2.840.113549.1.9.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_18836/*"ec192wapi"*/,
    (Il2CppObject *)StringLiteral_1171/*"1.2.156.11235.1.1.2.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5403/*"ECC"*/,
    (Il2CppObject *)StringLiteral_1174/*"1.2.840.10045.2.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5404/*"ECDH_STD_SHA1_KDF"*/,
    (Il2CppObject *)StringLiteral_1251/*"1.3.133.16.840.63.0.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5405/*"ECDH_STD_SHA256_KDF"*/,
    (Il2CppObject *)StringLiteral_1249/*"1.3.132.1.11.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5406/*"ECDH_STD_SHA384_KDF"*/,
    (Il2CppObject *)StringLiteral_1250/*"1.3.132.1.11.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5407/*"ECDSA_P256"*/,
    (Il2CppObject *)StringLiteral_1181/*"1.2.840.10045.3.1.7"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5408/*"ECDSA_P384"*/,
    (Il2CppObject *)StringLiteral_1245/*"1.3.132.0.34"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5409/*"ECDSA_P521"*/,
    (Il2CppObject *)StringLiteral_1246/*"1.3.132.0.35"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_5493/*"ESDH"*/,
    (Il2CppObject *)StringLiteral_1224/*"1.2.840.113549.1.9.16.3.5"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_6892/*"G"*/,
    (Il2CppObject *)StringLiteral_1352/*"2.5.4.42"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_7365/*"I"*/,
    (Il2CppObject *)StringLiteral_1353/*"2.5.4.43"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_8252/*"L"*/,
    (Il2CppObject *)StringLiteral_1357/*"2.5.4.7"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_21611/*"md2"*/,
    (Il2CppObject *)StringLiteral_1234/*"1.2.840.113549.2.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_21612/*"md2RSA"*/,
    (Il2CppObject *)StringLiteral_1193/*"1.2.840.113549.1.1.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_21613/*"md4"*/,
    (Il2CppObject *)StringLiteral_1235/*"1.2.840.113549.2.4"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_21614/*"md4RSA"*/,
    (Il2CppObject *)StringLiteral_1194/*"1.2.840.113549.1.1.3"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_21615/*"md5"*/,
    (Il2CppObject *)StringLiteral_1236/*"1.2.840.113549.2.5"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_21617/*"md5RSA"*/,
    (Il2CppObject *)StringLiteral_1195/*"1.2.840.113549.1.1.4"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_21670/*"mgf1"*/,
    (Il2CppObject *)StringLiteral_1198/*"1.2.840.113549.1.1.8"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_21754/*"mosaicKMandUpdSig"*/,
    (Il2CppObject *)StringLiteral_1317/*"2.16.840.1.101.2.1.1.20"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_21755/*"mosaicUpdatedSig"*/,
    (Il2CppObject *)StringLiteral_1316/*"2.16.840.1.101.2.1.1.19"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_22320/*"nistP192"*/,
    (Il2CppObject *)StringLiteral_1175/*"1.2.840.10045.3.1.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_22321/*"nistP224"*/,
    (Il2CppObject *)StringLiteral_1244/*"1.3.132.0.33"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_9339/*"NO_SIGN"*/,
    (Il2CppObject *)StringLiteral_1287/*"1.3.6.1.5.5.7.6.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_9613/*"O"*/,
    (Il2CppObject *)StringLiteral_1342/*"2.5.4.10"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_9750/*"OU"*/,
    (Il2CppObject *)StringLiteral_1343/*"2.5.4.11"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_10617/*"Phone"*/,
    (Il2CppObject *)StringLiteral_1348/*"2.5.4.20"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_10403/*"POBox"*/,
    (Il2CppObject *)StringLiteral_1347/*"2.5.4.18"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_10711/*"PostalCode"*/,
    (Il2CppObject *)StringLiteral_1346/*"2.5.4.17"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23077/*"rc2"*/,
    (Il2CppObject *)StringLiteral_1237/*"1.2.840.113549.3.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23078/*"rc4"*/,
    (Il2CppObject *)StringLiteral_1238/*"1.2.840.113549.3.4"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_11174/*"RSA"*/,
    (Il2CppObject *)StringLiteral_1188/*"1.2.840.113549.1.1.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_11175/*"RSAES_OAEP"*/,
    (Il2CppObject *)StringLiteral_1197/*"1.2.840.113549.1.1.7"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_11176/*"RSASSA-PSS"*/,
    (Il2CppObject *)StringLiteral_1189/*"1.2.840.113549.1.1.10"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_11446/*"S"*/,
    (Il2CppObject *)StringLiteral_1358/*"2.5.4.8"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23362/*"secP160k1"*/,
    (Il2CppObject *)StringLiteral_1248/*"1.3.132.0.9"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23363/*"secP160r1"*/,
    (Il2CppObject *)StringLiteral_1247/*"1.3.132.0.8"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23364/*"secP160r2"*/,
    (Il2CppObject *)StringLiteral_1241/*"1.3.132.0.30"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23365/*"secP192k1"*/,
    (Il2CppObject *)StringLiteral_1242/*"1.3.132.0.31"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23366/*"secP224k1"*/,
    (Il2CppObject *)StringLiteral_1243/*"1.3.132.0.32"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23367/*"secP256k1"*/,
    (Il2CppObject *)StringLiteral_1240/*"1.3.132.0.10"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_11570/*"SERIALNUMBER"*/,
    (Il2CppObject *)StringLiteral_1355/*"2.5.4.5"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23512/*"sha1"*/,
    (Il2CppObject *)StringLiteral_1258/*"1.3.14.3.2.26"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23513/*"sha1DSA"*/,
    (Il2CppObject *)StringLiteral_1173/*"1.2.840.10040.4.3"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23514/*"sha1ECDSA"*/,
    (Il2CppObject *)StringLiteral_1182/*"1.2.840.10045.4.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23515/*"sha1RSA"*/,
    (Il2CppObject *)StringLiteral_1196/*"1.2.840.113549.1.1.5"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23516/*"sha256"*/,
    (Il2CppObject *)StringLiteral_1326/*"2.16.840.1.101.3.4.2.1"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23517/*"sha256ECDSA"*/,
    (Il2CppObject *)StringLiteral_1184/*"1.2.840.10045.4.3.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23518/*"sha256RSA"*/,
    (Il2CppObject *)StringLiteral_1190/*"1.2.840.113549.1.1.11"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23519/*"sha384"*/,
    (Il2CppObject *)StringLiteral_1327/*"2.16.840.1.101.3.4.2.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23520/*"sha384ECDSA"*/,
    (Il2CppObject *)StringLiteral_1185/*"1.2.840.10045.4.3.3"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23521/*"sha384RSA"*/,
    (Il2CppObject *)StringLiteral_1191/*"1.2.840.113549.1.1.12"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23522/*"sha512"*/,
    (Il2CppObject *)StringLiteral_1328/*"2.16.840.1.101.3.4.2.3"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23523/*"sha512ECDSA"*/,
    (Il2CppObject *)StringLiteral_1186/*"1.2.840.10045.4.3.4"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23524/*"sha512RSA"*/,
    (Il2CppObject *)StringLiteral_1192/*"1.2.840.113549.1.1.13"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_12256/*"SN"*/,
    (Il2CppObject *)StringLiteral_1351/*"2.5.4.4"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_23708/*"specifiedECDSA"*/,
    (Il2CppObject *)StringLiteral_1183/*"1.2.840.10045.4.3"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_12417/*"STREET"*/,
    (Il2CppObject *)StringLiteral_1359/*"2.5.4.9"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_13327/*"T"*/,
    (Il2CppObject *)StringLiteral_1344/*"2.5.4.12"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_24992/*"wtls9"*/,
    (Il2CppObject *)StringLiteral_1331/*"2.23.43.1.4.9"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_15708/*"X21Address"*/,
    (Il2CppObject *)StringLiteral_1349/*"2.5.4.24"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_25062/*"x962P192v2"*/,
    (Il2CppObject *)StringLiteral_1176/*"1.2.840.10045.3.1.2"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_25063/*"x962P192v3"*/,
    (Il2CppObject *)StringLiteral_1177/*"1.2.840.10045.3.1.3"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_25064/*"x962P239v1"*/,
    (Il2CppObject *)StringLiteral_1178/*"1.2.840.10045.3.1.4"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_25065/*"x962P239v2"*/,
    (Il2CppObject *)StringLiteral_1179/*"1.2.840.10045.3.1.5"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v20,
    (Il2CppObject *)StringLiteral_25066/*"x962P239v3"*/,
    (Il2CppObject *)StringLiteral_1180/*"1.2.840.10045.3.1.6"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v23 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v23->s_friendlyNameToOid = (struct System_Collections_Generic_Dictionary_string__string__o *)v20;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->s_friendlyNameToOid, (int32_t)v20, v24, v25, v26, v27, v28, v29);
  v30 = Internal_Cryptography_OidLookup___c_TypeInfo;
  s_friendlyNameToOid = Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_friendlyNameToOid;
  if ( !Internal_Cryptography_OidLookup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup___c_TypeInfo);
    v30 = Internal_Cryptography_OidLookup___c_TypeInfo;
  }
  v32 = (Il2CppObject *)v30->static_fields->__9;
  v33 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v33,
    v32,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__,
    0);
  v34 = (Il2CppObject *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9;
  v35 = (System_Func_T__TResult__o *)sub_1C715FC(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v35,
    v34,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__,
    0);
  v36 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)s_friendlyNameToOid,
          (System_Func_TSource__TKey__o *)v33,
          (System_Func_TSource__TElement__o *)v35,
          (const MethodInfo_318B760 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
  v37 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v37->s_oidToFriendlyName = (struct System_Collections_Generic_Dictionary_string__string__o *)v36;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v37->s_oidToFriendlyName, (int32_t)v36, v38, v39, v40, v41, v42, v43);
  v44 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C715FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v44,
    (const MethodInfo_34CAD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v44 )
LABEL_18:
    sub_1C71608(v21, v22);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1211/*"1.2.840.113549.1.3.1"*/,
    (Il2CppObject *)StringLiteral_4979/*"DH"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1252/*"1.3.14.3.2.12"*/,
    (Il2CppObject *)StringLiteral_5028/*"DSA"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1253/*"1.3.14.3.2.13"*/,
    (Il2CppObject *)StringLiteral_23513/*"sha1DSA"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1254/*"1.3.14.3.2.15"*/,
    (Il2CppObject *)StringLiteral_23525/*"shaRSA"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1255/*"1.3.14.3.2.18"*/,
    (Il2CppObject *)StringLiteral_23508/*"sha"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1256/*"1.3.14.3.2.2"*/,
    (Il2CppObject *)StringLiteral_21614/*"md4RSA"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1257/*"1.3.14.3.2.22"*/,
    (Il2CppObject *)StringLiteral_11177/*"RSA_KEYX"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1260/*"1.3.14.3.2.29"*/,
    (Il2CppObject *)StringLiteral_23515/*"sha1RSA"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1261/*"1.3.14.3.2.3"*/,
    (Il2CppObject *)StringLiteral_21617/*"md5RSA"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1262/*"1.3.14.3.2.4"*/,
    (Il2CppObject *)StringLiteral_21614/*"md4RSA"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v44,
    (Il2CppObject *)StringLiteral_1264/*"1.3.14.7.2.3.1"*/,
    (Il2CppObject *)StringLiteral_21612/*"md2RSA"*/,
    (const MethodInfo_34CB6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v45 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v45->s_compatOids = (struct System_Collections_Generic_Dictionary_string__string__o *)v44;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v45->s_compatOids, (int32_t)v44, v46, v47, v48, v49, v50, v51);
}


System_String_o *Internal_Cryptography_OidLookup__NativeFriendlyNameToOid(
        System_String_o *friendlyName,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  uint32_t v5; // w0
  bool v6; // w0
  __int64 *v7; // x8
  System_String_o *v9; // x8

  if ( (byte_4CD09D0 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_6369/*"Extended Key Usage"*/);
    sub_1C713B0(&StringLiteral_1335/*"2.5.29.17"*/);
    sub_1C713B0(&StringLiteral_1231/*"1.2.840.113549.1.9.4"*/);
    sub_1C713B0(&StringLiteral_8225/*"Key Usage"*/);
    sub_1C713B0(&StringLiteral_1232/*"1.2.840.113549.1.9.5"*/);
    sub_1C713B0(&StringLiteral_9035/*"Message Digest"*/);
    sub_1C713B0(&StringLiteral_1230/*"1.2.840.113549.1.9.3"*/);
    sub_1C713B0(&StringLiteral_1330/*"2.16.840.1.113730.1.1"*/);
    sub_1C713B0(&StringLiteral_12882/*"Signing Time"*/);
    sub_1C713B0(&StringLiteral_1341/*"2.5.29.37"*/);
    sub_1C713B0(&StringLiteral_1333/*"2.5.29.14"*/);
    sub_1C713B0(&StringLiteral_1223/*"1.2.840.113549.1.9.16.3.3"*/);
    sub_1C713B0(&StringLiteral_10386/*"PKCS 7 Data"*/);
    sub_1C713B0(&StringLiteral_3075/*"Basic Constraints"*/);
    sub_1C713B0(&StringLiteral_13148/*"Subject Alternative Name"*/);
    sub_1C713B0(&StringLiteral_4676/*"Content Type"*/);
    sub_1C713B0(&StringLiteral_13149/*"Subject Key Identifier"*/);
    sub_1C713B0(&StringLiteral_1334/*"2.5.29.15"*/);
    sub_1C713B0(&StringLiteral_9422/*"Netscape Cert Type"*/);
    sub_1C713B0(&StringLiteral_1218/*"1.2.840.113549.1.7.1"*/);
    sub_1C713B0(&StringLiteral_1337/*"2.5.29.19"*/);
    sub_1C713B0(&StringLiteral_20333/*"id-smime-alg-3DESwrap"*/);
    byte_4CD09D0 = 1;
  }
  v5 = PrivateImplementationDetails___ComputeStringHash_70490248(friendlyName, 0);
  if ( v5 > 0x751680DD )
  {
    if ( v5 > 0xB4301663 )
    {
      switch ( v5 )
      {
        case 0xB85A3360:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_6369/*"Extended Key Usage"*/, 0);
          v7 = &StringLiteral_1341/*"2.5.29.37"*/;
          break;
        case 0xCCB33EB4:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_9035/*"Message Digest"*/, 0);
          v7 = &StringLiteral_1231/*"1.2.840.113549.1.9.4"*/;
          break;
        case 0xE2748DE9:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_20333/*"id-smime-alg-3DESwrap"*/, 0);
          v7 = &StringLiteral_1223/*"1.2.840.113549.1.9.16.3.3"*/;
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
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_4676/*"Content Type"*/, 0);
          v7 = &StringLiteral_1230/*"1.2.840.113549.1.9.3"*/;
          break;
        case 0x9DCF2034:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_9422/*"Netscape Cert Type"*/, 0);
          v7 = &StringLiteral_1330/*"2.16.840.1.113730.1.1"*/;
          break;
        case 0xB4301663:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_13148/*"Subject Alternative Name"*/, 0);
          v7 = &StringLiteral_1335/*"2.5.29.17"*/;
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
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_13149/*"Subject Key Identifier"*/, 0);
        v7 = &StringLiteral_1333/*"2.5.29.14"*/;
        break;
      case 0x5F357EFDu:
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12882/*"Signing Time"*/, 0);
        v7 = &StringLiteral_1232/*"1.2.840.113549.1.9.5"*/;
        break;
      case 0x751680DDu:
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_3075/*"Basic Constraints"*/, 0);
        v7 = &StringLiteral_1337/*"2.5.29.19"*/;
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
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_10386/*"PKCS 7 Data"*/, 0);
        v7 = &StringLiteral_1218/*"1.2.840.113549.1.7.1"*/;
        goto LABEL_29;
      }
      return 0;
    }
    v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_8225/*"Key Usage"*/, 0);
    v7 = &StringLiteral_1334/*"2.5.29.15"*/;
  }
LABEL_29:
  v9 = (System_String_o *)*v7;
  if ( v6 )
    return v9;
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
  bool v6; // w0
  __int64 *v7; // x8
  System_String_o *v9; // x8

  if ( (byte_4CD09CF & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_6369/*"Extended Key Usage"*/);
    sub_1C713B0(&StringLiteral_1335/*"2.5.29.17"*/);
    sub_1C713B0(&StringLiteral_1231/*"1.2.840.113549.1.9.4"*/);
    sub_1C713B0(&StringLiteral_8225/*"Key Usage"*/);
    sub_1C713B0(&StringLiteral_1232/*"1.2.840.113549.1.9.5"*/);
    sub_1C713B0(&StringLiteral_9035/*"Message Digest"*/);
    sub_1C713B0(&StringLiteral_1230/*"1.2.840.113549.1.9.3"*/);
    sub_1C713B0(&StringLiteral_1330/*"2.16.840.1.113730.1.1"*/);
    sub_1C713B0(&StringLiteral_12882/*"Signing Time"*/);
    sub_1C713B0(&StringLiteral_1341/*"2.5.29.37"*/);
    sub_1C713B0(&StringLiteral_1333/*"2.5.29.14"*/);
    sub_1C713B0(&StringLiteral_1223/*"1.2.840.113549.1.9.16.3.3"*/);
    sub_1C713B0(&StringLiteral_10386/*"PKCS 7 Data"*/);
    sub_1C713B0(&StringLiteral_3075/*"Basic Constraints"*/);
    sub_1C713B0(&StringLiteral_13148/*"Subject Alternative Name"*/);
    sub_1C713B0(&StringLiteral_4676/*"Content Type"*/);
    sub_1C713B0(&StringLiteral_13149/*"Subject Key Identifier"*/);
    sub_1C713B0(&StringLiteral_1334/*"2.5.29.15"*/);
    sub_1C713B0(&StringLiteral_9422/*"Netscape Cert Type"*/);
    sub_1C713B0(&StringLiteral_1218/*"1.2.840.113549.1.7.1"*/);
    sub_1C713B0(&StringLiteral_1337/*"2.5.29.19"*/);
    sub_1C713B0(&StringLiteral_20333/*"id-smime-alg-3DESwrap"*/);
    byte_4CD09CF = 1;
  }
  v5 = PrivateImplementationDetails___ComputeStringHash_70490248(oid, 0);
  if ( v5 > 0xC67AB912 )
  {
    if ( v5 > 0xD20A3896 )
    {
      switch ( v5 )
      {
        case 0xD30A3A29:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1334/*"2.5.29.15"*/, 0);
          v7 = &StringLiteral_8225/*"Key Usage"*/;
          break;
        case 0xDC06204E:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1330/*"2.16.840.1.113730.1.1"*/, 0);
          v7 = &StringLiteral_9422/*"Netscape Cert Type"*/;
          break;
        case 0xDF0A4D0D:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1337/*"2.5.29.19"*/, 0);
          v7 = &StringLiteral_3075/*"Basic Constraints"*/;
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
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1341/*"2.5.29.37"*/, 0);
          v7 = &StringLiteral_6369/*"Extended Key Usage"*/;
          break;
        case 0xD10A3703:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1335/*"2.5.29.17"*/, 0);
          v7 = &StringLiteral_13148/*"Subject Alternative Name"*/;
          break;
        case 0xD20A3896:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1333/*"2.5.29.14"*/, 0);
          v7 = &StringLiteral_13149/*"Subject Key Identifier"*/;
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
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1231/*"1.2.840.113549.1.9.4"*/, 0);
        v7 = &StringLiteral_9035/*"Message Digest"*/;
        break;
      case 0xB1E05402:
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1230/*"1.2.840.113549.1.9.3"*/, 0);
        v7 = &StringLiteral_4676/*"Content Type"*/;
        break;
      case 0xC67AB912:
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1223/*"1.2.840.113549.1.9.16.3.3"*/, 0);
        v7 = &StringLiteral_20333/*"id-smime-alg-3DESwrap"*/;
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
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1218/*"1.2.840.113549.1.7.1"*/, 0);
        v7 = &StringLiteral_10386/*"PKCS 7 Data"*/;
        goto LABEL_29;
      }
      return 0;
    }
    v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1232/*"1.2.840.113549.1.9.5"*/, 0);
    v7 = &StringLiteral_12882/*"Signing Time"*/;
  }
LABEL_29:
  v9 = (System_String_o *)*v7;
  if ( v6 )
    return v9;
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
  int32_t v9; // w1
  const MethodInfo *v10; // x3
  Internal_Cryptography_OidLookup_c *v11; // x0
  __int64 v13; // x0
  System_ArgumentNullException_o *v14; // x19
  System_String_o *v15; // x0
  __int64 v16; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CD09CD & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
    sub_1C713B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C713B0(&Internal_Cryptography_OidLookup_TypeInfo);
    byte_4CD09CD = 1;
  }
  value = 0;
  if ( !oid )
  {
    v13 = sub_1C713C4(&System_ArgumentNullException_TypeInfo);
    v14 = (System_ArgumentNullException_o *)sub_1C715FC(v13);
    v15 = (System_String_o *)sub_1C713C4(&StringLiteral_22484/*"oid"*/);
    System_ArgumentNullException___ctor_65042140(v14, v15, 0);
    v16 = sub_1C713C4(&Method_Internal_Cryptography_OidLookup_ToFriendlyName__);
    sub_1C714D8(v14, v16);
  }
  v5 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
    v5 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
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
          (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    v7 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
      v7 = Internal_Cryptography_OidLookup_TypeInfo;
    }
    s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v7->static_fields->s_compatOids;
    if ( !s_oidToFriendlyName )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)s_oidToFriendlyName,
            (Il2CppObject *)oid,
            &value,
            (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
    {
      v8 = Internal_Cryptography_OidLookup_TypeInfo;
      if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
        v8 = Internal_Cryptography_OidLookup_TypeInfo;
      }
      s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v8->static_fields->s_lateBoundOidToFriendlyName;
      if ( !s_oidToFriendlyName )
        goto LABEL_25;
      if ( !System_Collections_Concurrent_ConcurrentDictionary_object__object___TryGetValue(
              s_oidToFriendlyName,
              (Il2CppObject *)oid,
              &value,
              (const MethodInfo_33EBB88 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
      {
        if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
        value = (Il2CppObject *)Internal_Cryptography_OidLookup__NativeOidToFriendlyName(oid, v9, 0, v10);
        if ( value )
        {
          v11 = Internal_Cryptography_OidLookup_TypeInfo;
          if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
            v11 = Internal_Cryptography_OidLookup_TypeInfo;
          }
          s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v11->static_fields->s_lateBoundOidToFriendlyName;
          if ( s_oidToFriendlyName )
          {
            System_Collections_Concurrent_ConcurrentDictionary_object__object___TryAdd(
              s_oidToFriendlyName,
              (Il2CppObject *)oid,
              value,
              (const MethodInfo_33EB504 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
            return (System_String_o *)value;
          }
LABEL_25:
          sub_1C71608(s_oidToFriendlyName, *(_QWORD *)&oidGroup);
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
  int32_t v8; // w1
  const MethodInfo *v9; // x3
  System_String_o *result; // x0
  Internal_Cryptography_OidLookup_c *v11; // x0
  __int64 v12; // x0
  System_ArgumentNullException_o *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4CD09CE & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
    sub_1C713B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C713B0(&Internal_Cryptography_OidLookup_TypeInfo);
    byte_4CD09CE = 1;
  }
  value = 0;
  if ( !friendlyName )
  {
    v12 = sub_1C713C4(&System_ArgumentNullException_TypeInfo);
    v13 = (System_ArgumentNullException_o *)sub_1C715FC(v12);
    v14 = (System_String_o *)sub_1C713C4(&StringLiteral_19764/*"friendlyName"*/);
    System_ArgumentNullException___ctor_65042140(v13, v14, 0);
    v15 = sub_1C713C4(&Method_Internal_Cryptography_OidLookup_ToOid__);
    sub_1C714D8(v13, v15);
  }
  if ( !friendlyName->fields._stringLength )
    return 0;
  v5 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
    v5 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
      v5 = Internal_Cryptography_OidLookup_TypeInfo;
    }
  }
  s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v5->static_fields->s_friendlyNameToOid;
  if ( !s_friendlyNameToOid )
    goto LABEL_25;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         s_friendlyNameToOid,
         (Il2CppObject *)friendlyName,
         &value,
         (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  v7 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
    v7 = Internal_Cryptography_OidLookup_TypeInfo;
  }
  s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v7->static_fields->s_lateBoundFriendlyNameToOid;
  if ( !s_friendlyNameToOid )
    goto LABEL_25;
  if ( System_Collections_Concurrent_ConcurrentDictionary_object__object___TryGetValue(
         (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)s_friendlyNameToOid,
         (Il2CppObject *)friendlyName,
         &value,
         (const MethodInfo_33EBB88 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
  result = Internal_Cryptography_OidLookup__NativeFriendlyNameToOid(friendlyName, v8, 0, v9);
  value = (Il2CppObject *)result;
  if ( result )
  {
    v11 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
      v11 = Internal_Cryptography_OidLookup_TypeInfo;
    }
    s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->s_lateBoundFriendlyNameToOid;
    if ( s_friendlyNameToOid )
    {
      System_Collections_Concurrent_ConcurrentDictionary_object__object___TryAdd(
        (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)s_friendlyNameToOid,
        (Il2CppObject *)friendlyName,
        value,
        (const MethodInfo_33EB504 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
      return (System_String_o *)value;
    }
LABEL_25:
    sub_1C71608(s_friendlyNameToOid, *(_QWORD *)&oidGroup);
  }
  return result;
}


void Internal_Cryptography_OidLookup___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CD09D2 & 1) == 0 )
  {
    sub_1C713B0(&Internal_Cryptography_OidLookup___c_TypeInfo);
    byte_4CD09D2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(Internal_Cryptography_OidLookup___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9 = (struct Internal_Cryptography_OidLookup___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields,
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
  if ( (byte_4CD09D3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    byte_4CD09D3 = 1;
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
  if ( (byte_4CD09D4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    byte_4CD09D4 = 1;
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  System_Security_Cryptography_DerSequenceReader_o *v19; // x23
  struct System_String_o *OidAsString; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct System_Byte_array *NextEncodedValue; // x1
  _QWORD *v34; // x24
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  System_Byte_array *v38; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v39; // x24
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  System_Security_Cryptography_DerSequenceReader_o *v46; // x23
  System_Byte_array *v47; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v48; // x24
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct System_Byte_array *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  System_Byte_array *SubjectPublicKeyInfo; // x24
  System_Security_Cryptography_DerSequenceReader_o *v63; // x23
  System_Security_Cryptography_DerSequenceReader_o *v64; // x24
  struct System_String_o *v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  struct System_Byte_array *v78; // x1
  _QWORD *v79; // x25
  __int64 v80; // x8
  __int64 v81; // x0
  __int64 v82; // x0
  struct System_Byte_array *BitString; // x0
  int32_t v84; // w2
  int32_t v85; // w3
  System_String_o *v86; // x4
  int32_t v87; // w5
  int64_t v88; // x6
  System_String_o *v89; // x7
  int32_t v90; // w2
  int32_t v91; // w3
  System_String_o *v92; // x4
  int32_t v93; // w5
  int64_t v94; // x6
  System_String_o *v95; // x7
  struct System_Byte_array *v96; // x0
  int32_t v97; // w1
  struct System_Byte_array **p_IssuerUniqueId; // x0
  int32_t v99; // w2
  int32_t v100; // w3
  System_String_o *v101; // x4
  int32_t v102; // w5
  int64_t v103; // x6
  System_String_o *v104; // x7
  struct System_Byte_array *v105; // x0
  int32_t v106; // w1
  struct System_Byte_array **p_SubjectUniqueId; // x0
  System_Collections_Generic_List_object__o *v108; // x24
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  System_Security_Cryptography_DerSequenceReader_o *v115; // x24
  System_Security_Cryptography_DerSequenceReader_o *v116; // x25
  System_String_o *v117; // x28
  bool v118; // w29
  System_Byte_array *OctetString; // x0
  System_Collections_Generic_List_object__o *Extensions; // x26
  System_Byte_array *v121; // x19
  System_Security_Cryptography_X509Certificates_X509Extension_o *v122; // x27
  int32_t v123; // w2
  int32_t v124; // w3
  System_String_o *v125; // x4
  int32_t v126; // w5
  int64_t v127; // x6
  System_String_o *v128; // x7
  struct System_Object_array *items; // x8
  _QWORD *v130; // x9
  __int64 size; // x10
  Il2CppClass **v132; // x0
  __int64 v133; // x0
  System_String_o *v134; // x0
  __int64 v135; // x0
  System_Security_Cryptography_DerSequenceReader_o *v136; // x22
  struct System_String_o *v137; // x0
  int32_t v138; // w2
  int32_t v139; // w3
  System_String_o *v140; // x4
  int32_t v141; // w5
  int64_t v142; // x6
  System_String_o *v143; // x7
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  struct System_Byte_array *v150; // x1
  _QWORD *v151; // x23
  __int64 v152; // x8
  __int64 v153; // x0
  __int64 v154; // x0
  struct System_Byte_array *v155; // x0
  int32_t v156; // w2
  int32_t v157; // w3
  System_String_o *v158; // x4
  int32_t v159; // w5
  int64_t v160; // x6
  System_String_o *v161; // x7
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  struct System_Byte_array *v168; // [xsp+8h] [xbp-68h]

  if ( (byte_4CD09D7 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_Empty_byte___);
    sub_1C713B0(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_X509Extension__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_X509Extension___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_X509Extension__TypeInfo);
    sub_1C713B0(&System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
    sub_1C713B0(&System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo);
    byte_4CD09D7 = 1;
  }
  v5 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1C715FC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor(v5, rawData, 0);
  if ( !v5 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v5, 0);
  if ( !Sequence )
    goto LABEL_86;
  v8 = Sequence;
  v168 = rawData;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(Sequence, 0) == 160 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0);
    if ( !Sequence )
      goto LABEL_86;
    Integer = System_Security_Cryptography_DerSequenceReader__ReadInteger(Sequence, 0);
    this->fields.Version = Integer;
    if ( Integer >= 3 )
    {
      v10 = sub_1C713C4(&System_Security_Cryptography_CryptographicException_TypeInfo);
      v11 = (System_Security_Cryptography_CryptographicException_o *)sub_1C715FC(v10);
      System_Security_Cryptography_CryptographicException___ctor(v11, 0);
      goto LABEL_69;
    }
  }
  else
  {
    if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0) != 2 )
      goto LABEL_68;
    this->fields.Version = 0;
  }
  IntegerBytes = System_Security_Cryptography_DerSequenceReader__ReadIntegerBytes(v8, 0);
  this->fields.SerialNumber = IntegerBytes;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.SerialNumber,
    (int32_t)IntegerBytes,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0);
  if ( !Sequence )
    goto LABEL_86;
  v19 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  this->fields.TbsSignature.fields.AlgorithmId = OidAsString;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.TbsSignature,
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
    v34 = Method_System_Array_Empty_byte___;
    v35 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v35 )
    {
      sub_1C474A0();
      v35 = v34[7];
    }
    v36 = *(_QWORD *)(v35 + 16);
    if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
      v36 = sub_1C47444();
    if ( !*(_DWORD *)(v36 + 224) )
      j_il2cpp_runtime_class_init_0(v36);
    v37 = *(_QWORD *)(v34[7] + 16LL);
    if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
      v37 = sub_1C47444();
    NextEncodedValue = **(struct System_Byte_array ***)(v37 + 184);
  }
  this->fields.TbsSignature.fields.Parameters = NextEncodedValue;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.TbsSignature.fields.Parameters,
    (int32_t)NextEncodedValue,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v19, 0) )
    goto LABEL_68;
  v38 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v8, 0);
  v39 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1C715FC(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor(v39, v38, 0);
  this->fields.Issuer = v39;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.Issuer, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0);
  if ( !Sequence )
    goto LABEL_86;
  v46 = Sequence;
  this->fields.NotBefore = System_Security_Cryptography_DerSequenceReader__ReadX509Date(Sequence, 0);
  this->fields.NotAfter = System_Security_Cryptography_DerSequenceReader__ReadX509Date(v46, 0);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v46, 0) )
  {
LABEL_68:
    v133 = sub_1C713C4(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v11 = (System_Security_Cryptography_CryptographicException_o *)sub_1C715FC(v133);
    v134 = (System_String_o *)sub_1C713C4(&StringLiteral_2036/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_64249080(v11, v134, 0);
LABEL_69:
    v135 = sub_1C713C4(&Method_Internal_Cryptography_Pal_CertificateData__ctor__);
    sub_1C714D8(v11, v135);
  }
  v47 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v8, 0);
  v48 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1C715FC(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor(v48, v47, 0);
  this->fields.Subject = v48;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.Subject, (int32_t)v48, v49, v50, v51, v52, v53, v54);
  v55 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v8, 0);
  this->fields.SubjectPublicKeyInfo = v55;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.SubjectPublicKeyInfo,
    (int32_t)v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  SubjectPublicKeyInfo = this->fields.SubjectPublicKeyInfo;
  v63 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1C715FC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor(v63, SubjectPublicKeyInfo, 0);
  if ( !v63 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v63, 0);
  if ( !Sequence )
    goto LABEL_86;
  v64 = Sequence;
  v65 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  this->fields.PublicKeyAlgorithm.fields.AlgorithmId = v65;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.PublicKeyAlgorithm,
    (int32_t)v65,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v64, 0) )
  {
    v78 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v64, 0);
  }
  else
  {
    v79 = Method_System_Array_Empty_byte___;
    v80 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v80 )
    {
      sub_1C474A0();
      v80 = v79[7];
    }
    v81 = *(_QWORD *)(v80 + 16);
    if ( (*(_BYTE *)(v81 + 309) & 1) == 0 )
      v81 = sub_1C47444();
    if ( !*(_DWORD *)(v81 + 224) )
      j_il2cpp_runtime_class_init_0(v81);
    v82 = *(_QWORD *)(v79[7] + 16LL);
    if ( (*(_BYTE *)(v82 + 309) & 1) == 0 )
      v82 = sub_1C47444();
    v78 = **(struct System_Byte_array ***)(v82 + 184);
  }
  this->fields.PublicKeyAlgorithm.fields.Parameters = v78;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.PublicKeyAlgorithm.fields.Parameters,
    (int32_t)v78,
    v72,
    v73,
    v74,
    v75,
    v76,
    v77);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v64, 0) )
    goto LABEL_68;
  BitString = System_Security_Cryptography_DerSequenceReader__ReadBitString(v63, 0);
  this->fields.PublicKey = BitString;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.PublicKey, (int32_t)BitString, v84, v85, v86, v87, v88, v89);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v63, 0) )
    goto LABEL_68;
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0) == 161 )
  {
    v96 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v8, 0);
    v97 = (int)v96;
    this->fields.IssuerUniqueId = v96;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
  }
  else
  {
    this->fields.IssuerUniqueId = 0;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
    v97 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_IssuerUniqueId, v97, v90, v91, v92, v93, v94, v95);
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0) == 162 )
  {
    v105 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v8, 0);
    v106 = (int)v105;
    this->fields.SubjectUniqueId = v105;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
  }
  else
  {
    this->fields.SubjectUniqueId = 0;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
    v106 = 0;
  }
  sub_1C71354((GrandQuestFolderBoardItem_o *)p_SubjectUniqueId, v106, v99, v100, v101, v102, v103, v104);
  v108 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_X509Extension__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v108,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_X509Extension___ctor__);
  this->fields.Extensions = (struct System_Collections_Generic_List_X509Extension__o *)v108;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.Extensions,
    (int32_t)v108,
    v109,
    v110,
    v111,
    v112,
    v113,
    v114);
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
        v115 = Sequence;
        while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v115, 0) )
        {
          Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v115, 0);
          if ( !Sequence )
            goto LABEL_86;
          v116 = Sequence;
          v117 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
          v118 = System_Security_Cryptography_DerSequenceReader__PeekTag(v116, 0) == 1
              && System_Security_Cryptography_DerSequenceReader__ReadBoolean(v116, 0);
          OctetString = System_Security_Cryptography_DerSequenceReader__ReadOctetString(v116, 0);
          Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
          v121 = OctetString;
          v122 = (System_Security_Cryptography_X509Certificates_X509Extension_o *)sub_1C715FC(System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo);
          System_Security_Cryptography_X509Certificates_X509Extension___ctor_70728388(v122, v117, v121, v118, 0);
          if ( !Extensions )
            goto LABEL_86;
          items = Extensions->fields._items;
          v130 = Method_System_Collections_Generic_List_X509Extension__Add__;
          ++Extensions->fields._version;
          if ( !items )
            goto LABEL_86;
          size = Extensions->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              Extensions,
              (Il2CppObject *)v122,
              *(const MethodInfo_3810718 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
          }
          else
          {
            v132 = &items->obj.klass + size;
            Extensions->fields._size = size + 1;
            v132[4] = (Il2CppClass *)v122;
            sub_1C71354((GrandQuestFolderBoardItem_o *)(v132 + 4), (int32_t)v122, v123, v124, v125, v126, v127, v128);
          }
          if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v116, 0) )
            goto LABEL_68;
        }
        goto LABEL_70;
      }
    }
LABEL_86:
    sub_1C71608(Sequence, v7);
  }
LABEL_70:
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0) )
    goto LABEL_68;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v5, 0);
  if ( !Sequence )
    goto LABEL_86;
  v136 = Sequence;
  v137 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  this->fields.SignatureAlgorithm.fields.AlgorithmId = v137;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.SignatureAlgorithm,
    (int32_t)v137,
    v138,
    v139,
    v140,
    v141,
    v142,
    v143);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v136, 0) )
  {
    v150 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v136, 0);
  }
  else
  {
    v151 = Method_System_Array_Empty_byte___;
    v152 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v152 )
    {
      sub_1C474A0();
      v152 = v151[7];
    }
    v153 = *(_QWORD *)(v152 + 16);
    if ( (*(_BYTE *)(v153 + 309) & 1) == 0 )
      v153 = sub_1C47444();
    if ( !*(_DWORD *)(v153 + 224) )
      j_il2cpp_runtime_class_init_0(v153);
    v154 = *(_QWORD *)(v151[7] + 16LL);
    if ( (*(_BYTE *)(v154 + 309) & 1) == 0 )
      v154 = sub_1C47444();
    v150 = **(struct System_Byte_array ***)(v154 + 184);
  }
  this->fields.SignatureAlgorithm.fields.Parameters = v150;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.SignatureAlgorithm.fields.Parameters,
    (int32_t)v150,
    v144,
    v145,
    v146,
    v147,
    v148,
    v149);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v136, 0) )
    goto LABEL_68;
  v155 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v5, 0);
  this->fields.SignatureValue = v155;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.SignatureValue,
    (int32_t)v155,
    v156,
    v157,
    v158,
    v159,
    v160,
    v161);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v5, 0) )
    goto LABEL_68;
  this->fields.RawData = v168;
  sub_1C71354((GrandQuestFolderBoardItem_o *)this, (int32_t)v168, v162, v163, v164, v165, v166, v167);
}


System_String_o *Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(
        System_Byte_array *extensionBytes,
        int32_t matchType,
        System_String_o *otherOid,
        const MethodInfo *method)
{
  char v7; // w23
  System_Security_Cryptography_DerSequenceReader_o *v8; // x21
  System_Security_Cryptography_DerSequenceReader_o *Sequence; // x0
  __int64 v10; // x1
  unsigned __int8 v11; // w23
  System_Security_Cryptography_DerSequenceReader_o *v12; // x22
  System_String_o *OidAsString; // x0
  __int64 v15; // x0
  System_Security_Cryptography_CryptographicException_o *v16; // x19
  System_String_o *v17; // x0
  __int64 v18; // x0

  if ( (byte_4CD09DA & 1) == 0 )
  {
    sub_1C713B0(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    byte_4CD09DA = 1;
  }
  if ( matchType )
    v7 = 0x80;
  else
    v7 = -96;
  v8 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1C715FC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor(v8, extensionBytes, 0);
  if ( !v8 )
    goto LABEL_22;
  if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0) )
    return 0;
  v11 = v7 | matchType;
  while ( System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0) != v11 )
  {
LABEL_13:
    System_Security_Cryptography_DerSequenceReader__SkipValue(v8, 0);
LABEL_16:
    if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0) )
      return 0;
  }
  if ( matchType )
  {
    if ( (unsigned int)(matchType - 1) < 2 || matchType == 6 )
      return System_Security_Cryptography_DerSequenceReader__ReadIA5String(v8, 0);
    goto LABEL_13;
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0);
  if ( !Sequence )
    goto LABEL_22;
  v12 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  if ( !System_String__op_Equality(OidAsString, otherOid, 0) )
    goto LABEL_16;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v12, 0) != 160 )
  {
    v15 = sub_1C713C4(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v16 = (System_Security_Cryptography_CryptographicException_o *)sub_1C715FC(v15);
    v17 = (System_String_o *)sub_1C713C4(&StringLiteral_2036/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_64249080(v16, v17, 0);
    v18 = sub_1C713C4(&Method_Internal_Cryptography_Pal_CertificateData_FindAltNameMatch__);
    sub_1C714D8(v16, v18);
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v12, 0);
  if ( !Sequence )
LABEL_22:
    sub_1C71608(Sequence, v10);
  return System_Security_Cryptography_DerSequenceReader__ReadUtf8String(Sequence, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *Internal_Cryptography_Pal_CertificateData__GetNameInfo(
        Internal_Cryptography_Pal_CertificateData_o *this,
        int32_t nameType,
        bool forIssuer,
        const MethodInfo *method)
{
  System_String_o **v7; // x8
  System_String_o *v8; // x22
  System_Nullable_Int32Enum__o v9; // x0
  int32_t v10; // w1
  __int64 v11; // x8
  System_String_o *SimpleNameInfo; // x23
  System_String_o **v13; // x8
  System_String_o *v14; // x24
  System_Collections_Generic_List_object__o *Extensions; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  System_Byte_array *monitor; // x23
  System_Nullable_Int32Enum__o v21; // x0
  int32_t Value; // w1
  const MethodInfo *v23; // x3
  __int64 *v24; // x8
  System_String_o *v25; // x21
  __int64 v26; // x8
  System_Collections_Generic_List_object__c *v27; // x8
  System_Collections_Generic_List_object__o *v28; // x19
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  System_Nullable_Int32Enum__o v32; // x0
  __int64 v33; // x1
  __int64 v34; // x19
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_String_o *v43; // x0
  System_String_o *v44; // x1
  int v45; // w21
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  System_Collections_Generic_List_Enumerator_object__o v51; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+20h] [xbp-70h] BYREF
  __int64 v53; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4CD09D8 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_X509Extension__get_Current__);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C713B0(&Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    sub_1C713B0(&Method_System_Nullable_GeneralNameType___ctor__);
    sub_1C713B0(&Method_System_Nullable_GeneralNameType__get_HasValue__);
    sub_1C713B0(&Method_System_Nullable_GeneralNameType__get_Value__);
    sub_1C713B0(&StringLiteral_1335/*"2.5.29.17"*/);
    sub_1C713B0(&StringLiteral_1222/*"1.2.840.113549.1.9.1"*/);
    sub_1C713B0(&StringLiteral_1284/*"1.3.6.1.4.1.311.20.2.3"*/);
    sub_1C713B0(&StringLiteral_1350/*"2.5.4.3"*/);
    sub_1C713B0(&StringLiteral_1336/*"2.5.29.18"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CD09D8 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  if ( nameType )
  {
    if ( forIssuer )
      v7 = (System_String_o **)&StringLiteral_1336/*"2.5.29.18"*/;
    else
      v7 = (System_String_o **)&StringLiteral_1335/*"2.5.29.17"*/;
    v8 = *v7;
    v53 = 0;
    switch ( nameType )
    {
      case 1:
        goto LABEL_16;
      case 2:
        v32 = (System_Nullable_Int32Enum__o)&v53;
        System_Nullable_Int32Enum____ctor(
          v32,
          0,
          (const MethodInfo_39390F8 *)Method_System_Nullable_GeneralNameType___ctor__);
        v14 = (System_String_o *)StringLiteral_1284/*"1.3.6.1.4.1.311.20.2.3"*/;
        break;
      case 3:
      case 4:
        v9 = (System_Nullable_Int32Enum__o)&v53;
        v10 = 2;
        goto LABEL_18;
      case 5:
        v9 = (System_Nullable_Int32Enum__o)&v53;
        v10 = 6;
        goto LABEL_18;
      default:
        goto LABEL_19;
    }
  }
  else
  {
    v11 = 72;
    if ( forIssuer )
      v11 = 48;
    SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
                       *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData
                                                                                                 + v11),
                       *(const MethodInfo **)&nameType);
    if ( SimpleNameInfo )
      return SimpleNameInfo;
    if ( forIssuer )
      v13 = (System_String_o **)&StringLiteral_1336/*"2.5.29.18"*/;
    else
      v13 = (System_String_o **)&StringLiteral_1335/*"2.5.29.17"*/;
    v8 = *v13;
    v53 = 0;
LABEL_16:
    v9 = (System_Nullable_Int32Enum__o)&v53;
    v10 = 1;
LABEL_18:
    System_Nullable_Int32Enum____ctor(
      v9,
      v10,
      (const MethodInfo_39390F8 *)Method_System_Nullable_GeneralNameType___ctor__);
LABEL_19:
    v14 = 0;
  }
  if ( (_BYTE)v53 )
  {
    Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
    if ( !Extensions )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v51,
      Extensions,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    v52 = v51;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v52,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
      if ( !v16 )
        break;
      current = v52.fields._current;
      if ( !v52.fields._current )
        sub_1C71608(v16, v17);
      klass = v52.fields._current[1].klass;
      if ( !klass )
        sub_1C71608(v16, v17);
      if ( System_String__op_Equality((System_String_o *)klass->_1.name, v8, 0) )
      {
        monitor = (System_Byte_array *)current[1].monitor;
        v21 = (System_Nullable_Int32Enum__o)&v53;
        Value = System_Nullable_Int32Enum___get_Value(
                  v21,
                  (const MethodInfo_3939110 *)Method_System_Nullable_GeneralNameType__get_Value__);
        SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(monitor, Value, v14, v23);
        if ( SimpleNameInfo )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v52,
            (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
          return SimpleNameInfo;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v52,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
  }
  if ( nameType == 1 )
  {
    v24 = &StringLiteral_1222/*"1.2.840.113549.1.9.1"*/;
  }
  else
  {
    if ( nameType != 3 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v24 = &StringLiteral_1350/*"2.5.4.3"*/;
  }
  v25 = (System_String_o *)*v24;
  if ( !*v24 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v26 = 72;
  if ( forIssuer )
    v26 = 48;
  Extensions = (System_Collections_Generic_List_object__o *)Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
                                                              *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData + v26),
                                                              *(const MethodInfo **)&nameType);
  if ( !Extensions )
LABEL_73:
    sub_1C71608(Extensions, *(_QWORD *)&nameType);
  v27 = Extensions->klass;
  v28 = Extensions;
  v29 = *(unsigned __int16 *)&Extensions->klass->_2.rank;
  if ( *(_WORD *)&Extensions->klass->_2.rank )
  {
    p_offset = &v27->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_42;
    }
    v31 = (__int64)&v27->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_42:
    v31 = sub_1C47738(Extensions, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0);
  }
  v34 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  if ( !v34 )
    sub_1C71608(0, v33);
  while ( 1 )
  {
    v35 = *(_QWORD *)v34;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v37 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_50;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_50:
      v38 = sub_1C47738(v34, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v34, *(_QWORD *)(v38 + 8)) & 1) == 0 )
      break;
    v39 = *(_QWORD *)v34;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v41 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_57;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_57:
      v42 = sub_1C47738(v34, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0);
    }
    v43 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v34, *(_QWORD *)(v42 + 8));
    SimpleNameInfo = v44;
    if ( System_String__op_Equality(v43, v25, 0) )
    {
      v45 = 16;
      goto LABEL_62;
    }
  }
  SimpleNameInfo = 0;
  v45 = 20;
LABEL_62:
  v46 = *(_QWORD *)v34;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v34 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v34 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_66;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_66:
    v49 = sub_1C47738(v34, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v34, *(_QWORD *)(v49 + 8));
  if ( v45 == 20 )
    return (System_String_o *)StringLiteral_1/*""*/;
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
  __int64 v12; // x19
  System_String_o *v13; // x23
  System_String_o *v14; // x24
  System_String_o *v15; // x25
  System_String_o *v16; // x20
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
  System_String_o *v27; // x21
  System_String_o *v28; // x8
  int v29; // w22
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_String_o *v35; // [xsp+8h] [xbp-68h]

  if ( (byte_4CD09D9 & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C713B0(&StringLiteral_1222/*"1.2.840.113549.1.9.1"*/);
    sub_1C713B0(&StringLiteral_1350/*"2.5.4.3"*/);
    sub_1C713B0(&StringLiteral_1343/*"2.5.4.11"*/);
    sub_1C713B0(&StringLiteral_1342/*"2.5.4.10"*/);
    byte_4CD09D9 = 1;
  }
  ReverseRdns = Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(name, method);
  if ( !ReverseRdns )
    sub_1C71608(0, v4);
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
    v9 = sub_1C47738(ReverseRdns, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *, _QWORD))v9)(
          v6,
          *(_QWORD *)(v9 + 8));
  v12 = v10;
  v35 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
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
    if ( !v12 )
      sub_1C71608(v10, v11);
    v17 = *(_QWORD *)v12;
    v15 = v16;
    v18 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
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
      v20 = sub_1C47738(v12, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8)) & 1) == 0 )
    {
      v16 = 0;
      v29 = 10;
      goto LABEL_37;
    }
    v21 = *(_QWORD *)v12;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
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
      v24 = sub_1C47738(v12, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0);
    }
    v25 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v12, *(_QWORD *)(v24 + 8));
    v16 = v26;
    v27 = v25;
    if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_1350/*"2.5.4.3"*/, 0) )
      break;
    v10 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_1343/*"2.5.4.11"*/, 0);
    if ( (v10 & 1) == 0 )
    {
      v10 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_1342/*"2.5.4.10"*/, 0);
      if ( (v10 & 1) != 0 )
        goto LABEL_13;
      v10 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_1222/*"1.2.840.113549.1.9.1"*/, 0);
      if ( (v10 & 1) == 0 )
      {
        v28 = v35;
        if ( !v35 )
          v28 = v16;
        v35 = v28;
        goto LABEL_11;
      }
      goto LABEL_12;
    }
  }
  v29 = 9;
LABEL_37:
  v30 = *(_QWORD *)v12;
  v31 = *(unsigned __int16 *)(*(_QWORD *)v12 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v12 + 302LL) )
  {
    v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v32 - 1) != System_IDisposable_TypeInfo )
    {
      --v31;
      v32 += 4;
      if ( !v31 )
        goto LABEL_41;
    }
    v33 = v30 + 16LL * *v32 + 312;
  }
  else
  {
LABEL_41:
    v33 = sub_1C47738(v12, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v33)(v12, *(_QWORD *)(v33 + 8));
  if ( v29 == 10 )
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
          return v35;
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CD09DB & 1) == 0 )
  {
    sub_1C713B0(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    byte_4CD09DB = 1;
  }
  v3 = sub_1C715FC(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 40) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 56) = name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 56), (int32_t)name, v4, v5, v6, v7, v8, v9);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_Stack_T__o *rdnReaders_5__2; // x22
  Il2CppObject *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o **p_rdnReader_5__3; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v29; // x22
  Il2CppObject *OidAsString; // x21
  const MethodInfo_37492A4 *v31; // x4
  unsigned int v32; // w8
  Il2CppObject *v33; // x2
  System_String_o *Utf8String; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  bool result; // w0
  struct System_Collections_Generic_KeyValuePair_string__string__o v42; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v43; // 0:x0.16

  v2 = this;
  if ( (byte_4CD09DD & 1) == 0 )
  {
    sub_1C713B0(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_KeyValuePair_string__string___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_Stack_DerSequenceReader__get_Count__);
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1C713B0(&System_Collections_Generic_Stack_DerSequenceReader__TypeInfo);
    byte_4CD09DD = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state == 1 )
  {
    v2->fields.__1__state = -1;
LABEL_13:
    p_rdnReader_5__3 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o **)&v2->fields._rdnReader_5__3;
    while ( 1 )
    {
      this = *p_rdnReader_5__3;
      if ( !*p_rdnReader_5__3 )
        goto LABEL_37;
      if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(
              (System_Security_Cryptography_DerSequenceReader_o *)this,
              0) )
      {
        *p_rdnReader_5__3 = 0;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields._rdnReader_5__3, 0, v23, v24, v25, v26, v27, v28);
        goto LABEL_33;
      }
      this = *p_rdnReader_5__3;
      if ( !*p_rdnReader_5__3 )
        goto LABEL_37;
      this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)System_Security_Cryptography_DerSequenceReader__ReadSequence(
                                                                                     (System_Security_Cryptography_DerSequenceReader_o *)this,
                                                                                     0);
      if ( !this )
        goto LABEL_37;
      v29 = this;
      OidAsString = (Il2CppObject *)System_Security_Cryptography_DerSequenceReader__ReadOidAsString(
                                      (System_Security_Cryptography_DerSequenceReader_o *)this,
                                      0);
      v32 = System_Security_Cryptography_DerSequenceReader__PeekTag(
              (System_Security_Cryptography_DerSequenceReader_o *)v29,
              0);
      v33 = 0;
      if ( v32 <= 0x13 )
      {
        if ( v32 == 12 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadUtf8String(
                         (System_Security_Cryptography_DerSequenceReader_o *)v29,
                         0);
          goto LABEL_29;
        }
        if ( v32 == 19 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadPrintableString(
                         (System_Security_Cryptography_DerSequenceReader_o *)v29,
                         0);
          goto LABEL_29;
        }
      }
      else
      {
        switch ( v32 )
        {
          case 0x14u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadT61String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v29,
                           0);
            goto LABEL_29;
          case 0x16u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadIA5String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v29,
                           0);
            goto LABEL_29;
          case 0x1Eu:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadBMPString(
                           (System_Security_Cryptography_DerSequenceReader_o *)v29,
                           0);
LABEL_29:
            v33 = (Il2CppObject *)Utf8String;
            break;
        }
      }
      if ( v33 )
      {
        v43.fields.key = (Il2CppObject *)&v42;
        v43.fields.value = OidAsString;
        v42 = (struct System_Collections_Generic_KeyValuePair_string__string__o)0LL;
        System_Collections_Generic_KeyValuePair_object__object____ctor(
          v43,
          v33,
          (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_string__string___ctor__,
          v31);
        v2->fields.__2__current = v42;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields.__2__current, 0, v35, v36, v37, v38, v39, v40);
        result = 1;
        v2->fields.__1__state = 1;
        return result;
      }
    }
  }
  if ( !_1__state )
  {
    name = v2->fields.name;
    v2->fields.__1__state = -1;
    if ( !name )
      goto LABEL_37;
    raw = name->fields._raw;
    v6 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1C715FC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
    System_Security_Cryptography_DerSequenceReader___ctor(v6, raw, 0);
    v7 = (System_Collections_Generic_Stack_T__o *)sub_1C715FC(System_Collections_Generic_Stack_DerSequenceReader__TypeInfo);
    System_Collections_Generic_Stack_object____ctor(
      v7,
      (const MethodInfo_3A751D0 *)Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    v2->fields._rdnReaders_5__2 = (struct System_Collections_Generic_Stack_DerSequenceReader__o *)v7;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v2->fields._rdnReaders_5__2, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    if ( !v6 )
      goto LABEL_37;
    if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v6, 0) )
      goto LABEL_33;
    do
    {
      rdnReaders_5__2 = (System_Collections_Generic_Stack_T__o *)v2->fields._rdnReaders_5__2;
      this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)System_Security_Cryptography_DerSequenceReader__ReadSet(
                                                                                     v6,
                                                                                     0);
      if ( !rdnReaders_5__2 )
        goto LABEL_37;
      System_Collections_Generic_Stack_object___Push(
        rdnReaders_5__2,
        (Il2CppObject *)this,
        (const MethodInfo_3A757F8 *)Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    }
    while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v6, 0) );
LABEL_33:
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v2->fields._rdnReaders_5__2;
    if ( !this )
LABEL_37:
      sub_1C71608(this, method);
    if ( SLODWORD(this->fields.__2__current.fields.key) > 0 )
    {
      v15 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_3A75798 *)Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
      v2->fields._rdnReader_5__3 = (struct System_Security_Cryptography_DerSequenceReader_o *)v15;
      sub_1C71354(
        (GrandQuestFolderBoardItem_o *)&v2->fields._rdnReader_5__3,
        (int32_t)v15,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      goto LABEL_13;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o *Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v10; // x20
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *_3__name; // x1

  if ( (byte_4CD09DF & 1) == 0 )
  {
    sub_1C713B0(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    byte_4CD09DF = 1;
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
    v10 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1C715FC(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__name = this->fields.__3__name;
  v10->fields.name = _3__name;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v10->fields.name, (int32_t)_3__name, v4, v5, v6, v7, v8, v9);
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_IEnumerator_get_Current(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_KeyValuePair_string__string__o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4CD09DE & 1) == 0 )
  {
    sub_1C713B0(&System_Collections_Generic_KeyValuePair_string__string__TypeInfo);
    byte_4CD09DE = 1;
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

  if ( (byte_4CCE882 & 1) == 0 )
  {
    sub_1C713B0(&System_Reflection_MissingMetadataException_TypeInfo);
    byte_4CCE882 = 1;
  }
  v3 = (System_Reflection_MissingMetadataException_o *)sub_1C715FC(System_Reflection_MissingMetadataException_TypeInfo);
  System_Reflection_MissingMetadataException___ctor(v3, 0);
  return (System_Exception_o *)v3;
}


void Internal_Runtime_Augments_RuntimeAugments___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CCE881 & 1) == 0 )
  {
    sub_1C713B0(&Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
    sub_1C713B0(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    byte_4CCE881 = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
  System_Object___ctor(v1, 0);
  Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields->s_reflectionExecutionDomainCallbacks = (struct Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields,
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
  sub_1C71608(0, v3);
}


Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *Internal_Runtime_Augments_RuntimeAugments__get_Callbacks(
        const MethodInfo *method)
{
  Internal_Runtime_Augments_RuntimeAugments_c *v1; // x0

  if ( (byte_4CCE880 & 1) == 0 )
  {
    sub_1C713B0(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    byte_4CCE880 = 1;
  }
  v1 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  if ( !Internal_Runtime_Augments_RuntimeAugments_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    v1 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  }
  return v1->static_fields->s_reflectionExecutionDomainCallbacks;
}


void Internal_Runtime_Augments_RuntimeThread___cctor(const MethodInfo *method)
{
  if ( (byte_4CCE884 & 1) == 0 )
  {
    sub_1C713B0(&Internal_Runtime_Augments_RuntimeThread_TypeInfo);
    byte_4CCE884 = 1;
  }
  Internal_Runtime_Augments_RuntimeThread_TypeInfo->static_fields->OptimalMaxSpinWaitsPerSpinIteration = 64;
}


void Internal_Runtime_Augments_RuntimeThread___ctor(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        System_Threading_Thread_o *t,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.thread = t;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)t, v5, v6, v7, v8, v9, v10);
}


Internal_Runtime_Augments_RuntimeThread_o *Internal_Runtime_Augments_RuntimeThread__Create(
        System_Threading_ParameterizedThreadStart_o *start,
        int32_t maxStackSize,
        const MethodInfo *method)
{
  System_Threading_Thread_o *v5; // x21
  __int64 v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4CCE883 & 1) == 0 )
  {
    sub_1C713B0(&Internal_Runtime_Augments_RuntimeThread_TypeInfo);
    sub_1C713B0(&System_Threading_Thread_TypeInfo);
    byte_4CCE883 = 1;
  }
  v5 = (System_Threading_Thread_o *)sub_1C715FC(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_65994992(v5, start, maxStackSize, 0);
  v6 = sub_1C715FC(Internal_Runtime_Augments_RuntimeThread_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)v5, v7, v8, v9, v10, v11, v12);
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
    sub_1C71608(0, state);
  System_Threading_Thread__Start_65995448(thread, state, 0);
}


bool Internal_Runtime_Augments_RuntimeThread__Yield(const MethodInfo *method)
{
  return System_Threading_Thread__Yield(0);
}


void Internal_Runtime_Augments_RuntimeThread__set_IsBackground(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Threading_Thread_o *thread; // x0

  thread = this->fields.thread;
  if ( !thread )
    sub_1C71608(0, value);
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

  if ( (byte_4CCE87F & 1) == 0 )
  {
    sub_1C713B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4CCE87F = 1;
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

  if ( (byte_4CCE87C & 1) == 0 )
  {
    sub_1C713B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4CCE87C = 1;
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

  if ( (byte_4CCE87D & 1) == 0 )
  {
    sub_1C713B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4CCE87D = 1;
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

  if ( (byte_4CCE87E & 1) == 0 )
  {
    sub_1C713B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4CCE87E = 1;
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

  if ( (byte_4CCE87B & 1) == 0 )
  {
    sub_1C713B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4CCE87B = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    LOBYTE(s_callbacks) = ((__int64 (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, void *))s_callbacks->klass[1]._1.image)(
                            s_callbacks,
                            s_callbacks->klass[1]._1.gc_desc);
  return (char)s_callbacks;
}