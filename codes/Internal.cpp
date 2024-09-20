System_Byte_array *__fastcall Internal_Cryptography_Helpers__CloneByteArray(
        System_Byte_array *src,
        const MethodInfo *method)
{
  System_Byte_array *result; // x0
  System_Byte_array *v4; // x19

  if ( (byte_4A63059 & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    byte_4A63059 = 1;
  }
  if ( !src )
    return 0LL;
  result = (System_Byte_array *)System_Array__Clone((System_Array_o *)src, 0LL);
  if ( result )
  {
    v4 = result;
    result = (System_Byte_array *)sub_1B886EC(result, byte___TypeInfo);
    if ( !result )
    {
      sub_1B88ACC(v4);
      return 0LL;
    }
  }
  return result;
}


System_Byte_array *__fastcall Internal_Cryptography_Helpers__GenerateRandom(int32_t count, const MethodInfo *method)
{
  System_Byte_array *v3; // x21
  System_Security_Cryptography_RandomNumberGenerator_o *v4; // x0
  __int64 v5; // x1
  System_Security_Cryptography_RandomNumberGenerator_o *v6; // x19
  System_Security_Cryptography_RandomNumberGenerator_c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0

  if ( (byte_4A6305A & 1) == 0 )
  {
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    byte_4A6305A = 1;
  }
  v3 = (System_Byte_array *)sub_1B88658(byte___TypeInfo, (unsigned int)count);
  v4 = System_Security_Cryptography_RandomNumberGenerator__Create(0LL);
  v6 = v4;
  if ( !v4 )
    sub_1B8880C(0LL, v5);
  ((void (__fastcall *)(System_Security_Cryptography_RandomNumberGenerator_o *, System_Byte_array *, Il2CppMethodPointer))v4->klass->vtable._6_unknown.method)(
    v4,
    v3,
    v4->klass->vtable._7_GetBytes.methodPtr);
  klass = v6->klass;
  v8 = *(unsigned __int16 *)(&v6->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v6->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v8;
      p_offset += 4;
      if ( !v8 )
        goto LABEL_8;
    }
    v10 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v10 = sub_1BDA590(v6, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RandomNumberGenerator_o *, _QWORD))v10)(v6, *(_QWORD *)(v10 + 8));
  return v3;
}


uint16_t __fastcall Internal_Cryptography_Helpers__NibbleToHex(uint8_t b, const MethodInfo *method)
{
  __int16 v2; // w8

  if ( b >= 0xAu )
    v2 = 55;
  else
    v2 = 48;
  return v2 + b;
}


System_Char_array *__fastcall Internal_Cryptography_Helpers__ToHexArrayUpper(
        System_Char_array *bytes,
        const MethodInfo *method)
{
  System_Char_array *v2; // x19
  unsigned __int64 v3; // x9
  unsigned __int64 v4; // x8
  il2cpp_array_size_t v5; // w14
  unsigned int v6; // w15
  int v7; // w16
  il2cpp_array_size_t max_length; // w17
  il2cpp_array_size_t v9; // w16
  unsigned int v10; // w15
  il2cpp_array_size_t v11; // w14
  __int16 v12; // w17

  v2 = bytes;
  if ( (byte_4A6305B & 1) == 0 )
  {
    bytes = (System_Char_array *)sub_1B885B0(&char___TypeInfo);
    byte_4A6305B = 1;
  }
  if ( !v2 )
    goto LABEL_19;
  bytes = (System_Char_array *)sub_1B88658(char___TypeInfo, 2 * v2->max_length);
  if ( (int)*(_QWORD *)&v2->max_length >= 1 )
  {
    v3 = (unsigned int)*(_QWORD *)&v2->max_length;
    v4 = 0LL;
    v5 = 0;
    while ( 1 )
    {
      if ( v4 >= v3 )
LABEL_18:
        sub_1B88814(bytes, method);
      v6 = *((unsigned __int8 *)&v2->m_Items[2] + v4);
      v7 = v6 >= 0xA0 ? 55 : 48;
      if ( !bytes )
        break;
      max_length = bytes->max_length;
      if ( v5 >= max_length )
        goto LABEL_18;
      method = (const MethodInfo *)(v7 + (v6 >> 4));
      v9 = v5 + 1;
      bytes->m_Items[v5 + 2] = (unsigned __int16)method;
      if ( v5 + 1 >= max_length )
        goto LABEL_18;
      v10 = v6 & 0xF;
      v11 = v5 + 1;
      if ( v10 >= 0xA )
        v12 = 55;
      else
        v12 = 48;
      ++v4;
      bytes->m_Items[v11 + 2] = v12 + v10;
      v5 = v9 + 1;
      if ( (__int64)v4 >= (int)v3 )
        return bytes;
    }
LABEL_19:
    sub_1B8880C(bytes, method);
  }
  return bytes;
}


System_String_o *__fastcall Internal_Cryptography_Helpers__ToHexStringUpper(
        System_Byte_array *bytes,
        const MethodInfo *method)
{
  System_Char_array *v2; // x0
  const MethodInfo *v3; // x1

  v2 = Internal_Cryptography_Helpers__ToHexArrayUpper(bytes, method);
  return System_String__Ctor(v2, v3);
}


void __fastcall Internal_Cryptography_Helpers__WriteInt(
        uint32_t i,
        System_Byte_array *arr,
        int32_t offset,
        const MethodInfo *method)
{
  if ( !arr )
    sub_1B8880C(i, 0LL);
  if ( arr->max_length <= offset
    || (arr->m_Items[offset + 4] = HIBYTE(i), offset + 1 >= arr->max_length)
    || (arr->m_Items[offset + 5] = BYTE2(i), offset + 2 >= arr->max_length)
    || (arr->m_Items[offset + 6] = BYTE1(i), offset + 3 >= arr->max_length) )
  {
    sub_1B88814(i, arr);
  }
  arr->m_Items[offset + 7] = i;
}


