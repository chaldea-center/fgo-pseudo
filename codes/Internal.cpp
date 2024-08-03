System_Byte_array *__fastcall Internal_Cryptography_Helpers__CloneByteArray(
        System_Byte_array *src,
        const MethodInfo *method)
{
  System_Byte_array *result; // x0
  System_Byte_array *v4; // x19

  if ( (byte_4A04314 & 1) == 0 )
  {
    sub_1B640C8(&byte___TypeInfo, method);
    byte_4A04314 = 1;
  }
  if ( !src )
    return 0LL;
  result = (System_Byte_array *)System_Array__Clone((System_Array_o *)src, 0LL);
  if ( result )
  {
    v4 = result;
    result = (System_Byte_array *)sub_1B64204(result, byte___TypeInfo);
    if ( !result )
    {
      sub_1B645E4(v4);
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
  System_Security_Cryptography_RandomNumberGenerator_o *v6; // x19
  System_Security_Cryptography_RandomNumberGenerator_c *klass; // x8
  __int64 v8; // x9
  int *p_offset; // x10
  __int64 v10; // x0

  if ( (byte_4A04315 & 1) == 0 )
  {
    sub_1B640C8(&byte___TypeInfo, method);
    sub_1B640C8(&System_IDisposable_TypeInfo, v3);
    byte_4A04315 = 1;
  }
  v4 = (System_Byte_array *)sub_1B64170(byte___TypeInfo, (unsigned int)count);
  v5 = System_Security_Cryptography_RandomNumberGenerator__Create(0LL);
  v6 = v5;
  if ( !v5 )
    sub_1B64324(0LL);
  ((void (__fastcall *)(System_Security_Cryptography_RandomNumberGenerator_o *, System_Byte_array *, Il2CppMethodPointer))v5->klass->vtable._6_unknown.method)(
    v5,
    v4,
    v5->klass->vtable._7_GetBytes.methodPtr);
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
    v10 = sub_1BB60A8(v6, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RandomNumberGenerator_o *, _QWORD))v10)(v6, *(_QWORD *)(v10 + 8));
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
  __int64 v3; // x1
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x8
  il2cpp_array_size_t v6; // w14
  unsigned int v7; // w15
  int v8; // w16
  il2cpp_array_size_t max_length; // w17
  il2cpp_array_size_t v10; // w16
  unsigned int v11; // w15
  il2cpp_array_size_t v12; // w14
  __int16 v13; // w17

  v2 = bytes;
  if ( (byte_4A04316 & 1) == 0 )
  {
    bytes = (System_Char_array *)sub_1B640C8(&char___TypeInfo, method);
    byte_4A04316 = 1;
  }
  if ( !v2 )
    goto LABEL_19;
  bytes = (System_Char_array *)sub_1B64170(char___TypeInfo, 2 * v2->max_length);
  if ( (int)*(_QWORD *)&v2->max_length >= 1 )
  {
    v4 = (unsigned int)*(_QWORD *)&v2->max_length;
    v5 = 0LL;
    v6 = 0;
    while ( 1 )
    {
      if ( v5 >= v4 )
LABEL_18:
        sub_1B6432C(bytes, v3);
      v7 = *((unsigned __int8 *)&v2->m_Items[2] + v5);
      v8 = v7 >= 0xA0 ? 55 : 48;
      if ( !bytes )
        break;
      max_length = bytes->max_length;
      if ( v6 >= max_length )
        goto LABEL_18;
      v3 = v8 + (v7 >> 4);
      v10 = v6 + 1;
      bytes->m_Items[v6 + 2] = v3;
      if ( v6 + 1 >= max_length )
        goto LABEL_18;
      v11 = v7 & 0xF;
      v12 = v6 + 1;
      if ( v11 >= 0xA )
        v13 = 55;
      else
        v13 = 48;
      ++v5;
      bytes->m_Items[v12 + 2] = v13 + v11;
      v6 = v10 + 1;
      if ( (__int64)v5 >= (int)v4 )
        return bytes;
    }
LABEL_19:
    sub_1B64324(bytes);
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
    sub_1B64324(i);
  if ( arr->max_length <= offset
    || (arr->m_Items[offset + 4] = HIBYTE(i), offset + 1 >= arr->max_length)
    || (arr->m_Items[offset + 5] = BYTE2(i), offset + 2 >= arr->max_length)
    || (arr->m_Items[offset + 6] = BYTE1(i), offset + 3 >= arr->max_length) )
  {
    sub_1B6432C(*(_QWORD *)&i, arr);
  }
  arr->m_Items[offset + 7] = i;
}


void __fastcall Internal_Cryptography_OidLookup___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
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
  __int64 v229; // x1
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v230; // x19
  int32_t v231; // w2
  int32_t v232; // w3
  __int64 v233; // x1
  __int64 v234; // x2
  System_StringComparer_c *v235; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *s_ordinalIgnoreCase; // x19
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v237; // x20
  struct Internal_Cryptography_OidLookup_StaticFields *static_fields; // x0
  int32_t v239; // w2
  int32_t v240; // w3
  __int64 v241; // x1
  __int64 v242; // x2
  System_StringComparer_c *v243; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *v244; // x20
  System_Collections_Generic_Dictionary_object__object__o *v245; // x19
  __int64 v246; // x0
  struct Internal_Cryptography_OidLookup_StaticFields *v247; // x0
  int32_t v248; // w2
  int32_t v249; // w3
  __int64 v250; // x1
  __int64 v251; // x2
  Internal_Cryptography_OidLookup___c_c *v252; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *s_friendlyNameToOid; // x19
  Il2CppObject *v254; // x20
  System_Func_T__TResult__o *v255; // x21
  Il2CppObject *v256; // x20
  __int64 v257; // x1
  __int64 v258; // x2
  System_Func_T__TResult__o *v259; // x22
  System_Collections_Generic_Dictionary_TKey__TElement__o *v260; // x0
  struct Internal_Cryptography_OidLookup_StaticFields *v261; // x8
  int32_t v262; // w2
  int32_t v263; // w3
  __int64 v264; // x1
  __int64 v265; // x2
  System_Collections_Generic_Dictionary_object__object__o *v266; // x19
  struct Internal_Cryptography_OidLookup_StaticFields *v267; // x0
  int32_t v268; // w2
  int32_t v269; // w3

  if ( (byte_4A05E6C & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___75593992, v1);
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__, v3);
    sub_1B640C8(&System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor___75615704, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___, v9);
    sub_1B640C8(&System_Func_KeyValuePair_string__string___string__TypeInfo, v10);
    sub_1B640C8(&Internal_Cryptography_OidLookup_TypeInfo, v11);
    sub_1B640C8(&System_StringComparer_TypeInfo, v12);
    sub_1B640C8(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__, v13);
    sub_1B640C8(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__, v14);
    sub_1B640C8(&Internal_Cryptography_OidLookup___c_TypeInfo, v15);
    sub_1B640C8(&StringLiteral_17357/*"brainpoolP512t1"*/, v16);
    sub_1B640C8(&StringLiteral_1289/*"1.2.840.10046.2.1"*/, v17);
    sub_1B640C8(&StringLiteral_17345/*"brainpoolP160t1"*/, v18);
    sub_1B640C8(&StringLiteral_3591/*"CN"*/, v19);
    sub_1B640C8(&StringLiteral_1299/*"1.2.840.113549.1.1.7"*/, v20);
    sub_1B640C8(&StringLiteral_1373/*"1.3.36.3.3.2.8.1.1.13"*/, v21);
    sub_1B640C8(&StringLiteral_1313/*"1.2.840.113549.1.3.1"*/, v22);
    sub_1B640C8(&StringLiteral_11361/*"S"*/, v23);
    sub_1B640C8(&StringLiteral_1429/*"2.16.840.1.101.3.4.2.1"*/, v24);
    sub_1B640C8(&StringLiteral_1456/*"2.5.4.42"*/, v25);
    sub_1B640C8(&StringLiteral_1372/*"1.3.36.3.3.2.8.1.1.12"*/, v26);
    sub_1B640C8(&StringLiteral_1361/*"1.3.14.3.2.27"*/, v27);
    sub_1B640C8(&StringLiteral_1450/*"2.5.4.18"*/, v28);
    sub_1B640C8(&StringLiteral_1342/*"1.3.132.0.10"*/, v29);
    sub_1B640C8(&StringLiteral_18578/*"dnQualifier"*/, v30);
    sub_1B640C8(&StringLiteral_1298/*"1.2.840.113549.1.1.5"*/, v31);
    sub_1B640C8(&StringLiteral_1458/*"2.5.4.46"*/, v32);
    sub_1B640C8(&StringLiteral_1279/*"1.2.840.10045.3.1.3"*/, v33);
    sub_1B640C8(&StringLiteral_1341/*"1.2.840.113549.3.7"*/, v34);
    sub_1B640C8(&StringLiteral_1423/*"2.16.840.1.101.3.4.1.22"*/, v35);
    sub_1B640C8(&StringLiteral_1462/*"2.5.4.8"*/, v36);
    sub_1B640C8(&StringLiteral_22976/*"secP160r2"*/, v37);
    sub_1B640C8(&StringLiteral_21972/*"nistP192"*/, v38);
    sub_1B640C8(&StringLiteral_1340/*"1.2.840.113549.3.4"*/, v39);
    sub_1B640C8(&StringLiteral_18504/*"des"*/, v40);
    sub_1B640C8(&StringLiteral_1461/*"2.5.4.7"*/, v41);
    sub_1B640C8(&StringLiteral_1284/*"1.2.840.10045.4.1"*/, v42);
    sub_1B640C8(&StringLiteral_5419/*"ECDH_STD_SHA256_KDF"*/, v43);
    sub_1B640C8(&StringLiteral_21429/*"mosaicKMandUpdSig"*/, v44);
    sub_1B640C8(&StringLiteral_1300/*"1.2.840.113549.1.1.8"*/, v45);
    sub_1B640C8(&StringLiteral_21430/*"mosaicUpdatedSig"*/, v46);
    sub_1B640C8(&StringLiteral_15633/*"X21Address"*/, v47);
    sub_1B640C8(&StringLiteral_23143/*"sha256RSA"*/, v48);
    sub_1B640C8(&StringLiteral_3590/*"CMSRC2wrap"*/, v49);
    sub_1B640C8(&StringLiteral_17356/*"brainpoolP512r1"*/, v50);
    sub_1B640C8(&StringLiteral_5418/*"ECDH_STD_SHA1_KDF"*/, v51);
    sub_1B640C8(&StringLiteral_1290/*"1.2.840.113549.1.1.1"*/, v52);
    sub_1B640C8(&StringLiteral_1457/*"2.5.4.43"*/, v53);
    sub_1B640C8(&StringLiteral_1434/*"2.23.43.1.4.9"*/, v54);
    sub_1B640C8(&StringLiteral_24718/*"x962P239v3"*/, v55);
    sub_1B640C8(&StringLiteral_22975/*"secP160r1"*/, v56);
    sub_1B640C8(&StringLiteral_1387/*"1.3.6.1.5.5.7.2.1"*/, v57);
    sub_1B640C8(&StringLiteral_1449/*"2.5.4.17"*/, v58);
    sub_1B640C8(&StringLiteral_1283/*"1.2.840.10045.3.1.7"*/, v59);
    sub_1B640C8(&StringLiteral_10654/*"PostalCode"*/, v60);
    sub_1B640C8(&StringLiteral_1348/*"1.3.132.0.35"*/, v61);
    sub_1B640C8(&StringLiteral_1422/*"2.16.840.1.101.3.4.1.2"*/, v62);
    sub_1B640C8(&StringLiteral_1287/*"1.2.840.10045.4.3.3"*/, v63);
    sub_1B640C8(&StringLiteral_1277/*"1.2.840.10045.3.1.1"*/, v64);
    sub_1B640C8(&StringLiteral_1378/*"1.3.36.3.3.2.8.1.1.5"*/, v65);
    sub_1B640C8(&StringLiteral_6836/*"G"*/, v66);
    sub_1B640C8(&StringLiteral_12112/*"SN"*/, v67);
    sub_1B640C8(&StringLiteral_1282/*"1.2.840.10045.3.1.6"*/, v68);
    sub_1B640C8(&StringLiteral_23149/*"sha512RSA"*/, v69);
    sub_1B640C8(&StringLiteral_24717/*"x962P239v2"*/, v70);
    sub_1B640C8(&StringLiteral_1338/*"1.2.840.113549.2.5"*/, v71);
    sub_1B640C8(&StringLiteral_5409/*"ECC"*/, v72);
    sub_1B640C8(&StringLiteral_1460/*"2.5.4.6"*/, v73);
    sub_1B640C8(&StringLiteral_1324/*"1.2.840.113549.1.9.1"*/, v74);
    sub_1B640C8(&StringLiteral_1376/*"1.3.36.3.3.2.8.1.1.3"*/, v75);
    sub_1B640C8(&StringLiteral_21973/*"nistP224"*/, v76);
    sub_1B640C8(&StringLiteral_1382/*"1.3.36.3.3.2.8.1.1.9"*/, v77);
    sub_1B640C8(&StringLiteral_1336/*"1.2.840.113549.2.2"*/, v78);
    sub_1B640C8(&StringLiteral_1353/*"1.3.133.16.840.63.0.2"*/, v79);
    sub_1B640C8(&StringLiteral_1221/*"0.9.2342.19200300.100.1.25"*/, v80);
    sub_1B640C8(&StringLiteral_1346/*"1.3.132.0.33"*/, v81);
    sub_1B640C8(&StringLiteral_5403/*"E"*/, v82);
    sub_1B640C8(&StringLiteral_23137/*"sha1"*/, v83);
    sub_1B640C8(&StringLiteral_1286/*"1.2.840.10045.4.3.2"*/, v84);
    sub_1B640C8(&StringLiteral_24714/*"x962P192v2"*/, v85);
    sub_1B640C8(&StringLiteral_11080/*"RSA"*/, v86);
    sub_1B640C8(&StringLiteral_17347/*"brainpoolP192t1"*/, v87);
    sub_1B640C8(&StringLiteral_23145/*"sha384ECDSA"*/, v88);
    sub_1B640C8(&StringLiteral_5045/*"DSA"*/, v89);
    sub_1B640C8(&StringLiteral_4996/*"DH"*/, v90);
    sub_1B640C8(&StringLiteral_1381/*"1.3.36.3.3.2.8.1.1.8"*/, v91);
    sub_1B640C8(&StringLiteral_11477/*"SERIALNUMBER"*/, v92);
    sub_1B640C8(&StringLiteral_3589/*"CMS3DESwrap"*/, v93);
    sub_1B640C8(&StringLiteral_23139/*"sha1ECDSA"*/, v94);
    sub_1B640C8(&StringLiteral_1452/*"2.5.4.24"*/, v95);
    sub_1B640C8(&StringLiteral_23140/*"sha1RSA"*/, v96);
    sub_1B640C8(&StringLiteral_1426/*"2.16.840.1.101.3.4.1.45"*/, v97);
    sub_1B640C8(&StringLiteral_1274/*"1.2.840.10040.4.1"*/, v98);
    sub_1B640C8(&StringLiteral_22977/*"secP192k1"*/, v99);
    sub_1B640C8(&StringLiteral_1431/*"2.16.840.1.101.3.4.2.3"*/, v100);
    sub_1B640C8(&StringLiteral_1377/*"1.3.36.3.3.2.8.1.1.4"*/, v101);
    sub_1B640C8(&StringLiteral_1369/*"1.3.36.3.3.2.8.1.1.1"*/, v102);
    sub_1B640C8(&StringLiteral_1292/*"1.2.840.113549.1.1.11"*/, v103);
    sub_1B640C8(&StringLiteral_1425/*"2.16.840.1.101.3.4.1.42"*/, v104);
    sub_1B640C8(&StringLiteral_17351/*"brainpoolP256t1"*/, v105);
    sub_1B640C8(&StringLiteral_7246/*"I"*/, v106);
    sub_1B640C8(&StringLiteral_11083/*"RSASSA-PSS"*/, v107);
    sub_1B640C8(&StringLiteral_24642/*"wtls9"*/, v108);
    sub_1B640C8(&StringLiteral_1288/*"1.2.840.10045.4.3.4"*/, v109);
    sub_1B640C8(&StringLiteral_1327/*"1.2.840.113549.1.9.16.3.6"*/, v110);
    sub_1B640C8(&StringLiteral_4974/*"DC"*/, v111);
    sub_1B640C8(&StringLiteral_21283/*"md2"*/, v112);
    sub_1B640C8(&StringLiteral_1419/*"2.16.840.1.101.2.1.1.19"*/, v113);
    sub_1B640C8(&StringLiteral_1347/*"1.3.132.0.34"*/, v114);
    sub_1B640C8(&StringLiteral_21286/*"md4RSA"*/, v115);
    sub_1B640C8(&StringLiteral_1451/*"2.5.4.20"*/, v116);
    sub_1B640C8(&StringLiteral_13169/*"T"*/, v117);
    sub_1B640C8(&StringLiteral_11082/*"RSAES_OAEP"*/, v118);
    sub_1B640C8(&StringLiteral_8188/*"L"*/, v119);
    sub_1B640C8(&StringLiteral_17355/*"brainpoolP384t1"*/, v120);
    sub_1B640C8(&StringLiteral_1355/*"1.3.14.3.2.13"*/, v121);
    sub_1B640C8(&StringLiteral_24715/*"x962P192v3"*/, v122);
    sub_1B640C8(&StringLiteral_1366/*"1.3.14.7.2.3.1"*/, v123);
    sub_1B640C8(&StringLiteral_23146/*"sha384RSA"*/, v124);
    sub_1B640C8(&StringLiteral_21284/*"md2RSA"*/, v125);
    sub_1B640C8(&StringLiteral_23142/*"sha256ECDSA"*/, v126);
    sub_1B640C8(&StringLiteral_23150/*"shaRSA"*/, v127);
    sub_1B640C8(&StringLiteral_1448/*"2.5.4.13"*/, v128);
    sub_1B640C8(&StringLiteral_23133/*"sha"*/, v129);
    sub_1B640C8(&StringLiteral_21289/*"md5RSA"*/, v130);
    sub_1B640C8(&StringLiteral_23141/*"sha256"*/, v131);
    sub_1B640C8(&StringLiteral_22978/*"secP224k1"*/, v132);
    sub_1B640C8(&StringLiteral_21287/*"md5"*/, v133);
    sub_1B640C8(&StringLiteral_16633/*"aes192"*/, v134);
    sub_1B640C8(&StringLiteral_1293/*"1.2.840.113549.1.1.12"*/, v135);
    sub_1B640C8(&StringLiteral_10563/*"Phone"*/, v136);
    sub_1B640C8(&StringLiteral_1280/*"1.2.840.10045.3.1.4"*/, v137);
    sub_1B640C8(&StringLiteral_1492/*"3des"*/, v138);
    sub_1B640C8(&StringLiteral_21342/*"mgf1"*/, v139);
    sub_1B640C8(&StringLiteral_1453/*"2.5.4.3"*/, v140);
    sub_1B640C8(&StringLiteral_1350/*"1.3.132.0.9"*/, v141);
    sub_1B640C8(&StringLiteral_17349/*"brainpoolP224t1"*/, v142);
    sub_1B640C8(&StringLiteral_5423/*"ECDSA_P384"*/, v143);
    sub_1B640C8(&StringLiteral_1345/*"1.3.132.0.32"*/, v144);
    sub_1B640C8(&StringLiteral_18601/*"dsaSHA1"*/, v145);
    sub_1B640C8(&StringLiteral_1446/*"2.5.4.11"*/, v146);
    sub_1B640C8(&StringLiteral_9563/*"O"*/, v147);
    sub_1B640C8(&StringLiteral_1363/*"1.3.14.3.2.3"*/, v148);
    sub_1B640C8(&StringLiteral_1339/*"1.2.840.113549.3.2"*/, v149);
    sub_1B640C8(&StringLiteral_16631/*"aes128"*/, v150);
    sub_1B640C8(&StringLiteral_1352/*"1.3.132.1.11.2"*/, v151);
    sub_1B640C8(&StringLiteral_1364/*"1.3.14.3.2.4"*/, v152);
    sub_1B640C8(&StringLiteral_10349/*"POBox"*/, v153);
    sub_1B640C8(&StringLiteral_1337/*"1.2.840.113549.2.4"*/, v154);
    sub_1B640C8(&StringLiteral_1351/*"1.3.132.1.11.1"*/, v155);
    sub_1B640C8(&StringLiteral_1275/*"1.2.840.10040.4.3"*/, v156);
    sub_1B640C8(&StringLiteral_1359/*"1.3.14.3.2.22"*/, v157);
    sub_1B640C8(&StringLiteral_1371/*"1.3.36.3.3.2.8.1.1.11"*/, v158);
    sub_1B640C8(&StringLiteral_1295/*"1.2.840.113549.1.1.2"*/, v159);
    sub_1B640C8(&StringLiteral_11084/*"RSA_KEYX"*/, v160);
    sub_1B640C8(&StringLiteral_1447/*"2.5.4.12"*/, v161);
    sub_1B640C8(&StringLiteral_1420/*"2.16.840.1.101.2.1.1.20"*/, v162);
    sub_1B640C8(&StringLiteral_23138/*"sha1DSA"*/, v163);
    sub_1B640C8(&StringLiteral_23325/*"specifiedECDSA"*/, v164);
    sub_1B640C8(&StringLiteral_1344/*"1.3.132.0.31"*/, v165);
    sub_1B640C8(&StringLiteral_17350/*"brainpoolP256r1"*/, v166);
    sub_1B640C8(&StringLiteral_1356/*"1.3.14.3.2.15"*/, v167);
    sub_1B640C8(&StringLiteral_1349/*"1.3.132.0.8"*/, v168);
    sub_1B640C8(&StringLiteral_1294/*"1.2.840.113549.1.1.13"*/, v169);
    sub_1B640C8(&StringLiteral_17344/*"brainpoolP160r1"*/, v170);
    sub_1B640C8(&StringLiteral_24716/*"x962P239v1"*/, v171);
    sub_1B640C8(&StringLiteral_1360/*"1.3.14.3.2.26"*/, v172);
    sub_1B640C8(&StringLiteral_1285/*"1.2.840.10045.4.3"*/, v173);
    sub_1B640C8(&StringLiteral_9700/*"OU"*/, v174);
    sub_1B640C8(&StringLiteral_1276/*"1.2.840.10045.2.1"*/, v175);
    sub_1B640C8(&StringLiteral_1375/*"1.3.36.3.3.2.8.1.1.2"*/, v176);
    sub_1B640C8(&StringLiteral_9263/*"NO_SIGN"*/, v177);
    sub_1B640C8(&StringLiteral_22697/*"rc4"*/, v178);
    sub_1B640C8(&StringLiteral_21285/*"md4"*/, v179);
    sub_1B640C8(&StringLiteral_18718/*"ec192wapi"*/, v180);
    sub_1B640C8(&StringLiteral_1328/*"1.2.840.113549.1.9.16.3.7"*/, v181);
    sub_1B640C8(&StringLiteral_3362/*"C"*/, v182);
    sub_1B640C8(&StringLiteral_1379/*"1.3.36.3.3.2.8.1.1.6"*/, v183);
    sub_1B640C8(&StringLiteral_1281/*"1.2.840.10045.3.1.5"*/, v184);
    sub_1B640C8(&StringLiteral_17354/*"brainpoolP384r1"*/, v185);
    sub_1B640C8(&StringLiteral_17353/*"brainpoolP320t1"*/, v186);
    sub_1B640C8(&StringLiteral_5498/*"ESDH"*/, v187);
    sub_1B640C8(&StringLiteral_23144/*"sha384"*/, v188);
    sub_1B640C8(&StringLiteral_1326/*"1.2.840.113549.1.9.16.3.5"*/, v189);
    sub_1B640C8(&StringLiteral_5420/*"ECDH_STD_SHA384_KDF"*/, v190);
    sub_1B640C8(&StringLiteral_1343/*"1.3.132.0.30"*/, v191);
    sub_1B640C8(&StringLiteral_1358/*"1.3.14.3.2.2"*/, v192);
    sub_1B640C8(&StringLiteral_1357/*"1.3.14.3.2.18"*/, v193);
    sub_1B640C8(&StringLiteral_1297/*"1.2.840.113549.1.1.4"*/, v194);
    sub_1B640C8(&StringLiteral_3908/*"CPS"*/, v195);
    sub_1B640C8(&StringLiteral_1463/*"2.5.4.9"*/, v196);
    sub_1B640C8(&StringLiteral_1278/*"1.2.840.10045.3.1.2"*/, v197);
    sub_1B640C8(&StringLiteral_23147/*"sha512"*/, v198);
    sub_1B640C8(&StringLiteral_1380/*"1.3.36.3.3.2.8.1.1.7"*/, v199);
    sub_1B640C8(&StringLiteral_1427/*"2.16.840.1.101.3.4.1.5"*/, v200);
    sub_1B640C8(&StringLiteral_16632/*"aes128wrap"*/, v201);
    sub_1B640C8(&StringLiteral_1390/*"1.3.6.1.5.5.7.6.2"*/, v202);
    sub_1B640C8(&StringLiteral_5424/*"ECDSA_P521"*/, v203);
    sub_1B640C8(&StringLiteral_22974/*"secP160k1"*/, v204);
    sub_1B640C8(&StringLiteral_1430/*"2.16.840.1.101.3.4.2.2"*/, v205);
    sub_1B640C8(&StringLiteral_1365/*"1.3.14.3.2.7"*/, v206);
    sub_1B640C8(&StringLiteral_16636/*"aes256wrap"*/, v207);
    sub_1B640C8(&StringLiteral_1445/*"2.5.4.10"*/, v208);
    sub_1B640C8(&StringLiteral_23148/*"sha512ECDSA"*/, v209);
    sub_1B640C8(&StringLiteral_1354/*"1.3.14.3.2.12"*/, v210);
    sub_1B640C8(&StringLiteral_1296/*"1.2.840.113549.1.1.3"*/, v211);
    sub_1B640C8(&StringLiteral_22979/*"secP256k1"*/, v212);
    sub_1B640C8(&StringLiteral_1374/*"1.3.36.3.3.2.8.1.1.14"*/, v213);
    sub_1B640C8(&StringLiteral_5422/*"ECDSA_P256"*/, v214);
    sub_1B640C8(&StringLiteral_1362/*"1.3.14.3.2.29"*/, v215);
    sub_1B640C8(&StringLiteral_16634/*"aes192wrap"*/, v216);
    sub_1B640C8(&StringLiteral_1273/*"1.2.156.11235.1.1.2.1"*/, v217);
    sub_1B640C8(&StringLiteral_5254/*"Description"*/, v218);
    sub_1B640C8(&StringLiteral_22696/*"rc2"*/, v219);
    sub_1B640C8(&StringLiteral_17346/*"brainpoolP192r1"*/, v220);
    sub_1B640C8(&StringLiteral_1459/*"2.5.4.5"*/, v221);
    sub_1B640C8(&StringLiteral_16635/*"aes256"*/, v222);
    sub_1B640C8(&StringLiteral_17348/*"brainpoolP224r1"*/, v223);
    sub_1B640C8(&StringLiteral_17352/*"brainpoolP320r1"*/, v224);
    sub_1B640C8(&StringLiteral_1370/*"1.3.36.3.3.2.8.1.1.10"*/, v225);
    sub_1B640C8(&StringLiteral_1291/*"1.2.840.113549.1.1.10"*/, v226);
    sub_1B640C8(&StringLiteral_1424/*"2.16.840.1.101.3.4.1.25"*/, v227);
    sub_1B640C8(&StringLiteral_12256/*"STREET"*/, v228);
    sub_1B640C8(&StringLiteral_1454/*"2.5.4.4"*/, v229);
    byte_4A05E6C = 1;
  }
  v230 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1B64314(
                                                                                 System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo,
                                                                                 v1,
                                                                                 v2);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor(
    v230,
    (const MethodInfo_30B69E0 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
  Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_lateBoundOidToFriendlyName = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v230;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)Internal_Cryptography_OidLookup_TypeInfo->static_fields,
    (int32_t)v230,
    v231,
    v232);
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
  if ( !byte_4A03EEB )
  {
    sub_1B640C8(&System_StringComparer_TypeInfo, v233);
    byte_4A03EEB = 1;
  }
  v235 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v235 = System_StringComparer_TypeInfo;
  }
  s_ordinalIgnoreCase = (System_Collections_Generic_IEqualityComparer_TKey__o *)v235->static_fields->s_ordinalIgnoreCase;
  v237 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1B64314(
                                                                                 System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo,
                                                                                 v233,
                                                                                 v234);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor_51079760(
    v237,
    s_ordinalIgnoreCase,
    (const MethodInfo_30B6A50 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___75593992);
  static_fields = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  static_fields->s_lateBoundFriendlyNameToOid = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v237;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&static_fields->s_lateBoundFriendlyNameToOid,
    (int32_t)v237,
    v239,
    v240);
  if ( !byte_4A03EEB )
  {
    sub_1B640C8(&System_StringComparer_TypeInfo, v241);
    byte_4A03EEB = 1;
  }
  v243 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo);
    v243 = System_StringComparer_TypeInfo;
  }
  v244 = (System_Collections_Generic_IEqualityComparer_TKey__o *)v243->static_fields->s_ordinalIgnoreCase;
  v245 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                      System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                      v241,
                                                                      v242);
  System_Collections_Generic_Dictionary_object__object____ctor_51874420(
    v245,
    v244,
    (const MethodInfo_3178A74 *)Method_System_Collections_Generic_Dictionary_string__string___ctor___75615704);
  if ( !v245 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_1492/*"3des"*/,
    (Il2CppObject *)StringLiteral_1341/*"1.2.840.113549.3.7"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_16631/*"aes128"*/,
    (Il2CppObject *)StringLiteral_1422/*"2.16.840.1.101.3.4.1.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_16632/*"aes128wrap"*/,
    (Il2CppObject *)StringLiteral_1427/*"2.16.840.1.101.3.4.1.5"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_16633/*"aes192"*/,
    (Il2CppObject *)StringLiteral_1423/*"2.16.840.1.101.3.4.1.22"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_16634/*"aes192wrap"*/,
    (Il2CppObject *)StringLiteral_1424/*"2.16.840.1.101.3.4.1.25"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_16635/*"aes256"*/,
    (Il2CppObject *)StringLiteral_1425/*"2.16.840.1.101.3.4.1.42"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_16636/*"aes256wrap"*/,
    (Il2CppObject *)StringLiteral_1426/*"2.16.840.1.101.3.4.1.45"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17344/*"brainpoolP160r1"*/,
    (Il2CppObject *)StringLiteral_1369/*"1.3.36.3.3.2.8.1.1.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17345/*"brainpoolP160t1"*/,
    (Il2CppObject *)StringLiteral_1375/*"1.3.36.3.3.2.8.1.1.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17346/*"brainpoolP192r1"*/,
    (Il2CppObject *)StringLiteral_1376/*"1.3.36.3.3.2.8.1.1.3"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17347/*"brainpoolP192t1"*/,
    (Il2CppObject *)StringLiteral_1377/*"1.3.36.3.3.2.8.1.1.4"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17348/*"brainpoolP224r1"*/,
    (Il2CppObject *)StringLiteral_1378/*"1.3.36.3.3.2.8.1.1.5"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17349/*"brainpoolP224t1"*/,
    (Il2CppObject *)StringLiteral_1379/*"1.3.36.3.3.2.8.1.1.6"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17350/*"brainpoolP256r1"*/,
    (Il2CppObject *)StringLiteral_1380/*"1.3.36.3.3.2.8.1.1.7"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17351/*"brainpoolP256t1"*/,
    (Il2CppObject *)StringLiteral_1381/*"1.3.36.3.3.2.8.1.1.8"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17352/*"brainpoolP320r1"*/,
    (Il2CppObject *)StringLiteral_1382/*"1.3.36.3.3.2.8.1.1.9"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17353/*"brainpoolP320t1"*/,
    (Il2CppObject *)StringLiteral_1370/*"1.3.36.3.3.2.8.1.1.10"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17354/*"brainpoolP384r1"*/,
    (Il2CppObject *)StringLiteral_1371/*"1.3.36.3.3.2.8.1.1.11"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17355/*"brainpoolP384t1"*/,
    (Il2CppObject *)StringLiteral_1372/*"1.3.36.3.3.2.8.1.1.12"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17356/*"brainpoolP512r1"*/,
    (Il2CppObject *)StringLiteral_1373/*"1.3.36.3.3.2.8.1.1.13"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_17357/*"brainpoolP512t1"*/,
    (Il2CppObject *)StringLiteral_1374/*"1.3.36.3.3.2.8.1.1.14"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_3362/*"C"*/,
    (Il2CppObject *)StringLiteral_1460/*"2.5.4.6"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_3589/*"CMS3DESwrap"*/,
    (Il2CppObject *)StringLiteral_1327/*"1.2.840.113549.1.9.16.3.6"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_3590/*"CMSRC2wrap"*/,
    (Il2CppObject *)StringLiteral_1328/*"1.2.840.113549.1.9.16.3.7"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_3591/*"CN"*/,
    (Il2CppObject *)StringLiteral_1453/*"2.5.4.3"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_3908/*"CPS"*/,
    (Il2CppObject *)StringLiteral_1387/*"1.3.6.1.5.5.7.2.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_4974/*"DC"*/,
    (Il2CppObject *)StringLiteral_1221/*"0.9.2342.19200300.100.1.25"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_18504/*"des"*/,
    (Il2CppObject *)StringLiteral_1365/*"1.3.14.3.2.7"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5254/*"Description"*/,
    (Il2CppObject *)StringLiteral_1448/*"2.5.4.13"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_4996/*"DH"*/,
    (Il2CppObject *)StringLiteral_1289/*"1.2.840.10046.2.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_18578/*"dnQualifier"*/,
    (Il2CppObject *)StringLiteral_1458/*"2.5.4.46"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5045/*"DSA"*/,
    (Il2CppObject *)StringLiteral_1274/*"1.2.840.10040.4.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_18601/*"dsaSHA1"*/,
    (Il2CppObject *)StringLiteral_1361/*"1.3.14.3.2.27"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5403/*"E"*/,
    (Il2CppObject *)StringLiteral_1324/*"1.2.840.113549.1.9.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_18718/*"ec192wapi"*/,
    (Il2CppObject *)StringLiteral_1273/*"1.2.156.11235.1.1.2.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5409/*"ECC"*/,
    (Il2CppObject *)StringLiteral_1276/*"1.2.840.10045.2.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5418/*"ECDH_STD_SHA1_KDF"*/,
    (Il2CppObject *)StringLiteral_1353/*"1.3.133.16.840.63.0.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5419/*"ECDH_STD_SHA256_KDF"*/,
    (Il2CppObject *)StringLiteral_1351/*"1.3.132.1.11.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5420/*"ECDH_STD_SHA384_KDF"*/,
    (Il2CppObject *)StringLiteral_1352/*"1.3.132.1.11.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5422/*"ECDSA_P256"*/,
    (Il2CppObject *)StringLiteral_1283/*"1.2.840.10045.3.1.7"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5423/*"ECDSA_P384"*/,
    (Il2CppObject *)StringLiteral_1347/*"1.3.132.0.34"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5424/*"ECDSA_P521"*/,
    (Il2CppObject *)StringLiteral_1348/*"1.3.132.0.35"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_5498/*"ESDH"*/,
    (Il2CppObject *)StringLiteral_1326/*"1.2.840.113549.1.9.16.3.5"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_6836/*"G"*/,
    (Il2CppObject *)StringLiteral_1456/*"2.5.4.42"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_7246/*"I"*/,
    (Il2CppObject *)StringLiteral_1457/*"2.5.4.43"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_8188/*"L"*/,
    (Il2CppObject *)StringLiteral_1461/*"2.5.4.7"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21283/*"md2"*/,
    (Il2CppObject *)StringLiteral_1336/*"1.2.840.113549.2.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21284/*"md2RSA"*/,
    (Il2CppObject *)StringLiteral_1295/*"1.2.840.113549.1.1.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21285/*"md4"*/,
    (Il2CppObject *)StringLiteral_1337/*"1.2.840.113549.2.4"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21286/*"md4RSA"*/,
    (Il2CppObject *)StringLiteral_1296/*"1.2.840.113549.1.1.3"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21287/*"md5"*/,
    (Il2CppObject *)StringLiteral_1338/*"1.2.840.113549.2.5"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21289/*"md5RSA"*/,
    (Il2CppObject *)StringLiteral_1297/*"1.2.840.113549.1.1.4"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21342/*"mgf1"*/,
    (Il2CppObject *)StringLiteral_1300/*"1.2.840.113549.1.1.8"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21429/*"mosaicKMandUpdSig"*/,
    (Il2CppObject *)StringLiteral_1420/*"2.16.840.1.101.2.1.1.20"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21430/*"mosaicUpdatedSig"*/,
    (Il2CppObject *)StringLiteral_1419/*"2.16.840.1.101.2.1.1.19"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21972/*"nistP192"*/,
    (Il2CppObject *)StringLiteral_1277/*"1.2.840.10045.3.1.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_21973/*"nistP224"*/,
    (Il2CppObject *)StringLiteral_1346/*"1.3.132.0.33"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_9263/*"NO_SIGN"*/,
    (Il2CppObject *)StringLiteral_1390/*"1.3.6.1.5.5.7.6.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_9563/*"O"*/,
    (Il2CppObject *)StringLiteral_1445/*"2.5.4.10"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_9700/*"OU"*/,
    (Il2CppObject *)StringLiteral_1446/*"2.5.4.11"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_10563/*"Phone"*/,
    (Il2CppObject *)StringLiteral_1451/*"2.5.4.20"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_10349/*"POBox"*/,
    (Il2CppObject *)StringLiteral_1450/*"2.5.4.18"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_10654/*"PostalCode"*/,
    (Il2CppObject *)StringLiteral_1449/*"2.5.4.17"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_22696/*"rc2"*/,
    (Il2CppObject *)StringLiteral_1339/*"1.2.840.113549.3.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_22697/*"rc4"*/,
    (Il2CppObject *)StringLiteral_1340/*"1.2.840.113549.3.4"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_11080/*"RSA"*/,
    (Il2CppObject *)StringLiteral_1290/*"1.2.840.113549.1.1.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_11082/*"RSAES_OAEP"*/,
    (Il2CppObject *)StringLiteral_1299/*"1.2.840.113549.1.1.7"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_11083/*"RSASSA-PSS"*/,
    (Il2CppObject *)StringLiteral_1291/*"1.2.840.113549.1.1.10"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_11361/*"S"*/,
    (Il2CppObject *)StringLiteral_1462/*"2.5.4.8"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_22974/*"secP160k1"*/,
    (Il2CppObject *)StringLiteral_1350/*"1.3.132.0.9"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_22975/*"secP160r1"*/,
    (Il2CppObject *)StringLiteral_1349/*"1.3.132.0.8"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_22976/*"secP160r2"*/,
    (Il2CppObject *)StringLiteral_1343/*"1.3.132.0.30"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_22977/*"secP192k1"*/,
    (Il2CppObject *)StringLiteral_1344/*"1.3.132.0.31"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_22978/*"secP224k1"*/,
    (Il2CppObject *)StringLiteral_1345/*"1.3.132.0.32"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_22979/*"secP256k1"*/,
    (Il2CppObject *)StringLiteral_1342/*"1.3.132.0.10"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_11477/*"SERIALNUMBER"*/,
    (Il2CppObject *)StringLiteral_1459/*"2.5.4.5"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23137/*"sha1"*/,
    (Il2CppObject *)StringLiteral_1360/*"1.3.14.3.2.26"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23138/*"sha1DSA"*/,
    (Il2CppObject *)StringLiteral_1275/*"1.2.840.10040.4.3"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23139/*"sha1ECDSA"*/,
    (Il2CppObject *)StringLiteral_1284/*"1.2.840.10045.4.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23140/*"sha1RSA"*/,
    (Il2CppObject *)StringLiteral_1298/*"1.2.840.113549.1.1.5"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23141/*"sha256"*/,
    (Il2CppObject *)StringLiteral_1429/*"2.16.840.1.101.3.4.2.1"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23142/*"sha256ECDSA"*/,
    (Il2CppObject *)StringLiteral_1286/*"1.2.840.10045.4.3.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23143/*"sha256RSA"*/,
    (Il2CppObject *)StringLiteral_1292/*"1.2.840.113549.1.1.11"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23144/*"sha384"*/,
    (Il2CppObject *)StringLiteral_1430/*"2.16.840.1.101.3.4.2.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23145/*"sha384ECDSA"*/,
    (Il2CppObject *)StringLiteral_1287/*"1.2.840.10045.4.3.3"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23146/*"sha384RSA"*/,
    (Il2CppObject *)StringLiteral_1293/*"1.2.840.113549.1.1.12"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23147/*"sha512"*/,
    (Il2CppObject *)StringLiteral_1431/*"2.16.840.1.101.3.4.2.3"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23148/*"sha512ECDSA"*/,
    (Il2CppObject *)StringLiteral_1288/*"1.2.840.10045.4.3.4"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23149/*"sha512RSA"*/,
    (Il2CppObject *)StringLiteral_1294/*"1.2.840.113549.1.1.13"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_12112/*"SN"*/,
    (Il2CppObject *)StringLiteral_1454/*"2.5.4.4"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_23325/*"specifiedECDSA"*/,
    (Il2CppObject *)StringLiteral_1285/*"1.2.840.10045.4.3"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_12256/*"STREET"*/,
    (Il2CppObject *)StringLiteral_1463/*"2.5.4.9"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_13169/*"T"*/,
    (Il2CppObject *)StringLiteral_1447/*"2.5.4.12"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_24642/*"wtls9"*/,
    (Il2CppObject *)StringLiteral_1434/*"2.23.43.1.4.9"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_15633/*"X21Address"*/,
    (Il2CppObject *)StringLiteral_1452/*"2.5.4.24"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_24714/*"x962P192v2"*/,
    (Il2CppObject *)StringLiteral_1278/*"1.2.840.10045.3.1.2"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_24715/*"x962P192v3"*/,
    (Il2CppObject *)StringLiteral_1279/*"1.2.840.10045.3.1.3"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_24716/*"x962P239v1"*/,
    (Il2CppObject *)StringLiteral_1280/*"1.2.840.10045.3.1.4"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_24717/*"x962P239v2"*/,
    (Il2CppObject *)StringLiteral_1281/*"1.2.840.10045.3.1.5"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v245,
    (Il2CppObject *)StringLiteral_24718/*"x962P239v3"*/,
    (Il2CppObject *)StringLiteral_1282/*"1.2.840.10045.3.1.6"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v247 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v247->s_friendlyNameToOid = (struct System_Collections_Generic_Dictionary_string__string__o *)v245;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v247->s_friendlyNameToOid, (int32_t)v245, v248, v249);
  v252 = Internal_Cryptography_OidLookup___c_TypeInfo;
  s_friendlyNameToOid = Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_friendlyNameToOid;
  if ( !Internal_Cryptography_OidLookup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup___c_TypeInfo);
    v252 = Internal_Cryptography_OidLookup___c_TypeInfo;
  }
  v254 = (Il2CppObject *)v252->static_fields->__9;
  v255 = (System_Func_T__TResult__o *)sub_1B64314(
                                        System_Func_KeyValuePair_string__string___string__TypeInfo,
                                        v250,
                                        v251);
  System_Func_KeyValuePair_object__object___object____ctor(
    v255,
    v254,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__,
    0LL);
  v256 = (Il2CppObject *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9;
  v259 = (System_Func_T__TResult__o *)sub_1B64314(
                                        System_Func_KeyValuePair_string__string___string__TypeInfo,
                                        v257,
                                        v258);
  System_Func_KeyValuePair_object__object___object____ctor(
    v259,
    v256,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__,
    0LL);
  v260 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)s_friendlyNameToOid,
           (System_Func_TSource__TKey__o *)v255,
           (System_Func_TSource__TElement__o *)v259,
           (const MethodInfo_2E718F8 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
  v261 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v261->s_oidToFriendlyName = (struct System_Collections_Generic_Dictionary_string__string__o *)v260;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v261->s_oidToFriendlyName, (int32_t)v260, v262, v263);
  v266 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                      System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                      v264,
                                                                      v265);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v266,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v266 )
LABEL_18:
    sub_1B64324(v246);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1313/*"1.2.840.113549.1.3.1"*/,
    (Il2CppObject *)StringLiteral_4996/*"DH"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1354/*"1.3.14.3.2.12"*/,
    (Il2CppObject *)StringLiteral_5045/*"DSA"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1355/*"1.3.14.3.2.13"*/,
    (Il2CppObject *)StringLiteral_23138/*"sha1DSA"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1356/*"1.3.14.3.2.15"*/,
    (Il2CppObject *)StringLiteral_23150/*"shaRSA"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1357/*"1.3.14.3.2.18"*/,
    (Il2CppObject *)StringLiteral_23133/*"sha"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1358/*"1.3.14.3.2.2"*/,
    (Il2CppObject *)StringLiteral_21286/*"md4RSA"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1359/*"1.3.14.3.2.22"*/,
    (Il2CppObject *)StringLiteral_11084/*"RSA_KEYX"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1362/*"1.3.14.3.2.29"*/,
    (Il2CppObject *)StringLiteral_23140/*"sha1RSA"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1363/*"1.3.14.3.2.3"*/,
    (Il2CppObject *)StringLiteral_21289/*"md5RSA"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1364/*"1.3.14.3.2.4"*/,
    (Il2CppObject *)StringLiteral_21286/*"md4RSA"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v266,
    (Il2CppObject *)StringLiteral_1366/*"1.3.14.7.2.3.1"*/,
    (Il2CppObject *)StringLiteral_21284/*"md2RSA"*/,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v267 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v267->s_compatOids = (struct System_Collections_Generic_Dictionary_string__string__o *)v266;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v267->s_compatOids, (int32_t)v266, v268, v269);
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

  if ( (byte_4A05E6B & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6306/*"Extended Key Usage"*/, *(_QWORD *)&oidGroup);
    sub_1B640C8(&StringLiteral_1438/*"2.5.29.17"*/, v5);
    sub_1B640C8(&StringLiteral_1333/*"1.2.840.113549.1.9.4"*/, v6);
    sub_1B640C8(&StringLiteral_8162/*"Key Usage"*/, v7);
    sub_1B640C8(&StringLiteral_1334/*"1.2.840.113549.1.9.5"*/, v8);
    sub_1B640C8(&StringLiteral_8956/*"Message Digest"*/, v9);
    sub_1B640C8(&StringLiteral_1332/*"1.2.840.113549.1.9.3"*/, v10);
    sub_1B640C8(&StringLiteral_1433/*"2.16.840.1.113730.1.1"*/, v11);
    sub_1B640C8(&StringLiteral_12707/*"Signing Time"*/, v12);
    sub_1B640C8(&StringLiteral_1444/*"2.5.29.37"*/, v13);
    sub_1B640C8(&StringLiteral_1436/*"2.5.29.14"*/, v14);
    sub_1B640C8(&StringLiteral_1325/*"1.2.840.113549.1.9.16.3.3"*/, v15);
    sub_1B640C8(&StringLiteral_10333/*"PKCS 7 Data"*/, v16);
    sub_1B640C8(&StringLiteral_3183/*"Basic Constraints"*/, v17);
    sub_1B640C8(&StringLiteral_12983/*"Subject Alternative Name"*/, v18);
    sub_1B640C8(&StringLiteral_4692/*"Content Type"*/, v19);
    sub_1B640C8(&StringLiteral_12984/*"Subject Key Identifier"*/, v20);
    sub_1B640C8(&StringLiteral_1437/*"2.5.29.15"*/, v21);
    sub_1B640C8(&StringLiteral_9346/*"Netscape Cert Type"*/, v22);
    sub_1B640C8(&StringLiteral_1320/*"1.2.840.113549.1.7.1"*/, v23);
    sub_1B640C8(&StringLiteral_1440/*"2.5.29.19"*/, v24);
    sub_1B640C8(&StringLiteral_20123/*"id-smime-alg-3DESwrap"*/, v25);
    byte_4A05E6B = 1;
  }
  v26 = PrivateImplementationDetails___ComputeStringHash_67830176(friendlyName, 0LL);
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
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_8956/*"Message Digest"*/, 0LL);
          v28 = &StringLiteral_1333/*"1.2.840.113549.1.9.4"*/;
          break;
        case 0xE2748DE9:
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_20123/*"id-smime-alg-3DESwrap"*/, 0LL);
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
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_9346/*"Netscape Cert Type"*/, 0LL);
          v28 = &StringLiteral_1433/*"2.16.840.1.113730.1.1"*/;
          break;
        case 0xB4301663:
          v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12983/*"Subject Alternative Name"*/, 0LL);
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
        v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12984/*"Subject Key Identifier"*/, 0LL);
        v28 = &StringLiteral_1436/*"2.5.29.14"*/;
        break;
      case 0x5F357EFDu:
        v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12707/*"Signing Time"*/, 0LL);
        v28 = &StringLiteral_1334/*"1.2.840.113549.1.9.5"*/;
        break;
      case 0x751680DDu:
        v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_3183/*"Basic Constraints"*/, 0LL);
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
        v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_10333/*"PKCS 7 Data"*/, 0LL);
        v28 = &StringLiteral_1320/*"1.2.840.113549.1.7.1"*/;
        goto LABEL_29;
      }
      return 0LL;
    }
    v27 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_8162/*"Key Usage"*/, 0LL);
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

  if ( (byte_4A05E6A & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_6306/*"Extended Key Usage"*/, *(_QWORD *)&oidGroup);
    sub_1B640C8(&StringLiteral_1438/*"2.5.29.17"*/, v5);
    sub_1B640C8(&StringLiteral_1333/*"1.2.840.113549.1.9.4"*/, v6);
    sub_1B640C8(&StringLiteral_8162/*"Key Usage"*/, v7);
    sub_1B640C8(&StringLiteral_1334/*"1.2.840.113549.1.9.5"*/, v8);
    sub_1B640C8(&StringLiteral_8956/*"Message Digest"*/, v9);
    sub_1B640C8(&StringLiteral_1332/*"1.2.840.113549.1.9.3"*/, v10);
    sub_1B640C8(&StringLiteral_1433/*"2.16.840.1.113730.1.1"*/, v11);
    sub_1B640C8(&StringLiteral_12707/*"Signing Time"*/, v12);
    sub_1B640C8(&StringLiteral_1444/*"2.5.29.37"*/, v13);
    sub_1B640C8(&StringLiteral_1436/*"2.5.29.14"*/, v14);
    sub_1B640C8(&StringLiteral_1325/*"1.2.840.113549.1.9.16.3.3"*/, v15);
    sub_1B640C8(&StringLiteral_10333/*"PKCS 7 Data"*/, v16);
    sub_1B640C8(&StringLiteral_3183/*"Basic Constraints"*/, v17);
    sub_1B640C8(&StringLiteral_12983/*"Subject Alternative Name"*/, v18);
    sub_1B640C8(&StringLiteral_4692/*"Content Type"*/, v19);
    sub_1B640C8(&StringLiteral_12984/*"Subject Key Identifier"*/, v20);
    sub_1B640C8(&StringLiteral_1437/*"2.5.29.15"*/, v21);
    sub_1B640C8(&StringLiteral_9346/*"Netscape Cert Type"*/, v22);
    sub_1B640C8(&StringLiteral_1320/*"1.2.840.113549.1.7.1"*/, v23);
    sub_1B640C8(&StringLiteral_1440/*"2.5.29.19"*/, v24);
    sub_1B640C8(&StringLiteral_20123/*"id-smime-alg-3DESwrap"*/, v25);
    byte_4A05E6A = 1;
  }
  v26 = PrivateImplementationDetails___ComputeStringHash_67830176(oid, 0LL);
  if ( v26 > 0xC67AB912 )
  {
    if ( v26 > 0xD20A3896 )
    {
      switch ( v26 )
      {
        case 0xD30A3A29:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1437/*"2.5.29.15"*/, 0LL);
          v28 = &StringLiteral_8162/*"Key Usage"*/;
          break;
        case 0xDC06204E:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1433/*"2.16.840.1.113730.1.1"*/, 0LL);
          v28 = &StringLiteral_9346/*"Netscape Cert Type"*/;
          break;
        case 0xDF0A4D0D:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1440/*"2.5.29.19"*/, 0LL);
          v28 = &StringLiteral_3183/*"Basic Constraints"*/;
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
          v28 = &StringLiteral_12983/*"Subject Alternative Name"*/;
          break;
        case 0xD20A3896:
          v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1436/*"2.5.29.14"*/, 0LL);
          v28 = &StringLiteral_12984/*"Subject Key Identifier"*/;
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
        v28 = &StringLiteral_8956/*"Message Digest"*/;
        break;
      case 0xB1E05402:
        v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1332/*"1.2.840.113549.1.9.3"*/, 0LL);
        v28 = &StringLiteral_4692/*"Content Type"*/;
        break;
      case 0xC67AB912:
        v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1325/*"1.2.840.113549.1.9.16.3.3"*/, 0LL);
        v28 = &StringLiteral_20123/*"id-smime-alg-3DESwrap"*/;
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
        v28 = &StringLiteral_10333/*"PKCS 7 Data"*/;
        goto LABEL_29;
      }
      return 0LL;
    }
    v27 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1334/*"1.2.840.113549.1.9.5"*/, 0LL);
    v28 = &StringLiteral_12707/*"Signing Time"*/;
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
  __int64 v17; // x1
  __int64 v18; // x2
  System_ArgumentNullException_o *v19; // x19
  System_String_o *v20; // x0
  __int64 v21; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A05E68 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__,
      *(_QWORD *)&oidGroup);
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v6);
    sub_1B640C8(&Internal_Cryptography_OidLookup_TypeInfo, v7);
    byte_4A05E68 = 1;
  }
  value = 0LL;
  if ( !oid )
  {
    v16 = sub_1B640DC(&System_ArgumentNullException_TypeInfo);
    v19 = (System_ArgumentNullException_o *)sub_1B64314(v16, v17, v18);
    v20 = (System_String_o *)sub_1B640DC(&StringLiteral_22134/*"oid"*/);
    System_ArgumentNullException___ctor_61977536(v19, v20, 0LL);
    v21 = sub_1B640DC(&Method_Internal_Cryptography_OidLookup_ToFriendlyName__);
    sub_1B641F0(v19, v21);
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
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
            (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
              (const MethodInfo_30B7878 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
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
              (const MethodInfo_30B71F4 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
            return (System_String_o *)value;
          }
LABEL_25:
          sub_1B64324(s_oidToFriendlyName);
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
  __int64 v16; // x1
  __int64 v17; // x2
  System_ArgumentNullException_o *v18; // x19
  System_String_o *v19; // x0
  __int64 v20; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4A05E69 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__,
      *(_QWORD *)&oidGroup);
    sub_1B640C8(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v6);
    sub_1B640C8(&Internal_Cryptography_OidLookup_TypeInfo, v7);
    byte_4A05E69 = 1;
  }
  value = 0LL;
  if ( !friendlyName )
  {
    v15 = sub_1B640DC(&System_ArgumentNullException_TypeInfo);
    v18 = (System_ArgumentNullException_o *)sub_1B64314(v15, v16, v17);
    v19 = (System_String_o *)sub_1B640DC(&StringLiteral_19575/*"friendlyName"*/);
    System_ArgumentNullException___ctor_61977536(v18, v19, 0LL);
    v20 = sub_1B640DC(&Method_Internal_Cryptography_OidLookup_ToOid__);
    sub_1B641F0(v18, v20);
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
         (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
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
         (const MethodInfo_30B7878 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
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
        (const MethodInfo_30B71F4 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
      return (System_String_o *)value;
    }
LABEL_25:
    sub_1B64324(s_friendlyNameToOid);
  }
  return result;
}


void __fastcall Internal_Cryptography_OidLookup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A05E6D & 1) == 0 )
  {
    sub_1B640C8(&Internal_Cryptography_OidLookup___c_TypeInfo, v1);
    byte_4A05E6D = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(Internal_Cryptography_OidLookup___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9 = (struct Internal_Cryptography_OidLookup___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
  if ( (byte_4A05E6E & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, kvp.fields.key);
    byte_4A05E6E = 1;
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
  if ( (byte_4A05E6F & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, kvp.fields.key);
    byte_4A05E6F = 1;
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
  System_Security_Cryptography_DerSequenceReader_o *v13; // x22
  unsigned int Integer; // w0
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  System_Security_Cryptography_CryptographicException_o *v18; // x19
  struct System_Byte_array *IntegerBytes; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Security_Cryptography_DerSequenceReader_o *v22; // x23
  struct System_String_o *OidAsString; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Byte_array *NextEncodedValue; // x1
  _QWORD *v29; // x24
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0
  System_Byte_array *v33; // x23
  __int64 v34; // x1
  __int64 v35; // x2
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v36; // x24
  int32_t v37; // w2
  int32_t v38; // w3
  System_Security_Cryptography_DerSequenceReader_o *v39; // x23
  System_Byte_array *v40; // x23
  __int64 v41; // x1
  __int64 v42; // x2
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v43; // x24
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Byte_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Byte_array *SubjectPublicKeyInfo; // x24
  __int64 v50; // x1
  __int64 v51; // x2
  System_Security_Cryptography_DerSequenceReader_o *v52; // x23
  System_Security_Cryptography_DerSequenceReader_o *v53; // x24
  struct System_String_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Byte_array *v59; // x1
  _QWORD *v60; // x25
  __int64 v61; // x8
  __int64 v62; // x0
  __int64 v63; // x0
  struct System_Byte_array *BitString; // x0
  int32_t v65; // w2
  int32_t v66; // w3
  int32_t v67; // w2
  int32_t v68; // w3
  struct System_Byte_array *v69; // x0
  int32_t v70; // w1
  struct System_Byte_array **p_IssuerUniqueId; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  struct System_Byte_array *v74; // x0
  int32_t v75; // w1
  struct System_Byte_array **p_SubjectUniqueId; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  System_Collections_Generic_List_object__o *v79; // x24
  int32_t v80; // w2
  int32_t v81; // w3
  System_Security_Cryptography_DerSequenceReader_o *v82; // x24
  System_Security_Cryptography_DerSequenceReader_o *v83; // x25
  System_String_o *v84; // x28
  bool v85; // w29
  System_Byte_array *OctetString; // x0
  System_Collections_Generic_List_object__o *Extensions; // x26
  System_Byte_array *v88; // x19
  __int64 v89; // x1
  __int64 v90; // x2
  System_Security_Cryptography_X509Certificates_X509Extension_o *v91; // x27
  int32_t v92; // w2
  int32_t v93; // w3
  struct System_Object_array *items; // x8
  _QWORD *v95; // x9
  __int64 size; // x10
  Il2CppClass **v97; // x0
  __int64 v98; // x0
  __int64 v99; // x1
  __int64 v100; // x2
  System_String_o *v101; // x0
  __int64 v102; // x0
  System_Security_Cryptography_DerSequenceReader_o *v103; // x22
  struct System_String_o *v104; // x0
  int32_t v105; // w2
  int32_t v106; // w3
  int32_t v107; // w2
  int32_t v108; // w3
  struct System_Byte_array *v109; // x1
  _QWORD *v110; // x23
  __int64 v111; // x8
  __int64 v112; // x0
  __int64 v113; // x0
  struct System_Byte_array *v114; // x0
  int32_t v115; // w2
  int32_t v116; // w3
  int32_t v117; // w2
  int32_t v118; // w3
  struct System_Byte_array *v119; // [xsp+8h] [xbp-68h]

  if ( (byte_4A05E70 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Array_Empty_byte___, rawData);
    sub_1B640C8(&System_Security_Cryptography_DerSequenceReader_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_X509Extension__Add__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_X509Extension___ctor__, v7);
    sub_1B640C8(&System_Collections_Generic_List_X509Extension__TypeInfo, v8);
    sub_1B640C8(&System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo, v9);
    sub_1B640C8(&System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo, v10);
    byte_4A05E70 = 1;
  }
  v11 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B64314(
                                                              System_Security_Cryptography_DerSequenceReader_TypeInfo,
                                                              rawData,
                                                              method);
  System_Security_Cryptography_DerSequenceReader___ctor_68066980(v11, rawData, 0LL);
  if ( !v11 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v11, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v13 = Sequence;
  v119 = rawData;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(Sequence, 0LL) == 160 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v13, 0LL);
    if ( !Sequence )
      goto LABEL_86;
    Integer = System_Security_Cryptography_DerSequenceReader__ReadInteger(Sequence, 0LL);
    this->fields.Version = Integer;
    if ( Integer >= 3 )
    {
      v15 = sub_1B640DC(&System_Security_Cryptography_CryptographicException_TypeInfo);
      v18 = (System_Security_Cryptography_CryptographicException_o *)sub_1B64314(v15, v16, v17);
      System_Security_Cryptography_CryptographicException___ctor(v18, 0LL);
      goto LABEL_69;
    }
  }
  else
  {
    if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v13, 0LL) != 2 )
      goto LABEL_68;
    this->fields.Version = 0;
  }
  IntegerBytes = System_Security_Cryptography_DerSequenceReader__ReadIntegerBytes(v13, 0LL);
  this->fields.SerialNumber = IntegerBytes;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SerialNumber, (int32_t)IntegerBytes, v20, v21);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v13, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v22 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.TbsSignature.fields.AlgorithmId = OidAsString;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.TbsSignature, (int32_t)OidAsString, v24, v25);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v22, 0LL) )
  {
    NextEncodedValue = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v22, 0LL);
  }
  else
  {
    v29 = Method_System_Array_Empty_byte___;
    v30 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v30 )
    {
      sub_1BB6000();
      v30 = v29[7];
    }
    v31 = *(_QWORD *)(v30 + 16);
    if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
      v31 = sub_1BB5FA4(v31);
    if ( !*(_DWORD *)(v31 + 224) )
      j_il2cpp_runtime_class_init_0(v31);
    v32 = *(_QWORD *)(v29[7] + 16LL);
    if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
      v32 = sub_1BB5FA4(v32);
    NextEncodedValue = **(struct System_Byte_array ***)(v32 + 184);
  }
  this->fields.TbsSignature.fields.Parameters = NextEncodedValue;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.TbsSignature.fields.Parameters,
    (int32_t)NextEncodedValue,
    v26,
    v27);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v22, 0LL) )
    goto LABEL_68;
  v33 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v13, 0LL);
  v36 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1B64314(
                                                                                   System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo,
                                                                                   v34,
                                                                                   v35);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor_68092104(v36, v33, 0LL);
  this->fields.Issuer = v36;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.Issuer, (int32_t)v36, v37, v38);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v13, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v39 = Sequence;
  this->fields.NotBefore = System_Security_Cryptography_DerSequenceReader__ReadX509Date(Sequence, 0LL);
  this->fields.NotAfter = System_Security_Cryptography_DerSequenceReader__ReadX509Date(v39, 0LL);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v39, 0LL) )
  {
LABEL_68:
    v98 = sub_1B640DC(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v18 = (System_Security_Cryptography_CryptographicException_o *)sub_1B64314(v98, v99, v100);
    v101 = (System_String_o *)sub_1B640DC(&StringLiteral_2137/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_60697948(v18, v101, 0LL);
LABEL_69:
    v102 = sub_1B640DC(&Method_Internal_Cryptography_Pal_CertificateData__ctor__);
    sub_1B641F0(v18, v102);
  }
  v40 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v13, 0LL);
  v43 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1B64314(
                                                                                   System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo,
                                                                                   v41,
                                                                                   v42);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor_68092104(v43, v40, 0LL);
  this->fields.Subject = v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.Subject, (int32_t)v43, v44, v45);
  v46 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v13, 0LL);
  this->fields.SubjectPublicKeyInfo = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SubjectPublicKeyInfo, (int32_t)v46, v47, v48);
  SubjectPublicKeyInfo = this->fields.SubjectPublicKeyInfo;
  v52 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B64314(
                                                              System_Security_Cryptography_DerSequenceReader_TypeInfo,
                                                              v50,
                                                              v51);
  System_Security_Cryptography_DerSequenceReader___ctor_68066980(v52, SubjectPublicKeyInfo, 0LL);
  if ( !v52 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v52, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v53 = Sequence;
  v54 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.PublicKeyAlgorithm.fields.AlgorithmId = v54;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.PublicKeyAlgorithm, (int32_t)v54, v55, v56);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v53, 0LL) )
  {
    v59 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v53, 0LL);
  }
  else
  {
    v60 = Method_System_Array_Empty_byte___;
    v61 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v61 )
    {
      sub_1BB6000();
      v61 = v60[7];
    }
    v62 = *(_QWORD *)(v61 + 16);
    if ( (*(_BYTE *)(v62 + 309) & 1) == 0 )
      v62 = sub_1BB5FA4(v62);
    if ( !*(_DWORD *)(v62 + 224) )
      j_il2cpp_runtime_class_init_0(v62);
    v63 = *(_QWORD *)(v60[7] + 16LL);
    if ( (*(_BYTE *)(v63 + 309) & 1) == 0 )
      v63 = sub_1BB5FA4(v63);
    v59 = **(struct System_Byte_array ***)(v63 + 184);
  }
  this->fields.PublicKeyAlgorithm.fields.Parameters = v59;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.PublicKeyAlgorithm.fields.Parameters,
    (int32_t)v59,
    v57,
    v58);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v53, 0LL) )
    goto LABEL_68;
  BitString = System_Security_Cryptography_DerSequenceReader__ReadBitString(v52, 0LL);
  this->fields.PublicKey = BitString;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.PublicKey, (int32_t)BitString, v65, v66);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v52, 0LL) )
    goto LABEL_68;
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v13, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v13, 0LL) == 161 )
  {
    v69 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v13, 0LL);
    v70 = (int)v69;
    this->fields.IssuerUniqueId = v69;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
  }
  else
  {
    this->fields.IssuerUniqueId = 0LL;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
    v70 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_IssuerUniqueId, v70, v67, v68);
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v13, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v13, 0LL) == 162 )
  {
    v74 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v13, 0LL);
    v75 = (int)v74;
    this->fields.SubjectUniqueId = v74;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
  }
  else
  {
    this->fields.SubjectUniqueId = 0LL;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
    v75 = 0;
  }
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_SubjectUniqueId, v75, v72, v73);
  v79 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_X509Extension__TypeInfo,
                                                       v77,
                                                       v78);
  System_Collections_Generic_List_object____ctor(
    v79,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_X509Extension___ctor__);
  this->fields.Extensions = (struct System_Collections_Generic_List_X509Extension__o *)v79;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.Extensions, (int32_t)v79, v80, v81);
  if ( this->fields.Version >= 2
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v13, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v13, 0LL) == 163 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v13, 0LL);
    if ( Sequence )
    {
      Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(Sequence, 0LL);
      if ( Sequence )
      {
        v82 = Sequence;
        while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v82, 0LL) )
        {
          Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v82, 0LL);
          if ( !Sequence )
            goto LABEL_86;
          v83 = Sequence;
          v84 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
          v85 = System_Security_Cryptography_DerSequenceReader__PeekTag(v83, 0LL) == 1
             && System_Security_Cryptography_DerSequenceReader__ReadBoolean(v83, 0LL);
          OctetString = System_Security_Cryptography_DerSequenceReader__ReadOctetString(v83, 0LL);
          Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
          v88 = OctetString;
          v91 = (System_Security_Cryptography_X509Certificates_X509Extension_o *)sub_1B64314(
                                                                                   System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo,
                                                                                   v89,
                                                                                   v90);
          System_Security_Cryptography_X509Certificates_X509Extension___ctor_68156056(v91, v84, v88, v85, 0LL);
          if ( !Extensions )
            goto LABEL_86;
          items = Extensions->fields._items;
          v95 = Method_System_Collections_Generic_List_X509Extension__Add__;
          ++Extensions->fields._version;
          if ( !items )
            goto LABEL_86;
          size = Extensions->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              Extensions,
              (Il2CppObject *)v91,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
          }
          else
          {
            v97 = &items->obj.klass + size;
            Extensions->fields._size = size + 1;
            v97[4] = (Il2CppClass *)v91;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v97 + 4), (int32_t)v91, v92, v93);
          }
          if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v83, 0LL) )
            goto LABEL_68;
        }
        goto LABEL_70;
      }
    }
