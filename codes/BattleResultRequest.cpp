void __fastcall BattleResultRequest__beginRequest(
        BattleResultRequest_o *this,
        int64_t battleId,
        int32_t battleResult,
        int32_t winResult,
        System_String_o *scores,
        System_String_o *action,
        System_Int32_array_array *voicePlayedArray,
        System_Int32_array *aliveUniqueIds,
        BattleResultRequest_RaidResult_array *raidResult,
        BattleResultRequest_SuperBossResult_array *superBossResult,
        int32_t elapsedTurn,
        System_Int32_array *usedTurnArray,
        int32_t recordType,
        System_Collections_Generic_Dictionary_string__object__o *recordJson,
        System_Collections_Generic_List_Dictionary_string__object___o *firstNpPlayList,
        PlayerServantNoblePhantasmUsageData_o *playerServantNoblePhantasmUsageData,
        System_Collections_Generic_Dictionary_int__int__o *usedEquipSkillDict,
        System_Collections_Generic_Dictionary_int__int__o *svtCommonFlagDict,
        System_Int32_array *skillShiftUniqueIdArray,
        System_Int64_array *skillShiftNpcSvtIdArray,
        System_Int32_array *calledEnemyUniqueIdArray,
        System_Int32_array *routeSelectIdArray,
        System_Int32_array *dataLostUniqueIdArray,
        BattleWaveInfoData_array *waveInfos,
        int32_t waveNum,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_object__object__o *v74; // x21
  __int64 v75; // x2
  __int64 v76; // x3
  __int64 v77; // x4
  System_String_o *v78; // x0
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x0
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  Il2CppObject *v88; // x0
  Il2CppObject *v89; // x0
  __int64 v90; // x2
  __int64 v91; // x3
  __int64 v92; // x4
  Il2CppObject *v93; // x0
  __int64 v94; // x2
  __int64 v95; // x3
  __int64 v96; // x4
  Il2CppObject *v97; // x0
  System_Object_array *v98; // x0
  Il2CppObject *v99; // x0
  Il2CppObject *v100; // x0
  signed int max_length; // w8
  int v102; // w9
  __int64 v103; // x22
  BattleResultRequest_RaidResult_o *v104; // x10
  signed int v105; // w8
  int v106; // w9
  __int64 v107; // x20
  BattleResultRequest_SuperBossResult_o *v108; // x10
  __int64 v109; // x8
  __int64 v110; // x23
  __int64 v111; // x9
  int32_t *v112; // x10
  __int64 v113; // t1
  NetworkManager_c *v114; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_62128656; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v116; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x0
  __int64 v118; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v120; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v123; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v125; // x0
  System_Byte_array *v126; // x19
  __int64 v127; // x2
  __int64 v128; // x3
  __int64 v129; // x4
  Il2CppObject *v130; // x0
  System_Int32_array_array *v131; // x10
  __int64 v132; // x8
  System_String_o *v133; // x22
  unsigned __int64 v134; // x25
  System_Int32_array *v135; // x29
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  System_String_o *v138; // x19
  int32_t v139; // w1
  int32_t v140; // w2
  const MethodInfo *v141; // x3
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  int32_t v144; // w1
  int32_t v145; // w2
  const MethodInfo *v146; // x3
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  int32_t v149; // w1
  CGThumbnailListItem_o *p_fields; // x0
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  int32_t v155; // w1
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  int32_t v160; // w1
  int32_t v161; // w2
  const MethodInfo *v162; // x3
  Il2CppObject *v163; // x0
  Il2CppObject *v164; // x0
  __int64 v165; // x2
  __int64 v166; // x3
  __int64 v167; // x4
  Il2CppObject *v168; // x0
  MiniMessagePack_MiniMessagePacker_o *v169; // x19
  System_Byte_array *v170; // x19
  System_Byte_array *v171; // x19
  System_String_o *v172; // x0
  const MethodInfo *v173; // x3
  const MethodInfo *v174; // x1
  int64_t v176; // [xsp+10h] [xbp-C0h]
  int32_t v182; // [xsp+58h] [xbp-78h] BYREF
  int32_t v183; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v184; // [xsp+60h] [xbp-70h] BYREF
  int32_t v185; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v186; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_49BC768 & 1) == 0 )
  {
    sub_1B4CF90(&CatAndMouseGame_TypeInfo, battleId);
    sub_1B4CF90(&System_Convert_TypeInfo, v28);
    sub_1B4CF90(&Crc32_TypeInfo, v29);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v30);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v31);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v32);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Concat_byte___, v33);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_byte___, v34);
    sub_1B4CF90(&int_TypeInfo, v35);
    sub_1B4CF90(&long_TypeInfo, v36);
    sub_1B4CF90(&JsonManager_TypeInfo, v37);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v38);
    sub_1B4CF90(&MiniMessagePack_MiniMessagePacker_TypeInfo, v39);
    sub_1B4CF90(&NetworkManager_TypeInfo, v40);
    sub_1B4CF90(&string___TypeInfo, v41);
    sub_1B4CF90(&uint_TypeInfo, v42);
    sub_1B4CF90(&StringLiteral_22699/*"routeSelect"*/, v43);
    sub_1B4CF90(&StringLiteral_22627/*"result"*/, v44);
    sub_1B4CF90(&StringLiteral_22539/*"recordValueJson"*/, v45);
    sub_1B4CF90(&StringLiteral_17397/*"calledEnemyUniqueIds"*/, v46);
    sub_1B4CF90(&StringLiteral_23074/*"skillShiftNpcSvtIds"*/, v47);
    sub_1B4CF90(&StringLiteral_22486/*"raidResult"*/, v48);
    sub_1B4CF90(&StringLiteral_24075/*"useTreasureDevices"*/, v49);
    sub_1B4CF90(&StringLiteral_22538/*"recordType"*/, v50);
    sub_1B4CF90(&StringLiteral_866/*",["*/, v51);
    sub_1B4CF90(&StringLiteral_23075/*"skillShiftUniqueIds"*/, v52);
    sub_1B4CF90(&StringLiteral_18161/*"dataLostUniqueIds"*/, v53);
    sub_1B4CF90(&StringLiteral_24079/*"usedEquipSkillList"*/, v54);
    sub_1B4CF90(&StringLiteral_18626/*"elapsedTurn"*/, v55);
    sub_1B4CF90(&StringLiteral_22519/*"reachedWave"*/, v56);
    sub_1B4CF90(&StringLiteral_24080/*"usedTurnList"*/, v57);
    sub_1B4CF90(&StringLiteral_23420/*"svtCommonFlagList"*/, v58);
    sub_1B4CF90(&StringLiteral_22768/*"scores"*/, v59);
    sub_1B4CF90(&StringLiteral_24378/*"waveInfo"*/, v60);
    sub_1B4CF90(&StringLiteral_16806/*"battleStatus"*/, v61);
    sub_1B4CF90(&StringLiteral_816/*","*/, v62);
    sub_1B4CF90(&StringLiteral_23585/*"tdPlayed"*/, v63);
    sub_1B4CF90(&StringLiteral_24303/*"voicePlayedList"*/, v64);
    sub_1B4CF90(&StringLiteral_15507/*"["*/, v65);
    sub_1B4CF90(&StringLiteral_24415/*"winResult"*/, v66);
    sub_1B4CF90(&StringLiteral_1/*""*/, v67);
    sub_1B4CF90(&StringLiteral_23403/*"superBossResult"*/, v68);
    sub_1B4CF90(&StringLiteral_15763/*"]"*/, v69);
    sub_1B4CF90(&StringLiteral_16795/*"battleId"*/, v70);
    sub_1B4CF90(&StringLiteral_16798/*"battleResult"*/, v71);
    sub_1B4CF90(&StringLiteral_16340/*"action"*/, v72);
    sub_1B4CF90(&StringLiteral_16425/*"aliveUniqueIds"*/, v73);
    byte_49BC768 = 1;
  }
  v74 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v74,
    (const MethodInfo_3257168 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v176 = battleId;
  v186 = battleId;
  v78 = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &v186, v75, v76, v77);
  if ( !v74 )
    goto LABEL_80;
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_16795/*"battleId"*/,
    (Il2CppObject *)v78,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v185 = battleResult;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v185, v80, v81, v82);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_16798/*"battleResult"*/,
    v83,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v184 = winResult;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v184, v84, v85, v86);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24415/*"winResult"*/,
    v87,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_22768/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_16340/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v88 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_22486/*"raidResult"*/,
    v88,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v89 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23403/*"superBossResult"*/,
    v89,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v183 = elapsedTurn;
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v183, v90, v91, v92);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_18626/*"elapsedTurn"*/,
    v93,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v182 = recordType;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v182, v94, v95, v96);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_22538/*"recordType"*/,
    v97,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_22539/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_80;
  v98 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v99 = (Il2CppObject *)JsonManager__toJson(&v98->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23585/*"tdPlayed"*/,
    v99,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_80;
  v100 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
                           playerServantNoblePhantasmUsageData,
                           0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24075/*"useTreasureDevices"*/,
    v100,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24079/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23420/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23075/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23074/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_17397/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_22699/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_18161/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_80;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v103 = 0LL;
    if ( !superBossResult )
      goto LABEL_80;
  }
  else
  {
    v102 = 0;
    v103 = 0LL;
    do
    {
      if ( max_length == v102 )
        goto LABEL_79;
      v104 = raidResult->m_Items[v102];
      if ( !v104 )
        goto LABEL_80;
      ++v102;
      v103 += v104->fields.addDamage + (__int64)v104->fields.day + v104->fields.uniqueId;
    }
    while ( max_length != v102 );
    if ( !superBossResult )
LABEL_80:
      sub_1B4D1EC(v78, v79);
  }
  v105 = superBossResult->max_length;
  if ( v105 >= 1 )
  {
    v106 = 0;
    v107 = 0LL;
    while ( v105 != v106 )
    {
      v108 = superBossResult->m_Items[v106];
      if ( !v108 )
        goto LABEL_80;
      ++v106;
      v107 += v108->fields.addDamage + (__int64)v108->fields.superBossId + v108->fields.uniqueId;
      if ( v105 == v106 )
        goto LABEL_24;
    }
LABEL_79:
    sub_1B4D1F4(v78, v79);
  }
  v107 = 0LL;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_16425/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_80;
  v109 = aliveUniqueIds->max_length;
  if ( v109 << 32 >= 1 )
  {
    v110 = 0LL;
    v111 = (int)v109;
    v112 = &aliveUniqueIds->m_Items[1];
    while ( v109 )
    {
      v113 = *v112++;
      --v111;
      --v109;
      v110 += v113;
      if ( !v111 )
        goto LABEL_31;
    }
    goto LABEL_79;
  }
  v110 = 0LL;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, v79);
    byte_49B57A5 = 1;
  }
  v114 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v114 = NetworkManager_TypeInfo;
  }
  Bytes_62128656 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(
                                                                          v114->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0LL);
  v116 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(
                                                                v103 - 4231125,
                                                                0LL);
  v117 = System_Linq_Enumerable__Concat_byte_(
           Bytes_62128656,
           v116,
           (const MethodInfo_2F1BA0C *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v110 >= 0 )
    v118 = v110;
  else
    v118 = v110 + 1;
  v119 = v117;
  v120 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(v118 >> 1, 0LL);
  v121 = System_Linq_Enumerable__Concat_byte_(
           v119,
           v120,
           (const MethodInfo_2F1BA0C *)Method_System_Linq_Enumerable_Concat_byte___);
  v122 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(
                                                                v176 - 0x7FFFFFFF,
                                                                0LL);
  v123 = System_Linq_Enumerable__Concat_byte_(
           v121,
           v122,
           (const MethodInfo_2F1BA0C *)Method_System_Linq_Enumerable_Concat_byte___);
  v124 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(
                                                                v107 - 2469110,
                                                                0LL);
  v125 = System_Linq_Enumerable__Concat_byte_(
           v123,
           v124,
           (const MethodInfo_2F1BA0C *)Method_System_Linq_Enumerable_Concat_byte___);
  v126 = System_Linq_Enumerable__ToArray_byte_(
           v125,
           (const MethodInfo_2F3C13C *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v186) = Crc32__Compute(v126, 0LL);
  v130 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v186, v127, v128, v129);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_16806/*"battleStatus"*/,
    v130,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v131 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v132 = *(_QWORD *)&voicePlayedArray->max_length;
    v133 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v132 >= 1 )
    {
      v134 = 0LL;
      while ( v134 < (unsigned int)v132 )
      {
        v135 = voicePlayedArray->m_Items[v134];
        if ( v135 && v135->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty(v133, 0LL) )
          {
            v78 = (System_String_o *)sub_1B4D038(string___TypeInfo, 5LL);
            if ( !v78 )
              goto LABEL_80;
            v138 = v78;
            if ( !LODWORD(v78[1].klass) )
              goto LABEL_79;
            v139 = StringLiteral_15507/*"["*/;
            v78[1].monitor = (void *)StringLiteral_15507/*"["*/;
            sub_1B4CF34((CGThumbnailListItem_o *)&v78[1].monitor, v139, v136, v137);
            if ( !v135->max_length )
              goto LABEL_79;
            v78 = System_Int32__ToString((int)v135 + 32, 0LL);
            if ( LODWORD(v138[1].klass) <= 1 )
              goto LABEL_79;
            v138[1].fields = (System_String_Fields)v78;
            sub_1B4CF34((CGThumbnailListItem_o *)&v138[1].fields, (int32_t)v78, v140, v141);
            if ( LODWORD(v138[1].klass) <= 2 )
              goto LABEL_79;
            v144 = (int)StringLiteral_816/*","*/;
            v138[2].klass = (System_String_c *)StringLiteral_816/*","*/;
            sub_1B4CF34((CGThumbnailListItem_o *)&v138[2], v144, v142, v143);
            if ( v135->max_length <= 1 )
              goto LABEL_79;
            v78 = System_Int32__ToString((int)v135 + 36, 0LL);
            if ( LODWORD(v138[1].klass) <= 3 )
              goto LABEL_79;
            v138[2].monitor = v78;
            sub_1B4CF34((CGThumbnailListItem_o *)&v138[2].monitor, (int32_t)v78, v145, v146);
            if ( LODWORD(v138[1].klass) <= 4 )
              goto LABEL_79;
            v149 = StringLiteral_15763/*"]"*/;
            v138[2].fields = (System_String_Fields)StringLiteral_15763/*"]"*/;
            p_fields = (CGThumbnailListItem_o *)&v138[2].fields;
          }
          else
          {
            v78 = (System_String_o *)sub_1B4D038(string___TypeInfo, 6LL);
            if ( !v78 )
              goto LABEL_80;
            v138 = v78;
            if ( !LODWORD(v78[1].klass) )
              goto LABEL_79;
            v78[1].monitor = v133;
            sub_1B4CF34((CGThumbnailListItem_o *)&v78[1].monitor, (int32_t)v133, v151, v152);
            if ( LODWORD(v138[1].klass) <= 1 )
              goto LABEL_79;
            v155 = StringLiteral_866/*",["*/;
            v138[1].fields = (System_String_Fields)StringLiteral_866/*",["*/;
            sub_1B4CF34((CGThumbnailListItem_o *)&v138[1].fields, v155, v153, v154);
            if ( !v135->max_length )
              goto LABEL_79;
            v78 = System_Int32__ToString((int)v135 + 32, 0LL);
            if ( LODWORD(v138[1].klass) <= 2 )
              goto LABEL_79;
            v138[2].klass = (System_String_c *)v78;
            sub_1B4CF34((CGThumbnailListItem_o *)&v138[2], (int32_t)v78, v156, v157);
            if ( LODWORD(v138[1].klass) <= 3 )
              goto LABEL_79;
            v160 = (int)StringLiteral_816/*","*/;
            v138[2].monitor = StringLiteral_816/*","*/;
            sub_1B4CF34((CGThumbnailListItem_o *)&v138[2].monitor, v160, v158, v159);
            if ( v135->max_length <= 1 )
              goto LABEL_79;
            v78 = System_Int32__ToString((int)v135 + 36, 0LL);
            if ( LODWORD(v138[1].klass) <= 4 )
              goto LABEL_79;
            v138[2].fields = (System_String_Fields)v78;
            sub_1B4CF34((CGThumbnailListItem_o *)&v138[2].fields, (int32_t)v78, v161, v162);
            if ( LODWORD(v138[1].klass) <= 5 )
              goto LABEL_79;
            v149 = StringLiteral_15763/*"]"*/;
            v138[3].klass = (System_String_c *)StringLiteral_15763/*"]"*/;
            p_fields = (CGThumbnailListItem_o *)&v138[3];
          }
          sub_1B4CF34(p_fields, v149, v147, v148);
          v78 = System_String__Concat_61133984((System_String_array *)v138, 0LL);
          v131 = voicePlayedArray;
          v133 = v78;
        }
        LODWORD(v132) = v131->max_length;
        if ( (__int64)++v134 >= (int)v132 )
          goto LABEL_70;
      }
      goto LABEL_79;
    }