void __fastcall Internal_Cryptography_OidLookup___cctor(const MethodInfo *method)
{
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_StringComparer_c *v4; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *s_ordinalIgnoreCase; // x19
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v6; // x20
  struct Internal_Cryptography_OidLookup_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_StringComparer_c *v10; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *v11; // x20
  System_Collections_Generic_Dictionary_object__object__o *v12; // x19
  __int64 v13; // x0
  __int64 v14; // x1
  struct Internal_Cryptography_OidLookup_StaticFields *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  Internal_Cryptography_OidLookup___c_c *v18; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *s_friendlyNameToOid; // x19
  Il2CppObject *v20; // x20
  System_Func_T__TResult__o *v21; // x21
  Il2CppObject *v22; // x20
  System_Func_T__TResult__o *v23; // x22
  System_Collections_Generic_Dictionary_TKey__TElement__o *v24; // x0
  struct Internal_Cryptography_OidLookup_StaticFields *v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_Dictionary_object__object__o *v28; // x19
  struct Internal_Cryptography_OidLookup_StaticFields *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A64BB4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___75973072);
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
    sub_1B885B0(&System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor___75994936);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
    sub_1B885B0(&System_Func_KeyValuePair_string__string___string__TypeInfo);
    sub_1B885B0(&Internal_Cryptography_OidLookup_TypeInfo);
    sub_1B885B0(&System_StringComparer_TypeInfo);
    sub_1B885B0(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__);
    sub_1B885B0(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__);
    sub_1B885B0(&Internal_Cryptography_OidLookup___c_TypeInfo);
    sub_1B885B0(&StringLiteral_17427/*"brainpoolP512t1"*/);
    sub_1B885B0(&StringLiteral_1288/*"1.2.840.10046.2.1"*/);
    sub_1B885B0(&StringLiteral_17415/*"brainpoolP160t1"*/);
    sub_1B885B0(&StringLiteral_3613/*"CN"*/);
    sub_1B885B0(&StringLiteral_1298/*"1.2.840.113549.1.1.7"*/);
    sub_1B885B0(&StringLiteral_1372/*"1.3.36.3.3.2.8.1.1.13"*/);
    sub_1B885B0(&StringLiteral_1312/*"1.2.840.113549.1.3.1"*/);
    sub_1B885B0(&StringLiteral_11415/*"S"*/);
    sub_1B885B0(&StringLiteral_1428/*"2.16.840.1.101.3.4.2.1"*/);
    sub_1B885B0(&StringLiteral_1455/*"2.5.4.42"*/);
    sub_1B885B0(&StringLiteral_1371/*"1.3.36.3.3.2.8.1.1.12"*/);
    sub_1B885B0(&StringLiteral_1360/*"1.3.14.3.2.27"*/);
    sub_1B885B0(&StringLiteral_1449/*"2.5.4.18"*/);
    sub_1B885B0(&StringLiteral_1341/*"1.3.132.0.10"*/);
    sub_1B885B0(&StringLiteral_18651/*"dnQualifier"*/);
    sub_1B885B0(&StringLiteral_1297/*"1.2.840.113549.1.1.5"*/);
    sub_1B885B0(&StringLiteral_1457/*"2.5.4.46"*/);
    sub_1B885B0(&StringLiteral_1278/*"1.2.840.10045.3.1.3"*/);
    sub_1B885B0(&StringLiteral_1340/*"1.2.840.113549.3.7"*/);
    sub_1B885B0(&StringLiteral_1422/*"2.16.840.1.101.3.4.1.22"*/);
    sub_1B885B0(&StringLiteral_1461/*"2.5.4.8"*/);
    sub_1B885B0(&StringLiteral_23071/*"secP160r2"*/);
    sub_1B885B0(&StringLiteral_22059/*"nistP192"*/);
    sub_1B885B0(&StringLiteral_1339/*"1.2.840.113549.3.4"*/);
    sub_1B885B0(&StringLiteral_18576/*"des"*/);
    sub_1B885B0(&StringLiteral_1460/*"2.5.4.7"*/);
    sub_1B885B0(&StringLiteral_1283/*"1.2.840.10045.4.1"*/);
    sub_1B885B0(&StringLiteral_5445/*"ECDH_STD_SHA256_KDF"*/);
    sub_1B885B0(&StringLiteral_21511/*"mosaicKMandUpdSig"*/);
    sub_1B885B0(&StringLiteral_1299/*"1.2.840.113549.1.1.8"*/);
    sub_1B885B0(&StringLiteral_21512/*"mosaicUpdatedSig"*/);
    sub_1B885B0(&StringLiteral_15701/*"X21Address"*/);
    sub_1B885B0(&StringLiteral_23239/*"sha256RSA"*/);
    sub_1B885B0(&StringLiteral_3612/*"CMSRC2wrap"*/);
    sub_1B885B0(&StringLiteral_17426/*"brainpoolP512r1"*/);
    sub_1B885B0(&StringLiteral_5444/*"ECDH_STD_SHA1_KDF"*/);
    sub_1B885B0(&StringLiteral_1289/*"1.2.840.113549.1.1.1"*/);
    sub_1B885B0(&StringLiteral_1456/*"2.5.4.43"*/);
    sub_1B885B0(&StringLiteral_1433/*"2.23.43.1.4.9"*/);
    sub_1B885B0(&StringLiteral_24817/*"x962P239v3"*/);
    sub_1B885B0(&StringLiteral_23070/*"secP160r1"*/);
    sub_1B885B0(&StringLiteral_1386/*"1.3.6.1.5.5.7.2.1"*/);
    sub_1B885B0(&StringLiteral_1448/*"2.5.4.17"*/);
    sub_1B885B0(&StringLiteral_1282/*"1.2.840.10045.3.1.7"*/);
    sub_1B885B0(&StringLiteral_10706/*"PostalCode"*/);
    sub_1B885B0(&StringLiteral_1347/*"1.3.132.0.35"*/);
    sub_1B885B0(&StringLiteral_1421/*"2.16.840.1.101.3.4.1.2"*/);
    sub_1B885B0(&StringLiteral_1286/*"1.2.840.10045.4.3.3"*/);
    sub_1B885B0(&StringLiteral_1276/*"1.2.840.10045.3.1.1"*/);
    sub_1B885B0(&StringLiteral_1377/*"1.3.36.3.3.2.8.1.1.5"*/);
    sub_1B885B0(&StringLiteral_6864/*"G"*/);
    sub_1B885B0(&StringLiteral_12167/*"SN"*/);
    sub_1B885B0(&StringLiteral_1281/*"1.2.840.10045.3.1.6"*/);
    sub_1B885B0(&StringLiteral_23245/*"sha512RSA"*/);
    sub_1B885B0(&StringLiteral_24816/*"x962P239v2"*/);
    sub_1B885B0(&StringLiteral_1337/*"1.2.840.113549.2.5"*/);
    sub_1B885B0(&StringLiteral_5435/*"ECC"*/);
    sub_1B885B0(&StringLiteral_1459/*"2.5.4.6"*/);
    sub_1B885B0(&StringLiteral_1323/*"1.2.840.113549.1.9.1"*/);
    sub_1B885B0(&StringLiteral_1375/*"1.3.36.3.3.2.8.1.1.3"*/);
    sub_1B885B0(&StringLiteral_22060/*"nistP224"*/);
    sub_1B885B0(&StringLiteral_1381/*"1.3.36.3.3.2.8.1.1.9"*/);
    sub_1B885B0(&StringLiteral_1335/*"1.2.840.113549.2.2"*/);
    sub_1B885B0(&StringLiteral_1352/*"1.3.133.16.840.63.0.2"*/);
    sub_1B885B0(&StringLiteral_1220/*"0.9.2342.19200300.100.1.25"*/);
    sub_1B885B0(&StringLiteral_1345/*"1.3.132.0.33"*/);
    sub_1B885B0(&StringLiteral_5429/*"E"*/);
    sub_1B885B0(&StringLiteral_23233/*"sha1"*/);
    sub_1B885B0(&StringLiteral_1285/*"1.2.840.10045.4.3.2"*/);
    sub_1B885B0(&StringLiteral_24813/*"x962P192v2"*/);
    sub_1B885B0(&StringLiteral_11133/*"RSA"*/);
    sub_1B885B0(&StringLiteral_17417/*"brainpoolP192t1"*/);
    sub_1B885B0(&StringLiteral_23241/*"sha384ECDSA"*/);
    sub_1B885B0(&StringLiteral_5068/*"DSA"*/);
    sub_1B885B0(&StringLiteral_5019/*"DH"*/);
    sub_1B885B0(&StringLiteral_1380/*"1.3.36.3.3.2.8.1.1.8"*/);
    sub_1B885B0(&StringLiteral_11532/*"SERIALNUMBER"*/);
    sub_1B885B0(&StringLiteral_3611/*"CMS3DESwrap"*/);
    sub_1B885B0(&StringLiteral_23235/*"sha1ECDSA"*/);
    sub_1B885B0(&StringLiteral_1451/*"2.5.4.24"*/);
    sub_1B885B0(&StringLiteral_23236/*"sha1RSA"*/);
    sub_1B885B0(&StringLiteral_1425/*"2.16.840.1.101.3.4.1.45"*/);
    sub_1B885B0(&StringLiteral_1273/*"1.2.840.10040.4.1"*/);
    sub_1B885B0(&StringLiteral_23072/*"secP192k1"*/);
    sub_1B885B0(&StringLiteral_1430/*"2.16.840.1.101.3.4.2.3"*/);
    sub_1B885B0(&StringLiteral_1376/*"1.3.36.3.3.2.8.1.1.4"*/);
    sub_1B885B0(&StringLiteral_1368/*"1.3.36.3.3.2.8.1.1.1"*/);
    sub_1B885B0(&StringLiteral_1291/*"1.2.840.113549.1.1.11"*/);
    sub_1B885B0(&StringLiteral_1424/*"2.16.840.1.101.3.4.1.42"*/);
    sub_1B885B0(&StringLiteral_17421/*"brainpoolP256t1"*/);
    sub_1B885B0(&StringLiteral_7276/*"I"*/);
    sub_1B885B0(&StringLiteral_11136/*"RSASSA-PSS"*/);
    sub_1B885B0(&StringLiteral_24741/*"wtls9"*/);
    sub_1B885B0(&StringLiteral_1287/*"1.2.840.10045.4.3.4"*/);
    sub_1B885B0(&StringLiteral_1326/*"1.2.840.113549.1.9.16.3.6"*/);
    sub_1B885B0(&StringLiteral_4997/*"DC"*/);
    sub_1B885B0(&StringLiteral_21365/*"md2"*/);
    sub_1B885B0(&StringLiteral_1418/*"2.16.840.1.101.2.1.1.19"*/);
    sub_1B885B0(&StringLiteral_1346/*"1.3.132.0.34"*/);
    sub_1B885B0(&StringLiteral_21368/*"md4RSA"*/);
    sub_1B885B0(&StringLiteral_1450/*"2.5.4.20"*/);
    sub_1B885B0(&StringLiteral_13233/*"T"*/);
    sub_1B885B0(&StringLiteral_11135/*"RSAES_OAEP"*/);
    sub_1B885B0(&StringLiteral_8226/*"L"*/);
    sub_1B885B0(&StringLiteral_17425/*"brainpoolP384t1"*/);
    sub_1B885B0(&StringLiteral_1354/*"1.3.14.3.2.13"*/);
    sub_1B885B0(&StringLiteral_24814/*"x962P192v3"*/);
    sub_1B885B0(&StringLiteral_1365/*"1.3.14.7.2.3.1"*/);
    sub_1B885B0(&StringLiteral_23242/*"sha384RSA"*/);
    sub_1B885B0(&StringLiteral_21366/*"md2RSA"*/);
    sub_1B885B0(&StringLiteral_23238/*"sha256ECDSA"*/);
    sub_1B885B0(&StringLiteral_23246/*"shaRSA"*/);
    sub_1B885B0(&StringLiteral_1447/*"2.5.4.13"*/);
    sub_1B885B0(&StringLiteral_23229/*"sha"*/);
    sub_1B885B0(&StringLiteral_21371/*"md5RSA"*/);
    sub_1B885B0(&StringLiteral_23237/*"sha256"*/);
    sub_1B885B0(&StringLiteral_23073/*"secP224k1"*/);
    sub_1B885B0(&StringLiteral_21369/*"md5"*/);
    sub_1B885B0(&StringLiteral_16702/*"aes192"*/);
    sub_1B885B0(&StringLiteral_1292/*"1.2.840.113549.1.1.12"*/);
    sub_1B885B0(&StringLiteral_10613/*"Phone"*/);
    sub_1B885B0(&StringLiteral_1279/*"1.2.840.10045.3.1.4"*/);
    sub_1B885B0(&StringLiteral_1491/*"3des"*/);
    sub_1B885B0(&StringLiteral_21424/*"mgf1"*/);
    sub_1B885B0(&StringLiteral_1452/*"2.5.4.3"*/);
    sub_1B885B0(&StringLiteral_1349/*"1.3.132.0.9"*/);
    sub_1B885B0(&StringLiteral_17419/*"brainpoolP224t1"*/);
    sub_1B885B0(&StringLiteral_5449/*"ECDSA_P384"*/);
    sub_1B885B0(&StringLiteral_1344/*"1.3.132.0.32"*/);
    sub_1B885B0(&StringLiteral_18674/*"dsaSHA1"*/);
    sub_1B885B0(&StringLiteral_1445/*"2.5.4.11"*/);
    sub_1B885B0(&StringLiteral_9606/*"O"*/);
    sub_1B885B0(&StringLiteral_1362/*"1.3.14.3.2.3"*/);
    sub_1B885B0(&StringLiteral_1338/*"1.2.840.113549.3.2"*/);
    sub_1B885B0(&StringLiteral_16700/*"aes128"*/);
    sub_1B885B0(&StringLiteral_1351/*"1.3.132.1.11.2"*/);
    sub_1B885B0(&StringLiteral_1363/*"1.3.14.3.2.4"*/);
    sub_1B885B0(&StringLiteral_10399/*"POBox"*/);
    sub_1B885B0(&StringLiteral_1336/*"1.2.840.113549.2.4"*/);
    sub_1B885B0(&StringLiteral_1350/*"1.3.132.1.11.1"*/);
    sub_1B885B0(&StringLiteral_1274/*"1.2.840.10040.4.3"*/);
    sub_1B885B0(&StringLiteral_1358/*"1.3.14.3.2.22"*/);
    sub_1B885B0(&StringLiteral_1370/*"1.3.36.3.3.2.8.1.1.11"*/);
    sub_1B885B0(&StringLiteral_1294/*"1.2.840.113549.1.1.2"*/);
    sub_1B885B0(&StringLiteral_11137/*"RSA_KEYX"*/);
    sub_1B885B0(&StringLiteral_1446/*"2.5.4.12"*/);
    sub_1B885B0(&StringLiteral_1419/*"2.16.840.1.101.2.1.1.20"*/);
    sub_1B885B0(&StringLiteral_23234/*"sha1DSA"*/);
    sub_1B885B0(&StringLiteral_23423/*"specifiedECDSA"*/);
    sub_1B885B0(&StringLiteral_1343/*"1.3.132.0.31"*/);
    sub_1B885B0(&StringLiteral_17420/*"brainpoolP256r1"*/);
    sub_1B885B0(&StringLiteral_1355/*"1.3.14.3.2.15"*/);
    sub_1B885B0(&StringLiteral_1348/*"1.3.132.0.8"*/);
    sub_1B885B0(&StringLiteral_1293/*"1.2.840.113549.1.1.13"*/);
    sub_1B885B0(&StringLiteral_17414/*"brainpoolP160r1"*/);
    sub_1B885B0(&StringLiteral_24815/*"x962P239v1"*/);
    sub_1B885B0(&StringLiteral_1359/*"1.3.14.3.2.26"*/);
    sub_1B885B0(&StringLiteral_1284/*"1.2.840.10045.4.3"*/);
    sub_1B885B0(&StringLiteral_9745/*"OU"*/);
    sub_1B885B0(&StringLiteral_1275/*"1.2.840.10045.2.1"*/);
    sub_1B885B0(&StringLiteral_1374/*"1.3.36.3.3.2.8.1.1.2"*/);
    sub_1B885B0(&StringLiteral_9305/*"NO_SIGN"*/);
    sub_1B885B0(&StringLiteral_22790/*"rc4"*/);
    sub_1B885B0(&StringLiteral_21367/*"md4"*/);
    sub_1B885B0(&StringLiteral_18791/*"ec192wapi"*/);
    sub_1B885B0(&StringLiteral_1327/*"1.2.840.113549.1.9.16.3.7"*/);
    sub_1B885B0(&StringLiteral_3384/*"C"*/);
    sub_1B885B0(&StringLiteral_1378/*"1.3.36.3.3.2.8.1.1.6"*/);
    sub_1B885B0(&StringLiteral_1280/*"1.2.840.10045.3.1.5"*/);
    sub_1B885B0(&StringLiteral_17424/*"brainpoolP384r1"*/);
    sub_1B885B0(&StringLiteral_17423/*"brainpoolP320t1"*/);
    sub_1B885B0(&StringLiteral_5524/*"ESDH"*/);
    sub_1B885B0(&StringLiteral_23240/*"sha384"*/);
    sub_1B885B0(&StringLiteral_1325/*"1.2.840.113549.1.9.16.3.5"*/);
    sub_1B885B0(&StringLiteral_5446/*"ECDH_STD_SHA384_KDF"*/);
    sub_1B885B0(&StringLiteral_1342/*"1.3.132.0.30"*/);
    sub_1B885B0(&StringLiteral_1357/*"1.3.14.3.2.2"*/);
    sub_1B885B0(&StringLiteral_1356/*"1.3.14.3.2.18"*/);
    sub_1B885B0(&StringLiteral_1296/*"1.2.840.113549.1.1.4"*/);
    sub_1B885B0(&StringLiteral_3931/*"CPS"*/);
    sub_1B885B0(&StringLiteral_1462/*"2.5.4.9"*/);
    sub_1B885B0(&StringLiteral_1277/*"1.2.840.10045.3.1.2"*/);
    sub_1B885B0(&StringLiteral_23243/*"sha512"*/);
    sub_1B885B0(&StringLiteral_1379/*"1.3.36.3.3.2.8.1.1.7"*/);
    sub_1B885B0(&StringLiteral_1426/*"2.16.840.1.101.3.4.1.5"*/);
    sub_1B885B0(&StringLiteral_16701/*"aes128wrap"*/);
    sub_1B885B0(&StringLiteral_1389/*"1.3.6.1.5.5.7.6.2"*/);
    sub_1B885B0(&StringLiteral_5450/*"ECDSA_P521"*/);
    sub_1B885B0(&StringLiteral_23069/*"secP160k1"*/);
    sub_1B885B0(&StringLiteral_1429/*"2.16.840.1.101.3.4.2.2"*/);
    sub_1B885B0(&StringLiteral_1364/*"1.3.14.3.2.7"*/);
    sub_1B885B0(&StringLiteral_16705/*"aes256wrap"*/);
    sub_1B885B0(&StringLiteral_1444/*"2.5.4.10"*/);
    sub_1B885B0(&StringLiteral_23244/*"sha512ECDSA"*/);
    sub_1B885B0(&StringLiteral_1353/*"1.3.14.3.2.12"*/);
    sub_1B885B0(&StringLiteral_1295/*"1.2.840.113549.1.1.3"*/);
    sub_1B885B0(&StringLiteral_23074/*"secP256k1"*/);
    sub_1B885B0(&StringLiteral_1373/*"1.3.36.3.3.2.8.1.1.14"*/);
    sub_1B885B0(&StringLiteral_5448/*"ECDSA_P256"*/);
    sub_1B885B0(&StringLiteral_1361/*"1.3.14.3.2.29"*/);
    sub_1B885B0(&StringLiteral_16703/*"aes192wrap"*/);
    sub_1B885B0(&StringLiteral_1272/*"1.2.156.11235.1.1.2.1"*/);
    sub_1B885B0(&StringLiteral_5277/*"Description"*/);
    sub_1B885B0(&StringLiteral_22789/*"rc2"*/);
    sub_1B885B0(&StringLiteral_17416/*"brainpoolP192r1"*/);
    sub_1B885B0(&StringLiteral_1458/*"2.5.4.5"*/);
    sub_1B885B0(&StringLiteral_16704/*"aes256"*/);
    sub_1B885B0(&StringLiteral_17418/*"brainpoolP224r1"*/);
    sub_1B885B0(&StringLiteral_17422/*"brainpoolP320r1"*/);
    sub_1B885B0(&StringLiteral_1369/*"1.3.36.3.3.2.8.1.1.10"*/);
    sub_1B885B0(&StringLiteral_1290/*"1.2.840.113549.1.1.10"*/);
    sub_1B885B0(&StringLiteral_1423/*"2.16.840.1.101.3.4.1.25"*/);
    sub_1B885B0(&StringLiteral_12311/*"STREET"*/);
    sub_1B885B0(&StringLiteral_1453/*"2.5.4.4"*/);
    byte_4A64BB4 = 1;
  }
  v1 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor(
    v1,
    (const MethodInfo_3100B40 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
  Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_lateBoundOidToFriendlyName = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)Internal_Cryptography_OidLookup_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
  if ( !byte_4A62C34 )
  {
    sub_1B885B0(&System_StringComparer_TypeInfo);
    byte_4A62C34 = 1;
  }
  v4 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v4 = System_StringComparer_TypeInfo;
  }
  s_ordinalIgnoreCase = (System_Collections_Generic_IEqualityComparer_TKey__o *)v4->static_fields->s_ordinalIgnoreCase;
  v6 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor_51383216(
    v6,
    s_ordinalIgnoreCase,
    (const MethodInfo_3100BB0 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___75973072);
  static_fields = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  static_fields->s_lateBoundFriendlyNameToOid = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->s_lateBoundFriendlyNameToOid, (int32_t)v6, v8, v9);
  if ( !byte_4A62C34 )
  {
    sub_1B885B0(&System_StringComparer_TypeInfo);
    byte_4A62C34 = 1;
  }
  v10 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v10 = System_StringComparer_TypeInfo;
  }
  v11 = (System_Collections_Generic_IEqualityComparer_TKey__o *)v10->static_fields->s_ordinalIgnoreCase;
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_52193348(
    v12,
    v11,
    (const MethodInfo_31C6844 *)Method_System_Collections_Generic_Dictionary_string__string___ctor___75994936);
  if ( !v12 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_1491/*"3des"*/,
    (Il2CppObject *)StringLiteral_1340/*"1.2.840.113549.3.7"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16700/*"aes128"*/,
    (Il2CppObject *)StringLiteral_1421/*"2.16.840.1.101.3.4.1.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16701/*"aes128wrap"*/,
    (Il2CppObject *)StringLiteral_1426/*"2.16.840.1.101.3.4.1.5"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16702/*"aes192"*/,
    (Il2CppObject *)StringLiteral_1422/*"2.16.840.1.101.3.4.1.22"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16703/*"aes192wrap"*/,
    (Il2CppObject *)StringLiteral_1423/*"2.16.840.1.101.3.4.1.25"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16704/*"aes256"*/,
    (Il2CppObject *)StringLiteral_1424/*"2.16.840.1.101.3.4.1.42"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_16705/*"aes256wrap"*/,
    (Il2CppObject *)StringLiteral_1425/*"2.16.840.1.101.3.4.1.45"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17414/*"brainpoolP160r1"*/,
    (Il2CppObject *)StringLiteral_1368/*"1.3.36.3.3.2.8.1.1.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17415/*"brainpoolP160t1"*/,
    (Il2CppObject *)StringLiteral_1374/*"1.3.36.3.3.2.8.1.1.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17416/*"brainpoolP192r1"*/,
    (Il2CppObject *)StringLiteral_1375/*"1.3.36.3.3.2.8.1.1.3"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17417/*"brainpoolP192t1"*/,
    (Il2CppObject *)StringLiteral_1376/*"1.3.36.3.3.2.8.1.1.4"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17418/*"brainpoolP224r1"*/,
    (Il2CppObject *)StringLiteral_1377/*"1.3.36.3.3.2.8.1.1.5"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17419/*"brainpoolP224t1"*/,
    (Il2CppObject *)StringLiteral_1378/*"1.3.36.3.3.2.8.1.1.6"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17420/*"brainpoolP256r1"*/,
    (Il2CppObject *)StringLiteral_1379/*"1.3.36.3.3.2.8.1.1.7"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17421/*"brainpoolP256t1"*/,
    (Il2CppObject *)StringLiteral_1380/*"1.3.36.3.3.2.8.1.1.8"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17422/*"brainpoolP320r1"*/,
    (Il2CppObject *)StringLiteral_1381/*"1.3.36.3.3.2.8.1.1.9"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17423/*"brainpoolP320t1"*/,
    (Il2CppObject *)StringLiteral_1369/*"1.3.36.3.3.2.8.1.1.10"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17424/*"brainpoolP384r1"*/,
    (Il2CppObject *)StringLiteral_1370/*"1.3.36.3.3.2.8.1.1.11"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17425/*"brainpoolP384t1"*/,
    (Il2CppObject *)StringLiteral_1371/*"1.3.36.3.3.2.8.1.1.12"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17426/*"brainpoolP512r1"*/,
    (Il2CppObject *)StringLiteral_1372/*"1.3.36.3.3.2.8.1.1.13"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_17427/*"brainpoolP512t1"*/,
    (Il2CppObject *)StringLiteral_1373/*"1.3.36.3.3.2.8.1.1.14"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3384/*"C"*/,
    (Il2CppObject *)StringLiteral_1459/*"2.5.4.6"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3611/*"CMS3DESwrap"*/,
    (Il2CppObject *)StringLiteral_1326/*"1.2.840.113549.1.9.16.3.6"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3612/*"CMSRC2wrap"*/,
    (Il2CppObject *)StringLiteral_1327/*"1.2.840.113549.1.9.16.3.7"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3613/*"CN"*/,
    (Il2CppObject *)StringLiteral_1452/*"2.5.4.3"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_3931/*"CPS"*/,
    (Il2CppObject *)StringLiteral_1386/*"1.3.6.1.5.5.7.2.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_4997/*"DC"*/,
    (Il2CppObject *)StringLiteral_1220/*"0.9.2342.19200300.100.1.25"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_18576/*"des"*/,
    (Il2CppObject *)StringLiteral_1364/*"1.3.14.3.2.7"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5277/*"Description"*/,
    (Il2CppObject *)StringLiteral_1447/*"2.5.4.13"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5019/*"DH"*/,
    (Il2CppObject *)StringLiteral_1288/*"1.2.840.10046.2.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_18651/*"dnQualifier"*/,
    (Il2CppObject *)StringLiteral_1457/*"2.5.4.46"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5068/*"DSA"*/,
    (Il2CppObject *)StringLiteral_1273/*"1.2.840.10040.4.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_18674/*"dsaSHA1"*/,
    (Il2CppObject *)StringLiteral_1360/*"1.3.14.3.2.27"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5429/*"E"*/,
    (Il2CppObject *)StringLiteral_1323/*"1.2.840.113549.1.9.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_18791/*"ec192wapi"*/,
    (Il2CppObject *)StringLiteral_1272/*"1.2.156.11235.1.1.2.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5435/*"ECC"*/,
    (Il2CppObject *)StringLiteral_1275/*"1.2.840.10045.2.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5444/*"ECDH_STD_SHA1_KDF"*/,
    (Il2CppObject *)StringLiteral_1352/*"1.3.133.16.840.63.0.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5445/*"ECDH_STD_SHA256_KDF"*/,
    (Il2CppObject *)StringLiteral_1350/*"1.3.132.1.11.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5446/*"ECDH_STD_SHA384_KDF"*/,
    (Il2CppObject *)StringLiteral_1351/*"1.3.132.1.11.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5448/*"ECDSA_P256"*/,
    (Il2CppObject *)StringLiteral_1282/*"1.2.840.10045.3.1.7"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5449/*"ECDSA_P384"*/,
    (Il2CppObject *)StringLiteral_1346/*"1.3.132.0.34"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5450/*"ECDSA_P521"*/,
    (Il2CppObject *)StringLiteral_1347/*"1.3.132.0.35"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_5524/*"ESDH"*/,
    (Il2CppObject *)StringLiteral_1325/*"1.2.840.113549.1.9.16.3.5"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_6864/*"G"*/,
    (Il2CppObject *)StringLiteral_1455/*"2.5.4.42"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_7276/*"I"*/,
    (Il2CppObject *)StringLiteral_1456/*"2.5.4.43"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_8226/*"L"*/,
    (Il2CppObject *)StringLiteral_1460/*"2.5.4.7"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21365/*"md2"*/,
    (Il2CppObject *)StringLiteral_1335/*"1.2.840.113549.2.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21366/*"md2RSA"*/,
    (Il2CppObject *)StringLiteral_1294/*"1.2.840.113549.1.1.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21367/*"md4"*/,
    (Il2CppObject *)StringLiteral_1336/*"1.2.840.113549.2.4"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21368/*"md4RSA"*/,
    (Il2CppObject *)StringLiteral_1295/*"1.2.840.113549.1.1.3"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21369/*"md5"*/,
    (Il2CppObject *)StringLiteral_1337/*"1.2.840.113549.2.5"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21371/*"md5RSA"*/,
    (Il2CppObject *)StringLiteral_1296/*"1.2.840.113549.1.1.4"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21424/*"mgf1"*/,
    (Il2CppObject *)StringLiteral_1299/*"1.2.840.113549.1.1.8"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21511/*"mosaicKMandUpdSig"*/,
    (Il2CppObject *)StringLiteral_1419/*"2.16.840.1.101.2.1.1.20"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_21512/*"mosaicUpdatedSig"*/,
    (Il2CppObject *)StringLiteral_1418/*"2.16.840.1.101.2.1.1.19"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_22059/*"nistP192"*/,
    (Il2CppObject *)StringLiteral_1276/*"1.2.840.10045.3.1.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_22060/*"nistP224"*/,
    (Il2CppObject *)StringLiteral_1345/*"1.3.132.0.33"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_9305/*"NO_SIGN"*/,
    (Il2CppObject *)StringLiteral_1389/*"1.3.6.1.5.5.7.6.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_9606/*"O"*/,
    (Il2CppObject *)StringLiteral_1444/*"2.5.4.10"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_9745/*"OU"*/,
    (Il2CppObject *)StringLiteral_1445/*"2.5.4.11"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_10613/*"Phone"*/,
    (Il2CppObject *)StringLiteral_1450/*"2.5.4.20"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_10399/*"POBox"*/,
    (Il2CppObject *)StringLiteral_1449/*"2.5.4.18"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_10706/*"PostalCode"*/,
    (Il2CppObject *)StringLiteral_1448/*"2.5.4.17"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_22789/*"rc2"*/,
    (Il2CppObject *)StringLiteral_1338/*"1.2.840.113549.3.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_22790/*"rc4"*/,
    (Il2CppObject *)StringLiteral_1339/*"1.2.840.113549.3.4"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11133/*"RSA"*/,
    (Il2CppObject *)StringLiteral_1289/*"1.2.840.113549.1.1.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11135/*"RSAES_OAEP"*/,
    (Il2CppObject *)StringLiteral_1298/*"1.2.840.113549.1.1.7"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11136/*"RSASSA-PSS"*/,
    (Il2CppObject *)StringLiteral_1290/*"1.2.840.113549.1.1.10"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11415/*"S"*/,
    (Il2CppObject *)StringLiteral_1461/*"2.5.4.8"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23069/*"secP160k1"*/,
    (Il2CppObject *)StringLiteral_1349/*"1.3.132.0.9"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23070/*"secP160r1"*/,
    (Il2CppObject *)StringLiteral_1348/*"1.3.132.0.8"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23071/*"secP160r2"*/,
    (Il2CppObject *)StringLiteral_1342/*"1.3.132.0.30"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23072/*"secP192k1"*/,
    (Il2CppObject *)StringLiteral_1343/*"1.3.132.0.31"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23073/*"secP224k1"*/,
    (Il2CppObject *)StringLiteral_1344/*"1.3.132.0.32"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23074/*"secP256k1"*/,
    (Il2CppObject *)StringLiteral_1341/*"1.3.132.0.10"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_11532/*"SERIALNUMBER"*/,
    (Il2CppObject *)StringLiteral_1458/*"2.5.4.5"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23233/*"sha1"*/,
    (Il2CppObject *)StringLiteral_1359/*"1.3.14.3.2.26"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23234/*"sha1DSA"*/,
    (Il2CppObject *)StringLiteral_1274/*"1.2.840.10040.4.3"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23235/*"sha1ECDSA"*/,
    (Il2CppObject *)StringLiteral_1283/*"1.2.840.10045.4.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23236/*"sha1RSA"*/,
    (Il2CppObject *)StringLiteral_1297/*"1.2.840.113549.1.1.5"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23237/*"sha256"*/,
    (Il2CppObject *)StringLiteral_1428/*"2.16.840.1.101.3.4.2.1"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23238/*"sha256ECDSA"*/,
    (Il2CppObject *)StringLiteral_1285/*"1.2.840.10045.4.3.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23239/*"sha256RSA"*/,
    (Il2CppObject *)StringLiteral_1291/*"1.2.840.113549.1.1.11"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23240/*"sha384"*/,
    (Il2CppObject *)StringLiteral_1429/*"2.16.840.1.101.3.4.2.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23241/*"sha384ECDSA"*/,
    (Il2CppObject *)StringLiteral_1286/*"1.2.840.10045.4.3.3"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23242/*"sha384RSA"*/,
    (Il2CppObject *)StringLiteral_1292/*"1.2.840.113549.1.1.12"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23243/*"sha512"*/,
    (Il2CppObject *)StringLiteral_1430/*"2.16.840.1.101.3.4.2.3"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23244/*"sha512ECDSA"*/,
    (Il2CppObject *)StringLiteral_1287/*"1.2.840.10045.4.3.4"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23245/*"sha512RSA"*/,
    (Il2CppObject *)StringLiteral_1293/*"1.2.840.113549.1.1.13"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_12167/*"SN"*/,
    (Il2CppObject *)StringLiteral_1453/*"2.5.4.4"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_23423/*"specifiedECDSA"*/,
    (Il2CppObject *)StringLiteral_1284/*"1.2.840.10045.4.3"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_12311/*"STREET"*/,
    (Il2CppObject *)StringLiteral_1462/*"2.5.4.9"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_13233/*"T"*/,
    (Il2CppObject *)StringLiteral_1446/*"2.5.4.12"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24741/*"wtls9"*/,
    (Il2CppObject *)StringLiteral_1433/*"2.23.43.1.4.9"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_15701/*"X21Address"*/,
    (Il2CppObject *)StringLiteral_1451/*"2.5.4.24"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24813/*"x962P192v2"*/,
    (Il2CppObject *)StringLiteral_1277/*"1.2.840.10045.3.1.2"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24814/*"x962P192v3"*/,
    (Il2CppObject *)StringLiteral_1278/*"1.2.840.10045.3.1.3"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24815/*"x962P239v1"*/,
    (Il2CppObject *)StringLiteral_1279/*"1.2.840.10045.3.1.4"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24816/*"x962P239v2"*/,
    (Il2CppObject *)StringLiteral_1280/*"1.2.840.10045.3.1.5"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v12,
    (Il2CppObject *)StringLiteral_24817/*"x962P239v3"*/,
    (Il2CppObject *)StringLiteral_1281/*"1.2.840.10045.3.1.6"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v15 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v15->s_friendlyNameToOid = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->s_friendlyNameToOid, (int32_t)v12, v16, v17);
  v18 = Internal_Cryptography_OidLookup___c_TypeInfo;
  s_friendlyNameToOid = Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_friendlyNameToOid;
  if ( !Internal_Cryptography_OidLookup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup___c_TypeInfo);
    v18 = Internal_Cryptography_OidLookup___c_TypeInfo;
  }
  v20 = (Il2CppObject *)v18->static_fields->__9;
  v21 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v21,
    v20,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__,
    0LL);
  v22 = (Il2CppObject *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9;
  v23 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v23,
    v22,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__,
    0LL);
  v24 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)s_friendlyNameToOid,
          (System_Func_TSource__TKey__o *)v21,
          (System_Func_TSource__TElement__o *)v23,
          (const MethodInfo_2EB8C18 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
  v25 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v25->s_oidToFriendlyName = (struct System_Collections_Generic_Dictionary_string__string__o *)v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v25->s_oidToFriendlyName, (int32_t)v24, v26, v27);
  v28 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v28,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v28 )
LABEL_18:
    sub_1B8880C(v13, v14);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1312/*"1.2.840.113549.1.3.1"*/,
    (Il2CppObject *)StringLiteral_5019/*"DH"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1353/*"1.3.14.3.2.12"*/,
    (Il2CppObject *)StringLiteral_5068/*"DSA"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1354/*"1.3.14.3.2.13"*/,
    (Il2CppObject *)StringLiteral_23234/*"sha1DSA"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1355/*"1.3.14.3.2.15"*/,
    (Il2CppObject *)StringLiteral_23246/*"shaRSA"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1356/*"1.3.14.3.2.18"*/,
    (Il2CppObject *)StringLiteral_23229/*"sha"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1357/*"1.3.14.3.2.2"*/,
    (Il2CppObject *)StringLiteral_21368/*"md4RSA"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1358/*"1.3.14.3.2.22"*/,
    (Il2CppObject *)StringLiteral_11137/*"RSA_KEYX"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1361/*"1.3.14.3.2.29"*/,
    (Il2CppObject *)StringLiteral_23236/*"sha1RSA"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1362/*"1.3.14.3.2.3"*/,
    (Il2CppObject *)StringLiteral_21371/*"md5RSA"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1363/*"1.3.14.3.2.4"*/,
    (Il2CppObject *)StringLiteral_21368/*"md4RSA"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v28,
    (Il2CppObject *)StringLiteral_1365/*"1.3.14.7.2.3.1"*/,
    (Il2CppObject *)StringLiteral_21366/*"md2RSA"*/,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v29 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v29->s_compatOids = (struct System_Collections_Generic_Dictionary_string__string__o *)v28;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v29->s_compatOids, (int32_t)v28, v30, v31);
}