LABEL_86:
    sub_1B64324(Sequence);
  }
LABEL_70:
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v13, 0LL) )
    goto LABEL_68;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v11, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v103 = Sequence;
  v104 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.SignatureAlgorithm.fields.AlgorithmId = v104;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SignatureAlgorithm, (int32_t)v104, v105, v106);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v103, 0LL) )
  {
    v109 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v103, 0LL);
  }
  else
  {
    v110 = Method_System_Array_Empty_byte___;
    v111 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v111 )
    {
      sub_1BB6000();
      v111 = v110[7];
    }
    v112 = *(_QWORD *)(v111 + 16);
    if ( (*(_BYTE *)(v112 + 309) & 1) == 0 )
      v112 = sub_1BB5FA4(v112);
    if ( !*(_DWORD *)(v112 + 224) )
      j_il2cpp_runtime_class_init_0(v112);
    v113 = *(_QWORD *)(v110[7] + 16LL);
    if ( (*(_BYTE *)(v113 + 309) & 1) == 0 )
      v113 = sub_1BB5FA4(v113);
    v109 = **(struct System_Byte_array ***)(v113 + 184);
  }
  this->fields.SignatureAlgorithm.fields.Parameters = v109;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.SignatureAlgorithm.fields.Parameters,
    (int32_t)v109,
    v107,
    v108);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v103, 0LL) )
    goto LABEL_68;
  v114 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v11, 0LL);
  this->fields.SignatureValue = v114;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.SignatureValue, (int32_t)v114, v115, v116);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v11, 0LL) )
    goto LABEL_68;
  this->fields.RawData = v119;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)this, (int32_t)v119, v117, v118);
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
  unsigned __int8 v10; // w23
  System_Security_Cryptography_DerSequenceReader_o *v11; // x22
  System_String_o *OidAsString; // x0
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  System_Security_Cryptography_CryptographicException_o *v17; // x19
  System_String_o *v18; // x0
  __int64 v19; // x0

  if ( (byte_4A05E73 & 1) == 0 )
  {
    sub_1B640C8(&System_Security_Cryptography_DerSequenceReader_TypeInfo, *(_QWORD *)&matchType);
    byte_4A05E73 = 1;
  }
  if ( matchType )
    v7 = 0x80;
  else
    v7 = -96;
  v8 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B64314(
                                                             System_Security_Cryptography_DerSequenceReader_TypeInfo,
                                                             *(_QWORD *)&matchType,
                                                             otherOid);
  System_Security_Cryptography_DerSequenceReader___ctor_68066980(v8, extensionBytes, 0LL);
  if ( !v8 )
    goto LABEL_22;
  if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v8, 0LL) )
    return 0LL;
  v10 = v7 | matchType;
  while ( System_Security_Cryptography_DerSequenceReader__PeekTag(v8, 0LL) != v10 )
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
  v11 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  if ( !System_String__op_Equality(OidAsString, otherOid, 0LL) )
    goto LABEL_16;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v11, 0LL) != 160 )
  {
    v14 = sub_1B640DC(&System_Security_Cryptography_CryptographicException_TypeInfo);
    v17 = (System_Security_Cryptography_CryptographicException_o *)sub_1B64314(v14, v15, v16);
    v18 = (System_String_o *)sub_1B640DC(&StringLiteral_2137/*"ASN1 corrupted data."*/);
    System_Security_Cryptography_CryptographicException___ctor_60697948(v17, v18, 0LL);
    v19 = sub_1B640DC(&Method_Internal_Cryptography_Pal_CertificateData_FindAltNameMatch__);
    sub_1B641F0(v17, v19);
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v11, 0LL);
  if ( !Sequence )
