System_Byte_array *Internal_Cryptography_Helpers__CloneByteArray(System_Byte_array *src, const MethodInfo *method)
{
  System_Byte_array *result; // x0
  System_Byte_array *v4; // x19

  if ( (byte_4C4A1D0 & 1) == 0 )
  {
    sub_1C37058(&byte___TypeInfo);
    byte_4C4A1D0 = 1;
  }
  if ( !src )
    return 0;
  result = (System_Byte_array *)System_Array__Clone((System_Array_o *)src, 0);
  if ( result )
  {
    v4 = result;
    result = (System_Byte_array *)sub_1C37194(result);
    if ( !result )
    {
      sub_1C37574(v4);
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
  unsigned int v9; // w1
  unsigned int v10; // w16
  unsigned int v11; // w15
  unsigned int v12; // w14
  __int16 v13; // w17

  v2 = bytes;
  if ( (byte_4C4A1D1 & 1) == 0 )
  {
    bytes = (System_Byte_array *)sub_1C37058(&char___TypeInfo);
    byte_4C4A1D1 = 1;
  }
  if ( !v2 )
    goto LABEL_19;
  bytes = (System_Byte_array *)sub_1C37100(char___TypeInfo, (unsigned int)(2 * LODWORD(v2->max_length)));
  if ( (int)v2->max_length >= 1 )
  {
    max_length = (unsigned int)v2->max_length;
    v4 = 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v4 >= max_length )
LABEL_18:
        sub_1C372BC(bytes);
      v6 = v2->m_Items[v4];
      v7 = v6 >= 0xA0 ? 55 : 48;
      if ( !bytes )
        break;
      v8 = bytes->max_length;
      if ( v5 >= v8 )
        goto LABEL_18;
      v9 = v7 + (v6 >> 4);
      v10 = v5 + 1;
      *(_WORD *)&bytes->m_Items[2 * v5] = v9;
      if ( v5 + 1 >= v8 )
        goto LABEL_18;
      v11 = v6 & 0xF;
      v12 = v5 + 1;
      if ( v11 >= 0xA )
        v13 = 55;
      else
        v13 = 48;
      ++v4;
      *(_WORD *)&bytes->m_Items[2 * v12] = v13 + v11;
      v5 = v10 + 1;
      if ( (__int64)v4 >= (int)max_length )
        return (System_Char_array *)bytes;
    }
LABEL_19:
    sub_1C372B4(bytes);
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
  const MethodInfo *v3; // x3
  System_StringComparer_c *v4; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *s_ordinalIgnoreCase; // x19
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v6; // x20
  struct Internal_Cryptography_OidLookup_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_StringComparer_c *v10; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *v11; // x20
  System_Collections_Generic_Dictionary_object__object__o *v12; // x19
  __int64 v13; // x0
  struct Internal_Cryptography_OidLookup_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Internal_Cryptography_OidLookup___c_c *v17; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *s_friendlyNameToOid; // x19
  Il2CppObject *v19; // x20
  System_Func_T__TResult__o *v20; // x21
  Il2CppObject *v21; // x20
  System_Func_T__TResult__o *v22; // x22
  System_Collections_Generic_Dictionary_TKey__TElement__o *v23; // x0
  struct Internal_Cryptography_OidLookup_StaticFields *v24; // x8
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_Dictionary_object__object__o *v27; // x19
  struct Internal_Cryptography_OidLookup_StaticFields *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  if ( (byte_4C4C29A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___77987328);
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
    sub_1C37058(&System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor___78011728);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
    sub_1C37058(&System_Func_KeyValuePair_string__string___string__TypeInfo);
    sub_1C37058(&Internal_Cryptography_OidLookup_TypeInfo);
    sub_1C37058(&System_StringComparer_TypeInfo);
    sub_1C37058(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__);
    sub_1C37058(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__);
    sub_1C37058(&Internal_Cryptography_OidLookup___c_TypeInfo);
    sub_1C37058(&StringLiteral_17398/*"brainpoolP512t1"*/);
    sub_1C37058(&StringLiteral_1194/*"1.2.840.10046.2.1"*/);
    sub_1C37058(&StringLiteral_17386/*"brainpoolP160t1"*/);
    sub_1C37058(&StringLiteral_3533/*"CN"*/);
    sub_1C37058(&StringLiteral_1204/*"1.2.840.113549.1.1.7"*/);
    sub_1C37058(&StringLiteral_1278/*"1.3.36.3.3.2.8.1.1.13"*/);
    sub_1C37058(&StringLiteral_1218/*"1.2.840.113549.1.3.1"*/);
    sub_1C37058(&StringLiteral_11441/*"S"*/);
    sub_1C37058(&StringLiteral_1333/*"2.16.840.1.101.3.4.2.1"*/);
    sub_1C37058(&StringLiteral_1359/*"2.5.4.42"*/);
    sub_1C37058(&StringLiteral_1277/*"1.3.36.3.3.2.8.1.1.12"*/);
    sub_1C37058(&StringLiteral_1266/*"1.3.14.3.2.27"*/);
    sub_1C37058(&StringLiteral_1354/*"2.5.4.18"*/);
    sub_1C37058(&StringLiteral_1247/*"1.3.132.0.10"*/);
    sub_1C37058(&StringLiteral_18657/*"dnQualifier"*/);
    sub_1C37058(&StringLiteral_1203/*"1.2.840.113549.1.1.5"*/);
    sub_1C37058(&StringLiteral_1361/*"2.5.4.46"*/);
    sub_1C37058(&StringLiteral_1184/*"1.2.840.10045.3.1.3"*/);
    sub_1C37058(&StringLiteral_1246/*"1.2.840.113549.3.7"*/);
    sub_1C37058(&StringLiteral_1327/*"2.16.840.1.101.3.4.1.22"*/);
    sub_1C37058(&StringLiteral_1365/*"2.5.4.8"*/);
    sub_1C37058(&StringLiteral_23243/*"secP160r2"*/);
    sub_1C37058(&StringLiteral_22219/*"nistP192"*/);
    sub_1C37058(&StringLiteral_1245/*"1.2.840.113549.3.4"*/);
    sub_1C37058(&StringLiteral_18580/*"des"*/);
    sub_1C37058(&StringLiteral_1364/*"2.5.4.7"*/);
    sub_1C37058(&StringLiteral_1189/*"1.2.840.10045.4.1"*/);
    sub_1C37058(&StringLiteral_5412/*"ECDH_STD_SHA256_KDF"*/);
    sub_1C37058(&StringLiteral_21654/*"mosaicKMandUpdSig"*/);
    sub_1C37058(&StringLiteral_1205/*"1.2.840.113549.1.1.8"*/);
    sub_1C37058(&StringLiteral_21655/*"mosaicUpdatedSig"*/);
    sub_1C37058(&StringLiteral_15704/*"X21Address"*/);
    sub_1C37058(&StringLiteral_23411/*"sha256RSA"*/);
    sub_1C37058(&StringLiteral_3532/*"CMSRC2wrap"*/);
    sub_1C37058(&StringLiteral_17397/*"brainpoolP512r1"*/);
    sub_1C37058(&StringLiteral_5411/*"ECDH_STD_SHA1_KDF"*/);
    sub_1C37058(&StringLiteral_1195/*"1.2.840.113549.1.1.1"*/);
    sub_1C37058(&StringLiteral_1360/*"2.5.4.43"*/);
    sub_1C37058(&StringLiteral_1338/*"2.23.43.1.4.9"*/);
    sub_1C37058(&StringLiteral_24936/*"x962P239v3"*/);
    sub_1C37058(&StringLiteral_23242/*"secP160r1"*/);
    sub_1C37058(&StringLiteral_1292/*"1.3.6.1.5.5.7.2.1"*/);
    sub_1C37058(&StringLiteral_1353/*"2.5.4.17"*/);
    sub_1C37058(&StringLiteral_1188/*"1.2.840.10045.3.1.7"*/);
    sub_1C37058(&StringLiteral_10707/*"PostalCode"*/);
    sub_1C37058(&StringLiteral_1253/*"1.3.132.0.35"*/);
    sub_1C37058(&StringLiteral_1326/*"2.16.840.1.101.3.4.1.2"*/);
    sub_1C37058(&StringLiteral_1192/*"1.2.840.10045.4.3.3"*/);
    sub_1C37058(&StringLiteral_1182/*"1.2.840.10045.3.1.1"*/);
    sub_1C37058(&StringLiteral_1283/*"1.3.36.3.3.2.8.1.1.5"*/);
    sub_1C37058(&StringLiteral_6897/*"G"*/);
    sub_1C37058(&StringLiteral_12248/*"SN"*/);
    sub_1C37058(&StringLiteral_1187/*"1.2.840.10045.3.1.6"*/);
    sub_1C37058(&StringLiteral_23417/*"sha512RSA"*/);
    sub_1C37058(&StringLiteral_24935/*"x962P239v2"*/);
    sub_1C37058(&StringLiteral_1243/*"1.2.840.113549.2.5"*/);
    sub_1C37058(&StringLiteral_5410/*"ECC"*/);
    sub_1C37058(&StringLiteral_1363/*"2.5.4.6"*/);
    sub_1C37058(&StringLiteral_1229/*"1.2.840.113549.1.9.1"*/);
    sub_1C37058(&StringLiteral_1281/*"1.3.36.3.3.2.8.1.1.3"*/);
    sub_1C37058(&StringLiteral_22220/*"nistP224"*/);
    sub_1C37058(&StringLiteral_1287/*"1.3.36.3.3.2.8.1.1.9"*/);
    sub_1C37058(&StringLiteral_1241/*"1.2.840.113549.2.2"*/);
    sub_1C37058(&StringLiteral_1258/*"1.3.133.16.840.63.0.2"*/);
    sub_1C37058(&StringLiteral_1128/*"0.9.2342.19200300.100.1.25"*/);
    sub_1C37058(&StringLiteral_1251/*"1.3.132.0.33"*/);
    sub_1C37058(&StringLiteral_5404/*"E"*/);
    sub_1C37058(&StringLiteral_23405/*"sha1"*/);
    sub_1C37058(&StringLiteral_1191/*"1.2.840.10045.4.3.2"*/);
    sub_1C37058(&StringLiteral_24932/*"x962P192v2"*/);
    sub_1C37058(&StringLiteral_11170/*"RSA"*/);
    sub_1C37058(&StringLiteral_17388/*"brainpoolP192t1"*/);
    sub_1C37058(&StringLiteral_23413/*"sha384ECDSA"*/);
    sub_1C37058(&StringLiteral_5038/*"DSA"*/);
    sub_1C37058(&StringLiteral_4989/*"DH"*/);
    sub_1C37058(&StringLiteral_1286/*"1.3.36.3.3.2.8.1.1.8"*/);
    sub_1C37058(&StringLiteral_11565/*"SERIALNUMBER"*/);
    sub_1C37058(&StringLiteral_3531/*"CMS3DESwrap"*/);
    sub_1C37058(&StringLiteral_23407/*"sha1ECDSA"*/);
    sub_1C37058(&StringLiteral_1356/*"2.5.4.24"*/);
    sub_1C37058(&StringLiteral_23408/*"sha1RSA"*/);
    sub_1C37058(&StringLiteral_1330/*"2.16.840.1.101.3.4.1.45"*/);
    sub_1C37058(&StringLiteral_1179/*"1.2.840.10040.4.1"*/);
    sub_1C37058(&StringLiteral_23244/*"secP192k1"*/);
    sub_1C37058(&StringLiteral_1335/*"2.16.840.1.101.3.4.2.3"*/);
    sub_1C37058(&StringLiteral_1282/*"1.3.36.3.3.2.8.1.1.4"*/);
    sub_1C37058(&StringLiteral_1274/*"1.3.36.3.3.2.8.1.1.1"*/);
    sub_1C37058(&StringLiteral_1197/*"1.2.840.113549.1.1.11"*/);
    sub_1C37058(&StringLiteral_1329/*"2.16.840.1.101.3.4.1.42"*/);
    sub_1C37058(&StringLiteral_17392/*"brainpoolP256t1"*/);
    sub_1C37058(&StringLiteral_7368/*"I"*/);
    sub_1C37058(&StringLiteral_11172/*"RSASSA-PSS"*/);
    sub_1C37058(&StringLiteral_24862/*"wtls9"*/);
    sub_1C37058(&StringLiteral_1193/*"1.2.840.10045.4.3.4"*/);
    sub_1C37058(&StringLiteral_1232/*"1.2.840.113549.1.9.16.3.6"*/);
    sub_1C37058(&StringLiteral_4965/*"DC"*/);
    sub_1C37058(&StringLiteral_21510/*"md2"*/);
    sub_1C37058(&StringLiteral_1323/*"2.16.840.1.101.2.1.1.19"*/);
    sub_1C37058(&StringLiteral_1252/*"1.3.132.0.34"*/);
    sub_1C37058(&StringLiteral_21513/*"md4RSA"*/);
    sub_1C37058(&StringLiteral_1355/*"2.5.4.20"*/);
    sub_1C37058(&StringLiteral_13320/*"T"*/);
    sub_1C37058(&StringLiteral_11171/*"RSAES_OAEP"*/);
    sub_1C37058(&StringLiteral_8251/*"L"*/);
    sub_1C37058(&StringLiteral_17396/*"brainpoolP384t1"*/);
    sub_1C37058(&StringLiteral_1260/*"1.3.14.3.2.13"*/);
    sub_1C37058(&StringLiteral_24933/*"x962P192v3"*/);
    sub_1C37058(&StringLiteral_1271/*"1.3.14.7.2.3.1"*/);
    sub_1C37058(&StringLiteral_23414/*"sha384RSA"*/);
    sub_1C37058(&StringLiteral_21511/*"md2RSA"*/);
    sub_1C37058(&StringLiteral_23410/*"sha256ECDSA"*/);
    sub_1C37058(&StringLiteral_23418/*"shaRSA"*/);
    sub_1C37058(&StringLiteral_1352/*"2.5.4.13"*/);
    sub_1C37058(&StringLiteral_23401/*"sha"*/);
    sub_1C37058(&StringLiteral_21516/*"md5RSA"*/);
    sub_1C37058(&StringLiteral_23409/*"sha256"*/);
    sub_1C37058(&StringLiteral_23245/*"secP224k1"*/);
    sub_1C37058(&StringLiteral_21514/*"md5"*/);
    sub_1C37058(&StringLiteral_16706/*"aes192"*/);
    sub_1C37058(&StringLiteral_1198/*"1.2.840.113549.1.1.12"*/);
    sub_1C37058(&StringLiteral_10613/*"Phone"*/);
    sub_1C37058(&StringLiteral_1185/*"1.2.840.10045.3.1.4"*/);
    sub_1C37058(&StringLiteral_1401/*"3des"*/);
    sub_1C37058(&StringLiteral_21569/*"mgf1"*/);
    sub_1C37058(&StringLiteral_1357/*"2.5.4.3"*/);
    sub_1C37058(&StringLiteral_1255/*"1.3.132.0.9"*/);
    sub_1C37058(&StringLiteral_17390/*"brainpoolP224t1"*/);
    sub_1C37058(&StringLiteral_5415/*"ECDSA_P384"*/);
    sub_1C37058(&StringLiteral_1250/*"1.3.132.0.32"*/);
    sub_1C37058(&StringLiteral_18675/*"dsaSHA1"*/);
    sub_1C37058(&StringLiteral_1350/*"2.5.4.11"*/);
    sub_1C37058(&StringLiteral_9612/*"O"*/);
    sub_1C37058(&StringLiteral_1268/*"1.3.14.3.2.3"*/);
    sub_1C37058(&StringLiteral_1244/*"1.2.840.113549.3.2"*/);
    sub_1C37058(&StringLiteral_16704/*"aes128"*/);
    sub_1C37058(&StringLiteral_1257/*"1.3.132.1.11.2"*/);
    sub_1C37058(&StringLiteral_1269/*"1.3.14.3.2.4"*/);
    sub_1C37058(&StringLiteral_10399/*"POBox"*/);
    sub_1C37058(&StringLiteral_1242/*"1.2.840.113549.2.4"*/);
    sub_1C37058(&StringLiteral_1256/*"1.3.132.1.11.1"*/);
    sub_1C37058(&StringLiteral_1180/*"1.2.840.10040.4.3"*/);
    sub_1C37058(&StringLiteral_1264/*"1.3.14.3.2.22"*/);
    sub_1C37058(&StringLiteral_1276/*"1.3.36.3.3.2.8.1.1.11"*/);
    sub_1C37058(&StringLiteral_1200/*"1.2.840.113549.1.1.2"*/);
    sub_1C37058(&StringLiteral_11173/*"RSA_KEYX"*/);
    sub_1C37058(&StringLiteral_1351/*"2.5.4.12"*/);
    sub_1C37058(&StringLiteral_1324/*"2.16.840.1.101.2.1.1.20"*/);
    sub_1C37058(&StringLiteral_23406/*"sha1DSA"*/);
    sub_1C37058(&StringLiteral_23595/*"specifiedECDSA"*/);
    sub_1C37058(&StringLiteral_1249/*"1.3.132.0.31"*/);
    sub_1C37058(&StringLiteral_17391/*"brainpoolP256r1"*/);
    sub_1C37058(&StringLiteral_1261/*"1.3.14.3.2.15"*/);
    sub_1C37058(&StringLiteral_1254/*"1.3.132.0.8"*/);
    sub_1C37058(&StringLiteral_1199/*"1.2.840.113549.1.1.13"*/);
    sub_1C37058(&StringLiteral_17385/*"brainpoolP160r1"*/);
    sub_1C37058(&StringLiteral_24934/*"x962P239v1"*/);
    sub_1C37058(&StringLiteral_1265/*"1.3.14.3.2.26"*/);
    sub_1C37058(&StringLiteral_1190/*"1.2.840.10045.4.3"*/);
    sub_1C37058(&StringLiteral_9749/*"OU"*/);
    sub_1C37058(&StringLiteral_1181/*"1.2.840.10045.2.1"*/);
    sub_1C37058(&StringLiteral_1280/*"1.3.36.3.3.2.8.1.1.2"*/);
    sub_1C37058(&StringLiteral_9337/*"NO_SIGN"*/);
    sub_1C37058(&StringLiteral_22967/*"rc4"*/);
    sub_1C37058(&StringLiteral_21512/*"md4"*/);
    sub_1C37058(&StringLiteral_18790/*"ec192wapi"*/);
    sub_1C37058(&StringLiteral_1233/*"1.2.840.113549.1.9.16.3.7"*/);
    sub_1C37058(&StringLiteral_3265/*"C"*/);
    sub_1C37058(&StringLiteral_1284/*"1.3.36.3.3.2.8.1.1.6"*/);
    sub_1C37058(&StringLiteral_1186/*"1.2.840.10045.3.1.5"*/);
    sub_1C37058(&StringLiteral_17395/*"brainpoolP384r1"*/);
    sub_1C37058(&StringLiteral_17394/*"brainpoolP320t1"*/);
    sub_1C37058(&StringLiteral_5500/*"ESDH"*/);
    sub_1C37058(&StringLiteral_23412/*"sha384"*/);
    sub_1C37058(&StringLiteral_1231/*"1.2.840.113549.1.9.16.3.5"*/);
    sub_1C37058(&StringLiteral_5413/*"ECDH_STD_SHA384_KDF"*/);
    sub_1C37058(&StringLiteral_1248/*"1.3.132.0.30"*/);
    sub_1C37058(&StringLiteral_1263/*"1.3.14.3.2.2"*/);
    sub_1C37058(&StringLiteral_1262/*"1.3.14.3.2.18"*/);
    sub_1C37058(&StringLiteral_1202/*"1.2.840.113549.1.1.4"*/);
    sub_1C37058(&StringLiteral_3884/*"CPS"*/);
    sub_1C37058(&StringLiteral_1366/*"2.5.4.9"*/);
    sub_1C37058(&StringLiteral_1183/*"1.2.840.10045.3.1.2"*/);
    sub_1C37058(&StringLiteral_23415/*"sha512"*/);
    sub_1C37058(&StringLiteral_1285/*"1.3.36.3.3.2.8.1.1.7"*/);
    sub_1C37058(&StringLiteral_1331/*"2.16.840.1.101.3.4.1.5"*/);
    sub_1C37058(&StringLiteral_16705/*"aes128wrap"*/);
    sub_1C37058(&StringLiteral_1294/*"1.3.6.1.5.5.7.6.2"*/);
    sub_1C37058(&StringLiteral_5416/*"ECDSA_P521"*/);
    sub_1C37058(&StringLiteral_23241/*"secP160k1"*/);
    sub_1C37058(&StringLiteral_1334/*"2.16.840.1.101.3.4.2.2"*/);
    sub_1C37058(&StringLiteral_1270/*"1.3.14.3.2.7"*/);
    sub_1C37058(&StringLiteral_16709/*"aes256wrap"*/);
    sub_1C37058(&StringLiteral_1349/*"2.5.4.10"*/);
    sub_1C37058(&StringLiteral_23416/*"sha512ECDSA"*/);
    sub_1C37058(&StringLiteral_1259/*"1.3.14.3.2.12"*/);
    sub_1C37058(&StringLiteral_1201/*"1.2.840.113549.1.1.3"*/);
    sub_1C37058(&StringLiteral_23246/*"secP256k1"*/);
    sub_1C37058(&StringLiteral_1279/*"1.3.36.3.3.2.8.1.1.14"*/);
    sub_1C37058(&StringLiteral_5414/*"ECDSA_P256"*/);
    sub_1C37058(&StringLiteral_1267/*"1.3.14.3.2.29"*/);
    sub_1C37058(&StringLiteral_16707/*"aes192wrap"*/);
    sub_1C37058(&StringLiteral_1178/*"1.2.156.11235.1.1.2.1"*/);
    sub_1C37058(&StringLiteral_5240/*"Description"*/);
    sub_1C37058(&StringLiteral_22966/*"rc2"*/);
    sub_1C37058(&StringLiteral_17387/*"brainpoolP192r1"*/);
    sub_1C37058(&StringLiteral_1362/*"2.5.4.5"*/);
    sub_1C37058(&StringLiteral_16708/*"aes256"*/);
    sub_1C37058(&StringLiteral_17389/*"brainpoolP224r1"*/);
    sub_1C37058(&StringLiteral_17393/*"brainpoolP320r1"*/);
    sub_1C37058(&StringLiteral_1275/*"1.3.36.3.3.2.8.1.1.10"*/);
    sub_1C37058(&StringLiteral_1196/*"1.2.840.113549.1.1.10"*/);
    sub_1C37058(&StringLiteral_1328/*"2.16.840.1.101.3.4.1.25"*/);
    sub_1C37058(&StringLiteral_12406/*"STREET"*/);
    sub_1C37058(&StringLiteral_1358/*"2.5.4.4"*/);
    byte_4C4C29A = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor(
    v1,
    (const MethodInfo_3382F10 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
  Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_lateBoundOidToFriendlyName = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)Internal_Cryptography_OidLookup_TypeInfo->static_fields, (int32_t)v1, v2, v3);
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
  if ( !byte_4C4A787 )
  {
    sub_1C37058(&System_StringComparer_TypeInfo);
    byte_4C4A787 = 1;
  }
  v4 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v4 = System_StringComparer_TypeInfo;
  }
  s_ordinalIgnoreCase = (System_Collections_Generic_IEqualityComparer_TKey__o *)v4->static_fields->s_ordinalIgnoreCase;
  v6 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor_54013824(
    v6,
    s_ordinalIgnoreCase,
    (const MethodInfo_3382F80 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___77987328);
  static_fields = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  static_fields->s_lateBoundFriendlyNameToOid = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->s_lateBoundFriendlyNameToOid, (int32_t)v6, v8, v9);
  if ( !byte_4C4A787 )
  {
    sub_1C37058(&System_StringComparer_TypeInfo);
    byte_4C4A787 = 1;
  }
  v10 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v10 = System_StringComparer_TypeInfo;
  }
  v11 = (System_Collections_Generic_IEqualityComparer_TKey__o *)v10->static_fields->s_ordinalIgnoreCase;
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_54930604(
    v12,
    v11,
    (const MethodInfo_3462CAC *)Method_System_Collections_Generic_Dictionary_string__string___ctor___78011728);
  if ( !v12 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_1401/*"3des"*/,
    (Il2CppObject *)StringLiteral_1246/*"1.2.840.113549.3.7"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16704/*"aes128"*/,
    (Il2CppObject *)StringLiteral_1326/*"2.16.840.1.101.3.4.1.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16705/*"aes128wrap"*/,
    (Il2CppObject *)StringLiteral_1331/*"2.16.840.1.101.3.4.1.5"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16706/*"aes192"*/,
    (Il2CppObject *)StringLiteral_1327/*"2.16.840.1.101.3.4.1.22"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16707/*"aes192wrap"*/,
    (Il2CppObject *)StringLiteral_1328/*"2.16.840.1.101.3.4.1.25"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16708/*"aes256"*/,
    (Il2CppObject *)StringLiteral_1329/*"2.16.840.1.101.3.4.1.42"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16709/*"aes256wrap"*/,
    (Il2CppObject *)StringLiteral_1330/*"2.16.840.1.101.3.4.1.45"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17385/*"brainpoolP160r1"*/,
    (Il2CppObject *)StringLiteral_1274/*"1.3.36.3.3.2.8.1.1.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17386/*"brainpoolP160t1"*/,
    (Il2CppObject *)StringLiteral_1280/*"1.3.36.3.3.2.8.1.1.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17387/*"brainpoolP192r1"*/,
    (Il2CppObject *)StringLiteral_1281/*"1.3.36.3.3.2.8.1.1.3"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17388/*"brainpoolP192t1"*/,
    (Il2CppObject *)StringLiteral_1282/*"1.3.36.3.3.2.8.1.1.4"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17389/*"brainpoolP224r1"*/,
    (Il2CppObject *)StringLiteral_1283/*"1.3.36.3.3.2.8.1.1.5"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17390/*"brainpoolP224t1"*/,
    (Il2CppObject *)StringLiteral_1284/*"1.3.36.3.3.2.8.1.1.6"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17391/*"brainpoolP256r1"*/,
    (Il2CppObject *)StringLiteral_1285/*"1.3.36.3.3.2.8.1.1.7"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17392/*"brainpoolP256t1"*/,
    (Il2CppObject *)StringLiteral_1286/*"1.3.36.3.3.2.8.1.1.8"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17393/*"brainpoolP320r1"*/,
    (Il2CppObject *)StringLiteral_1287/*"1.3.36.3.3.2.8.1.1.9"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17394/*"brainpoolP320t1"*/,
    (Il2CppObject *)StringLiteral_1275/*"1.3.36.3.3.2.8.1.1.10"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17395/*"brainpoolP384r1"*/,
    (Il2CppObject *)StringLiteral_1276/*"1.3.36.3.3.2.8.1.1.11"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17396/*"brainpoolP384t1"*/,
    (Il2CppObject *)StringLiteral_1277/*"1.3.36.3.3.2.8.1.1.12"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17397/*"brainpoolP512r1"*/,
    (Il2CppObject *)StringLiteral_1278/*"1.3.36.3.3.2.8.1.1.13"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17398/*"brainpoolP512t1"*/,
    (Il2CppObject *)StringLiteral_1279/*"1.3.36.3.3.2.8.1.1.14"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3265/*"C"*/,
    (Il2CppObject *)StringLiteral_1363/*"2.5.4.6"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3531/*"CMS3DESwrap"*/,
    (Il2CppObject *)StringLiteral_1232/*"1.2.840.113549.1.9.16.3.6"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3532/*"CMSRC2wrap"*/,
    (Il2CppObject *)StringLiteral_1233/*"1.2.840.113549.1.9.16.3.7"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3533/*"CN"*/,
    (Il2CppObject *)StringLiteral_1357/*"2.5.4.3"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3884/*"CPS"*/,
    (Il2CppObject *)StringLiteral_1292/*"1.3.6.1.5.5.7.2.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_4965/*"DC"*/,
    (Il2CppObject *)StringLiteral_1128/*"0.9.2342.19200300.100.1.25"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_18580/*"des"*/,
    (Il2CppObject *)StringLiteral_1270/*"1.3.14.3.2.7"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5240/*"Description"*/,
    (Il2CppObject *)StringLiteral_1352/*"2.5.4.13"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_4989/*"DH"*/,
    (Il2CppObject *)StringLiteral_1194/*"1.2.840.10046.2.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_18657/*"dnQualifier"*/,
    (Il2CppObject *)StringLiteral_1361/*"2.5.4.46"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5038/*"DSA"*/,
    (Il2CppObject *)StringLiteral_1179/*"1.2.840.10040.4.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_18675/*"dsaSHA1"*/,
    (Il2CppObject *)StringLiteral_1266/*"1.3.14.3.2.27"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5404/*"E"*/,
    (Il2CppObject *)StringLiteral_1229/*"1.2.840.113549.1.9.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_18790/*"ec192wapi"*/,
    (Il2CppObject *)StringLiteral_1178/*"1.2.156.11235.1.1.2.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5410/*"ECC"*/,
    (Il2CppObject *)StringLiteral_1181/*"1.2.840.10045.2.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5411/*"ECDH_STD_SHA1_KDF"*/,
    (Il2CppObject *)StringLiteral_1258/*"1.3.133.16.840.63.0.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5412/*"ECDH_STD_SHA256_KDF"*/,
    (Il2CppObject *)StringLiteral_1256/*"1.3.132.1.11.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5413/*"ECDH_STD_SHA384_KDF"*/,
    (Il2CppObject *)StringLiteral_1257/*"1.3.132.1.11.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5414/*"ECDSA_P256"*/,
    (Il2CppObject *)StringLiteral_1188/*"1.2.840.10045.3.1.7"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5415/*"ECDSA_P384"*/,
    (Il2CppObject *)StringLiteral_1252/*"1.3.132.0.34"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5416/*"ECDSA_P521"*/,
    (Il2CppObject *)StringLiteral_1253/*"1.3.132.0.35"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5500/*"ESDH"*/,
    (Il2CppObject *)StringLiteral_1231/*"1.2.840.113549.1.9.16.3.5"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_6897/*"G"*/,
    (Il2CppObject *)StringLiteral_1359/*"2.5.4.42"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_7368/*"I"*/,
    (Il2CppObject *)StringLiteral_1360/*"2.5.4.43"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_8251/*"L"*/,
    (Il2CppObject *)StringLiteral_1364/*"2.5.4.7"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21510/*"md2"*/,
    (Il2CppObject *)StringLiteral_1241/*"1.2.840.113549.2.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21511/*"md2RSA"*/,
    (Il2CppObject *)StringLiteral_1200/*"1.2.840.113549.1.1.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21512/*"md4"*/,
    (Il2CppObject *)StringLiteral_1242/*"1.2.840.113549.2.4"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21513/*"md4RSA"*/,
    (Il2CppObject *)StringLiteral_1201/*"1.2.840.113549.1.1.3"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21514/*"md5"*/,
    (Il2CppObject *)StringLiteral_1243/*"1.2.840.113549.2.5"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21516/*"md5RSA"*/,
    (Il2CppObject *)StringLiteral_1202/*"1.2.840.113549.1.1.4"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21569/*"mgf1"*/,
    (Il2CppObject *)StringLiteral_1205/*"1.2.840.113549.1.1.8"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21654/*"mosaicKMandUpdSig"*/,
    (Il2CppObject *)StringLiteral_1324/*"2.16.840.1.101.2.1.1.20"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21655/*"mosaicUpdatedSig"*/,
    (Il2CppObject *)StringLiteral_1323/*"2.16.840.1.101.2.1.1.19"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_22219/*"nistP192"*/,
    (Il2CppObject *)StringLiteral_1182/*"1.2.840.10045.3.1.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_22220/*"nistP224"*/,
    (Il2CppObject *)StringLiteral_1251/*"1.3.132.0.33"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_9337/*"NO_SIGN"*/,
    (Il2CppObject *)StringLiteral_1294/*"1.3.6.1.5.5.7.6.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_9612/*"O"*/,
    (Il2CppObject *)StringLiteral_1349/*"2.5.4.10"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_9749/*"OU"*/,
    (Il2CppObject *)StringLiteral_1350/*"2.5.4.11"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_10613/*"Phone"*/,
    (Il2CppObject *)StringLiteral_1355/*"2.5.4.20"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_10399/*"POBox"*/,
    (Il2CppObject *)StringLiteral_1354/*"2.5.4.18"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_10707/*"PostalCode"*/,
    (Il2CppObject *)StringLiteral_1353/*"2.5.4.17"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_22966/*"rc2"*/,
    (Il2CppObject *)StringLiteral_1244/*"1.2.840.113549.3.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_22967/*"rc4"*/,
    (Il2CppObject *)StringLiteral_1245/*"1.2.840.113549.3.4"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11170/*"RSA"*/,
    (Il2CppObject *)StringLiteral_1195/*"1.2.840.113549.1.1.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11171/*"RSAES_OAEP"*/,
    (Il2CppObject *)StringLiteral_1204/*"1.2.840.113549.1.1.7"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11172/*"RSASSA-PSS"*/,
    (Il2CppObject *)StringLiteral_1196/*"1.2.840.113549.1.1.10"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11441/*"S"*/,
    (Il2CppObject *)StringLiteral_1365/*"2.5.4.8"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23241/*"secP160k1"*/,
    (Il2CppObject *)StringLiteral_1255/*"1.3.132.0.9"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23242/*"secP160r1"*/,
    (Il2CppObject *)StringLiteral_1254/*"1.3.132.0.8"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23243/*"secP160r2"*/,
    (Il2CppObject *)StringLiteral_1248/*"1.3.132.0.30"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23244/*"secP192k1"*/,
    (Il2CppObject *)StringLiteral_1249/*"1.3.132.0.31"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23245/*"secP224k1"*/,
    (Il2CppObject *)StringLiteral_1250/*"1.3.132.0.32"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23246/*"secP256k1"*/,
    (Il2CppObject *)StringLiteral_1247/*"1.3.132.0.10"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11565/*"SERIALNUMBER"*/,
    (Il2CppObject *)StringLiteral_1362/*"2.5.4.5"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23405/*"sha1"*/,
    (Il2CppObject *)StringLiteral_1265/*"1.3.14.3.2.26"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23406/*"sha1DSA"*/,
    (Il2CppObject *)StringLiteral_1180/*"1.2.840.10040.4.3"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23407/*"sha1ECDSA"*/,
    (Il2CppObject *)StringLiteral_1189/*"1.2.840.10045.4.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23408/*"sha1RSA"*/,
    (Il2CppObject *)StringLiteral_1203/*"1.2.840.113549.1.1.5"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23409/*"sha256"*/,
    (Il2CppObject *)StringLiteral_1333/*"2.16.840.1.101.3.4.2.1"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23410/*"sha256ECDSA"*/,
    (Il2CppObject *)StringLiteral_1191/*"1.2.840.10045.4.3.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23411/*"sha256RSA"*/,
    (Il2CppObject *)StringLiteral_1197/*"1.2.840.113549.1.1.11"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23412/*"sha384"*/,
    (Il2CppObject *)StringLiteral_1334/*"2.16.840.1.101.3.4.2.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23413/*"sha384ECDSA"*/,
    (Il2CppObject *)StringLiteral_1192/*"1.2.840.10045.4.3.3"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23414/*"sha384RSA"*/,
    (Il2CppObject *)StringLiteral_1198/*"1.2.840.113549.1.1.12"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23415/*"sha512"*/,
    (Il2CppObject *)StringLiteral_1335/*"2.16.840.1.101.3.4.2.3"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23416/*"sha512ECDSA"*/,
    (Il2CppObject *)StringLiteral_1193/*"1.2.840.10045.4.3.4"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23417/*"sha512RSA"*/,
    (Il2CppObject *)StringLiteral_1199/*"1.2.840.113549.1.1.13"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_12248/*"SN"*/,
    (Il2CppObject *)StringLiteral_1358/*"2.5.4.4"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23595/*"specifiedECDSA"*/,
    (Il2CppObject *)StringLiteral_1190/*"1.2.840.10045.4.3"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_12406/*"STREET"*/,
    (Il2CppObject *)StringLiteral_1366/*"2.5.4.9"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_13320/*"T"*/,
    (Il2CppObject *)StringLiteral_1351/*"2.5.4.12"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24862/*"wtls9"*/,
    (Il2CppObject *)StringLiteral_1338/*"2.23.43.1.4.9"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_15704/*"X21Address"*/,
    (Il2CppObject *)StringLiteral_1356/*"2.5.4.24"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24932/*"x962P192v2"*/,
    (Il2CppObject *)StringLiteral_1183/*"1.2.840.10045.3.1.2"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24933/*"x962P192v3"*/,
    (Il2CppObject *)StringLiteral_1184/*"1.2.840.10045.3.1.3"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24934/*"x962P239v1"*/,
    (Il2CppObject *)StringLiteral_1185/*"1.2.840.10045.3.1.4"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24935/*"x962P239v2"*/,
    (Il2CppObject *)StringLiteral_1186/*"1.2.840.10045.3.1.5"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24936/*"x962P239v3"*/,
    (Il2CppObject *)StringLiteral_1187/*"1.2.840.10045.3.1.6"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v14 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v14->s_friendlyNameToOid = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&v14->s_friendlyNameToOid, (int32_t)v12, v15, v16);
  v17 = Internal_Cryptography_OidLookup___c_TypeInfo;
  s_friendlyNameToOid = Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_friendlyNameToOid;
  if ( !Internal_Cryptography_OidLookup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup___c_TypeInfo);
    v17 = Internal_Cryptography_OidLookup___c_TypeInfo;
  }
  v19 = (Il2CppObject *)v17->static_fields->__9;
  v20 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v20,
    v19,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__,
    0);
  v21 = (Il2CppObject *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9;
  v22 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v22,
    v21,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__,
    0);
  v23 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)s_friendlyNameToOid,
          (System_Func_TSource__TKey__o *)v20,
          (System_Func_TSource__TElement__o *)v22,
          (const MethodInfo_3127A68 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
  v24 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v24->s_oidToFriendlyName = (struct System_Collections_Generic_Dictionary_string__string__o *)v23;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24->s_oidToFriendlyName, (int32_t)v23, v25, v26);
  v27 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v27,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v27 )
LABEL_18:
    sub_1C372B4(v13);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1218/*"1.2.840.113549.1.3.1"*/,
    (Il2CppObject *)StringLiteral_4989/*"DH"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1259/*"1.3.14.3.2.12"*/,
    (Il2CppObject *)StringLiteral_5038/*"DSA"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1260/*"1.3.14.3.2.13"*/,
    (Il2CppObject *)StringLiteral_23406/*"sha1DSA"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1261/*"1.3.14.3.2.15"*/,
    (Il2CppObject *)StringLiteral_23418/*"shaRSA"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1262/*"1.3.14.3.2.18"*/,
    (Il2CppObject *)StringLiteral_23401/*"sha"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1263/*"1.3.14.3.2.2"*/,
    (Il2CppObject *)StringLiteral_21513/*"md4RSA"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1264/*"1.3.14.3.2.22"*/,
    (Il2CppObject *)StringLiteral_11173/*"RSA_KEYX"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1267/*"1.3.14.3.2.29"*/,
    (Il2CppObject *)StringLiteral_23408/*"sha1RSA"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1268/*"1.3.14.3.2.3"*/,
    (Il2CppObject *)StringLiteral_21516/*"md5RSA"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1269/*"1.3.14.3.2.4"*/,
    (Il2CppObject *)StringLiteral_21513/*"md4RSA"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_1271/*"1.3.14.7.2.3.1"*/,
    (Il2CppObject *)StringLiteral_21511/*"md2RSA"*/,
    (const MethodInfo_3463630 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v28 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v28->s_compatOids = (struct System_Collections_Generic_Dictionary_string__string__o *)v27;
  sub_1C36FFC((CGThumbnailListItem_o *)&v28->s_compatOids, (int32_t)v27, v29, v30);
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

  if ( (byte_4C4C299 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6375/*"Extended Key Usage"*/);
    sub_1C37058(&StringLiteral_1342/*"2.5.29.17"*/);
    sub_1C37058(&StringLiteral_1238/*"1.2.840.113549.1.9.4"*/);
    sub_1C37058(&StringLiteral_8224/*"Key Usage"*/);
    sub_1C37058(&StringLiteral_1239/*"1.2.840.113549.1.9.5"*/);
    sub_1C37058(&StringLiteral_9034/*"Message Digest"*/);
    sub_1C37058(&StringLiteral_1237/*"1.2.840.113549.1.9.3"*/);
    sub_1C37058(&StringLiteral_1337/*"2.16.840.1.113730.1.1"*/);
    sub_1C37058(&StringLiteral_12872/*"Signing Time"*/);
    sub_1C37058(&StringLiteral_1348/*"2.5.29.37"*/);
    sub_1C37058(&StringLiteral_1340/*"2.5.29.14"*/);
    sub_1C37058(&StringLiteral_1230/*"1.2.840.113549.1.9.16.3.3"*/);
    sub_1C37058(&StringLiteral_10382/*"PKCS 7 Data"*/);
    sub_1C37058(&StringLiteral_3081/*"Basic Constraints"*/);
    sub_1C37058(&StringLiteral_13141/*"Subject Alternative Name"*/);
    sub_1C37058(&StringLiteral_4683/*"Content Type"*/);
    sub_1C37058(&StringLiteral_13142/*"Subject Key Identifier"*/);
    sub_1C37058(&StringLiteral_1341/*"2.5.29.15"*/);
    sub_1C37058(&StringLiteral_9420/*"Netscape Cert Type"*/);
    sub_1C37058(&StringLiteral_1225/*"1.2.840.113549.1.7.1"*/);
    sub_1C37058(&StringLiteral_1344/*"2.5.29.19"*/);
    sub_1C37058(&StringLiteral_20257/*"id-smime-alg-3DESwrap"*/);
    byte_4C4C299 = 1;
  }
  v5 = PrivateImplementationDetails___ComputeStringHash_70042620(friendlyName, 0);
  if ( v5 > 0x751680DD )
  {
    if ( v5 > 0xB4301663 )
    {
      switch ( v5 )
      {
        case 0xB85A3360:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_6375/*"Extended Key Usage"*/, 0);
          v7 = &StringLiteral_1348/*"2.5.29.37"*/;
          break;
        case 0xCCB33EB4:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_9034/*"Message Digest"*/, 0);
          v7 = &StringLiteral_1238/*"1.2.840.113549.1.9.4"*/;
          break;
        case 0xE2748DE9:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_20257/*"id-smime-alg-3DESwrap"*/, 0);
          v7 = &StringLiteral_1230/*"1.2.840.113549.1.9.16.3.3"*/;
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
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_4683/*"Content Type"*/, 0);
          v7 = &StringLiteral_1237/*"1.2.840.113549.1.9.3"*/;
          break;
        case 0x9DCF2034:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_9420/*"Netscape Cert Type"*/, 0);
          v7 = &StringLiteral_1337/*"2.16.840.1.113730.1.1"*/;
          break;
        case 0xB4301663:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_13141/*"Subject Alternative Name"*/, 0);
          v7 = &StringLiteral_1342/*"2.5.29.17"*/;
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
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_13142/*"Subject Key Identifier"*/, 0);
        v7 = &StringLiteral_1340/*"2.5.29.14"*/;
        break;
      case 0x5F357EFDu:
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12872/*"Signing Time"*/, 0);
        v7 = &StringLiteral_1239/*"1.2.840.113549.1.9.5"*/;
        break;
      case 0x751680DDu:
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_3081/*"Basic Constraints"*/, 0);
        v7 = &StringLiteral_1344/*"2.5.29.19"*/;
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
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_10382/*"PKCS 7 Data"*/, 0);
        v7 = &StringLiteral_1225/*"1.2.840.113549.1.7.1"*/;
        goto LABEL_29;
      }
      return 0;
    }
    v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_8224/*"Key Usage"*/, 0);
    v7 = &StringLiteral_1341/*"2.5.29.15"*/;
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

  if ( (byte_4C4C298 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6375/*"Extended Key Usage"*/);
    sub_1C37058(&StringLiteral_1342/*"2.5.29.17"*/);
    sub_1C37058(&StringLiteral_1238/*"1.2.840.113549.1.9.4"*/);
    sub_1C37058(&StringLiteral_8224/*"Key Usage"*/);
    sub_1C37058(&StringLiteral_1239/*"1.2.840.113549.1.9.5"*/);
    sub_1C37058(&StringLiteral_9034/*"Message Digest"*/);
    sub_1C37058(&StringLiteral_1237/*"1.2.840.113549.1.9.3"*/);
    sub_1C37058(&StringLiteral_1337/*"2.16.840.1.113730.1.1"*/);
    sub_1C37058(&StringLiteral_12872/*"Signing Time"*/);
    sub_1C37058(&StringLiteral_1348/*"2.5.29.37"*/);
    sub_1C37058(&StringLiteral_1340/*"2.5.29.14"*/);
    sub_1C37058(&StringLiteral_1230/*"1.2.840.113549.1.9.16.3.3"*/);
    sub_1C37058(&StringLiteral_10382/*"PKCS 7 Data"*/);
    sub_1C37058(&StringLiteral_3081/*"Basic Constraints"*/);
    sub_1C37058(&StringLiteral_13141/*"Subject Alternative Name"*/);
    sub_1C37058(&StringLiteral_4683/*"Content Type"*/);
    sub_1C37058(&StringLiteral_13142/*"Subject Key Identifier"*/);
    sub_1C37058(&StringLiteral_1341/*"2.5.29.15"*/);
    sub_1C37058(&StringLiteral_9420/*"Netscape Cert Type"*/);
    sub_1C37058(&StringLiteral_1225/*"1.2.840.113549.1.7.1"*/);
    sub_1C37058(&StringLiteral_1344/*"2.5.29.19"*/);
    sub_1C37058(&StringLiteral_20257/*"id-smime-alg-3DESwrap"*/);
    byte_4C4C298 = 1;
  }
  v5 = PrivateImplementationDetails___ComputeStringHash_70042620(oid, 0);
  if ( v5 > 0xC67AB912 )
  {
    if ( v5 > 0xD20A3896 )
    {
      switch ( v5 )
      {
        case 0xD30A3A29:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1341/*"2.5.29.15"*/, 0);
          v7 = &StringLiteral_8224/*"Key Usage"*/;
          break;
        case 0xDC06204E:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1337/*"2.16.840.1.113730.1.1"*/, 0);
          v7 = &StringLiteral_9420/*"Netscape Cert Type"*/;
          break;
        case 0xDF0A4D0D:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1344/*"2.5.29.19"*/, 0);
          v7 = &StringLiteral_3081/*"Basic Constraints"*/;
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
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1348/*"2.5.29.37"*/, 0);
          v7 = &StringLiteral_6375/*"Extended Key Usage"*/;
          break;
        case 0xD10A3703:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1342/*"2.5.29.17"*/, 0);
          v7 = &StringLiteral_13141/*"Subject Alternative Name"*/;
          break;
        case 0xD20A3896:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1340/*"2.5.29.14"*/, 0);
          v7 = &StringLiteral_13142/*"Subject Key Identifier"*/;
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
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1238/*"1.2.840.113549.1.9.4"*/, 0);
        v7 = &StringLiteral_9034/*"Message Digest"*/;
        break;
      case 0xB1E05402:
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1237/*"1.2.840.113549.1.9.3"*/, 0);
        v7 = &StringLiteral_4683/*"Content Type"*/;
        break;
      case 0xC67AB912:
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1230/*"1.2.840.113549.1.9.16.3.3"*/, 0);
        v7 = &StringLiteral_20257/*"id-smime-alg-3DESwrap"*/;
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
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1225/*"1.2.840.113549.1.7.1"*/, 0);
        v7 = &StringLiteral_10382/*"PKCS 7 Data"*/;
        goto LABEL_29;
      }
      return 0;
    }
    v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1239/*"1.2.840.113549.1.9.5"*/, 0);
    v7 = &StringLiteral_12872/*"Signing Time"*/;
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

  if ( (byte_4C4C296 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C37058(&Internal_Cryptography_OidLookup_TypeInfo);
    byte_4C4C296 = 1;
  }
  value = 0;
  if ( !oid )
  {
    v13 = sub_1C3706C(&System_ArgumentNullException_TypeInfo);
    v14 = (System_ArgumentNullException_o *)sub_1C372A4(v13);
    v15 = (System_String_o *)sub_1C3706C(&StringLiteral_22380/*"oid"*/);
    System_ArgumentNullException___ctor_64574016(v14, v15, 0);
    v16 = sub_1C3706C(&Method_Internal_Cryptography_OidLookup_ToFriendlyName__);
    sub_1C37180(v14, v16);
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
          (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
            (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
              (const MethodInfo_3383DA8 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
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
              (const MethodInfo_3383724 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
            return (System_String_o *)value;
          }
LABEL_25:
          sub_1C372B4(s_oidToFriendlyName);
        }
      }
    }
  }
  return (System_String_o *)value;
}


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

  if ( (byte_4C4C297 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
    sub_1C37058(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C37058(&Internal_Cryptography_OidLookup_TypeInfo);
    byte_4C4C297 = 1;
  }
  value = 0;
  if ( !friendlyName )
  {
    v12 = sub_1C3706C(&System_ArgumentNullException_TypeInfo);
    v13 = (System_ArgumentNullException_o *)sub_1C372A4(v12);
    v14 = (System_String_o *)sub_1C3706C(&StringLiteral_19690/*"friendlyName"*/);
    System_ArgumentNullException___ctor_64574016(v13, v14, 0);
    v15 = sub_1C3706C(&Method_Internal_Cryptography_OidLookup_ToOid__);
    sub_1C37180(v13, v15);
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
         (const MethodInfo_3464E3C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
         (const MethodInfo_3383DA8 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
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
        (const MethodInfo_3383724 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
      return (System_String_o *)value;
    }
LABEL_25:
    sub_1C372B4(s_friendlyNameToOid);
  }
  return result;
}


void Internal_Cryptography_OidLookup___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4C29B & 1) == 0 )
  {
    sub_1C37058(&Internal_Cryptography_OidLookup___c_TypeInfo);
    byte_4C4C29B = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(Internal_Cryptography_OidLookup___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9 = (struct Internal_Cryptography_OidLookup___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C4C29C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    byte_4C4C29C = 1;
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
  if ( (byte_4C4C29D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    byte_4C4C29D = 1;
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
  System_Security_Cryptography_DerSequenceReader_o *v7; // x22
  unsigned int Integer; // w0
  __int64 v9; // x0
  System_Security_Cryptography_CryptographicException_o *v10; // x19
  struct System_Byte_array *IntegerBytes; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Security_Cryptography_DerSequenceReader_o *v14; // x23
  struct System_String_o *OidAsString; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Byte_array *NextEncodedValue; // x1
  _QWORD *v21; // x24
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0
  System_Byte_array *v25; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Security_Cryptography_DerSequenceReader_o *v29; // x23
  System_Byte_array *v30; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v31; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Byte_array *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Byte_array *SubjectPublicKeyInfo; // x24
  System_Security_Cryptography_DerSequenceReader_o *v38; // x23
  System_Security_Cryptography_DerSequenceReader_o *v39; // x24
  struct System_String_o *v40; // x0
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Byte_array *v45; // x1
  _QWORD *v46; // x25
  __int64 v47; // x8
  __int64 v48; // x0
  __int64 v49; // x0
  struct System_Byte_array *BitString; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct System_Byte_array *v55; // x0
  int32_t v56; // w1
  struct System_Byte_array **p_IssuerUniqueId; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct System_Byte_array *v60; // x0
  int32_t v61; // w1
  struct System_Byte_array **p_SubjectUniqueId; // x0
  System_Collections_Generic_List_object__o *v63; // x24
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  System_Security_Cryptography_DerSequenceReader_o *v66; // x24
  System_Security_Cryptography_DerSequenceReader_o *v67; // x25
  System_String_o *v68; // x28
  bool v69; // w29
  System_Byte_array *OctetString; // x0
  System_Collections_Generic_List_object__o *Extensions; // x26
  System_Byte_array *v72; // x19
  System_Security_Cryptography_X509Certificates_X509Extension_o *v73; // x27
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct System_Object_array *items; // x8
  _QWORD *v77; // x9
  __int64 size; // x10
  Il2CppClass **v79; // x0
  __int64 v80; // x0
  System_String_o *v81; // x0
  __int64 v82; // x0
  System_Security_Cryptography_DerSequenceReader_o *v83; // x22
  struct System_String_o *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct System_Byte_array *v89; // x1
  _QWORD *v90; // x23
  __int64 v91; // x8
  __int64 v92; // x0
  __int64 v93; // x0
  struct System_Byte_array *v94; // x0
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct System_Byte_array *v99; // [xsp+8h] [xbp-68h]

  if ( (byte_4C4C29E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_byte___);
    sub_1C37058(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_X509Extension__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_X509Extension___ctor__);
    sub_1C37058(&System_Collections_Generic_List_X509Extension__TypeInfo);
    sub_1C37058(&System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
    sub_1C37058(&System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo);
    byte_4C4C29E = 1;
  }
  v5 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1C372A4(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor(v5, rawData, 0);
  if ( !v5 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v5, 0);
  if ( !Sequence )
    goto LABEL_86;
  v7 = Sequence;
  v99 = rawData;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(Sequence, 0) == 160 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v7, 0);
    if ( !Sequence )
      goto LABEL_86;
    Integer = System_Security_Cryptography_DerSequenceReader__ReadInteger(Sequence, 0);
    this->fields.Version = Integer;
    if ( Integer >= 3 )
    {
      v9 = sub_1C3706C(&System_Security_Cryptography_CryptographicException_TypeInfo);
      v10 = (System_Security_Cryptography_CryptographicException_o *)sub_1C372A4(v9);
      System_Security_Cryptography_CryptographicException___ctor(v10, 0);
      goto LABEL_69;
    }
  }
  else
  {
    if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v7, 0) != 2 )
      goto LABEL_68;
    this->fields.Version = 0;
  }
  IntegerBytes = System_Security_Cryptography_DerSequenceReader__ReadIntegerBytes(v7, 0);
  this->fields.SerialNumber = IntegerBytes;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SerialNumber, (int32_t)IntegerBytes, v12, v13);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v7, 0);
  if ( !Sequence )
    goto LABEL_86;
  v14 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  this->fields.TbsSignature.fields.AlgorithmId = OidAsString;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.TbsSignature, (int32_t)OidAsString, v16, v17);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v14, 0) )
  {
    NextEncodedValue = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v14, 0);
  }
  else
  {
    v21 = Method_System_Array_Empty_byte___;
    v22 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v22 )
    {
      sub_1C877C8();
      v22 = v21[7];
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C8776C();
    if ( !*(_DWORD *)(v23 + 224) )
      j_il2cpp_runtime_class_init_0(v23);
    v24 = *(_QWORD *)(v21[7] + 16LL);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1C8776C();
    NextEncodedValue = **(struct System_Byte_array ***)(v24 + 184);
  }
  this->fields.TbsSignature.fields.Parameters = NextEncodedValue;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.TbsSignature.fields.Parameters,
    (int32_t)NextEncodedValue,
    v18,
    v19);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v14, 0) )
    goto LABEL_68;
  v25 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v7, 0);
  v26 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1C372A4(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor(v26, v25, 0);
  this->fields.Issuer = v26;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.Issuer, (int32_t)v26, v27, v28);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v7, 0);
  if ( !Sequence )
    goto LABEL_86;
  v29 = Sequence;
  this->fields.NotBefore = System_Security_Cryptography_DerSequenceReader__ReadX509Date(Sequence, 0);
  this->fields.NotAfter = System_Security_Cryptography_DerSequenceReader__ReadX509Date(v29, 0);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v29, 0) )
  {
LABEL_68:
    v80 = sub_1C3706C(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v10 = (System_Security_Cryptography_CryptographicException_o *)sub_1C372A4(v80);
    v81 = (System_String_o *)sub_1C3706C(&StringLiteral_2041/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_63780100(v10, v81, 0);
LABEL_69:
    v82 = sub_1C3706C(&Method_Internal_Cryptography_Pal_CertificateData__ctor__);
    sub_1C37180(v10, v82);
  }
  v30 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v7, 0);
  v31 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1C372A4(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor(v31, v30, 0);
  this->fields.Subject = v31;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.Subject, (int32_t)v31, v32, v33);
  v34 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v7, 0);
  this->fields.SubjectPublicKeyInfo = v34;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SubjectPublicKeyInfo, (int32_t)v34, v35, v36);
  SubjectPublicKeyInfo = this->fields.SubjectPublicKeyInfo;
  v38 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1C372A4(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor(v38, SubjectPublicKeyInfo, 0);
  if ( !v38 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v38, 0);
  if ( !Sequence )
    goto LABEL_86;
  v39 = Sequence;
  v40 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  this->fields.PublicKeyAlgorithm.fields.AlgorithmId = v40;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.PublicKeyAlgorithm, (int32_t)v40, v41, v42);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v39, 0) )
  {
    v45 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v39, 0);
  }
  else
  {
    v46 = Method_System_Array_Empty_byte___;
    v47 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v47 )
    {
      sub_1C877C8();
      v47 = v46[7];
    }
    v48 = *(_QWORD *)(v47 + 16);
    if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
      v48 = sub_1C8776C();
    if ( !*(_DWORD *)(v48 + 224) )
      j_il2cpp_runtime_class_init_0(v48);
    v49 = *(_QWORD *)(v46[7] + 16LL);
    if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
      v49 = sub_1C8776C();
    v45 = **(struct System_Byte_array ***)(v49 + 184);
  }
  this->fields.PublicKeyAlgorithm.fields.Parameters = v45;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.PublicKeyAlgorithm.fields.Parameters, (int32_t)v45, v43, v44);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v39, 0) )
    goto LABEL_68;
  BitString = System_Security_Cryptography_DerSequenceReader__ReadBitString(v38, 0);
  this->fields.PublicKey = BitString;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.PublicKey, (int32_t)BitString, v51, v52);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v38, 0) )
    goto LABEL_68;
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v7, 0)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v7, 0) == 161 )
  {
    v55 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v7, 0);
    v56 = (int)v55;
    this->fields.IssuerUniqueId = v55;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
  }
  else
  {
    this->fields.IssuerUniqueId = 0;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
    v56 = 0;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)p_IssuerUniqueId, v56, v53, v54);
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v7, 0)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v7, 0) == 162 )
  {
    v60 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v7, 0);
    v61 = (int)v60;
    this->fields.SubjectUniqueId = v60;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
  }
  else
  {
    this->fields.SubjectUniqueId = 0;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
    v61 = 0;
  }
  sub_1C36FFC((CGThumbnailListItem_o *)p_SubjectUniqueId, v61, v58, v59);
  v63 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_X509Extension__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v63,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_X509Extension___ctor__);
  this->fields.Extensions = (struct System_Collections_Generic_List_X509Extension__o *)v63;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.Extensions, (int32_t)v63, v64, v65);
  if ( this->fields.Version >= 2
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v7, 0)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v7, 0) == 163 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v7, 0);
    if ( Sequence )
    {
      Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(Sequence, 0);
      if ( Sequence )
      {
        v66 = Sequence;
        while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v66, 0) )
        {
          Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v66, 0);
          if ( !Sequence )
            goto LABEL_86;
          v67 = Sequence;
          v68 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
          v69 = System_Security_Cryptography_DerSequenceReader__PeekTag(v67, 0) == 1
             && System_Security_Cryptography_DerSequenceReader__ReadBoolean(v67, 0);
          OctetString = System_Security_Cryptography_DerSequenceReader__ReadOctetString(v67, 0);
          Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
          v72 = OctetString;
          v73 = (System_Security_Cryptography_X509Certificates_X509Extension_o *)sub_1C372A4(System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo);
          System_Security_Cryptography_X509Certificates_X509Extension___ctor_70290176(v73, v68, v72, v69, 0);
          if ( !Extensions )
            goto LABEL_86;
          items = Extensions->fields._items;
          v77 = Method_System_Collections_Generic_List_X509Extension__Add__;
          ++Extensions->fields._version;
          if ( !items )
            goto LABEL_86;
          size = Extensions->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              Extensions,
              (Il2CppObject *)v73,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v77[4] + 192LL) + 112LL));
          }
          else
          {
            v79 = &items->obj.klass + size;
            Extensions->fields._size = size + 1;
            v79[4] = (Il2CppClass *)v73;
            sub_1C36FFC((CGThumbnailListItem_o *)(v79 + 4), (int32_t)v73, v74, v75);
          }
          if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v67, 0) )
            goto LABEL_68;
        }
        goto LABEL_70;
      }
    }
