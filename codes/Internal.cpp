System_Byte_array *__fastcall Internal_Cryptography_Helpers__CloneByteArray(
        System_Byte_array *src,
        const MethodInfo *method)
{
  System_Byte_array *result; // x0
  System_Byte_array *v4; // x19

  if ( (byte_4A06410 & 1) == 0 )
  {
    sub_1B64870(&byte___TypeInfo, method);
    byte_4A06410 = 1;
  }
  if ( !src )
    return 0LL;
  result = (System_Byte_array *)System_Array__Clone((System_Array_o *)src, 0LL);
  if ( result )
  {
    v4 = result;
    result = (System_Byte_array *)sub_1B649AC(result, byte___TypeInfo);
    if ( !result )
    {
      sub_1B64D8C(v4);
      return 0LL;
    }
  }
  return result;
}


System_Byte_array *__fastcall Internal_Cryptography_Helpers__GenerateRandom(int32_t count, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Byte_array *v4; // x21
  System_Security_Cryptography_RandomNumberGenerator_o *v5; // x0
  __int64 v6; // x1
  System_Security_Cryptography_RandomNumberGenerator_o *v7; // x19
  System_Security_Cryptography_RandomNumberGenerator_c *klass; // x8
  __int64 v9; // x9
  int *p_offset; // x10
  __int64 v11; // x0

  if ( (byte_4A06411 & 1) == 0 )
  {
    sub_1B64870(&byte___TypeInfo, method);
    sub_1B64870(&System_IDisposable_TypeInfo, v3);
    byte_4A06411 = 1;
  }
  v4 = (System_Byte_array *)sub_1B64918(byte___TypeInfo, (unsigned int)count);
  v5 = System_Security_Cryptography_RandomNumberGenerator__Create(0LL);
  v7 = v5;
  if ( !v5 )
    sub_1B64ACC(0LL, v6);
  ((void (__fastcall *)(System_Security_Cryptography_RandomNumberGenerator_o *, System_Byte_array *, Il2CppMethodPointer))v5->klass->vtable._6_unknown.method)(
    v5,
    v4,
    v5->klass->vtable._7_GetBytes.methodPtr);
  klass = v7->klass;
  v9 = *(unsigned __int16 *)(&v7->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v7->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v9;
      p_offset += 4;
      if ( !v9 )
        goto LABEL_8;
    }
    v11 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v11 = sub_1BB6850(v7, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RandomNumberGenerator_o *, _QWORD))v11)(v7, *(_QWORD *)(v11 + 8));
  return v4;
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
  if ( (byte_4A06412 & 1) == 0 )
  {
    bytes = (System_Char_array *)sub_1B64870(&char___TypeInfo, method);
    byte_4A06412 = 1;
  }
  if ( !v2 )
    goto LABEL_19;
  bytes = (System_Char_array *)sub_1B64918(char___TypeInfo, 2 * v2->max_length);
  if ( (int)*(_QWORD *)&v2->max_length >= 1 )
  {
    v3 = (unsigned int)*(_QWORD *)&v2->max_length;
    v4 = 0LL;
    v5 = 0;
    while ( 1 )
    {
      if ( v4 >= v3 )
LABEL_18:
        sub_1B64AD4(bytes, method);
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
    sub_1B64ACC(bytes, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall Internal_Cryptography_Helpers__WriteInt(
        uint32_t i,
        System_Byte_array *arr,
        int32_t offset,
        const MethodInfo *method)
{
  if ( !arr )
    sub_1B64ACC(i, 0LL);
  if ( arr->max_length <= offset
    || (arr->m_Items[offset + 4] = HIBYTE(i), offset + 1 >= arr->max_length)
    || (arr->m_Items[offset + 5] = BYTE2(i), offset + 2 >= arr->max_length)
    || (arr->m_Items[offset + 6] = BYTE1(i), offset + 3 >= arr->max_length) )
  {
    sub_1B64AD4(*(_QWORD *)&i, arr);
  }
  arr->m_Items[offset + 7] = i;
}


void __fastcall Internal_Cryptography_OidLookup___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x1
  __int64 v119; // x1
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  __int64 v124; // x1
  __int64 v125; // x1
  __int64 v126; // x1
  __int64 v127; // x1
  __int64 v128; // x1
  __int64 v129; // x1
  __int64 v130; // x1
  __int64 v131; // x1
  __int64 v132; // x1
  __int64 v133; // x1
  __int64 v134; // x1
  __int64 v135; // x1
  __int64 v136; // x1
  __int64 v137; // x1
  __int64 v138; // x1
  __int64 v139; // x1
  __int64 v140; // x1
  __int64 v141; // x1
  __int64 v142; // x1
  __int64 v143; // x1
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x1
  __int64 v147; // x1
  __int64 v148; // x1
  __int64 v149; // x1
  __int64 v150; // x1
  __int64 v151; // x1
  __int64 v152; // x1
  __int64 v153; // x1
  __int64 v154; // x1
  __int64 v155; // x1
  __int64 v156; // x1
  __int64 v157; // x1
  __int64 v158; // x1
  __int64 v159; // x1
  __int64 v160; // x1
  __int64 v161; // x1
  __int64 v162; // x1
  __int64 v163; // x1
  __int64 v164; // x1
  __int64 v165; // x1
  __int64 v166; // x1
  __int64 v167; // x1
  __int64 v168; // x1
  __int64 v169; // x1
  __int64 v170; // x1
  __int64 v171; // x1
  __int64 v172; // x1
  __int64 v173; // x1
  __int64 v174; // x1
  __int64 v175; // x1
  __int64 v176; // x1
  __int64 v177; // x1
  __int64 v178; // x1
  __int64 v179; // x1
  __int64 v180; // x1
  __int64 v181; // x1
  __int64 v182; // x1
  __int64 v183; // x1
  __int64 v184; // x1
  __int64 v185; // x1
  __int64 v186; // x1
  __int64 v187; // x1
  __int64 v188; // x1
  __int64 v189; // x1
  __int64 v190; // x1
  __int64 v191; // x1
  __int64 v192; // x1
  __int64 v193; // x1
  __int64 v194; // x1
  __int64 v195; // x1
  __int64 v196; // x1
  __int64 v197; // x1
  __int64 v198; // x1
  __int64 v199; // x1
  __int64 v200; // x1
  __int64 v201; // x1
  __int64 v202; // x1
  __int64 v203; // x1
  __int64 v204; // x1
  __int64 v205; // x1
  __int64 v206; // x1
  __int64 v207; // x1
  __int64 v208; // x1
  __int64 v209; // x1
  __int64 v210; // x1
  __int64 v211; // x1
  __int64 v212; // x1
  __int64 v213; // x1
  __int64 v214; // x1
  __int64 v215; // x1
  __int64 v216; // x1
  __int64 v217; // x1
  __int64 v218; // x1
  __int64 v219; // x1
  __int64 v220; // x1
  __int64 v221; // x1
  __int64 v222; // x1
  __int64 v223; // x1
  __int64 v224; // x1
  __int64 v225; // x1
  __int64 v226; // x1
  __int64 v227; // x1
  __int64 v228; // x1
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v229; // x19
  int32_t v230; // w2
  int32_t v231; // w3
  __int64 v232; // x1
  System_StringComparer_c *v233; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *s_ordinalIgnoreCase; // x19
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v235; // x20
  struct Internal_Cryptography_OidLookup_StaticFields *static_fields; // x0
  int32_t v237; // w2
  int32_t v238; // w3
  __int64 v239; // x1
  System_StringComparer_c *v240; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *v241; // x20
  System_Collections_Generic_Dictionary_object__object__o *v242; // x19
  __int64 v243; // x0
  __int64 v244; // x1
  struct Internal_Cryptography_OidLookup_StaticFields *v245; // x0
  int32_t v246; // w2
  int32_t v247; // w3
  Internal_Cryptography_OidLookup___c_c *v248; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *s_friendlyNameToOid; // x19
  Il2CppObject *v250; // x20
  System_Func_T__TResult__o *v251; // x21
  Il2CppObject *v252; // x20
  System_Func_T__TResult__o *v253; // x22
  System_Collections_Generic_Dictionary_TKey__TElement__o *v254; // x0
  struct Internal_Cryptography_OidLookup_StaticFields *v255; // x8
  int32_t v256; // w2
  int32_t v257; // w3
  System_Collections_Generic_Dictionary_object__object__o *v258; // x19
  struct Internal_Cryptography_OidLookup_StaticFields *v259; // x0
  int32_t v260; // w2
  int32_t v261; // w3

  if ( (byte_4A07F6C & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___75602400, v1);
    sub_1B64870(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__, v2);
    sub_1B64870(&System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo, v3);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v4);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__string___ctor___75624112, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v7);
    sub_1B64870(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___, v8);
    sub_1B64870(&System_Func_KeyValuePair_string__string___string__TypeInfo, v9);
    sub_1B64870(&Internal_Cryptography_OidLookup_TypeInfo, v10);
    sub_1B64870(&System_StringComparer_TypeInfo, v11);
    sub_1B64870(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__, v12);
    sub_1B64870(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__, v13);
    sub_1B64870(&Internal_Cryptography_OidLookup___c_TypeInfo, v14);
    sub_1B64870(&StringLiteral_17359/*"brainpoolP512t1"*/, v15);
    sub_1B64870(&StringLiteral_1289/*"1.2.840.10046.2.1"*/, v16);
    sub_1B64870(&StringLiteral_17347/*"brainpoolP160t1"*/, v17);
    sub_1B64870(&StringLiteral_3590/*"CN"*/, v18);
    sub_1B64870(&StringLiteral_1299/*"1.2.840.113549.1.1.7"*/, v19);
    sub_1B64870(&StringLiteral_1373/*"1.3.36.3.3.2.8.1.1.13"*/, v20);
    sub_1B64870(&StringLiteral_1313/*"1.2.840.113549.1.3.1"*/, v21);
    sub_1B64870(&StringLiteral_11364/*"S"*/, v22);
    sub_1B64870(&StringLiteral_1429/*"2.16.840.1.101.3.4.2.1"*/, v23);
    sub_1B64870(&StringLiteral_1456/*"2.5.4.42"*/, v24);
    sub_1B64870(&StringLiteral_1372/*"1.3.36.3.3.2.8.1.1.12"*/, v25);
    sub_1B64870(&StringLiteral_1361/*"1.3.14.3.2.27"*/, v26);
    sub_1B64870(&StringLiteral_1450/*"2.5.4.18"*/, v27);
    sub_1B64870(&StringLiteral_1342/*"1.3.132.0.10"*/, v28);
    sub_1B64870(&StringLiteral_18580/*"dnQualifier"*/, v29);
    sub_1B64870(&StringLiteral_1298/*"1.2.840.113549.1.1.5"*/, v30);
    sub_1B64870(&StringLiteral_1458/*"2.5.4.46"*/, v31);
    sub_1B64870(&StringLiteral_1279/*"1.2.840.10045.3.1.3"*/, v32);
    sub_1B64870(&StringLiteral_1341/*"1.2.840.113549.3.7"*/, v33);
    sub_1B64870(&StringLiteral_1423/*"2.16.840.1.101.3.4.1.22"*/, v34);
    sub_1B64870(&StringLiteral_1462/*"2.5.4.8"*/, v35);
    sub_1B64870(&StringLiteral_22979/*"secP160r2"*/, v36);
    sub_1B64870(&StringLiteral_21975/*"nistP192"*/, v37);
    sub_1B64870(&StringLiteral_1340/*"1.2.840.113549.3.4"*/, v38);
    sub_1B64870(&StringLiteral_18506/*"des"*/, v39);
    sub_1B64870(&StringLiteral_1461/*"2.5.4.7"*/, v40);
    sub_1B64870(&StringLiteral_1284/*"1.2.840.10045.4.1"*/, v41);
    sub_1B64870(&StringLiteral_5419/*"ECDH_STD_SHA256_KDF"*/, v42);
    sub_1B64870(&StringLiteral_21432/*"mosaicKMandUpdSig"*/, v43);
    sub_1B64870(&StringLiteral_1300/*"1.2.840.113549.1.1.8"*/, v44);
    sub_1B64870(&StringLiteral_21433/*"mosaicUpdatedSig"*/, v45);
    sub_1B64870(&StringLiteral_15635/*"X21Address"*/, v46);
    sub_1B64870(&StringLiteral_23146/*"sha256RSA"*/, v47);
    sub_1B64870(&StringLiteral_3589/*"CMSRC2wrap"*/, v48);
    sub_1B64870(&StringLiteral_17358/*"brainpoolP512r1"*/, v49);
    sub_1B64870(&StringLiteral_5418/*"ECDH_STD_SHA1_KDF"*/, v50);
    sub_1B64870(&StringLiteral_1290/*"1.2.840.113549.1.1.1"*/, v51);
    sub_1B64870(&StringLiteral_1457/*"2.5.4.43"*/, v52);
    sub_1B64870(&StringLiteral_1434/*"2.23.43.1.4.9"*/, v53);
    sub_1B64870(&StringLiteral_24722/*"x962P239v3"*/, v54);
    sub_1B64870(&StringLiteral_22978/*"secP160r1"*/, v55);
    sub_1B64870(&StringLiteral_1387/*"1.3.6.1.5.5.7.2.1"*/, v56);
    sub_1B64870(&StringLiteral_1449/*"2.5.4.17"*/, v57);
    sub_1B64870(&StringLiteral_1283/*"1.2.840.10045.3.1.7"*/, v58);
    sub_1B64870(&StringLiteral_10655/*"PostalCode"*/, v59);
    sub_1B64870(&StringLiteral_1348/*"1.3.132.0.35"*/, v60);
    sub_1B64870(&StringLiteral_1422/*"2.16.840.1.101.3.4.1.2"*/, v61);
    sub_1B64870(&StringLiteral_1287/*"1.2.840.10045.4.3.3"*/, v62);
    sub_1B64870(&StringLiteral_1277/*"1.2.840.10045.3.1.1"*/, v63);
    sub_1B64870(&StringLiteral_1378/*"1.3.36.3.3.2.8.1.1.5"*/, v64);
    sub_1B64870(&StringLiteral_6836/*"G"*/, v65);
    sub_1B64870(&StringLiteral_12115/*"SN"*/, v66);
    sub_1B64870(&StringLiteral_1282/*"1.2.840.10045.3.1.6"*/, v67);
    sub_1B64870(&StringLiteral_23152/*"sha512RSA"*/, v68);
    sub_1B64870(&StringLiteral_24721/*"x962P239v2"*/, v69);
    sub_1B64870(&StringLiteral_1338/*"1.2.840.113549.2.5"*/, v70);
    sub_1B64870(&StringLiteral_5409/*"ECC"*/, v71);
    sub_1B64870(&StringLiteral_1460/*"2.5.4.6"*/, v72);
    sub_1B64870(&StringLiteral_1324/*"1.2.840.113549.1.9.1"*/, v73);
    sub_1B64870(&StringLiteral_1376/*"1.3.36.3.3.2.8.1.1.3"*/, v74);
    sub_1B64870(&StringLiteral_21976/*"nistP224"*/, v75);
    sub_1B64870(&StringLiteral_1382/*"1.3.36.3.3.2.8.1.1.9"*/, v76);
    sub_1B64870(&StringLiteral_1336/*"1.2.840.113549.2.2"*/, v77);
    sub_1B64870(&StringLiteral_1353/*"1.3.133.16.840.63.0.2"*/, v78);
    sub_1B64870(&StringLiteral_1221/*"0.9.2342.19200300.100.1.25"*/, v79);
    sub_1B64870(&StringLiteral_1346/*"1.3.132.0.33"*/, v80);
    sub_1B64870(&StringLiteral_5403/*"E"*/, v81);
    sub_1B64870(&StringLiteral_23140/*"sha1"*/, v82);
    sub_1B64870(&StringLiteral_1286/*"1.2.840.10045.4.3.2"*/, v83);
    sub_1B64870(&StringLiteral_24718/*"x962P192v2"*/, v84);
    sub_1B64870(&StringLiteral_11083/*"RSA"*/, v85);
    sub_1B64870(&StringLiteral_17349/*"brainpoolP192t1"*/, v86);
    sub_1B64870(&StringLiteral_23148/*"sha384ECDSA"*/, v87);
    sub_1B64870(&StringLiteral_5045/*"DSA"*/, v88);
    sub_1B64870(&StringLiteral_4996/*"DH"*/, v89);
    sub_1B64870(&StringLiteral_1381/*"1.3.36.3.3.2.8.1.1.8"*/, v90);
    sub_1B64870(&StringLiteral_11480/*"SERIALNUMBER"*/, v91);
    sub_1B64870(&StringLiteral_3588/*"CMS3DESwrap"*/, v92);
    sub_1B64870(&StringLiteral_23142/*"sha1ECDSA"*/, v93);
    sub_1B64870(&StringLiteral_1452/*"2.5.4.24"*/, v94);
    sub_1B64870(&StringLiteral_23143/*"sha1RSA"*/, v95);
    sub_1B64870(&StringLiteral_1426/*"2.16.840.1.101.3.4.1.45"*/, v96);
    sub_1B64870(&StringLiteral_1274/*"1.2.840.10040.4.1"*/, v97);
    sub_1B64870(&StringLiteral_22980/*"secP192k1"*/, v98);
    sub_1B64870(&StringLiteral_1431/*"2.16.840.1.101.3.4.2.3"*/, v99);
    sub_1B64870(&StringLiteral_1377/*"1.3.36.3.3.2.8.1.1.4"*/, v100);
    sub_1B64870(&StringLiteral_1369/*"1.3.36.3.3.2.8.1.1.1"*/, v101);
    sub_1B64870(&StringLiteral_1292/*"1.2.840.113549.1.1.11"*/, v102);
    sub_1B64870(&StringLiteral_1425/*"2.16.840.1.101.3.4.1.42"*/, v103);
    sub_1B64870(&StringLiteral_17353/*"brainpoolP256t1"*/, v104);
    sub_1B64870(&StringLiteral_7246/*"I"*/, v105);
    sub_1B64870(&StringLiteral_11086/*"RSASSA-PSS"*/, v106);
    sub_1B64870(&StringLiteral_24646/*"wtls9"*/, v107);
    sub_1B64870(&StringLiteral_1288/*"1.2.840.10045.4.3.4"*/, v108);
    sub_1B64870(&StringLiteral_1327/*"1.2.840.113549.1.9.16.3.6"*/, v109);
    sub_1B64870(&StringLiteral_4974/*"DC"*/, v110);
    sub_1B64870(&StringLiteral_21286/*"md2"*/, v111);
    sub_1B64870(&StringLiteral_1419/*"2.16.840.1.101.2.1.1.19"*/, v112);
    sub_1B64870(&StringLiteral_1347/*"1.3.132.0.34"*/, v113);
    sub_1B64870(&StringLiteral_21289/*"md4RSA"*/, v114);
    sub_1B64870(&StringLiteral_1451/*"2.5.4.20"*/, v115);
    sub_1B64870(&StringLiteral_13173/*"T"*/, v116);
    sub_1B64870(&StringLiteral_11085/*"RSAES_OAEP"*/, v117);
    sub_1B64870(&StringLiteral_8189/*"L"*/, v118);
    sub_1B64870(&StringLiteral_17357/*"brainpoolP384t1"*/, v119);
    sub_1B64870(&StringLiteral_1355/*"1.3.14.3.2.13"*/, v120);
    sub_1B64870(&StringLiteral_24719/*"x962P192v3"*/, v121);
    sub_1B64870(&StringLiteral_1366/*"1.3.14.7.2.3.1"*/, v122);
    sub_1B64870(&StringLiteral_23149/*"sha384RSA"*/, v123);
    sub_1B64870(&StringLiteral_21287/*"md2RSA"*/, v124);
    sub_1B64870(&StringLiteral_23145/*"sha256ECDSA"*/, v125);
    sub_1B64870(&StringLiteral_23153/*"shaRSA"*/, v126);
    sub_1B64870(&StringLiteral_1448/*"2.5.4.13"*/, v127);
    sub_1B64870(&StringLiteral_23136/*"sha"*/, v128);
    sub_1B64870(&StringLiteral_21292/*"md5RSA"*/, v129);
    sub_1B64870(&StringLiteral_23144/*"sha256"*/, v130);
    sub_1B64870(&StringLiteral_22981/*"secP224k1"*/, v131);
    sub_1B64870(&StringLiteral_21290/*"md5"*/, v132);
    sub_1B64870(&StringLiteral_16635/*"aes192"*/, v133);
    sub_1B64870(&StringLiteral_1293/*"1.2.840.113549.1.1.12"*/, v134);
    sub_1B64870(&StringLiteral_10564/*"Phone"*/, v135);
    sub_1B64870(&StringLiteral_1280/*"1.2.840.10045.3.1.4"*/, v136);
    sub_1B64870(&StringLiteral_1492/*"3des"*/, v137);
    sub_1B64870(&StringLiteral_21345/*"mgf1"*/, v138);
    sub_1B64870(&StringLiteral_1453/*"2.5.4.3"*/, v139);
    sub_1B64870(&StringLiteral_1350/*"1.3.132.0.9"*/, v140);
    sub_1B64870(&StringLiteral_17351/*"brainpoolP224t1"*/, v141);
    sub_1B64870(&StringLiteral_5423/*"ECDSA_P384"*/, v142);
    sub_1B64870(&StringLiteral_1345/*"1.3.132.0.32"*/, v143);
    sub_1B64870(&StringLiteral_18603/*"dsaSHA1"*/, v144);
    sub_1B64870(&StringLiteral_1446/*"2.5.4.11"*/, v145);
    sub_1B64870(&StringLiteral_9564/*"O"*/, v146);
    sub_1B64870(&StringLiteral_1363/*"1.3.14.3.2.3"*/, v147);
    sub_1B64870(&StringLiteral_1339/*"1.2.840.113549.3.2"*/, v148);
    sub_1B64870(&StringLiteral_16633/*"aes128"*/, v149);
    sub_1B64870(&StringLiteral_1352/*"1.3.132.1.11.2"*/, v150);
    sub_1B64870(&StringLiteral_1364/*"1.3.14.3.2.4"*/, v151);
    sub_1B64870(&StringLiteral_10350/*"POBox"*/, v152);
    sub_1B64870(&StringLiteral_1337/*"1.2.840.113549.2.4"*/, v153);
    sub_1B64870(&StringLiteral_1351/*"1.3.132.1.11.1"*/, v154);
    sub_1B64870(&StringLiteral_1275/*"1.2.840.10040.4.3"*/, v155);
    sub_1B64870(&StringLiteral_1359/*"1.3.14.3.2.22"*/, v156);
    sub_1B64870(&StringLiteral_1371/*"1.3.36.3.3.2.8.1.1.11"*/, v157);
    sub_1B64870(&StringLiteral_1295/*"1.2.840.113549.1.1.2"*/, v158);
    sub_1B64870(&StringLiteral_11087/*"RSA_KEYX"*/, v159);
    sub_1B64870(&StringLiteral_1447/*"2.5.4.12"*/, v160);
    sub_1B64870(&StringLiteral_1420/*"2.16.840.1.101.2.1.1.20"*/, v161);
    sub_1B64870(&StringLiteral_23141/*"sha1DSA"*/, v162);
    sub_1B64870(&StringLiteral_23329/*"specifiedECDSA"*/, v163);
    sub_1B64870(&StringLiteral_1344/*"1.3.132.0.31"*/, v164);
    sub_1B64870(&StringLiteral_17352/*"brainpoolP256r1"*/, v165);
    sub_1B64870(&StringLiteral_1356/*"1.3.14.3.2.15"*/, v166);
    sub_1B64870(&StringLiteral_1349/*"1.3.132.0.8"*/, v167);
    sub_1B64870(&StringLiteral_1294/*"1.2.840.113549.1.1.13"*/, v168);
    sub_1B64870(&StringLiteral_17346/*"brainpoolP160r1"*/, v169);
    sub_1B64870(&StringLiteral_24720/*"x962P239v1"*/, v170);
    sub_1B64870(&StringLiteral_1360/*"1.3.14.3.2.26"*/, v171);
    sub_1B64870(&StringLiteral_1285/*"1.2.840.10045.4.3"*/, v172);
    sub_1B64870(&StringLiteral_9701/*"OU"*/, v173);
    sub_1B64870(&StringLiteral_1276/*"1.2.840.10045.2.1"*/, v174);
    sub_1B64870(&StringLiteral_1375/*"1.3.36.3.3.2.8.1.1.2"*/, v175);
    sub_1B64870(&StringLiteral_9265/*"NO_SIGN"*/, v176);
    sub_1B64870(&StringLiteral_22700/*"rc4"*/, v177);
    sub_1B64870(&StringLiteral_21288/*"md4"*/, v178);
    sub_1B64870(&StringLiteral_18720/*"ec192wapi"*/, v179);
    sub_1B64870(&StringLiteral_1328/*"1.2.840.113549.1.9.16.3.7"*/, v180);
    sub_1B64870(&StringLiteral_3361/*"C"*/, v181);
    sub_1B64870(&StringLiteral_1379/*"1.3.36.3.3.2.8.1.1.6"*/, v182);
    sub_1B64870(&StringLiteral_1281/*"1.2.840.10045.3.1.5"*/, v183);
    sub_1B64870(&StringLiteral_17356/*"brainpoolP384r1"*/, v184);
    sub_1B64870(&StringLiteral_17355/*"brainpoolP320t1"*/, v185);
    sub_1B64870(&StringLiteral_5498/*"ESDH"*/, v186);
    sub_1B64870(&StringLiteral_23147/*"sha384"*/, v187);
    sub_1B64870(&StringLiteral_1326/*"1.2.840.113549.1.9.16.3.5"*/, v188);
    sub_1B64870(&StringLiteral_5420/*"ECDH_STD_SHA384_KDF"*/, v189);
    sub_1B64870(&StringLiteral_1343/*"1.3.132.0.30"*/, v190);
    sub_1B64870(&StringLiteral_1358/*"1.3.14.3.2.2"*/, v191);
    sub_1B64870(&StringLiteral_1357/*"1.3.14.3.2.18"*/, v192);
    sub_1B64870(&StringLiteral_1297/*"1.2.840.113549.1.1.4"*/, v193);
    sub_1B64870(&StringLiteral_3908/*"CPS"*/, v194);
    sub_1B64870(&StringLiteral_1463/*"2.5.4.9"*/, v195);
    sub_1B64870(&StringLiteral_1278/*"1.2.840.10045.3.1.2"*/, v196);
    sub_1B64870(&StringLiteral_23150/*"sha512"*/, v197);
    sub_1B64870(&StringLiteral_1380/*"1.3.36.3.3.2.8.1.1.7"*/, v198);
    sub_1B64870(&StringLiteral_1427/*"2.16.840.1.101.3.4.1.5"*/, v199);
    sub_1B64870(&StringLiteral_16634/*"aes128wrap"*/, v200);
    sub_1B64870(&StringLiteral_1390/*"1.3.6.1.5.5.7.6.2"*/, v201);
    sub_1B64870(&StringLiteral_5424/*"ECDSA_P521"*/, v202);
    sub_1B64870(&StringLiteral_22977/*"secP160k1"*/, v203);
    sub_1B64870(&StringLiteral_1430/*"2.16.840.1.101.3.4.2.2"*/, v204);
    sub_1B64870(&StringLiteral_1365/*"1.3.14.3.2.7"*/, v205);
    sub_1B64870(&StringLiteral_16638/*"aes256wrap"*/, v206);
    sub_1B64870(&StringLiteral_1445/*"2.5.4.10"*/, v207);
    sub_1B64870(&StringLiteral_23151/*"sha512ECDSA"*/, v208);
    sub_1B64870(&StringLiteral_1354/*"1.3.14.3.2.12"*/, v209);
    sub_1B64870(&StringLiteral_1296/*"1.2.840.113549.1.1.3"*/, v210);
    sub_1B64870(&StringLiteral_22982/*"secP256k1"*/, v211);
    sub_1B64870(&StringLiteral_1374/*"1.3.36.3.3.2.8.1.1.14"*/, v212);
    sub_1B64870(&StringLiteral_5422/*"ECDSA_P256"*/, v213);
    sub_1B64870(&StringLiteral_1362/*"1.3.14.3.2.29"*/, v214);
    sub_1B64870(&StringLiteral_16636/*"aes192wrap"*/, v215);
    sub_1B64870(&StringLiteral_1273/*"1.2.156.11235.1.1.2.1"*/, v216);
    sub_1B64870(&StringLiteral_5254/*"Description"*/, v217);
    sub_1B64870(&StringLiteral_22699/*"rc2"*/, v218);
    sub_1B64870(&StringLiteral_17348/*"brainpoolP192r1"*/, v219);
    sub_1B64870(&StringLiteral_1459/*"2.5.4.5"*/, v220);
    sub_1B64870(&StringLiteral_16637/*"aes256"*/, v221);
    sub_1B64870(&StringLiteral_17350/*"brainpoolP224r1"*/, v222);
    sub_1B64870(&StringLiteral_17354/*"brainpoolP320r1"*/, v223);
    sub_1B64870(&StringLiteral_1370/*"1.3.36.3.3.2.8.1.1.10"*/, v224);
    sub_1B64870(&StringLiteral_1291/*"1.2.840.113549.1.1.10"*/, v225);
    sub_1B64870(&StringLiteral_1424/*"2.16.840.1.101.3.4.1.25"*/, v226);
    sub_1B64870(&StringLiteral_12259/*"STREET"*/, v227);
    sub_1B64870(&StringLiteral_1454/*"2.5.4.4"*/, v228);
    byte_4A07F6C = 1;
  }
  v229 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1B64ABC(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor(
    v229,
    (const MethodInfo_30B8CBC *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
  Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_lateBoundOidToFriendlyName = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v229;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)Internal_Cryptography_OidLookup_TypeInfo->static_fields,
    (int32_t)v229,
    v230,
    v231);
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
  if ( !byte_4A05FEB )
  {
    sub_1B64870(&System_StringComparer_TypeInfo, v232);
    byte_4A05FEB = 1;
  }
  v233 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v233 = System_StringComparer_TypeInfo;
  }
  s_ordinalIgnoreCase = (System_Collections_Generic_IEqualityComparer_TKey__o *)v233->static_fields->s_ordinalIgnoreCase;
  v235 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1B64ABC(System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor_51088684(
    v235,
    s_ordinalIgnoreCase,
    (const MethodInfo_30B8D2C *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___75602400);
  static_fields = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  static_fields->s_lateBoundFriendlyNameToOid = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v235;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&static_fields->s_lateBoundFriendlyNameToOid,
    (int32_t)v235,
    v237,
    v238);
  if ( !byte_4A05FEB )
  {
    sub_1B64870(&System_StringComparer_TypeInfo, v239);
    byte_4A05FEB = 1;
  }
  v240 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v240 = System_StringComparer_TypeInfo;
  }
  v241 = (System_Collections_Generic_IEqualityComparer_TKey__o *)v240->static_fields->s_ordinalIgnoreCase;
  v242 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_51883344(
    v242,
    v241,
    (const MethodInfo_317AD50 *)Method_System_Collections_Generic_Dictionary_string__string___ctor___75624112);
  if ( !v242 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_1492/*"3des"*/,
    (Il2CppObject *)StringLiteral_1341/*"1.2.840.113549.3.7"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_16633/*"aes128"*/,
    (Il2CppObject *)StringLiteral_1422/*"2.16.840.1.101.3.4.1.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_16634/*"aes128wrap"*/,
    (Il2CppObject *)StringLiteral_1427/*"2.16.840.1.101.3.4.1.5"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_16635/*"aes192"*/,
    (Il2CppObject *)StringLiteral_1423/*"2.16.840.1.101.3.4.1.22"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_16636/*"aes192wrap"*/,
    (Il2CppObject *)StringLiteral_1424/*"2.16.840.1.101.3.4.1.25"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_16637/*"aes256"*/,
    (Il2CppObject *)StringLiteral_1425/*"2.16.840.1.101.3.4.1.42"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_16638/*"aes256wrap"*/,
    (Il2CppObject *)StringLiteral_1426/*"2.16.840.1.101.3.4.1.45"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17346/*"brainpoolP160r1"*/,
    (Il2CppObject *)StringLiteral_1369/*"1.3.36.3.3.2.8.1.1.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17347/*"brainpoolP160t1"*/,
    (Il2CppObject *)StringLiteral_1375/*"1.3.36.3.3.2.8.1.1.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17348/*"brainpoolP192r1"*/,
    (Il2CppObject *)StringLiteral_1376/*"1.3.36.3.3.2.8.1.1.3"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17349/*"brainpoolP192t1"*/,
    (Il2CppObject *)StringLiteral_1377/*"1.3.36.3.3.2.8.1.1.4"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17350/*"brainpoolP224r1"*/,
    (Il2CppObject *)StringLiteral_1378/*"1.3.36.3.3.2.8.1.1.5"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17351/*"brainpoolP224t1"*/,
    (Il2CppObject *)StringLiteral_1379/*"1.3.36.3.3.2.8.1.1.6"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17352/*"brainpoolP256r1"*/,
    (Il2CppObject *)StringLiteral_1380/*"1.3.36.3.3.2.8.1.1.7"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17353/*"brainpoolP256t1"*/,
    (Il2CppObject *)StringLiteral_1381/*"1.3.36.3.3.2.8.1.1.8"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17354/*"brainpoolP320r1"*/,
    (Il2CppObject *)StringLiteral_1382/*"1.3.36.3.3.2.8.1.1.9"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17355/*"brainpoolP320t1"*/,
    (Il2CppObject *)StringLiteral_1370/*"1.3.36.3.3.2.8.1.1.10"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17356/*"brainpoolP384r1"*/,
    (Il2CppObject *)StringLiteral_1371/*"1.3.36.3.3.2.8.1.1.11"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17357/*"brainpoolP384t1"*/,
    (Il2CppObject *)StringLiteral_1372/*"1.3.36.3.3.2.8.1.1.12"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17358/*"brainpoolP512r1"*/,
    (Il2CppObject *)StringLiteral_1373/*"1.3.36.3.3.2.8.1.1.13"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_17359/*"brainpoolP512t1"*/,
    (Il2CppObject *)StringLiteral_1374/*"1.3.36.3.3.2.8.1.1.14"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_3361/*"C"*/,
    (Il2CppObject *)StringLiteral_1460/*"2.5.4.6"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_3588/*"CMS3DESwrap"*/,
    (Il2CppObject *)StringLiteral_1327/*"1.2.840.113549.1.9.16.3.6"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_3589/*"CMSRC2wrap"*/,
    (Il2CppObject *)StringLiteral_1328/*"1.2.840.113549.1.9.16.3.7"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_3590/*"CN"*/,
    (Il2CppObject *)StringLiteral_1453/*"2.5.4.3"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_3908/*"CPS"*/,
    (Il2CppObject *)StringLiteral_1387/*"1.3.6.1.5.5.7.2.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_4974/*"DC"*/,
    (Il2CppObject *)StringLiteral_1221/*"0.9.2342.19200300.100.1.25"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_18506/*"des"*/,
    (Il2CppObject *)StringLiteral_1365/*"1.3.14.3.2.7"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5254/*"Description"*/,
    (Il2CppObject *)StringLiteral_1448/*"2.5.4.13"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_4996/*"DH"*/,
    (Il2CppObject *)StringLiteral_1289/*"1.2.840.10046.2.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_18580/*"dnQualifier"*/,
    (Il2CppObject *)StringLiteral_1458/*"2.5.4.46"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5045/*"DSA"*/,
    (Il2CppObject *)StringLiteral_1274/*"1.2.840.10040.4.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_18603/*"dsaSHA1"*/,
    (Il2CppObject *)StringLiteral_1361/*"1.3.14.3.2.27"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5403/*"E"*/,
    (Il2CppObject *)StringLiteral_1324/*"1.2.840.113549.1.9.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_18720/*"ec192wapi"*/,
    (Il2CppObject *)StringLiteral_1273/*"1.2.156.11235.1.1.2.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5409/*"ECC"*/,
    (Il2CppObject *)StringLiteral_1276/*"1.2.840.10045.2.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5418/*"ECDH_STD_SHA1_KDF"*/,
    (Il2CppObject *)StringLiteral_1353/*"1.3.133.16.840.63.0.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5419/*"ECDH_STD_SHA256_KDF"*/,
    (Il2CppObject *)StringLiteral_1351/*"1.3.132.1.11.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5420/*"ECDH_STD_SHA384_KDF"*/,
    (Il2CppObject *)StringLiteral_1352/*"1.3.132.1.11.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5422/*"ECDSA_P256"*/,
    (Il2CppObject *)StringLiteral_1283/*"1.2.840.10045.3.1.7"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5423/*"ECDSA_P384"*/,
    (Il2CppObject *)StringLiteral_1347/*"1.3.132.0.34"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5424/*"ECDSA_P521"*/,
    (Il2CppObject *)StringLiteral_1348/*"1.3.132.0.35"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_5498/*"ESDH"*/,
    (Il2CppObject *)StringLiteral_1326/*"1.2.840.113549.1.9.16.3.5"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_6836/*"G"*/,
    (Il2CppObject *)StringLiteral_1456/*"2.5.4.42"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_7246/*"I"*/,
    (Il2CppObject *)StringLiteral_1457/*"2.5.4.43"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_8189/*"L"*/,
    (Il2CppObject *)StringLiteral_1461/*"2.5.4.7"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21286/*"md2"*/,
    (Il2CppObject *)StringLiteral_1336/*"1.2.840.113549.2.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21287/*"md2RSA"*/,
    (Il2CppObject *)StringLiteral_1295/*"1.2.840.113549.1.1.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21288/*"md4"*/,
    (Il2CppObject *)StringLiteral_1337/*"1.2.840.113549.2.4"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21289/*"md4RSA"*/,
    (Il2CppObject *)StringLiteral_1296/*"1.2.840.113549.1.1.3"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21290/*"md5"*/,
    (Il2CppObject *)StringLiteral_1338/*"1.2.840.113549.2.5"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21292/*"md5RSA"*/,
    (Il2CppObject *)StringLiteral_1297/*"1.2.840.113549.1.1.4"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21345/*"mgf1"*/,
    (Il2CppObject *)StringLiteral_1300/*"1.2.840.113549.1.1.8"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21432/*"mosaicKMandUpdSig"*/,
    (Il2CppObject *)StringLiteral_1420/*"2.16.840.1.101.2.1.1.20"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21433/*"mosaicUpdatedSig"*/,
    (Il2CppObject *)StringLiteral_1419/*"2.16.840.1.101.2.1.1.19"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21975/*"nistP192"*/,
    (Il2CppObject *)StringLiteral_1277/*"1.2.840.10045.3.1.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_21976/*"nistP224"*/,
    (Il2CppObject *)StringLiteral_1346/*"1.3.132.0.33"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_9265/*"NO_SIGN"*/,
    (Il2CppObject *)StringLiteral_1390/*"1.3.6.1.5.5.7.6.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_9564/*"O"*/,
    (Il2CppObject *)StringLiteral_1445/*"2.5.4.10"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_9701/*"OU"*/,
    (Il2CppObject *)StringLiteral_1446/*"2.5.4.11"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_10564/*"Phone"*/,
    (Il2CppObject *)StringLiteral_1451/*"2.5.4.20"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_10350/*"POBox"*/,
    (Il2CppObject *)StringLiteral_1450/*"2.5.4.18"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_10655/*"PostalCode"*/,
    (Il2CppObject *)StringLiteral_1449/*"2.5.4.17"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_22699/*"rc2"*/,
    (Il2CppObject *)StringLiteral_1339/*"1.2.840.113549.3.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_22700/*"rc4"*/,
    (Il2CppObject *)StringLiteral_1340/*"1.2.840.113549.3.4"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_11083/*"RSA"*/,
    (Il2CppObject *)StringLiteral_1290/*"1.2.840.113549.1.1.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_11085/*"RSAES_OAEP"*/,
    (Il2CppObject *)StringLiteral_1299/*"1.2.840.113549.1.1.7"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_11086/*"RSASSA-PSS"*/,
    (Il2CppObject *)StringLiteral_1291/*"1.2.840.113549.1.1.10"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_11364/*"S"*/,
    (Il2CppObject *)StringLiteral_1462/*"2.5.4.8"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_22977/*"secP160k1"*/,
    (Il2CppObject *)StringLiteral_1350/*"1.3.132.0.9"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_22978/*"secP160r1"*/,
    (Il2CppObject *)StringLiteral_1349/*"1.3.132.0.8"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_22979/*"secP160r2"*/,
    (Il2CppObject *)StringLiteral_1343/*"1.3.132.0.30"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_22980/*"secP192k1"*/,
    (Il2CppObject *)StringLiteral_1344/*"1.3.132.0.31"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_22981/*"secP224k1"*/,
    (Il2CppObject *)StringLiteral_1345/*"1.3.132.0.32"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_22982/*"secP256k1"*/,
    (Il2CppObject *)StringLiteral_1342/*"1.3.132.0.10"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_11480/*"SERIALNUMBER"*/,
    (Il2CppObject *)StringLiteral_1459/*"2.5.4.5"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23140/*"sha1"*/,
    (Il2CppObject *)StringLiteral_1360/*"1.3.14.3.2.26"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23141/*"sha1DSA"*/,
    (Il2CppObject *)StringLiteral_1275/*"1.2.840.10040.4.3"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23142/*"sha1ECDSA"*/,
    (Il2CppObject *)StringLiteral_1284/*"1.2.840.10045.4.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23143/*"sha1RSA"*/,
    (Il2CppObject *)StringLiteral_1298/*"1.2.840.113549.1.1.5"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23144/*"sha256"*/,
    (Il2CppObject *)StringLiteral_1429/*"2.16.840.1.101.3.4.2.1"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23145/*"sha256ECDSA"*/,
    (Il2CppObject *)StringLiteral_1286/*"1.2.840.10045.4.3.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23146/*"sha256RSA"*/,
    (Il2CppObject *)StringLiteral_1292/*"1.2.840.113549.1.1.11"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23147/*"sha384"*/,
    (Il2CppObject *)StringLiteral_1430/*"2.16.840.1.101.3.4.2.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23148/*"sha384ECDSA"*/,
    (Il2CppObject *)StringLiteral_1287/*"1.2.840.10045.4.3.3"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23149/*"sha384RSA"*/,
    (Il2CppObject *)StringLiteral_1293/*"1.2.840.113549.1.1.12"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23150/*"sha512"*/,
    (Il2CppObject *)StringLiteral_1431/*"2.16.840.1.101.3.4.2.3"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23151/*"sha512ECDSA"*/,
    (Il2CppObject *)StringLiteral_1288/*"1.2.840.10045.4.3.4"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23152/*"sha512RSA"*/,
    (Il2CppObject *)StringLiteral_1294/*"1.2.840.113549.1.1.13"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_12115/*"SN"*/,
    (Il2CppObject *)StringLiteral_1454/*"2.5.4.4"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_23329/*"specifiedECDSA"*/,
    (Il2CppObject *)StringLiteral_1285/*"1.2.840.10045.4.3"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_12259/*"STREET"*/,
    (Il2CppObject *)StringLiteral_1463/*"2.5.4.9"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_13173/*"T"*/,
    (Il2CppObject *)StringLiteral_1447/*"2.5.4.12"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_24646/*"wtls9"*/,
    (Il2CppObject *)StringLiteral_1434/*"2.23.43.1.4.9"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_15635/*"X21Address"*/,
    (Il2CppObject *)StringLiteral_1452/*"2.5.4.24"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_24718/*"x962P192v2"*/,
    (Il2CppObject *)StringLiteral_1278/*"1.2.840.10045.3.1.2"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_24719/*"x962P192v3"*/,
    (Il2CppObject *)StringLiteral_1279/*"1.2.840.10045.3.1.3"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_24720/*"x962P239v1"*/,
    (Il2CppObject *)StringLiteral_1280/*"1.2.840.10045.3.1.4"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_24721/*"x962P239v2"*/,
    (Il2CppObject *)StringLiteral_1281/*"1.2.840.10045.3.1.5"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v242,
    (Il2CppObject *)StringLiteral_24722/*"x962P239v3"*/,
    (Il2CppObject *)StringLiteral_1282/*"1.2.840.10045.3.1.6"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v245 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v245->s_friendlyNameToOid = (struct System_Collections_Generic_Dictionary_string__string__o *)v242;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v245->s_friendlyNameToOid, (int32_t)v242, v246, v247);
  v248 = Internal_Cryptography_OidLookup___c_TypeInfo;
  s_friendlyNameToOid = Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_friendlyNameToOid;
  if ( !Internal_Cryptography_OidLookup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup___c_TypeInfo);
    v248 = Internal_Cryptography_OidLookup___c_TypeInfo;
  }
  v250 = (Il2CppObject *)v248->static_fields->__9;
  v251 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v251,
    v250,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__,
    0LL);
  v252 = (Il2CppObject *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9;
  v253 = (System_Func_T__TResult__o *)sub_1B64ABC(System_Func_KeyValuePair_string__string___string__TypeInfo);
  System_Func_KeyValuePair_object__object___object____ctor(
    v253,
    v252,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__,
    0LL);
  v254 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)s_friendlyNameToOid,
           (System_Func_TSource__TKey__o *)v251,
           (System_Func_TSource__TElement__o *)v253,
           (const MethodInfo_2E73BD4 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
  v255 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v255->s_oidToFriendlyName = (struct System_Collections_Generic_Dictionary_string__string__o *)v254;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v255->s_oidToFriendlyName, (int32_t)v254, v256, v257);
  v258 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64ABC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v258,
    (const MethodInfo_317AD24 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v258 )
LABEL_18:
    sub_1B64ACC(v243, v244);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1313/*"1.2.840.113549.1.3.1"*/,
    (Il2CppObject *)StringLiteral_4996/*"DH"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1354/*"1.3.14.3.2.12"*/,
    (Il2CppObject *)StringLiteral_5045/*"DSA"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1355/*"1.3.14.3.2.13"*/,
    (Il2CppObject *)StringLiteral_23141/*"sha1DSA"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1356/*"1.3.14.3.2.15"*/,
    (Il2CppObject *)StringLiteral_23153/*"shaRSA"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1357/*"1.3.14.3.2.18"*/,
    (Il2CppObject *)StringLiteral_23136/*"sha"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1358/*"1.3.14.3.2.2"*/,
    (Il2CppObject *)StringLiteral_21289/*"md4RSA"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1359/*"1.3.14.3.2.22"*/,
    (Il2CppObject *)StringLiteral_11087/*"RSA_KEYX"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1362/*"1.3.14.3.2.29"*/,
    (Il2CppObject *)StringLiteral_23143/*"sha1RSA"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1363/*"1.3.14.3.2.3"*/,
    (Il2CppObject *)StringLiteral_21292/*"md5RSA"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1364/*"1.3.14.3.2.4"*/,
    (Il2CppObject *)StringLiteral_21289/*"md4RSA"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v258,
    (Il2CppObject *)StringLiteral_1366/*"1.3.14.7.2.3.1"*/,
    (Il2CppObject *)StringLiteral_21287/*"md2RSA"*/,
    (const MethodInfo_317B6D4 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v259 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v259->s_compatOids = (struct System_Collections_Generic_Dictionary_string__string__o *)v258;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v259->s_compatOids, (int32_t)v258, v260, v261);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Internal_Cryptography_OidLookup__NativeFriendlyNameToOid(
        System_String_o *friendlyName,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  uint32_t v26; // w0
  bool v27; // w0
  __int64 *v28; // x8
  System_String_o *v30; // x8

  if ( (byte_4A07F6B & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_6306/*"Extended Key Usage"*/, *(_QWORD *)&oidGroup);
    sub_1B64870(&StringLiteral_1438/*"2.5.29.17"*/, v5);
    sub_1B64870(&StringLiteral_1333/*"1.2.840.113549.1.9.4"*/, v6);
    sub_1B64870(&StringLiteral_8163/*"Key Usage"*/, v7);
    sub_1B64870(&StringLiteral_1334/*"1.2.840.113549.1.9.5"*/, v8);
    sub_1B64870(&StringLiteral_8958/*"Message Digest"*/, v9);
    sub_1B64870(&StringLiteral_1332/*"1.2.840.113549.1.9.3"*/, v10);
    sub_1B64870(&StringLiteral_1433/*"2.16.840.1.113730.1.1"*/, v11);
    sub_1B64870(&StringLiteral_12711/*"Signing Time"*/, v12);
    sub_1B64870(&StringLiteral_1444/*"2.5.29.37"*/, v13);
    sub_1B64870(&StringLiteral_1436/*"2.5.29.14"*/, v14);
    sub_1B64870(&StringLiteral_1325/*"1.2.840.113549.1.9.16.3.3"*/, v15);
    sub_1B64870(&StringLiteral_10334/*"PKCS 7 Data"*/, v16);
    sub_1B64870(&StringLiteral_3182/*"Basic Constraints"*/, v17);
    sub_1B64870(&StringLiteral_12987/*"Subject Alternative Name"*/, v18);
    sub_1B64870(&StringLiteral_4692/*"Content Type"*/, v19);
    sub_1B64870(&StringLiteral_12988/*"Subject Key Identifier"*/, v20);
    sub_1B64870(&StringLiteral_1437/*"2.5.29.15"*/, v21);
    sub_1B64870(&StringLiteral_9348/*"Netscape Cert Type"*/, v22);
    sub_1B64870(&StringLiteral_1320/*"1.2.840.113549.1.7.1"*/, v23);
    sub_1B64870(&StringLiteral_1440/*"2.5.29.19"*/, v24);
    sub_1B64870(&StringLiteral_20126/*"id-smime-alg-3DESwrap"*/, v25);
    byte_4A07F6B = 1;
  }
  v26 = PrivateImplementationDetails___ComputeStringHash_67838356(friendlyName, 0LL);
  if ( v26 > 0x751680DD )
  {
    if ( v26 > 0xB4301663 )
    {
      switch ( v26 )
      {
        case 0xB85A3360:
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_6306/*"Extended Key Usage"*/, 0LL);
          v28 = &StringLiteral_1444/*"2.5.29.37"*/;
          break;
        case 0xCCB33EB4:
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_8958/*"Message Digest"*/, 0LL);
          v28 = &StringLiteral_1333/*"1.2.840.113549.1.9.4"*/;
          break;
        case 0xE2748DE9:
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_20126/*"id-smime-alg-3DESwrap"*/, 0LL);
          v28 = &StringLiteral_1325/*"1.2.840.113549.1.9.16.3.3"*/;
          break;
        default:
          return 0LL;
      }
    }
    else
    {
      switch ( v26 )
      {
        case 0x953B2236:
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_4692/*"Content Type"*/, 0LL);
          v28 = &StringLiteral_1332/*"1.2.840.113549.1.9.3"*/;
          break;
        case 0x9DCF2034:
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_9348/*"Netscape Cert Type"*/, 0LL);
          v28 = &StringLiteral_1433/*"2.16.840.1.113730.1.1"*/;
          break;
        case 0xB4301663:
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12987/*"Subject Alternative Name"*/, 0LL);
          v28 = &StringLiteral_1438/*"2.5.29.17"*/;
          break;
        default:
          return 0LL;
      }
    }
  }
  else if ( v26 > 0x55D8B021 )
  {
    switch ( v26 )
    {
      case 0x5BEE62EFu:
        v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12988/*"Subject Key Identifier"*/, 0LL);
        v28 = &StringLiteral_1436/*"2.5.29.14"*/;
        break;
      case 0x5F357EFDu:
        v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12711/*"Signing Time"*/, 0LL);
        v28 = &StringLiteral_1334/*"1.2.840.113549.1.9.5"*/;
        break;
      case 0x751680DDu:
        v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_3182/*"Basic Constraints"*/, 0LL);
        v28 = &StringLiteral_1440/*"2.5.29.19"*/;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    if ( v26 != 61174027 )
    {
      if ( v26 == 1440264225 )
      {
        v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_10334/*"PKCS 7 Data"*/, 0LL);
        v28 = &StringLiteral_1320/*"1.2.840.113549.1.7.1"*/;
        goto LABEL_29;
      }
      return 0LL;
    }
    v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_8163/*"Key Usage"*/, 0LL);
    v28 = &StringLiteral_1437/*"2.5.29.15"*/;
  }
