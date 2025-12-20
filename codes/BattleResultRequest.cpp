void BattleResultRequest___ctor(BattleResultRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void BattleResultRequest__beginRequest(
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
        System_Collections_Generic_Dictionary_int__int__o *battleMissionValueDict,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v29; // x21
  __int64 Item; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x0
  Il2CppObject *v34; // x0
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x0
  System_Object_array *v38; // x0
  Il2CppObject *v39; // x0
  Il2CppObject *v40; // x0
  int max_length; // w8
  int v42; // w9
  __int64 v43; // x22
  BattleResultRequest_RaidResult_o *v44; // x10
  int v45; // w8
  int v46; // w9
  __int64 v47; // x20
  BattleResultRequest_SuperBossResult_o *v48; // x10
  __int64 max_length_low; // x8
  __int64 v50; // x23
  __int64 v51; // x9
  int32_t *m_Items; // x10
  __int64 v53; // t1
  NetworkManager_c *v54; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_65465148; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  __int64 v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Byte_array *v66; // x19
  Il2CppObject *v67; // x0
  System_Int32_array_array *v68; // x10
  il2cpp_array_size_t v69; // x8
  System_String_o *v70; // x22
  unsigned __int64 v71; // x25
  System_Int32_array *v72; // x29
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  __int64 v79; // x19
  int32_t v80; // w1
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  int32_t v93; // w1
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  int32_t v106; // w1
  GrandQuestFolderBoardItem_o *v107; // x0
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  int32_t v120; // w1
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  int32_t v133; // w1
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x4
  int32_t v137; // w5
  int64_t v138; // x6
  System_String_o *v139; // x7
  Il2CppObject *v140; // x0
  Il2CppObject *v141; // x0
  Il2CppObject *v142; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  BattleResultRequest___c_c *v144; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x19
  System_Func_int__int__o *_9__5_0; // x22
  Il2CppObject *v147; // x23
  struct BattleResultRequest___c_StaticFields *static_fields; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  System_String_o *v151; // x4
  int32_t v152; // w5
  int64_t v153; // x6
  System_String_o *v154; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v155; // x0
  Il2CppObject *v156; // x19
  void *monitor; // x8
  __int64 v158; // x22
  unsigned __int64 v159; // x23
  MiniMessagePack_MiniMessagePacker_o *v160; // x19
  System_Byte_array *v161; // x19
  System_Byte_array *v162; // x19
  System_String_o *v163; // x0
  int64_t v165; // [xsp+10h] [xbp-C0h]
  int32_t v171; // [xsp+58h] [xbp-78h] BYREF
  int32_t v172; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v173; // [xsp+60h] [xbp-70h] BYREF
  int32_t v174; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v175; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4D2E310 & 1) == 0 )
  {
    sub_1C94098(&CatAndMouseGame_TypeInfo);
    sub_1C94098(&System_Convert_TypeInfo);
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C94098(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_byte___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C94098(&System_Func_int__int__TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&long_TypeInfo);
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1C94098(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&Method_BattleResultRequest___c__beginRequest_b__5_0__);
    sub_1C94098(&BattleResultRequest___c_TypeInfo);
    sub_1C94098(&uint_TypeInfo);
    sub_1C94098(&StringLiteral_23383/*"routeSelect"*/);
    sub_1C94098(&StringLiteral_23305/*"result"*/);
    sub_1C94098(&StringLiteral_23213/*"recordValueJson"*/);
    sub_1C94098(&StringLiteral_17789/*"calledEnemyUniqueIds"*/);
    sub_1C94098(&StringLiteral_23747/*"skillShiftNpcSvtIds"*/);
    sub_1C94098(&StringLiteral_23160/*"raidResult"*/);
    sub_1C94098(&StringLiteral_24736/*"useTreasureDevices"*/);
    sub_1C94098(&StringLiteral_23212/*"recordType"*/);
    sub_1C94098(&StringLiteral_17161/*"battleMissionTargetIds"*/);
    sub_1C94098(&StringLiteral_857/*",["*/);
    sub_1C94098(&StringLiteral_23748/*"skillShiftUniqueIds"*/);
    sub_1C94098(&StringLiteral_18581/*"dataLostUniqueIds"*/);
    sub_1C94098(&StringLiteral_24740/*"usedEquipSkillList"*/);
    sub_1C94098(&StringLiteral_19073/*"elapsedTurn"*/);
    sub_1C94098(&StringLiteral_23193/*"reachedWave"*/);
    sub_1C94098(&StringLiteral_24741/*"usedTurnList"*/);
    sub_1C94098(&StringLiteral_24097/*"svtCommonFlagList"*/);
    sub_1C94098(&StringLiteral_17162/*"battleMissionTargetValues"*/);
    sub_1C94098(&StringLiteral_23442/*"scores"*/);
    sub_1C94098(&StringLiteral_25037/*"waveInfo"*/);
    sub_1C94098(&StringLiteral_17172/*"battleStatus"*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    sub_1C94098(&StringLiteral_24250/*"tdPlayed"*/);
    sub_1C94098(&StringLiteral_24962/*"voicePlayedList"*/);
    sub_1C94098(&StringLiteral_15861/*"["*/);
    sub_1C94098(&StringLiteral_25076/*"winResult"*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    sub_1C94098(&StringLiteral_24080/*"superBossResult"*/);
    sub_1C94098(&StringLiteral_16112/*"]"*/);
    sub_1C94098(&StringLiteral_17158/*"battleId"*/);
    sub_1C94098(&StringLiteral_17163/*"battleResult"*/);
    sub_1C94098(&StringLiteral_16715/*"action"*/);
    sub_1C94098(&StringLiteral_16813/*"aliveUniqueIds"*/);
    byte_4D2E310 = 1;
  }
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v165 = battleId;
  v175 = battleId;
  Item = j_il2cpp_value_box_0(long_TypeInfo, &v175);
  if ( !v29 )
    goto LABEL_94;
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17158/*"battleId"*/,
    (Il2CppObject *)Item,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v174 = battleResult;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v174);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17163/*"battleResult"*/,
    v32,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v173 = winResult;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_25076/*"winResult"*/,
    v33,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23442/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_16715/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v34 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23160/*"raidResult"*/,
    v34,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v35 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24080/*"superBossResult"*/,
    v35,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v172 = elapsedTurn;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v172);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_19073/*"elapsedTurn"*/,
    v36,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v171 = recordType;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23212/*"recordType"*/,
    v37,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23213/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_94;
  v38 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_386C98C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v39 = (Il2CppObject *)JsonManager__toJson(&v38->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24250/*"tdPlayed"*/,
    v39,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_94;
  v40 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24736/*"useTreasureDevices"*/,
    v40,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24740/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24097/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23748/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23747/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17789/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23383/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_18581/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_94;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v43 = 0;
    if ( !superBossResult )
      goto LABEL_94;
  }
  else
  {
    v42 = 0;
    v43 = 0;
    do
    {
      if ( max_length == v42 )
        goto LABEL_93;
      v44 = raidResult->m_Items[v42];
      if ( !v44 )
        goto LABEL_94;
      ++v42;
      v43 += v44->fields.addDamage + (__int64)v44->fields.day + v44->fields.uniqueId;
    }
    while ( max_length != v42 );
    if ( !superBossResult )
LABEL_94:
      sub_1C942F0(Item, v31);
  }
  v45 = superBossResult->max_length;
  if ( v45 >= 1 )
  {
    v46 = 0;
    v47 = 0;
    while ( v45 != v46 )
    {
      v48 = superBossResult->m_Items[v46];
      if ( !v48 )
        goto LABEL_94;
      ++v46;
      v47 += v48->fields.addDamage + (__int64)v48->fields.superBossId + v48->fields.uniqueId;
      if ( v45 == v46 )
        goto LABEL_24;
    }
LABEL_93:
    sub_1C942F8(Item);
  }
  v47 = 0;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_16813/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_94;
  max_length_low = LODWORD(aliveUniqueIds->max_length);
  if ( max_length_low << 32 >= 1 )
  {
    v50 = 0;
    v51 = (int)max_length_low;
    m_Items = aliveUniqueIds->m_Items;
    while ( max_length_low )
    {
      v53 = *m_Items++;
      --v51;
      --max_length_low;
      v50 += v53;
      if ( !v51 )
        goto LABEL_31;
    }
    goto LABEL_93;
  }
  v50 = 0;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  v54 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v54 = NetworkManager_TypeInfo;
  }
  Bytes_65465148 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(
                                                                          v54->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0);
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(v43 - 4231125, 0);
  v57 = System_Linq_Enumerable__Concat_byte_(
          Bytes_65465148,
          v56,
          (const MethodInfo_31B8D60 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v50 >= 0 )
    v58 = v50;
  else
    v58 = v50 + 1;
  v59 = v57;
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(v58 >> 1, 0);
  v61 = System_Linq_Enumerable__Concat_byte_(
          v59,
          v60,
          (const MethodInfo_31B8D60 *)Method_System_Linq_Enumerable_Concat_byte___);
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(
                                                               v165 - 0x7FFFFFFF,
                                                               0);
  v63 = System_Linq_Enumerable__Concat_byte_(
          v61,
          v62,
          (const MethodInfo_31B8D60 *)Method_System_Linq_Enumerable_Concat_byte___);
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(v47 - 2469110, 0);
  v65 = System_Linq_Enumerable__Concat_byte_(
          v63,
          v64,
          (const MethodInfo_31B8D60 *)Method_System_Linq_Enumerable_Concat_byte___);
  v66 = System_Linq_Enumerable__ToArray_byte_(
          v65,
          (const MethodInfo_31DC604 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v175) = Crc32__Compute(v66, 0);
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v175);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17172/*"battleStatus"*/,
    v67,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v68 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v69 = voicePlayedArray->max_length;
    v70 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v69 >= 1 )
    {
      v71 = 0;
      while ( v71 < (unsigned int)v69 )
      {
        v72 = voicePlayedArray->m_Items[v71];
        if ( v72 && LODWORD(v72->max_length) == 2 )
        {
          if ( System_String__IsNullOrEmpty(v70, 0) )
          {
            Item = sub_1C94140(string___TypeInfo, 5);
            if ( !Item )
              goto LABEL_94;
            v79 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            v80 = StringLiteral_15861/*"["*/;
            *(_QWORD *)(Item + 32) = StringLiteral_15861/*"["*/;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(Item + 32), v80, v73, v74, v75, v76, v77, v78);
            if ( !LODWORD(v72->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v72 + 32, 0);
            if ( *(_DWORD *)(v79 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v79 + 40) = Item;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v79 + 40), Item, v81, v82, v83, v84, v85, v86);
            if ( *(_DWORD *)(v79 + 24) <= 2u )
              goto LABEL_93;
            v93 = StringLiteral_808/*","*/;
            *(_QWORD *)(v79 + 48) = StringLiteral_808/*","*/;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v79 + 48), v93, v87, v88, v89, v90, v91, v92);
            if ( LODWORD(v72->max_length) <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v72 + 36, 0);
            if ( *(_DWORD *)(v79 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v79 + 56) = Item;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v79 + 56), Item, v94, v95, v96, v97, v98, v99);
            if ( *(_DWORD *)(v79 + 24) <= 4u )
              goto LABEL_93;
            v106 = StringLiteral_16112/*"]"*/;
            *(_QWORD *)(v79 + 64) = StringLiteral_16112/*"]"*/;
            v107 = (GrandQuestFolderBoardItem_o *)(v79 + 64);
          }
          else
          {
            Item = sub_1C94140(string___TypeInfo, 6);
            if ( !Item )
              goto LABEL_94;
            v79 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            *(_QWORD *)(Item + 32) = v70;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(Item + 32), (int32_t)v70, v108, v109, v110, v111, v112, v113);
            if ( *(_DWORD *)(v79 + 24) <= 1u )
              goto LABEL_93;
            v120 = StringLiteral_857/*",["*/;
            *(_QWORD *)(v79 + 40) = StringLiteral_857/*",["*/;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v79 + 40), v120, v114, v115, v116, v117, v118, v119);
            if ( !LODWORD(v72->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v72 + 32, 0);
            if ( *(_DWORD *)(v79 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v79 + 48) = Item;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v79 + 48), Item, v121, v122, v123, v124, v125, v126);
            if ( *(_DWORD *)(v79 + 24) <= 3u )
              goto LABEL_93;
            v133 = StringLiteral_808/*","*/;
            *(_QWORD *)(v79 + 56) = StringLiteral_808/*","*/;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v79 + 56), v133, v127, v128, v129, v130, v131, v132);
            if ( LODWORD(v72->max_length) <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v72 + 36, 0);
            if ( *(_DWORD *)(v79 + 24) <= 4u )
              goto LABEL_93;
            *(_QWORD *)(v79 + 64) = Item;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v79 + 64), Item, v134, v135, v136, v137, v138, v139);
            if ( *(_DWORD *)(v79 + 24) <= 5u )
              goto LABEL_93;
            v106 = StringLiteral_16112/*"]"*/;
            *(_QWORD *)(v79 + 72) = StringLiteral_16112/*"]"*/;
            v107 = (GrandQuestFolderBoardItem_o *)(v79 + 72);
          }
          sub_1C9403C(v107, v106, v100, v101, v102, v103, v104, v105);
          Item = (__int64)System_String__Concat_64458276((System_String_array *)v79, 0);
          v68 = voicePlayedArray;
          v70 = (System_String_o *)Item;
        }
        LODWORD(v69) = v68->max_length;
        if ( (__int64)++v71 >= (int)v69 )
          goto LABEL_70;
      }
      goto LABEL_93;
    }
