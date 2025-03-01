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
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_63852304; // x19
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
  int64_t v136; // x2
  int32_t v137; // w3
  System_String_o *v138; // x4
  BattleSetupInfo_o *v139; // x5
  FollowerInfo_o *v140; // x6
  PartyListViewItem_o *v141; // x7
  System_String_o *v142; // x19
  int64_t v143; // x1
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  void *v156; // x1
  int64_t v157; // x2
  int32_t v158; // w3
  System_String_o *v159; // x4
  BattleSetupInfo_o *v160; // x5
  FollowerInfo_o *v161; // x6
  PartyListViewItem_o *v162; // x7
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  int64_t v169; // x1
  PartyOrganizationUtility_o *p_fields; // x0
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  int64_t v183; // x1
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  int64_t v190; // x2
  int32_t v191; // w3
  System_String_o *v192; // x4
  BattleSetupInfo_o *v193; // x5
  FollowerInfo_o *v194; // x6
  PartyListViewItem_o *v195; // x7
  void *v196; // x1
  int64_t v197; // x2
  int32_t v198; // w3
  System_String_o *v199; // x4
  BattleSetupInfo_o *v200; // x5
  FollowerInfo_o *v201; // x6
  PartyListViewItem_o *v202; // x7
  Il2CppObject *v203; // x0
  Il2CppObject *v204; // x0
  __int64 v205; // x2
  __int64 v206; // x3
  __int64 v207; // x4
  Il2CppObject *v208; // x0
  MiniMessagePack_MiniMessagePacker_o *v209; // x19
  System_Byte_array *v210; // x19
  System_Byte_array *v211; // x19
  System_String_o *v212; // x0
  const MethodInfo *v213; // x3
  const MethodInfo *v214; // x1
  int64_t v216; // [xsp+10h] [xbp-C0h]
  int32_t v222; // [xsp+58h] [xbp-78h] BYREF
  int32_t v223; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v224; // [xsp+60h] [xbp-70h] BYREF
  int32_t v225; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v226; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BFF00F & 1) == 0 )
  {
    sub_1C2E12C(&CatAndMouseGame_TypeInfo, battleId);
    sub_1C2E12C(&System_Convert_TypeInfo, v28);
    sub_1C2E12C(&Crc32_TypeInfo, v29);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v30);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v31);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v32);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Concat_byte___, v33);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_byte___, v34);
    sub_1C2E12C(&int_TypeInfo, v35);
    sub_1C2E12C(&long_TypeInfo, v36);
    sub_1C2E12C(&JsonManager_TypeInfo, v37);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v38);
    sub_1C2E12C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v39);
    sub_1C2E12C(&NetworkManager_TypeInfo, v40);
    sub_1C2E12C(&string___TypeInfo, v41);
    sub_1C2E12C(&uint_TypeInfo, v42);
    sub_1C2E12C(&StringLiteral_23413/*"routeSelect"*/, v43);
    sub_1C2E12C(&StringLiteral_23340/*"result"*/, v44);
    sub_1C2E12C(&StringLiteral_23245/*"recordValueJson"*/, v45);
    sub_1C2E12C(&StringLiteral_18019/*"calledEnemyUniqueIds"*/, v46);
    sub_1C2E12C(&StringLiteral_23795/*"skillShiftNpcSvtIds"*/, v47);
    sub_1C2E12C(&StringLiteral_23188/*"raidResult"*/, v48);
    sub_1C2E12C(&StringLiteral_24825/*"useTreasureDevices"*/, v49);
    sub_1C2E12C(&StringLiteral_23244/*"recordType"*/, v50);
    sub_1C2E12C(&StringLiteral_896/*",["*/, v51);
    sub_1C2E12C(&StringLiteral_23796/*"skillShiftUniqueIds"*/, v52);
    sub_1C2E12C(&StringLiteral_18790/*"dataLostUniqueIds"*/, v53);
    sub_1C2E12C(&StringLiteral_24829/*"usedEquipSkillList"*/, v54);
    sub_1C2E12C(&StringLiteral_19271/*"elapsedTurn"*/, v55);
    sub_1C2E12C(&StringLiteral_23223/*"reachedWave"*/, v56);
    sub_1C2E12C(&StringLiteral_24830/*"usedTurnList"*/, v57);
    sub_1C2E12C(&StringLiteral_24154/*"svtCommonFlagList"*/, v58);
    sub_1C2E12C(&StringLiteral_23486/*"scores"*/, v59);
    sub_1C2E12C(&StringLiteral_25132/*"waveInfo"*/, v60);
    sub_1C2E12C(&StringLiteral_17425/*"battleStatus"*/, v61);
    sub_1C2E12C(&StringLiteral_845/*","*/, v62);
    sub_1C2E12C(&StringLiteral_24322/*"tdPlayed"*/, v63);
    sub_1C2E12C(&StringLiteral_25056/*"voicePlayedList"*/, v64);
    sub_1C2E12C(&StringLiteral_16099/*"["*/, v65);
    sub_1C2E12C(&StringLiteral_25169/*"winResult"*/, v66);
    sub_1C2E12C(&StringLiteral_1/*""*/, v67);
    sub_1C2E12C(&StringLiteral_24137/*"superBossResult"*/, v68);
    sub_1C2E12C(&StringLiteral_16358/*"]"*/, v69);
    sub_1C2E12C(&StringLiteral_17414/*"battleId"*/, v70);
    sub_1C2E12C(&StringLiteral_17417/*"battleResult"*/, v71);
    sub_1C2E12C(&StringLiteral_16937/*"action"*/, v72);
    sub_1C2E12C(&StringLiteral_17028/*"aliveUniqueIds"*/, v73);
    byte_4BFF00F = 1;
  }
  v74 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v74,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v216 = battleId;
  v226 = battleId;
  v78 = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &v226, v75, v76, v77);
  if ( !v74 )
    goto LABEL_80;
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_17414/*"battleId"*/,
    (Il2CppObject *)v78,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v225 = battleResult;
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v225, v80, v81, v82);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_17417/*"battleResult"*/,
    v83,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v224 = winResult;
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v224, v84, v85, v86);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_25169/*"winResult"*/,
    v87,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23486/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_16937/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v88 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23188/*"raidResult"*/,
    v88,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v89 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24137/*"superBossResult"*/,
    v89,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v223 = elapsedTurn;
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v223, v90, v91, v92);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_19271/*"elapsedTurn"*/,
    v93,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v222 = recordType;
  v97 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v222, v94, v95, v96);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23244/*"recordType"*/,
    v97,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23245/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_80;
  v98 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_366D404 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v99 = (Il2CppObject *)JsonManager__toJson(&v98->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24322/*"tdPlayed"*/,
    v99,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_80;
  v100 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
                           playerServantNoblePhantasmUsageData,
                           0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24825/*"useTreasureDevices"*/,
    v100,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24829/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24154/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23796/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23795/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_18019/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23413/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_18790/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
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
      sub_1C2E388(v78, v79);
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
    sub_1C2E390(v78, v79);
  }
  v107 = 0LL;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_17028/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
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
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, v79);
    byte_4BF81D5 = 1;
  }
  v114 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v114 = NetworkManager_TypeInfo;
  }
  Bytes_63852304 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(
                                                                          v114->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0LL);
  v116 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(
                                                                v103 - 4231125,
                                                                0LL);
  v117 = System_Linq_Enumerable__Concat_byte_(
           Bytes_63852304,
           v116,
           (const MethodInfo_2FE9788 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v110 >= 0 )
    v118 = v110;
  else
    v118 = v110 + 1;
  v119 = v117;
  v120 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(v118 >> 1, 0LL);
  v121 = System_Linq_Enumerable__Concat_byte_(
           v119,
           v120,
           (const MethodInfo_2FE9788 *)Method_System_Linq_Enumerable_Concat_byte___);
  v122 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(
                                                                v216 - 0x7FFFFFFF,
                                                                0LL);
  v123 = System_Linq_Enumerable__Concat_byte_(
           v121,
           v122,
           (const MethodInfo_2FE9788 *)Method_System_Linq_Enumerable_Concat_byte___);
  v124 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(
                                                                v107 - 2469110,
                                                                0LL);
  v125 = System_Linq_Enumerable__Concat_byte_(
           v123,
           v124,
           (const MethodInfo_2FE9788 *)Method_System_Linq_Enumerable_Concat_byte___);
  v126 = System_Linq_Enumerable__ToArray_byte_(
           v125,
           (const MethodInfo_300BB14 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v226) = Crc32__Compute(v126, 0LL);
  v130 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v226, v127, v128, v129);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_17425/*"battleStatus"*/,
    v130,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
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
            v78 = (System_String_o *)sub_1C2E1D4(string___TypeInfo, 5LL);
            if ( !v78 )
              goto LABEL_80;
            v142 = v78;
            if ( !LODWORD(v78[1].klass) )
              goto LABEL_79;
            v143 = StringLiteral_16099/*"["*/;
            v78[1].monitor = (void *)StringLiteral_16099/*"["*/;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v78[1].monitor, v143, v136, v137, v138, v139, v140, v141);
            if ( !v135->max_length )
              goto LABEL_79;
            v78 = System_Int32__ToString((int)v135 + 32, 0LL);
            if ( LODWORD(v142[1].klass) <= 1 )
              goto LABEL_79;
            v142[1].fields = (System_String_Fields)v78;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v142[1].fields, (int64_t)v78, v144, v145, v146, v147, v148, v149);
            if ( LODWORD(v142[1].klass) <= 2 )
              goto LABEL_79;
            v156 = StringLiteral_845/*","*/;
            v142[2].klass = (System_String_c *)StringLiteral_845/*","*/;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v142[2], (int64_t)v156, v150, v151, v152, v153, v154, v155);
            if ( v135->max_length <= 1 )
              goto LABEL_79;
            v78 = System_Int32__ToString((int)v135 + 36, 0LL);
            if ( LODWORD(v142[1].klass) <= 3 )
              goto LABEL_79;
            v142[2].monitor = v78;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&v142[2].monitor,
              (int64_t)v78,
              v157,
              v158,
              v159,
              v160,
              v161,
              v162);
            if ( LODWORD(v142[1].klass) <= 4 )
              goto LABEL_79;
            v169 = StringLiteral_16358/*"]"*/;
            v142[2].fields = (System_String_Fields)StringLiteral_16358/*"]"*/;
            p_fields = (PartyOrganizationUtility_o *)&v142[2].fields;
          }
          else
          {
            v78 = (System_String_o *)sub_1C2E1D4(string___TypeInfo, 6LL);
            if ( !v78 )
              goto LABEL_80;
            v142 = v78;
            if ( !LODWORD(v78[1].klass) )
              goto LABEL_79;
            v78[1].monitor = v133;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&v78[1].monitor,
              (int64_t)v133,
              v171,
              v172,
              v173,
              v174,
              v175,
              v176);
            if ( LODWORD(v142[1].klass) <= 1 )
              goto LABEL_79;
            v183 = StringLiteral_896/*",["*/;
            v142[1].fields = (System_String_Fields)StringLiteral_896/*",["*/;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v142[1].fields, v183, v177, v178, v179, v180, v181, v182);
            if ( !v135->max_length )
              goto LABEL_79;
            v78 = System_Int32__ToString((int)v135 + 32, 0LL);
            if ( LODWORD(v142[1].klass) <= 2 )
              goto LABEL_79;
            v142[2].klass = (System_String_c *)v78;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v142[2], (int64_t)v78, v184, v185, v186, v187, v188, v189);
            if ( LODWORD(v142[1].klass) <= 3 )
              goto LABEL_79;
            v196 = StringLiteral_845/*","*/;
            v142[2].monitor = StringLiteral_845/*","*/;
            sub_1C2E0D0(
              (PartyOrganizationUtility_o *)&v142[2].monitor,
              (int64_t)v196,
              v190,
              v191,
              v192,
              v193,
              v194,
              v195);
            if ( v135->max_length <= 1 )
              goto LABEL_79;
            v78 = System_Int32__ToString((int)v135 + 36, 0LL);
            if ( LODWORD(v142[1].klass) <= 4 )
              goto LABEL_79;
            v142[2].fields = (System_String_Fields)v78;
            sub_1C2E0D0((PartyOrganizationUtility_o *)&v142[2].fields, (int64_t)v78, v197, v198, v199, v200, v201, v202);
            if ( LODWORD(v142[1].klass) <= 5 )
              goto LABEL_79;
            v169 = StringLiteral_16358/*"]"*/;
            v142[3].klass = (System_String_c *)StringLiteral_16358/*"]"*/;
            p_fields = (PartyOrganizationUtility_o *)&v142[3];
          }
          sub_1C2E0D0(p_fields, v169, v163, v164, v165, v166, v167, v168);
          v78 = System_String__Concat_63249112((System_String_array *)v142, 0LL);
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
    v203 = (Il2CppObject *)System_String__Concat_63246844(
                             (System_String_o *)StringLiteral_16099/*"["*/,
                             v133,
                             (System_String_o *)StringLiteral_16358/*"]"*/,
                             0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v74,
      (Il2CppObject *)StringLiteral_25056/*"voicePlayedList"*/,
      v203,
      (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_24830/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v204 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_25132/*"waveInfo"*/,
    v204,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  LODWORD(v226) = waveNum;
  v208 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v226, v205, v206, v207);
  System_Collections_Generic_Dictionary_object__object___Add(
    v74,
    (Il2CppObject *)StringLiteral_23223/*"reachedWave"*/,
    v208,
    (const MethodInfo_3335B74 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v209 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C2E378(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v209, 0LL);
  if ( !v209 )
    goto LABEL_80;
  v210 = MiniMessagePack_MiniMessagePacker__PackClass(v209, (Il2CppObject *)v74, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v211 = CatAndMouseGame__CatGame5Bytes(v210, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v212 = System_Convert__ToBase64String(v211, 0LL);
  RequestBase__addField_42503872((RequestBase_o *)this, (System_String_o *)StringLiteral_23340/*"result"*/, v212, v213);
  RequestBase__beginRequest((RequestBase_o *)this, v214);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4BFF011 & 1) == 0 )
  {
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v3);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v4);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v5);
    byte_4BFF011 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C2E388(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_3335FA4 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v7,
            (const MethodInfo_34313CC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_34314EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4BFF00E & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_9285/*"MockBattleResultRequest"*/, v2);
    byte_4BFF00E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9285/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BFF00D & 1) == 0 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    sub_1C2E12C(&StringLiteral_17394/*"battle/result"*/, v2);
    byte_4BFF00D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63235584(BaseUrl, (System_String_o *)StringLiteral_17394/*"battle/result"*/, 0LL);
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

  if ( (byte_4BFF010 & 1) == 0 )
  {
    sub_1C2E12C(&JsonManager_TypeInfo, responseList);
    sub_1C2E12C(&ResponseCommandKind_TypeInfo, v5);
    sub_1C2E12C(&ServantCommentManager_TypeInfo, v6);
    sub_1C2E12C(&StringLiteral_22468/*"ng"*/, v7);
    byte_4BFF010 = 1;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v8
    && (v9 = v8, ResponseData__checkError_42594652(v8, 0LL))
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
        StringLiteral_22468/*"ng"*/,
        *(_QWORD *)&v13->fields.extra_arg);
  }
}