System_String_o *__fastcall Internal_Cryptography_OidLookup__NativeFriendlyNameToOid(
        System_String_o *friendlyName,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  uint32_t v5; // w0
  bool v6; // w0
  __int64 *v7; // x8
  System_String_o *v9; // x8

  if ( (byte_4A64BB3 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6334/*"Extended Key Usage"*/);
    sub_1B885B0(&StringLiteral_1437/*"2.5.29.17"*/);
    sub_1B885B0(&StringLiteral_1332/*"1.2.840.113549.1.9.4"*/);
    sub_1B885B0(&StringLiteral_8200/*"Key Usage"*/);
    sub_1B885B0(&StringLiteral_1333/*"1.2.840.113549.1.9.5"*/);
    sub_1B885B0(&StringLiteral_8998/*"Message Digest"*/);
    sub_1B885B0(&StringLiteral_1331/*"1.2.840.113549.1.9.3"*/);
    sub_1B885B0(&StringLiteral_1432/*"2.16.840.1.113730.1.1"*/);
    sub_1B885B0(&StringLiteral_12770/*"Signing Time"*/);
    sub_1B885B0(&StringLiteral_1443/*"2.5.29.37"*/);
    sub_1B885B0(&StringLiteral_1435/*"2.5.29.14"*/);
    sub_1B885B0(&StringLiteral_1324/*"1.2.840.113549.1.9.16.3.3"*/);
    sub_1B885B0(&StringLiteral_10382/*"PKCS 7 Data"*/);
    sub_1B885B0(&StringLiteral_3203/*"Basic Constraints"*/);
    sub_1B885B0(&StringLiteral_13047/*"Subject Alternative Name"*/);
    sub_1B885B0(&StringLiteral_4715/*"Content Type"*/);
    sub_1B885B0(&StringLiteral_13048/*"Subject Key Identifier"*/);
    sub_1B885B0(&StringLiteral_1436/*"2.5.29.15"*/);
    sub_1B885B0(&StringLiteral_9388/*"Netscape Cert Type"*/);
    sub_1B885B0(&StringLiteral_1319/*"1.2.840.113549.1.7.1"*/);
    sub_1B885B0(&StringLiteral_1439/*"2.5.29.19"*/);
    sub_1B885B0(&StringLiteral_20203/*"id-smime-alg-3DESwrap"*/);
    byte_4A64BB3 = 1;
  }
  v5 = PrivateImplementationDetails___ComputeStringHash_68161820(friendlyName, 0LL);
  if ( v5 > 0x751680DD )
  {
    if ( v5 > 0xB4301663 )
    {
      switch ( v5 )
      {
        case 0xB85A3360:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_6334/*"Extended Key Usage"*/, 0LL);
          v7 = &StringLiteral_1443/*"2.5.29.37"*/;
          break;
        case 0xCCB33EB4:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_8998/*"Message Digest"*/, 0LL);
          v7 = &StringLiteral_1332/*"1.2.840.113549.1.9.4"*/;
          break;
        case 0xE2748DE9:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_20203/*"id-smime-alg-3DESwrap"*/, 0LL);
          v7 = &StringLiteral_1324/*"1.2.840.113549.1.9.16.3.3"*/;
          break;
        default:
          return 0LL;
      }
    }
    else
    {
      switch ( v5 )
      {
        case 0x953B2236:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_4715/*"Content Type"*/, 0LL);
          v7 = &StringLiteral_1331/*"1.2.840.113549.1.9.3"*/;
          break;
        case 0x9DCF2034:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_9388/*"Netscape Cert Type"*/, 0LL);
          v7 = &StringLiteral_1432/*"2.16.840.1.113730.1.1"*/;
          break;
        case 0xB4301663:
          v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_13047/*"Subject Alternative Name"*/, 0LL);
          v7 = &StringLiteral_1437/*"2.5.29.17"*/;
          break;
        default:
          return 0LL;
      }
    }
  }
  else if ( v5 > 0x55D8B021 )
  {
    switch ( v5 )
    {
      case 0x5BEE62EFu:
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_13048/*"Subject Key Identifier"*/, 0LL);
        v7 = &StringLiteral_1435/*"2.5.29.14"*/;
        break;
      case 0x5F357EFDu:
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12770/*"Signing Time"*/, 0LL);
        v7 = &StringLiteral_1333/*"1.2.840.113549.1.9.5"*/;
        break;
      case 0x751680DDu:
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_3203/*"Basic Constraints"*/, 0LL);
        v7 = &StringLiteral_1439/*"2.5.29.19"*/;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    if ( v5 != 61174027 )
    {
      if ( v5 == 1440264225 )
      {
        v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_10382/*"PKCS 7 Data"*/, 0LL);
        v7 = &StringLiteral_1319/*"1.2.840.113549.1.7.1"*/;
        goto LABEL_29;
      }
      return 0LL;
    }
    v6 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_8200/*"Key Usage"*/, 0LL);
    v7 = &StringLiteral_1436/*"2.5.29.15"*/;
  }