LABEL_29:
  v30 = (System_String_o *)*v28;
  if ( v27 )
    return v30;
  else
    return 0LL;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Internal_Cryptography_OidLookup__NativeOidToFriendlyName(
        System_String_o *oid,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  uint32_t v26; // w0
  bool v27; // w0
  __int64 *v28; // x8
  System_String_o *v30; // x8

  if ( (byte_4A07F6A & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_6306/*"Extended Key Usage"*/, *(_QWORD *)&oidGroup);
    sub_1B64870(&StringLiteral_1438/*"2.5.29.17"*/, v5);
    sub_1B64870(&StringLiteral_1333/*"1.2.840.113549.1.9.4"*/, v6);
    sub_1B64870(&StringLiteral_8163/*"Key Usage"*/, v7);
    sub_1B64870(&StringLiteral_1334/*"1.2.840.113549.1.9.5"*/, v8);
    sub_1B64870(&StringLiteral_8958/*"Message Digest"*/, v9);
    sub_1B64870(&StringLiteral_1332/*"1.2.840.113549.1.9.3"*/, v10);
    sub_1B64870(&StringLiteral_1433/*"2.16.840.1.113730.1.1"*/, v11);
    sub_1B64870(&StringLiteral_12711/*"Signing Time"*/, v12);
    sub_1B64870(&StringLiteral_1444/*"2.5.29.37"*/, v13);
    sub_1B64870(&StringLiteral_1436/*"2.5.29.14"*/, v14);
    sub_1B64870(&StringLiteral_1325/*"1.2.840.113549.1.9.16.3.3"*/, v15);
    sub_1B64870(&StringLiteral_10334/*"PKCS 7 Data"*/, v16);
    sub_1B64870(&StringLiteral_3182/*"Basic Constraints"*/, v17);
    sub_1B64870(&StringLiteral_12987/*"Subject Alternative Name"*/, v18);
    sub_1B64870(&StringLiteral_4692/*"Content Type"*/, v19);
    sub_1B64870(&StringLiteral_12988/*"Subject Key Identifier"*/, v20);
    sub_1B64870(&StringLiteral_1437/*"2.5.29.15"*/, v21);
    sub_1B64870(&StringLiteral_9348/*"Netscape Cert Type"*/, v22);
    sub_1B64870(&StringLiteral_1320/*"1.2.840.113549.1.7.1"*/, v23);
    sub_1B64870(&StringLiteral_1440/*"2.5.29.19"*/, v24);
    sub_1B64870(&StringLiteral_20126/*"id-smime-alg-3DESwrap"*/, v25);
    byte_4A07F6A = 1;
  }
  v26 = PrivateImplementationDetails___ComputeStringHash_67838356(oid, 0LL);
  if ( v26 > 0xC67AB912 )
  {
    if ( v26 > 0xD20A3896 )
    {
      switch ( v26 )
      {
        case 0xD30A3A29:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1437/*"2.5.29.15"*/, 0LL);
          v28 = &StringLiteral_8163/*"Key Usage"*/;
          break;
        case 0xDC06204E:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1433/*"2.16.840.1.113730.1.1"*/, 0LL);
          v28 = &StringLiteral_9348/*"Netscape Cert Type"*/;
          break;
        case 0xDF0A4D0D:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1440/*"2.5.29.19"*/, 0LL);
          v28 = &StringLiteral_3182/*"Basic Constraints"*/;
          break;
        default:
          return 0LL;
      }
    }
    else
    {
      switch ( v26 )
      {
        case 0xD105B9D5:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1444/*"2.5.29.37"*/, 0LL);
          v28 = &StringLiteral_6306/*"Extended Key Usage"*/;
          break;
        case 0xD10A3703:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1438/*"2.5.29.17"*/, 0LL);
          v28 = &StringLiteral_12987/*"Subject Alternative Name"*/;
          break;
        case 0xD20A3896:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1436/*"2.5.29.14"*/, 0LL);
          v28 = &StringLiteral_12988/*"Subject Key Identifier"*/;
          break;
        default:
          return 0LL;
      }
    }
  }
  else if ( v26 > 0xABE04A90 )
  {
    switch ( v26 )
    {
      case 0xACE04C23:
        v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1333/*"1.2.840.113549.1.9.4"*/, 0LL);
        v28 = &StringLiteral_8958/*"Message Digest"*/;
        break;
      case 0xB1E05402:
        v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1332/*"1.2.840.113549.1.9.3"*/, 0LL);
        v28 = &StringLiteral_4692/*"Content Type"*/;
        break;
      case 0xC67AB912:
        v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1325/*"1.2.840.113549.1.9.16.3.3"*/, 0LL);
        v28 = &StringLiteral_20126/*"id-smime-alg-3DESwrap"*/;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    if ( v26 != -1411364208 )
    {
      if ( v26 == 2095896238 )
      {
        v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1320/*"1.2.840.113549.1.7.1"*/, 0LL);
        v28 = &StringLiteral_10334/*"PKCS 7 Data"*/;
        goto LABEL_29;
      }
      return 0LL;
    }
    v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1334/*"1.2.840.113549.1.9.5"*/, 0LL);
    v28 = &StringLiteral_12711/*"Signing Time"*/;
  }