LABEL_22:
    sub_1B64324(Sequence);
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
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  System_Byte_array *monitor; // x23
  int32_t Value; // w1
  const MethodInfo *v38; // x3
  __int64 *v39; // x8
  System_String_o *v40; // x21
  __int64 v41; // x8
  System_Collections_Generic_List_object__c *v42; // x8
  System_Collections_Generic_List_object__o *v43; // x19
  __int64 v44; // x9
  int32_t *p_offset; // x10
  __int64 v46; // x0
  __int64 v47; // x19
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  System_String_o *v56; // x0
  System_String_o *v57; // x1
  int v58; // w21
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-70h] BYREF
  __int64 v66; // [xsp+48h] [xbp-48h] BYREF
  System_Nullable_Int32Enum__o v67; // 0:x0.8
  System_Nullable_Int32Enum__o v68; // 0:x0.8
  System_Nullable_Int32Enum__o v69; // 0:x0.8

  if ( (byte_4A05E71 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__, *(_QWORD *)&nameType);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_X509Extension__get_Current__, v8);
    sub_1B640C8(&System_IDisposable_TypeInfo, v9);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, v11);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_X509Extension__GetEnumerator__, v15);
    sub_1B640C8(&Method_System_Nullable_GeneralNameType___ctor__, v16);
    sub_1B640C8(&Method_System_Nullable_GeneralNameType__get_HasValue__, v17);
    sub_1B640C8(&Method_System_Nullable_GeneralNameType__get_Value__, v18);
    sub_1B640C8(&StringLiteral_1438/*"2.5.29.17"*/, v19);
    sub_1B640C8(&StringLiteral_1324/*"1.2.840.113549.1.9.1"*/, v20);
    sub_1B640C8(&StringLiteral_1386/*"1.3.6.1.4.1.311.20.2.3"*/, v21);
    sub_1B640C8(&StringLiteral_1453/*"2.5.4.3"*/, v22);
    sub_1B640C8(&StringLiteral_1439/*"2.5.29.18"*/, v23);
    sub_1B640C8(&StringLiteral_1/*""*/, v24);
    byte_4A05E71 = 1;
  }
  memset(&v65, 0, sizeof(v65));
  if ( nameType )
  {
    if ( forIssuer )
      v25 = (System_String_o **)&StringLiteral_1439/*"2.5.29.18"*/;
    else
      v25 = (System_String_o **)&StringLiteral_1438/*"2.5.29.17"*/;
    v26 = *v25;
    v66 = 0LL;
    switch ( nameType )
    {
      case 1:
        goto LABEL_16;
      case 2:
        v69 = (System_Nullable_Int32Enum__o)&v66;
        System_Nullable_Int32Enum____ctor(
          v69,
          0,
          (const MethodInfo_35CE144 *)Method_System_Nullable_GeneralNameType___ctor__);
        v31 = (System_String_o *)StringLiteral_1386/*"1.3.6.1.4.1.311.20.2.3"*/;
        break;
      case 3:
      case 4:
        v67 = (System_Nullable_Int32Enum__o)&v66;
        v27 = 2;
        goto LABEL_18;
      case 5:
        v67 = (System_Nullable_Int32Enum__o)&v66;
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
    v66 = 0LL;
LABEL_16:
    v67 = (System_Nullable_Int32Enum__o)&v66;
    v27 = 1;
LABEL_18:
    System_Nullable_Int32Enum____ctor(
      v67,
      v27,
      (const MethodInfo_35CE144 *)Method_System_Nullable_GeneralNameType___ctor__);
LABEL_19:
    v31 = 0LL;
  }
  if ( (_BYTE)v66 )
  {
    Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
    if ( !Extensions )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v64,
      Extensions,
      (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    v65 = v64;
    while ( 1 )
    {
      v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v65,
              (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
      if ( !v33 )
        break;
      current = v65.fields._current;
      if ( !v65.fields._current )
        sub_1B64324(v33);
      klass = v65.fields._current[1].klass;
      if ( !klass )
        sub_1B64324(v33);
      if ( System_String__op_Equality((System_String_o *)klass->_1.name, v26, 0LL) )
      {
        monitor = (System_Byte_array *)current[1].monitor;
        v68 = (System_Nullable_Int32Enum__o)&v66;
        Value = System_Nullable_Int32Enum___get_Value(
                  v68,
                  (const MethodInfo_35CE15C *)Method_System_Nullable_GeneralNameType__get_Value__);
        SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(monitor, Value, v31, v38);
        if ( SimpleNameInfo )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v65,
            (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
          return SimpleNameInfo;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v65,
      (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
  }
  if ( nameType == 1 )
  {
    v39 = &StringLiteral_1324/*"1.2.840.113549.1.9.1"*/;
  }
  else
  {
    if ( nameType != 3 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v39 = &StringLiteral_1453/*"2.5.4.3"*/;
  }
  v40 = (System_String_o *)*v39;
  if ( !*v39 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v41 = 72LL;
  if ( forIssuer )
    v41 = 48LL;
  Extensions = (System_Collections_Generic_List_object__o *)Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
                                                              *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData + v41),
                                                              *(const MethodInfo **)&nameType);
  if ( !Extensions )
LABEL_73:
    sub_1B64324(Extensions);
  v42 = Extensions->klass;
  v43 = Extensions;
  v44 = *(unsigned __int16 *)(&Extensions->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Extensions->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v42->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v44;
      p_offset += 4;
      if ( !v44 )
        goto LABEL_42;
    }
    v46 = (__int64)(&v42->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_42:
    v46 = sub_1BB60A8(Extensions, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD))v46)(v43, *(_QWORD *)(v46 + 8));
  if ( !v47 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v48 = *(_QWORD *)v47;
    v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v49;
        v50 += 4;
        if ( !v49 )
          goto LABEL_50;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_50:
      v51 = sub_1BB60A8(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v54 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_57;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_57:
      v55 = sub_1BB60A8(v47, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0LL);
    }
    v56 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    SimpleNameInfo = v57;
    if ( System_String__op_Equality(v56, v40, 0LL) )
    {
      v58 = 16;
      goto LABEL_62;
    }
  }
  SimpleNameInfo = 0LL;
  v58 = 20;
LABEL_62:
  v59 = *(_QWORD *)v47;
  v60 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_66;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_66:
    v62 = sub_1BB60A8(v47, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v62)(v47, *(_QWORD *)(v62 + 8));
  if ( v58 == 20 )
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
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c *klass; // x8
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *v14; // x19
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v18; // x0
  __int64 v19; // x19
  System_String_o *v20; // x23
  System_String_o *v21; // x24
  System_String_o *v22; // x25
  System_String_o *v23; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  System_String_o *v32; // x0
  System_String_o *v33; // x1
  System_String_o *v34; // x21
  System_String_o *v35; // x8
  int v36; // w22
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  System_String_o *v42; // [xsp+8h] [xbp-68h]

  if ( (byte_4A05E72 & 1) == 0 )
  {
    sub_1B640C8(&System_IDisposable_TypeInfo, method);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, v3);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, v4);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v7);
    sub_1B640C8(&StringLiteral_1324/*"1.2.840.113549.1.9.1"*/, v8);
    sub_1B640C8(&StringLiteral_1453/*"2.5.4.3"*/, v9);
    sub_1B640C8(&StringLiteral_1446/*"2.5.4.11"*/, v10);
    sub_1B640C8(&StringLiteral_1445/*"2.5.4.10"*/, v11);
    byte_4A05E72 = 1;
  }
  ReverseRdns = Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(name, method);
  if ( !ReverseRdns )
    sub_1B64324(0LL);
  klass = ReverseRdns->klass;
  v14 = ReverseRdns;
  v15 = *(unsigned __int16 *)(&ReverseRdns->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&ReverseRdns->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(
                 ReverseRdns,
                 System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo,
                 0LL);
  }
  v18 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *, _QWORD))p_method)(
          v14,
          *(_QWORD *)(p_method + 8));
  v19 = v18;
  v42 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
