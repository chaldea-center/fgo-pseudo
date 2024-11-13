System_Byte_array *__fastcall Internal_Cryptography_Helpers__CloneByteArray(
        System_Byte_array *src,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Byte_array *result; // x0
  System_Byte_array *v5; // x19

  if ( (byte_4B1E123 & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, method, v2);
    byte_4B1E123 = 1;
  }
  if ( !src )
    return 0LL;
  result = (System_Byte_array *)System_Array__Clone((System_Array_o *)src, 0LL);
  if ( result )
  {
    v5 = result;
    result = (System_Byte_array *)sub_1BCA91C(result, byte___TypeInfo);
    if ( !result )
    {
      sub_1BCACFC(v5);
      return 0LL;
    }
  }
  return result;
}


System_Byte_array *__fastcall Internal_Cryptography_Helpers__GenerateRandom(int32_t count, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  System_Byte_array *v6; // x21
  System_Security_Cryptography_RandomNumberGenerator_o *v7; // x0
  __int64 v8; // x1
  System_Security_Cryptography_RandomNumberGenerator_o *v9; // x19
  System_Security_Cryptography_RandomNumberGenerator_c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0

  if ( (byte_4B1E124 & 1) == 0 )
  {
    sub_1BCA7E0(&byte___TypeInfo, method, v2);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v4, v5);
    byte_4B1E124 = 1;
  }
  v6 = (System_Byte_array *)sub_1BCA888(byte___TypeInfo, (unsigned int)count);
  v7 = System_Security_Cryptography_RandomNumberGenerator__Create(0LL);
  v9 = v7;
  if ( !v7 )
    sub_1BCAA3C(0LL, v8);
  ((void (__fastcall *)(System_Security_Cryptography_RandomNumberGenerator_o *, System_Byte_array *, Il2CppMethodPointer))v7->klass->vtable._6_unknown.method)(
    v7,
    v6,
    v7->klass->vtable._7_GetBytes.methodPtr);
  klass = v9->klass;
  v11 = *(unsigned __int16 *)(&v9->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v9->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
    {
      --v11;
      p_offset += 4;
      if ( !v11 )
        goto LABEL_8;
    }
    v13 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_8:
    v13 = sub_1C1C7C0(v9, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(System_Security_Cryptography_RandomNumberGenerator_o *, _QWORD))v13)(v9, *(_QWORD *)(v13 + 8));
  return v6;
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
  __int64 v2; // x2
  System_Char_array *v3; // x19
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

  v3 = bytes;
  if ( (byte_4B1E125 & 1) == 0 )
  {
    bytes = (System_Char_array *)sub_1BCA7E0(&char___TypeInfo, method, v2);
    byte_4B1E125 = 1;
  }
  if ( !v3 )
    goto LABEL_19;
  bytes = (System_Char_array *)sub_1BCA888(char___TypeInfo, 2 * v3->max_length);
  if ( (int)*(_QWORD *)&v3->max_length >= 1 )
  {
    v4 = (unsigned int)*(_QWORD *)&v3->max_length;
    v5 = 0LL;
    v6 = 0;
    while ( 1 )
    {
      if ( v5 >= v4 )
LABEL_18:
        sub_1BCAA44(bytes, method);
      v7 = *((unsigned __int8 *)&v3->m_Items[2] + v5);
      v8 = v7 >= 0xA0 ? 55 : 48;
      if ( !bytes )
        break;
      max_length = bytes->max_length;
      if ( v6 >= max_length )
        goto LABEL_18;
      method = (const MethodInfo *)(v8 + (v7 >> 4));
      v10 = v6 + 1;
      bytes->m_Items[v6 + 2] = (unsigned __int16)method;
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
    sub_1BCAA3C(bytes, method);
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
    sub_1BCAA3C(*(_QWORD *)&i, 0LL);
  if ( arr->max_length <= offset
    || (arr->m_Items[offset + 4] = HIBYTE(i), offset + 1 >= arr->max_length)
    || (arr->m_Items[offset + 5] = BYTE2(i), offset + 2 >= arr->max_length)
    || (arr->m_Items[offset + 6] = BYTE1(i), offset + 3 >= arr->max_length) )
  {
    sub_1BCAA44(i, arr);
  }
  arr->m_Items[offset + 7] = i;
}


void __fastcall Internal_Cryptography_OidLookup___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x1
  __int64 v113; // x2
  __int64 v114; // x1
  __int64 v115; // x2
  __int64 v116; // x1
  __int64 v117; // x2
  __int64 v118; // x1
  __int64 v119; // x2
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x1
  __int64 v123; // x2
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x1
  __int64 v127; // x2
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x1
  __int64 v131; // x2
  __int64 v132; // x1
  __int64 v133; // x2
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x1
  __int64 v139; // x2
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x1
  __int64 v143; // x2
  __int64 v144; // x1
  __int64 v145; // x2
  __int64 v146; // x1
  __int64 v147; // x2
  __int64 v148; // x1
  __int64 v149; // x2
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x1
  __int64 v155; // x2
  __int64 v156; // x1
  __int64 v157; // x2
  __int64 v158; // x1
  __int64 v159; // x2
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x1
  __int64 v163; // x2
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x1
  __int64 v167; // x2
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x1
  __int64 v171; // x2
  __int64 v172; // x1
  __int64 v173; // x2
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x1
  __int64 v177; // x2
  __int64 v178; // x1
  __int64 v179; // x2
  __int64 v180; // x1
  __int64 v181; // x2
  __int64 v182; // x1
  __int64 v183; // x2
  __int64 v184; // x1
  __int64 v185; // x2
  __int64 v186; // x1
  __int64 v187; // x2
  __int64 v188; // x1
  __int64 v189; // x2
  __int64 v190; // x1
  __int64 v191; // x2
  __int64 v192; // x1
  __int64 v193; // x2
  __int64 v194; // x1
  __int64 v195; // x2
  __int64 v196; // x1
  __int64 v197; // x2
  __int64 v198; // x1
  __int64 v199; // x2
  __int64 v200; // x1
  __int64 v201; // x2
  __int64 v202; // x1
  __int64 v203; // x2
  __int64 v204; // x1
  __int64 v205; // x2
  __int64 v206; // x1
  __int64 v207; // x2
  __int64 v208; // x1
  __int64 v209; // x2
  __int64 v210; // x1
  __int64 v211; // x2
  __int64 v212; // x1
  __int64 v213; // x2
  __int64 v214; // x1
  __int64 v215; // x2
  __int64 v216; // x1
  __int64 v217; // x2
  __int64 v218; // x1
  __int64 v219; // x2
  __int64 v220; // x1
  __int64 v221; // x2
  __int64 v222; // x1
  __int64 v223; // x2
  __int64 v224; // x1
  __int64 v225; // x2
  __int64 v226; // x1
  __int64 v227; // x2
  __int64 v228; // x1
  __int64 v229; // x2
  __int64 v230; // x1
  __int64 v231; // x2
  __int64 v232; // x1
  __int64 v233; // x2
  __int64 v234; // x1
  __int64 v235; // x2
  __int64 v236; // x1
  __int64 v237; // x2
  __int64 v238; // x1
  __int64 v239; // x2
  __int64 v240; // x1
  __int64 v241; // x2
  __int64 v242; // x1
  __int64 v243; // x2
  __int64 v244; // x1
  __int64 v245; // x2
  __int64 v246; // x1
  __int64 v247; // x2
  __int64 v248; // x1
  __int64 v249; // x2
  __int64 v250; // x1
  __int64 v251; // x2
  __int64 v252; // x1
  __int64 v253; // x2
  __int64 v254; // x1
  __int64 v255; // x2
  __int64 v256; // x1
  __int64 v257; // x2
  __int64 v258; // x1
  __int64 v259; // x2
  __int64 v260; // x1
  __int64 v261; // x2
  __int64 v262; // x1
  __int64 v263; // x2
  __int64 v264; // x1
  __int64 v265; // x2
  __int64 v266; // x1
  __int64 v267; // x2
  __int64 v268; // x1
  __int64 v269; // x2
  __int64 v270; // x1
  __int64 v271; // x2
  __int64 v272; // x1
  __int64 v273; // x2
  __int64 v274; // x1
  __int64 v275; // x2
  __int64 v276; // x1
  __int64 v277; // x2
  __int64 v278; // x1
  __int64 v279; // x2
  __int64 v280; // x1
  __int64 v281; // x2
  __int64 v282; // x1
  __int64 v283; // x2
  __int64 v284; // x1
  __int64 v285; // x2
  __int64 v286; // x1
  __int64 v287; // x2
  __int64 v288; // x1
  __int64 v289; // x2
  __int64 v290; // x1
  __int64 v291; // x2
  __int64 v292; // x1
  __int64 v293; // x2
  __int64 v294; // x1
  __int64 v295; // x2
  __int64 v296; // x1
  __int64 v297; // x2
  __int64 v298; // x1
  __int64 v299; // x2
  __int64 v300; // x1
  __int64 v301; // x2
  __int64 v302; // x1
  __int64 v303; // x2
  __int64 v304; // x1
  __int64 v305; // x2
  __int64 v306; // x1
  __int64 v307; // x2
  __int64 v308; // x1
  __int64 v309; // x2
  __int64 v310; // x1
  __int64 v311; // x2
  __int64 v312; // x1
  __int64 v313; // x2
  __int64 v314; // x1
  __int64 v315; // x2
  __int64 v316; // x1
  __int64 v317; // x2
  __int64 v318; // x1
  __int64 v319; // x2
  __int64 v320; // x1
  __int64 v321; // x2
  __int64 v322; // x1
  __int64 v323; // x2
  __int64 v324; // x1
  __int64 v325; // x2
  __int64 v326; // x1
  __int64 v327; // x2
  __int64 v328; // x1
  __int64 v329; // x2
  __int64 v330; // x1
  __int64 v331; // x2
  __int64 v332; // x1
  __int64 v333; // x2
  __int64 v334; // x1
  __int64 v335; // x2
  __int64 v336; // x1
  __int64 v337; // x2
  __int64 v338; // x1
  __int64 v339; // x2
  __int64 v340; // x1
  __int64 v341; // x2
  __int64 v342; // x1
  __int64 v343; // x2
  __int64 v344; // x1
  __int64 v345; // x2
  __int64 v346; // x1
  __int64 v347; // x2
  __int64 v348; // x1
  __int64 v349; // x2
  __int64 v350; // x1
  __int64 v351; // x2
  __int64 v352; // x1
  __int64 v353; // x2
  __int64 v354; // x1
  __int64 v355; // x2
  __int64 v356; // x1
  __int64 v357; // x2
  __int64 v358; // x1
  __int64 v359; // x2
  __int64 v360; // x1
  __int64 v361; // x2
  __int64 v362; // x1
  __int64 v363; // x2
  __int64 v364; // x1
  __int64 v365; // x2
  __int64 v366; // x1
  __int64 v367; // x2
  __int64 v368; // x1
  __int64 v369; // x2
  __int64 v370; // x1
  __int64 v371; // x2
  __int64 v372; // x1
  __int64 v373; // x2
  __int64 v374; // x1
  __int64 v375; // x2
  __int64 v376; // x1
  __int64 v377; // x2
  __int64 v378; // x1
  __int64 v379; // x2
  __int64 v380; // x1
  __int64 v381; // x2
  __int64 v382; // x1
  __int64 v383; // x2
  __int64 v384; // x1
  __int64 v385; // x2
  __int64 v386; // x1
  __int64 v387; // x2
  __int64 v388; // x1
  __int64 v389; // x2
  __int64 v390; // x1
  __int64 v391; // x2
  __int64 v392; // x1
  __int64 v393; // x2
  __int64 v394; // x1
  __int64 v395; // x2
  __int64 v396; // x1
  __int64 v397; // x2
  __int64 v398; // x1
  __int64 v399; // x2
  __int64 v400; // x1
  __int64 v401; // x2
  __int64 v402; // x1
  __int64 v403; // x2
  __int64 v404; // x1
  __int64 v405; // x2
  __int64 v406; // x1
  __int64 v407; // x2
  __int64 v408; // x1
  __int64 v409; // x2
  __int64 v410; // x1
  __int64 v411; // x2
  __int64 v412; // x1
  __int64 v413; // x2
  __int64 v414; // x1
  __int64 v415; // x2
  __int64 v416; // x1
  __int64 v417; // x2
  __int64 v418; // x1
  __int64 v419; // x2
  __int64 v420; // x1
  __int64 v421; // x2
  __int64 v422; // x1
  __int64 v423; // x2
  __int64 v424; // x1
  __int64 v425; // x2
  __int64 v426; // x1
  __int64 v427; // x2
  __int64 v428; // x1
  __int64 v429; // x2
  __int64 v430; // x1
  __int64 v431; // x2
  __int64 v432; // x1
  __int64 v433; // x2
  __int64 v434; // x1
  __int64 v435; // x2
  __int64 v436; // x1
  __int64 v437; // x2
  __int64 v438; // x1
  __int64 v439; // x2
  __int64 v440; // x1
  __int64 v441; // x2
  __int64 v442; // x1
  __int64 v443; // x2
  __int64 v444; // x1
  __int64 v445; // x2
  __int64 v446; // x1
  __int64 v447; // x2
  __int64 v448; // x1
  __int64 v449; // x2
  __int64 v450; // x1
  __int64 v451; // x2
  __int64 v452; // x1
  __int64 v453; // x2
  __int64 v454; // x1
  __int64 v455; // x2
  __int64 v456; // x1
  __int64 v457; // x2
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v458; // x19
  int64_t v459; // x2
  int32_t v460; // w3
  System_String_o *v461; // x4
  BattleSetupInfo_o *v462; // x5
  FollowerInfo_o *v463; // x6
  PartyListViewItem_o *v464; // x7
  __int64 v465; // x1
  __int64 v466; // x2
  __int64 v467; // x3
  System_StringComparer_c *v468; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *s_ordinalIgnoreCase; // x19
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *v470; // x20
  struct Internal_Cryptography_OidLookup_StaticFields *static_fields; // x0
  int64_t v472; // x2
  int32_t v473; // w3
  System_String_o *v474; // x4
  BattleSetupInfo_o *v475; // x5
  FollowerInfo_o *v476; // x6
  PartyListViewItem_o *v477; // x7
  __int64 v478; // x1
  __int64 v479; // x2
  __int64 v480; // x3
  System_StringComparer_c *v481; // x0
  System_Collections_Generic_IEqualityComparer_TKey__o *v482; // x20
  System_Collections_Generic_Dictionary_object__object__o *v483; // x19
  __int64 v484; // x0
  __int64 v485; // x1
  struct Internal_Cryptography_OidLookup_StaticFields *v486; // x0
  int64_t v487; // x2
  int32_t v488; // w3
  System_String_o *v489; // x4
  BattleSetupInfo_o *v490; // x5
  FollowerInfo_o *v491; // x6
  PartyListViewItem_o *v492; // x7
  __int64 v493; // x1
  __int64 v494; // x2
  __int64 v495; // x3
  Internal_Cryptography_OidLookup___c_c *v496; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *s_friendlyNameToOid; // x19
  Il2CppObject *v498; // x20
  System_Func_T__TResult__o *v499; // x21
  Il2CppObject *v500; // x20
  __int64 v501; // x1
  __int64 v502; // x2
  __int64 v503; // x3
  System_Func_T__TResult__o *v504; // x22
  System_Collections_Generic_Dictionary_TKey__TElement__o *v505; // x0
  struct Internal_Cryptography_OidLookup_StaticFields *v506; // x8
  int64_t v507; // x2
  int32_t v508; // w3
  System_String_o *v509; // x4
  BattleSetupInfo_o *v510; // x5
  FollowerInfo_o *v511; // x6
  PartyListViewItem_o *v512; // x7
  __int64 v513; // x1
  __int64 v514; // x2
  __int64 v515; // x3
  System_Collections_Generic_Dictionary_object__object__o *v516; // x19
  struct Internal_Cryptography_OidLookup_StaticFields *v517; // x0
  int64_t v518; // x2
  int32_t v519; // w3
  System_String_o *v520; // x4
  BattleSetupInfo_o *v521; // x5
  FollowerInfo_o *v522; // x6
  PartyListViewItem_o *v523; // x7

  if ( (byte_4B1FC7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___76723312, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string___ctor___76745504, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, v12, v13);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___, v16, v17);
    sub_1BCA7E0(&System_Func_KeyValuePair_string__string___string__TypeInfo, v18, v19);
    sub_1BCA7E0(&Internal_Cryptography_OidLookup_TypeInfo, v20, v21);
    sub_1BCA7E0(&System_StringComparer_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__, v24, v25);
    sub_1BCA7E0(&Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__, v26, v27);
    sub_1BCA7E0(&Internal_Cryptography_OidLookup___c_TypeInfo, v28, v29);
    sub_1BCA7E0(&StringLiteral_17600/*"brainpoolP512t1"*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_1284/*"1.2.840.10046.2.1"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_17588/*"brainpoolP160t1"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_3643/*"CN"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_1294/*"1.2.840.113549.1.1.7"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_1368/*"1.3.36.3.3.2.8.1.1.13"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_1308/*"1.2.840.113549.1.3.1"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_11552/*"S"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_1425/*"2.16.840.1.101.3.4.2.1"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_1452/*"2.5.4.42"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_1367/*"1.3.36.3.3.2.8.1.1.12"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_1356/*"1.3.14.3.2.27"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_1446/*"2.5.4.18"*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_1337/*"1.3.132.0.10"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_18845/*"dnQualifier"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_1293/*"1.2.840.113549.1.1.5"*/, v60, v61);
    sub_1BCA7E0(&StringLiteral_1454/*"2.5.4.46"*/, v62, v63);
    sub_1BCA7E0(&StringLiteral_1274/*"1.2.840.10045.3.1.3"*/, v64, v65);
    sub_1BCA7E0(&StringLiteral_1336/*"1.2.840.113549.3.7"*/, v66, v67);
    sub_1BCA7E0(&StringLiteral_1419/*"2.16.840.1.101.3.4.1.22"*/, v68, v69);
    sub_1BCA7E0(&StringLiteral_1458/*"2.5.4.8"*/, v70, v71);
    sub_1BCA7E0(&StringLiteral_23316/*"secP160r2"*/, v72, v73);
    sub_1BCA7E0(&StringLiteral_22296/*"nistP192"*/, v74, v75);
    sub_1BCA7E0(&StringLiteral_1335/*"1.2.840.113549.3.4"*/, v76, v77);
    sub_1BCA7E0(&StringLiteral_18764/*"des"*/, v78, v79);
    sub_1BCA7E0(&StringLiteral_1457/*"2.5.4.7"*/, v80, v81);
    sub_1BCA7E0(&StringLiteral_1279/*"1.2.840.10045.4.1"*/, v82, v83);
    sub_1BCA7E0(&StringLiteral_5520/*"ECDH_STD_SHA256_KDF"*/, v84, v85);
    sub_1BCA7E0(&StringLiteral_21743/*"mosaicKMandUpdSig"*/, v86, v87);
    sub_1BCA7E0(&StringLiteral_1295/*"1.2.840.113549.1.1.8"*/, v88, v89);
    sub_1BCA7E0(&StringLiteral_21744/*"mosaicUpdatedSig"*/, v90, v91);
    sub_1BCA7E0(&StringLiteral_15868/*"X21Address"*/, v92, v93);
    sub_1BCA7E0(&StringLiteral_23485/*"sha256RSA"*/, v94, v95);
    sub_1BCA7E0(&StringLiteral_3642/*"CMSRC2wrap"*/, v96, v97);
    sub_1BCA7E0(&StringLiteral_17599/*"brainpoolP512r1"*/, v98, v99);
    sub_1BCA7E0(&StringLiteral_5519/*"ECDH_STD_SHA1_KDF"*/, v100, v101);
    sub_1BCA7E0(&StringLiteral_1285/*"1.2.840.113549.1.1.1"*/, v102, v103);
    sub_1BCA7E0(&StringLiteral_1453/*"2.5.4.43"*/, v104, v105);
    sub_1BCA7E0(&StringLiteral_1430/*"2.23.43.1.4.9"*/, v106, v107);
    sub_1BCA7E0(&StringLiteral_25071/*"x962P239v3"*/, v108, v109);
    sub_1BCA7E0(&StringLiteral_23315/*"secP160r1"*/, v110, v111);
    sub_1BCA7E0(&StringLiteral_1382/*"1.3.6.1.5.5.7.2.1"*/, v112, v113);
    sub_1BCA7E0(&StringLiteral_1445/*"2.5.4.17"*/, v114, v115);
    sub_1BCA7E0(&StringLiteral_1278/*"1.2.840.10045.3.1.7"*/, v116, v117);
    sub_1BCA7E0(&StringLiteral_10841/*"PostalCode"*/, v118, v119);
    sub_1BCA7E0(&StringLiteral_1343/*"1.3.132.0.35"*/, v120, v121);
    sub_1BCA7E0(&StringLiteral_1418/*"2.16.840.1.101.3.4.1.2"*/, v122, v123);
    sub_1BCA7E0(&StringLiteral_1282/*"1.2.840.10045.4.3.3"*/, v124, v125);
    sub_1BCA7E0(&StringLiteral_1272/*"1.2.840.10045.3.1.1"*/, v126, v127);
    sub_1BCA7E0(&StringLiteral_1373/*"1.3.36.3.3.2.8.1.1.5"*/, v128, v129);
    sub_1BCA7E0(&StringLiteral_6987/*"G"*/, v130, v131);
    sub_1BCA7E0(&StringLiteral_12323/*"SN"*/, v132, v133);
    sub_1BCA7E0(&StringLiteral_1277/*"1.2.840.10045.3.1.6"*/, v134, v135);
    sub_1BCA7E0(&StringLiteral_23491/*"sha512RSA"*/, v136, v137);
    sub_1BCA7E0(&StringLiteral_25070/*"x962P239v2"*/, v138, v139);
    sub_1BCA7E0(&StringLiteral_1333/*"1.2.840.113549.2.5"*/, v140, v141);
    sub_1BCA7E0(&StringLiteral_5510/*"ECC"*/, v142, v143);
    sub_1BCA7E0(&StringLiteral_1456/*"2.5.4.6"*/, v144, v145);
    sub_1BCA7E0(&StringLiteral_1319/*"1.2.840.113549.1.9.1"*/, v146, v147);
    sub_1BCA7E0(&StringLiteral_1371/*"1.3.36.3.3.2.8.1.1.3"*/, v148, v149);
    sub_1BCA7E0(&StringLiteral_22297/*"nistP224"*/, v150, v151);
    sub_1BCA7E0(&StringLiteral_1377/*"1.3.36.3.3.2.8.1.1.9"*/, v152, v153);
    sub_1BCA7E0(&StringLiteral_1331/*"1.2.840.113549.2.2"*/, v154, v155);
    sub_1BCA7E0(&StringLiteral_1348/*"1.3.133.16.840.63.0.2"*/, v156, v157);
    sub_1BCA7E0(&StringLiteral_1216/*"0.9.2342.19200300.100.1.25"*/, v158, v159);
    sub_1BCA7E0(&StringLiteral_1341/*"1.3.132.0.33"*/, v160, v161);
    sub_1BCA7E0(&StringLiteral_5504/*"E"*/, v162, v163);
    sub_1BCA7E0(&StringLiteral_23479/*"sha1"*/, v164, v165);
    sub_1BCA7E0(&StringLiteral_1281/*"1.2.840.10045.4.3.2"*/, v166, v167);
    sub_1BCA7E0(&StringLiteral_25067/*"x962P192v2"*/, v168, v169);
    sub_1BCA7E0(&StringLiteral_11270/*"RSA"*/, v170, v171);
    sub_1BCA7E0(&StringLiteral_17590/*"brainpoolP192t1"*/, v172, v173);
    sub_1BCA7E0(&StringLiteral_23487/*"sha384ECDSA"*/, v174, v175);
    sub_1BCA7E0(&StringLiteral_5142/*"DSA"*/, v176, v177);
    sub_1BCA7E0(&StringLiteral_5093/*"DH"*/, v178, v179);
    sub_1BCA7E0(&StringLiteral_1376/*"1.3.36.3.3.2.8.1.1.8"*/, v180, v181);
    sub_1BCA7E0(&StringLiteral_11670/*"SERIALNUMBER"*/, v182, v183);
    sub_1BCA7E0(&StringLiteral_3641/*"CMS3DESwrap"*/, v184, v185);
    sub_1BCA7E0(&StringLiteral_23481/*"sha1ECDSA"*/, v186, v187);
    sub_1BCA7E0(&StringLiteral_1448/*"2.5.4.24"*/, v188, v189);
    sub_1BCA7E0(&StringLiteral_23482/*"sha1RSA"*/, v190, v191);
    sub_1BCA7E0(&StringLiteral_1422/*"2.16.840.1.101.3.4.1.45"*/, v192, v193);
    sub_1BCA7E0(&StringLiteral_1269/*"1.2.840.10040.4.1"*/, v194, v195);
    sub_1BCA7E0(&StringLiteral_23317/*"secP192k1"*/, v196, v197);
    sub_1BCA7E0(&StringLiteral_1427/*"2.16.840.1.101.3.4.2.3"*/, v198, v199);
    sub_1BCA7E0(&StringLiteral_1372/*"1.3.36.3.3.2.8.1.1.4"*/, v200, v201);
    sub_1BCA7E0(&StringLiteral_1364/*"1.3.36.3.3.2.8.1.1.1"*/, v202, v203);
    sub_1BCA7E0(&StringLiteral_1287/*"1.2.840.113549.1.1.11"*/, v204, v205);
    sub_1BCA7E0(&StringLiteral_1421/*"2.16.840.1.101.3.4.1.42"*/, v206, v207);
    sub_1BCA7E0(&StringLiteral_17594/*"brainpoolP256t1"*/, v208, v209);
    sub_1BCA7E0(&StringLiteral_7401/*"I"*/, v210, v211);
    sub_1BCA7E0(&StringLiteral_11273/*"RSASSA-PSS"*/, v212, v213);
    sub_1BCA7E0(&StringLiteral_24995/*"wtls9"*/, v214, v215);
    sub_1BCA7E0(&StringLiteral_1283/*"1.2.840.10045.4.3.4"*/, v216, v217);
    sub_1BCA7E0(&StringLiteral_1322/*"1.2.840.113549.1.9.16.3.6"*/, v218, v219);
    sub_1BCA7E0(&StringLiteral_5070/*"DC"*/, v220, v221);
    sub_1BCA7E0(&StringLiteral_21597/*"md2"*/, v222, v223);
    sub_1BCA7E0(&StringLiteral_1415/*"2.16.840.1.101.2.1.1.19"*/, v224, v225);
    sub_1BCA7E0(&StringLiteral_1342/*"1.3.132.0.34"*/, v226, v227);
    sub_1BCA7E0(&StringLiteral_21600/*"md4RSA"*/, v228, v229);
    sub_1BCA7E0(&StringLiteral_1447/*"2.5.4.20"*/, v230, v231);
    sub_1BCA7E0(&StringLiteral_13395/*"T"*/, v232, v233);
    sub_1BCA7E0(&StringLiteral_11272/*"RSAES_OAEP"*/, v234, v235);
    sub_1BCA7E0(&StringLiteral_8352/*"L"*/, v236, v237);
    sub_1BCA7E0(&StringLiteral_17598/*"brainpoolP384t1"*/, v238, v239);
    sub_1BCA7E0(&StringLiteral_1350/*"1.3.14.3.2.13"*/, v240, v241);
    sub_1BCA7E0(&StringLiteral_25068/*"x962P192v3"*/, v242, v243);
    sub_1BCA7E0(&StringLiteral_1361/*"1.3.14.7.2.3.1"*/, v244, v245);
    sub_1BCA7E0(&StringLiteral_23488/*"sha384RSA"*/, v246, v247);
    sub_1BCA7E0(&StringLiteral_21598/*"md2RSA"*/, v248, v249);
    sub_1BCA7E0(&StringLiteral_23484/*"sha256ECDSA"*/, v250, v251);
    sub_1BCA7E0(&StringLiteral_23492/*"shaRSA"*/, v252, v253);
    sub_1BCA7E0(&StringLiteral_1444/*"2.5.4.13"*/, v254, v255);
    sub_1BCA7E0(&StringLiteral_23475/*"sha"*/, v256, v257);
    sub_1BCA7E0(&StringLiteral_21603/*"md5RSA"*/, v258, v259);
    sub_1BCA7E0(&StringLiteral_23483/*"sha256"*/, v260, v261);
    sub_1BCA7E0(&StringLiteral_23318/*"secP224k1"*/, v262, v263);
    sub_1BCA7E0(&StringLiteral_21601/*"md5"*/, v264, v265);
    sub_1BCA7E0(&StringLiteral_16871/*"aes192"*/, v266, v267);
    sub_1BCA7E0(&StringLiteral_1288/*"1.2.840.113549.1.1.12"*/, v268, v269);
    sub_1BCA7E0(&StringLiteral_10746/*"Phone"*/, v270, v271);
    sub_1BCA7E0(&StringLiteral_1275/*"1.2.840.10045.3.1.4"*/, v272, v273);
    sub_1BCA7E0(&StringLiteral_1487/*"3des"*/, v274, v275);
    sub_1BCA7E0(&StringLiteral_21656/*"mgf1"*/, v276, v277);
    sub_1BCA7E0(&StringLiteral_1449/*"2.5.4.3"*/, v278, v279);
    sub_1BCA7E0(&StringLiteral_1345/*"1.3.132.0.9"*/, v280, v281);
    sub_1BCA7E0(&StringLiteral_17592/*"brainpoolP224t1"*/, v282, v283);
    sub_1BCA7E0(&StringLiteral_5524/*"ECDSA_P384"*/, v284, v285);
    sub_1BCA7E0(&StringLiteral_1340/*"1.3.132.0.32"*/, v286, v287);
    sub_1BCA7E0(&StringLiteral_18868/*"dsaSHA1"*/, v288, v289);
    sub_1BCA7E0(&StringLiteral_1442/*"2.5.4.11"*/, v290, v291);
    sub_1BCA7E0(&StringLiteral_9737/*"O"*/, v292, v293);
    sub_1BCA7E0(&StringLiteral_1358/*"1.3.14.3.2.3"*/, v294, v295);
    sub_1BCA7E0(&StringLiteral_1334/*"1.2.840.113549.3.2"*/, v296, v297);
    sub_1BCA7E0(&StringLiteral_16869/*"aes128"*/, v298, v299);
    sub_1BCA7E0(&StringLiteral_1347/*"1.3.132.1.11.2"*/, v300, v301);
    sub_1BCA7E0(&StringLiteral_1359/*"1.3.14.3.2.4"*/, v302, v303);
    sub_1BCA7E0(&StringLiteral_10532/*"POBox"*/, v304, v305);
    sub_1BCA7E0(&StringLiteral_1332/*"1.2.840.113549.2.4"*/, v306, v307);
    sub_1BCA7E0(&StringLiteral_1346/*"1.3.132.1.11.1"*/, v308, v309);
    sub_1BCA7E0(&StringLiteral_1270/*"1.2.840.10040.4.3"*/, v310, v311);
    sub_1BCA7E0(&StringLiteral_1354/*"1.3.14.3.2.22"*/, v312, v313);
    sub_1BCA7E0(&StringLiteral_1366/*"1.3.36.3.3.2.8.1.1.11"*/, v314, v315);
    sub_1BCA7E0(&StringLiteral_1290/*"1.2.840.113549.1.1.2"*/, v316, v317);
    sub_1BCA7E0(&StringLiteral_11274/*"RSA_KEYX"*/, v318, v319);
    sub_1BCA7E0(&StringLiteral_1443/*"2.5.4.12"*/, v320, v321);
    sub_1BCA7E0(&StringLiteral_1416/*"2.16.840.1.101.2.1.1.20"*/, v322, v323);
    sub_1BCA7E0(&StringLiteral_23480/*"sha1DSA"*/, v324, v325);
    sub_1BCA7E0(&StringLiteral_23671/*"specifiedECDSA"*/, v326, v327);
    sub_1BCA7E0(&StringLiteral_1339/*"1.3.132.0.31"*/, v328, v329);
    sub_1BCA7E0(&StringLiteral_17593/*"brainpoolP256r1"*/, v330, v331);
    sub_1BCA7E0(&StringLiteral_1351/*"1.3.14.3.2.15"*/, v332, v333);
    sub_1BCA7E0(&StringLiteral_1344/*"1.3.132.0.8"*/, v334, v335);
    sub_1BCA7E0(&StringLiteral_1289/*"1.2.840.113549.1.1.13"*/, v336, v337);
    sub_1BCA7E0(&StringLiteral_17587/*"brainpoolP160r1"*/, v338, v339);
    sub_1BCA7E0(&StringLiteral_25069/*"x962P239v1"*/, v340, v341);
    sub_1BCA7E0(&StringLiteral_1355/*"1.3.14.3.2.26"*/, v342, v343);
    sub_1BCA7E0(&StringLiteral_1280/*"1.2.840.10045.4.3"*/, v344, v345);
    sub_1BCA7E0(&StringLiteral_9878/*"OU"*/, v346, v347);
    sub_1BCA7E0(&StringLiteral_1271/*"1.2.840.10045.2.1"*/, v348, v349);
    sub_1BCA7E0(&StringLiteral_1370/*"1.3.36.3.3.2.8.1.1.2"*/, v350, v351);
    sub_1BCA7E0(&StringLiteral_9437/*"NO_SIGN"*/, v352, v353);
    sub_1BCA7E0(&StringLiteral_23034/*"rc4"*/, v354, v355);
    sub_1BCA7E0(&StringLiteral_21599/*"md4"*/, v356, v357);
    sub_1BCA7E0(&StringLiteral_18985/*"ec192wapi"*/, v358, v359);
    sub_1BCA7E0(&StringLiteral_1323/*"1.2.840.113549.1.9.16.3.7"*/, v360, v361);
    sub_1BCA7E0(&StringLiteral_3409/*"C"*/, v362, v363);
    sub_1BCA7E0(&StringLiteral_1374/*"1.3.36.3.3.2.8.1.1.6"*/, v364, v365);
    sub_1BCA7E0(&StringLiteral_1276/*"1.2.840.10045.3.1.5"*/, v366, v367);
    sub_1BCA7E0(&StringLiteral_17597/*"brainpoolP384r1"*/, v368, v369);
    sub_1BCA7E0(&StringLiteral_17596/*"brainpoolP320t1"*/, v370, v371);
    sub_1BCA7E0(&StringLiteral_5601/*"ESDH"*/, v372, v373);
    sub_1BCA7E0(&StringLiteral_23486/*"sha384"*/, v374, v375);
    sub_1BCA7E0(&StringLiteral_1321/*"1.2.840.113549.1.9.16.3.5"*/, v376, v377);
    sub_1BCA7E0(&StringLiteral_5521/*"ECDH_STD_SHA384_KDF"*/, v378, v379);
    sub_1BCA7E0(&StringLiteral_1338/*"1.3.132.0.30"*/, v380, v381);
    sub_1BCA7E0(&StringLiteral_1353/*"1.3.14.3.2.2"*/, v382, v383);
    sub_1BCA7E0(&StringLiteral_1352/*"1.3.14.3.2.18"*/, v384, v385);
    sub_1BCA7E0(&StringLiteral_1292/*"1.2.840.113549.1.1.4"*/, v386, v387);
    sub_1BCA7E0(&StringLiteral_3964/*"CPS"*/, v388, v389);
    sub_1BCA7E0(&StringLiteral_1459/*"2.5.4.9"*/, v390, v391);
    sub_1BCA7E0(&StringLiteral_1273/*"1.2.840.10045.3.1.2"*/, v392, v393);
    sub_1BCA7E0(&StringLiteral_23489/*"sha512"*/, v394, v395);
    sub_1BCA7E0(&StringLiteral_1375/*"1.3.36.3.3.2.8.1.1.7"*/, v396, v397);
    sub_1BCA7E0(&StringLiteral_1423/*"2.16.840.1.101.3.4.1.5"*/, v398, v399);
    sub_1BCA7E0(&StringLiteral_16870/*"aes128wrap"*/, v400, v401);
    sub_1BCA7E0(&StringLiteral_1385/*"1.3.6.1.5.5.7.6.2"*/, v402, v403);
    sub_1BCA7E0(&StringLiteral_5525/*"ECDSA_P521"*/, v404, v405);
    sub_1BCA7E0(&StringLiteral_23314/*"secP160k1"*/, v406, v407);
    sub_1BCA7E0(&StringLiteral_1426/*"2.16.840.1.101.3.4.2.2"*/, v408, v409);
    sub_1BCA7E0(&StringLiteral_1360/*"1.3.14.3.2.7"*/, v410, v411);
    sub_1BCA7E0(&StringLiteral_16874/*"aes256wrap"*/, v412, v413);
    sub_1BCA7E0(&StringLiteral_1441/*"2.5.4.10"*/, v414, v415);
    sub_1BCA7E0(&StringLiteral_23490/*"sha512ECDSA"*/, v416, v417);
    sub_1BCA7E0(&StringLiteral_1349/*"1.3.14.3.2.12"*/, v418, v419);
    sub_1BCA7E0(&StringLiteral_1291/*"1.2.840.113549.1.1.3"*/, v420, v421);
    sub_1BCA7E0(&StringLiteral_23319/*"secP256k1"*/, v422, v423);
    sub_1BCA7E0(&StringLiteral_1369/*"1.3.36.3.3.2.8.1.1.14"*/, v424, v425);
    sub_1BCA7E0(&StringLiteral_5523/*"ECDSA_P256"*/, v426, v427);
    sub_1BCA7E0(&StringLiteral_1357/*"1.3.14.3.2.29"*/, v428, v429);
    sub_1BCA7E0(&StringLiteral_16872/*"aes192wrap"*/, v430, v431);
    sub_1BCA7E0(&StringLiteral_1268/*"1.2.156.11235.1.1.2.1"*/, v432, v433);
    sub_1BCA7E0(&StringLiteral_5351/*"Description"*/, v434, v435);
    sub_1BCA7E0(&StringLiteral_23033/*"rc2"*/, v436, v437);
    sub_1BCA7E0(&StringLiteral_17589/*"brainpoolP192r1"*/, v438, v439);
    sub_1BCA7E0(&StringLiteral_1455/*"2.5.4.5"*/, v440, v441);
    sub_1BCA7E0(&StringLiteral_16873/*"aes256"*/, v442, v443);
    sub_1BCA7E0(&StringLiteral_17591/*"brainpoolP224r1"*/, v444, v445);
    sub_1BCA7E0(&StringLiteral_17595/*"brainpoolP320r1"*/, v446, v447);
    sub_1BCA7E0(&StringLiteral_1365/*"1.3.36.3.3.2.8.1.1.10"*/, v448, v449);
    sub_1BCA7E0(&StringLiteral_1286/*"1.2.840.113549.1.1.10"*/, v450, v451);
    sub_1BCA7E0(&StringLiteral_1420/*"2.16.840.1.101.3.4.1.25"*/, v452, v453);
    sub_1BCA7E0(&StringLiteral_12467/*"STREET"*/, v454, v455);
    sub_1BCA7E0(&StringLiteral_1450/*"2.5.4.4"*/, v456, v457);
    byte_4B1FC7C = 1;
  }
  v458 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                                 System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo,
                                                                                 v1,
                                                                                 v2,
                                                                                 v3);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor(
    v458,
    (const MethodInfo_31959D0 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor__);
  Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_lateBoundOidToFriendlyName = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v458;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)Internal_Cryptography_OidLookup_TypeInfo->static_fields,
    (int64_t)v458,
    v459,
    v460,
    v461,
    v462,
    v463,
    v464);
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo, v465);
  if ( !byte_4B1DCFE )
  {
    sub_1BCA7E0(&System_StringComparer_TypeInfo, v465, v466);
    byte_4B1DCFE = 1;
  }
  v468 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo, v465);
    v468 = System_StringComparer_TypeInfo;
  }
  s_ordinalIgnoreCase = (System_Collections_Generic_IEqualityComparer_TKey__o *)v468->static_fields->s_ordinalIgnoreCase;
  v470 = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                                 System_Collections_Concurrent_ConcurrentDictionary_string__string__TypeInfo,
                                                                                 v465,
                                                                                 v466,
                                                                                 v467);
  System_Collections_Concurrent_ConcurrentDictionary_object__object____ctor_51993152(
    v470,
    s_ordinalIgnoreCase,
    (const MethodInfo_3195A40 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string___ctor___76723312);
  static_fields = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  static_fields->s_lateBoundFriendlyNameToOid = (struct System_Collections_Concurrent_ConcurrentDictionary_string__string__o *)v470;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->s_lateBoundFriendlyNameToOid,
    (int64_t)v470,
    v472,
    v473,
    v474,
    v475,
    v476,
    v477);
  if ( !byte_4B1DCFE )
  {
    sub_1BCA7E0(&System_StringComparer_TypeInfo, v478, v479);
    byte_4B1DCFE = 1;
  }
  v481 = System_StringComparer_TypeInfo;
  if ( !System_StringComparer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_StringComparer_TypeInfo, v478);
    v481 = System_StringComparer_TypeInfo;
  }
  v482 = (System_Collections_Generic_IEqualityComparer_TKey__o *)v481->static_fields->s_ordinalIgnoreCase;
  v483 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                      v478,
                                                                      v479,
                                                                      v480);
  System_Collections_Generic_Dictionary_object__object____ctor_52840668(
    v483,
    v482,
    (const MethodInfo_32648DC *)Method_System_Collections_Generic_Dictionary_string__string___ctor___76745504);
  if ( !v483 )
    goto LABEL_18;
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_1487/*"3des"*/,
    (Il2CppObject *)StringLiteral_1336/*"1.2.840.113549.3.7"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_16869/*"aes128"*/,
    (Il2CppObject *)StringLiteral_1418/*"2.16.840.1.101.3.4.1.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_16870/*"aes128wrap"*/,
    (Il2CppObject *)StringLiteral_1423/*"2.16.840.1.101.3.4.1.5"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_16871/*"aes192"*/,
    (Il2CppObject *)StringLiteral_1419/*"2.16.840.1.101.3.4.1.22"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_16872/*"aes192wrap"*/,
    (Il2CppObject *)StringLiteral_1420/*"2.16.840.1.101.3.4.1.25"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_16873/*"aes256"*/,
    (Il2CppObject *)StringLiteral_1421/*"2.16.840.1.101.3.4.1.42"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_16874/*"aes256wrap"*/,
    (Il2CppObject *)StringLiteral_1422/*"2.16.840.1.101.3.4.1.45"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17587/*"brainpoolP160r1"*/,
    (Il2CppObject *)StringLiteral_1364/*"1.3.36.3.3.2.8.1.1.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17588/*"brainpoolP160t1"*/,
    (Il2CppObject *)StringLiteral_1370/*"1.3.36.3.3.2.8.1.1.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17589/*"brainpoolP192r1"*/,
    (Il2CppObject *)StringLiteral_1371/*"1.3.36.3.3.2.8.1.1.3"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17590/*"brainpoolP192t1"*/,
    (Il2CppObject *)StringLiteral_1372/*"1.3.36.3.3.2.8.1.1.4"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17591/*"brainpoolP224r1"*/,
    (Il2CppObject *)StringLiteral_1373/*"1.3.36.3.3.2.8.1.1.5"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17592/*"brainpoolP224t1"*/,
    (Il2CppObject *)StringLiteral_1374/*"1.3.36.3.3.2.8.1.1.6"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17593/*"brainpoolP256r1"*/,
    (Il2CppObject *)StringLiteral_1375/*"1.3.36.3.3.2.8.1.1.7"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17594/*"brainpoolP256t1"*/,
    (Il2CppObject *)StringLiteral_1376/*"1.3.36.3.3.2.8.1.1.8"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17595/*"brainpoolP320r1"*/,
    (Il2CppObject *)StringLiteral_1377/*"1.3.36.3.3.2.8.1.1.9"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17596/*"brainpoolP320t1"*/,
    (Il2CppObject *)StringLiteral_1365/*"1.3.36.3.3.2.8.1.1.10"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17597/*"brainpoolP384r1"*/,
    (Il2CppObject *)StringLiteral_1366/*"1.3.36.3.3.2.8.1.1.11"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17598/*"brainpoolP384t1"*/,
    (Il2CppObject *)StringLiteral_1367/*"1.3.36.3.3.2.8.1.1.12"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17599/*"brainpoolP512r1"*/,
    (Il2CppObject *)StringLiteral_1368/*"1.3.36.3.3.2.8.1.1.13"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_17600/*"brainpoolP512t1"*/,
    (Il2CppObject *)StringLiteral_1369/*"1.3.36.3.3.2.8.1.1.14"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_3409/*"C"*/,
    (Il2CppObject *)StringLiteral_1456/*"2.5.4.6"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_3641/*"CMS3DESwrap"*/,
    (Il2CppObject *)StringLiteral_1322/*"1.2.840.113549.1.9.16.3.6"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_3642/*"CMSRC2wrap"*/,
    (Il2CppObject *)StringLiteral_1323/*"1.2.840.113549.1.9.16.3.7"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_3643/*"CN"*/,
    (Il2CppObject *)StringLiteral_1449/*"2.5.4.3"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_3964/*"CPS"*/,
    (Il2CppObject *)StringLiteral_1382/*"1.3.6.1.5.5.7.2.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5070/*"DC"*/,
    (Il2CppObject *)StringLiteral_1216/*"0.9.2342.19200300.100.1.25"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_18764/*"des"*/,
    (Il2CppObject *)StringLiteral_1360/*"1.3.14.3.2.7"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5351/*"Description"*/,
    (Il2CppObject *)StringLiteral_1444/*"2.5.4.13"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5093/*"DH"*/,
    (Il2CppObject *)StringLiteral_1284/*"1.2.840.10046.2.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_18845/*"dnQualifier"*/,
    (Il2CppObject *)StringLiteral_1454/*"2.5.4.46"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5142/*"DSA"*/,
    (Il2CppObject *)StringLiteral_1269/*"1.2.840.10040.4.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_18868/*"dsaSHA1"*/,
    (Il2CppObject *)StringLiteral_1356/*"1.3.14.3.2.27"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5504/*"E"*/,
    (Il2CppObject *)StringLiteral_1319/*"1.2.840.113549.1.9.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_18985/*"ec192wapi"*/,
    (Il2CppObject *)StringLiteral_1268/*"1.2.156.11235.1.1.2.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5510/*"ECC"*/,
    (Il2CppObject *)StringLiteral_1271/*"1.2.840.10045.2.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5519/*"ECDH_STD_SHA1_KDF"*/,
    (Il2CppObject *)StringLiteral_1348/*"1.3.133.16.840.63.0.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5520/*"ECDH_STD_SHA256_KDF"*/,
    (Il2CppObject *)StringLiteral_1346/*"1.3.132.1.11.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5521/*"ECDH_STD_SHA384_KDF"*/,
    (Il2CppObject *)StringLiteral_1347/*"1.3.132.1.11.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5523/*"ECDSA_P256"*/,
    (Il2CppObject *)StringLiteral_1278/*"1.2.840.10045.3.1.7"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5524/*"ECDSA_P384"*/,
    (Il2CppObject *)StringLiteral_1342/*"1.3.132.0.34"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5525/*"ECDSA_P521"*/,
    (Il2CppObject *)StringLiteral_1343/*"1.3.132.0.35"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_5601/*"ESDH"*/,
    (Il2CppObject *)StringLiteral_1321/*"1.2.840.113549.1.9.16.3.5"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_6987/*"G"*/,
    (Il2CppObject *)StringLiteral_1452/*"2.5.4.42"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_7401/*"I"*/,
    (Il2CppObject *)StringLiteral_1453/*"2.5.4.43"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_8352/*"L"*/,
    (Il2CppObject *)StringLiteral_1457/*"2.5.4.7"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_21597/*"md2"*/,
    (Il2CppObject *)StringLiteral_1331/*"1.2.840.113549.2.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_21598/*"md2RSA"*/,
    (Il2CppObject *)StringLiteral_1290/*"1.2.840.113549.1.1.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_21599/*"md4"*/,
    (Il2CppObject *)StringLiteral_1332/*"1.2.840.113549.2.4"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_21600/*"md4RSA"*/,
    (Il2CppObject *)StringLiteral_1291/*"1.2.840.113549.1.1.3"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_21601/*"md5"*/,
    (Il2CppObject *)StringLiteral_1333/*"1.2.840.113549.2.5"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_21603/*"md5RSA"*/,
    (Il2CppObject *)StringLiteral_1292/*"1.2.840.113549.1.1.4"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_21656/*"mgf1"*/,
    (Il2CppObject *)StringLiteral_1295/*"1.2.840.113549.1.1.8"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_21743/*"mosaicKMandUpdSig"*/,
    (Il2CppObject *)StringLiteral_1416/*"2.16.840.1.101.2.1.1.20"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_21744/*"mosaicUpdatedSig"*/,
    (Il2CppObject *)StringLiteral_1415/*"2.16.840.1.101.2.1.1.19"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_22296/*"nistP192"*/,
    (Il2CppObject *)StringLiteral_1272/*"1.2.840.10045.3.1.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_22297/*"nistP224"*/,
    (Il2CppObject *)StringLiteral_1341/*"1.3.132.0.33"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_9437/*"NO_SIGN"*/,
    (Il2CppObject *)StringLiteral_1385/*"1.3.6.1.5.5.7.6.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_9737/*"O"*/,
    (Il2CppObject *)StringLiteral_1441/*"2.5.4.10"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_9878/*"OU"*/,
    (Il2CppObject *)StringLiteral_1442/*"2.5.4.11"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_10746/*"Phone"*/,
    (Il2CppObject *)StringLiteral_1447/*"2.5.4.20"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_10532/*"POBox"*/,
    (Il2CppObject *)StringLiteral_1446/*"2.5.4.18"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_10841/*"PostalCode"*/,
    (Il2CppObject *)StringLiteral_1445/*"2.5.4.17"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23033/*"rc2"*/,
    (Il2CppObject *)StringLiteral_1334/*"1.2.840.113549.3.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23034/*"rc4"*/,
    (Il2CppObject *)StringLiteral_1335/*"1.2.840.113549.3.4"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_11270/*"RSA"*/,
    (Il2CppObject *)StringLiteral_1285/*"1.2.840.113549.1.1.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_11272/*"RSAES_OAEP"*/,
    (Il2CppObject *)StringLiteral_1294/*"1.2.840.113549.1.1.7"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_11273/*"RSASSA-PSS"*/,
    (Il2CppObject *)StringLiteral_1286/*"1.2.840.113549.1.1.10"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_11552/*"S"*/,
    (Il2CppObject *)StringLiteral_1458/*"2.5.4.8"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23314/*"secP160k1"*/,
    (Il2CppObject *)StringLiteral_1345/*"1.3.132.0.9"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23315/*"secP160r1"*/,
    (Il2CppObject *)StringLiteral_1344/*"1.3.132.0.8"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23316/*"secP160r2"*/,
    (Il2CppObject *)StringLiteral_1338/*"1.3.132.0.30"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23317/*"secP192k1"*/,
    (Il2CppObject *)StringLiteral_1339/*"1.3.132.0.31"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23318/*"secP224k1"*/,
    (Il2CppObject *)StringLiteral_1340/*"1.3.132.0.32"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23319/*"secP256k1"*/,
    (Il2CppObject *)StringLiteral_1337/*"1.3.132.0.10"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_11670/*"SERIALNUMBER"*/,
    (Il2CppObject *)StringLiteral_1455/*"2.5.4.5"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23479/*"sha1"*/,
    (Il2CppObject *)StringLiteral_1355/*"1.3.14.3.2.26"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23480/*"sha1DSA"*/,
    (Il2CppObject *)StringLiteral_1270/*"1.2.840.10040.4.3"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23481/*"sha1ECDSA"*/,
    (Il2CppObject *)StringLiteral_1279/*"1.2.840.10045.4.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23482/*"sha1RSA"*/,
    (Il2CppObject *)StringLiteral_1293/*"1.2.840.113549.1.1.5"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23483/*"sha256"*/,
    (Il2CppObject *)StringLiteral_1425/*"2.16.840.1.101.3.4.2.1"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23484/*"sha256ECDSA"*/,
    (Il2CppObject *)StringLiteral_1281/*"1.2.840.10045.4.3.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23485/*"sha256RSA"*/,
    (Il2CppObject *)StringLiteral_1287/*"1.2.840.113549.1.1.11"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23486/*"sha384"*/,
    (Il2CppObject *)StringLiteral_1426/*"2.16.840.1.101.3.4.2.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23487/*"sha384ECDSA"*/,
    (Il2CppObject *)StringLiteral_1282/*"1.2.840.10045.4.3.3"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23488/*"sha384RSA"*/,
    (Il2CppObject *)StringLiteral_1288/*"1.2.840.113549.1.1.12"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23489/*"sha512"*/,
    (Il2CppObject *)StringLiteral_1427/*"2.16.840.1.101.3.4.2.3"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23490/*"sha512ECDSA"*/,
    (Il2CppObject *)StringLiteral_1283/*"1.2.840.10045.4.3.4"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23491/*"sha512RSA"*/,
    (Il2CppObject *)StringLiteral_1289/*"1.2.840.113549.1.1.13"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_12323/*"SN"*/,
    (Il2CppObject *)StringLiteral_1450/*"2.5.4.4"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_23671/*"specifiedECDSA"*/,
    (Il2CppObject *)StringLiteral_1280/*"1.2.840.10045.4.3"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_12467/*"STREET"*/,
    (Il2CppObject *)StringLiteral_1459/*"2.5.4.9"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_13395/*"T"*/,
    (Il2CppObject *)StringLiteral_1443/*"2.5.4.12"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_24995/*"wtls9"*/,
    (Il2CppObject *)StringLiteral_1430/*"2.23.43.1.4.9"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_15868/*"X21Address"*/,
    (Il2CppObject *)StringLiteral_1448/*"2.5.4.24"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_25067/*"x962P192v2"*/,
    (Il2CppObject *)StringLiteral_1273/*"1.2.840.10045.3.1.2"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_25068/*"x962P192v3"*/,
    (Il2CppObject *)StringLiteral_1274/*"1.2.840.10045.3.1.3"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_25069/*"x962P239v1"*/,
    (Il2CppObject *)StringLiteral_1275/*"1.2.840.10045.3.1.4"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_25070/*"x962P239v2"*/,
    (Il2CppObject *)StringLiteral_1276/*"1.2.840.10045.3.1.5"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v483,
    (Il2CppObject *)StringLiteral_25071/*"x962P239v3"*/,
    (Il2CppObject *)StringLiteral_1277/*"1.2.840.10045.3.1.6"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v486 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v486->s_friendlyNameToOid = (struct System_Collections_Generic_Dictionary_string__string__o *)v483;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v486->s_friendlyNameToOid,
    (int64_t)v483,
    v487,
    v488,
    v489,
    v490,
    v491,
    v492);
  v496 = Internal_Cryptography_OidLookup___c_TypeInfo;
  s_friendlyNameToOid = Internal_Cryptography_OidLookup_TypeInfo->static_fields->s_friendlyNameToOid;
  if ( !Internal_Cryptography_OidLookup___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup___c_TypeInfo, v493);
    v496 = Internal_Cryptography_OidLookup___c_TypeInfo;
  }
  v498 = (Il2CppObject *)v496->static_fields->__9;
  v499 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                        System_Func_KeyValuePair_string__string___string__TypeInfo,
                                        v493,
                                        v494,
                                        v495);
  System_Func_KeyValuePair_object__object___object____ctor(
    v499,
    v498,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_0__,
    0LL);
  v500 = (Il2CppObject *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9;
  v504 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                        System_Func_KeyValuePair_string__string___string__TypeInfo,
                                        v501,
                                        v502,
                                        v503);
  System_Func_KeyValuePair_object__object___object____ctor(
    v504,
    v500,
    Method_Internal_Cryptography_OidLookup___c___cctor_b__10_1__,
    0LL);
  v505 = System_Linq_Enumerable__ToDictionary_KeyValuePair_object__object___object__object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)s_friendlyNameToOid,
           (System_Func_TSource__TKey__o *)v499,
           (System_Func_TSource__TElement__o *)v504,
           (const MethodInfo_2F4BF90 *)Method_System_Linq_Enumerable_ToDictionary_KeyValuePair_string__string___string__string___);
  v506 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v506->s_oidToFriendlyName = (struct System_Collections_Generic_Dictionary_string__string__o *)v505;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v506->s_oidToFriendlyName,
    (int64_t)v505,
    v507,
    v508,
    v509,
    v510,
    v511,
    v512);
  v516 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                      v513,
                                                                      v514,
                                                                      v515);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v516,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  if ( !v516 )
LABEL_18:
    sub_1BCAA3C(v484, v485);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1308/*"1.2.840.113549.1.3.1"*/,
    (Il2CppObject *)StringLiteral_5093/*"DH"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1349/*"1.3.14.3.2.12"*/,
    (Il2CppObject *)StringLiteral_5142/*"DSA"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1350/*"1.3.14.3.2.13"*/,
    (Il2CppObject *)StringLiteral_23480/*"sha1DSA"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1351/*"1.3.14.3.2.15"*/,
    (Il2CppObject *)StringLiteral_23492/*"shaRSA"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1352/*"1.3.14.3.2.18"*/,
    (Il2CppObject *)StringLiteral_23475/*"sha"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1353/*"1.3.14.3.2.2"*/,
    (Il2CppObject *)StringLiteral_21600/*"md4RSA"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1354/*"1.3.14.3.2.22"*/,
    (Il2CppObject *)StringLiteral_11274/*"RSA_KEYX"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1357/*"1.3.14.3.2.29"*/,
    (Il2CppObject *)StringLiteral_23482/*"sha1RSA"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1358/*"1.3.14.3.2.3"*/,
    (Il2CppObject *)StringLiteral_21603/*"md5RSA"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1359/*"1.3.14.3.2.4"*/,
    (Il2CppObject *)StringLiteral_21600/*"md4RSA"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v516,
    (Il2CppObject *)StringLiteral_1361/*"1.3.14.7.2.3.1"*/,
    (Il2CppObject *)StringLiteral_21598/*"md2RSA"*/,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
  v517 = Internal_Cryptography_OidLookup_TypeInfo->static_fields;
  v517->s_compatOids = (struct System_Collections_Generic_Dictionary_string__string__o *)v516;
  sub_1BCA784((PartyOrganizationUtility_o *)&v517->s_compatOids, (int64_t)v516, v518, v519, v520, v521, v522, v523);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Internal_Cryptography_OidLookup__NativeFriendlyNameToOid(
        System_String_o *friendlyName,
        int32_t oidGroup,
        bool fallBackToAllGroups,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  uint32_t v47; // w0
  bool v48; // w0
  __int64 *v49; // x8
  System_String_o *v51; // x8

  if ( (byte_4B1FC7B & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6457/*"Extended Key Usage"*/, *(_QWORD *)&oidGroup, fallBackToAllGroups);
    sub_1BCA7E0(&StringLiteral_1434/*"2.5.29.17"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_1328/*"1.2.840.113549.1.9.4"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_8326/*"Key Usage"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1329/*"1.2.840.113549.1.9.5"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_9127/*"Message Digest"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1327/*"1.2.840.113549.1.9.3"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1429/*"2.16.840.1.113730.1.1"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12928/*"Signing Time"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1440/*"2.5.29.37"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1432/*"2.5.29.14"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1320/*"1.2.840.113549.1.9.16.3.3"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10515/*"PKCS 7 Data"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3227/*"Basic Constraints"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_13207/*"Subject Alternative Name"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_4783/*"Content Type"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_13208/*"Subject Key Identifier"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_1433/*"2.5.29.15"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_9520/*"Netscape Cert Type"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1315/*"1.2.840.113549.1.7.1"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_1436/*"2.5.29.19"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_20417/*"id-smime-alg-3DESwrap"*/, v45, v46);
    byte_4B1FC7B = 1;
  }
  v47 = PrivateImplementationDetails___ComputeStringHash_68856452(friendlyName, 0LL);
  if ( v47 > 0x751680DD )
  {
    if ( v47 > 0xB4301663 )
    {
      switch ( v47 )
      {
        case 0xB85A3360:
          v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_6457/*"Extended Key Usage"*/, 0LL);
          v49 = &StringLiteral_1440/*"2.5.29.37"*/;
          break;
        case 0xCCB33EB4:
          v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_9127/*"Message Digest"*/, 0LL);
          v49 = &StringLiteral_1328/*"1.2.840.113549.1.9.4"*/;
          break;
        case 0xE2748DE9:
          v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_20417/*"id-smime-alg-3DESwrap"*/, 0LL);
          v49 = &StringLiteral_1320/*"1.2.840.113549.1.9.16.3.3"*/;
          break;
        default:
          return 0LL;
      }
    }
    else
    {
      switch ( v47 )
      {
        case 0x953B2236:
          v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_4783/*"Content Type"*/, 0LL);
          v49 = &StringLiteral_1327/*"1.2.840.113549.1.9.3"*/;
          break;
        case 0x9DCF2034:
          v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_9520/*"Netscape Cert Type"*/, 0LL);
          v49 = &StringLiteral_1429/*"2.16.840.1.113730.1.1"*/;
          break;
        case 0xB4301663:
          v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_13207/*"Subject Alternative Name"*/, 0LL);
          v49 = &StringLiteral_1434/*"2.5.29.17"*/;
          break;
        default:
          return 0LL;
      }
    }
  }
  else if ( v47 > 0x55D8B021 )
  {
    switch ( v47 )
    {
      case 0x5BEE62EFu:
        v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_13208/*"Subject Key Identifier"*/, 0LL);
        v49 = &StringLiteral_1432/*"2.5.29.14"*/;
        break;
      case 0x5F357EFDu:
        v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_12928/*"Signing Time"*/, 0LL);
        v49 = &StringLiteral_1329/*"1.2.840.113549.1.9.5"*/;
        break;
      case 0x751680DDu:
        v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_3227/*"Basic Constraints"*/, 0LL);
        v49 = &StringLiteral_1436/*"2.5.29.19"*/;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    if ( v47 != 61174027 )
    {
      if ( v47 == 1440264225 )
      {
        v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_10515/*"PKCS 7 Data"*/, 0LL);
        v49 = &StringLiteral_1315/*"1.2.840.113549.1.7.1"*/;
        goto LABEL_29;
      }
      return 0LL;
    }
    v48 = System_String__op_Equality(friendlyName, (System_String_o *)StringLiteral_8326/*"Key Usage"*/, 0LL);
    v49 = &StringLiteral_1433/*"2.5.29.15"*/;
  }