LABEL_29:
  v30 = (System_String_o *)*v28;
  if ( v27 )
    return v30;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Internal_Cryptography_OidLookup_c *v8; // x0
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *s_oidToFriendlyName; // x0
  Internal_Cryptography_OidLookup_c *v10; // x0
  Internal_Cryptography_OidLookup_c *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x3
  Internal_Cryptography_OidLookup_c *v14; // x0
  __int64 v16; // x0
  System_ArgumentNullException_o *v17; // x19
  System_String_o *v18; // x0
  __int64 v19; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A07F68 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__,
      *(_QWORD *)&oidGroup);
    sub_1B64870(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v6);
    sub_1B64870(&Internal_Cryptography_OidLookup_TypeInfo, v7);
    byte_4A07F68 = 1;
  }
  value = 0LL;
  if ( !oid )
  {
    v16 = sub_1B64884(&System_ArgumentNullException_TypeInfo);
    v17 = (System_ArgumentNullException_o *)sub_1B64ABC(v16);
    v18 = (System_String_o *)sub_1B64884(&StringLiteral_22137/*"oid"*/);
    System_ArgumentNullException___ctor_61985716(v17, v18, 0LL);
    v19 = sub_1B64884(&Method_Internal_Cryptography_OidLookup_ToFriendlyName__);
    sub_1B64998(v17, v19);
  }
  v8 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
    v8 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
      v8 = Internal_Cryptography_OidLookup_TypeInfo;
    }
  }
  s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v8->static_fields->s_oidToFriendlyName;
  if ( !s_oidToFriendlyName )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)s_oidToFriendlyName,
          (Il2CppObject *)oid,
          &value,
          (const MethodInfo_317CEE0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    v10 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
      v10 = Internal_Cryptography_OidLookup_TypeInfo;
    }
    s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v10->static_fields->s_compatOids;
    if ( !s_oidToFriendlyName )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)s_oidToFriendlyName,
            (Il2CppObject *)oid,
            &value,
            (const MethodInfo_317CEE0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
    {
      v11 = Internal_Cryptography_OidLookup_TypeInfo;
      if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
        v11 = Internal_Cryptography_OidLookup_TypeInfo;
      }
      s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v11->static_fields->s_lateBoundOidToFriendlyName;
      if ( !s_oidToFriendlyName )
        goto LABEL_25;
      if ( !System_Collections_Concurrent_ConcurrentDictionary_object__object___TryGetValue(
              s_oidToFriendlyName,
              (Il2CppObject *)oid,
              &value,
              (const MethodInfo_30B9B54 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
      {
        if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
        value = (Il2CppObject *)Internal_Cryptography_OidLookup__NativeOidToFriendlyName(oid, v12, 0, v13);
        if ( value )
        {
          v14 = Internal_Cryptography_OidLookup_TypeInfo;
          if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
            v14 = Internal_Cryptography_OidLookup_TypeInfo;
          }
          s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v14->static_fields->s_lateBoundOidToFriendlyName;
          if ( s_oidToFriendlyName )
          {
            System_Collections_Concurrent_ConcurrentDictionary_object__object___TryAdd(
              s_oidToFriendlyName,
              (Il2CppObject *)oid,
              value,
              (const MethodInfo_30B94D0 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
            return (System_String_o *)value;
          }
LABEL_25:
          sub_1B64ACC(s_oidToFriendlyName, *(_QWORD *)&oidGroup);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Internal_Cryptography_OidLookup_c *v8; // x0
  System_Collections_Generic_Dictionary_object__object__o *s_friendlyNameToOid; // x0
  Internal_Cryptography_OidLookup_c *v10; // x0
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  System_String_o *result; // x0
  Internal_Cryptography_OidLookup_c *v14; // x0
  __int64 v15; // x0
  System_ArgumentNullException_o *v16; // x19
  System_String_o *v17; // x0
  __int64 v18; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A07F69 & 1) == 0 )
  {
    sub_1B64870(
      &Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__,
      *(_QWORD *)&oidGroup);
    sub_1B64870(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__, v5);
    sub_1B64870(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v6);
    sub_1B64870(&Internal_Cryptography_OidLookup_TypeInfo, v7);
    byte_4A07F69 = 1;
  }
  value = 0LL;
  if ( !friendlyName )
  {
    v15 = sub_1B64884(&System_ArgumentNullException_TypeInfo);
    v16 = (System_ArgumentNullException_o *)sub_1B64ABC(v15);
    v17 = (System_String_o *)sub_1B64884(&StringLiteral_19578/*"friendlyName"*/);
    System_ArgumentNullException___ctor_61985716(v16, v17, 0LL);
    v18 = sub_1B64884(&Method_Internal_Cryptography_OidLookup_ToOid__);
    sub_1B64998(v16, v18);
  }
  if ( !friendlyName->fields._stringLength )
    return 0LL;
  v8 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
    v8 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
      v8 = Internal_Cryptography_OidLookup_TypeInfo;
    }
  }
  s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v8->static_fields->s_friendlyNameToOid;
  if ( !s_friendlyNameToOid )
    goto LABEL_25;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         s_friendlyNameToOid,
         (Il2CppObject *)friendlyName,
         &value,
         (const MethodInfo_317CEE0 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  v10 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
    v10 = Internal_Cryptography_OidLookup_TypeInfo;
  }
  s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v10->static_fields->s_lateBoundFriendlyNameToOid;
  if ( !s_friendlyNameToOid )
    goto LABEL_25;
  if ( System_Collections_Concurrent_ConcurrentDictionary_object__object___TryGetValue(
         (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)s_friendlyNameToOid,
         (Il2CppObject *)friendlyName,
         &value,
         (const MethodInfo_30B9B54 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
  result = Internal_Cryptography_OidLookup__NativeFriendlyNameToOid(friendlyName, v11, 0, v12);
  value = (Il2CppObject *)result;
  if ( result )
  {
    v14 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo);
      v14 = Internal_Cryptography_OidLookup_TypeInfo;
    }
    s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v14->static_fields->s_lateBoundFriendlyNameToOid;
    if ( s_friendlyNameToOid )
    {
      System_Collections_Concurrent_ConcurrentDictionary_object__object___TryAdd(
        (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)s_friendlyNameToOid,
        (Il2CppObject *)friendlyName,
        value,
        (const MethodInfo_30B94D0 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
      return (System_String_o *)value;
    }
LABEL_25:
    sub_1B64ACC(s_friendlyNameToOid, *(_QWORD *)&oidGroup);
  }
  return result;
}


void __fastcall Internal_Cryptography_OidLookup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A07F6D & 1) == 0 )
  {
    sub_1B64870(&Internal_Cryptography_OidLookup___c_TypeInfo, v1);
    byte_4A07F6D = 1;
  }
  v2 = (Il2CppObject *)sub_1B64ABC(Internal_Cryptography_OidLookup___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9 = (struct Internal_Cryptography_OidLookup___c_o *)v2;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  if ( (byte_4A07F6E & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, kvp.fields.key);
    byte_4A07F6E = 1;
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
  if ( (byte_4A07F6F & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, kvp.fields.key);
    byte_4A07F6F = 1;
  }
  return key;
}


void __fastcall Internal_Cryptography_Pal_CertificateData___ctor(
        Internal_Cryptography_Pal_CertificateData_o *this,
        System_Byte_array *rawData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Security_Cryptography_DerSequenceReader_o *v11; // x21
  System_Security_Cryptography_DerSequenceReader_o *Sequence; // x0
  __int64 v13; // x1
  System_Security_Cryptography_DerSequenceReader_o *v14; // x22
  unsigned int Integer; // w0
  __int64 v16; // x0
  System_Security_Cryptography_CryptographicException_o *v17; // x19
  struct System_Byte_array *IntegerBytes; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Security_Cryptography_DerSequenceReader_o *v21; // x23
  struct System_String_o *OidAsString; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Byte_array *NextEncodedValue; // x1
  _QWORD *v28; // x24
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x0
  System_Byte_array *v32; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v33; // x24
  int32_t v34; // w2
  int32_t v35; // w3
  System_Security_Cryptography_DerSequenceReader_o *v36; // x23
  System_Byte_array *v37; // x23
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v38; // x24
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Byte_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Byte_array *SubjectPublicKeyInfo; // x24
  System_Security_Cryptography_DerSequenceReader_o *v45; // x23
  System_Security_Cryptography_DerSequenceReader_o *v46; // x24
  struct System_String_o *v47; // x0
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Byte_array *v52; // x1
  _QWORD *v53; // x25
  __int64 v54; // x8
  __int64 v55; // x0
  __int64 v56; // x0
  struct System_Byte_array *BitString; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  int32_t v60; // w2
  int32_t v61; // w3
  struct System_Byte_array *v62; // x0
  int32_t v63; // w1
  struct System_Byte_array **p_IssuerUniqueId; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Byte_array *v67; // x0
  int32_t v68; // w1
  struct System_Byte_array **p_SubjectUniqueId; // x0
  System_Collections_Generic_List_object__o *v70; // x24
  int32_t v71; // w2
  int32_t v72; // w3
  System_Security_Cryptography_DerSequenceReader_o *v73; // x24
  System_Security_Cryptography_DerSequenceReader_o *v74; // x25
  System_String_o *v75; // x28
  bool v76; // w29
  System_Byte_array *OctetString; // x0
  System_Collections_Generic_List_object__o *Extensions; // x26
  System_Byte_array *v79; // x19
  System_Security_Cryptography_X509Certificates_X509Extension_o *v80; // x27
  int32_t v81; // w2
  int32_t v82; // w3
  struct System_Object_array *items; // x8
  _QWORD *v84; // x9
  __int64 size; // x10
  Il2CppClass **v86; // x0
  __int64 v87; // x0
  System_String_o *v88; // x0
  __int64 v89; // x0
  System_Security_Cryptography_DerSequenceReader_o *v90; // x22
  struct System_String_o *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  int32_t v94; // w2
  int32_t v95; // w3
  struct System_Byte_array *v96; // x1
  _QWORD *v97; // x23
  __int64 v98; // x8
  __int64 v99; // x0
  __int64 v100; // x0
  struct System_Byte_array *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  int32_t v104; // w2
  int32_t v105; // w3
  struct System_Byte_array *v106; // [xsp+8h] [xbp-68h]

  if ( (byte_4A07F70 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Array_Empty_byte___, rawData);
    sub_1B64870(&System_Security_Cryptography_DerSequenceReader_TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_X509Extension__Add__, v6);
    sub_1B64870(&Method_System_Collections_Generic_List_X509Extension___ctor__, v7);
    sub_1B64870(&System_Collections_Generic_List_X509Extension__TypeInfo, v8);
    sub_1B64870(&System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo, v9);
    sub_1B64870(&System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo, v10);
    byte_4A07F70 = 1;
  }
  v11 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B64ABC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor_68075160(v11, rawData, 0LL);
  if ( !v11 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v11, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v14 = Sequence;
  v106 = rawData;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(Sequence, 0LL) == 160 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v14, 0LL);
    if ( !Sequence )
      goto LABEL_86;
    Integer = System_Security_Cryptography_DerSequenceReader__ReadInteger(Sequence, 0LL);
    this->fields.Version = Integer;
    if ( Integer >= 3 )
    {
      v16 = sub_1B64884(&System_Security_Cryptography_CryptographicException_TypeInfo);
      v17 = (System_Security_Cryptography_CryptographicException_o *)sub_1B64ABC(v16);
      System_Security_Cryptography_CryptographicException___ctor(v17, 0LL);
      goto LABEL_69;
    }
  }
  else
  {
    if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v14, 0LL) != 2 )
      goto LABEL_68;
    this->fields.Version = 0;
  }
  IntegerBytes = System_Security_Cryptography_DerSequenceReader__ReadIntegerBytes(v14, 0LL);
  this->fields.SerialNumber = IntegerBytes;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SerialNumber, (int32_t)IntegerBytes, v19, v20);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v14, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v21 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.TbsSignature.fields.AlgorithmId = OidAsString;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.TbsSignature, (int32_t)OidAsString, v23, v24);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v21, 0LL) )
  {
    NextEncodedValue = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v21, 0LL);
  }
  else
  {
    v28 = Method_System_Array_Empty_byte___;
    v29 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v29 )
    {
      sub_1BB67A8();
      v29 = v28[7];
    }
    v30 = *(_QWORD *)(v29 + 16);
    if ( (*(_BYTE *)(v30 + 309) & 1) == 0 )
      v30 = sub_1BB674C(v30);
    if ( !*(_DWORD *)(v30 + 224) )
      j_il2cpp_runtime_class_init_0(v30);
    v31 = *(_QWORD *)(v28[7] + 16LL);
    if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
      v31 = sub_1BB674C(v31);
    NextEncodedValue = **(struct System_Byte_array ***)(v31 + 184);
  }
  this->fields.TbsSignature.fields.Parameters = NextEncodedValue;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.TbsSignature.fields.Parameters,
    (int32_t)NextEncodedValue,
    v25,
    v26);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v21, 0LL) )
    goto LABEL_68;
  v32 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v14, 0LL);
  v33 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1B64ABC(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor_68100284(v33, v32, 0LL);
  this->fields.Issuer = v33;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.Issuer, (int32_t)v33, v34, v35);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v14, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v36 = Sequence;
  this->fields.NotBefore = System_Security_Cryptography_DerSequenceReader__ReadX509Date(Sequence, 0LL);
  this->fields.NotAfter = System_Security_Cryptography_DerSequenceReader__ReadX509Date(v36, 0LL);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v36, 0LL) )
  {
LABEL_68:
    v87 = sub_1B64884(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v17 = (System_Security_Cryptography_CryptographicException_o *)sub_1B64ABC(v87);
    v88 = (System_String_o *)sub_1B64884(&StringLiteral_2136/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_60706872(v17, v88, 0LL);
LABEL_69:
    v89 = sub_1B64884(&Method_Internal_Cryptography_Pal_CertificateData__ctor__);
    sub_1B64998(v17, v89);
  }
  v37 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v14, 0LL);
  v38 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1B64ABC(System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor_68100284(v38, v37, 0LL);
  this->fields.Subject = v38;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.Subject, (int32_t)v38, v39, v40);
  v41 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v14, 0LL);
  this->fields.SubjectPublicKeyInfo = v41;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SubjectPublicKeyInfo, (int32_t)v41, v42, v43);
  SubjectPublicKeyInfo = this->fields.SubjectPublicKeyInfo;
  v45 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B64ABC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor_68075160(v45, SubjectPublicKeyInfo, 0LL);
  if ( !v45 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v45, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v46 = Sequence;
  v47 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.PublicKeyAlgorithm.fields.AlgorithmId = v47;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.PublicKeyAlgorithm, (int32_t)v47, v48, v49);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v46, 0LL) )
  {
    v52 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v46, 0LL);
  }
  else
  {
    v53 = Method_System_Array_Empty_byte___;
    v54 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v54 )
    {
      sub_1BB67A8();
      v54 = v53[7];
    }
    v55 = *(_QWORD *)(v54 + 16);
    if ( (*(_BYTE *)(v55 + 309) & 1) == 0 )
      v55 = sub_1BB674C(v55);
    if ( !*(_DWORD *)(v55 + 224) )
      j_il2cpp_runtime_class_init_0(v55);
    v56 = *(_QWORD *)(v53[7] + 16LL);
    if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
      v56 = sub_1BB674C(v56);
    v52 = **(struct System_Byte_array ***)(v56 + 184);
  }
  this->fields.PublicKeyAlgorithm.fields.Parameters = v52;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.PublicKeyAlgorithm.fields.Parameters,
    (int32_t)v52,
    v50,
    v51);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v46, 0LL) )
    goto LABEL_68;
  BitString = System_Security_Cryptography_DerSequenceReader__ReadBitString(v45, 0LL);
  this->fields.PublicKey = BitString;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.PublicKey, (int32_t)BitString, v58, v59);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v45, 0LL) )
    goto LABEL_68;
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v14, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v14, 0LL) == 161 )
  {
    v62 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v14, 0LL);
    v63 = (int)v62;
    this->fields.IssuerUniqueId = v62;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
  }
  else
  {
    this->fields.IssuerUniqueId = 0LL;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
    v63 = 0;
  }
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_IssuerUniqueId, v63, v60, v61);
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v14, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v14, 0LL) == 162 )
  {
    v67 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v14, 0LL);
    v68 = (int)v67;
    this->fields.SubjectUniqueId = v67;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
  }
  else
  {
    this->fields.SubjectUniqueId = 0LL;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
    v68 = 0;
  }
  sub_1B64814((ServantStatusBattleListViewItem_o *)p_SubjectUniqueId, v68, v65, v66);
  v70 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_X509Extension__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v70,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_X509Extension___ctor__);
  this->fields.Extensions = (struct System_Collections_Generic_List_X509Extension__o *)v70;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.Extensions, (int32_t)v70, v71, v72);
  if ( this->fields.Version >= 2
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v14, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v14, 0LL) == 163 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v14, 0LL);
    if ( Sequence )
    {
      Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(Sequence, 0LL);
      if ( Sequence )
      {
        v73 = Sequence;
        while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v73, 0LL) )
        {
          Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v73, 0LL);
          if ( !Sequence )
            goto LABEL_86;
          v74 = Sequence;
          v75 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
          v76 = System_Security_Cryptography_DerSequenceReader__PeekTag(v74, 0LL) == 1
             && System_Security_Cryptography_DerSequenceReader__ReadBoolean(v74, 0LL);
          OctetString = System_Security_Cryptography_DerSequenceReader__ReadOctetString(v74, 0LL);
          Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
          v79 = OctetString;
          v80 = (System_Security_Cryptography_X509Certificates_X509Extension_o *)sub_1B64ABC(System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo);
          System_Security_Cryptography_X509Certificates_X509Extension___ctor_68164236(v80, v75, v79, v76, 0LL);
          if ( !Extensions )
            goto LABEL_86;
          items = Extensions->fields._items;
          v84 = Method_System_Collections_Generic_List_X509Extension__Add__;
          ++Extensions->fields._version;
          if ( !items )
            goto LABEL_86;
          size = Extensions->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              Extensions,
              (Il2CppObject *)v80,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
          }
          else
          {
            v86 = &items->obj.klass + size;
            Extensions->fields._size = size + 1;
            v86[4] = (Il2CppClass *)v80;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v86 + 4), (int32_t)v80, v81, v82);
          }
          if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v74, 0LL) )
            goto LABEL_68;
        }
        goto LABEL_70;
      }
    }