LABEL_11:
  v23 = v20;
LABEL_12:
  v20 = v23;
  v23 = v21;
LABEL_13:
  v21 = v23;
  v23 = v22;
  while ( 1 )
  {
    if ( !v19 )
      sub_1B64324(v18);
    v24 = *(_QWORD *)v19;
    v22 = v23;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_19;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_19:
      v27 = sub_1BB60A8(v19, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8)) & 1) == 0 )
    {
      v23 = 0LL;
      v36 = 10;
      goto LABEL_37;
    }
    v28 = *(_QWORD *)v19;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v30 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_26;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_26:
      v31 = sub_1BB60A8(v19, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0LL);
    }
    v32 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v19, *(_QWORD *)(v31 + 8));
    v23 = v33;
    v34 = v32;
    if ( System_String__op_Equality(v32, (System_String_o *)StringLiteral_1453/*"2.5.4.3"*/, 0LL) )
      break;
    v18 = System_String__op_Equality(v34, (System_String_o *)StringLiteral_1446/*"2.5.4.11"*/, 0LL);
    if ( (v18 & 1) == 0 )
    {
      v18 = System_String__op_Equality(v34, (System_String_o *)StringLiteral_1445/*"2.5.4.10"*/, 0LL);
      if ( (v18 & 1) != 0 )
        goto LABEL_13;
      v18 = System_String__op_Equality(v34, (System_String_o *)StringLiteral_1324/*"1.2.840.113549.1.9.1"*/, 0LL);
      if ( (v18 & 1) == 0 )
      {
        v35 = v42;
        if ( !v42 )
          v35 = v23;
        v42 = v35;
        goto LABEL_11;
      }
      goto LABEL_12;
    }
  }
  v36 = 9;