LABEL_70:
    v163 = (Il2CppObject *)System_String__Concat_61131716(
                             (System_String_o *)StringLiteral_15507/*"["*/,
                             v133,
                             (System_String_o *)StringLiteral_15763/*"]"*/,
                             0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v74,
      (Il2CppObject *)StringLiteral_24303/*"voicePlayedList"*/,
      v163,
      (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24080/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v164 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24378/*"waveInfo"*/,
    v164,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  LODWORD(v186) = waveNum;
  v168 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v186, v165, v166, v167);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_22519/*"reachedWave"*/,
    v168,
    (const MethodInfo_3257B18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v169 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B4D1DC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v169, 0LL);
  if ( !v169 )
    goto LABEL_80;
  v170 = MiniMessagePack_MiniMessagePacker__PackClass(v169, (Il2CppObject *)v74, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v171 = CatAndMouseGame__CatGame5Bytes(v170, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v172 = System_Convert__ToBase64String(v171, 0LL);
  RequestBase__addField_41748396((RequestBase_o *)this, (System_String_o *)StringLiteral_22627/*"result"*/, v172, v173);
  RequestBase__beginRequest((RequestBase_o *)this, v174);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_49BC76A & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v4);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v5);
    byte_49BC76A = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B4D1EC(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_3257F48 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v7,
            (const MethodInfo_3352894 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_33529B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_49BC767 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_8935/*"MockBattleResultRequest"*/, v2);
    byte_49BC767 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_8935/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC766 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_16775/*"battle/result"*/, v2);
    byte_49BC766 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_16775/*"battle/result"*/, 0LL);
}