LABEL_86:
    sub_1C372B4(Sequence);
  }
LABEL_70:
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v7, 0) )
    goto LABEL_68;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v5, 0);
  if ( !Sequence )
    goto LABEL_86;
  v83 = Sequence;
  v84 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  this->fields.SignatureAlgorithm.fields.AlgorithmId = v84;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SignatureAlgorithm, (int32_t)v84, v85, v86);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v83, 0) )
  {
    v89 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v83, 0);
  }
  else
  {
    v90 = Method_System_Array_Empty_byte___;
    v91 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v91 )
    {
      sub_1C877C8();
      v91 = v90[7];
    }
    v92 = *(_QWORD *)(v91 + 16);
    if ( (*(_BYTE *)(v92 + 309) & 1) == 0 )
      v92 = sub_1C8776C();
    if ( !*(_DWORD *)(v92 + 224) )
      j_il2cpp_runtime_class_init_0(v92);
    v93 = *(_QWORD *)(v90[7] + 16LL);
    if ( (*(_BYTE *)(v93 + 309) & 1) == 0 )
      v93 = sub_1C8776C();
    v89 = **(struct System_Byte_array ***)(v93 + 184);
  }
  this->fields.SignatureAlgorithm.fields.Parameters = v89;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SignatureAlgorithm.fields.Parameters, (int32_t)v89, v87, v88);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v83, 0) )
    goto LABEL_68;
  v94 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v5, 0);
  this->fields.SignatureValue = v94;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.SignatureValue, (int32_t)v94, v95, v96);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v5, 0) )
    goto LABEL_68;
  this->fields.RawData = v99;
  sub_1C36FFC((CGThumbnailListItem_o *)this, (int32_t)v99, v97, v98);
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
  unsigned __int8 v10; // w23
  System_Security_Cryptography_DerSequenceReader_o *v11; // x22
  System_String_o *OidAsString; // x0
  __int64 v14; // x0
  System_Security_Cryptography_CryptographicException_o *v15; // x19
  System_String_o *v16; // x0
  __int64 v17; // x0

  if ( (byte_4C4C2A1 & 1) == 0 )
  {
    sub_1C37058(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    byte_4C4C2A1 = 1;
  }
  if ( matchType )
    v7 = 0x80;
  else
    v7 = -96;
  v8 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1C372A4(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor(v8, extensionBytes, 0);
  if ( !v8 )
    goto LABEL_22;
  if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0) )
    return 0;
  v10 = v7 | matchType;
  while ( System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0) != v10 )
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
  v11 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0);
  if ( !System_String__op_Equality(OidAsString, otherOid, 0) )
    goto LABEL_16;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v11, 0) != 160 )
  {
    v14 = sub_1C3706C(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v15 = (System_Security_Cryptography_CryptographicException_o *)sub_1C372A4(v14);
    v16 = (System_String_o *)sub_1C3706C(&StringLiteral_2041/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_63780100(v15, v16, 0);
    v17 = sub_1C3706C(&Method_Internal_Cryptography_Pal_CertificateData_FindAltNameMatch__);
    sub_1C37180(v15, v17);
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v11, 0);
  if ( !Sequence )
LABEL_22:
    sub_1C372B4(Sequence);
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
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  System_Byte_array *monitor; // x23
  System_Nullable_Int32Enum__o v20; // x0
  int32_t Value; // w1
  const MethodInfo *v22; // x3
  __int64 *v23; // x8
  System_String_o *v24; // x21
  __int64 v25; // x8
  System_Collections_Generic_List_object__c *v26; // x8
  System_Collections_Generic_List_object__o *v27; // x19
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  System_Nullable_Int32Enum__o v31; // x0
  __int64 v32; // x19
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_String_o *v41; // x0
  System_String_o *v42; // x1
  int v43; // w21
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-70h] BYREF
  __int64 v51; // [xsp+48h] [xbp-48h] BYREF

  if ( (byte_4C4C29F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_X509Extension__get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    sub_1C37058(&Method_System_Nullable_GeneralNameType___ctor__);
    sub_1C37058(&Method_System_Nullable_GeneralNameType__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_GeneralNameType__get_Value__);
    sub_1C37058(&StringLiteral_1342/*"2.5.29.17"*/);
    sub_1C37058(&StringLiteral_1229/*"1.2.840.113549.1.9.1"*/);
    sub_1C37058(&StringLiteral_1291/*"1.3.6.1.4.1.311.20.2.3"*/);
    sub_1C37058(&StringLiteral_1357/*"2.5.4.3"*/);
    sub_1C37058(&StringLiteral_1343/*"2.5.29.18"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4C29F = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( nameType )
  {
    if ( forIssuer )
      v7 = (System_String_o **)&StringLiteral_1343/*"2.5.29.18"*/;
    else
      v7 = (System_String_o **)&StringLiteral_1342/*"2.5.29.17"*/;
    v8 = *v7;
    v51 = 0;
    switch ( nameType )
    {
      case 1:
        goto LABEL_16;
      case 2:
        v31 = (System_Nullable_Int32Enum__o)&v51;
        System_Nullable_Int32Enum____ctor(
          v31,
          0,
          (const MethodInfo_38C8B60 *)Method_System_Nullable_GeneralNameType___ctor__);
        v14 = (System_String_o *)StringLiteral_1291/*"1.3.6.1.4.1.311.20.2.3"*/;
        break;
      case 3:
      case 4:
        v9 = (System_Nullable_Int32Enum__o)&v51;
        v10 = 2;
        goto LABEL_18;
      case 5:
        v9 = (System_Nullable_Int32Enum__o)&v51;
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
      v13 = (System_String_o **)&StringLiteral_1343/*"2.5.29.18"*/;
    else
      v13 = (System_String_o **)&StringLiteral_1342/*"2.5.29.17"*/;
    v8 = *v13;
    v51 = 0;
LABEL_16:
    v9 = (System_Nullable_Int32Enum__o)&v51;
    v10 = 1;
LABEL_18:
    System_Nullable_Int32Enum____ctor(
      v9,
      v10,
      (const MethodInfo_38C8B60 *)Method_System_Nullable_GeneralNameType___ctor__);
LABEL_19:
    v14 = 0;
  }
  if ( (_BYTE)v51 )
  {
    Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
    if ( !Extensions )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      Extensions,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    v50 = v49;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
      if ( !v16 )
        break;
      current = v50.fields._current;
      if ( !v50.fields._current )
        sub_1C372B4(v16);
      klass = v50.fields._current[1].klass;
      if ( !klass )
        sub_1C372B4(v16);
      if ( System_String__op_Equality((System_String_o *)klass->_1.name, v8, 0) )
      {
        monitor = (System_Byte_array *)current[1].monitor;
        v20 = (System_Nullable_Int32Enum__o)&v51;
        Value = System_Nullable_Int32Enum___get_Value(
                  v20,
                  (const MethodInfo_38C8B78 *)Method_System_Nullable_GeneralNameType__get_Value__);
        SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(monitor, Value, v14, v22);
        if ( SimpleNameInfo )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v50,
            (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
          return SimpleNameInfo;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
  }
  if ( nameType == 1 )
  {
    v23 = &StringLiteral_1229/*"1.2.840.113549.1.9.1"*/;
  }
  else
  {
    if ( nameType != 3 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v23 = &StringLiteral_1357/*"2.5.4.3"*/;
  }
  v24 = (System_String_o *)*v23;
  if ( !*v23 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v25 = 72;
  if ( forIssuer )
    v25 = 48;
  Extensions = (System_Collections_Generic_List_object__o *)Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
                                                              *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData + v25),
                                                              *(const MethodInfo **)&nameType);
  if ( !Extensions )
LABEL_73:
    sub_1C372B4(Extensions);
  v26 = Extensions->klass;
  v27 = Extensions;
  v28 = *(unsigned __int16 *)&Extensions->klass->_2.rank;
  if ( *(_WORD *)&Extensions->klass->_2.rank )
  {
    p_offset = &v26->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_42;
    }
    v30 = (__int64)&v26->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_42:
    v30 = sub_1C87870(Extensions, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  if ( !v32 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v33 = *(_QWORD *)v32;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_50;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_50:
      v36 = sub_1C87870(v32, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
      break;
    v37 = *(_QWORD *)v32;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v39 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_57;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_57:
      v40 = sub_1C87870(v32, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0);
    }
    v41 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
    SimpleNameInfo = v42;
    if ( System_String__op_Equality(v41, v24, 0) )
    {
      v43 = 16;
      goto LABEL_62;
    }
  }
  SimpleNameInfo = 0;
  v43 = 20;
LABEL_62:
  v44 = *(_QWORD *)v32;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_66;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_66:
    v47 = sub_1C87870(v32, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v32, *(_QWORD *)(v47 + 8));
  if ( v43 == 20 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return SimpleNameInfo;
}


System_String_o *Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *ReverseRdns; // x0
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c *klass; // x8
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *v5; // x19
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x19
  System_String_o *v11; // x23
  System_String_o *v12; // x24
  System_String_o *v13; // x25
  System_String_o *v14; // x20
  __int64 v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x1
  System_String_o *v25; // x21
  System_String_o *v26; // x8
  int v27; // w22
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_String_o *v33; // [xsp+8h] [xbp-68h]

  if ( (byte_4C4C2A0 & 1) == 0 )
  {
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C37058(&StringLiteral_1229/*"1.2.840.113549.1.9.1"*/);
    sub_1C37058(&StringLiteral_1357/*"2.5.4.3"*/);
    sub_1C37058(&StringLiteral_1350/*"2.5.4.11"*/);
    sub_1C37058(&StringLiteral_1349/*"2.5.4.10"*/);
    byte_4C4C2A0 = 1;
  }
  ReverseRdns = Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(name, method);
  if ( !ReverseRdns )
    sub_1C372B4(0);
  klass = ReverseRdns->klass;
  v5 = ReverseRdns;
  v6 = *(unsigned __int16 *)&ReverseRdns->klass->_2.rank;
  if ( *(_WORD *)&ReverseRdns->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v8 = sub_1C87870(ReverseRdns, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0);
  }
  v9 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *, _QWORD))v8)(
         v5,
         *(_QWORD *)(v8 + 8));
  v10 = v9;
  v33 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
LABEL_11:
  v14 = v11;
LABEL_12:
  v11 = v14;
  v14 = v12;
LABEL_13:
  v12 = v14;
  v14 = v13;
  while ( 1 )
  {
    if ( !v10 )
      sub_1C372B4(v9);
    v15 = *(_QWORD *)v10;
    v13 = v14;
    v16 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v17 = (int *)(*(_QWORD *)(v15 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v17 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_19;
      }
      v18 = v15 + 16LL * *v17 + 312;
    }
    else
    {
LABEL_19:
      v18 = sub_1C87870(v10, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v18)(v10, *(_QWORD *)(v18 + 8)) & 1) == 0 )
    {
      v14 = 0;
      v27 = 10;
      goto LABEL_37;
    }
    v19 = *(_QWORD *)v10;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v21 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_26;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_26:
      v22 = sub_1C87870(v10, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0);
    }
    v23 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v10, *(_QWORD *)(v22 + 8));
    v14 = v24;
    v25 = v23;
    if ( System_String__op_Equality(v23, (System_String_o *)StringLiteral_1357/*"2.5.4.3"*/, 0) )
      break;
    v9 = System_String__op_Equality(v25, (System_String_o *)StringLiteral_1350/*"2.5.4.11"*/, 0);
    if ( (v9 & 1) == 0 )
    {
      v9 = System_String__op_Equality(v25, (System_String_o *)StringLiteral_1349/*"2.5.4.10"*/, 0);
      if ( (v9 & 1) != 0 )
        goto LABEL_13;
      v9 = System_String__op_Equality(v25, (System_String_o *)StringLiteral_1229/*"1.2.840.113549.1.9.1"*/, 0);
      if ( (v9 & 1) == 0 )
      {
        v26 = v33;
        if ( !v33 )
          v26 = v14;
        v33 = v26;
        goto LABEL_11;
      }
      goto LABEL_12;
    }
  }
  v27 = 9;
LABEL_37:
  v28 = *(_QWORD *)v10;
  v29 = *(unsigned __int16 *)(*(_QWORD *)v10 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v10 + 302LL) )
  {
    v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v30 - 1) != System_IDisposable_TypeInfo )
    {
      --v29;
      v30 += 4;
      if ( !v29 )
        goto LABEL_41;
    }
    v31 = v28 + 16LL * *v30 + 312;
  }
  else
  {
LABEL_41:
    v31 = sub_1C87870(v10, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v31)(v10, *(_QWORD *)(v31 + 8));
  if ( v27 == 10 )
  {
    v14 = v13;
    if ( !v13 )
    {
      v14 = v12;
      if ( !v12 )
      {
        if ( v11 )
          return v11;
        else
          return v33;
      }
    }
  }
  return v14;
}