LABEL_29:
  v9 = (System_String_o *)*v7;
  if ( v6 )
    return v9;
  else
    return 0LL;
}


System_String_o *__fastcall Internal_Cryptography_OidLookup__NativeOidToFriendlyName(
        System_String_o *oid,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  uint32_t v5; // w0
  bool v6; // w0
  __int64 *v7; // x8
  System_String_o *v9; // x8

  if ( (byte_4A64BB2 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_6334/*"Extended Key Usage"*/);
    sub_1B885B0(&StringLiteral_1437/*"2.5.29.17"*/);
    sub_1B885B0(&StringLiteral_1332/*"1.2.840.113549.1.9.4"*/);
    sub_1B885B0(&StringLiteral_8200/*"Key Usage"*/);
    sub_1B885B0(&StringLiteral_1333/*"1.2.840.113549.1.9.5"*/);
    sub_1B885B0(&StringLiteral_8998/*"Message Digest"*/);
    sub_1B885B0(&StringLiteral_1331/*"1.2.840.113549.1.9.3"*/);
    sub_1B885B0(&StringLiteral_1432/*"2.16.840.1.113730.1.1"*/);
    sub_1B885B0(&StringLiteral_12770/*"Signing Time"*/);
    sub_1B885B0(&StringLiteral_1443/*"2.5.29.37"*/);
    sub_1B885B0(&StringLiteral_1435/*"2.5.29.14"*/);
    sub_1B885B0(&StringLiteral_1324/*"1.2.840.113549.1.9.16.3.3"*/);
    sub_1B885B0(&StringLiteral_10382/*"PKCS 7 Data"*/);
    sub_1B885B0(&StringLiteral_3203/*"Basic Constraints"*/);
    sub_1B885B0(&StringLiteral_13047/*"Subject Alternative Name"*/);
    sub_1B885B0(&StringLiteral_4715/*"Content Type"*/);
    sub_1B885B0(&StringLiteral_13048/*"Subject Key Identifier"*/);
    sub_1B885B0(&StringLiteral_1436/*"2.5.29.15"*/);
    sub_1B885B0(&StringLiteral_9388/*"Netscape Cert Type"*/);
    sub_1B885B0(&StringLiteral_1319/*"1.2.840.113549.1.7.1"*/);
    sub_1B885B0(&StringLiteral_1439/*"2.5.29.19"*/);
    sub_1B885B0(&StringLiteral_20203/*"id-smime-alg-3DESwrap"*/);
    byte_4A64BB2 = 1;
  }
  v5 = PrivateImplementationDetails___ComputeStringHash_68161820(oid, 0LL);
  if ( v5 > 0xC67AB912 )
  {
    if ( v5 > 0xD20A3896 )
    {
      switch ( v5 )
      {
        case 0xD30A3A29:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1436/*"2.5.29.15"*/, 0LL);
          v7 = &StringLiteral_8200/*"Key Usage"*/;
          break;
        case 0xDC06204E:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1432/*"2.16.840.1.113730.1.1"*/, 0LL);
          v7 = &StringLiteral_9388/*"Netscape Cert Type"*/;
          break;
        case 0xDF0A4D0D:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1439/*"2.5.29.19"*/, 0LL);
          v7 = &StringLiteral_3203/*"Basic Constraints"*/;
          break;
        default:
          return 0LL;
      }
    }
    else
    {
      switch ( v5 )
      {
        case 0xD105B9D5:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1443/*"2.5.29.37"*/, 0LL);
          v7 = &StringLiteral_6334/*"Extended Key Usage"*/;
          break;
        case 0xD10A3703:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1437/*"2.5.29.17"*/, 0LL);
          v7 = &StringLiteral_13047/*"Subject Alternative Name"*/;
          break;
        case 0xD20A3896:
          v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1435/*"2.5.29.14"*/, 0LL);
          v7 = &StringLiteral_13048/*"Subject Key Identifier"*/;
          break;
        default:
          return 0LL;
      }
    }
  }
  else if ( v5 > 0xABE04A90 )
  {
    switch ( v5 )
    {
      case 0xACE04C23:
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1332/*"1.2.840.113549.1.9.4"*/, 0LL);
        v7 = &StringLiteral_8998/*"Message Digest"*/;
        break;
      case 0xB1E05402:
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1331/*"1.2.840.113549.1.9.3"*/, 0LL);
        v7 = &StringLiteral_4715/*"Content Type"*/;
        break;
      case 0xC67AB912:
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1324/*"1.2.840.113549.1.9.16.3.3"*/, 0LL);
        v7 = &StringLiteral_20203/*"id-smime-alg-3DESwrap"*/;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    if ( v5 != -1411364208 )
    {
      if ( v5 == 2095896238 )
      {
        v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1319/*"1.2.840.113549.1.7.1"*/, 0LL);
        v7 = &StringLiteral_10382/*"PKCS 7 Data"*/;
        goto LABEL_29;
      }
      return 0LL;
    }
    v6 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1333/*"1.2.840.113549.1.9.5"*/, 0LL);
    v7 = &StringLiteral_12770/*"Signing Time"*/;
  }