LABEL_29:
  v51 = (System_String_o *)*v49;
  if ( v48 )
    return v51;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  uint32_t v47; // w0
  bool v48; // w0
  __int64 *v49; // x8
  System_String_o *v51; // x8

  if ( (byte_4B1FC7A & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_6457/*"Extended Key Usage"*/, *(_QWORD *)&oidGroup, fallBackToAllGroups);
    sub_1BCA7E0(&StringLiteral_1434/*"2.5.29.17"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_1328/*"1.2.840.113549.1.9.4"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_8326/*"Key Usage"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_1329/*"1.2.840.113549.1.9.5"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_9127/*"Message Digest"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_1327/*"1.2.840.113549.1.9.3"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_1429/*"2.16.840.1.113730.1.1"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12928/*"Signing Time"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_1440/*"2.5.29.37"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_1432/*"2.5.29.14"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1320/*"1.2.840.113549.1.9.16.3.3"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_10515/*"PKCS 7 Data"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_3227/*"Basic Constraints"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_13207/*"Subject Alternative Name"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_4783/*"Content Type"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_13208/*"Subject Key Identifier"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_1433/*"2.5.29.15"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_9520/*"Netscape Cert Type"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1315/*"1.2.840.113549.1.7.1"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_1436/*"2.5.29.19"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_20417/*"id-smime-alg-3DESwrap"*/, v45, v46);
    byte_4B1FC7A = 1;
  }
  v47 = PrivateImplementationDetails___ComputeStringHash_68856452(oid, 0LL);
  if ( v47 > 0xC67AB912 )
  {
    if ( v47 > 0xD20A3896 )
    {
      switch ( v47 )
      {
        case 0xD30A3A29:
          v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1433/*"2.5.29.15"*/, 0LL);
          v49 = &StringLiteral_8326/*"Key Usage"*/;
          break;
        case 0xDC06204E:
          v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1429/*"2.16.840.1.113730.1.1"*/, 0LL);
          v49 = &StringLiteral_9520/*"Netscape Cert Type"*/;
          break;
        case 0xDF0A4D0D:
          v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1436/*"2.5.29.19"*/, 0LL);
          v49 = &StringLiteral_3227/*"Basic Constraints"*/;
          break;
        default:
          return 0LL;
      }
    }
    else
    {
      switch ( v47 )
      {
        case 0xD105B9D5:
          v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1440/*"2.5.29.37"*/, 0LL);
          v49 = &StringLiteral_6457/*"Extended Key Usage"*/;
          break;
        case 0xD10A3703:
          v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1434/*"2.5.29.17"*/, 0LL);
          v49 = &StringLiteral_13207/*"Subject Alternative Name"*/;
          break;
        case 0xD20A3896:
          v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1432/*"2.5.29.14"*/, 0LL);
          v49 = &StringLiteral_13208/*"Subject Key Identifier"*/;
          break;
        default:
          return 0LL;
      }
    }
  }
  else if ( v47 > 0xABE04A90 )
  {
    switch ( v47 )
    {
      case 0xACE04C23:
        v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1328/*"1.2.840.113549.1.9.4"*/, 0LL);
        v49 = &StringLiteral_9127/*"Message Digest"*/;
        break;
      case 0xB1E05402:
        v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1327/*"1.2.840.113549.1.9.3"*/, 0LL);
        v49 = &StringLiteral_4783/*"Content Type"*/;
        break;
      case 0xC67AB912:
        v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1320/*"1.2.840.113549.1.9.16.3.3"*/, 0LL);
        v49 = &StringLiteral_20417/*"id-smime-alg-3DESwrap"*/;
        break;
      default:
        return 0LL;
    }
  }
  else
  {
    if ( v47 != -1411364208 )
    {
      if ( v47 == 2095896238 )
      {
        v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1315/*"1.2.840.113549.1.7.1"*/, 0LL);
        v49 = &StringLiteral_10515/*"PKCS 7 Data"*/;
        goto LABEL_29;
      }
      return 0LL;
    }
    v48 = System_String__op_Equality(oid, (System_String_o *)StringLiteral_1329/*"1.2.840.113549.1.9.5"*/, 0LL);
    v49 = &StringLiteral_12928/*"Signing Time"*/;
  }