System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C4C2A2 & 1) == 0 )
  {
    sub_1C37058(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    byte_4C4C2A2 = 1;
  }
  v3 = sub_1C372A4(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = -2;
  *(_DWORD *)(v3 + 40) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v3 + 56) = name;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 56), (int32_t)name, v4, v5);
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
  const MethodInfo *v9; // x3
  System_Collections_Generic_Stack_T__o *rdnReaders_5__2; // x22
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o **p_rdnReader_5__3; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v17; // x22
  Il2CppObject *OidAsString; // x21
  const MethodInfo_36DBB40 *v19; // x4
  unsigned int v20; // w8
  Il2CppObject *v21; // x2
  System_String_o *Utf8String; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  bool result; // w0
  struct System_Collections_Generic_KeyValuePair_string__string__o v26; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v27; // 0:x0.16

  v2 = this;
  if ( (byte_4C4C2A4 & 1) == 0 )
  {
    sub_1C37058(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Stack_DerSequenceReader__get_Count__);
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1C37058(&System_Collections_Generic_Stack_DerSequenceReader__TypeInfo);
    byte_4C4C2A4 = 1;
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
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._rdnReader_5__3, 0, v15, v16);
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
      v17 = this;
      OidAsString = (Il2CppObject *)System_Security_Cryptography_DerSequenceReader__ReadOidAsString(
                                      (System_Security_Cryptography_DerSequenceReader_o *)this,
                                      0);
      v20 = System_Security_Cryptography_DerSequenceReader__PeekTag(
              (System_Security_Cryptography_DerSequenceReader_o *)v17,
              0);
      v21 = 0;
      if ( v20 <= 0x13 )
      {
        if ( v20 == 12 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadUtf8String(
                         (System_Security_Cryptography_DerSequenceReader_o *)v17,
                         0);
          goto LABEL_29;
        }
        if ( v20 == 19 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadPrintableString(
                         (System_Security_Cryptography_DerSequenceReader_o *)v17,
                         0);
          goto LABEL_29;
        }
      }
      else
      {
        switch ( v20 )
        {
          case 0x14u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadT61String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v17,
                           0);
            goto LABEL_29;
          case 0x16u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadIA5String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v17,
                           0);
            goto LABEL_29;
          case 0x1Eu:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadBMPString(
                           (System_Security_Cryptography_DerSequenceReader_o *)v17,
                           0);