LABEL_29:
  v9 = (System_String_o *)*v7;
  if ( v6 )
    return v9;
  else
    return 0LL;
}


bool __fastcall Internal_Cryptography_OidLookup__ShouldUseCache(int32_t oidGroup, const MethodInfo *method)
{
  return 1;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Internal_Cryptography_OidLookup__ToFriendlyName(
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

  if ( (byte_4A64BB0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1B885B0(&Internal_Cryptography_OidLookup_TypeInfo);
    byte_4A64BB0 = 1;
  }
  value = 0LL;
  if ( !oid )
  {
    v13 = sub_1B885C4(&System_ArgumentNullException_TypeInfo);
    v14 = (System_ArgumentNullException_o *)sub_1B887FC(v13);
    v15 = (System_String_o *)sub_1B885C4(&StringLiteral_22222/*"oid"*/);
    System_ArgumentNullException___ctor_62309180(v14, v15, 0LL);
    v16 = sub_1B885C4(&Method_Internal_Cryptography_OidLookup_ToFriendlyName__);
    sub_1B886D8(v14, v16);
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
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
            (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
              (const MethodInfo_31019D8 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
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
              (const MethodInfo_3101354 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
            return (System_String_o *)value;
          }
LABEL_25:
          sub_1B8880C(s_oidToFriendlyName, *(_QWORD *)&oidGroup);
        }
      }
    }
  }
  return (System_String_o *)value;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Internal_Cryptography_OidLookup__ToOid(
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

  if ( (byte_4A64BB1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
    sub_1B885B0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1B885B0(&Internal_Cryptography_OidLookup_TypeInfo);
    byte_4A64BB1 = 1;
  }
  value = 0LL;
  if ( !friendlyName )
  {
    v12 = sub_1B885C4(&System_ArgumentNullException_TypeInfo);
    v13 = (System_ArgumentNullException_o *)sub_1B887FC(v12);
    v14 = (System_String_o *)sub_1B885C4(&StringLiteral_19654/*"friendlyName"*/);
    System_ArgumentNullException___ctor_62309180(v13, v14, 0LL);
    v15 = sub_1B885C4(&Method_Internal_Cryptography_OidLookup_ToOid__);
    sub_1B886D8(v13, v15);
  }
  if ( !friendlyName->fields._stringLength )
    return 0LL;
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
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
         (const MethodInfo_31019D8 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
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
        (const MethodInfo_3101354 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
      return (System_String_o *)value;
    }
LABEL_25:
    sub_1B8880C(s_friendlyNameToOid, *(_QWORD *)&oidGroup);
  }
  return result;
}


void __fastcall Internal_Cryptography_OidLookup___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A64BB5 & 1) == 0 )
  {
    sub_1B885B0(&Internal_Cryptography_OidLookup___c_TypeInfo);
    byte_4A64BB5 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(Internal_Cryptography_OidLookup___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9 = (struct Internal_Cryptography_OidLookup___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall Internal_Cryptography_OidLookup___c___ctor(
        Internal_Cryptography_OidLookup___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall Internal_Cryptography_OidLookup___c____cctor_b__10_0(
        Internal_Cryptography_OidLookup___c_o *this,
        System_Collections_Generic_KeyValuePair_string__string__o kvp,
        const MethodInfo *method)
{
  System_String_o *value; // x19

  value = kvp.fields.value;
  if ( (byte_4A64BB6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    byte_4A64BB6 = 1;
  }
  return value;
}


System_String_o *__fastcall Internal_Cryptography_OidLookup___c____cctor_b__10_1(
        Internal_Cryptography_OidLookup___c_o *this,
        System_Collections_Generic_KeyValuePair_string__string__o kvp,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = kvp.fields.key;
  if ( (byte_4A64BB7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    byte_4A64BB7 = 1;
  }
  return key;
}


void __fastcall Internal_Cryptography_Pal_CertificateData___ctor(
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
  System_Security_Cryptography_DerSequenceReader_o *v15; // x23
  struct System_String_o *OidAsString; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Byte_array *NextEncodedValue; // x1
  _QWORD *v22; // x24
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x0
  System_Byte_array *v26; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v27; // x24
  int32_t v28; // w2
  int32_t v29; // w3
  System_Security_Cryptography_DerSequenceReader_o *v30; // x23
  System_Byte_array *v31; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v32; // x24
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Byte_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Byte_array *SubjectPublicKeyInfo; // x24
  System_Security_Cryptography_DerSequenceReader_o *v39; // x23
  System_Security_Cryptography_DerSequenceReader_o *v40; // x24
  struct System_String_o *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Byte_array *v46; // x1
  _QWORD *v47; // x25
  __int64 v48; // x8
  __int64 v49; // x0
  __int64 v50; // x0
  struct System_Byte_array *BitString; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Byte_array *v56; // x0
  int32_t v57; // w1
  struct System_Byte_array **p_IssuerUniqueId; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  struct System_Byte_array *v61; // x0
  int32_t v62; // w1
  struct System_Byte_array **p_SubjectUniqueId; // x0
  System_Collections_Generic_List_object__o *v64; // x24
  int32_t v65; // w2
  int32_t v66; // w3
  System_Security_Cryptography_DerSequenceReader_o *v67; // x24
  System_Security_Cryptography_DerSequenceReader_o *v68; // x25
  System_String_o *v69; // x28
  bool v70; // w29
  System_Byte_array *OctetString; // x0
  System_Collections_Generic_List_object__o *Extensions; // x26
  System_Byte_array *v73; // x19
  System_Security_Cryptography_X509Certificates_X509Extension_o *v74; // x27
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Object_array *items; // x8
  _QWORD *v78; // x9
  __int64 size; // x10
  Il2CppClass **v80; // x0
  __int64 v81; // x0
  System_String_o *v82; // x0
  __int64 v83; // x0
  System_Security_Cryptography_DerSequenceReader_o *v84; // x22
  struct System_String_o *v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  int32_t v88; // w2
  int32_t v89; // w3
  struct System_Byte_array *v90; // x1
  _QWORD *v91; // x23
  __int64 v92; // x8
  __int64 v93; // x0
  __int64 v94; // x0
  struct System_Byte_array *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  int32_t v98; // w2
  int32_t v99; // w3
  struct System_Byte_array *v100; // [xsp+8h] [xbp-68h]

  if ( (byte_4A64BB8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_byte___);
    sub_1B885B0(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_X509Extension__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_X509Extension___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_X509Extension__TypeInfo);
    sub_1B885B0(&System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
    sub_1B885B0(&System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo);
    byte_4A64BB8 = 1;
  }
  v5 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B887FC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor_68398624(v5, rawData, 0LL);
  if ( !v5 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v5, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v8 = Sequence;
  v100 = rawData;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(Sequence, 0LL) == 160 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0LL);
    if ( !Sequence )
      goto LABEL_86;
    Integer = System_Security_Cryptography_DerSequenceReader__ReadInteger(Sequence, 0LL);
    this->fields.Version = Integer;
    if ( Integer >= 3 )
    {
      v10 = sub_1B885C4(&System_Security_Cryptography_CryptographicException_TypeInfo);
      v11 = (System_Security_Cryptography_CryptographicException_o *)sub_1B887FC(v10);
      System_Security_Cryptography_CryptographicException___ctor(v11, 0LL);
      goto LABEL_69;
    }
  }
  else
  {
    if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0LL) != 2 )
      goto LABEL_68;
    this->fields.Version = 0;
  }
  IntegerBytes = System_Security_Cryptography_DerSequenceReader__ReadIntegerBytes(v8, 0LL);
  this->fields.SerialNumber = IntegerBytes;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SerialNumber, (int32_t)IntegerBytes, v13, v14);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v15 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.TbsSignature.fields.AlgorithmId = OidAsString;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.TbsSignature, (int32_t)OidAsString, v17, v18);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v15, 0LL) )
  {
    NextEncodedValue = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v15, 0LL);
  }
  else
  {
    v22 = Method_System_Array_Empty_byte___;
    v23 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v23 )
    {
      sub_1BDA4E8();
      v23 = v22[7];
    }
    v24 = *(_QWORD *)(v23 + 16);
    if ( (*(_BYTE *)(v24 + 309) & 1) == 0 )
      v24 = sub_1BDA48C(v24);
    if ( !*(_DWORD *)(v24 + 224) )
      j_il2cpp_runtime_class_init_0(v24);
    v25 = *(_QWORD *)(v22[7] + 16LL);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1BDA48C(v25);
    NextEncodedValue = **(struct System_Byte_array ***)(v25 + 184);
  }
  this->fields.TbsSignature.fields.Parameters = NextEncodedValue;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.TbsSignature.fields.Parameters,
    (int32_t)NextEncodedValue,
    v19,
    v20);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v15, 0LL) )
    goto LABEL_68;
  v26 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v8, 0LL);
  v27 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1B887FC(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor_68423748(v27, v26, 0LL);
  this->fields.Issuer = v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.Issuer, (int32_t)v27, v28, v29);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v30 = Sequence;
  this->fields.NotBefore = System_Security_Cryptography_DerSequenceReader__ReadX509Date(Sequence, 0LL);
  this->fields.NotAfter = System_Security_Cryptography_DerSequenceReader__ReadX509Date(v30, 0LL);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v30, 0LL) )
  {
LABEL_68:
    v81 = sub_1B885C4(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v11 = (System_Security_Cryptography_CryptographicException_o *)sub_1B887FC(v81);
    v82 = (System_String_o *)sub_1B885C4(&StringLiteral_2135/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_61030328(v11, v82, 0LL);
LABEL_69:
    v83 = sub_1B885C4(&Method_Internal_Cryptography_Pal_CertificateData__ctor__);
    sub_1B886D8(v11, v83);
  }
  v31 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v8, 0LL);
  v32 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1B887FC(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor_68423748(v32, v31, 0LL);
  this->fields.Subject = v32;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.Subject, (int32_t)v32, v33, v34);
  v35 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v8, 0LL);
  this->fields.SubjectPublicKeyInfo = v35;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SubjectPublicKeyInfo, (int32_t)v35, v36, v37);
  SubjectPublicKeyInfo = this->fields.SubjectPublicKeyInfo;
  v39 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B887FC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor_68398624(v39, SubjectPublicKeyInfo, 0LL);
  if ( !v39 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v39, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v40 = Sequence;
  v41 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.PublicKeyAlgorithm.fields.AlgorithmId = v41;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.PublicKeyAlgorithm, (int32_t)v41, v42, v43);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v40, 0LL) )
  {
    v46 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v40, 0LL);
  }
  else
  {
    v47 = Method_System_Array_Empty_byte___;
    v48 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v48 )
    {
      sub_1BDA4E8();
      v48 = v47[7];
    }
    v49 = *(_QWORD *)(v48 + 16);
    if ( (*(_BYTE *)(v49 + 309) & 1) == 0 )
      v49 = sub_1BDA48C(v49);
    if ( !*(_DWORD *)(v49 + 224) )
      j_il2cpp_runtime_class_init_0(v49);
    v50 = *(_QWORD *)(v47[7] + 16LL);
    if ( (*(_BYTE *)(v50 + 309) & 1) == 0 )
      v50 = sub_1BDA48C(v50);
    v46 = **(struct System_Byte_array ***)(v50 + 184);
  }
  this->fields.PublicKeyAlgorithm.fields.Parameters = v46;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.PublicKeyAlgorithm.fields.Parameters,
    (int32_t)v46,
    v44,
    v45);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v40, 0LL) )
    goto LABEL_68;
  BitString = System_Security_Cryptography_DerSequenceReader__ReadBitString(v39, 0LL);
  this->fields.PublicKey = BitString;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.PublicKey, (int32_t)BitString, v52, v53);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v39, 0LL) )
    goto LABEL_68;
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0LL) == 161 )
  {
    v56 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v8, 0LL);
    v57 = (int)v56;
    this->fields.IssuerUniqueId = v56;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
  }
  else
  {
    this->fields.IssuerUniqueId = 0LL;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
    v57 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_IssuerUniqueId, v57, v54, v55);
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0LL) == 162 )
  {
    v61 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v8, 0LL);
    v62 = (int)v61;
    this->fields.SubjectUniqueId = v61;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
  }
  else
  {
    this->fields.SubjectUniqueId = 0LL;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
    v62 = 0;
  }
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_SubjectUniqueId, v62, v59, v60);
  v64 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_X509Extension__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v64,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_X509Extension___ctor__);
  this->fields.Extensions = (struct System_Collections_Generic_List_X509Extension__o *)v64;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.Extensions, (int32_t)v64, v65, v66);
  if ( this->fields.Version >= 2
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0LL) == 163 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0LL);
    if ( Sequence )
    {
      Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(Sequence, 0LL);
      if ( Sequence )
      {
        v67 = Sequence;
        while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v67, 0LL) )
        {
          Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v67, 0LL);
          if ( !Sequence )
            goto LABEL_86;
          v68 = Sequence;
          v69 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
          v70 = System_Security_Cryptography_DerSequenceReader__PeekTag(v68, 0LL) == 1
             && System_Security_Cryptography_DerSequenceReader__ReadBoolean(v68, 0LL);
          OctetString = System_Security_Cryptography_DerSequenceReader__ReadOctetString(v68, 0LL);
          Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
          v73 = OctetString;
          v74 = (System_Security_Cryptography_X509Certificates_X509Extension_o *)sub_1B887FC(System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo);
          System_Security_Cryptography_X509Certificates_X509Extension___ctor_68487700(v74, v69, v73, v70, 0LL);
          if ( !Extensions )
            goto LABEL_86;
          items = Extensions->fields._items;
          v78 = Method_System_Collections_Generic_List_X509Extension__Add__;
          ++Extensions->fields._version;
          if ( !items )
            goto LABEL_86;
          size = Extensions->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              Extensions,
              (Il2CppObject *)v74,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
          }
          else
          {
            v80 = &items->obj.klass + size;
            Extensions->fields._size = size + 1;
            v80[4] = (Il2CppClass *)v74;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v74, v75, v76);
          }
          if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v68, 0LL) )
            goto LABEL_68;
        }
        goto LABEL_70;
      }
    }