LABEL_29:
  v51 = (System_String_o *)*v49;
  if ( v48 )
    return v51;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Internal_Cryptography_OidLookup_c *v11; // x0
  System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *s_oidToFriendlyName; // x0
  Internal_Cryptography_OidLookup_c *v13; // x0
  Internal_Cryptography_OidLookup_c *v14; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  Internal_Cryptography_OidLookup_c *v17; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  System_ArgumentNullException_o *v23; // x19
  __int64 v24; // x1
  System_String_o *v25; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1FC78 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__,
      *(_QWORD *)&oidGroup,
      fallBackToAllGroups);
    sub_1BCA7E0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v7, v8);
    sub_1BCA7E0(&Internal_Cryptography_OidLookup_TypeInfo, v9, v10);
    byte_4B1FC78 = 1;
  }
  value = 0LL;
  if ( !oid )
  {
    v19 = sub_1BCA7F4(&System_ArgumentNullException_TypeInfo, *(_QWORD *)&oidGroup);
    v23 = (System_ArgumentNullException_o *)sub_1BCAA2C(v19, v20, v21, v22);
    v25 = (System_String_o *)sub_1BCA7F4(&StringLiteral_22462/*"oid"*/, v24);
    System_ArgumentNullException___ctor_63003696(v23, v25, 0LL);
    v27 = sub_1BCA7F4(&Method_Internal_Cryptography_OidLookup_ToFriendlyName__, v26);
    sub_1BCA908(v23, v27);
  }
  v11 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
    v11 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
      v11 = Internal_Cryptography_OidLookup_TypeInfo;
    }
  }
  s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v11->static_fields->s_oidToFriendlyName;
  if ( !s_oidToFriendlyName )
    goto LABEL_25;
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)s_oidToFriendlyName,
          (Il2CppObject *)oid,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    v13 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
      v13 = Internal_Cryptography_OidLookup_TypeInfo;
    }
    s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v13->static_fields->s_compatOids;
    if ( !s_oidToFriendlyName )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)s_oidToFriendlyName,
            (Il2CppObject *)oid,
            &value,
            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
    {
      v14 = Internal_Cryptography_OidLookup_TypeInfo;
      if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
        v14 = Internal_Cryptography_OidLookup_TypeInfo;
      }
      s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v14->static_fields->s_lateBoundOidToFriendlyName;
      if ( !s_oidToFriendlyName )
        goto LABEL_25;
      if ( !System_Collections_Concurrent_ConcurrentDictionary_object__object___TryGetValue(
              s_oidToFriendlyName,
              (Il2CppObject *)oid,
              &value,
              (const MethodInfo_3196868 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
      {
        if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, v15);
        value = (Il2CppObject *)Internal_Cryptography_OidLookup__NativeOidToFriendlyName(oid, v15, 0, v16);
        if ( value )
        {
          v17 = Internal_Cryptography_OidLookup_TypeInfo;
          if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
            v17 = Internal_Cryptography_OidLookup_TypeInfo;
          }
          s_oidToFriendlyName = (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)v17->static_fields->s_lateBoundOidToFriendlyName;
          if ( s_oidToFriendlyName )
          {
            System_Collections_Concurrent_ConcurrentDictionary_object__object___TryAdd(
              s_oidToFriendlyName,
              (Il2CppObject *)oid,
              value,
              (const MethodInfo_31961E4 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
            return (System_String_o *)value;
          }
LABEL_25:
          sub_1BCAA3C(s_oidToFriendlyName, *(_QWORD *)&oidGroup);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Internal_Cryptography_OidLookup_c *v11; // x0
  System_Collections_Generic_Dictionary_object__object__o *s_friendlyNameToOid; // x0
  Internal_Cryptography_OidLookup_c *v13; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  System_String_o *result; // x0
  Internal_Cryptography_OidLookup_c *v17; // x0
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_ArgumentNullException_o *v22; // x19
  __int64 v23; // x1
  System_String_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B1FC79 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__,
      *(_QWORD *)&oidGroup,
      fallBackToAllGroups);
    sub_1BCA7E0(&Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v7, v8);
    sub_1BCA7E0(&Internal_Cryptography_OidLookup_TypeInfo, v9, v10);
    byte_4B1FC79 = 1;
  }
  value = 0LL;
  if ( !friendlyName )
  {
    v18 = sub_1BCA7F4(&System_ArgumentNullException_TypeInfo, *(_QWORD *)&oidGroup);
    v22 = (System_ArgumentNullException_o *)sub_1BCAA2C(v18, v19, v20, v21);
    v24 = (System_String_o *)sub_1BCA7F4(&StringLiteral_19856/*"friendlyName"*/, v23);
    System_ArgumentNullException___ctor_63003696(v22, v24, 0LL);
    v26 = sub_1BCA7F4(&Method_Internal_Cryptography_OidLookup_ToOid__, v25);
    sub_1BCA908(v22, v26);
  }
  if ( !friendlyName->fields._stringLength )
    return 0LL;
  v11 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
    v11 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
      v11 = Internal_Cryptography_OidLookup_TypeInfo;
    }
  }
  s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v11->static_fields->s_friendlyNameToOid;
  if ( !s_friendlyNameToOid )
    goto LABEL_25;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         s_friendlyNameToOid,
         (Il2CppObject *)friendlyName,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  v13 = Internal_Cryptography_OidLookup_TypeInfo;
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
    v13 = Internal_Cryptography_OidLookup_TypeInfo;
  }
  s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v13->static_fields->s_lateBoundFriendlyNameToOid;
  if ( !s_friendlyNameToOid )
    goto LABEL_25;
  if ( System_Collections_Concurrent_ConcurrentDictionary_object__object___TryGetValue(
         (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)s_friendlyNameToOid,
         (Il2CppObject *)friendlyName,
         &value,
         (const MethodInfo_3196868 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryGetValue__) )
  {
    return (System_String_o *)value;
  }
  if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, v14);
  result = Internal_Cryptography_OidLookup__NativeFriendlyNameToOid(friendlyName, v14, 0, v15);
  value = (Il2CppObject *)result;
  if ( result )
  {
    v17 = Internal_Cryptography_OidLookup_TypeInfo;
    if ( !Internal_Cryptography_OidLookup_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Internal_Cryptography_OidLookup_TypeInfo, *(_QWORD *)&oidGroup);
      v17 = Internal_Cryptography_OidLookup_TypeInfo;
    }
    s_friendlyNameToOid = (System_Collections_Generic_Dictionary_object__object__o *)v17->static_fields->s_lateBoundFriendlyNameToOid;
    if ( s_friendlyNameToOid )
    {
      System_Collections_Concurrent_ConcurrentDictionary_object__object___TryAdd(
        (System_Collections_Concurrent_ConcurrentDictionary_TKey__TValue__o *)s_friendlyNameToOid,
        (Il2CppObject *)friendlyName,
        value,
        (const MethodInfo_31961E4 *)Method_System_Collections_Concurrent_ConcurrentDictionary_string__string__TryAdd__);
      return (System_String_o *)value;
    }