LABEL_29:
            v21 = (Il2CppObject *)Utf8String;
            break;
        }
      }
      if ( v21 )
      {
        v27.fields.key = (Il2CppObject *)&v26;
        v27.fields.value = OidAsString;
        v26 = (struct System_Collections_Generic_KeyValuePair_string__string__o)0LL;
        System_Collections_Generic_KeyValuePair_object__object____ctor(
          v27,
          v21,
          (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_string__string___ctor__,
          v19);
        v2->fields.__2__current = v26;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__2__current, 0, v23, v24);
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
    v6 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1C372A4(System_Security_Cryptography_DerSequenceReader_TypeInfo);
    System_Security_Cryptography_DerSequenceReader___ctor(v6, raw, 0);
    v7 = (System_Collections_Generic_Stack_T__o *)sub_1C372A4(System_Collections_Generic_Stack_DerSequenceReader__TypeInfo);
    System_Collections_Generic_Stack_object____ctor(
      v7,
      (const MethodInfo_3A031E4 *)Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    v2->fields._rdnReaders_5__2 = (struct System_Collections_Generic_Stack_DerSequenceReader__o *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._rdnReaders_5__2, (int32_t)v7, v8, v9);
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
        (const MethodInfo_3A0380C *)Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    }
    while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v6, 0) );
