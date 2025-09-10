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
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  __int64 Item; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  Il2CppObject *v42; // x0
  Il2CppObject *v43; // x0
  Il2CppObject *v44; // x0
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  Il2CppObject *v48; // x0
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  Il2CppObject *v52; // x0
  System_Object_array *v53; // x0
  Il2CppObject *v54; // x0
  Il2CppObject *v55; // x0
  __int64 v56; // x2
  int max_length; // w8
  int v58; // w9
  __int64 v59; // x22
  BattleResultRequest_RaidResult_o *v60; // x10
  int v61; // w8
  int v62; // w9
  __int64 v63; // x20
  BattleResultRequest_SuperBossResult_o *v64; // x10
  __int64 max_length_low; // x8
  __int64 v66; // x23
  __int64 v67; // x9
  int32_t *m_Items; // x10
  __int64 v69; // t1
  NetworkManager_c *v70; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_64507956; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  __int64 v74; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v80; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  System_Byte_array *v82; // x19
  __int64 v83; // x2
  __int64 v84; // x3
  __int64 v85; // x4
  Il2CppObject *v86; // x0
  System_Int32_array_array *v87; // x10
  il2cpp_array_size_t v88; // x8
  System_String_o *v89; // x22
  unsigned __int64 v90; // x25
  System_Int32_array *v91; // x29
  const MethodInfo *v92; // x3
  __int64 v93; // x19
  int32_t v94; // w1
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x3
  int32_t v97; // w1
  const MethodInfo *v98; // x3
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  CGThumbnailListItem_o *v101; // x0
  const MethodInfo *v102; // x3
  const MethodInfo *v103; // x3
  int32_t v104; // w1
  const MethodInfo *v105; // x3
  const MethodInfo *v106; // x3
  int32_t v107; // w1
  const MethodInfo *v108; // x3
  Il2CppObject *v109; // x0
  Il2CppObject *v110; // x0
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  Il2CppObject *v114; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  BattleResultRequest___c_c *v116; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x19
  System_Func_int__int__o *_9__5_0; // x22
  Il2CppObject *v119; // x23
  struct BattleResultRequest___c_StaticFields *static_fields; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v123; // x0
  Il2CppObject *v124; // x19
  void *monitor; // x8
  __int64 v126; // x22
  unsigned __int64 v127; // x23
  MiniMessagePack_MiniMessagePacker_o *v128; // x19
  System_Byte_array *v129; // x19
  System_Byte_array *v130; // x19
  System_String_o *v131; // x0
  int64_t v133; // [xsp+10h] [xbp-C0h]
  int32_t v139; // [xsp+58h] [xbp-78h] BYREF
  int32_t v140; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v141; // [xsp+60h] [xbp-70h] BYREF
  int32_t v142; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v143; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C28D01 & 1) == 0 )
  {
    sub_1C2D490(&CatAndMouseGame_TypeInfo);
    sub_1C2D490(&System_Convert_TypeInfo);
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_byte___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C2D490(&System_Func_int__int__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1C2D490(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&Method_BattleResultRequest___c__beginRequest_b__5_0__);
    sub_1C2D490(&BattleResultRequest___c_TypeInfo);
    sub_1C2D490(&uint_TypeInfo);
    sub_1C2D490(&StringLiteral_23132/*"routeSelect"*/);
    sub_1C2D490(&StringLiteral_23055/*"result"*/);
    sub_1C2D490(&StringLiteral_22967/*"recordValueJson"*/);
    sub_1C2D490(&StringLiteral_17694/*"calledEnemyUniqueIds"*/);
    sub_1C2D490(&StringLiteral_23498/*"skillShiftNpcSvtIds"*/);
    sub_1C2D490(&StringLiteral_22914/*"raidResult"*/);
    sub_1C2D490(&StringLiteral_24468/*"useTreasureDevices"*/);
    sub_1C2D490(&StringLiteral_22966/*"recordType"*/);
    sub_1C2D490(&StringLiteral_17075/*"battleMissionTargetIds"*/);
    sub_1C2D490(&StringLiteral_860/*",["*/);
    sub_1C2D490(&StringLiteral_23499/*"skillShiftUniqueIds"*/);
    sub_1C2D490(&StringLiteral_18467/*"dataLostUniqueIds"*/);
    sub_1C2D490(&StringLiteral_24472/*"usedEquipSkillList"*/);
    sub_1C2D490(&StringLiteral_18932/*"elapsedTurn"*/);
    sub_1C2D490(&StringLiteral_22947/*"reachedWave"*/);
    sub_1C2D490(&StringLiteral_24473/*"usedTurnList"*/);
    sub_1C2D490(&StringLiteral_23842/*"svtCommonFlagList"*/);
    sub_1C2D490(&StringLiteral_17076/*"battleMissionTargetValues"*/);
    sub_1C2D490(&StringLiteral_23190/*"scores"*/);
    sub_1C2D490(&StringLiteral_24762/*"waveInfo"*/);
    sub_1C2D490(&StringLiteral_17085/*"battleStatus"*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_23990/*"tdPlayed"*/);
    sub_1C2D490(&StringLiteral_24687/*"voicePlayedList"*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_24801/*"winResult"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_23825/*"superBossResult"*/);
    sub_1C2D490(&StringLiteral_16055/*"]"*/);
    sub_1C2D490(&StringLiteral_17072/*"battleId"*/);
    sub_1C2D490(&StringLiteral_17077/*"battleResult"*/);
    sub_1C2D490(&StringLiteral_16650/*"action"*/);
    sub_1C2D490(&StringLiteral_16731/*"aliveUniqueIds"*/);
    byte_4C28D01 = 1;
  }
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v133 = battleId;
  v143 = battleId;
  Item = j_il2cpp_value_box_0(long_TypeInfo, &v143, v30, v31, v32);
  if ( !v29 )
    goto LABEL_94;
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17072/*"battleId"*/,
    (Il2CppObject *)Item,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v142 = battleResult;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v142, v35, v36, v37);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17077/*"battleResult"*/,
    v38,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v141 = winResult;
  v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v141, v39, v40, v41);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24801/*"winResult"*/,
    v42,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23190/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_16650/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v43 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_22914/*"raidResult"*/,
    v43,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v44 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23825/*"superBossResult"*/,
    v44,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v140 = elapsedTurn;
  v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v140, v45, v46, v47);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_18932/*"elapsedTurn"*/,
    v48,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v139 = recordType;
  v52 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v139, v49, v50, v51);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_22966/*"recordType"*/,
    v52,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_22967/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_94;
  v53 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_378B6DC *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v54 = (Il2CppObject *)JsonManager__toJson(&v53->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23990/*"tdPlayed"*/,
    v54,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_94;
  v55 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24468/*"useTreasureDevices"*/,
    v55,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24472/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23842/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23499/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23498/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17694/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23132/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_18467/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_94;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v59 = 0;
    if ( !superBossResult )
      goto LABEL_94;
  }
  else
  {
    v58 = 0;
    v59 = 0;
    do
    {
      if ( max_length == v58 )
        goto LABEL_93;
      v60 = raidResult->m_Items[v58];
      if ( !v60 )
        goto LABEL_94;
      ++v58;
      v59 += v60->fields.addDamage + (__int64)v60->fields.day + v60->fields.uniqueId;
    }
    while ( max_length != v58 );
    if ( !superBossResult )
LABEL_94:
      sub_1C2D6EC(Item, v34);
  }
  v61 = superBossResult->max_length;
  if ( v61 >= 1 )
  {
    v62 = 0;
    v63 = 0;
    while ( v61 != v62 )
    {
      v64 = superBossResult->m_Items[v62];
      if ( !v64 )
        goto LABEL_94;
      ++v62;
      v63 += v64->fields.addDamage + (__int64)v64->fields.superBossId + v64->fields.uniqueId;
      if ( v61 == v62 )
        goto LABEL_24;
    }
LABEL_93:
    sub_1C2D6F4(Item, v34, v56);
  }
  v63 = 0;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_16731/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_94;
  max_length_low = LODWORD(aliveUniqueIds->max_length);
  if ( max_length_low << 32 >= 1 )
  {
    v66 = 0;
    v67 = (int)max_length_low;
    m_Items = aliveUniqueIds->m_Items;
    while ( max_length_low )
    {
      v69 = *m_Items++;
      --v67;
      --max_length_low;
      v66 += v69;
      if ( !v67 )
        goto LABEL_31;
    }
    goto LABEL_93;
  }
  v66 = 0;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v70 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v70 = NetworkManager_TypeInfo;
  }
  Bytes_64507956 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(
                                                                          v70->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0);
  v72 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(v59 - 4231125, 0);
  v73 = System_Linq_Enumerable__Concat_byte_(
          Bytes_64507956,
          v72,
          (const MethodInfo_30EB208 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v66 >= 0 )
    v74 = v66;
  else
    v74 = v66 + 1;
  v75 = v73;
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(v74 >> 1, 0);
  v77 = System_Linq_Enumerable__Concat_byte_(
          v75,
          v76,
          (const MethodInfo_30EB208 *)Method_System_Linq_Enumerable_Concat_byte___);
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(
                                                               v133 - 0x7FFFFFFF,
                                                               0);
  v79 = System_Linq_Enumerable__Concat_byte_(
          v77,
          v78,
          (const MethodInfo_30EB208 *)Method_System_Linq_Enumerable_Concat_byte___);
  v80 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(v63 - 2469110, 0);
  v81 = System_Linq_Enumerable__Concat_byte_(
          v79,
          v80,
          (const MethodInfo_30EB208 *)Method_System_Linq_Enumerable_Concat_byte___);
  v82 = System_Linq_Enumerable__ToArray_byte_(
          v81,
          (const MethodInfo_310DD44 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v143) = Crc32__Compute(v82, 0);
  v86 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v143, v83, v84, v85);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17085/*"battleStatus"*/,
    v86,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v87 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v88 = voicePlayedArray->max_length;
    v89 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v88 >= 1 )
    {
      v90 = 0;
      while ( v90 < (unsigned int)v88 )
      {
        v91 = voicePlayedArray->m_Items[v90];
        if ( v91 && LODWORD(v91->max_length) == 2 )
        {
          if ( System_String__IsNullOrEmpty(v89, 0) )
          {
            Item = sub_1C2D538(string___TypeInfo, 5);
            if ( !Item )
              goto LABEL_94;
            v93 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            v94 = StringLiteral_15801/*"["*/;
            *(_QWORD *)(Item + 32) = StringLiteral_15801/*"["*/;
            sub_1C2D434((CGThumbnailListItem_o *)(Item + 32), v94, v56, v92);
            if ( !LODWORD(v91->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v91 + 32, 0);
            if ( *(_DWORD *)(v93 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v93 + 40) = Item;
            sub_1C2D434((CGThumbnailListItem_o *)(v93 + 40), Item, v56, v95);
            if ( *(_DWORD *)(v93 + 24) <= 2u )
              goto LABEL_93;
            v97 = StringLiteral_811/*","*/;
            *(_QWORD *)(v93 + 48) = StringLiteral_811/*","*/;
            sub_1C2D434((CGThumbnailListItem_o *)(v93 + 48), v97, v56, v96);
            if ( LODWORD(v91->max_length) <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v91 + 36, 0);
            if ( *(_DWORD *)(v93 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v93 + 56) = Item;
            sub_1C2D434((CGThumbnailListItem_o *)(v93 + 56), Item, v56, v98);
            if ( *(_DWORD *)(v93 + 24) <= 4u )
              goto LABEL_93;
            v100 = StringLiteral_16055/*"]"*/;
            *(_QWORD *)(v93 + 64) = StringLiteral_16055/*"]"*/;
            v101 = (CGThumbnailListItem_o *)(v93 + 64);
          }
          else
          {
            Item = sub_1C2D538(string___TypeInfo, 6);
            if ( !Item )
              goto LABEL_94;
            v93 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            *(_QWORD *)(Item + 32) = v89;
            sub_1C2D434((CGThumbnailListItem_o *)(Item + 32), (int32_t)v89, v56, v102);
            if ( *(_DWORD *)(v93 + 24) <= 1u )
              goto LABEL_93;
            v104 = StringLiteral_860/*",["*/;
            *(_QWORD *)(v93 + 40) = StringLiteral_860/*",["*/;
            sub_1C2D434((CGThumbnailListItem_o *)(v93 + 40), v104, v56, v103);
            if ( !LODWORD(v91->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v91 + 32, 0);
            if ( *(_DWORD *)(v93 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v93 + 48) = Item;
            sub_1C2D434((CGThumbnailListItem_o *)(v93 + 48), Item, v56, v105);
            if ( *(_DWORD *)(v93 + 24) <= 3u )
              goto LABEL_93;
            v107 = StringLiteral_811/*","*/;
            *(_QWORD *)(v93 + 56) = StringLiteral_811/*","*/;
            sub_1C2D434((CGThumbnailListItem_o *)(v93 + 56), v107, v56, v106);
            if ( LODWORD(v91->max_length) <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v91 + 36, 0);
            if ( *(_DWORD *)(v93 + 24) <= 4u )
              goto LABEL_93;
            *(_QWORD *)(v93 + 64) = Item;
            sub_1C2D434((CGThumbnailListItem_o *)(v93 + 64), Item, v56, v108);
            if ( *(_DWORD *)(v93 + 24) <= 5u )
              goto LABEL_93;
            v100 = StringLiteral_16055/*"]"*/;
            *(_QWORD *)(v93 + 72) = StringLiteral_16055/*"]"*/;
            v101 = (CGThumbnailListItem_o *)(v93 + 72);
          }
          sub_1C2D434(v101, v100, v56, v99);
          Item = (__int64)System_String__Concat_63498380((System_String_array *)v93, 0);
          v87 = voicePlayedArray;
          v89 = (System_String_o *)Item;
        }
        LODWORD(v88) = v87->max_length;
        if ( (__int64)++v90 >= (int)v88 )
          goto LABEL_70;
      }
      goto LABEL_93;
    }
LABEL_70:
    v109 = (Il2CppObject *)System_String__Concat_63496112(
                             (System_String_o *)StringLiteral_15801/*"["*/,
                             v89,
                             (System_String_o *)StringLiteral_16055/*"]"*/,
                             0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v29,
      (Il2CppObject *)StringLiteral_24687/*"voicePlayedList"*/,
      v109,
      (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24473/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v110 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24762/*"waveInfo"*/,
    v110,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  LODWORD(v143) = waveNum;
  v114 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v143, v111, v112, v113);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_22947/*"reachedWave"*/,
    v114,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !battleMissionValueDict )
    goto LABEL_94;
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           battleMissionValueDict,
           (const MethodInfo_33D8488 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v116 = BattleResultRequest___c_TypeInfo;
  v117 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !BattleResultRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultRequest___c_TypeInfo);
    v116 = BattleResultRequest___c_TypeInfo;
  }
  _9__5_0 = v116->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v116->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v116);
      v116 = BattleResultRequest___c_TypeInfo;
    }
    v119 = (Il2CppObject *)v116->static_fields->__9;
    _9__5_0 = (System_Func_int__int__o *)sub_1C2D6DC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__5_0, v119, Method_BattleResultRequest___c__beginRequest_b__5_0__, 0);
    static_fields = BattleResultRequest___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v121, v122);
  }
  v123 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                                v117,
                                                                (System_Func_TSource__TKey__o *)_9__5_0,
                                                                (const MethodInfo_30FDEF4 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Item = (__int64)System_Linq_Enumerable__ToArray_int_(
                    v123,
                    (const MethodInfo_310DE54 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Item )
    goto LABEL_94;
  v124 = (Il2CppObject *)Item;
  Item = sub_1C2D538(int___TypeInfo, *(unsigned int *)(Item + 24));
  monitor = v124[1].monitor;
  v126 = Item;
  if ( (int)monitor >= 1 )
  {
    v127 = 0;
    while ( v127 < (unsigned int)monitor )
    {
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               battleMissionValueDict,
               *((_DWORD *)&v124[2].klass + v127),
               (const MethodInfo_33D8728 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !v126 )
        goto LABEL_94;
      if ( v127 >= *(unsigned int *)(v126 + 24) )
        break;
      *(_DWORD *)(v126 + 32 + 4 * v127) = Item;
      LODWORD(monitor) = v124[1].monitor;
      if ( (__int64)++v127 >= (int)monitor )
        goto LABEL_87;
    }
    goto LABEL_93;
  }
LABEL_87:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17075/*"battleMissionTargetIds"*/,
    v124,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17076/*"battleMissionTargetValues"*/,
    (Il2CppObject *)v126,
    (const MethodInfo_344A328 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v128 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C2D6DC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v128, 0);
  if ( !v128 )
    goto LABEL_94;
  v129 = MiniMessagePack_MiniMessagePacker__PackClass(v128, (Il2CppObject *)v29, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v130 = CatAndMouseGame__CatGame5Bytes(v129, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v131 = System_Convert__ToBase64String(v130, 0);
  RequestBase__addField_44009064((RequestBase_o *)this, (System_String_o *)StringLiteral_23055/*"result"*/, v131, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


void BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C28D03 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    byte_4C28D03 = 1;
  }
  memset(&v4, 0, sizeof(v4));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C2D6EC(0, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v4,
            (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v4,
    (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C28D00 & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_9124/*"MockBattleResultRequest"*/);
    byte_4C28D00 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9124/*"MockBattleResultRequest"*/, 0);
}


System_String_o *BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C28CFF & 1) == 0 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&StringLiteral_17051/*"battle/result"*/);
    byte_4C28CFF = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63457864(BaseUrl, (System_String_o *)StringLiteral_17051/*"battle/result"*/, 0);
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

  if ( (byte_4C28D02 & 1) == 0 )
  {
    sub_1C2D490(&JsonManager_TypeInfo);
    sub_1C2D490(&ResponseCommandKind_TypeInfo);
    sub_1C2D490(&ServantCommentManager_TypeInfo);
    sub_1C2D490(&StringLiteral_22195/*"ng"*/);
    byte_4C28D02 = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(22, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44004292(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
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
    v8 = (System_String_o *)StringLiteral_22195/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}


void BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Int32_array_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Int32_array *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct BattleResultRequest_RaidResult_array *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct BattleResultRequest_SuperBossResult_array *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_Dictionary_object__object__o *v24; // x20
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_Collections_Generic_Dictionary_int__int__o *v30; // x20
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Int32_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  struct System_Int64_array *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Int32_array *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3

  if ( (byte_4C28D06 & 1) == 0 )
  {
    sub_1C2D490(&BattleData_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C2D490(&int_____TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&long___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_1C2D490(&BattleResultRequest_RaidResult___TypeInfo);
    sub_1C2D490(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C28D06 = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scores, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.action, v6, v7, v8);
  v9 = (struct System_Int32_array_array *)sub_1C2D538(int_____TypeInfo, 0);
  this->fields.voicePlayedArray = v9;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.voicePlayedArray, (int32_t)v9, v10, v11);
  v12 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  this->fields.aliveUniqueIds = v12;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.aliveUniqueIds, (int32_t)v12, v13, v14);
  v15 = (struct BattleResultRequest_RaidResult_array *)sub_1C2D538(BattleResultRequest_RaidResult___TypeInfo, 0);
  this->fields.raidResult = v15;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.raidResult, (int32_t)v15, v16, v17);
  v18 = (struct BattleResultRequest_SuperBossResult_array *)sub_1C2D538(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0);
  this->fields.superBossResult = v18;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.superBossResult, (int32_t)v18, v19, v20);
  v21 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  this->fields.usedTurnArray = v21;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.usedTurnArray, (int32_t)v21, v22, v23);
  this->fields.recordType = 1;
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v24,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v24;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.recordJson, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v27;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.firstNpPlayList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_33D7E00 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v30;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.usedEquipSkillDict, (int32_t)v30, v31, v32);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.svtCommonFlagDict, (int32_t)SavedServantCommonFlagDict, v34, v35);
  v36 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  this->fields.skillShiftUniqueIds = v36;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillShiftUniqueIds, (int32_t)v36, v37, v38);
  v39 = (struct System_Int64_array *)sub_1C2D538(long___TypeInfo, 0);
  this->fields.skillShiftNpcSvtIds = v39;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.skillShiftNpcSvtIds, (int32_t)v39, v40, v41);
  v42 = (struct System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
  this->fields.routeSelect = v42;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.routeSelect, (int32_t)v42, v43, v44);
  System_Object___ctor((Il2CppObject *)this, 0);
}