LABEL_25:
    sub_1BCAA3C(s_friendlyNameToOid, *(_QWORD *)&oidGroup);
  }
  return result;
}


void __fastcall Internal_Cryptography_OidLookup___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B1FC7D & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Cryptography_OidLookup___c_TypeInfo, v1, v2);
    byte_4B1FC7D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(Internal_Cryptography_OidLookup___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  Internal_Cryptography_OidLookup___c_TypeInfo->static_fields->__9 = (struct Internal_Cryptography_OidLookup___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)Internal_Cryptography_OidLookup___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  if ( (byte_4B1FC7E & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__,
      kvp.fields.key,
      kvp.fields.value);
    byte_4B1FC7E = 1;
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
  if ( (byte_4B1FC7F & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__,
      kvp.fields.key,
      kvp.fields.value);
    byte_4B1FC7F = 1;
  }
  return key;
}


void __fastcall Internal_Cryptography_Pal_CertificateData___ctor(
        Internal_Cryptography_Pal_CertificateData_o *this,
        System_Byte_array *rawData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  System_Security_Cryptography_DerSequenceReader_o *v18; // x21
  System_Security_Cryptography_DerSequenceReader_o *Sequence; // x0
  __int64 v20; // x1
  System_Security_Cryptography_DerSequenceReader_o *v21; // x22
  unsigned int Integer; // w0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Security_Cryptography_CryptographicException_o *v28; // x19
  __int64 v29; // x1
  __int64 v30; // x1
  struct System_Byte_array *IntegerBytes; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Security_Cryptography_DerSequenceReader_o *v38; // x23
  struct System_String_o *OidAsString; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  __int64 v46; // x1
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  struct System_Byte_array *NextEncodedValue; // x1
  _QWORD *v54; // x24
  __int64 v55; // x8
  __int64 v56; // x0
  __int64 v57; // x0
  System_Byte_array *v58; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v62; // x24
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  System_Security_Cryptography_DerSequenceReader_o *v69; // x23
  System_Byte_array *v70; // x23
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x3
  System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *v74; // x24
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Byte_array *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Byte_array *SubjectPublicKeyInfo; // x24
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_Security_Cryptography_DerSequenceReader_o *v92; // x23
  System_Security_Cryptography_DerSequenceReader_o *v93; // x24
  struct System_String_o *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  __int64 v101; // x1
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct System_Byte_array *v108; // x1
  _QWORD *v109; // x25
  __int64 v110; // x8
  __int64 v111; // x0
  __int64 v112; // x0
  struct System_Byte_array *BitString; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  struct System_Byte_array *v126; // x1
  struct System_Byte_array **p_IssuerUniqueId; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  struct System_Byte_array *v134; // x1
  struct System_Byte_array **p_SubjectUniqueId; // x0
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  System_Collections_Generic_List_object__o *v139; // x24
  int64_t v140; // x2
  int32_t v141; // w3
  System_String_o *v142; // x4
  BattleSetupInfo_o *v143; // x5
  FollowerInfo_o *v144; // x6
  PartyListViewItem_o *v145; // x7
  System_Security_Cryptography_DerSequenceReader_o *v146; // x24
  System_Security_Cryptography_DerSequenceReader_o *v147; // x25
  System_String_o *v148; // x28
  bool v149; // w29
  System_Byte_array *OctetString; // x0
  System_Collections_Generic_List_object__o *Extensions; // x26
  System_Byte_array *v152; // x19
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x3
  System_Security_Cryptography_X509Certificates_X509Extension_o *v156; // x27
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  struct System_Object_array *items; // x8
  _QWORD *v164; // x9
  __int64 size; // x10
  Il2CppClass **v166; // x0
  __int64 v167; // x0
  __int64 v168; // x1
  __int64 v169; // x2
  __int64 v170; // x3
  __int64 v171; // x1
  System_String_o *v172; // x0
  __int64 v173; // x0
  System_Security_Cryptography_DerSequenceReader_o *v174; // x22
  struct System_String_o *v175; // x0
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  __int64 v182; // x1
  int64_t v183; // x2
  int32_t v184; // w3
  System_String_o *v185; // x4
  BattleSetupInfo_o *v186; // x5
  FollowerInfo_o *v187; // x6
  PartyListViewItem_o *v188; // x7
  struct System_Byte_array *v189; // x1
  _QWORD *v190; // x23
  __int64 v191; // x8
  __int64 v192; // x0
  __int64 v193; // x0
  struct System_Byte_array *v194; // x0
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  struct System_Byte_array *v207; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1FC80 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_byte___, rawData, method);
    sub_1BCA7E0(&System_Security_Cryptography_DerSequenceReader_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_X509Extension__Add__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_X509Extension___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_X509Extension__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo, v16, v17);
    byte_4B1FC80 = 1;
  }
  v18 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1BCAA2C(
                                                              System_Security_Cryptography_DerSequenceReader_TypeInfo,
                                                              rawData,
                                                              method,
                                                              v3);
  System_Security_Cryptography_DerSequenceReader___ctor_69093256(v18, rawData, 0LL);
  if ( !v18 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v18, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v21 = Sequence;
  v207 = rawData;
  if ( System_Security_Cryptography_DerSequenceReader__PeekTag(Sequence, 0LL) == 160 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v21, 0LL);
    if ( !Sequence )
      goto LABEL_86;
    Integer = System_Security_Cryptography_DerSequenceReader__ReadInteger(Sequence, 0LL);
    this->fields.Version = Integer;
    if ( Integer >= 3 )
    {
      v24 = sub_1BCA7F4(&System_Security_Cryptography_CryptographicException_TypeInfo, v23);
      v28 = (System_Security_Cryptography_CryptographicException_o *)sub_1BCAA2C(v24, v25, v26, v27);
      System_Security_Cryptography_CryptographicException___ctor(v28, 0LL);
      goto LABEL_69;
    }
  }
  else
  {
    if ( System_Security_Cryptography_DerSequenceReader__PeekTag(v21, 0LL) != 2 )
      goto LABEL_68;
    this->fields.Version = 0;
  }
  IntegerBytes = System_Security_Cryptography_DerSequenceReader__ReadIntegerBytes(v21, 0LL);
  this->fields.SerialNumber = IntegerBytes;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SerialNumber,
    (int64_t)IntegerBytes,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v21, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v38 = Sequence;
  OidAsString = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.TbsSignature.fields.AlgorithmId = OidAsString;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.TbsSignature,
    (int64_t)OidAsString,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v38, 0LL) )
  {
    NextEncodedValue = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v38, 0LL);
  }
  else
  {
    v54 = Method_System_Array_Empty_byte___;
    v55 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v55 )
    {
      sub_1C1C718(Method_System_Array_Empty_byte___);
      v55 = v54[7];
    }
    v56 = *(_QWORD *)(v55 + 16);
    if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
      v56 = sub_1C1C6BC();
    if ( !*(_DWORD *)(v56 + 224) )
      j_il2cpp_runtime_class_init_0(v56, v46);
    v57 = *(_QWORD *)(v54[7] + 16LL);
    if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
      v57 = sub_1C1C6BC();
    NextEncodedValue = **(struct System_Byte_array ***)(v57 + 184);
  }
  this->fields.TbsSignature.fields.Parameters = NextEncodedValue;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.TbsSignature.fields.Parameters,
    (int64_t)NextEncodedValue,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v38, 0LL) )
    goto LABEL_68;
  v58 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v21, 0LL);
  v62 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1BCAA2C(
                                                                                   System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo,
                                                                                   v59,
                                                                                   v60,
                                                                                   v61);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor_69118380(v62, v58, 0LL);
  this->fields.Issuer = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.Issuer, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v21, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v69 = Sequence;
  this->fields.NotBefore = System_Security_Cryptography_DerSequenceReader__ReadX509Date(Sequence, 0LL);
  this->fields.NotAfter = System_Security_Cryptography_DerSequenceReader__ReadX509Date(v69, 0LL);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v69, 0LL) )
  {
LABEL_68:
    v167 = sub_1BCA7F4(&System_Security_Cryptography_CryptographicException_TypeInfo, v30);
    v28 = (System_Security_Cryptography_CryptographicException_o *)sub_1BCAA2C(v167, v168, v169, v170);
    v172 = (System_String_o *)sub_1BCA7F4(&StringLiteral_2155/*"ASN1 corrupted data."*/, v171);
    System_Security_Cryptography_CryptographicException___ctor_61724516(v28, v172, 0LL);
LABEL_69:
    v173 = sub_1BCA7F4(&Method_Internal_Cryptography_Pal_CertificateData__ctor__, v29);
    sub_1BCA908(v28, v173);
  }
  v70 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v21, 0LL);
  v74 = (System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *)sub_1BCAA2C(
                                                                                   System_Security_Cryptography_X509Certificates_X500DistinguishedName_TypeInfo,
                                                                                   v71,
                                                                                   v72,
                                                                                   v73);
  System_Security_Cryptography_X509Certificates_X500DistinguishedName___ctor_69118380(v74, v70, 0LL);
  this->fields.Subject = v74;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.Subject, (int64_t)v74, v75, v76, v77, v78, v79, v80);
  v81 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v21, 0LL);
  this->fields.SubjectPublicKeyInfo = v81;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SubjectPublicKeyInfo,
    (int64_t)v81,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  SubjectPublicKeyInfo = this->fields.SubjectPublicKeyInfo;
  v92 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1BCAA2C(
                                                              System_Security_Cryptography_DerSequenceReader_TypeInfo,
                                                              v89,
                                                              v90,
                                                              v91);
  System_Security_Cryptography_DerSequenceReader___ctor_69093256(v92, SubjectPublicKeyInfo, 0LL);
  if ( !v92 )
    goto LABEL_86;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v92, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v93 = Sequence;
  v94 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.PublicKeyAlgorithm.fields.AlgorithmId = v94;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.PublicKeyAlgorithm,
    (int64_t)v94,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v93, 0LL) )
  {
    v108 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v93, 0LL);
  }
  else
  {
    v109 = Method_System_Array_Empty_byte___;
    v110 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v110 )
    {
      sub_1C1C718(Method_System_Array_Empty_byte___);
      v110 = v109[7];
    }
    v111 = *(_QWORD *)(v110 + 16);
    if ( (*(_BYTE *)(v111 + 309) & 1) == 0 )
      v111 = sub_1C1C6BC();
    if ( !*(_DWORD *)(v111 + 224) )
      j_il2cpp_runtime_class_init_0(v111, v101);
    v112 = *(_QWORD *)(v109[7] + 16LL);
    if ( (*(_BYTE *)(v112 + 309) & 1) == 0 )
      v112 = sub_1C1C6BC();
    v108 = **(struct System_Byte_array ***)(v112 + 184);
  }
  this->fields.PublicKeyAlgorithm.fields.Parameters = v108;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.PublicKeyAlgorithm.fields.Parameters,
    (int64_t)v108,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v93, 0LL) )
    goto LABEL_68;
  BitString = System_Security_Cryptography_DerSequenceReader__ReadBitString(v92, 0LL);
  this->fields.PublicKey = BitString;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.PublicKey,
    (int64_t)BitString,
    v114,
    v115,
    v116,
    v117,
    v118,
    v119);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v92, 0LL) )
    goto LABEL_68;
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v21, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v21, 0LL) == 161 )
  {
    v126 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v21, 0LL);
    this->fields.IssuerUniqueId = v126;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
  }
  else
  {
    this->fields.IssuerUniqueId = 0LL;
    p_IssuerUniqueId = &this->fields.IssuerUniqueId;
    v126 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_IssuerUniqueId, (int64_t)v126, v120, v121, v122, v123, v124, v125);
  if ( this->fields.Version >= 1
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v21, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v21, 0LL) == 162 )
  {
    v134 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v21, 0LL);
    this->fields.SubjectUniqueId = v134;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
  }
  else
  {
    this->fields.SubjectUniqueId = 0LL;
    p_SubjectUniqueId = &this->fields.SubjectUniqueId;
    v134 = 0LL;
  }
  sub_1BCA784((PartyOrganizationUtility_o *)p_SubjectUniqueId, (int64_t)v134, v128, v129, v130, v131, v132, v133);
  v139 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_X509Extension__TypeInfo,
                                                        v136,
                                                        v137,
                                                        v138);
  System_Collections_Generic_List_object____ctor(
    v139,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_X509Extension___ctor__);
  this->fields.Extensions = (struct System_Collections_Generic_List_X509Extension__o *)v139;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.Extensions, (int64_t)v139, v140, v141, v142, v143, v144, v145);
  if ( this->fields.Version >= 2
    && System_Security_Cryptography_DerSequenceReader__get_HasData(v21, 0LL)
    && System_Security_Cryptography_DerSequenceReader__PeekTag(v21, 0LL) == 163 )
  {
    Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v21, 0LL);
    if ( Sequence )
    {
      Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(Sequence, 0LL);
      if ( Sequence )
      {
        v146 = Sequence;
        while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v146, 0LL) )
        {
          Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v146, 0LL);
          if ( !Sequence )
            goto LABEL_86;
          v147 = Sequence;
          v148 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
          v149 = System_Security_Cryptography_DerSequenceReader__PeekTag(v147, 0LL) == 1
              && System_Security_Cryptography_DerSequenceReader__ReadBoolean(v147, 0LL);
          OctetString = System_Security_Cryptography_DerSequenceReader__ReadOctetString(v147, 0LL);
          Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
          v152 = OctetString;
          v156 = (System_Security_Cryptography_X509Certificates_X509Extension_o *)sub_1BCAA2C(
                                                                                    System_Security_Cryptography_X509Certificates_X509Extension_TypeInfo,
                                                                                    v153,
                                                                                    v154,
                                                                                    v155);
          System_Security_Cryptography_X509Certificates_X509Extension___ctor_69182332(v156, v148, v152, v149, 0LL);
          if ( !Extensions )
            goto LABEL_86;
          items = Extensions->fields._items;
          v164 = Method_System_Collections_Generic_List_X509Extension__Add__;
          ++Extensions->fields._version;
          if ( !items )
            goto LABEL_86;
          size = Extensions->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              Extensions,
              (Il2CppObject *)v156,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
          }
          else
          {
            v166 = &items->obj.klass + size;
            Extensions->fields._size = size + 1;
            v166[4] = (Il2CppClass *)v156;
            sub_1BCA784((PartyOrganizationUtility_o *)(v166 + 4), (int64_t)v156, v157, v158, v159, v160, v161, v162);
          }
          if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v147, 0LL) )
            goto LABEL_68;
        }
        goto LABEL_70;
      }
    }