LABEL_86:
    sub_1B8880C(Sequence, v7);
  }
LABEL_70:
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0LL) )
    goto LABEL_68;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v5, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v84 = Sequence;
  v85 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.SignatureAlgorithm.fields.AlgorithmId = v85;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SignatureAlgorithm, (int32_t)v85, v86, v87);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v84, 0LL) )
  {
    v90 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v84, 0LL);
  }
  else
  {
    v91 = Method_System_Array_Empty_byte___;
    v92 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v92 )
    {
      sub_1BDA4E8();
      v92 = v91[7];
    }
    v93 = *(_QWORD *)(v92 + 16);
    if ( (*(_BYTE *)(v93 + 309) & 1) == 0 )
      v93 = sub_1BDA48C(v93);
    if ( !*(_DWORD *)(v93 + 224) )
      j_il2cpp_runtime_class_init_0(v93);
    v94 = *(_QWORD *)(v91[7] + 16LL);
    if ( (*(_BYTE *)(v94 + 309) & 1) == 0 )
      v94 = sub_1BDA48C(v94);
    v90 = **(struct System_Byte_array ***)(v94 + 184);
  }
  this->fields.SignatureAlgorithm.fields.Parameters = v90;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.SignatureAlgorithm.fields.Parameters,
    (int32_t)v90,
    v88,
    v89);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v84, 0LL) )
    goto LABEL_68;
  v95 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v5, 0LL);
  this->fields.SignatureValue = v95;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.SignatureValue, (int32_t)v95, v96, v97);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v5, 0LL) )
    goto LABEL_68;
  this->fields.RawData = v100;
  sub_1B88554((ServantStatusBattleListViewItem_o *)this, (int32_t)v100, v98, v99);
}