LABEL_86:
    sub_1B64ACC(Sequence, v13);
  }
LABEL_70:
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v14, 0LL) )
    goto LABEL_68;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v11, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v90 = Sequence;
  v91 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.SignatureAlgorithm.fields.AlgorithmId = v91;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SignatureAlgorithm, (int32_t)v91, v92, v93);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v90, 0LL) )
  {
    v96 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v90, 0LL);
  }
  else
  {
    v97 = Method_System_Array_Empty_byte___;
    v98 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v98 )
    {
      sub_1BB67A8();
      v98 = v97[7];
    }
    v99 = *(_QWORD *)(v98 + 16);
    if ( (*(_BYTE *)(v99 + 309) & 1) == 0 )
      v99 = sub_1BB674C(v99);
    if ( !*(_DWORD *)(v99 + 224) )
      j_il2cpp_runtime_class_init_0(v99);
    v100 = *(_QWORD *)(v97[7] + 16LL);
    if ( (*(_BYTE *)(v100 + 309) & 1) == 0 )
      v100 = sub_1BB674C(v100);
    v96 = **(struct System_Byte_array ***)(v100 + 184);
  }
  this->fields.SignatureAlgorithm.fields.Parameters = v96;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.SignatureAlgorithm.fields.Parameters,
    (int32_t)v96,
    v94,
    v95);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v90, 0LL) )
    goto LABEL_68;
  v101 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v11, 0LL);
  this->fields.SignatureValue = v101;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.SignatureValue, (int32_t)v101, v102, v103);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v11, 0LL) )
    goto LABEL_68;
  this->fields.RawData = v106;
  sub_1B64814((ServantStatusBattleListViewItem_o *)this, (int32_t)v106, v104, v105);
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4A07F73 & 1) == 0 )
  {
    sub_1B64870(&System_Security_Cryptography_DerSequenceReader_TypeInfo, *(_QWORD *)&matchType);
    byte_4A07F73 = 1;
  }
  if ( matchType )
    v7 = 0x80;
  else
    v7 = -96;
  v8 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B64ABC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
  System_Security_Cryptography_DerSequenceReader___ctor_68075160(v8, extensionBytes, 0LL);
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
    v15 = sub_1B64884(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v16 = (System_Security_Cryptography_CryptographicException_o *)sub_1B64ABC(v15);
    v17 = (System_String_o *)sub_1B64884(&StringLiteral_2136/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_60706872(v16, v17, 0LL);
    v18 = sub_1B64884(&Method_Internal_Cryptography_Pal_CertificateData_FindAltNameMatch__);
    sub_1B64998(v16, v18);
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v12, 0LL);
  if ( !Sequence )
LABEL_22:
    sub_1B64ACC(Sequence, v10);
  return System_Security_Cryptography_DerSequenceReader__ReadUtf8String(Sequence, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Internal_Cryptography_Pal_CertificateData__GetNameInfo(
        Internal_Cryptography_Pal_CertificateData_o *this,
        int32_t nameType,
        bool forIssuer,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  System_String_o **v25; // x8
  System_String_o *v26; // x22
  int32_t v27; // w1
  __int64 v28; // x8
  System_String_o *SimpleNameInfo; // x23
  System_String_o **v30; // x8
  System_String_o *v31; // x24
  System_Collections_Generic_List_object__o *Extensions; // x0
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  System_Byte_array *monitor; // x23
  int32_t Value; // w1
  const MethodInfo *v39; // x3
  __int64 *v40; // x8
  System_String_o *v41; // x21
  __int64 v42; // x8
  System_Collections_Generic_List_object__c *v43; // x8
  System_Collections_Generic_List_object__o *v44; // x19
  __int64 v45; // x9
  int32_t *p_offset; // x10
  __int64 v47; // x0
  __int64 v48; // x1
  __int64 v49; // x19
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  System_String_o *v58; // x0
  System_String_o *v59; // x1
  int v60; // w21
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v67; // [xsp+20h] [xbp-70h] BYREF
  __int64 v68; // [xsp+48h] [xbp-48h] BYREF
  System_Nullable_Int32Enum__o v69; // 0:x0.8
  System_Nullable_Int32Enum__o v70; // 0:x0.8
  System_Nullable_Int32Enum__o v71; // 0:x0.8

  if ( (byte_4A07F71 & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__, *(_QWORD *)&nameType);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__, v7);
    sub_1B64870(&Method_System_Collections_Generic_List_Enumerator_X509Extension__get_Current__, v8);
    sub_1B64870(&System_IDisposable_TypeInfo, v9);
    sub_1B64870(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, v10);
    sub_1B64870(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, v11);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v13);
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v14);
    sub_1B64870(&Method_System_Collections_Generic_List_X509Extension__GetEnumerator__, v15);
    sub_1B64870(&Method_System_Nullable_GeneralNameType___ctor__, v16);
    sub_1B64870(&Method_System_Nullable_GeneralNameType__get_HasValue__, v17);
    sub_1B64870(&Method_System_Nullable_GeneralNameType__get_Value__, v18);
    sub_1B64870(&StringLiteral_1438/*"2.5.29.17"*/, v19);
    sub_1B64870(&StringLiteral_1324/*"1.2.840.113549.1.9.1"*/, v20);
    sub_1B64870(&StringLiteral_1386/*"1.3.6.1.4.1.311.20.2.3"*/, v21);
    sub_1B64870(&StringLiteral_1453/*"2.5.4.3"*/, v22);
    sub_1B64870(&StringLiteral_1439/*"2.5.29.18"*/, v23);
    sub_1B64870(&StringLiteral_1/*""*/, v24);
    byte_4A07F71 = 1;
  }
  memset(&v67, 0, sizeof(v67));
  if ( nameType )
  {
    if ( forIssuer )
      v25 = (System_String_o **)&StringLiteral_1439/*"2.5.29.18"*/;
    else
      v25 = (System_String_o **)&StringLiteral_1438/*"2.5.29.17"*/;
    v26 = *v25;
    v68 = 0LL;
    switch ( nameType )
    {
      case 1:
        goto LABEL_16;
      case 2:
        v71 = (System_Nullable_Int32Enum__o)&v68;
        System_Nullable_Int32Enum____ctor(
          v71,
          0,
          (const MethodInfo_35D0420 *)Method_System_Nullable_GeneralNameType___ctor__);
        v31 = (System_String_o *)StringLiteral_1386/*"1.3.6.1.4.1.311.20.2.3"*/;
        break;
      case 3:
      case 4:
        v69 = (System_Nullable_Int32Enum__o)&v68;
        v27 = 2;
        goto LABEL_18;
      case 5:
        v69 = (System_Nullable_Int32Enum__o)&v68;
        v27 = 6;
        goto LABEL_18;
      default:
        goto LABEL_19;
    }
  }
  else
  {
    v28 = 72LL;
    if ( forIssuer )
      v28 = 48LL;
    SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
                       *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData
                                                                                                 + v28),
                       *(const MethodInfo **)&nameType);
    if ( SimpleNameInfo )
      return SimpleNameInfo;
    if ( forIssuer )
      v30 = (System_String_o **)&StringLiteral_1439/*"2.5.29.18"*/;
    else
      v30 = (System_String_o **)&StringLiteral_1438/*"2.5.29.17"*/;
    v26 = *v30;
    v68 = 0LL;