LABEL_86:
    sub_1BCAA3C(Sequence, v20);
  }
LABEL_70:
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v21, 0LL) )
    goto LABEL_68;
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v18, 0LL);
  if ( !Sequence )
    goto LABEL_86;
  v174 = Sequence;
  v175 = System_Security_Cryptography_DerSequenceReader__ReadOidAsString(Sequence, 0LL);
  this->fields.SignatureAlgorithm.fields.AlgorithmId = v175;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SignatureAlgorithm,
    (int64_t)v175,
    v176,
    v177,
    v178,
    v179,
    v180,
    v181);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v174, 0LL) )
  {
    v189 = System_Security_Cryptography_DerSequenceReader__ReadNextEncodedValue(v174, 0LL);
  }
  else
  {
    v190 = Method_System_Array_Empty_byte___;
    v191 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v191 )
    {
      sub_1C1C718(Method_System_Array_Empty_byte___);
      v191 = v190[7];
    }
    v192 = *(_QWORD *)(v191 + 16);
    if ( (*(_BYTE *)(v192 + 309) & 1) == 0 )
      v192 = sub_1C1C6BC();
    if ( !*(_DWORD *)(v192 + 224) )
      j_il2cpp_runtime_class_init_0(v192, v182);
    v193 = *(_QWORD *)(v190[7] + 16LL);
    if ( (*(_BYTE *)(v193 + 309) & 1) == 0 )
      v193 = sub_1C1C6BC();
    v189 = **(struct System_Byte_array ***)(v193 + 184);
  }
  this->fields.SignatureAlgorithm.fields.Parameters = v189;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SignatureAlgorithm.fields.Parameters,
    (int64_t)v189,
    v183,
    v184,
    v185,
    v186,
    v187,
    v188);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v174, 0LL) )
    goto LABEL_68;
  v194 = System_Security_Cryptography_DerSequenceReader__ReadBitString(v18, 0LL);
  this->fields.SignatureValue = v194;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SignatureValue,
    (int64_t)v194,
    v195,
    v196,
    v197,
    v198,
    v199,
    v200);
  if ( System_Security_Cryptography_DerSequenceReader__get_HasData(v18, 0LL) )
    goto LABEL_68;
  this->fields.RawData = v207;
  sub_1BCA784((PartyOrganizationUtility_o *)this, (int64_t)v207, v201, v202, v203, v204, v205, v206);
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
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Security_Cryptography_CryptographicException_o *v20; // x19
  __int64 v21; // x1
  System_String_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x0

  if ( (byte_4B1FC83 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Security_Cryptography_DerSequenceReader_TypeInfo, *(_QWORD *)&matchType, otherOid);
    byte_4B1FC83 = 1;
  }
  if ( matchType )
    v7 = 0x80;
  else
    v7 = -96;
  v8 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1BCAA2C(
                                                             System_Security_Cryptography_DerSequenceReader_TypeInfo,
                                                             *(_QWORD *)&matchType,
                                                             otherOid,
                                                             method);
  System_Security_Cryptography_DerSequenceReader___ctor_69093256(v8, extensionBytes, 0LL);
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
    v16 = sub_1BCA7F4(&System_Security_Cryptography_CryptographicException_TypeInfo, v15);
    v20 = (System_Security_Cryptography_CryptographicException_o *)sub_1BCAA2C(v16, v17, v18, v19);
    v22 = (System_String_o *)sub_1BCA7F4(&StringLiteral_2155/*"ASN1 corrupted data."*/, v21);
    System_Security_Cryptography_CryptographicException___ctor_61724516(v20, v22, 0LL);
    v24 = sub_1BCA7F4(&Method_Internal_Cryptography_Pal_CertificateData_FindAltNameMatch__, v23);
    sub_1BCA908(v20, v24);
  }
  Sequence = System_Security_Cryptography_DerSequenceReader__ReadSequence(v12, 0LL);
  if ( !Sequence )