void __fastcall BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  void *v21; // x1
  void *v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Int32_array_array *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct System_Int32_array *v36; // x0
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  struct BattleResultRequest_RaidResult_array *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  struct BattleResultRequest_SuperBossResult_array *v50; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  struct System_Int32_array *v57; // x0
  int64_t v58; // x2
  int32_t v59; // w3
  System_String_o *v60; // x4
  BattleSetupInfo_o *v61; // x5
  FollowerInfo_o *v62; // x6
  PartyListViewItem_o *v63; // x7
  System_Collections_Generic_Dictionary_object__object__o *v64; // x20
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_List_object__o *v71; // x20
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  System_Collections_Generic_Dictionary_int__int__o *v78; // x20
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  struct System_Int32_array *v92; // x0
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct System_Int64_array *v99; // x0
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct System_Int32_array *v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7

  if ( (byte_4BFF014 & 1) == 0 )
  {
    sub_1C2E12C(&BattleData_TypeInfo, method);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_1C2E12C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v10);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v11);
    sub_1C2E12C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v12);
    sub_1C2E12C(&int_____TypeInfo, v13);
    sub_1C2E12C(&int___TypeInfo, v14);
    sub_1C2E12C(&long___TypeInfo, v15);
    sub_1C2E12C(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v16);
    sub_1C2E12C(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v17);
    sub_1C2E12C(&BattleResultRequest_RaidResult___TypeInfo, v18);
    sub_1C2E12C(&BattleResultRequest_SuperBossResult___TypeInfo, v19);
    sub_1C2E12C(&StringLiteral_1/*""*/, v20);
    byte_4BFF014 = 1;
  }
  v21 = StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.scores, (int64_t)v21, v2, v3, v4, v5, v6, v7);
  v22 = StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.action, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  v29 = (struct System_Int32_array_array *)sub_1C2E1D4(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v29;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.voicePlayedArray, (int64_t)v29, v30, v31, v32, v33, v34, v35);
  v36 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v36;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.aliveUniqueIds, (int64_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (struct BattleResultRequest_RaidResult_array *)sub_1C2E1D4(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v43;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.raidResult, (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v50 = (struct BattleResultRequest_SuperBossResult_array *)sub_1C2E1D4(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v50;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.superBossResult, (int64_t)v50, v51, v52, v53, v54, v55, v56);
  v57 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v57;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.usedTurnArray, (int64_t)v57, v58, v59, v60, v61, v62, v63);
  this->fields.recordType = 1;
  v64 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2E378(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v64,
    (const MethodInfo_33351C4 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v64;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.recordJson, (int64_t)v64, v65, v66, v67, v68, v69, v70);
  v71 = (System_Collections_Generic_List_object__o *)sub_1C2E378(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v71,
    (const MethodInfo_366B078 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v71;
  sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.firstNpPlayList, (int64_t)v71, v72, v73, v74, v75, v76, v77);
  v78 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2E378(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v78,
    (const MethodInfo_32CBA40 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v78;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.usedEquipSkillDict,
    (int64_t)v78,
    v79,
    v80,
    v81,
    v82,
    v83,
    v84);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.svtCommonFlagDict,
    (int64_t)SavedServantCommonFlagDict,
    v86,
    v87,
    v88,
    v89,
    v90,
    v91);
  v92 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v92;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.skillShiftUniqueIds,
    (int64_t)v92,
    v93,
    v94,
    v95,
    v96,
    v97,
    v98);
  v99 = (struct System_Int64_array *)sub_1C2E1D4(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v99;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.skillShiftNpcSvtIds,
    (int64_t)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  v106 = (struct System_Int32_array *)sub_1C2E1D4(int___TypeInfo, 0LL);
  this->fields.routeSelect = v106;
  sub_1C2E0D0(
    (PartyOrganizationUtility_o *)&this->fields.routeSelect,
    (int64_t)v106,
    v107,
    v108,
    v109,
    v110,
    v111,
    v112);
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
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_63852304; // x23
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
  if ( (byte_4BFF012 & 1) == 0 )
  {
    sub_1C2E12C(&Crc32_TypeInfo, method);
    sub_1C2E12C(&Method_System_Linq_Enumerable_Concat_byte___, v3);
    sub_1C2E12C(&Method_System_Linq_Enumerable_ToArray_byte___, v4);
    this = (BattleResultRequest_Argument_o *)sub_1C2E12C(&NetworkManager_TypeInfo, v5);
    byte_4BFF012 = 1;
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
        sub_1C2E390(this, method);
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
    sub_1C2E388(this, method);
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
  if ( !byte_4BF81D5 )
  {
    sub_1C2E12C(&NetworkManager_TypeInfo, method);
    byte_4BF81D5 = 1;
  }
  v26 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v26 = NetworkManager_TypeInfo;
  }
  Bytes_63852304 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(
                                                                          v26->static_fields->userIdNumber
                                                                        + v2->fields.battleResult,
                                                                          0LL);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(v8, 0LL);
  v29 = System_Linq_Enumerable__Concat_byte_(
          Bytes_63852304,
          v28,
          (const MethodInfo_2FE9788 *)Method_System_Linq_Enumerable_Concat_byte___);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(v25, 0LL);
  v31 = System_Linq_Enumerable__Concat_byte_(
          v29,
          v30,
          (const MethodInfo_2FE9788 *)Method_System_Linq_Enumerable_Concat_byte___);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v33 = System_Linq_Enumerable__Concat_byte_(
          v31,
          v32,
          (const MethodInfo_2FE9788 *)Method_System_Linq_Enumerable_Concat_byte___);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63852304(v14, 0LL);
  v35 = System_Linq_Enumerable__Concat_byte_(
          v33,
          v34,
          (const MethodInfo_2FE9788 *)Method_System_Linq_Enumerable_Concat_byte___);
  v36 = System_Linq_Enumerable__ToArray_byte_(
          v35,
          (const MethodInfo_300BB14 *)Method_System_Linq_Enumerable_ToArray_byte___);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  BattleResultRequest_Argument_o *v19; // x20
  int64_t v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  void *v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x1
  PartyOrganizationUtility_o *p_raidResult; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  void *v73; // x1
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7

  v2 = this;
  if ( (byte_4BFF013 & 1) == 0 )
  {
    sub_1C2E12C(&string___TypeInfo, method);
    sub_1C2E12C(&StringLiteral_896/*",["*/, v3);
    sub_1C2E12C(&StringLiteral_845/*","*/, v4);
    sub_1C2E12C(&StringLiteral_16099/*"["*/, v5);
    sub_1C2E12C(&StringLiteral_1/*""*/, v6);
    this = (BattleResultRequest_Argument_o *)sub_1C2E12C(&StringLiteral_16358/*"]"*/, v7);
    byte_4BFF013 = 1;
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
          this = (BattleResultRequest_Argument_o *)sub_1C2E1D4(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_31;
          v19 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v20 = StringLiteral_16099/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_16099/*"["*/;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.scores, v20, v13, v14, v15, v16, v17, v18);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v19->fields.battleResult <= 1u )
            goto LABEL_33;
          v19->fields.action = (struct System_String_o *)this;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v19->fields.action, (int64_t)this, v21, v22, v23, v24, v25, v26);
          if ( v19->fields.battleResult <= 2u )
            goto LABEL_33;
          v33 = StringLiteral_845/*","*/;
          v19->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_845/*","*/;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v19->fields.voicePlayedArray,
            (int64_t)v33,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          if ( v12->max_length <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL);
          if ( v19->fields.battleResult <= 3u )
            goto LABEL_33;
          v19->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v19->fields.aliveUniqueIds,
            (int64_t)this,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39);
          if ( v19->fields.battleResult <= 4u )
            goto LABEL_33;
          v46 = StringLiteral_16358/*"]"*/;
          v19->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16358/*"]"*/;
          p_raidResult = (PartyOrganizationUtility_o *)&v19->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1C2E1D4(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_31;
          v19 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v9;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&this->fields.scores, (int64_t)v9, v48, v49, v50, v51, v52, v53);
          if ( v19->fields.battleResult <= 1u )
            goto LABEL_33;
          v60 = StringLiteral_896/*",["*/;
          v19->fields.action = (struct System_String_o *)StringLiteral_896/*",["*/;
          sub_1C2E0D0((PartyOrganizationUtility_o *)&v19->fields.action, v60, v54, v55, v56, v57, v58, v59);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v19->fields.battleResult <= 2u )
            goto LABEL_33;
          v19->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1C2E0D0(
            (PartyOrganizationUtility_o *)&v19->fields.voicePlayedArray,
            (int64_t)this,
            v61,
            v62,
            v63,
            v64,
            v65,
            v66);
          if ( v19->fields.battleResult <= 3u
            || (v73 = StringLiteral_845/*","*/,
                v19->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_845/*","*/,
                sub_1C2E0D0(
                  (PartyOrganizationUtility_o *)&v19->fields.aliveUniqueIds,
                  (int64_t)v73,
                  v67,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72),
                v12->max_length <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL),
                v19->fields.battleResult <= 4u)
            || (v19->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1C2E0D0(
                  (PartyOrganizationUtility_o *)&v19->fields.raidResult,
                  (int64_t)this,
                  v74,
                  v75,
                  v76,
                  v77,
                  v78,
                  v79),
                v19->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1C2E390(this, method);
          }
          v46 = StringLiteral_16358/*"]"*/;
          v19->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16358/*"]"*/;
          p_raidResult = (PartyOrganizationUtility_o *)&v19->fields.superBossResult;
        }
        sub_1C2E0D0(p_raidResult, v46, v40, v41, v42, v43, v44, v45);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_63249112((System_String_array *)v19, 0LL);
        v9 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v10;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1C2E388(this, method);
    }
  }
  return System_String__Concat_63246844(
           (System_String_o *)StringLiteral_16099/*"["*/,
           (System_String_o *)v9,
           (System_String_o *)StringLiteral_16358/*"]"*/,
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