LABEL_16:
    v69 = (System_Nullable_Int32Enum__o)&v68;
    v27 = 1;
LABEL_18:
    System_Nullable_Int32Enum____ctor(
      v69,
      v27,
      (const MethodInfo_35D0420 *)Method_System_Nullable_GeneralNameType___ctor__);
LABEL_19:
    v31 = 0LL;
  }
  if ( (_BYTE)v68 )
  {
    Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
    if ( !Extensions )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v66,
      Extensions,
      (const MethodInfo_34B0548 *)Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    v67 = v66;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v67,
              (const MethodInfo_322C38C *)Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
      if ( !v33 )
        break;
      current = v67.fields._current;
      if ( !v67.fields._current )
        sub_1B64ACC(v33, v34);
      klass = v67.fields._current[1].klass;
      if ( !klass )
        sub_1B64ACC(v33, v34);
      if ( System_String__op_Equality((System_String_o *)klass->_1.name, v26, 0LL) )
      {
        monitor = (System_Byte_array *)current[1].monitor;
        v70 = (System_Nullable_Int32Enum__o)&v68;
        Value = System_Nullable_Int32Enum___get_Value(
                  v70,
                  (const MethodInfo_35D0438 *)Method_System_Nullable_GeneralNameType__get_Value__);
        SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(monitor, Value, v31, v39);
        if ( SimpleNameInfo )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v67,
            (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
          return SimpleNameInfo;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v67,
      (const MethodInfo_322C388 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
  }
  if ( nameType == 1 )
  {
    v40 = &StringLiteral_1324/*"1.2.840.113549.1.9.1"*/;
  }
  else
  {
    if ( nameType != 3 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v40 = &StringLiteral_1453/*"2.5.4.3"*/;
  }
  v41 = (System_String_o *)*v40;
  if ( !*v40 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v42 = 72LL;
  if ( forIssuer )
    v42 = 48LL;
  Extensions = (System_Collections_Generic_List_object__o *)Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
                                                              *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData + v42),
                                                              *(const MethodInfo **)&nameType);
  if ( !Extensions )
LABEL_73:
    sub_1B64ACC(Extensions, *(_QWORD *)&nameType);
  v43 = Extensions->klass;
  v44 = Extensions;
  v45 = *(unsigned __int16 *)(&Extensions->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Extensions->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v43->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v45;
      p_offset += 4;
      if ( !v45 )
        goto LABEL_42;
    }
    v47 = (__int64)(&v43->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_42:
    v47 = sub_1BB6850(Extensions, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0LL);
  }
  v49 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD))v47)(v44, *(_QWORD *)(v47 + 8));
  if ( !v49 )
    sub_1B64ACC(0LL, v48);
  while ( 1 )
  {
    v50 = *(_QWORD *)v49;
    v51 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v52 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v51;
        v52 += 4;
        if ( !v51 )
          goto LABEL_50;
      }
      v53 = v50 + 16LL * *v52 + 312;
    }
    else
    {
LABEL_50:
      v53 = sub_1BB6850(v49, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v49, *(_QWORD *)(v53 + 8)) & 1) == 0 )
      break;
    v54 = *(_QWORD *)v49;
    v55 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
    {
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v56 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v55;
        v56 += 4;
        if ( !v55 )
          goto LABEL_57;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_57:
      v57 = sub_1BB6850(v49, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0LL);
    }
    v58 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v49, *(_QWORD *)(v57 + 8));
    SimpleNameInfo = v59;
    if ( System_String__op_Equality(v58, v41, 0LL) )
    {
      v60 = 16;
      goto LABEL_62;
    }
  }
  SimpleNameInfo = 0LL;
  v60 = 20;