LABEL_22:
    sub_1BCAA3C(Sequence, v10);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  System_String_o **v43; // x8
  System_String_o *v44; // x22
  int32_t v45; // w1
  __int64 v46; // x8
  System_String_o *SimpleNameInfo; // x23
  System_String_o **v48; // x8
  System_String_o *v49; // x24
  System_Collections_Generic_List_object__o *Extensions; // x0
  _BOOL8 v51; // x0
  __int64 v52; // x1
  Il2CppObject *current; // x23
  Il2CppClass *klass; // x8
  System_Byte_array *monitor; // x23
  int32_t Value; // w1
  const MethodInfo *v57; // x3
  __int64 *v58; // x8
  System_String_o *v59; // x21
  __int64 v60; // x8
  System_Collections_Generic_List_object__c *v61; // x8
  System_Collections_Generic_List_object__o *v62; // x19
  __int64 v63; // x9
  int32_t *p_offset; // x10
  __int64 v65; // x0
  __int64 v66; // x1
  __int64 v67; // x19
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  System_String_o *v76; // x0
  System_String_o *v77; // x1
  int v78; // w21
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v85; // [xsp+20h] [xbp-70h] BYREF
  __int64 v86; // [xsp+48h] [xbp-48h] BYREF
  System_Nullable_Int32Enum__o v87; // 0:x0.8
  System_Nullable_Int32Enum__o v88; // 0:x0.8
  System_Nullable_Int32Enum__o v89; // 0:x0.8

  if ( (byte_4B1FC81 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__,
      *(_QWORD *)&nameType,
      forIssuer);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_X509Extension__get_Current__, v9, v10);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_X509Extension__GetEnumerator__, v23, v24);
    sub_1BCA7E0(&Method_System_Nullable_GeneralNameType___ctor__, v25, v26);
    sub_1BCA7E0(&Method_System_Nullable_GeneralNameType__get_HasValue__, v27, v28);
    sub_1BCA7E0(&Method_System_Nullable_GeneralNameType__get_Value__, v29, v30);
    sub_1BCA7E0(&StringLiteral_1434/*"2.5.29.17"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_1319/*"1.2.840.113549.1.9.1"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1381/*"1.3.6.1.4.1.311.20.2.3"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_1449/*"2.5.4.3"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_1435/*"2.5.29.18"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v41, v42);
    byte_4B1FC81 = 1;
  }
  memset(&v85, 0, sizeof(v85));
  if ( nameType )
  {
    if ( forIssuer )
      v43 = (System_String_o **)&StringLiteral_1435/*"2.5.29.18"*/;
    else
      v43 = (System_String_o **)&StringLiteral_1434/*"2.5.29.17"*/;
    v44 = *v43;
    v86 = 0LL;
    switch ( nameType )
    {
      case 1:
        goto LABEL_16;
      case 2:
        v89 = (System_Nullable_Int32Enum__o)&v86;
        System_Nullable_Int32Enum____ctor(
          v89,
          0,
          (const MethodInfo_36BEE5C *)Method_System_Nullable_GeneralNameType___ctor__);
        v49 = (System_String_o *)StringLiteral_1381/*"1.3.6.1.4.1.311.20.2.3"*/;
        break;
      case 3:
      case 4:
        v87 = (System_Nullable_Int32Enum__o)&v86;
        v45 = 2;
        goto LABEL_18;
      case 5:
        v87 = (System_Nullable_Int32Enum__o)&v86;
        v45 = 6;
        goto LABEL_18;
      default:
        goto LABEL_19;
    }
  }
  else
  {
    v46 = 72LL;
    if ( forIssuer )
      v46 = 48LL;
    SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
                       *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData
                                                                                                 + v46),
                       *(const MethodInfo **)&nameType);
    if ( SimpleNameInfo )
      return SimpleNameInfo;
    if ( forIssuer )
      v48 = (System_String_o **)&StringLiteral_1435/*"2.5.29.18"*/;
    else
      v48 = (System_String_o **)&StringLiteral_1434/*"2.5.29.17"*/;
    v44 = *v48;
    v86 = 0LL;