LABEL_70:
    v140 = (Il2CppObject *)System_String__Concat_64456008(
                             (System_String_o *)StringLiteral_15861/*"["*/,
                             v70,
                             (System_String_o *)StringLiteral_16112/*"]"*/,
                             0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v29,
      (Il2CppObject *)StringLiteral_24962/*"voicePlayedList"*/,
      v140,
      (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24741/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v141 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_25037/*"waveInfo"*/,
    v141,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  LODWORD(v175) = waveNum;
  v142 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23193/*"reachedWave"*/,
    v142,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !battleMissionValueDict )
    goto LABEL_94;
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           battleMissionValueDict,
           (const MethodInfo_34ABAE0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v144 = BattleResultRequest___c_TypeInfo;
  v145 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !BattleResultRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultRequest___c_TypeInfo);
    v144 = BattleResultRequest___c_TypeInfo;
  }
  _9__5_0 = v144->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v144->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v144);
      v144 = BattleResultRequest___c_TypeInfo;
    }
    v147 = (Il2CppObject *)v144->static_fields->__9;
    _9__5_0 = (System_Func_int__int__o *)sub_1C942E4(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__5_0, v147, Method_BattleResultRequest___c__beginRequest_b__5_0__, 0);
    static_fields = BattleResultRequest___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__5_0,
      (int32_t)_9__5_0,
      v149,
      v150,
      v151,
      v152,
      v153,
      v154);
  }
  v155 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                                v145,
                                                                (System_Func_TSource__TKey__o *)_9__5_0,
                                                                (const MethodInfo_31CBF54 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Item = (__int64)System_Linq_Enumerable__ToArray_int_(
                    v155,
                    (const MethodInfo_31DC714 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Item )
    goto LABEL_94;
  v156 = (Il2CppObject *)Item;
  Item = sub_1C94140(int___TypeInfo, *(unsigned int *)(Item + 24));
  monitor = v156[1].monitor;
  v158 = Item;
  if ( (int)monitor >= 1 )
  {
    v159 = 0;
    while ( v159 < (unsigned int)monitor )
    {
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               battleMissionValueDict,
               *((_DWORD *)&v156[2].klass + v159),
               (const MethodInfo_34ABD80 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !v158 )
        goto LABEL_94;
      if ( v159 >= *(unsigned int *)(v158 + 24) )
        break;
      *(_DWORD *)(v158 + 32 + 4 * v159) = Item;
      LODWORD(monitor) = v156[1].monitor;
      if ( (__int64)++v159 >= (int)monitor )
        goto LABEL_87;
    }
    goto LABEL_93;
  }
LABEL_87:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17161/*"battleMissionTargetIds"*/,
    v156,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17162/*"battleMissionTargetValues"*/,
    (Il2CppObject *)v158,
    (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v160 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C942E4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v160, 0);
  if ( !v160 )
    goto LABEL_94;
  v161 = MiniMessagePack_MiniMessagePacker__PackClass(v160, (Il2CppObject *)v29, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v162 = CatAndMouseGame__CatGame5Bytes(v161, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v163 = System_Convert__ToBase64String(v162, 0);
  RequestBase__addField_45016480((RequestBase_o *)this, (System_String_o *)StringLiteral_23305/*"result"*/, v163, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


void BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4D2E312 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    byte_4D2E312 = 1;
  }
  memset(&v4, 0, sizeof(v4));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C942F0(0, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_3521024 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v4,
            (const MethodInfo_361F50C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v4,
    (const MethodInfo_361F62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4D2E30F & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_9151/*"MockBattleResultRequest"*/);
    byte_4D2E30F = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9151/*"MockBattleResultRequest"*/, 0);
}


System_String_o *BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4D2E30E & 1) == 0 )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&StringLiteral_17136/*"battle/result"*/);
    byte_4D2E30E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64417744(BaseUrl, (System_String_o *)StringLiteral_17136/*"battle/result"*/, 0);
}