void __fastcall BattleResultRequest__requestCompleted(
        BattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ResponseData_o *v8; // x0
  ResponseData_o *v9; // x20
  Il2CppObject *success; // x20
  System_String_o *v11; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v13; // x8

  if ( (byte_49BC769 & 1) == 0 )
  {
    sub_1B4CF90(&JsonManager_TypeInfo, responseList);
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, v5);
    sub_1B4CF90(&ServantCommentManager_TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v7);
    byte_49BC769 = 1;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v8
    && (v9 = v8, ResponseData__checkError_41839176(v8, 0LL))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__UpdateChapter(0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v11,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v13 = this->fields.CallBack;
    if ( v13 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v13->fields.m_target)(
        v13->fields.original_method_info,
        StringLiteral_21779/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}


void __fastcall BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
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
  int32_t v17; // w1
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Int32_array_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Int32_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct BattleResultRequest_RaidResult_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct BattleResultRequest_SuperBossResult_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Int32_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_Dictionary_object__object__o *v36; // x20
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_Dictionary_int__int__o *v42; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Int32_array *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Int64_array *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  struct System_Int32_array *v54; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3

  if ( (byte_49BC76D & 1) == 0 )
  {
    sub_1B4CF90(&BattleData_TypeInfo, method);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8);
    sub_1B4CF90(&int_____TypeInfo, v9);
    sub_1B4CF90(&int___TypeInfo, v10);
    sub_1B4CF90(&long___TypeInfo, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v13);
    sub_1B4CF90(&BattleResultRequest_RaidResult___TypeInfo, v14);
    sub_1B4CF90(&BattleResultRequest_SuperBossResult___TypeInfo, v15);
    sub_1B4CF90(&StringLiteral_1/*""*/, v16);
    byte_49BC76D = 1;
  }
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scores, v17, v2, v3);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.action, v18, v19, v20);
  v21 = (struct System_Int32_array_array *)sub_1B4D038(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v21;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.voicePlayedArray, (int32_t)v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v24;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.aliveUniqueIds, (int32_t)v24, v25, v26);
  v27 = (struct BattleResultRequest_RaidResult_array *)sub_1B4D038(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v27;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.raidResult, (int32_t)v27, v28, v29);
  v30 = (struct BattleResultRequest_SuperBossResult_array *)sub_1B4D038(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v30;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.superBossResult, (int32_t)v30, v31, v32);
  v33 = (struct System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v33;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.usedTurnArray, (int32_t)v33, v34, v35);
  this->fields.recordType = 1;
  v36 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v36,
    (const MethodInfo_3257168 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v36;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.recordJson, (int32_t)v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v39;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.firstNpPlayList, (int32_t)v39, v40, v41);
  v42 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B4D1DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v42,
    (const MethodInfo_31ED794 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v42;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.usedEquipSkillDict, (int32_t)v42, v43, v44);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.svtCommonFlagDict, (int32_t)SavedServantCommonFlagDict, v46, v47);
  v48 = (struct System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v48;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillShiftUniqueIds, (int32_t)v48, v49, v50);
  v51 = (struct System_Int64_array *)sub_1B4D038(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v51;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.skillShiftNpcSvtIds, (int32_t)v51, v52, v53);
  v54 = (struct System_Int32_array *)sub_1B4D038(int___TypeInfo, 0LL);
  this->fields.routeSelect = v54;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.routeSelect, (int32_t)v54, v55, v56);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