LABEL_62:
  v61 = *(_QWORD *)v49;
  v62 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
  {
    v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v63 - 1) != System_IDisposable_TypeInfo )
    {
      --v62;
      v63 += 4;
      if ( !v62 )
        goto LABEL_66;
    }
    v64 = v61 + 16LL * *v63 + 312;
  }
  else
  {
LABEL_66:
    v64 = sub_1BB6850(v49, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v64)(v49, *(_QWORD *)(v64 + 8));
  if ( v60 == 20 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return SimpleNameInfo;
}


System_String_o *__fastcall Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *ReverseRdns; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c *klass; // x8
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *v15; // x19
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  System_String_o *v22; // x23
  System_String_o *v23; // x24
  System_String_o *v24; // x25
  System_String_o *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  System_String_o *v34; // x0
  System_String_o *v35; // x1
  System_String_o *v36; // x21
  System_String_o *v37; // x8
  int v38; // w22
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  System_String_o *v44; // [xsp+8h] [xbp-68h]

  if ( (byte_4A07F72 & 1) == 0 )
  {
    sub_1B64870(&System_IDisposable_TypeInfo, method);
    sub_1B64870(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, v3);
    sub_1B64870(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, v4);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v6);
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v7);
    sub_1B64870(&StringLiteral_1324/*"1.2.840.113549.1.9.1"*/, v8);
    sub_1B64870(&StringLiteral_1453/*"2.5.4.3"*/, v9);
    sub_1B64870(&StringLiteral_1446/*"2.5.4.11"*/, v10);
    sub_1B64870(&StringLiteral_1445/*"2.5.4.10"*/, v11);
    byte_4A07F72 = 1;
  }
  ReverseRdns = Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(name, method);
  if ( !ReverseRdns )
    sub_1B64ACC(0LL, v13);
  klass = ReverseRdns->klass;
  v15 = ReverseRdns;
  v16 = *(unsigned __int16 *)(&ReverseRdns->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&ReverseRdns->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB6850(
                 ReverseRdns,
                 System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo,
                 0LL);
  }
  v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *, _QWORD))p_method)(
          v15,
          *(_QWORD *)(p_method + 8));
  v21 = v19;
  v44 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