System_String_o *__fastcall Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(
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

  if ( (byte_4A64BBB & 1) == 0 )
  {
    sub_1B885B0(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    byte_4A64BBB = 1;
  }
  if ( matchType )
    v7 = 0x80;
  else
    v7 = -96;
  v8 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B887FC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor_68398624(v8, extensionBytes, 0LL);
  if ( !v8 )
    goto LABEL_22;
  if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0LL) )
    return 0LL;
  v11 = v7 | matchType;
  while ( System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0LL) != v11 )
  {
LABEL_13:
    System_Security_Cryptography_DerSequenceReader__SkipValue(v8, 0LL);
LABEL_16:
    if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0LL) )
      return 0LL;
  }
  if ( matchType )
  {
    if ( (unsigned int)(matchType - 1) < 2 || matchType == 6 )
      return System_Security_Cryptography_DerSequenceReader__ReadIA5String(v8, 0LL);
    goto LABEL_13;
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v8, 0LL);
  if ( !Sequence )
    goto LABEL_22;
  v12 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  if ( !System_String__op_Equality(OidAsString, otherOid, 0LL) )
    goto LABEL_16;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v12, 0LL) != 160 )
  {
    v15 = sub_1B885C4(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v16 = (System_Security_Cryptography_CryptographicException_o *)sub_1B887FC(v15);
    v17 = (System_String_o *)sub_1B885C4(&StringLiteral_2135/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_61030328(v16, v17, 0LL);
    v18 = sub_1B885C4(&Method_Internal_Cryptography_Pal_CertificateData_FindAltNameMatch__);
    sub_1B886D8(v16, v18);
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v12, 0LL);
  if ( !Sequence )
LABEL_22:
    sub_1B8880C(Sequence, v10);
  return System_Security_Cryptography_DerSequenceReader__ReadUtf8String(Sequence, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Internal_Cryptography_Pal_CertificateData__GetNameInfo(
        Internal_Cryptography_Pal_CertificateData_o *this,
        int32_t nameType,
        bool forIssuer,
        const MethodInfo *method)
{
  System_String_o **v7; // x8
  System_String_o *v8; // x22
  int32_t v9; // w1
  __int64 v10; // x8
  System_String_o *SimpleNameInfo; // x23
  System_String_o **v12; // x8
  System_String_o *v13; // x24
  System_Collections_Generic_List_object__o *Extensions; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  System_Byte_array *monitor; // x23
  int32_t Value; // w1
  const MethodInfo *v21; // x3
  __int64 *v22; // x8
  System_String_o *v23; // x21
  __int64 v24; // x8
  System_Collections_Generic_List_object__c *v25; // x8
  System_Collections_Generic_List_object__o *v26; // x19
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x19
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  System_String_o *v40; // x0
  System_String_o *v41; // x1
  int v42; // w21
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-70h] BYREF
  __int64 v50; // [xsp+48h] [xbp-48h] BYREF
  System_Nullable_Int32Enum__o v51; // 0:x0.8
  System_Nullable_Int32Enum__o v52; // 0:x0.8
  System_Nullable_Int32Enum__o v53; // 0:x0.8

  if ( (byte_4A64BB9 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_X509Extension__get_Current__);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    sub_1B885B0(&Method_System_Nullable_GeneralNameType___ctor__);
    sub_1B885B0(&Method_System_Nullable_GeneralNameType__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_GeneralNameType__get_Value__);
    sub_1B885B0(&StringLiteral_1437/*"2.5.29.17"*/);
    sub_1B885B0(&StringLiteral_1323/*"1.2.840.113549.1.9.1"*/);
    sub_1B885B0(&StringLiteral_1385/*"1.3.6.1.4.1.311.20.2.3"*/);
    sub_1B885B0(&StringLiteral_1452/*"2.5.4.3"*/);
    sub_1B885B0(&StringLiteral_1438/*"2.5.29.18"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A64BB9 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( nameType )
  {
    if ( forIssuer )
      v7 = (System_String_o **)&StringLiteral_1438/*"2.5.29.18"*/;
    else
      v7 = (System_String_o **)&StringLiteral_1437/*"2.5.29.17"*/;
    v8 = *v7;
    v50 = 0LL;
    switch ( nameType )
    {
      case 1:
        goto LABEL_16;
      case 2:
        v53 = (System_Nullable_Int32Enum__o)&v50;
        System_Nullable_Int32Enum____ctor(
          v53,
          0,
          (const MethodInfo_361A67C *)Method_System_Nullable_GeneralNameType___ctor__);
        v13 = (System_String_o *)StringLiteral_1385/*"1.3.6.1.4.1.311.20.2.3"*/;
        break;
      case 3:
      case 4:
        v51 = (System_Nullable_Int32Enum__o)&v50;
        v9 = 2;
        goto LABEL_18;
      case 5:
        v51 = (System_Nullable_Int32Enum__o)&v50;
        v9 = 6;
        goto LABEL_18;
      default:
        goto LABEL_19;
    }
  }
  else
  {
    v10 = 72LL;
    if ( forIssuer )
      v10 = 48LL;
    SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
                       *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData
                                                                                                 + v10),
                       *(const MethodInfo **)&nameType);
    if ( SimpleNameInfo )
      return SimpleNameInfo;
    if ( forIssuer )
      v12 = (System_String_o **)&StringLiteral_1438/*"2.5.29.18"*/;
    else
      v12 = (System_String_o **)&StringLiteral_1437/*"2.5.29.17"*/;
    v8 = *v12;
    v50 = 0LL;
LABEL_16:
    v51 = (System_Nullable_Int32Enum__o)&v50;
    v9 = 1;
LABEL_18:
    System_Nullable_Int32Enum____ctor(
      v51,
      v9,
      (const MethodInfo_361A67C *)Method_System_Nullable_GeneralNameType___ctor__);
LABEL_19:
    v13 = 0LL;
  }
  if ( (_BYTE)v50 )
  {
    Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
    if ( !Extensions )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      Extensions,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    v49 = v48;
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v49,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
      if ( !v15 )
        break;
      current = v49.fields._current;
      if ( !v49.fields._current )
        sub_1B8880C(v15, v16);
      klass = v49.fields._current[1].klass;
      if ( !klass )
        sub_1B8880C(v15, v16);
      if ( System_String__op_Equality((System_String_o *)klass->_1.name, v8, 0LL) )
      {
        monitor = (System_Byte_array *)current[1].monitor;
        v52 = (System_Nullable_Int32Enum__o)&v50;
        Value = System_Nullable_Int32Enum___get_Value(
                  v52,
                  (const MethodInfo_361A694 *)Method_System_Nullable_GeneralNameType__get_Value__);
        SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(monitor, Value, v13, v21);
        if ( SimpleNameInfo )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v49,
            (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
          return SimpleNameInfo;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v49,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
  }
  if ( nameType == 1 )
  {
    v22 = &StringLiteral_1323/*"1.2.840.113549.1.9.1"*/;
  }
  else
  {
    if ( nameType != 3 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v22 = &StringLiteral_1452/*"2.5.4.3"*/;
  }
  v23 = (System_String_o *)*v22;
  if ( !*v22 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v24 = 72LL;
  if ( forIssuer )
    v24 = 48LL;
  Extensions = (System_Collections_Generic_List_object__o *)Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
                                                              *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData + v24),
                                                              *(const MethodInfo **)&nameType);
  if ( !Extensions )
LABEL_73:
    sub_1B8880C(Extensions, *(_QWORD *)&nameType);
  v25 = Extensions->klass;
  v26 = Extensions;
  v27 = *(unsigned __int16 *)(&Extensions->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Extensions->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v25->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_42;
    }
    v29 = (__int64)(&v25->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_42:
    v29 = sub_1BDA590(Extensions, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  if ( !v31 )
    sub_1B8880C(0LL, v30);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_50;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_50:
      v35 = sub_1BDA590(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v38 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_57;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_57:
      v39 = sub_1BDA590(v31, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0LL);
    }
    v40 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
    SimpleNameInfo = v41;
    if ( System_String__op_Equality(v40, v23, 0LL) )
    {
      v42 = 16;
      goto LABEL_62;
    }
  }
  SimpleNameInfo = 0LL;
  v42 = 20;
LABEL_62:
  v43 = *(_QWORD *)v31;
  v44 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
    {
      --v44;
      v45 += 4;
      if ( !v44 )
        goto LABEL_66;
    }
    v46 = v43 + 16LL * *v45 + 312;
  }
  else
  {
LABEL_66:
    v46 = sub_1BDA590(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v46)(v31, *(_QWORD *)(v46 + 8));
  if ( v42 == 20 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return SimpleNameInfo;
}


System_String_o *__fastcall Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *ReverseRdns; // x0
  __int64 v4; // x1
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c *klass; // x8
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *v6; // x19
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
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

  if ( (byte_4A64BBA & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1B885B0(&StringLiteral_1323/*"1.2.840.113549.1.9.1"*/);
    sub_1B885B0(&StringLiteral_1452/*"2.5.4.3"*/);
    sub_1B885B0(&StringLiteral_1445/*"2.5.4.11"*/);
    sub_1B885B0(&StringLiteral_1444/*"2.5.4.10"*/);
    byte_4A64BBA = 1;
  }
  ReverseRdns = Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(name, method);
  if ( !ReverseRdns )
    sub_1B8880C(0LL, v4);
  klass = ReverseRdns->klass;
  v6 = ReverseRdns;
  v7 = *(unsigned __int16 *)(&ReverseRdns->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&ReverseRdns->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BDA590(
                 ReverseRdns,
                 System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo,
                 0LL);
  }
  v10 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *, _QWORD))p_method)(
          v6,
          *(_QWORD *)(p_method + 8));
  v12 = v10;
  v35 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
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
      sub_1B8880C(v10, v11);
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
      v20 = sub_1BDA590(v12, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v20)(v12, *(_QWORD *)(v20 + 8)) & 1) == 0 )
    {
      v16 = 0LL;
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
      v24 = sub_1BDA590(v12, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0LL);
    }
    v25 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v12, *(_QWORD *)(v24 + 8));
    v16 = v26;
    v27 = v25;
    if ( System_String__op_Equality(v25, (System_String_o *)StringLiteral_1452/*"2.5.4.3"*/, 0LL) )
      break;
    v10 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_1445/*"2.5.4.11"*/, 0LL);
    if ( (v10 & 1) == 0 )
    {
      v10 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_1444/*"2.5.4.10"*/, 0LL);
      if ( (v10 & 1) != 0 )
        goto LABEL_13;
      v10 = System_String__op_Equality(v27, (System_String_o *)StringLiteral_1323/*"1.2.840.113549.1.9.1"*/, 0LL);
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
    v33 = sub_1BDA590(v12, System_IDisposable_TypeInfo, 0LL);
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


System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A64BBC & 1) == 0 )
  {
    sub_1B885B0(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    byte_4A64BBC = 1;
  }
  v3 = sub_1B887FC(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21___ctor(
    (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 56) = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 56), (int32_t)name, v6, v7);
  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)v3;
}