void BattleResultRequest__requestCompleted(
        BattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4D2E311 & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&ResponseCommandKind_TypeInfo);
    sub_1C94098(&ServantCommentManager_TypeInfo);
    sub_1C94098(&StringLiteral_22424/*"ng"*/);
    byte_4D2E311 = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(22, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45012660(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__UpdateChapter(0);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22424/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}


void BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Int32_array_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Int32_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct BattleResultRequest_RaidResult_array *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct BattleResultRequest_SuperBossResult_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  struct System_Int32_array *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  System_Collections_Generic_Dictionary_object__object__o *v52; // x20
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  System_Collections_Generic_List_object__o *v59; // x20
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  System_Collections_Generic_Dictionary_int__int__o *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  int32_t v74; // w2
  int32_t v75; // w3
  System_String_o *v76; // x4
  int32_t v77; // w5
  int64_t v78; // x6
  System_String_o *v79; // x7
  struct System_Int32_array *v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  struct System_Int64_array *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  struct System_Int32_array *v94; // x0
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x4
  int32_t v98; // w5
  int64_t v99; // x6
  System_String_o *v100; // x7

  if ( (byte_4D2E315 & 1) == 0 )
  {
    sub_1C94098(&BattleData_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C94098(&int_____TypeInfo);
    sub_1C94098(&int___TypeInfo);
    sub_1C94098(&long___TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1C94098(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_1C94098(&BattleResultRequest_RaidResult___TypeInfo);
    sub_1C94098(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2E315 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.scores, v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.action, v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct System_Int32_array_array *)sub_1C94140(int_____TypeInfo, 0);
  this->fields.voicePlayedArray = v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.voicePlayedArray, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  this->fields.aliveUniqueIds = v24;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.aliveUniqueIds, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (struct BattleResultRequest_RaidResult_array *)sub_1C94140(BattleResultRequest_RaidResult___TypeInfo, 0);
  this->fields.raidResult = v31;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.raidResult, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (struct BattleResultRequest_SuperBossResult_array *)sub_1C94140(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0);
  this->fields.superBossResult = v38;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.superBossResult, (int32_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  this->fields.usedTurnArray = v45;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.usedTurnArray, (int32_t)v45, v46, v47, v48, v49, v50, v51);
  this->fields.recordType = 1;
  v52 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v52,
    (const MethodInfo_3520244 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v52;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.recordJson, (int32_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v59;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.firstNpPlayList, (int32_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v66,
    (const MethodInfo_34AB458 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v66;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.usedEquipSkillDict,
    (int32_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.svtCommonFlagDict,
    (int32_t)SavedServantCommonFlagDict,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  this->fields.skillShiftUniqueIds = v80;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillShiftUniqueIds,
    (int32_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = (struct System_Int64_array *)sub_1C94140(long___TypeInfo, 0);
  this->fields.skillShiftNpcSvtIds = v87;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.skillShiftNpcSvtIds,
    (int32_t)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v94 = (struct System_Int32_array *)sub_1C94140(int___TypeInfo, 0);
  this->fields.routeSelect = v94;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.routeSelect, (int32_t)v94, v95, v96, v97, v98, v99, v100);
  System_Object___ctor((Il2CppObject *)this, 0);
}


uint32_t BattleResultRequest_Argument__ConvertBattleStatus(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  BattleResultRequest_Argument_o *v2; // x19
  struct BattleResultRequest_RaidResult_array *raidResult; // x8
  int max_length; // w9
  int64_t v5; // x20
  int v6; // w10
  __int64 v7; // x11
  int *v8; // x12
  struct BattleResultRequest_SuperBossResult_array *superBossResult; // x8
  int v10; // w9
  int64_t v11; // x21
  int v12; // w10
  __int64 v13; // x11
  int *v14; // x12
  struct System_Int32_array *aliveUniqueIds; // x11
  __int64 max_length_low; // x8
  __int64 v17; // x9
  __int64 v18; // x10
  int32_t *m_Items; // x11
  __int64 v20; // t1
  __int64 v21; // x8
  int64_t v22; // x22
  NetworkManager_c *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_65465148; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Byte_array *v33; // x19

  v2 = this;
  if ( (byte_4D2E313 & 1) == 0 )
  {
    sub_1C94098(&Crc32_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_byte___);
    this = (BattleResultRequest_Argument_o *)sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2E313 = 1;
  }
  raidResult = v2->fields.raidResult;
  if ( !raidResult )
    goto LABEL_37;
  max_length = raidResult->max_length;
  v5 = -4231125;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( max_length == v6 )
LABEL_36:
        sub_1C942F8(this);
      v8 = (int *)raidResult->m_Items[v6];
      if ( !v8 )
        goto LABEL_37;
      ++v6;
      v7 += v8[6] + (__int64)v8[5] + v8[4];
    }
    while ( max_length != v6 );
    v5 = v7 - 4231125;
  }
  superBossResult = v2->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_37;
  v10 = superBossResult->max_length;
  v11 = -2469110;
  if ( v10 >= 1 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      if ( v10 == v12 )
        goto LABEL_36;
      v14 = (int *)superBossResult->m_Items[v12];
      if ( !v14 )
        goto LABEL_37;
      ++v12;
      v13 += v14[6] + (__int64)v14[4] + v14[5];
    }
    while ( v10 != v12 );
    v11 = v13 - 2469110;
  }
  aliveUniqueIds = v2->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_37:
    sub_1C942F0(this, method);
  max_length_low = LODWORD(aliveUniqueIds->max_length);
  if ( max_length_low << 32 < 1 )
  {
    v22 = 0;
  }
  else
  {
    v17 = 0;
    v18 = (int)max_length_low;
    m_Items = aliveUniqueIds->m_Items;
    do
    {
      if ( !max_length_low )
        goto LABEL_36;
      v20 = *m_Items++;
      --v18;
      --max_length_low;
      v17 += v20;
    }
    while ( v18 );
    if ( v17 >= 0 )
      v21 = v17;
    else
      v21 = v17 + 1;
    v22 = v21 >> 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4D2633A )
  {
    sub_1C94098(&NetworkManager_TypeInfo);
    byte_4D2633A = 1;
  }
  v23 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v23 = NetworkManager_TypeInfo;
  }
  Bytes_65465148 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(
                                                                          v23->static_fields->userIdNumber
                                                                        + v2->fields.battleResult,
                                                                          0);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(v5, 0);
  v26 = System_Linq_Enumerable__Concat_byte_(
          Bytes_65465148,
          v25,
          (const MethodInfo_31B8D60 *)Method_System_Linq_Enumerable_Concat_byte___);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(v22, 0);
  v28 = System_Linq_Enumerable__Concat_byte_(
          v26,
          v27,
          (const MethodInfo_31B8D60 *)Method_System_Linq_Enumerable_Concat_byte___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0);
  v30 = System_Linq_Enumerable__Concat_byte_(
          v28,
          v29,
          (const MethodInfo_31B8D60 *)Method_System_Linq_Enumerable_Concat_byte___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65465148(v11, 0);
  v32 = System_Linq_Enumerable__Concat_byte_(
          v30,
          v31,
          (const MethodInfo_31B8D60 *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = System_Linq_Enumerable__ToArray_byte_(
          v32,
          (const MethodInfo_31DC604 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  return Crc32__Compute(v33, 0);
}


System_String_o *BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  BattleResultRequest_Argument_o *v2; // x19
  struct System_Int32_array_array *voicePlayedArray; // x8
  BattleResultRequest_Argument_o *v4; // x21
  unsigned __int64 v5; // x25
  unsigned __int64 max_length_low; // x9
  System_Int32_array *v7; // x29
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleResultRequest_Argument_o *v14; // x20
  int32_t v15; // w1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w1
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  GrandQuestFolderBoardItem_o *p_raidResult; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  int32_t v55; // w1
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t v68; // w1
  int32_t v69; // w2
  int32_t v70; // w3
  System_String_o *v71; // x4
  int32_t v72; // w5
  int64_t v73; // x6
  System_String_o *v74; // x7

  v2 = this;
  if ( (byte_4D2E314 & 1) == 0 )
  {
    sub_1C94098(&string___TypeInfo);
    sub_1C94098(&StringLiteral_857/*",["*/);
    sub_1C94098(&StringLiteral_808/*","*/);
    sub_1C94098(&StringLiteral_15861/*"["*/);
    sub_1C94098(&StringLiteral_1/*""*/);
    this = (BattleResultRequest_Argument_o *)sub_1C94098(&StringLiteral_16112/*"]"*/);
    byte_4D2E314 = 1;
  }
  voicePlayedArray = v2->fields.voicePlayedArray;
  v4 = (BattleResultRequest_Argument_o *)StringLiteral_1/*""*/;
  if ( voicePlayedArray )
  {
    v5 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(voicePlayedArray->max_length);
      if ( (__int64)v5 >= (int)max_length_low )
        break;
      if ( v5 >= max_length_low )
        goto LABEL_33;
      v7 = voicePlayedArray->m_Items[v5];
      if ( v7 && LODWORD(v7->max_length) == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v4, 0) )
        {
          this = (BattleResultRequest_Argument_o *)sub_1C94140(string___TypeInfo, 5);
          if ( !this )
            goto LABEL_31;
          v14 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v15 = StringLiteral_15861/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15861/*"["*/;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.scores, v15, v8, v9, v10, v11, v12, v13);
          if ( !LODWORD(v7->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0);
          if ( v14->fields.battleResult <= 1u )
            goto LABEL_33;
          v14->fields.action = (struct System_String_o *)this;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14->fields.action, (int32_t)this, v16, v17, v18, v19, v20, v21);
          if ( v14->fields.battleResult <= 2u )
            goto LABEL_33;
          v28 = StringLiteral_808/*","*/;
          v14->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_808/*","*/;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14->fields.voicePlayedArray, v28, v22, v23, v24, v25, v26, v27);
          if ( LODWORD(v7->max_length) <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0);
          if ( v14->fields.battleResult <= 3u )
            goto LABEL_33;
          v14->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v14->fields.aliveUniqueIds,
            (int32_t)this,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          if ( v14->fields.battleResult <= 4u )
            goto LABEL_33;
          v41 = StringLiteral_16112/*"]"*/;
          v14->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16112/*"]"*/;
          p_raidResult = (GrandQuestFolderBoardItem_o *)&v14->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1C94140(string___TypeInfo, 6);
          if ( !this )
            goto LABEL_31;
          v14 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v4;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.scores, (int32_t)v4, v43, v44, v45, v46, v47, v48);
          if ( v14->fields.battleResult <= 1u )
            goto LABEL_33;
          v55 = StringLiteral_857/*",["*/;
          v14->fields.action = (struct System_String_o *)StringLiteral_857/*",["*/;
          sub_1C9403C((GrandQuestFolderBoardItem_o *)&v14->fields.action, v55, v49, v50, v51, v52, v53, v54);
          if ( !LODWORD(v7->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0);
          if ( v14->fields.battleResult <= 2u )
            goto LABEL_33;
          v14->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&v14->fields.voicePlayedArray,
            (int32_t)this,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          if ( v14->fields.battleResult <= 3u
            || (v68 = StringLiteral_808/*","*/,
                v14->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_808/*","*/,
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&v14->fields.aliveUniqueIds,
                  v68,
                  v62,
                  v63,
                  v64,
                  v65,
                  v66,
                  v67),
                LODWORD(v7->max_length) <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0),
                v14->fields.battleResult <= 4u)
            || (v14->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1C9403C(
                  (GrandQuestFolderBoardItem_o *)&v14->fields.raidResult,
                  (int32_t)this,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74),
                v14->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1C942F8(this);
          }
          v41 = StringLiteral_16112/*"]"*/;
          v14->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16112/*"]"*/;
          p_raidResult = (GrandQuestFolderBoardItem_o *)&v14->fields.superBossResult;
        }
        sub_1C9403C(p_raidResult, v41, v35, v36, v37, v38, v39, v40);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_64458276((System_String_array *)v14, 0);
        v4 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v5;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1C942F0(this, method);
    }
  }
  return System_String__Concat_64456008(
           (System_String_o *)StringLiteral_15861/*"["*/,
           (System_String_o *)v4,
           (System_String_o *)StringLiteral_16112/*"]"*/,
           0);
}


void BattleResultRequest_RaidResult___ctor(
        BattleResultRequest_RaidResult_o *this,
        int32_t inUniqueId,
        int32_t inDay,
        int32_t inAddDamage,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.uniqueId = inUniqueId;
  this->fields.day = inDay;
  this->fields.addDamage = inAddDamage;
}


int64_t BattleResultRequest_RaidResult__getStatusLong(BattleResultRequest_RaidResult_o *this, const MethodInfo *method)
{
  return this->fields.day + (__int64)this->fields.addDamage + this->fields.uniqueId;
}


void BattleResultRequest_SuperBossResult___ctor(
        BattleResultRequest_SuperBossResult_o *this,
        int32_t inUniqueId,
        int32_t inSuperBossId,
        int32_t inAddDamage,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.superBossId = inSuperBossId;
  this->fields.uniqueId = inUniqueId;
  this->fields.addDamage = inAddDamage;
}


int64_t BattleResultRequest_SuperBossResult__getStatusLong(
        BattleResultRequest_SuperBossResult_o *this,
        const MethodInfo *method)
{
  return this->fields.superBossId + (__int64)this->fields.addDamage + this->fields.uniqueId;
}


void BattleResultRequest___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2E316 & 1) == 0 )
  {
    sub_1C94098(&BattleResultRequest___c_TypeInfo);
    byte_4D2E316 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleResultRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultRequest___c_TypeInfo->static_fields->__9 = (struct BattleResultRequest___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleResultRequest___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleResultRequest___c___ctor(BattleResultRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleResultRequest___c___beginRequest_b__5_0(
        BattleResultRequest___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}