uint32_t __fastcall BattleResultRequest_Argument__ConvertBattleStatus(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  BattleResultRequest_Argument_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleResultRequest_RaidResult_array *raidResult; // x8
  int max_length; // w9
  int64_t v8; // x20
  int v9; // w10
  __int64 v10; // x11
  int *v11; // x12
  struct BattleResultRequest_SuperBossResult_array *superBossResult; // x8
  int v13; // w9
  int64_t v14; // x21
  int v15; // w10
  __int64 v16; // x11
  int *v17; // x12
  struct System_Int32_array *aliveUniqueIds; // x11
  __int64 v19; // x8
  __int64 v20; // x9
  __int64 v21; // x10
  int32_t *v22; // x11
  __int64 v23; // t1
  __int64 v24; // x8
  __int64 v25; // x22
  NetworkManager_c *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_62128656; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Byte_array *v36; // x19

  v2 = this;
  if ( (byte_49BC76B & 1) == 0 )
  {
    sub_1B4CF90(&Crc32_TypeInfo, method);
    sub_1B4CF90(&Method_System_Linq_Enumerable_Concat_byte___, v3);
    sub_1B4CF90(&Method_System_Linq_Enumerable_ToArray_byte___, v4);
    this = (BattleResultRequest_Argument_o *)sub_1B4CF90(&NetworkManager_TypeInfo, v5);
    byte_49BC76B = 1;
  }
  raidResult = v2->fields.raidResult;
  if ( !raidResult )
    goto LABEL_37;
  max_length = raidResult->max_length;
  v8 = -4231125LL;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      if ( max_length == v9 )
LABEL_36:
        sub_1B4D1F4(this, method);
      v11 = (int *)raidResult->m_Items[v9];
      if ( !v11 )
        goto LABEL_37;
      ++v9;
      v10 += v11[6] + (__int64)v11[5] + v11[4];
    }
    while ( max_length != v9 );
    v8 = v10 - 4231125;
  }
  superBossResult = v2->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_37;
  v13 = superBossResult->max_length;
  v14 = -2469110LL;
  if ( v13 >= 1 )
  {
    v15 = 0;
    v16 = 0LL;
    do
    {
      if ( v13 == v15 )
        goto LABEL_36;
      v17 = (int *)superBossResult->m_Items[v15];
      if ( !v17 )
        goto LABEL_37;
      ++v15;
      v16 += v17[6] + (__int64)v17[4] + v17[5];
    }
    while ( v13 != v15 );
    v14 = v16 - 2469110;
  }
  aliveUniqueIds = v2->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_37:
    sub_1B4D1EC(this, method);
  v19 = aliveUniqueIds->max_length;
  if ( v19 << 32 < 1 )
  {
    v25 = 0LL;
  }
  else
  {
    v20 = 0LL;
    v21 = (int)v19;
    v22 = &aliveUniqueIds->m_Items[1];
    do
    {
      if ( !v19 )
        goto LABEL_36;
      v23 = *v22++;
      --v21;
      --v19;
      v20 += v23;
    }
    while ( v21 );
    if ( v20 >= 0 )
      v24 = v20;
    else
      v24 = v20 + 1;
    v25 = v24 >> 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_49B57A5 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    byte_49B57A5 = 1;
  }
  v26 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v26 = NetworkManager_TypeInfo;
  }
  Bytes_62128656 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(
                                                                          v26->static_fields->userIdNumber
                                                                        + v2->fields.battleResult,
                                                                          0LL);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(v8, 0LL);
  v29 = System_Linq_Enumerable__Concat_byte_(
          Bytes_62128656,
          v28,
          (const MethodInfo_2F1BA0C *)Method_System_Linq_Enumerable_Concat_byte___);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(v25, 0LL);
  v31 = System_Linq_Enumerable__Concat_byte_(
          v29,
          v30,
          (const MethodInfo_2F1BA0C *)Method_System_Linq_Enumerable_Concat_byte___);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v33 = System_Linq_Enumerable__Concat_byte_(
          v31,
          v32,
          (const MethodInfo_2F1BA0C *)Method_System_Linq_Enumerable_Concat_byte___);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62128656(v14, 0LL);
  v35 = System_Linq_Enumerable__Concat_byte_(
          v33,
          v34,
          (const MethodInfo_2F1BA0C *)Method_System_Linq_Enumerable_Concat_byte___);
  v36 = System_Linq_Enumerable__ToArray_byte_(
          v35,
          (const MethodInfo_2F3C13C *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  return Crc32__Compute(v36, 0LL);
}


System_String_o *__fastcall BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  BattleResultRequest_Argument_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Int32_array_array *voicePlayedArray; // x8
  BattleResultRequest_Argument_o *v9; // x21
  unsigned __int64 v10; // x25
  unsigned __int64 max_length; // x9
  System_Int32_array *v12; // x29
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  BattleResultRequest_Argument_o *v15; // x20
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  CGThumbnailListItem_o *p_raidResult; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  v2 = this;
  if ( (byte_49BC76C & 1) == 0 )
  {
    sub_1B4CF90(&string___TypeInfo, method);
    sub_1B4CF90(&StringLiteral_866/*",["*/, v3);
    sub_1B4CF90(&StringLiteral_816/*","*/, v4);
    sub_1B4CF90(&StringLiteral_15507/*"["*/, v5);
    sub_1B4CF90(&StringLiteral_1/*""*/, v6);
    this = (BattleResultRequest_Argument_o *)sub_1B4CF90(&StringLiteral_15763/*"]"*/, v7);
    byte_49BC76C = 1;
  }
  voicePlayedArray = v2->fields.voicePlayedArray;
  v9 = (BattleResultRequest_Argument_o *)StringLiteral_1/*""*/;
  if ( voicePlayedArray )
  {
    v10 = 0LL;
    while ( 1 )
    {
      max_length = voicePlayedArray->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        goto LABEL_33;
      v12 = voicePlayedArray->m_Items[v10];
      if ( v12 && v12->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v9, 0LL) )
        {
          this = (BattleResultRequest_Argument_o *)sub_1B4D038(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v16 = StringLiteral_15507/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15507/*"["*/;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scores, v16, v13, v14);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v15->fields.action = (struct System_String_o *)this;
          sub_1B4CF34((CGThumbnailListItem_o *)&v15->fields.action, (int32_t)this, v17, v18);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v21 = (int)StringLiteral_816/*","*/;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_816/*","*/;
          sub_1B4CF34((CGThumbnailListItem_o *)&v15->fields.voicePlayedArray, v21, v19, v20);
          if ( v12->max_length <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL);
          if ( v15->fields.battleResult <= 3u )
            goto LABEL_33;
          v15->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1B4CF34((CGThumbnailListItem_o *)&v15->fields.aliveUniqueIds, (int32_t)this, v22, v23);
          if ( v15->fields.battleResult <= 4u )
            goto LABEL_33;
          v26 = StringLiteral_15763/*"]"*/;
          v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_15763/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v15->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1B4D038(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v9;
          sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.scores, (int32_t)v9, v28, v29);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v32 = StringLiteral_866/*",["*/;
          v15->fields.action = (struct System_String_o *)StringLiteral_866/*",["*/;
          sub_1B4CF34((CGThumbnailListItem_o *)&v15->fields.action, v32, v30, v31);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1B4CF34((CGThumbnailListItem_o *)&v15->fields.voicePlayedArray, (int32_t)this, v33, v34);
          if ( v15->fields.battleResult <= 3u
            || (v37 = (int)StringLiteral_816/*","*/,
                v15->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_816/*","*/,
                sub_1B4CF34((CGThumbnailListItem_o *)&v15->fields.aliveUniqueIds, v37, v35, v36),
                v12->max_length <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL),
                v15->fields.battleResult <= 4u)
            || (v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1B4CF34((CGThumbnailListItem_o *)&v15->fields.raidResult, (int32_t)this, v38, v39),
                v15->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1B4D1F4(this, method);
          }
          v26 = StringLiteral_15763/*"]"*/;
          v15->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_15763/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v15->fields.superBossResult;
        }
        sub_1B4CF34(p_raidResult, v26, v24, v25);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_61133984((System_String_array *)v15, 0LL);
        v9 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v10;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1B4D1EC(this, method);
    }
  }
  return System_String__Concat_61131716(
           (System_String_o *)StringLiteral_15507/*"["*/,
           (System_String_o *)v9,
           (System_String_o *)StringLiteral_15763/*"]"*/,
           0LL);
}


void __fastcall BattleResultRequest_RaidResult___ctor(
        BattleResultRequest_RaidResult_o *this,
        int32_t inUniqueId,
        int32_t inDay,
        int32_t inAddDamage,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.uniqueId = inUniqueId;
  this->fields.day = inDay;
  this->fields.addDamage = inAddDamage;
}


int64_t __fastcall BattleResultRequest_RaidResult__getStatusLong(
        BattleResultRequest_RaidResult_o *this,
        const MethodInfo *method)
{
  return this->fields.day + (__int64)this->fields.addDamage + this->fields.uniqueId;
}


void __fastcall BattleResultRequest_SuperBossResult___ctor(
        BattleResultRequest_SuperBossResult_o *this,
        int32_t inUniqueId,
        int32_t inSuperBossId,
        int32_t inAddDamage,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.superBossId = inSuperBossId;
  this->fields.uniqueId = inUniqueId;
  this->fields.addDamage = inAddDamage;
}


int64_t __fastcall BattleResultRequest_SuperBossResult__getStatusLong(
        BattleResultRequest_SuperBossResult_o *this,
        const MethodInfo *method)
{
  return this->fields.superBossId + (__int64)this->fields.addDamage + this->fields.uniqueId;
}