LABEL_33:
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v2->fields._rdnReaders_5__2;
    if ( !this )
LABEL_37:
      sub_1C372B4(this);
    if ( SLODWORD(this->fields.__2__current.fields.key) > 0 )
    {
      v11 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_3A037AC *)Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
      v2->fields._rdnReader_5__3 = (struct System_Security_Cryptography_DerSequenceReader_o *)v11;
      sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._rdnReader_5__3, (int32_t)v11, v12, v13);
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
  const MethodInfo *v5; // x3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v6; // x20
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *_3__name; // x1

  if ( (byte_4C4C2A6 & 1) == 0 )
  {
    sub_1C37058(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    byte_4C4C2A6 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1C372A4(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__name = this->fields.__3__name;
  v6->fields.name = _3__name;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.name, (int32_t)_3__name, v4, v5);
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o *)v6;
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

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_IEnumerator_get_Current(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  struct System_Collections_Generic_KeyValuePair_string__string__o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4C4C2A5 & 1) == 0 )
  {
    sub_1C37058(&System_Collections_Generic_KeyValuePair_string__string__TypeInfo);
    byte_4C4C2A5 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(
                           System_Collections_Generic_KeyValuePair_string__string__TypeInfo,
                           &_2__current,
                           v2,
                           v3,
                           v4,
                           v5,
                           v6,
                           v7);
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

  if ( (byte_4C4A1CD & 1) == 0 )
  {
    sub_1C37058(&System_Reflection_MissingMetadataException_TypeInfo);
    byte_4C4A1CD = 1;
  }
  v3 = (System_Reflection_MissingMetadataException_o *)sub_1C372A4(System_Reflection_MissingMetadataException_TypeInfo);
  System_Reflection_MissingMetadataException___ctor(v3, 0);
  return (System_Exception_o *)v3;
}