LABEL_37:
  v37 = *(_QWORD *)v19;
  v38 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
    {
      --v38;
      v39 += 4;
      if ( !v38 )
        goto LABEL_41;
    }
    v40 = v37 + 16LL * *v39 + 312;
  }
  else
  {
LABEL_41:
    v40 = sub_1BB60A8(v19, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v40)(v19, *(_QWORD *)(v40 + 8));
  if ( v36 == 10 )
  {
    v23 = v22;
    if ( !v22 )
    {
      v23 = v21;
      if ( !v21 )
      {
        if ( v20 )
          return v20;
        else
          return v42;
      }
    }
  }
  return v23;
}


System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A05E74 & 1) == 0 )
  {
    sub_1B640C8(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo, method);
    byte_4A05E74 = 1;
  }
  v4 = sub_1B64314(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo, method, v2);
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21___ctor(
    (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v4,
    -2,
    0LL);
  if ( !v4 )
    sub_1B64324(v5);
  *(_QWORD *)(v4 + 56) = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 56), (int32_t)name, v6, v7);
  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)v4;
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
  __int64 v2; // x2
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name; // x8
  System_Byte_array *raw; // x21
  System_Security_Cryptography_DerSequenceReader_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Stack_T__o *v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_Stack_T__o *rdnReaders_5__2; // x22
  Il2CppObject *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o **p_rdnReader_5__3; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v26; // x22
  Il2CppObject *OidAsString; // x21
  const MethodInfo_33E4D90 *v28; // x4
  unsigned int v29; // w8
  Il2CppObject *v30; // x2
  System_String_o *Utf8String; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  bool result; // w0
  struct System_Collections_Generic_KeyValuePair_string__string__o v35; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v36; // 0:x0.16

  v3 = this;
  if ( (byte_4A07CF1 & 1) == 0 )
  {
    sub_1B640C8(&System_Security_Cryptography_DerSequenceReader_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_KeyValuePair_string__string___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_DerSequenceReader__Push__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_Stack_DerSequenceReader__get_Count__, v8);
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1B640C8(
                                                                                   &System_Collections_Generic_Stack_DerSequenceReader__TypeInfo,
                                                                                   v9);
    byte_4A07CF1 = 1;
  }
  _1__state = v3->fields.__1__state;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