LABEL_16:
    v87 = (System_Nullable_Int32Enum__o)&v86;
    v45 = 1;
LABEL_18:
    System_Nullable_Int32Enum____ctor(
      v87,
      v45,
      (const MethodInfo_36BEE5C *)Method_System_Nullable_GeneralNameType___ctor__);
LABEL_19:
    v49 = 0LL;
  }
  if ( (_BYTE)v86 )
  {
    Extensions = (System_Collections_Generic_List_object__o *)this->fields.Extensions;
    if ( !Extensions )
      goto LABEL_73;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v84,
      Extensions,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_X509Extension__GetEnumerator__);
    v85 = v84;
    while ( 1 )
    {
      v51 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v85,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_X509Extension__MoveNext__);
      if ( !v51 )
        break;
      current = v85.fields._current;
      if ( !v85.fields._current )
        sub_1BCAA3C(v51, v52);
      klass = v85.fields._current[1].klass;
      if ( !klass )
        sub_1BCAA3C(v51, v52);
      if ( System_String__op_Equality((System_String_o *)klass->_1.name, v44, 0LL) )
      {
        monitor = (System_Byte_array *)current[1].monitor;
        v88 = (System_Nullable_Int32Enum__o)&v86;
        Value = System_Nullable_Int32Enum___get_Value(
                  v88,
                  (const MethodInfo_36BEE74 *)Method_System_Nullable_GeneralNameType__get_Value__);
        SimpleNameInfo = Internal_Cryptography_Pal_CertificateData__FindAltNameMatch(monitor, Value, v49, v57);
        if ( SimpleNameInfo )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v85,
            (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
          return SimpleNameInfo;
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v85,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_X509Extension__Dispose__);
  }
  if ( nameType == 1 )
  {
    v58 = &StringLiteral_1319/*"1.2.840.113549.1.9.1"*/;
  }
  else
  {
    if ( nameType != 3 )
      return (System_String_o *)StringLiteral_1/*""*/;
    v58 = &StringLiteral_1449/*"2.5.4.3"*/;
  }
  v59 = (System_String_o *)*v58;
  if ( !*v58 )
    return (System_String_o *)StringLiteral_1/*""*/;
  v60 = 72LL;
  if ( forIssuer )
    v60 = 48LL;
  Extensions = (System_Collections_Generic_List_object__o *)Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
                                                              *(System_Security_Cryptography_X509Certificates_X500DistinguishedName_o **)((char *)&this->fields.RawData + v60),
                                                              *(const MethodInfo **)&nameType);
  if ( !Extensions )
LABEL_73:
    sub_1BCAA3C(Extensions, *(_QWORD *)&nameType);
  v61 = Extensions->klass;
  v62 = Extensions;
  v63 = *(unsigned __int16 *)(&Extensions->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Extensions->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v61->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v63;
      p_offset += 4;
      if ( !v63 )
        goto LABEL_42;
    }
    v65 = (__int64)(&v61->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_42:
    v65 = sub_1C1C7C0(Extensions, System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, 0LL);
  }
  v67 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD))v65)(v62, *(_QWORD *)(v65 + 8));
  if ( !v67 )
    sub_1BCAA3C(0LL, v66);
  while ( 1 )
  {
    v68 = *(_QWORD *)v67;
    v69 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v70 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v69;
        v70 += 4;
        if ( !v69 )
          goto LABEL_50;
      }
      v71 = v68 + 16LL * *v70 + 312;
    }
    else
    {
LABEL_50:
      v71 = sub_1C1C7C0(v67, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8)) & 1) == 0 )
      break;
    v72 = *(_QWORD *)v67;
    v73 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
    {
      v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v74 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v73;
        v74 += 4;
        if ( !v73 )
          goto LABEL_57;
      }
      v75 = v72 + 16LL * *v74 + 312;
    }
    else
    {
LABEL_57:
      v75 = sub_1C1C7C0(v67, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0LL);
    }
    v76 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v67, *(_QWORD *)(v75 + 8));
    SimpleNameInfo = v77;
    if ( System_String__op_Equality(v76, v59, 0LL) )
    {
      v78 = 16;
      goto LABEL_62;
    }
  }
  SimpleNameInfo = 0LL;
  v78 = 20;
LABEL_62:
  v79 = *(_QWORD *)v67;
  v80 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
  {
    v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
    {
      --v80;
      v81 += 4;
      if ( !v80 )
        goto LABEL_66;
    }
    v82 = v79 + 16LL * *v81 + 312;
  }
  else
  {
LABEL_66:
    v82 = sub_1C1C7C0(v67, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v82)(v67, *(_QWORD *)(v82 + 8));
  if ( v78 == 20 )
    return (System_String_o *)StringLiteral_1/*""*/;
  return SimpleNameInfo;
}


System_String_o *__fastcall Internal_Cryptography_Pal_CertificateData__GetSimpleNameInfo(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *ReverseRdns; // x0
  __int64 v23; // x1
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c *klass; // x8
  System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *v25; // x19
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x19
  System_String_o *v32; // x23
  System_String_o *v33; // x24
  System_String_o *v34; // x25
  System_String_o *v35; // x20
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  System_String_o *v44; // x0
  System_String_o *v45; // x1
  System_String_o *v46; // x21
  System_String_o *v47; // x8
  int v48; // w22
  __int64 v49; // x8
  __int64 v50; // x9
  int *v51; // x10
  __int64 v52; // x0
  System_String_o *v54; // [xsp+8h] [xbp-68h]

  if ( (byte_4B1FC82 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, v6, v7);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v12, v13);
    sub_1BCA7E0(&StringLiteral_1319/*"1.2.840.113549.1.9.1"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1449/*"2.5.4.3"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1442/*"2.5.4.11"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1441/*"2.5.4.10"*/, v20, v21);
    byte_4B1FC82 = 1;
  }
  ReverseRdns = Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(name, method);
  if ( !ReverseRdns )
    sub_1BCAA3C(0LL, v23);
  klass = ReverseRdns->klass;
  v25 = ReverseRdns;
  v26 = *(unsigned __int16 *)(&ReverseRdns->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&ReverseRdns->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_string__string___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo )
    {
      --v26;
      p_offset += 4;
      if ( !v26 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1C1C7C0(
                 ReverseRdns,
                 System_Collections_Generic_IEnumerable_KeyValuePair_string__string___TypeInfo,
                 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *, _QWORD))p_method)(
          v25,
          *(_QWORD *)(p_method + 8));
  v31 = v29;
  v54 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
LABEL_11:
  v35 = v32;
LABEL_12:
  v32 = v35;
  v35 = v33;
LABEL_13:
  v33 = v35;
  v35 = v34;
  while ( 1 )
  {
    if ( !v31 )
      sub_1BCAA3C(v29, v30);
    v36 = *(_QWORD *)v31;
    v34 = v35;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_19;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_19:
      v39 = sub_1C1C7C0(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8)) & 1) == 0 )
    {
      v35 = 0LL;
      v48 = 10;
      goto LABEL_37;
    }
    v40 = *(_QWORD *)v31;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_string__string___c **)v42 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo )
      {
        --v41;
        v42 += 4;
        if ( !v41 )
          goto LABEL_26;
      }
      v43 = v40 + 16LL * *v42 + 312;
    }
    else
    {
LABEL_26:
      v43 = sub_1C1C7C0(v31, System_Collections_Generic_IEnumerator_KeyValuePair_string__string___TypeInfo, 0LL);
    }
    v44 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v31, *(_QWORD *)(v43 + 8));
    v35 = v45;
    v46 = v44;
    if ( System_String__op_Equality(v44, (System_String_o *)StringLiteral_1449/*"2.5.4.3"*/, 0LL) )
      break;
    v29 = System_String__op_Equality(v46, (System_String_o *)StringLiteral_1442/*"2.5.4.11"*/, 0LL);
    if ( (v29 & 1) == 0 )
    {
      v29 = System_String__op_Equality(v46, (System_String_o *)StringLiteral_1441/*"2.5.4.10"*/, 0LL);
      if ( (v29 & 1) != 0 )
        goto LABEL_13;
      v29 = System_String__op_Equality(v46, (System_String_o *)StringLiteral_1319/*"1.2.840.113549.1.9.1"*/, 0LL);
      if ( (v29 & 1) == 0 )
      {
        v47 = v54;
        if ( !v54 )
          v47 = v35;
        v54 = v47;
        goto LABEL_11;
      }
      goto LABEL_12;
    }
  }
  v48 = 9;