void Internal_Runtime_Augments_RuntimeAugments___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4A1CC & 1) == 0 )
  {
    sub_1C37058(&Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
    sub_1C37058(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    byte_4C4A1CC = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
  System_Object___ctor(v1, 0);
  Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields->s_reflectionExecutionDomainCallbacks = (struct Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *)v1;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __noreturn Internal_Runtime_Augments_RuntimeAugments__ReportUnhandledException(
        System_Exception_o *exception,
        const MethodInfo *method)
{
  System_Runtime_ExceptionServices_ExceptionDispatchInfo_o *v2; // x0

  v2 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(exception, 0);
  if ( v2 )
    System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(v2, 0);
  sub_1C372B4(0);
}


Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *Internal_Runtime_Augments_RuntimeAugments__get_Callbacks(
        const MethodInfo *method)
{
  Internal_Runtime_Augments_RuntimeAugments_c *v1; // x0

  if ( (byte_4C4A1CB & 1) == 0 )
  {
    sub_1C37058(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    byte_4C4A1CB = 1;
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
  if ( (byte_4C4A1CF & 1) == 0 )
  {
    sub_1C37058(&Internal_Runtime_Augments_RuntimeThread_TypeInfo);
    byte_4C4A1CF = 1;
  }
  Internal_Runtime_Augments_RuntimeThread_TypeInfo->static_fields->OptimalMaxSpinWaitsPerSpinIteration = 64;
}


void Internal_Runtime_Augments_RuntimeThread___ctor(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        System_Threading_Thread_o *t,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.thread = t;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)t, v5, v6);
}


Internal_Runtime_Augments_RuntimeThread_o *Internal_Runtime_Augments_RuntimeThread__Create(
        System_Threading_ParameterizedThreadStart_o *start,
        int32_t maxStackSize,
        const MethodInfo *method)
{
  System_Threading_Thread_o *v5; // x21
  __int64 v6; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C4A1CE & 1) == 0 )
  {
    sub_1C37058(&Internal_Runtime_Augments_RuntimeThread_TypeInfo);
    sub_1C37058(&System_Threading_Thread_TypeInfo);
    byte_4C4A1CE = 1;
  }
  v5 = (System_Threading_Thread_o *)sub_1C372A4(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_65526688(v5, start, maxStackSize, 0);
  v6 = sub_1C372A4(Internal_Runtime_Augments_RuntimeThread_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  *(_QWORD *)(v6 + 16) = v5;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)v5, v7, v8);
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
    sub_1C372B4(0);
  System_Threading_Thread__Start_65527144(thread, state, 0);
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
    sub_1C372B4(0);
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

  if ( (byte_4C4A1CA & 1) == 0 )
  {
    sub_1C37058(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4C4A1CA = 1;
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

  if ( (byte_4C4A1C7 & 1) == 0 )
  {
    sub_1C37058(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4C4A1C7 = 1;
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

  if ( (byte_4C4A1C8 & 1) == 0 )
  {
    sub_1C37058(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4C4A1C8 = 1;
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

  if ( (byte_4C4A1C9 & 1) == 0 )
  {
    sub_1C37058(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4C4A1C9 = 1;
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

  if ( (byte_4C4A1C6 & 1) == 0 )
  {
    sub_1C37058(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4C4A1C6 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    LOBYTE(s_callbacks) = ((__int64 (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, void *))s_callbacks->klass[1]._1.image)(
                            s_callbacks,
                            s_callbacks->klass[1]._1.gc_desc);
  return (char)s_callbacks;
}