LABEL_13:
    p_rdnReader_5__3 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o **)&v3->fields._rdnReader_5__3;
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
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._rdnReader_5__3, 0, v24, v25);
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
      v26 = this;
      OidAsString = (Il2CppObject *)System_Security_Cryptography_DerSequenceReader__ReadOidAsString(
                                      (System_Security_Cryptography_DerSequenceReader_o *)this,
                                      0LL);
      v29 = System_Security_Cryptography_DerSequenceReader__PeekTag(
              (System_Security_Cryptography_DerSequenceReader_o *)v26,
              0LL);
      v30 = 0LL;
      if ( v29 <= 0x13 )
      {
        if ( v29 == 12 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadUtf8String(
                         (System_Security_Cryptography_DerSequenceReader_o *)v26,
                         0LL);
          goto LABEL_29;
        }
        if ( v29 == 19 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadPrintableString(
                         (System_Security_Cryptography_DerSequenceReader_o *)v26,
                         0LL);
          goto LABEL_29;
        }
      }
      else
      {
        switch ( v29 )
        {
          case 0x14u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadT61String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v26,
                           0LL);
            goto LABEL_29;
          case 0x16u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadIA5String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v26,
                           0LL);
            goto LABEL_29;
          case 0x1Eu:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadBMPString(
                           (System_Security_Cryptography_DerSequenceReader_o *)v26,
                           0LL);