LABEL_11:
  v25 = v22;
LABEL_12:
  v22 = v25;
  v25 = v23;
LABEL_13:
  v23 = v25;
  v25 = v24;
  while ( 1 )
  {
    if ( !v21 )
      sub_1B64ACC(v19, v20);
    v26 = *(_QWORD *)v21;
    v24 = v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_19;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_19:
      v29 = sub_1BB6850(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v21, *(_QWORD *)(v29 + 8)) & 1) == 0 )
    {
      v25 = 0LL;
      v38 = 10;
      goto LABEL_37;
    }
    v30 = *(_QWORD *)v21;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v32 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_26;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_26:
      v33 = sub_1BB6850(v21, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0LL);
    }
    v34 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v21, *(_QWORD *)(v33 + 8));
    v25 = v35;
    v36 = v34;
    if ( System_String__op_Equality(v34, (System_String_o *)StringLiteral_1453/*"2.5.4.3"*/, 0LL) )
      break;
    v19 = System_String__op_Equality(v36, (System_String_o *)StringLiteral_1446/*"2.5.4.11"*/, 0LL);
    if ( (v19 & 1) == 0 )
    {
      v19 = System_String__op_Equality(v36, (System_String_o *)StringLiteral_1445/*"2.5.4.10"*/, 0LL);
      if ( (v19 & 1) != 0 )
        goto LABEL_13;
      v19 = System_String__op_Equality(v36, (System_String_o *)StringLiteral_1324/*"1.2.840.113549.1.9.1"*/, 0LL);
      if ( (v19 & 1) == 0 )
      {
        v37 = v44;
        if ( !v44 )
          v37 = v25;
        v44 = v37;
        goto LABEL_11;
      }
      goto LABEL_12;
    }
  }
  v38 = 9;
