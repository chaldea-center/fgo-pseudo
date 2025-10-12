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
  __int64 v33; // x5
  __int64 v34; // x6
  __int64 v35; // x7
  __int64 Item; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  __int64 v40; // x5
  __int64 v41; // x6
  __int64 v42; // x7
  Il2CppObject *v43; // x0
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  __int64 v47; // x5
  __int64 v48; // x6
  __int64 v49; // x7
  Il2CppObject *v50; // x0
  Il2CppObject *v51; // x0
  Il2CppObject *v52; // x0
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  Il2CppObject *v59; // x0
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  __int64 v63; // x5
  __int64 v64; // x6
  __int64 v65; // x7
  Il2CppObject *v66; // x0
  System_Object_array *v67; // x0
  Il2CppObject *v68; // x0
  Il2CppObject *v69; // x0
  int max_length; // w8
  int v71; // w9
  __int64 v72; // x22
  BattleResultRequest_RaidResult_o *v73; // x10
  int v74; // w8
  int v75; // w9
  __int64 v76; // x20
  BattleResultRequest_SuperBossResult_o *v77; // x10
  __int64 max_length_low; // x8
  __int64 v79; // x23
  __int64 v80; // x9
  int32_t *m_Items; // x10
  __int64 v82; // t1
  NetworkManager_c *v83; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_64567892; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v85; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v86; // x0
  __int64 v87; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v89; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v91; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v92; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v93; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  System_Byte_array *v95; // x19
  __int64 v96; // x2
  __int64 v97; // x3
  __int64 v98; // x4
  __int64 v99; // x5
  __int64 v100; // x6
  __int64 v101; // x7
  Il2CppObject *v102; // x0
  System_Int32_array_array *v103; // x10
  il2cpp_array_size_t v104; // x8
  System_String_o *v105; // x22
  unsigned __int64 v106; // x25
  System_Int32_array *v107; // x29
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  __int64 v110; // x19
  int32_t v111; // w1
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  int32_t v116; // w1
  int32_t v117; // w2
  const MethodInfo *v118; // x3
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  int32_t v121; // w1
  CGThumbnailListItem_o *v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  int32_t v127; // w1
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  int32_t v132; // w1
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  Il2CppObject *v135; // x0
  Il2CppObject *v136; // x0
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  __int64 v140; // x5
  __int64 v141; // x6
  __int64 v142; // x7
  Il2CppObject *v143; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  BattleResultRequest___c_c *v145; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x19
  System_Func_int__int__o *_9__5_0; // x22
  Il2CppObject *v148; // x23
  struct BattleResultRequest___c_StaticFields *static_fields; // x0
  int32_t v150; // w2
  const MethodInfo *v151; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v152; // x0
  Il2CppObject *v153; // x19
  void *monitor; // x8
  __int64 v155; // x22
  unsigned __int64 v156; // x23
  MiniMessagePack_MiniMessagePacker_o *v157; // x19
  System_Byte_array *v158; // x19
  System_Byte_array *v159; // x19
  System_String_o *v160; // x0
  int64_t v162; // [xsp+10h] [xbp-C0h]
  int32_t v168; // [xsp+58h] [xbp-78h] BYREF
  int32_t v169; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v170; // [xsp+60h] [xbp-70h] BYREF
  int32_t v171; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v172; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4C3940A & 1) == 0 )
  {
    sub_1C32C20(&CatAndMouseGame_TypeInfo);
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C32C20(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_byte___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&System_Func_int__int__TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1C32C20(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&Method_BattleResultRequest___c__beginRequest_b__5_0__);
    sub_1C32C20(&BattleResultRequest___c_TypeInfo);
    sub_1C32C20(&uint_TypeInfo);
    sub_1C32C20(&StringLiteral_23150/*"routeSelect"*/);
    sub_1C32C20(&StringLiteral_23072/*"result"*/);
    sub_1C32C20(&StringLiteral_22984/*"recordValueJson"*/);
    sub_1C32C20(&StringLiteral_17698/*"calledEnemyUniqueIds"*/);
    sub_1C32C20(&StringLiteral_23516/*"skillShiftNpcSvtIds"*/);
    sub_1C32C20(&StringLiteral_22931/*"raidResult"*/);
    sub_1C32C20(&StringLiteral_24486/*"useTreasureDevices"*/);
    sub_1C32C20(&StringLiteral_22983/*"recordType"*/);
    sub_1C32C20(&StringLiteral_17078/*"battleMissionTargetIds"*/);
    sub_1C32C20(&StringLiteral_860/*",["*/);
    sub_1C32C20(&StringLiteral_23517/*"skillShiftUniqueIds"*/);
    sub_1C32C20(&StringLiteral_18472/*"dataLostUniqueIds"*/);
    sub_1C32C20(&StringLiteral_24490/*"usedEquipSkillList"*/);
    sub_1C32C20(&StringLiteral_18941/*"elapsedTurn"*/);
    sub_1C32C20(&StringLiteral_22964/*"reachedWave"*/);
    sub_1C32C20(&StringLiteral_24491/*"usedTurnList"*/);
    sub_1C32C20(&StringLiteral_23860/*"svtCommonFlagList"*/);
    sub_1C32C20(&StringLiteral_17079/*"battleMissionTargetValues"*/);
    sub_1C32C20(&StringLiteral_23208/*"scores"*/);
    sub_1C32C20(&StringLiteral_24780/*"waveInfo"*/);
    sub_1C32C20(&StringLiteral_17089/*"battleStatus"*/);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_24008/*"tdPlayed"*/);
    sub_1C32C20(&StringLiteral_24705/*"voicePlayedList"*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_24819/*"winResult"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_23843/*"superBossResult"*/);
    sub_1C32C20(&StringLiteral_16056/*"]"*/);
    sub_1C32C20(&StringLiteral_17075/*"battleId"*/);
    sub_1C32C20(&StringLiteral_17080/*"battleResult"*/);
    sub_1C32C20(&StringLiteral_16652/*"action"*/);
    sub_1C32C20(&StringLiteral_16734/*"aliveUniqueIds"*/);
    byte_4C3940A = 1;
  }
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v162 = battleId;
  v172 = battleId;
  Item = j_il2cpp_value_box_0(long_TypeInfo, &v172, v30, v31, v32, v33, v34, v35);
  if ( !v29 )
    goto LABEL_94;
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17075/*"battleId"*/,
    (Il2CppObject *)Item,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v171 = battleResult;
  v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171, v37, v38, v39, v40, v41, v42);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17080/*"battleResult"*/,
    v43,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v170 = winResult;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v170, v44, v45, v46, v47, v48, v49);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24819/*"winResult"*/,
    v50,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23208/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_16652/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v51 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_22931/*"raidResult"*/,
    v51,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v52 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23843/*"superBossResult"*/,
    v52,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v169 = elapsedTurn;
  v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v169, v53, v54, v55, v56, v57, v58);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_18941/*"elapsedTurn"*/,
    v59,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v168 = recordType;
  v66 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v168, v60, v61, v62, v63, v64, v65);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_22983/*"recordType"*/,
    v66,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_22984/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_94;
  v67 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v68 = (Il2CppObject *)JsonManager__toJson(&v67->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24008/*"tdPlayed"*/,
    v68,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_94;
  v69 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24486/*"useTreasureDevices"*/,
    v69,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24490/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23860/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23517/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23516/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17698/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_23150/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_18472/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_94;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v72 = 0;
    if ( !superBossResult )
      goto LABEL_94;
  }
  else
  {
    v71 = 0;
    v72 = 0;
    do
    {
      if ( max_length == v71 )
        goto LABEL_93;
      v73 = raidResult->m_Items[v71];
      if ( !v73 )
        goto LABEL_94;
      ++v71;
      v72 += v73->fields.addDamage + (__int64)v73->fields.day + v73->fields.uniqueId;
    }
    while ( max_length != v71 );
    if ( !superBossResult )
LABEL_94:
      sub_1C32E7C(Item);
  }
  v74 = superBossResult->max_length;
  if ( v74 >= 1 )
  {
    v75 = 0;
    v76 = 0;
    while ( v74 != v75 )
    {
      v77 = superBossResult->m_Items[v75];
      if ( !v77 )
        goto LABEL_94;
      ++v75;
      v76 += v77->fields.addDamage + (__int64)v77->fields.superBossId + v77->fields.uniqueId;
      if ( v74 == v75 )
        goto LABEL_24;
    }
LABEL_93:
    sub_1C32E84(Item);
  }
  v76 = 0;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_16734/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_94;
  max_length_low = LODWORD(aliveUniqueIds->max_length);
  if ( max_length_low << 32 >= 1 )
  {
    v79 = 0;
    v80 = (int)max_length_low;
    m_Items = aliveUniqueIds->m_Items;
    while ( max_length_low )
    {
      v82 = *m_Items++;
      --v80;
      --max_length_low;
      v79 += v82;
      if ( !v80 )
        goto LABEL_31;
    }
    goto LABEL_93;
  }
  v79 = 0;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v83 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v83 = NetworkManager_TypeInfo;
  }
  Bytes_64567892 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(
                                                                          v83->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0);
  v85 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(v72 - 4231125, 0);
  v86 = System_Linq_Enumerable__Concat_byte_(
          Bytes_64567892,
          v85,
          (const MethodInfo_30F9CA8 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v79 >= 0 )
    v87 = v79;
  else
    v87 = v79 + 1;
  v88 = v86;
  v89 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(v87 >> 1, 0);
  v90 = System_Linq_Enumerable__Concat_byte_(
          v88,
          v89,
          (const MethodInfo_30F9CA8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v91 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(
                                                               v162 - 0x7FFFFFFF,
                                                               0);
  v92 = System_Linq_Enumerable__Concat_byte_(
          v90,
          v91,
          (const MethodInfo_30F9CA8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v93 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(v76 - 2469110, 0);
  v94 = System_Linq_Enumerable__Concat_byte_(
          v92,
          v93,
          (const MethodInfo_30F9CA8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v95 = System_Linq_Enumerable__ToArray_byte_(
          v94,
          (const MethodInfo_311C7E4 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v172) = Crc32__Compute(v95, 0);
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v172, v96, v97, v98, v99, v100, v101);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17089/*"battleStatus"*/,
    v102,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v103 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v104 = voicePlayedArray->max_length;
    v105 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v104 >= 1 )
    {
      v106 = 0;
      while ( v106 < (unsigned int)v104 )
      {
        v107 = voicePlayedArray->m_Items[v106];
        if ( v107 && LODWORD(v107->max_length) == 2 )
        {
          if ( System_String__IsNullOrEmpty(v105, 0) )
          {
            Item = sub_1C32CC8(string___TypeInfo, 5);
            if ( !Item )
              goto LABEL_94;
            v110 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            v111 = StringLiteral_15802/*"["*/;
            *(_QWORD *)(Item + 32) = StringLiteral_15802/*"["*/;
            sub_1C32BC4((CGThumbnailListItem_o *)(Item + 32), v111, v108, v109);
            if ( !LODWORD(v107->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v107 + 32, 0);
            if ( *(_DWORD *)(v110 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v110 + 40) = Item;
            sub_1C32BC4((CGThumbnailListItem_o *)(v110 + 40), Item, v112, v113);
            if ( *(_DWORD *)(v110 + 24) <= 2u )
              goto LABEL_93;
            v116 = StringLiteral_811/*","*/;
            *(_QWORD *)(v110 + 48) = StringLiteral_811/*","*/;
            sub_1C32BC4((CGThumbnailListItem_o *)(v110 + 48), v116, v114, v115);
            if ( LODWORD(v107->max_length) <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v107 + 36, 0);
            if ( *(_DWORD *)(v110 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v110 + 56) = Item;
            sub_1C32BC4((CGThumbnailListItem_o *)(v110 + 56), Item, v117, v118);
            if ( *(_DWORD *)(v110 + 24) <= 4u )
              goto LABEL_93;
            v121 = StringLiteral_16056/*"]"*/;
            *(_QWORD *)(v110 + 64) = StringLiteral_16056/*"]"*/;
            v122 = (CGThumbnailListItem_o *)(v110 + 64);
          }
          else
          {
            Item = sub_1C32CC8(string___TypeInfo, 6);
            if ( !Item )
              goto LABEL_94;
            v110 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            *(_QWORD *)(Item + 32) = v105;
            sub_1C32BC4((CGThumbnailListItem_o *)(Item + 32), (int32_t)v105, v123, v124);
            if ( *(_DWORD *)(v110 + 24) <= 1u )
              goto LABEL_93;
            v127 = StringLiteral_860/*",["*/;
            *(_QWORD *)(v110 + 40) = StringLiteral_860/*",["*/;
            sub_1C32BC4((CGThumbnailListItem_o *)(v110 + 40), v127, v125, v126);
            if ( !LODWORD(v107->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v107 + 32, 0);
            if ( *(_DWORD *)(v110 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v110 + 48) = Item;
            sub_1C32BC4((CGThumbnailListItem_o *)(v110 + 48), Item, v128, v129);
            if ( *(_DWORD *)(v110 + 24) <= 3u )
              goto LABEL_93;
            v132 = StringLiteral_811/*","*/;
            *(_QWORD *)(v110 + 56) = StringLiteral_811/*","*/;
            sub_1C32BC4((CGThumbnailListItem_o *)(v110 + 56), v132, v130, v131);
            if ( LODWORD(v107->max_length) <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v107 + 36, 0);
            if ( *(_DWORD *)(v110 + 24) <= 4u )
              goto LABEL_93;
            *(_QWORD *)(v110 + 64) = Item;
            sub_1C32BC4((CGThumbnailListItem_o *)(v110 + 64), Item, v133, v134);
            if ( *(_DWORD *)(v110 + 24) <= 5u )
              goto LABEL_93;
            v121 = StringLiteral_16056/*"]"*/;
            *(_QWORD *)(v110 + 72) = StringLiteral_16056/*"]"*/;
            v122 = (CGThumbnailListItem_o *)(v110 + 72);
          }
          sub_1C32BC4(v122, v121, v119, v120);
          Item = (__int64)System_String__Concat_63559060((System_String_array *)v110, 0);
          v103 = voicePlayedArray;
          v105 = (System_String_o *)Item;
        }
        LODWORD(v104) = v103->max_length;
        if ( (__int64)++v106 >= (int)v104 )
          goto LABEL_70;
      }
      goto LABEL_93;
    }
LABEL_70:
    v135 = (Il2CppObject *)System_String__Concat_63556792(
                             (System_String_o *)StringLiteral_15802/*"["*/,
                             v105,
                             (System_String_o *)StringLiteral_16056/*"]"*/,
                             0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v29,
      (Il2CppObject *)StringLiteral_24705/*"voicePlayedList"*/,
      v135,
      (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24491/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v136 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24780/*"waveInfo"*/,
    v136,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  LODWORD(v172) = waveNum;
  v143 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v172, v137, v138, v139, v140, v141, v142);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_22964/*"reachedWave"*/,
    v143,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !battleMissionValueDict )
    goto LABEL_94;
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           battleMissionValueDict,
           (const MethodInfo_33E6F28 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v145 = BattleResultRequest___c_TypeInfo;
  v146 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !BattleResultRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultRequest___c_TypeInfo);
    v145 = BattleResultRequest___c_TypeInfo;
  }
  _9__5_0 = v145->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v145->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v145);
      v145 = BattleResultRequest___c_TypeInfo;
    }
    v148 = (Il2CppObject *)v145->static_fields->__9;
    _9__5_0 = (System_Func_int__int__o *)sub_1C32E6C(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__5_0, v148, Method_BattleResultRequest___c__beginRequest_b__5_0__, 0);
    static_fields = BattleResultRequest___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v150, v151);
  }
  v152 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                                v146,
                                                                (System_Func_TSource__TKey__o *)_9__5_0,
                                                                (const MethodInfo_310C994 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Item = (__int64)System_Linq_Enumerable__ToArray_int_(
                    v152,
                    (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Item )
    goto LABEL_94;
  v153 = (Il2CppObject *)Item;
  Item = sub_1C32CC8(int___TypeInfo, *(unsigned int *)(Item + 24));
  monitor = v153[1].monitor;
  v155 = Item;
  if ( (int)monitor >= 1 )
  {
    v156 = 0;
    while ( v156 < (unsigned int)monitor )
    {
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               battleMissionValueDict,
               *((_DWORD *)&v153[2].klass + v156),
               (const MethodInfo_33E71C8 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !v155 )
        goto LABEL_94;
      if ( v156 >= *(unsigned int *)(v155 + 24) )
        break;
      *(_DWORD *)(v155 + 32 + 4 * v156) = Item;
      LODWORD(monitor) = v153[1].monitor;
      if ( (__int64)++v156 >= (int)monitor )
        goto LABEL_87;
    }
    goto LABEL_93;
  }
LABEL_87:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17078/*"battleMissionTargetIds"*/,
    v153,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17079/*"battleMissionTargetValues"*/,
    (Il2CppObject *)v155,
    (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v157 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C32E6C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v157, 0);
  if ( !v157 )
    goto LABEL_94;
  v158 = MiniMessagePack_MiniMessagePacker__PackClass(v157, (Il2CppObject *)v29, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v159 = CatAndMouseGame__CatGame5Bytes(v158, 0);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v160 = System_Convert__ToBase64String(v159, 0);
  RequestBase__addField_44145196((RequestBase_o *)this, (System_String_o *)StringLiteral_23072/*"result"*/, v160, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


void BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4C3940C & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    byte_4C3940C = 1;
  }
  memset(&v4, 0, sizeof(v4));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C32E7C(0);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v4,
            (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v4,
    (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4C39409 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_9130/*"MockBattleResultRequest"*/);
    byte_4C39409 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9130/*"MockBattleResultRequest"*/, 0);
}


System_String_o *BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4C39408 & 1) == 0 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17054/*"battle/result"*/);
    byte_4C39408 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63518544(BaseUrl, (System_String_o *)StringLiteral_17054/*"battle/result"*/, 0);
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

  if ( (byte_4C3940B & 1) == 0 )
  {
    sub_1C32C20(&JsonManager_TypeInfo);
    sub_1C32C20(&ResponseCommandKind_TypeInfo);
    sub_1C32C20(&ServantCommentManager_TypeInfo);
    sub_1C32C20(&StringLiteral_22212/*"ng"*/);
    byte_4C3940B = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(22, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44140424(v5, 0)) && (success = (Il2CppObject *)v6->fields.success) != 0 )
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
    v8 = (System_String_o *)StringLiteral_22212/*"ng"*/;
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

  if ( (byte_4C3940F & 1) == 0 )
  {
    sub_1C32C20(&BattleData_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C32C20(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C32C20(&int_____TypeInfo);
    sub_1C32C20(&int___TypeInfo);
    sub_1C32C20(&long___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_1C32C20(&BattleResultRequest_RaidResult___TypeInfo);
    sub_1C32C20(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3940F = 1;
  }
  v5 = StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.scores, v5, v2, v3);
  v6 = StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.action, v6, v7, v8);
  v9 = (struct System_Int32_array_array *)sub_1C32CC8(int_____TypeInfo, 0);
  this->fields.voicePlayedArray = v9;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.voicePlayedArray, (int32_t)v9, v10, v11);
  v12 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  this->fields.aliveUniqueIds = v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.aliveUniqueIds, (int32_t)v12, v13, v14);
  v15 = (struct BattleResultRequest_RaidResult_array *)sub_1C32CC8(BattleResultRequest_RaidResult___TypeInfo, 0);
  this->fields.raidResult = v15;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.raidResult, (int32_t)v15, v16, v17);
  v18 = (struct BattleResultRequest_SuperBossResult_array *)sub_1C32CC8(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0);
  this->fields.superBossResult = v18;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.superBossResult, (int32_t)v18, v19, v20);
  v21 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  this->fields.usedTurnArray = v21;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.usedTurnArray, (int32_t)v21, v22, v23);
  this->fields.recordType = 1;
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v24,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v24;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.recordJson, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v27;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.firstNpPlayList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_33E68A0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v30;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.usedEquipSkillDict, (int32_t)v30, v31, v32);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.svtCommonFlagDict, (int32_t)SavedServantCommonFlagDict, v34, v35);
  v36 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  this->fields.skillShiftUniqueIds = v36;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillShiftUniqueIds, (int32_t)v36, v37, v38);
  v39 = (struct System_Int64_array *)sub_1C32CC8(long___TypeInfo, 0);
  this->fields.skillShiftNpcSvtIds = v39;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.skillShiftNpcSvtIds, (int32_t)v39, v40, v41);
  v42 = (struct System_Int32_array *)sub_1C32CC8(int___TypeInfo, 0);
  this->fields.routeSelect = v42;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.routeSelect, (int32_t)v42, v43, v44);
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
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_64567892; // x23
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
  if ( (byte_4C3940D & 1) == 0 )
  {
    sub_1C32C20(&Crc32_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_byte___);
    this = (BattleResultRequest_Argument_o *)sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C3940D = 1;
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
        sub_1C32E84(this);
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
    sub_1C32E7C(this);
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
  if ( !byte_4C31812 )
  {
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C31812 = 1;
  }
  v23 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v23 = NetworkManager_TypeInfo;
  }
  Bytes_64567892 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(
                                                                          v23->static_fields->userIdNumber
                                                                        + v2->fields.battleResult,
                                                                          0);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(v5, 0);
  v26 = System_Linq_Enumerable__Concat_byte_(
          Bytes_64567892,
          v25,
          (const MethodInfo_30F9CA8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(v22, 0);
  v28 = System_Linq_Enumerable__Concat_byte_(
          v26,
          v27,
          (const MethodInfo_30F9CA8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0);
  v30 = System_Linq_Enumerable__Concat_byte_(
          v28,
          v29,
          (const MethodInfo_30F9CA8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_64567892(v11, 0);
  v32 = System_Linq_Enumerable__Concat_byte_(
          v30,
          v31,
          (const MethodInfo_30F9CA8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = System_Linq_Enumerable__ToArray_byte_(
          v32,
          (const MethodInfo_311C7E4 *)Method_System_Linq_Enumerable_ToArray_byte___);
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
  if ( (byte_4C3940E & 1) == 0 )
  {
    sub_1C32C20(&string___TypeInfo);
    sub_1C32C20(&StringLiteral_860/*",["*/);
    sub_1C32C20(&StringLiteral_811/*","*/);
    sub_1C32C20(&StringLiteral_15802/*"["*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    this = (BattleResultRequest_Argument_o *)sub_1C32C20(&StringLiteral_16056/*"]"*/);
    byte_4C3940E = 1;
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
          this = (BattleResultRequest_Argument_o *)sub_1C32CC8(string___TypeInfo, 5);
          if ( !this )
            goto LABEL_31;
          v10 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v11 = StringLiteral_15802/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15802/*"["*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.scores, v11, v8, v9);
          if ( !LODWORD(v7->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0);
          if ( v10->fields.battleResult <= 1u )
            goto LABEL_33;
          v10->fields.action = (struct System_String_o *)this;
          sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.action, (int32_t)this, v12, v13);
          if ( v10->fields.battleResult <= 2u )
            goto LABEL_33;
          v16 = StringLiteral_811/*","*/;
          v10->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_811/*","*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.voicePlayedArray, v16, v14, v15);
          if ( LODWORD(v7->max_length) <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0);
          if ( v10->fields.battleResult <= 3u )
            goto LABEL_33;
          v10->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.aliveUniqueIds, (int32_t)this, v17, v18);
          if ( v10->fields.battleResult <= 4u )
            goto LABEL_33;
          v21 = StringLiteral_16056/*"]"*/;
          v10->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16056/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v10->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1C32CC8(string___TypeInfo, 6);
          if ( !this )
            goto LABEL_31;
          v10 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v4;
          sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.scores, (int32_t)v4, v23, v24);
          if ( v10->fields.battleResult <= 1u )
            goto LABEL_33;
          v27 = StringLiteral_860/*",["*/;
          v10->fields.action = (struct System_String_o *)StringLiteral_860/*",["*/;
          sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.action, v27, v25, v26);
          if ( !LODWORD(v7->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0);
          if ( v10->fields.battleResult <= 2u )
            goto LABEL_33;
          v10->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.voicePlayedArray, (int32_t)this, v28, v29);
          if ( v10->fields.battleResult <= 3u
            || (v32 = StringLiteral_811/*","*/,
                v10->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_811/*","*/,
                sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.aliveUniqueIds, v32, v30, v31),
                LODWORD(v7->max_length) <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0),
                v10->fields.battleResult <= 4u)
            || (v10->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1C32BC4((CGThumbnailListItem_o *)&v10->fields.raidResult, (int32_t)this, v33, v34),
                v10->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1C32E84(this);
          }
          v21 = StringLiteral_16056/*"]"*/;
          v10->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16056/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v10->fields.superBossResult;
        }
        sub_1C32BC4(p_raidResult, v21, v19, v20);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_63559060((System_String_array *)v10, 0);
        v4 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v5;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1C32E7C(this);
    }
  }
  return System_String__Concat_63556792(
           (System_String_o *)StringLiteral_15802/*"["*/,
           (System_String_o *)v4,
           (System_String_o *)StringLiteral_16056/*"]"*/,
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

  if ( (byte_4C39410 & 1) == 0 )
  {
    sub_1C32C20(&BattleResultRequest___c_TypeInfo);
    byte_4C39410 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(BattleResultRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultRequest___c_TypeInfo->static_fields->__9 = (struct BattleResultRequest___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)BattleResultRequest___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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