LABEL_29:
            v30 = (Il2CppObject *)Utf8String;
            break;
        }
      }
      if ( v30 )
      {
        v36.fields.key = (Il2CppObject *)&v35;
        v36.fields.value = OidAsString;
        v35 = (struct System_Collections_Generic_KeyValuePair_string__string__o)0LL;
        System_Collections_Generic_KeyValuePair_object__object____ctor(
          v36,
          v30,
          (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_string__string___ctor__,
          v28);
        v3->fields.__2__current = v35;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__2__current, 0, v32, v33);
        result = 1;
        v3->fields.__1__state = 1;
        return result;
      }
    }
  }
  if ( !_1__state )
  {
    name = v3->fields.name;
    v3->fields.__1__state = -1;
    if ( !name )
      goto LABEL_37;
    raw = name->fields._raw;
    v13 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1B64314(
                                                                System_Security_Cryptography_DerSequenceReader_TypeInfo,
                                                                method,
                                                                v2);
    System_Security_Cryptography_DerSequenceReader___ctor_68066980(v13, raw, 0LL);
    v16 = (System_Collections_Generic_Stack_T__o *)sub_1B64314(
                                                     System_Collections_Generic_Stack_DerSequenceReader__TypeInfo,
                                                     v14,
                                                     v15);
    System_Collections_Generic_Stack_object____ctor(
      v16,
      (const MethodInfo_3704C34 *)Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    v3->fields._rdnReaders_5__2 = (struct System_Collections_Generic_Stack_DerSequenceReader__o *)v16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._rdnReaders_5__2, (int32_t)v16, v17, v18);
    if ( !v13 )
      goto LABEL_37;
    if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v13, 0LL) )
      goto LABEL_33;
    do
    {
      rdnReaders_5__2 = (System_Collections_Generic_Stack_T__o *)v3->fields._rdnReaders_5__2;
      this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)System_Security_Cryptography_DerSequenceReader__ReadSet(
                                                                                     v13,
                                                                                     0LL);
      if ( !rdnReaders_5__2 )
        goto LABEL_37;
      System_Collections_Generic_Stack_object___Push(
        rdnReaders_5__2,
        (Il2CppObject *)this,
        (const MethodInfo_370525C *)Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    }
    while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v13, 0LL) );
