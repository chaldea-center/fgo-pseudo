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
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_65014196; // x19
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
  const MethodInfo *v74; // x3
  __int64 v75; // x19
  int32_t v76; // w1
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  int32_t v81; // w1
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  int32_t v86; // w1
  CGThumbnailListItem_o *v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  int32_t v92; // w1
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  int32_t v97; // w1
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  Il2CppObject *v100; // x0
  Il2CppObject *v101; // x0
  Il2CppObject *v102; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  BattleResultRequest___c_c *v104; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x19
  System_Func_int__int__o *_9__5_0; // x22
  Il2CppObject *v107; // x23
  struct BattleResultRequest___c_StaticFields *static_fields; // x0
  int32_t v109; // w2
  const MethodInfo *v110; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v111; // x0
  Il2CppObject *v112; // x19
  void *monitor; // x8
  __int64 v114; // x22
  unsigned __int64 v115; // x23
  MiniMessagePack_MiniMessagePacker_o *v116; // x19
  System_Byte_array *v117; // x19
  System_Byte_array *v118; // x19
  System_String_o *v119; // x0
  int64_t v121; // [xsp+10h] [xbp-C0h]
  int32_t v127; // [xsp+58h] [xbp-78h] BYREF
  int32_t v128; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v129; // [xsp+60h] [xbp-70h] BYREF
  int32_t v130; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v131; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4CB7D49 & 1) == 0 )
  {
    sub_1C6BA08(&CatAndMouseGame_TypeInfo);
    sub_1C6BA08(&System_Convert_TypeInfo);
    sub_1C6BA08(&Crc32_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_byte___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C6BA08(&System_Func_int__int__TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&long_TypeInfo);
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1C6BA08(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Method_BattleResultRequest___c__beginRequest_b__5_0__);
    sub_1C6BA08(&BattleResultRequest___c_TypeInfo);
    sub_1C6BA08(&uint_TypeInfo);
    sub_1C6BA08(&StringLiteral_23249/*"routeSelect"*/);
    sub_1C6BA08(&StringLiteral_23171/*"result"*/);
    sub_1C6BA08(&StringLiteral_23081/*"recordValueJson"*/);
    sub_1C6BA08(&StringLiteral_17715/*"calledEnemyUniqueIds"*/);
    sub_1C6BA08(&StringLiteral_23612/*"skillShiftNpcSvtIds"*/);
    sub_1C6BA08(&StringLiteral_23028/*"raidResult"*/);
    sub_1C6BA08(&StringLiteral_24594/*"useTreasureDevices"*/);
    sub_1C6BA08(&StringLiteral_23080/*"recordType"*/);
    sub_1C6BA08(&StringLiteral_17093/*"battleMissionTargetIds"*/);
    sub_1C6BA08(&StringLiteral_857/*",["*/);
    sub_1C6BA08(&StringLiteral_23613/*"skillShiftUniqueIds"*/);
    sub_1C6BA08(&StringLiteral_18503/*"dataLostUniqueIds"*/);
    sub_1C6BA08(&StringLiteral_24598/*"usedEquipSkillList"*/);
    sub_1C6BA08(&StringLiteral_18980/*"elapsedTurn"*/);
    sub_1C6BA08(&StringLiteral_23061/*"reachedWave"*/);
    sub_1C6BA08(&StringLiteral_24599/*"usedTurnList"*/);
    sub_1C6BA08(&StringLiteral_23958/*"svtCommonFlagList"*/);
    sub_1C6BA08(&StringLiteral_17094/*"battleMissionTargetValues"*/);
    sub_1C6BA08(&StringLiteral_23308/*"scores"*/);
    sub_1C6BA08(&StringLiteral_24895/*"waveInfo"*/);
    sub_1C6BA08(&StringLiteral_17104/*"battleStatus"*/);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    sub_1C6BA08(&StringLiteral_24109/*"tdPlayed"*/);
    sub_1C6BA08(&StringLiteral_24820/*"voicePlayedList"*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    sub_1C6BA08(&StringLiteral_24934/*"winResult"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_23941/*"superBossResult"*/);
    sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    sub_1C6BA08(&StringLiteral_17090/*"battleId"*/);
    sub_1C6BA08(&StringLiteral_17095/*"battleResult"*/);
    sub_1C6BA08(&StringLiteral_16650/*"action"*/);
    sub_1C6BA08(&StringLiteral_16747/*"aliveUniqueIds"*/);
    byte_4CB7D49 = 1;
  }
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v121 = battleId;
  v131 = battleId;
  Item = j_il2cpp_value_box_0(long_TypeInfo, &v131);
  if ( !v29 )
    goto LABEL_94;
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17090/*"battleId"*/,
    (Il2CppObject *)Item,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v130 = battleResult;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17095/*"battleResult"*/,
    v32,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v129 = winResult;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v129);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24934/*"winResult"*/,
    v33,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23308/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_16650/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v34 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23028/*"raidResult"*/,
    v34,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v35 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23941/*"superBossResult"*/,
    v35,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v128 = elapsedTurn;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_18980/*"elapsedTurn"*/,
    v36,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v127 = recordType;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v127);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23080/*"recordType"*/,
    v37,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23081/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_94;
  v38 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v39 = (Il2CppObject *)JsonManager__toJson(&v38->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24109/*"tdPlayed"*/,
    v39,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_94;
  v40 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24594/*"useTreasureDevices"*/,
    v40,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24598/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23958/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23613/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23612/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17715/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23249/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_18503/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
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
      sub_1C6BC60(Item, v31);
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
    sub_1C6BC68(Item);
  }
  v47 = 0;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_16747/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
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
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v54 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v54 = NetworkManager_TypeInfo;
  }
  Bytes_65014196 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(
                                                                          v54->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0);
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(v43 - 4231125, 0);
  v57 = System_Linq_Enumerable__Concat_byte_(
          Bytes_65014196,
          v56,
          (const MethodInfo_3157CFC *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v50 >= 0 )
    v58 = v50;
  else
    v58 = v50 + 1;
  v59 = v57;
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(v58 >> 1, 0);
  v61 = System_Linq_Enumerable__Concat_byte_(
          v59,
          v60,
          (const MethodInfo_3157CFC *)Method_System_Linq_Enumerable_Concat_byte___);
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(
                                                               v121 - 0x7FFFFFFF,
                                                               0);
  v63 = System_Linq_Enumerable__Concat_byte_(
          v61,
          v62,
          (const MethodInfo_3157CFC *)Method_System_Linq_Enumerable_Concat_byte___);
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(v47 - 2469110, 0);
  v65 = System_Linq_Enumerable__Concat_byte_(
          v63,
          v64,
          (const MethodInfo_3157CFC *)Method_System_Linq_Enumerable_Concat_byte___);
  v66 = System_Linq_Enumerable__ToArray_byte_(
          v65,
          (const MethodInfo_317AFA0 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v131) = Crc32__Compute(v66, 0);
  v67 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v131);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17104/*"battleStatus"*/,
    v67,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
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
            Item = sub_1C6BAB0(string___TypeInfo, 5);
            if ( !Item )
              goto LABEL_94;
            v75 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            v76 = StringLiteral_15801/*"["*/;
            *(_QWORD *)(Item + 32) = StringLiteral_15801/*"["*/;
            sub_1C6B9AC((CGThumbnailListItem_o *)(Item + 32), v76, v73, v74);
            if ( !LODWORD(v72->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v72 + 32, 0);
            if ( *(_DWORD *)(v75 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v75 + 40) = Item;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 40), Item, v77, v78);
            if ( *(_DWORD *)(v75 + 24) <= 2u )
              goto LABEL_93;
            v81 = StringLiteral_808/*","*/;
            *(_QWORD *)(v75 + 48) = StringLiteral_808/*","*/;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 48), v81, v79, v80);
            if ( LODWORD(v72->max_length) <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v72 + 36, 0);
            if ( *(_DWORD *)(v75 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v75 + 56) = Item;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 56), Item, v82, v83);
            if ( *(_DWORD *)(v75 + 24) <= 4u )
              goto LABEL_93;
            v86 = StringLiteral_16051/*"]"*/;
            *(_QWORD *)(v75 + 64) = StringLiteral_16051/*"]"*/;
            v87 = (CGThumbnailListItem_o *)(v75 + 64);
          }
          else
          {
            Item = sub_1C6BAB0(string___TypeInfo, 6);
            if ( !Item )
              goto LABEL_94;
            v75 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            *(_QWORD *)(Item + 32) = v70;
            sub_1C6B9AC((CGThumbnailListItem_o *)(Item + 32), (int32_t)v70, v88, v89);
            if ( *(_DWORD *)(v75 + 24) <= 1u )
              goto LABEL_93;
            v92 = StringLiteral_857/*",["*/;
            *(_QWORD *)(v75 + 40) = StringLiteral_857/*",["*/;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 40), v92, v90, v91);
            if ( !LODWORD(v72->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v72 + 32, 0);
            if ( *(_DWORD *)(v75 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v75 + 48) = Item;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 48), Item, v93, v94);
            if ( *(_DWORD *)(v75 + 24) <= 3u )
              goto LABEL_93;
            v97 = StringLiteral_808/*","*/;
            *(_QWORD *)(v75 + 56) = StringLiteral_808/*","*/;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 56), v97, v95, v96);
            if ( LODWORD(v72->max_length) <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v72 + 36, 0);
            if ( *(_DWORD *)(v75 + 24) <= 4u )
              goto LABEL_93;
            *(_QWORD *)(v75 + 64) = Item;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v75 + 64), Item, v98, v99);
            if ( *(_DWORD *)(v75 + 24) <= 5u )
              goto LABEL_93;
            v86 = StringLiteral_16051/*"]"*/;
            *(_QWORD *)(v75 + 72) = StringLiteral_16051/*"]"*/;
            v87 = (CGThumbnailListItem_o *)(v75 + 72);
          }
          sub_1C6B9AC(v87, v86, v84, v85);
          Item = (__int64)System_String__Concat_64007324((System_String_array *)v75, 0);
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
    v100 = (Il2CppObject *)System_String__Concat_64005056(
                             (System_String_o *)StringLiteral_15801/*"["*/,
                             v70,
                             (System_String_o *)StringLiteral_16051/*"]"*/,
                             0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v29,
      (Il2CppObject *)StringLiteral_24820/*"voicePlayedList"*/,
      v100,
      (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24599/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v101 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24895/*"waveInfo"*/,
    v101,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  LODWORD(v131) = waveNum;
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23061/*"reachedWave"*/,
    v102,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !battleMissionValueDict )
    goto LABEL_94;
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           battleMissionValueDict,
           (const MethodInfo_34496FC *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v104 = BattleResultRequest___c_TypeInfo;
  v105 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !BattleResultRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultRequest___c_TypeInfo);
    v104 = BattleResultRequest___c_TypeInfo;
  }
  _9__5_0 = v104->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v104->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v104);
      v104 = BattleResultRequest___c_TypeInfo;
    }
    v107 = (Il2CppObject *)v104->static_fields->__9;
    _9__5_0 = (System_Func_int__int__o *)sub_1C6BC54(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__5_0, v107, Method_BattleResultRequest___c__beginRequest_b__5_0__, 0);
    static_fields = BattleResultRequest___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v109, v110);
  }
  v111 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                                v105,
                                                                (System_Func_TSource__TKey__o *)_9__5_0,
                                                                (const MethodInfo_316A9E8 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Item = (__int64)System_Linq_Enumerable__ToArray_int_(
                    v111,
                    (const MethodInfo_317B0B0 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Item )
    goto LABEL_94;
  v112 = (Il2CppObject *)Item;
  Item = sub_1C6BAB0(int___TypeInfo, *(unsigned int *)(Item + 24));
  monitor = v112[1].monitor;
  v114 = Item;
  if ( (int)monitor >= 1 )
  {
    v115 = 0;
    while ( v115 < (unsigned int)monitor )
    {
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               battleMissionValueDict,
               *((_DWORD *)&v112[2].klass + v115),
               (const MethodInfo_344999C *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !v114 )
        goto LABEL_94;
      if ( v115 >= *(unsigned int *)(v114 + 24) )
        break;
      *(_DWORD *)(v114 + 32 + 4 * v115) = Item;
      LODWORD(monitor) = v112[1].monitor;
      if ( (__int64)++v115 >= (int)monitor )
        goto LABEL_87;
    }
    goto LABEL_93;
  }
LABEL_87:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17093/*"battleMissionTargetIds"*/,
    v112,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17094/*"battleMissionTargetValues"*/,
    (Il2CppObject *)v114,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v116 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C6BC54(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v116, 0);
  if ( !v116 )
    goto LABEL_94;
  v117 = MiniMessagePack_MiniMessagePacker__PackClass(v116, (Il2CppObject *)v29, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v118 = CatAndMouseGame__CatGame5Bytes(v117, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v119 = System_Convert__ToBase64String(v118, 0);
  RequestBase__addField_44471996((RequestBase_o *)this, (System_String_o *)StringLiteral_23171/*"result"*/, v119, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


void BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4CB7D4B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    byte_4CB7D4B = 1;
  }
  memset(&v4, 0, sizeof(v4));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C6BC60(0, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v4,
            (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v4,
    (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4CB7D48 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_9128/*"MockBattleResultRequest"*/);
    byte_4CB7D48 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9128/*"MockBattleResultRequest"*/, 0);
}


System_String_o *BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7D47 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_17069/*"battle/result"*/);
    byte_4CB7D47 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_17069/*"battle/result"*/, 0);
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

  if ( (byte_4CB7D4A & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&ServantCommentManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7D4A = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(22, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44468912(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
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
    v8 = (System_String_o *)StringLiteral_22301/*"ng"*/;
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

  if ( (byte_4CB7D4E & 1) == 0 )
  {
    sub_1C6BA08(&BattleData_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C6BA08(&int_____TypeInfo);
    sub_1C6BA08(&int___TypeInfo);
    sub_1C6BA08(&long___TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_1C6BA08(&BattleResultRequest_RaidResult___TypeInfo);
    sub_1C6BA08(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB7D4E = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.scores, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.action, v6, v7, v8);
  v9 = (struct System_Int32_array_array *)sub_1C6BAB0(int_____TypeInfo, 0);
  this->fields.voicePlayedArray = v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.voicePlayedArray, (int32_t)v9, v10, v11);
  v12 = (struct System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  this->fields.aliveUniqueIds = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.aliveUniqueIds, (int32_t)v12, v13, v14);
  v15 = (struct BattleResultRequest_RaidResult_array *)sub_1C6BAB0(BattleResultRequest_RaidResult___TypeInfo, 0);
  this->fields.raidResult = v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.raidResult, (int32_t)v15, v16, v17);
  v18 = (struct BattleResultRequest_SuperBossResult_array *)sub_1C6BAB0(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0);
  this->fields.superBossResult = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.superBossResult, (int32_t)v18, v19, v20);
  v21 = (struct System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  this->fields.usedTurnArray = v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.usedTurnArray, (int32_t)v21, v22, v23);
  this->fields.recordType = 1;
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v24,
    (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v24;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.recordJson, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.firstNpPlayList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_3449074 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v30;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.usedEquipSkillDict, (int32_t)v30, v31, v32);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.svtCommonFlagDict, (int32_t)SavedServantCommonFlagDict, v34, v35);
  v36 = (struct System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  this->fields.skillShiftUniqueIds = v36;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.skillShiftUniqueIds, (int32_t)v36, v37, v38);
  v39 = (struct System_Int64_array *)sub_1C6BAB0(long___TypeInfo, 0);
  this->fields.skillShiftNpcSvtIds = v39;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.skillShiftNpcSvtIds, (int32_t)v39, v40, v41);
  v42 = (struct System_Int32_array *)sub_1C6BAB0(int___TypeInfo, 0);
  this->fields.routeSelect = v42;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.routeSelect, (int32_t)v42, v43, v44);
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
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_65014196; // x23
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
  if ( (byte_4CB7D4C & 1) == 0 )
  {
    sub_1C6BA08(&Crc32_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_byte___);
    this = (BattleResultRequest_Argument_o *)sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB7D4C = 1;
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
        sub_1C6BC68(this);
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
    sub_1C6BC60(this, method);
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
  if ( !byte_4CB002A )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB002A = 1;
  }
  v23 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v23 = NetworkManager_TypeInfo;
  }
  Bytes_65014196 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(
                                                                          v23->static_fields->userIdNumber
                                                                        + v2->fields.battleResult,
                                                                          0);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(v5, 0);
  v26 = System_Linq_Enumerable__Concat_byte_(
          Bytes_65014196,
          v25,
          (const MethodInfo_3157CFC *)Method_System_Linq_Enumerable_Concat_byte___);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(v22, 0);
  v28 = System_Linq_Enumerable__Concat_byte_(
          v26,
          v27,
          (const MethodInfo_3157CFC *)Method_System_Linq_Enumerable_Concat_byte___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0);
  v30 = System_Linq_Enumerable__Concat_byte_(
          v28,
          v29,
          (const MethodInfo_3157CFC *)Method_System_Linq_Enumerable_Concat_byte___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_65014196(v11, 0);
  v32 = System_Linq_Enumerable__Concat_byte_(
          v30,
          v31,
          (const MethodInfo_3157CFC *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = System_Linq_Enumerable__ToArray_byte_(
          v32,
          (const MethodInfo_317AFA0 *)Method_System_Linq_Enumerable_ToArray_byte___);
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
  const MethodInfo *v9; // x3
  BattleResultRequest_Argument_o *v10; // x20
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  CGThumbnailListItem_o *p_raidResult; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  v2 = this;
  if ( (byte_4CB7D4D & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_857/*",["*/);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    sub_1C6BA08(&StringLiteral_15801/*"["*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    this = (BattleResultRequest_Argument_o *)sub_1C6BA08(&StringLiteral_16051/*"]"*/);
    byte_4CB7D4D = 1;
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
          this = (BattleResultRequest_Argument_o *)sub_1C6BAB0(string___TypeInfo, 5);
          if ( !this )
            goto LABEL_31;
          v10 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v11 = StringLiteral_15801/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15801/*"["*/;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.scores, v11, v8, v9);
          if ( !LODWORD(v7->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0);
          if ( v10->fields.battleResult <= 1u )
            goto LABEL_33;
          v10->fields.action = (struct System_String_o *)this;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.action, (int32_t)this, v12, v13);
          if ( v10->fields.battleResult <= 2u )
            goto LABEL_33;
          v16 = StringLiteral_808/*","*/;
          v10->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_808/*","*/;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.voicePlayedArray, v16, v14, v15);
          if ( LODWORD(v7->max_length) <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0);
          if ( v10->fields.battleResult <= 3u )
            goto LABEL_33;
          v10->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.aliveUniqueIds, (int32_t)this, v17, v18);
          if ( v10->fields.battleResult <= 4u )
            goto LABEL_33;
          v21 = StringLiteral_16051/*"]"*/;
          v10->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16051/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v10->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1C6BAB0(string___TypeInfo, 6);
          if ( !this )
            goto LABEL_31;
          v10 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v4;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.scores, (int32_t)v4, v23, v24);
          if ( v10->fields.battleResult <= 1u )
            goto LABEL_33;
          v27 = StringLiteral_857/*",["*/;
          v10->fields.action = (struct System_String_o *)StringLiteral_857/*",["*/;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.action, v27, v25, v26);
          if ( !LODWORD(v7->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0);
          if ( v10->fields.battleResult <= 2u )
            goto LABEL_33;
          v10->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.voicePlayedArray, (int32_t)this, v28, v29);
          if ( v10->fields.battleResult <= 3u
            || (v32 = StringLiteral_808/*","*/,
                v10->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_808/*","*/,
                sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.aliveUniqueIds, v32, v30, v31),
                LODWORD(v7->max_length) <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0),
                v10->fields.battleResult <= 4u)
            || (v10->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.raidResult, (int32_t)this, v33, v34),
                v10->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1C6BC68(this);
          }
          v21 = StringLiteral_16051/*"]"*/;
          v10->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16051/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v10->fields.superBossResult;
        }
        sub_1C6B9AC(p_raidResult, v21, v19, v20);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_64007324((System_String_array *)v10, 0);
        v4 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v5;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1C6BC60(this, method);
    }
  }
  return System_String__Concat_64005056(
           (System_String_o *)StringLiteral_15801/*"["*/,
           (System_String_o *)v4,
           (System_String_o *)StringLiteral_16051/*"]"*/,
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

  if ( (byte_4CB7D4F & 1) == 0 )
  {
    sub_1C6BA08(&BattleResultRequest___c_TypeInfo);
    byte_4CB7D4F = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(BattleResultRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultRequest___c_TypeInfo->static_fields->__9 = (struct BattleResultRequest___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)BattleResultRequest___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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