void __fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21___ctor(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__MoveNext(
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
  System_Collections_Generic_Stack_T__o *rdnReaders_5__2; // x22
  Il2CppObject *v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o **p_rdnReader_5__3; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v17; // x22
  Il2CppObject *OidAsString; // x21
  const MethodInfo_3434EEC *v19; // x4
  unsigned int v20; // w8
  Il2CppObject *v21; // x2
  System_String_o *Utf8String; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  bool result; // w0
  struct System_Collections_Generic_KeyValuePair_string__string__o v26; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v27; // 0:x0.16

  v2 = this;
  if ( (byte_4A66A39 & 1) == 0 )
  {
    sub_1B885B0(&System_Security_Cryptography_DerSequenceReader_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Stack_DerSequenceReader__get_Count__);
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1B885B0(&System_Collections_Generic_Stack_DerSequenceReader__TypeInfo);
    byte_4A66A39 = 1;
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
              0LL) )
      {
        *p_rdnReader_5__3 = 0LL;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._rdnReader_5__3, 0, v15, v16);
        goto LABEL_33;
      }
      this = *p_rdnReader_5__3;
      if ( !*p_rdnReader_5__3 )
        goto LABEL_37;
      this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)System_Security_Cryptography_DerSequenceReader__ReadSequence(
                                                                                     (System_Security_Cryptography_DerSequenceReader_o *)this,
                                                                                     0LL);
      if ( !this )
        goto LABEL_37;
      v17 = this;
      OidAsString = (Il2CppObject *)System_Security_Cryptography_DerSequenceReader__ReadOidAsString(
                                      (System_Security_Cryptography_DerSequenceReader_o *)this,
                                      0LL);
      v20 = System_Security_Cryptography_DerSequenceReader__PeekTag(
              (System_Security_Cryptography_DerSequenceReader_o *)v17,
              0LL);
      v21 = 0LL;
      if ( v20 <= 0x13 )
      {
        if ( v20 == 12 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadUtf8String(
                         (System_Security_Cryptography_DerSequenceReader_o *)v17,
                         0LL);
          goto LABEL_29;
        }
        if ( v20 == 19 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadPrintableString(
                         (System_Security_Cryptography_DerSequenceReader_o *)v17,
                         0LL);
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
                           0LL);
            goto LABEL_29;
          case 0x16u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadIA5String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v17,
                           0LL);
            goto LABEL_29;
          case 0x1Eu:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadBMPString(
                           (System_Security_Cryptography_DerSequenceReader_o *)v17,
                           0LL);
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, 0, v23, v24);
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
    v6 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B887FC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
    System_Security_Cryptography_DerSequenceReader___ctor_68398624(v6, raw, 0LL);
    v7 = (System_Collections_Generic_Stack_T__o *)sub_1B887FC(System_Collections_Generic_Stack_DerSequenceReader__TypeInfo);
    System_Collections_Generic_Stack_object____ctor(
      v7,
      (const MethodInfo_3752A70 *)Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    v2->fields._rdnReaders_5__2 = (struct System_Collections_Generic_Stack_DerSequenceReader__o *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._rdnReaders_5__2, (int32_t)v7, v8, v9);
    if ( !v6 )
      goto LABEL_37;
    if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v6, 0LL) )
      goto LABEL_33;
    do
    {
      rdnReaders_5__2 = (System_Collections_Generic_Stack_T__o *)v2->fields._rdnReaders_5__2;
      this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)System_Security_Cryptography_DerSequenceReader__ReadSet(
                                                                                     v6,
                                                                                     0LL);
      if ( !rdnReaders_5__2 )
        goto LABEL_37;
      System_Collections_Generic_Stack_object___Push(
        rdnReaders_5__2,
        (Il2CppObject *)this,
        (const MethodInfo_3753098 *)Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    }
    while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v6, 0LL) );
LABEL_33:
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v2->fields._rdnReaders_5__2;
    if ( !this )
LABEL_37:
      sub_1B8880C(this, method);
    if ( SLODWORD(this->fields.__2__current.fields.key) > 0 )
    {
      v11 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_3753038 *)Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
      v2->fields._rdnReader_5__3 = (struct System_Security_Cryptography_DerSequenceReader_o *)v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v2->fields._rdnReader_5__3, (int32_t)v11, v12, v13);
      goto LABEL_13;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v6; // x20
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *_3__name; // x1

  if ( (byte_4A66A3B & 1) == 0 )
  {
    sub_1B885B0(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    byte_4A66A3B = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1B887FC(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__name = this->fields.__3__name;
  v6->fields.name = _3__name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.name, (int32_t)_3__name, v4, v5);
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o *)v6;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_KeyValuePair_string__string__o __fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  struct System_String_o *value; // x1
  struct System_String_o *key; // x0 OVERLAPPED
  System_Collections_Generic_KeyValuePair_string__string__o result; // 0:x0.16

  value = this->fields.__2__current.fields.value;
  key = this->fields.__2__current.fields.key;
  result.fields.value = value;
  result.fields.key = key;
  return result;
}


void __fastcall __noreturn Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_IEnumerator_Reset(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_IEnumerator_get_Current(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_KeyValuePair_string__string__o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4A66A3A & 1) == 0 )
  {
    sub_1B885B0(&System_Collections_Generic_KeyValuePair_string__string__TypeInfo);
    byte_4A66A3A = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(
                           System_Collections_Generic_KeyValuePair_string__string__TypeInfo,
                           &_2__current);
}


void __fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_IDisposable_Dispose(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks___ctor(
        Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Exception_o *__fastcall Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks__CreateMissingMetadataException(
        Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *this,
        System_Type_o *attributeType,
        const MethodInfo *method)
{
  System_Reflection_MissingMetadataException_o *v3; // x19

  if ( (byte_4A63056 & 1) == 0 )
  {
    sub_1B885B0(&System_Reflection_MissingMetadataException_TypeInfo);
    byte_4A63056 = 1;
  }
  v3 = (System_Reflection_MissingMetadataException_o *)sub_1B887FC(System_Reflection_MissingMetadataException_TypeInfo);
  System_Reflection_MissingMetadataException___ctor(v3, 0LL);
  return (System_Exception_o *)v3;
}


void __fastcall Internal_Runtime_Augments_RuntimeAugments___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A63055 & 1) == 0 )
  {
    sub_1B885B0(&Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
    sub_1B885B0(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    byte_4A63055 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
  System_Object___ctor(v1, 0LL);
  Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields->s_reflectionExecutionDomainCallbacks = (struct Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall __noreturn Internal_Runtime_Augments_RuntimeAugments__ReportUnhandledException(
        System_Exception_o *exception,
        const MethodInfo *method)
{
  System_Runtime_ExceptionServices_ExceptionDispatchInfo_o *v2; // x0
  __int64 v3; // x1

  v2 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(exception, 0LL);
  if ( v2 )
    System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(v2, 0LL);
  sub_1B8880C(0LL, v3);
}


Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *__fastcall Internal_Runtime_Augments_RuntimeAugments__get_Callbacks(
        const MethodInfo *method)
{
  Internal_Runtime_Augments_RuntimeAugments_c *v1; // x0

  if ( (byte_4A63054 & 1) == 0 )
  {
    sub_1B885B0(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    byte_4A63054 = 1;
  }
  v1 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  if ( !Internal_Runtime_Augments_RuntimeAugments_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    v1 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  }
  return v1->static_fields->s_reflectionExecutionDomainCallbacks;
}


void __fastcall Internal_Runtime_Augments_RuntimeThread___cctor(const MethodInfo *method)
{
  if ( (byte_4A63058 & 1) == 0 )
  {
    sub_1B885B0(&Internal_Runtime_Augments_RuntimeThread_TypeInfo);
    byte_4A63058 = 1;
  }
  Internal_Runtime_Augments_RuntimeThread_TypeInfo->static_fields->OptimalMaxSpinWaitsPerSpinIteration = 64;
}


void __fastcall Internal_Runtime_Augments_RuntimeThread___ctor(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        System_Threading_Thread_o *t,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.thread = t;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)t, v5, v6);
}


Internal_Runtime_Augments_RuntimeThread_o *__fastcall Internal_Runtime_Augments_RuntimeThread__Create(
        System_Threading_ParameterizedThreadStart_o *start,
        int32_t maxStackSize,
        const MethodInfo *method)
{
  System_Threading_Thread_o *v5; // x21
  __int64 v6; // x19
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A63057 & 1) == 0 )
  {
    sub_1B885B0(&Internal_Runtime_Augments_RuntimeThread_TypeInfo);
    sub_1B885B0(&System_Threading_Thread_TypeInfo);
    byte_4A63057 = 1;
  }
  v5 = (System_Threading_Thread_o *)sub_1B887FC(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_62968964(v5, start, maxStackSize, 0LL);
  v6 = sub_1B887FC(Internal_Runtime_Augments_RuntimeThread_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  *(_QWORD *)(v6 + 16) = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 16), (int32_t)v5, v7, v8);
  return (Internal_Runtime_Augments_RuntimeThread_o *)v6;
}


int32_t __fastcall Internal_Runtime_Augments_RuntimeThread__GetCurrentProcessorId(const MethodInfo *method)
{
  return 1;
}


void __fastcall Internal_Runtime_Augments_RuntimeThread__Sleep(int32_t millisecondsTimeout, const MethodInfo *method)
{
  System_Threading_Thread__Sleep(millisecondsTimeout, 0LL);
}


bool __fastcall Internal_Runtime_Augments_RuntimeThread__SpinWait(int32_t iterations, const MethodInfo *method)
{
  System_Threading_Thread__SpinWait(iterations, 0LL);
  return 1;
}


void __fastcall Internal_Runtime_Augments_RuntimeThread__Start(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        Il2CppObject *state,
        const MethodInfo *method)
{
  System_Threading_Thread_o *thread; // x0

  thread = this->fields.thread;
  if ( !thread )
    sub_1B8880C(0LL, state);
  System_Threading_Thread__Start_62969420(thread, state, 0LL);
}


bool __fastcall Internal_Runtime_Augments_RuntimeThread__Yield(const MethodInfo *method)
{
  return System_Threading_Thread__Yield(0LL);
}


void __fastcall Internal_Runtime_Augments_RuntimeThread__set_IsBackground(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Threading_Thread_o *thread; // x0

  thread = this->fields.thread;
  if ( !thread )
    sub_1B8880C(0LL, value);
  System_Threading_Thread__set_IsBackground(thread, value, 0LL);
}


void __fastcall Internal_Threading_Tasks_Tracing_TaskTrace__TaskScheduled(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        int32_t CreatingTaskID,
        int32_t TaskCreationOptions,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A63053 & 1) == 0 )
  {
    sub_1B885B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4A63053 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    ((void (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, Il2CppClass *))s_callbacks->klass[1]._1.castClass)(
      s_callbacks,
      (unsigned int)OriginatingTaskSchedulerID,
      (unsigned int)OriginatingTaskID,
      (unsigned int)TaskID,
      (unsigned int)CreatingTaskID,
      (unsigned int)TaskCreationOptions,
      s_callbacks->klass[1]._1.declaringType);
}


void __fastcall Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitBegin_Asynchronous(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A63050 & 1) == 0 )
  {
    sub_1B885B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4A63050 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    ((void (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, _QWORD, _QWORD, _QWORD, void *))s_callbacks->klass[1]._1.namespaze)(
      s_callbacks,
      (unsigned int)OriginatingTaskSchedulerID,
      (unsigned int)OriginatingTaskID,
      (unsigned int)TaskID,
      s_callbacks->klass[1]._1.byval_arg.data);
}


void __fastcall Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitBegin_Synchronous(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A63051 & 1) == 0 )
  {
    sub_1B885B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4A63051 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    (*(void (__fastcall **)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, _QWORD, _QWORD, _QWORD, void *))&s_callbacks->klass[1]._1.byval_arg.bits)(
      s_callbacks,
      (unsigned int)OriginatingTaskSchedulerID,
      (unsigned int)OriginatingTaskID,
      (unsigned int)TaskID,
      s_callbacks->klass[1]._1.this_arg.data);
}


void __fastcall Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitEnd(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A63052 & 1) == 0 )
  {
    sub_1B885B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4A63052 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    (*(void (__fastcall **)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, _QWORD, _QWORD, _QWORD, Il2CppClass *))&s_callbacks->klass[1]._1.this_arg.bits)(
      s_callbacks,
      (unsigned int)OriginatingTaskSchedulerID,
      (unsigned int)OriginatingTaskID,
      (unsigned int)TaskID,
      s_callbacks->klass[1]._1.element_class);
}


bool __fastcall Internal_Threading_Tasks_Tracing_TaskTrace__get_Enabled(const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A6304F & 1) == 0 )
  {
    sub_1B885B0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo);
    byte_4A6304F = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    LOBYTE(s_callbacks) = ((__int64 (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, const char *))s_callbacks->klass[1]._1.gc_desc)(
                            s_callbacks,
                            s_callbacks->klass[1]._1.name);
  return (char)s_callbacks;
}