LABEL_33:
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v3->fields._rdnReaders_5__2;
    if ( !this )
LABEL_37:
      sub_1B64324(this);
    if ( SLODWORD(this->fields.__2__current.fields.key) > 0 )
    {
      v20 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_37051FC *)Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
      v3->fields._rdnReader_5__3 = (struct System_Security_Cryptography_DerSequenceReader_o *)v20;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields._rdnReader_5__3, (int32_t)v20, v21, v22);
      goto LABEL_13;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t l__initialThreadId; // w20
  int32_t v5; // w3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v6; // x20
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *_3__name; // x1

  if ( (byte_4A07CF3 & 1) == 0 )
  {
    sub_1B640C8(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo, method);
    byte_4A07CF3 = 1;
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
    v6 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1B64314(
                                                                                 Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo,
                                                                                 method,
                                                                                 v2);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__name = this->fields.__3__name;
  v6->fields.name = _3__name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.name, (int32_t)_3__name, v2, v5);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_IEnumerator_get_Current(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_KeyValuePair_string__string__o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4A07CF2 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Generic_KeyValuePair_string__string__TypeInfo, method);
    byte_4A07CF2 = 1;
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

  if ( (byte_4A04311 & 1) == 0 )
  {
    sub_1B640C8(&System_Reflection_MissingMetadataException_TypeInfo, attributeType);
    byte_4A04311 = 1;
  }
  v3 = (System_Reflection_MissingMetadataException_o *)sub_1B64314(
                                                         System_Reflection_MissingMetadataException_TypeInfo,
                                                         attributeType,
                                                         method);
  System_Reflection_MissingMetadataException___ctor(v3, 0LL);
  return (System_Exception_o *)v3;
}


void __fastcall Internal_Runtime_Augments_RuntimeAugments___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  Il2CppObject *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A04310 & 1) == 0 )
  {
    sub_1B640C8(&Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo, v1);
    sub_1B640C8(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo, v3);
    byte_4A04310 = 1;
  }
  v4 = (Il2CppObject *)sub_1B64314(Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo, v1, v2);
  System_Object___ctor(v4, 0LL);
  Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields->s_reflectionExecutionDomainCallbacks = (struct Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *)v4;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields,
    (int32_t)v4,
    v5,
    v6);
}


void __fastcall __noreturn Internal_Runtime_Augments_RuntimeAugments__ReportUnhandledException(
        System_Exception_o *exception,
        const MethodInfo *method)
{
  System_Runtime_ExceptionServices_ExceptionDispatchInfo_o *v2; // x0

  v2 = System_Runtime_ExceptionServices_ExceptionDispatchInfo__Capture(exception, 0LL);
  if ( v2 )
    System_Runtime_ExceptionServices_ExceptionDispatchInfo__Throw(v2, 0LL);
  sub_1B64324(0LL);
}


Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *__fastcall Internal_Runtime_Augments_RuntimeAugments__get_Callbacks(
        const MethodInfo *method)
{
  __int64 v1; // x1
  Internal_Runtime_Augments_RuntimeAugments_c *v2; // x0

  if ( (byte_4A0430F & 1) == 0 )
  {
    sub_1B640C8(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo, v1);
    byte_4A0430F = 1;
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

  if ( (byte_4A04313 & 1) == 0 )
  {
    sub_1B640C8(&Internal_Runtime_Augments_RuntimeThread_TypeInfo, v1);
    byte_4A04313 = 1;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)t, v5, v6);
}


// local variable allocation has failed, the output may be wrong!
Internal_Runtime_Augments_RuntimeThread_o *__fastcall Internal_Runtime_Augments_RuntimeThread__Create(
        System_Threading_ParameterizedThreadStart_o *start,
        int32_t maxStackSize,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Threading_Thread_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x19
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A04312 & 1) == 0 )
  {
    sub_1B640C8(&Internal_Runtime_Augments_RuntimeThread_TypeInfo, *(_QWORD *)&maxStackSize);
    sub_1B640C8(&System_Threading_Thread_TypeInfo, v5);
    byte_4A04312 = 1;
  }
  v6 = (System_Threading_Thread_o *)sub_1B64314(System_Threading_Thread_TypeInfo, *(_QWORD *)&maxStackSize, method);
  System_Threading_Thread___ctor_62637320(v6, start, maxStackSize, 0LL);
  v9 = sub_1B64314(Internal_Runtime_Augments_RuntimeThread_TypeInfo, v7, v8);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_QWORD *)(v9 + 16) = v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v6, v10, v11);
  return (Internal_Runtime_Augments_RuntimeThread_o *)v9;
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
    sub_1B64324(0LL);
  System_Threading_Thread__Start_62637776(thread, state, 0LL);
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
    sub_1B64324(0LL);
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

  if ( (byte_4A0430E & 1) == 0 )
  {
    sub_1B640C8(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID);
    byte_4A0430E = 1;
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

  if ( (byte_4A0430B & 1) == 0 )
  {
    sub_1B640C8(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID);
    byte_4A0430B = 1;
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

  if ( (byte_4A0430C & 1) == 0 )
  {
    sub_1B640C8(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID);
    byte_4A0430C = 1;
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

  if ( (byte_4A0430D & 1) == 0 )
  {
    sub_1B640C8(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID);
    byte_4A0430D = 1;
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

  if ( (byte_4A0430A & 1) == 0 )
  {
    sub_1B640C8(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, v1);
    byte_4A0430A = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    LOBYTE(s_callbacks) = ((__int64 (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, const char *))s_callbacks->klass[1]._1.gc_desc)(
                            s_callbacks,
                            s_callbacks->klass[1]._1.name);
  return (char)s_callbacks;
}