uint32_t BattleResultRequest_Argument__ConvertBattleStatus(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultRequest_Argument_o *v3; // x19
  struct BattleResultRequest_RaidResult_array *raidResult; // x8
  int max_length; // w9
  int64_t v6; // x20
  int v7; // w10
  __int64 v8; // x11
  int *v9; // x12
  struct BattleResultRequest_SuperBossResult_array *superBossResult; // x8
  int v11; // w9
  int64_t v12; // x21
  int v13; // w10
  __int64 v14; // x11
  int *v15; // x12
  struct System_Int32_array *aliveUniqueIds; // x11
  __int64 max_length_low; // x8
  __int64 v18; // x9
  __int64 v19; // x10
  int32_t *m_Items; // x11
  __int64 v21; // t1
  __int64 v22; // x8
  int64_t v23; // x22
  NetworkManager_c *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_64507956; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Byte_array *v34; // x19

  v3 = this;
  if ( (byte_4C28D04 & 1) == 0 )
  {
    sub_1C2D490(&Crc32_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToArray_byte___);
    this = (BattleResultRequest_Argument_o *)sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C28D04 = 1;
  }
  raidResult = v3->fields.raidResult;
  if ( !raidResult )
    goto LABEL_37;
  max_length = raidResult->max_length;
  v6 = -4231125;
  if ( max_length >= 1 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      if ( max_length == v7 )
LABEL_36:
        sub_1C2D6F4(this, method, v2);
      v9 = (int *)raidResult->m_Items[v7];
      if ( !v9 )
        goto LABEL_37;
      ++v7;
      v8 += v9[6] + (__int64)v9[5] + v9[4];
    }
    while ( max_length != v7 );
    v6 = v8 - 4231125;
  }
  superBossResult = v3->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_37;
  v11 = superBossResult->max_length;
  v12 = -2469110;
  if ( v11 >= 1 )
  {
    v13 = 0;
    v14 = 0;
    do
    {
      if ( v11 == v13 )
        goto LABEL_36;
      v15 = (int *)superBossResult->m_Items[v13];
      if ( !v15 )
        goto LABEL_37;
      ++v13;
      v14 += v15[6] + (__int64)v15[4] + v15[5];
    }
    while ( v11 != v13 );
    v12 = v14 - 2469110;
  }
  aliveUniqueIds = v3->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_37:
    sub_1C2D6EC(this, method);
  max_length_low = LODWORD(aliveUniqueIds->max_length);
  if ( max_length_low << 32 < 1 )
  {
    v23 = 0;
  }
  else
  {
    v18 = 0;
    v19 = (int)max_length_low;
    m_Items = aliveUniqueIds->m_Items;
    do
    {
      if ( !max_length_low )
        goto LABEL_36;
      v21 = *m_Items++;
      --v19;
      --max_length_low;
      v18 += v21;
    }
    while ( v19 );
    if ( v18 >= 0 )
      v22 = v18;
    else
      v22 = v18 + 1;
    v23 = v22 >> 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C211E1 )
  {
    sub_1C2D490(&NetworkManager_TypeInfo);
    byte_4C211E1 = 1;
  }
  v24 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v24 = NetworkManager_TypeInfo;
  }
  Bytes_64507956 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(
                                                                          v24->static_fields->userIdNumber
                                                                        + v3->fields.battleResult,
                                                                          0);
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(v6, 0);
  v27 = System_Linq_Enumerable__Concat_byte_(
          Bytes_64507956,
          v26,
          (const MethodInfo_30EB208 *)Method_System_Linq_Enumerable_Concat_byte___);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(v23, 0);
  v29 = System_Linq_Enumerable__Concat_byte_(
          v27,
          v28,
          (const MethodInfo_30EB208 *)Method_System_Linq_Enumerable_Concat_byte___);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(
                                                               v3->fields.battleId - 0x7FFFFFFF,
                                                               0);
  v31 = System_Linq_Enumerable__Concat_byte_(
          v29,
          v30,
          (const MethodInfo_30EB208 *)Method_System_Linq_Enumerable_Concat_byte___);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64507956(v12, 0);
  v33 = System_Linq_Enumerable__Concat_byte_(
          v31,
          v32,
          (const MethodInfo_30EB208 *)Method_System_Linq_Enumerable_Concat_byte___);
  v34 = System_Linq_Enumerable__ToArray_byte_(
          v33,
          (const MethodInfo_310DD44 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  return Crc32__Compute(v34, 0);
}


System_String_o *BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultRequest_Argument_o *v3; // x19
  struct System_Int32_array_array *voicePlayedArray; // x8
  BattleResultRequest_Argument_o *v5; // x21
  unsigned __int64 v6; // x25
  unsigned __int64 max_length_low; // x9
  System_Int32_array *v8; // x29
  const MethodInfo *v9; // x3
  BattleResultRequest_Argument_o *v10; // x20
  int32_t v11; // w1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  CGThumbnailListItem_o *p_raidResult; // x0
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  const MethodInfo *v25; // x3

  v3 = this;
  if ( (byte_4C28D05 & 1) == 0 )
  {
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_860/*",["*/);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_15801/*"["*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    this = (BattleResultRequest_Argument_o *)sub_1C2D490(&StringLiteral_16055/*"]"*/);
    byte_4C28D05 = 1;
  }
  voicePlayedArray = v3->fields.voicePlayedArray;
  v5 = (BattleResultRequest_Argument_o *)StringLiteral_1/*""*/;
  if ( voicePlayedArray )
  {
    v6 = 0;
    while ( 1 )
    {
      max_length_low = LODWORD(voicePlayedArray->max_length);
      if ( (__int64)v6 >= (int)max_length_low )
        break;
      if ( v6 >= max_length_low )
        goto LABEL_33;
      v8 = voicePlayedArray->m_Items[v6];
      if ( v8 && LODWORD(v8->max_length) == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v5, 0) )
        {
          this = (BattleResultRequest_Argument_o *)sub_1C2D538(string___TypeInfo, 5);
          if ( !this )
            goto LABEL_31;
          v10 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v11 = StringLiteral_15801/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15801/*"["*/;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scores, v11, v2, v9);
          if ( !LODWORD(v8->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( v10->fields.battleResult <= 1u )
            goto LABEL_33;
          v10->fields.action = (struct System_String_o *)this;
          sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.action, (int32_t)this, v2, v12);
          if ( v10->fields.battleResult <= 2u )
            goto LABEL_33;
          v14 = StringLiteral_811/*","*/;
          v10->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_811/*","*/;
          sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.voicePlayedArray, v14, v2, v13);
          if ( LODWORD(v8->max_length) <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v8 + 36, 0);
          if ( v10->fields.battleResult <= 3u )
            goto LABEL_33;
          v10->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.aliveUniqueIds, (int32_t)this, v2, v15);
          if ( v10->fields.battleResult <= 4u )
            goto LABEL_33;
          v17 = StringLiteral_16055/*"]"*/;
          v10->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16055/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v10->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1C2D538(string___TypeInfo, 6);
          if ( !this )
            goto LABEL_31;
          v10 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v5;
          sub_1C2D434((CGThumbnailListItem_o *)&this->fields.scores, (int32_t)v5, v2, v19);
          if ( v10->fields.battleResult <= 1u )
            goto LABEL_33;
          v21 = StringLiteral_860/*",["*/;
          v10->fields.action = (struct System_String_o *)StringLiteral_860/*",["*/;
          sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.action, v21, v2, v20);
          if ( !LODWORD(v8->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v8 + 32, 0);
          if ( v10->fields.battleResult <= 2u )
            goto LABEL_33;
          v10->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.voicePlayedArray, (int32_t)this, v2, v22);
          if ( v10->fields.battleResult <= 3u
            || (v24 = StringLiteral_811/*","*/,
                v10->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_811/*","*/,
                sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.aliveUniqueIds, v24, v2, v23),
                LODWORD(v8->max_length) <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v8 + 36, 0),
                v10->fields.battleResult <= 4u)
            || (v10->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1C2D434((CGThumbnailListItem_o *)&v10->fields.raidResult, (int32_t)this, v2, v25),
                v10->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1C2D6F4(this, method, v2);
          }
          v17 = StringLiteral_16055/*"]"*/;
          v10->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16055/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v10->fields.superBossResult;
        }
        sub_1C2D434(p_raidResult, v17, v2, v16);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_63498380((System_String_array *)v10, 0);
        v5 = this;
      }
      voicePlayedArray = v3->fields.voicePlayedArray;
      ++v6;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1C2D6EC(this, method);
    }
  }
  return System_String__Concat_63496112(
           (System_String_o *)StringLiteral_15801/*"["*/,
           (System_String_o *)v5,
           (System_String_o *)StringLiteral_16055/*"]"*/,
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
  const MethodInfo *v3; // x3

  if ( (byte_4C28D07 & 1) == 0 )
  {
    sub_1C2D490(&BattleResultRequest___c_TypeInfo);
    byte_4C28D07 = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(BattleResultRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultRequest___c_TypeInfo->static_fields->__9 = (struct BattleResultRequest___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)BattleResultRequest___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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