LABEL_37:
  v39 = *(_QWORD *)v21;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_41;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_41:
    v42 = sub_1BB6850(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v21, *(_QWORD *)(v42 + 8));
  if ( v38 == 10 )
  {
    v25 = v24;
    if ( !v24 )
    {
      v25 = v23;
      if ( !v23 )
      {
        if ( v22 )
          return v22;
        else
          return v44;
      }
    }
  }
  return v25;
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

  if ( (byte_4A07F74 & 1) == 0 )
  {
    sub_1B64870(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo, method);
    byte_4A07F74 = 1;
  }
  v3 = sub_1B64ABC(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21___ctor(
    (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v3,
    -2,
    0LL);
  if ( !v3 )
    sub_1B64ACC(v4, v5);
  *(_QWORD *)(v3 + 56) = name;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v3 + 56), (int32_t)name, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name; // x8
  System_Byte_array *raw; // x21
  System_Security_Cryptography_DerSequenceReader_o *v12; // x20
  System_Collections_Generic_Stack_T__o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_Stack_T__o *rdnReaders_5__2; // x22
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o **p_rdnReader_5__3; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v23; // x22
  Il2CppObject *OidAsString; // x21
  const MethodInfo_33E706C *v25; // x4
  unsigned int v26; // w8
  Il2CppObject *v27; // x2
  System_String_o *Utf8String; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  bool result; // w0
  struct System_Collections_Generic_KeyValuePair_string__string__o v32; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v33; // 0:x0.16

  v2 = this;
  if ( (byte_4A09DF1 & 1) == 0 )
  {
    sub_1B64870(&System_Security_Cryptography_DerSequenceReader_TypeInfo, method);
    sub_1B64870(&Method_System_Collections_Generic_KeyValuePair_string__string___ctor__, v3);
    sub_1B64870(&Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__, v4);
    sub_1B64870(&Method_System_Collections_Generic_Stack_DerSequenceReader__Push__, v5);
    sub_1B64870(&Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__, v6);
    sub_1B64870(&Method_System_Collections_Generic_Stack_DerSequenceReader__get_Count__, v7);
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1B64870(
                                                                                   &System_Collections_Generic_Stack_DerSequenceReader__TypeInfo,
                                                                                   v8);
    byte_4A09DF1 = 1;
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
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._rdnReader_5__3, 0, v21, v22);
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
      v23 = this;
      OidAsString = (Il2CppObject *)System_Security_Cryptography_DerSequenceReader__ReadOidAsString(
                                      (System_Security_Cryptography_DerSequenceReader_o *)this,
                                      0LL);
      v26 = System_Security_Cryptography_DerSequenceReader__PeekTag(
              (System_Security_Cryptography_DerSequenceReader_o *)v23,
              0LL);
      v27 = 0LL;
      if ( v26 <= 0x13 )
      {
        if ( v26 == 12 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadUtf8String(
                         (System_Security_Cryptography_DerSequenceReader_o *)v23,
                         0LL);
          goto LABEL_29;
        }
        if ( v26 == 19 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadPrintableString(
                         (System_Security_Cryptography_DerSequenceReader_o *)v23,
                         0LL);
          goto LABEL_29;
        }
      }
      else
      {
        switch ( v26 )
        {
          case 0x14u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadT61String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v23,
                           0LL);
            goto LABEL_29;
          case 0x16u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadIA5String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v23,
                           0LL);
            goto LABEL_29;
          case 0x1Eu:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadBMPString(
                           (System_Security_Cryptography_DerSequenceReader_o *)v23,
                           0LL);
LABEL_29:
            v27 = (Il2CppObject *)Utf8String;
            break;
        }
      }
      if ( v27 )
      {
        v33.fields.key = (Il2CppObject *)&v32;
        v33.fields.value = OidAsString;
        v32 = (struct System_Collections_Generic_KeyValuePair_string__string__o)0LL;
        System_Collections_Generic_KeyValuePair_object__object____ctor(
          v33,
          v27,
          (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_string__string___ctor__,
          v25);
        v2->fields.__2__current = v32;
        sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields.__2__current, 0, v29, v30);
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
    v12 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B64ABC(System_Security_Cryptography_DerSequenceReader_TypeInfo);
    System_Security_Cryptography_DerSequenceReader___ctor_68075160(v12, raw, 0LL);
    v13 = (System_Collections_Generic_Stack_T__o *)sub_1B64ABC(System_Collections_Generic_Stack_DerSequenceReader__TypeInfo);
    System_Collections_Generic_Stack_object____ctor(
      v13,
      (const MethodInfo_3706F10 *)Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    v2->fields._rdnReaders_5__2 = (struct System_Collections_Generic_Stack_DerSequenceReader__o *)v13;
    sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._rdnReaders_5__2, (int32_t)v13, v14, v15);
    if ( !v12 )
      goto LABEL_37;
    if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v12, 0LL) )
      goto LABEL_33;
    do
    {
      rdnReaders_5__2 = (System_Collections_Generic_Stack_T__o *)v2->fields._rdnReaders_5__2;
      this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)System_Security_Cryptography_DerSequenceReader__ReadSet(
                                                                                     v12,
                                                                                     0LL);
      if ( !rdnReaders_5__2 )
        goto LABEL_37;
      System_Collections_Generic_Stack_object___Push(
        rdnReaders_5__2,
        (Il2CppObject *)this,
        (const MethodInfo_3707538 *)Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    }
    while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v12, 0LL) );
LABEL_33:
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v2->fields._rdnReaders_5__2;
    if ( !this )
LABEL_37:
      sub_1B64ACC(this, method);
    if ( SLODWORD(this->fields.__2__current.fields.key) > 0 )
    {
      v17 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_37074D8 *)Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
      v2->fields._rdnReader_5__3 = (struct System_Security_Cryptography_DerSequenceReader_o *)v17;
      sub_1B64814((ServantStatusBattleListViewItem_o *)&v2->fields._rdnReader_5__3, (int32_t)v17, v18, v19);
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

  if ( (byte_4A09DF3 & 1) == 0 )
  {
    sub_1B64870(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo, method);
    byte_4A09DF3 = 1;
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
    v6 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1B64ABC(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__name = this->fields.__3__name;
  v6->fields.name = _3__name;
  sub_1B64814((ServantStatusBattleListViewItem_o *)&v6->fields.name, (int32_t)_3__name, v4, v5);
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

  v2 = sub_1B64884(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64ABC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64884(&Method_Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_System_Collections_IEnumerator_Reset__);
  sub_1B64998(v3, v4);
}


Il2CppObject *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_IEnumerator_get_Current(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_KeyValuePair_string__string__o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4A09DF2 & 1) == 0 )
  {
    sub_1B64870(&System_Collections_Generic_KeyValuePair_string__string__TypeInfo, method);
    byte_4A09DF2 = 1;
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

  if ( (byte_4A0640D & 1) == 0 )
  {
    sub_1B64870(&System_Reflection_MissingMetadataException_TypeInfo, attributeType);
    byte_4A0640D = 1;
  }
  v3 = (System_Reflection_MissingMetadataException_o *)sub_1B64ABC(System_Reflection_MissingMetadataException_TypeInfo);
  System_Reflection_MissingMetadataException___ctor(v3, 0LL);
  return (System_Exception_o *)v3;
}


void __fastcall Internal_Runtime_Augments_RuntimeAugments___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A0640C & 1) == 0 )
  {
    sub_1B64870(&Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo, v1);
    sub_1B64870(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo, v2);
    byte_4A0640C = 1;
  }
  v3 = (Il2CppObject *)sub_1B64ABC(Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo);
  System_Object___ctor(v3, 0LL);
  Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields->s_reflectionExecutionDomainCallbacks = (struct Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *)v3;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  sub_1B64ACC(0LL, v3);
}


Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *__fastcall Internal_Runtime_Augments_RuntimeAugments__get_Callbacks(
        const MethodInfo *method)
{
  __int64 v1; // x1
  Internal_Runtime_Augments_RuntimeAugments_c *v2; // x0

  if ( (byte_4A0640B & 1) == 0 )
  {
    sub_1B64870(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo, v1);
    byte_4A0640B = 1;
  }
  v2 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  if ( !Internal_Runtime_Augments_RuntimeAugments_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Runtime_Augments_RuntimeAugments_TypeInfo);
    v2 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  }
  return v2->static_fields->s_reflectionExecutionDomainCallbacks;
}


void __fastcall Internal_Runtime_Augments_RuntimeThread___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A0640F & 1) == 0 )
  {
    sub_1B64870(&Internal_Runtime_Augments_RuntimeThread_TypeInfo, v1);
    byte_4A0640F = 1;
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)t, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
Internal_Runtime_Augments_RuntimeThread_o *__fastcall Internal_Runtime_Augments_RuntimeThread__Create(
        System_Threading_ParameterizedThreadStart_o *start,
        int32_t maxStackSize,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Threading_Thread_o *v6; // x21
  __int64 v7; // x19
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A0640E & 1) == 0 )
  {
    sub_1B64870(&Internal_Runtime_Augments_RuntimeThread_TypeInfo, *(_QWORD *)&maxStackSize);
    sub_1B64870(&System_Threading_Thread_TypeInfo, v5);
    byte_4A0640E = 1;
  }
  v6 = (System_Threading_Thread_o *)sub_1B64ABC(System_Threading_Thread_TypeInfo);
  System_Threading_Thread___ctor_62645500(v6, start, maxStackSize, 0LL);
  v7 = sub_1B64ABC(Internal_Runtime_Augments_RuntimeThread_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_QWORD *)(v7 + 16) = v6;
  sub_1B64814((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v6, v8, v9);
  return (Internal_Runtime_Augments_RuntimeThread_o *)v7;
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
    sub_1B64ACC(0LL, state);
  System_Threading_Thread__Start_62645956(thread, state, 0LL);
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
    sub_1B64ACC(0LL, value);
  System_Threading_Thread__set_IsBackground(thread, value, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Internal_Threading_Tasks_Tracing_TaskTrace__TaskScheduled(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        int32_t CreatingTaskID,
        int32_t TaskCreationOptions,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A0640A & 1) == 0 )
  {
    sub_1B64870(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID);
    byte_4A0640A = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitBegin_Asynchronous(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A06407 & 1) == 0 )
  {
    sub_1B64870(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID);
    byte_4A06407 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitBegin_Synchronous(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A06408 & 1) == 0 )
  {
    sub_1B64870(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID);
    byte_4A06408 = 1;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall Internal_Threading_Tasks_Tracing_TaskTrace__TaskWaitEnd(
        int32_t OriginatingTaskSchedulerID,
        int32_t OriginatingTaskID,
        int32_t TaskID,
        const MethodInfo *method)
{
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A06409 & 1) == 0 )
  {
    sub_1B64870(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID);
    byte_4A06409 = 1;
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
  __int64 v1; // x1
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4A06406 & 1) == 0 )
  {
    sub_1B64870(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, v1);
    byte_4A06406 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    LOBYTE(s_callbacks) = ((__int64 (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, const char *))s_callbacks->klass[1]._1.gc_desc)(
                            s_callbacks,
                            s_callbacks->klass[1]._1.name);
  return (char)s_callbacks;
}