LABEL_37:
  v49 = *(_QWORD *)v31;
  v50 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v51 = (int *)(*(_QWORD *)(v49 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
    {
      --v50;
      v51 += 4;
      if ( !v50 )
        goto LABEL_41;
    }
    v52 = v49 + 16LL * *v51 + 312;
  }
  else
  {
LABEL_41:
    v52 = sub_1C1C7C0(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v52)(v31, *(_QWORD *)(v52 + 8));
  if ( v48 == 10 )
  {
    v35 = v34;
    if ( !v34 )
    {
      v35 = v33;
      if ( !v33 )
      {
        if ( v32 )
          return v32;
        else
          return v54;
      }
    }
  }
  return v35;
}


System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns(
        System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1FC84 & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo, method, v2);
    byte_4B1FC84 = 1;
  }
  v5 = sub_1BCAA2C(Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo, method, v2, v3);
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21___ctor(
    (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1BCAA3C(v6, v7);
  *(_QWORD *)(v5 + 56) = name;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 56), (int64_t)name, v8, v9, v10, v11, v12, v13);
  return (System_Collections_Generic_IEnumerable_KeyValuePair_string__string___o *)v5;
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
  __int64 v3; // x3
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t _1__state; // w8
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *name; // x8
  System_Byte_array *raw; // x21
  System_Security_Cryptography_DerSequenceReader_o *v20; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_Stack_T__o *v24; // x22
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_Stack_T__o *rdnReaders_5__2; // x22
  Il2CppObject *v32; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o **p_rdnReader_5__3; // x20
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v46; // x22
  Il2CppObject *OidAsString; // x21
  const MethodInfo_34D9170 *v48; // x4
  unsigned int v49; // w8
  Il2CppObject *v50; // x2
  System_String_o *Utf8String; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  bool result; // w0
  struct System_Collections_Generic_KeyValuePair_string__string__o v59; // [xsp+0h] [xbp-40h] BYREF
  System_Collections_Generic_KeyValuePair_object__object__o v60; // 0:x0.16

  v4 = this;
  if ( (byte_4B21B01 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Security_Cryptography_DerSequenceReader_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_DerSequenceReader__Push__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Stack_DerSequenceReader__get_Count__, v13, v14);
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1BCA7E0(
                                                                                   &System_Collections_Generic_Stack_DerSequenceReader__TypeInfo,
                                                                                   v15,
                                                                                   v16);
    byte_4B21B01 = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
LABEL_13:
    p_rdnReader_5__3 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o **)&v4->fields._rdnReader_5__3;
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
        sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._rdnReader_5__3, 0LL, v40, v41, v42, v43, v44, v45);
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
      v46 = this;
      OidAsString = (Il2CppObject *)System_Security_Cryptography_DerSequenceReader__ReadOidAsString(
                                      (System_Security_Cryptography_DerSequenceReader_o *)this,
                                      0LL);
      v49 = System_Security_Cryptography_DerSequenceReader__PeekTag(
              (System_Security_Cryptography_DerSequenceReader_o *)v46,
              0LL);
      v50 = 0LL;
      if ( v49 <= 0x13 )
      {
        if ( v49 == 12 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadUtf8String(
                         (System_Security_Cryptography_DerSequenceReader_o *)v46,
                         0LL);
          goto LABEL_29;
        }
        if ( v49 == 19 )
        {
          Utf8String = System_Security_Cryptography_DerSequenceReader__ReadPrintableString(
                         (System_Security_Cryptography_DerSequenceReader_o *)v46,
                         0LL);
          goto LABEL_29;
        }
      }
      else
      {
        switch ( v49 )
        {
          case 0x14u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadT61String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v46,
                           0LL);
            goto LABEL_29;
          case 0x16u:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadIA5String(
                           (System_Security_Cryptography_DerSequenceReader_o *)v46,
                           0LL);
            goto LABEL_29;
          case 0x1Eu:
            Utf8String = System_Security_Cryptography_DerSequenceReader__ReadBMPString(
                           (System_Security_Cryptography_DerSequenceReader_o *)v46,
                           0LL);
LABEL_29:
            v50 = (Il2CppObject *)Utf8String;
            break;
        }
      }
      if ( v50 )
      {
        v60.fields.key = (Il2CppObject *)&v59;
        v60.fields.value = OidAsString;
        v59 = (struct System_Collections_Generic_KeyValuePair_string__string__o)0LL;
        System_Collections_Generic_KeyValuePair_object__object____ctor(
          v60,
          v50,
          (Il2CppObject *)Method_System_Collections_Generic_KeyValuePair_string__string___ctor__,
          v48);
        v4->fields.__2__current = v59;
        sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields.__2__current, 0LL, v52, v53, v54, v55, v56, v57);
        result = 1;
        v4->fields.__1__state = 1;
        return result;
      }
    }
  }
  if ( !_1__state )
  {
    name = v4->fields.name;
    v4->fields.__1__state = -1;
    if ( !name )
      goto LABEL_37;
    raw = name->fields._raw;
    v20 = (System_Security_Cryptography_DerSequenceReader_o *)sub_1BCAA2C(
                                                                System_Security_Cryptography_DerSequenceReader_TypeInfo,
                                                                method,
                                                                v2,
                                                                v3);
    System_Security_Cryptography_DerSequenceReader___ctor_69093256(v20, raw, 0LL);
    v24 = (System_Collections_Generic_Stack_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_Stack_DerSequenceReader__TypeInfo,
                                                     v21,
                                                     v22,
                                                     v23);
    System_Collections_Generic_Stack_object____ctor(
      v24,
      (const MethodInfo_37F770C *)Method_System_Collections_Generic_Stack_DerSequenceReader___ctor__);
    v4->fields._rdnReaders_5__2 = (struct System_Collections_Generic_Stack_DerSequenceReader__o *)v24;
    sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._rdnReaders_5__2, (int64_t)v24, v25, v26, v27, v28, v29, v30);
    if ( !v20 )
      goto LABEL_37;
    if ( !System_Security_Cryptography_DerSequenceReader__get_HasData(v20, 0LL) )
      goto LABEL_33;
    do
    {
      rdnReaders_5__2 = (System_Collections_Generic_Stack_T__o *)v4->fields._rdnReaders_5__2;
      this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)System_Security_Cryptography_DerSequenceReader__ReadSet(
                                                                                     v20,
                                                                                     0LL);
      if ( !rdnReaders_5__2 )
        goto LABEL_37;
      System_Collections_Generic_Stack_object___Push(
        rdnReaders_5__2,
        (Il2CppObject *)this,
        (const MethodInfo_37F7D34 *)Method_System_Collections_Generic_Stack_DerSequenceReader__Push__);
    }
    while ( System_Security_Cryptography_DerSequenceReader__get_HasData(v20, 0LL) );
LABEL_33:
    this = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)v4->fields._rdnReaders_5__2;
    if ( !this )
LABEL_37:
      sub_1BCAA3C(this, method);
    if ( SLODWORD(this->fields.__2__current.fields.key) > 0 )
    {
      v32 = System_Collections_Generic_Stack_object___Pop(
              (System_Collections_Generic_Stack_T__o *)this,
              (const MethodInfo_37F7CD4 *)Method_System_Collections_Generic_Stack_DerSequenceReader__Pop__);
      v4->fields._rdnReader_5__3 = (struct System_Security_Cryptography_DerSequenceReader_o *)v32;
      sub_1BCA784((PartyOrganizationUtility_o *)&v4->fields._rdnReader_5__3, (int64_t)v32, v33, v34, v35, v36, v37, v38);
      goto LABEL_13;
    }
  }
  return 0;
}


System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *v10; // x20
  struct System_Security_Cryptography_X509Certificates_X500DistinguishedName_o *_3__name; // x1

  if ( (byte_4B21B03 & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo, method, v2);
    byte_4B21B03 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *)sub_1BCAA2C(
                                                                                  Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_TypeInfo,
                                                                                  method,
                                                                                  v2,
                                                                                  v3);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
  }
  _3__name = this->fields.__3__name;
  v10->fields.name = _3__name;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields.name, (int64_t)_3__name, v2, v3, v6, v7, v8, v9);
  return (System_Collections_Generic_IEnumerator_KeyValuePair_string__string___o *)v10;
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21__System_Collections_IEnumerator_get_Current(
        Internal_Cryptography_Pal_CertificateData__ReadReverseRdns_d__21_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_KeyValuePair_string__string__o _2__current; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4B21B02 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Generic_KeyValuePair_string__string__TypeInfo, method, v2);
    byte_4B21B02 = 1;
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
  __int64 v3; // x3
  System_Reflection_MissingMetadataException_o *v4; // x19

  if ( (byte_4B1E120 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Reflection_MissingMetadataException_TypeInfo, attributeType, method);
    byte_4B1E120 = 1;
  }
  v4 = (System_Reflection_MissingMetadataException_o *)sub_1BCAA2C(
                                                         System_Reflection_MissingMetadataException_TypeInfo,
                                                         attributeType,
                                                         method,
                                                         v3);
  System_Reflection_MissingMetadataException___ctor(v4, 0LL);
  return (System_Exception_o *)v4;
}


void __fastcall Internal_Runtime_Augments_RuntimeAugments___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *v6; // x19
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B1E11F & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo, v1, v2);
    sub_1BCA7E0(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo, v4, v5);
    byte_4B1E11F = 1;
  }
  v6 = (Il2CppObject *)sub_1BCAA2C(Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_TypeInfo, v1, v2, v3);
  System_Object___ctor(v6, 0LL);
  Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields->s_reflectionExecutionDomainCallbacks = (struct Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *)v6;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)Internal_Runtime_Augments_RuntimeAugments_TypeInfo->static_fields,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
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
  sub_1BCAA3C(0LL, v3);
}


Internal_Runtime_Augments_ReflectionExecutionDomainCallbacks_o *__fastcall Internal_Runtime_Augments_RuntimeAugments__get_Callbacks(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Internal_Runtime_Augments_RuntimeAugments_c *v3; // x0

  if ( (byte_4B1E11E & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Runtime_Augments_RuntimeAugments_TypeInfo, v1, v2);
    byte_4B1E11E = 1;
  }
  v3 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  if ( !Internal_Runtime_Augments_RuntimeAugments_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Internal_Runtime_Augments_RuntimeAugments_TypeInfo, v1);
    v3 = Internal_Runtime_Augments_RuntimeAugments_TypeInfo;
  }
  return v3->static_fields->s_reflectionExecutionDomainCallbacks;
}


void __fastcall Internal_Runtime_Augments_RuntimeThread___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1E122 & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Runtime_Augments_RuntimeThread_TypeInfo, v1, v2);
    byte_4B1E122 = 1;
  }
  Internal_Runtime_Augments_RuntimeThread_TypeInfo->static_fields->OptimalMaxSpinWaitsPerSpinIteration = 64;
}


void __fastcall Internal_Runtime_Augments_RuntimeThread___ctor(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        System_Threading_Thread_o *t,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.thread = t;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)t, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
Internal_Runtime_Augments_RuntimeThread_o *__fastcall Internal_Runtime_Augments_RuntimeThread__Create(
        System_Threading_ParameterizedThreadStart_o *start,
        int32_t maxStackSize,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  System_Threading_Thread_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B1E121 & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Runtime_Augments_RuntimeThread_TypeInfo, *(_QWORD *)&maxStackSize, method);
    sub_1BCA7E0(&System_Threading_Thread_TypeInfo, v6, v7);
    byte_4B1E121 = 1;
  }
  v8 = (System_Threading_Thread_o *)sub_1BCAA2C(System_Threading_Thread_TypeInfo, *(_QWORD *)&maxStackSize, method, v3);
  System_Threading_Thread___ctor_63663596(v8, start, maxStackSize, 0LL);
  v12 = sub_1BCAA2C(Internal_Runtime_Augments_RuntimeThread_TypeInfo, v9, v10, v11);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_QWORD *)(v12 + 16) = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)v8, v13, v14, v15, v16, v17, v18);
  return (Internal_Runtime_Augments_RuntimeThread_o *)v12;
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
    sub_1BCAA3C(0LL, state);
  System_Threading_Thread__Start_63664052(thread, state, 0LL);
}


bool __fastcall Internal_Runtime_Augments_RuntimeThread__Yield(const MethodInfo *method)
{
  return System_Threading_Thread__Yield(0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Internal_Runtime_Augments_RuntimeThread__set_IsBackground(
        Internal_Runtime_Augments_RuntimeThread_o *this,
        bool value,
        const MethodInfo *method)
{
  System_Threading_Thread_o *thread; // x0

  thread = this->fields.thread;
  if ( !thread )
    sub_1BCAA3C(0LL, value);
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

  if ( (byte_4B1E11D & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID, *(_QWORD *)&TaskID);
    byte_4B1E11D = 1;
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

  if ( (byte_4B1E11A & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID, *(_QWORD *)&TaskID);
    byte_4B1E11A = 1;
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

  if ( (byte_4B1E11B & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID, *(_QWORD *)&TaskID);
    byte_4B1E11B = 1;
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

  if ( (byte_4B1E11C & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, *(_QWORD *)&OriginatingTaskID, *(_QWORD *)&TaskID);
    byte_4B1E11C = 1;
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
  __int64 v2; // x2
  struct Internal_Runtime_Augments_TaskTraceCallbacks_o *s_callbacks; // x0

  if ( (byte_4B1E119 & 1) == 0 )
  {
    sub_1BCA7E0(&Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo, v1, v2);
    byte_4B1E119 = 1;
  }
  s_callbacks = Internal_Threading_Tasks_Tracing_TaskTrace_TypeInfo->static_fields->s_callbacks;
  if ( s_callbacks )
    LOBYTE(s_callbacks) = ((__int64 (__fastcall *)(struct Internal_Runtime_Augments_TaskTraceCallbacks_o *, const char *))s_callbacks->klass[1]._1.gc_desc)(
                            s_callbacks,
                            s_callbacks->klass[1]._1.name);
  return (char)s_callbacks;
}