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
  System_Collections_Generic_Dictionary_object__object__o *v29; // x20
  __int64 Item; // x0
  __int64 v31; // x1
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x0
  Il2CppObject *v36; // x0
  Il2CppObject *v37; // x0
  Il2CppObject *v38; // x0
  System_Object_array *v39; // x0
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x0
  int max_length; // w8
  int v43; // w9
  __int64 v44; // x21
  BattleResultRequest_RaidResult_o *v45; // x11
  int v46; // w8
  int v47; // w9
  __int64 v48; // x22
  BattleResultRequest_SuperBossResult_o *v49; // x11
  il2cpp_array_size_t v50; // x9
  __int64 v51; // x8
  __int64 v52; // x23
  __int64 v53; // x9
  int32_t *m_Items; // x10
  __int64 v55; // t1
  NetworkManager_c *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_76438544; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x19
  __int64 v60; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v66; // x0
  __int64 v67; // x1
  System_Byte_array *v68; // x19
  Il2CppObject *v69; // x0
  System_Int32_array_array *v70; // x21
  il2cpp_array_size_t v71; // x8
  System_String_o *v72; // x19
  unsigned __int64 v73; // x25
  System_Int32_array *v74; // x28
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  __int64 v81; // x22
  int32_t v82; // w1
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  System_String_o *v89; // x2
  System_String_o *v90; // x3
  int32_t v91; // w4
  int32_t v92; // w5
  bool v93; // w6
  bool v94; // w7
  int32_t v95; // w1
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  int32_t v108; // w1
  MissionNaviTransitionBoardItem_o *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  System_String_o *v116; // x2
  System_String_o *v117; // x3
  int32_t v118; // w4
  int32_t v119; // w5
  bool v120; // w6
  bool v121; // w7
  int32_t v122; // w1
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  int32_t v135; // w1
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  Il2CppObject *v142; // x0
  __int64 v143; // x1
  Il2CppObject *v144; // x0
  Il2CppObject *v145; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v147; // x1
  BattleResultRequest___c_c *v148; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x19
  struct BattleResultRequest___c_StaticFields *static_fields; // x9
  System_Func_int__int__o *_9__5_0; // x22
  Il2CppObject *v152; // x23
  struct BattleResultRequest___c_StaticFields *v153; // x0
  System_String_o *v154; // x2
  System_String_o *v155; // x3
  int32_t v156; // w4
  int32_t v157; // w5
  bool v158; // w6
  bool v159; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v160; // x0
  Il2CppObject *v161; // x19
  void *monitor; // x8
  __int64 v163; // x22
  unsigned __int64 v164; // x23
  MiniMessagePack_MiniMessagePacker_o *v165; // x19
  __int64 v166; // x1
  System_Byte_array *v167; // x19
  __int64 v168; // x1
  System_Byte_array *v169; // x19
  System_String_o *v170; // x0
  int64_t v172; // [xsp+18h] [xbp-B8h]
  System_Int32_array *v173; // [xsp+20h] [xbp-B0h]
  int32_t v179; // [xsp+58h] [xbp-78h] BYREF
  int32_t v180; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v181; // [xsp+60h] [xbp-70h] BYREF
  int32_t v182; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v183; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_593A14D & 1) == 0 )
  {
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_int__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_byte___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&System_Func_int__int__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_21FFC50(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&Method_BattleResultRequest___c__beginRequest_b__5_0__);
    sub_21FFC50(&BattleResultRequest___c_TypeInfo);
    sub_21FFC50(&StringLiteral_24314/*"routeSelect"*/);
    sub_21FFC50(&StringLiteral_24236/*"result"*/);
    sub_21FFC50(&StringLiteral_24136/*"recordValueJson"*/);
    sub_21FFC50(&StringLiteral_18443/*"calledEnemyUniqueIds"*/);
    sub_21FFC50(&StringLiteral_24714/*"skillShiftNpcSvtIds"*/);
    sub_21FFC50(&StringLiteral_24080/*"raidResult"*/);
    sub_21FFC50(&StringLiteral_25792/*"useTreasureDevices"*/);
    sub_21FFC50(&StringLiteral_24135/*"recordType"*/);
    sub_21FFC50(&StringLiteral_17774/*"battleMissionTargetIds"*/);
    sub_21FFC50(&StringLiteral_922/*",["*/);
    sub_21FFC50(&StringLiteral_24715/*"skillShiftUniqueIds"*/);
    sub_21FFC50(&StringLiteral_19265/*"dataLostUniqueIds"*/);
    sub_21FFC50(&StringLiteral_25796/*"usedEquipSkillList"*/);
    sub_21FFC50(&StringLiteral_19771/*"elapsedTurn"*/);
    sub_21FFC50(&StringLiteral_24116/*"reachedWave"*/);
    sub_21FFC50(&StringLiteral_25797/*"usedTurnList"*/);
    sub_21FFC50(&StringLiteral_25087/*"svtCommonFlagList"*/);
    sub_21FFC50(&StringLiteral_17775/*"battleMissionTargetValues"*/);
    sub_21FFC50(&StringLiteral_24375/*"scores"*/);
    sub_21FFC50(&StringLiteral_26107/*"waveInfo"*/);
    sub_21FFC50(&StringLiteral_17786/*"battleStatus"*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_25242/*"tdPlayed"*/);
    sub_21FFC50(&StringLiteral_26032/*"voicePlayedList"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_26150/*"winResult"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_25066/*"superBossResult"*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    sub_21FFC50(&StringLiteral_17769/*"battleId"*/);
    sub_21FFC50(&StringLiteral_17776/*"battleResult"*/);
    sub_21FFC50(&StringLiteral_17295/*"action"*/);
    sub_21FFC50(&StringLiteral_17401/*"aliveUniqueIds"*/);
    byte_593A14D = 1;
  }
  v173 = aliveUniqueIds;
  v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v29,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v172 = battleId;
  v183 = battleId;
  Item = j_il2cpp_value_box_0(qword_594C090, &v183);
  if ( !v29 )
    goto LABEL_94;
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17769/*"battleId"*/,
    (Il2CppObject *)Item,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v182 = battleResult;
  v32 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v182);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17776/*"battleResult"*/,
    v32,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v181 = winResult;
  v33 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v181);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_26150/*"winResult"*/,
    v33,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24375/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17295/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v34);
  v35 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24080/*"raidResult"*/,
    v35,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v36 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_25066/*"superBossResult"*/,
    v36,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v180 = elapsedTurn;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v180);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_19771/*"elapsedTurn"*/,
    v37,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v179 = recordType;
  v38 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v179);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24135/*"recordType"*/,
    v38,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24136/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_94;
  v39 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_445164C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v40 = (Il2CppObject *)JsonManager__toJson(&v39->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_25242/*"tdPlayed"*/,
    v40,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_94;
  v41 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_25792/*"useTreasureDevices"*/,
    v41,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_25796/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_25087/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24715/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24714/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_18443/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24314/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_19265/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_94;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v44 = 0;
    if ( !superBossResult )
      goto LABEL_94;
  }
  else
  {
    v43 = 0;
    v44 = 0;
    do
    {
      if ( max_length == v43 )
        goto LABEL_93;
      v45 = raidResult->m_Items[v43];
      if ( !v45 )
        goto LABEL_94;
      ++v43;
      v44 += v45->fields.addDamage + v45->fields.day + (__int64)v45->fields.uniqueId;
    }
    while ( (max_length & ~(max_length >> 31)) != v43 );
    if ( !superBossResult )
LABEL_94:
      sub_21FFECC(Item, v31);
  }
  v46 = superBossResult->max_length;
  if ( v46 >= 1 )
  {
    v47 = 0;
    v48 = 0;
    while ( v46 != v47 )
    {
      v49 = superBossResult->m_Items[v47];
      if ( !v49 )
        goto LABEL_94;
      ++v47;
      v48 += v49->fields.addDamage + v49->fields.superBossId + (__int64)v49->fields.uniqueId;
      if ( (v46 & ~(v46 >> 31)) == v47 )
        goto LABEL_24;
    }
LABEL_93:
    sub_21FFED4(Item);
  }
  v48 = 0;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17401/*"aliveUniqueIds"*/,
    &v173->obj,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !v173 )
    goto LABEL_94;
  v50 = v173->max_length;
  if ( (int)v50 >= 1 )
  {
    v51 = (unsigned int)v50 & ~((int)v50 >> 31);
    v52 = 0;
    v53 = (unsigned int)v173->max_length;
    m_Items = v173->m_Items;
    while ( v53 )
    {
      v55 = *m_Items++;
      --v51;
      --v53;
      v52 += v55;
      if ( !v51 )
        goto LABEL_31;
    }
    goto LABEL_93;
  }
  v52 = 0;
LABEL_31:
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v56 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v31);
    v56 = NetworkManager_TypeInfo;
  }
  Bytes_76438544 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(
                                                                          v56->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0);
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(v44 - 4231125, 0);
  v59 = System_Linq_Enumerable__Concat_byte_(
          Bytes_76438544,
          v58,
          (const MethodInfo_3842A64 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v52 >= 0 )
    v60 = v52;
  else
    v60 = v52 + 1;
  v61 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(v60 >> 1, 0);
  v62 = System_Linq_Enumerable__Concat_byte_(
          v59,
          v61,
          (const MethodInfo_3842A64 *)Method_System_Linq_Enumerable_Concat_byte___);
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(
                                                               v172 - 0x7FFFFFFF,
                                                               0);
  v64 = System_Linq_Enumerable__Concat_byte_(
          v62,
          v63,
          (const MethodInfo_3842A64 *)Method_System_Linq_Enumerable_Concat_byte___);
  v65 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(v48 - 2469110, 0);
  v66 = System_Linq_Enumerable__Concat_byte_(
          v64,
          v65,
          (const MethodInfo_3842A64 *)Method_System_Linq_Enumerable_Concat_byte___);
  v68 = System_Linq_Enumerable__ToArray_byte_(
          v66,
          (const MethodInfo_38683BC *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v67);
  LODWORD(v183) = Crc32__Compute(v68, 0);
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C078, &v183);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17786/*"battleStatus"*/,
    v69,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v70 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v71 = voicePlayedArray->max_length;
    v72 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v71 >= 1 )
    {
      v73 = 0;
      while ( v73 < (unsigned int)v71 )
      {
        v74 = voicePlayedArray->m_Items[v73];
        if ( v74 && LODWORD(v74->max_length) == 2 )
        {
          if ( System_String__IsNullOrEmpty(v72, 0) )
          {
            Item = sub_21FFD10(string___TypeInfo, 5);
            if ( !Item )
              goto LABEL_94;
            v81 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            v82 = StringLiteral_16395/*"["*/;
            *(_QWORD *)(Item + 32) = StringLiteral_16395/*"["*/;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(Item + 32), v82, v75, v76, v77, v78, v79, v80);
            if ( !LODWORD(v74->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v74 + 32, 0);
            if ( (*(_DWORD *)(v81 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_93;
            *(_QWORD *)(v81 + 40) = Item;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 40), Item, v83, v84, v85, v86, v87, v88);
            if ( *(_DWORD *)(v81 + 24) <= 2u )
              goto LABEL_93;
            v95 = StringLiteral_869/*","*/;
            *(_QWORD *)(v81 + 48) = StringLiteral_869/*","*/;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 48), v95, v89, v90, v91, v92, v93, v94);
            if ( (v74->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v74 + 36, 0);
            if ( (*(_DWORD *)(v81 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_93;
            *(_QWORD *)(v81 + 56) = Item;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 56), Item, v96, v97, v98, v99, v100, v101);
            if ( *(_DWORD *)(v81 + 24) <= 4u )
              goto LABEL_93;
            v108 = StringLiteral_16659/*"]"*/;
            *(_QWORD *)(v81 + 64) = StringLiteral_16659/*"]"*/;
            v109 = (MissionNaviTransitionBoardItem_o *)(v81 + 64);
          }
          else
          {
            Item = sub_21FFD10(string___TypeInfo, 6);
            if ( !Item )
              goto LABEL_94;
            v81 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            *(_QWORD *)(Item + 32) = v72;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(Item + 32),
              (int32_t)v72,
              v110,
              v111,
              v112,
              v113,
              v114,
              v115);
            if ( (*(_DWORD *)(v81 + 24) & 0xFFFFFFFE) == 0 )
              goto LABEL_93;
            v122 = StringLiteral_922/*",["*/;
            *(_QWORD *)(v81 + 40) = StringLiteral_922/*",["*/;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 40), v122, v116, v117, v118, v119, v120, v121);
            if ( !LODWORD(v74->max_length) )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v74 + 32, 0);
            v70 = voicePlayedArray;
            if ( *(_DWORD *)(v81 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v81 + 48) = Item;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 48), Item, v123, v124, v125, v126, v127, v128);
            if ( (*(_DWORD *)(v81 + 24) & 0xFFFFFFFC) == 0 )
              goto LABEL_93;
            v135 = StringLiteral_869/*","*/;
            *(_QWORD *)(v81 + 56) = StringLiteral_869/*","*/;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 56), v135, v129, v130, v131, v132, v133, v134);
            if ( (v74->max_length & 0xFFFFFFFE) == 0 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v74 + 36, 0);
            if ( *(_DWORD *)(v81 + 24) <= 4u )
              goto LABEL_93;
            *(_QWORD *)(v81 + 64) = Item;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v81 + 64), Item, v136, v137, v138, v139, v140, v141);
            if ( *(_DWORD *)(v81 + 24) <= 5u )
              goto LABEL_93;
            v108 = StringLiteral_16659/*"]"*/;
            *(_QWORD *)(v81 + 72) = StringLiteral_16659/*"]"*/;
            v109 = (MissionNaviTransitionBoardItem_o *)(v81 + 72);
          }
          sub_21FFBF4(v109, v108, v102, v103, v104, v105, v106, v107);
          Item = (__int64)System_String__Concat_75483816((System_String_array *)v81, 0);
          v72 = (System_String_o *)Item;
        }
        LODWORD(v71) = v70->max_length;
        if ( (__int64)++v73 >= (int)v71 )
          goto LABEL_70;
      }
      goto LABEL_93;
    }
LABEL_70:
    v142 = (Il2CppObject *)System_String__Concat_75481624(
                             (System_String_o *)StringLiteral_16395/*"["*/,
                             v72,
                             (System_String_o *)StringLiteral_16659/*"]"*/,
                             0);
    System_Collections_Generic_Dictionary_object__object___Add(
      v29,
      (Il2CppObject *)StringLiteral_26032/*"voicePlayedList"*/,
      v142,
      (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_25797/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v143);
  v144 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_26107/*"waveInfo"*/,
    v144,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  LODWORD(v183) = waveNum;
  v145 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v183);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_24116/*"reachedWave"*/,
    v145,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !battleMissionValueDict )
    goto LABEL_94;
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           battleMissionValueDict,
           (const MethodInfo_3F5F124 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v148 = BattleResultRequest___c_TypeInfo;
  v149 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !*(&BattleResultRequest___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleResultRequest___c_TypeInfo, v147);
    v148 = BattleResultRequest___c_TypeInfo;
  }
  static_fields = v148->static_fields;
  _9__5_0 = static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !*(&v148->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v148, v147);
      static_fields = BattleResultRequest___c_TypeInfo->static_fields;
    }
    v152 = (Il2CppObject *)static_fields->__9;
    _9__5_0 = (System_Func_int__int__o *)sub_21FFEBC(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__5_0, v152, Method_BattleResultRequest___c__beginRequest_b__5_0__, 0);
    v153 = BattleResultRequest___c_TypeInfo->static_fields;
    v153->__9__5_0 = _9__5_0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v153->__9__5_0,
      (int32_t)_9__5_0,
      v154,
      v155,
      v156,
      v157,
      v158,
      v159);
  }
  v160 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                                v149,
                                                                (System_Func_TSource__TKey__o *)_9__5_0,
                                                                (const MethodInfo_3855438 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Item = (__int64)System_Linq_Enumerable__ToArray_int_(
                    v160,
                    (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Item )
    goto LABEL_94;
  v161 = (Il2CppObject *)Item;
  Item = sub_21FFD10(int___TypeInfo, *(unsigned int *)(Item + 24));
  monitor = v161[1].monitor;
  v163 = Item;
  if ( (int)monitor >= 1 )
  {
    v164 = 0;
    while ( v164 < (unsigned int)monitor )
    {
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               battleMissionValueDict,
               *((_DWORD *)&v161[2].klass + v164),
               (const MethodInfo_3F5F3DC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !v163 )
        goto LABEL_94;
      if ( v164 >= *(unsigned int *)(v163 + 24) )
        break;
      *(_DWORD *)(v163 + 32 + 4 * v164++) = Item;
      LODWORD(monitor) = v161[1].monitor;
      if ( (__int64)v164 >= (int)monitor )
        goto LABEL_87;
    }
    goto LABEL_93;
  }
LABEL_87:
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17774/*"battleMissionTargetIds"*/,
    v161,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v29,
    (Il2CppObject *)StringLiteral_17775/*"battleMissionTargetValues"*/,
    (Il2CppObject *)v163,
    (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v165 = (MiniMessagePack_MiniMessagePacker_o *)sub_21FFEBC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v165, 0);
  if ( !v165 )
    goto LABEL_94;
  v167 = MiniMessagePack_MiniMessagePacker__PackClass(v165, (Il2CppObject *)v29, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v166);
  v169 = CatAndMouseGame__CatGame5Bytes(v167, 0);
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v168);
  v170 = System_Convert__ToBase64String(v169, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_24236/*"result"*/, v170, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


void BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  __int64 v4; // [xsp+0h] [xbp-60h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *v5; // [xsp+8h] [xbp-58h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v6; // [xsp+10h] [xbp-50h] BYREF

  if ( (byte_593A14F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    byte_593A14F = 1;
  }
  paramString = this->fields.paramString;
  memset(&v6, 0, sizeof(v6));
  if ( !paramString )
    sub_21FFECC(0, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v6,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  v4 = 0;
  v5 = &v6;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v6,
            (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v6,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_593A14C & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_9497/*"MockBattleResultRequest"*/);
    byte_593A14C = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9497/*"MockBattleResultRequest"*/, 0);
}


System_String_o *BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A14B & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_17746/*"battle/result"*/);
    byte_593A14B = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_17746/*"battle/result"*/, 0);
}


void BattleResultRequest__requestCompleted(
        BattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  ResponseData_o *v6; // x0
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  __int64 v10; // x1
  System_String_o *v11; // x1

  if ( (byte_593A14E & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&ServantCommentManager_TypeInfo);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A14E = 1;
  }
  TopHomeRequest__clearExpirationDate(0);
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, v5);
  v6 = ResponseCommandKind__SearchData(22, responseList, 0);
  if ( v6 && (v7 = v6, ResponseData__checkError_51190916(v6, 0)) && (success = (Il2CppObject *)v7->fields.success) != 0 )
  {
    if ( !*(&ServantCommentManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v8);
    ServantCommentManager__UpdateChapter(0);
    if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v10);
    v11 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_23290/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0);
}


void BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w1
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Int32_array_array *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Int32_array *v24; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct BattleResultRequest_RaidResult_array *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct BattleResultRequest_SuperBossResult_array *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Int32_array *v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_Collections_Generic_Dictionary_string__object__c *v52; // x0
  System_Collections_Generic_Dictionary_object__object__o *v53; // x20
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_Collections_Generic_List_object__o *v60; // x20
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7
  System_Collections_Generic_Dictionary_int__int__o *v67; // x20
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  __int64 v74; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  struct System_Int32_array *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  struct System_Int64_array *v89; // x0
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  struct System_Int32_array *v96; // x0
  System_String_o *v97; // x2
  System_String_o *v98; // x3
  int32_t v99; // w4
  int32_t v100; // w5
  bool v101; // w6
  bool v102; // w7

  if ( (byte_593A152 & 1) == 0 )
  {
    sub_21FFC50(&BattleData_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_21FFC50(&int_____TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&long___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_21FFC50(&BattleResultRequest_RaidResult___TypeInfo);
    sub_21FFC50(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593A152 = 1;
  }
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.scores, v9, v2, v3, v4, v5, v6, v7);
  v10 = (int)StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.action, v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct System_Int32_array_array *)sub_21FFD10(int_____TypeInfo, 0);
  this->fields.voicePlayedArray = v17;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.voicePlayedArray,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  this->fields.aliveUniqueIds = v24;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.aliveUniqueIds,
    (int32_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (struct BattleResultRequest_RaidResult_array *)sub_21FFD10(BattleResultRequest_RaidResult___TypeInfo, 0);
  this->fields.raidResult = v31;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.raidResult, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (struct BattleResultRequest_SuperBossResult_array *)sub_21FFD10(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0);
  this->fields.superBossResult = v38;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.superBossResult,
    (int32_t)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  this->fields.usedTurnArray = v45;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usedTurnArray,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
  this->fields.recordType = 1;
  v53 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(v52);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v53,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v53;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.recordJson, (int32_t)v53, v54, v55, v56, v57, v58, v59);
  v60 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v60,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v60;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.firstNpPlayList,
    (int32_t)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  v67 = (System_Collections_Generic_Dictionary_int__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v67,
    (const MethodInfo_3F5EAD4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v67;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.usedEquipSkillDict,
    (int32_t)v67,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
  if ( !*(&BattleData_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v74);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.svtCommonFlagDict,
    (int32_t)SavedServantCommonFlagDict,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  v82 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  this->fields.skillShiftUniqueIds = v82;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillShiftUniqueIds,
    (int32_t)v82,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  v89 = (struct System_Int64_array *)sub_21FFD10(long___TypeInfo, 0);
  this->fields.skillShiftNpcSvtIds = v89;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.skillShiftNpcSvtIds,
    (int32_t)v89,
    v90,
    v91,
    v92,
    v93,
    v94,
    v95);
  v96 = (struct System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
  this->fields.routeSelect = v96;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.routeSelect,
    (int32_t)v96,
    v97,
    v98,
    v99,
    v100,
    v101,
    v102);
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
  __int64 v7; // x12
  int *v8; // x13
  struct BattleResultRequest_SuperBossResult_array *superBossResult; // x8
  int v10; // w9
  int64_t v11; // x21
  int v12; // w10
  __int64 v13; // x12
  int *v14; // x13
  struct System_Int32_array *aliveUniqueIds; // x11
  il2cpp_array_size_t v16; // x10
  __int64 v17; // x9
  __int64 v18; // x8
  __int64 v19; // x10
  int32_t *m_Items; // x11
  __int64 v21; // t1
  int64_t v22; // x22
  NetworkManager_c *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_76438544; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  __int64 v33; // x1
  System_Byte_array *v34; // x19

  v2 = this;
  if ( (byte_593A150 & 1) == 0 )
  {
    sub_21FFC50(&Crc32_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_byte___);
    this = (BattleResultRequest_Argument_o *)sub_21FFC50(&NetworkManager_TypeInfo);
    byte_593A150 = 1;
  }
  raidResult = v2->fields.raidResult;
  if ( !raidResult )
    goto LABEL_34;
  max_length = raidResult->max_length;
  v5 = -4231125;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0;
    do
    {
      if ( max_length == v6 )
LABEL_33:
        sub_21FFED4(this);
      v8 = (int *)raidResult->m_Items[v6];
      if ( !v8 )
        goto LABEL_34;
      ++v6;
      v7 += v8[6] + v8[5] + (__int64)v8[4];
    }
    while ( (max_length & ~(max_length >> 31)) != v6 );
    v5 = v7 - 4231125;
  }
  superBossResult = v2->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_34;
  v10 = superBossResult->max_length;
  v11 = -2469110;
  if ( v10 >= 1 )
  {
    v12 = 0;
    v13 = 0;
    do
    {
      if ( v10 == v12 )
        goto LABEL_33;
      v14 = (int *)superBossResult->m_Items[v12];
      if ( !v14 )
        goto LABEL_34;
      ++v12;
      v13 += v14[6] + v14[4] + (__int64)v14[5];
    }
    while ( (v10 & ~(v10 >> 31)) != v12 );
    v11 = v13 - 2469110;
  }
  aliveUniqueIds = v2->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_34:
    sub_21FFECC(this, method);
  v16 = aliveUniqueIds->max_length;
  if ( (int)v16 < 1 )
  {
    v22 = 0;
  }
  else
  {
    v17 = (unsigned int)v16 & ~((int)v16 >> 31);
    v18 = 0;
    v19 = (unsigned int)aliveUniqueIds->max_length;
    m_Items = aliveUniqueIds->m_Items;
    do
    {
      if ( !v19 )
        goto LABEL_33;
      v21 = *m_Items++;
      --v17;
      --v19;
      v18 += v21;
    }
    while ( v17 );
    v22 = v18 / 2;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  v23 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    v23 = NetworkManager_TypeInfo;
  }
  Bytes_76438544 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(
                                                                          v23->static_fields->userIdNumber
                                                                        + v2->fields.battleResult,
                                                                          0);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(v5, 0);
  v26 = System_Linq_Enumerable__Concat_byte_(
          Bytes_76438544,
          v25,
          (const MethodInfo_3842A64 *)Method_System_Linq_Enumerable_Concat_byte___);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(v22, 0);
  v28 = System_Linq_Enumerable__Concat_byte_(
          v26,
          v27,
          (const MethodInfo_3842A64 *)Method_System_Linq_Enumerable_Concat_byte___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0);
  v30 = System_Linq_Enumerable__Concat_byte_(
          v28,
          v29,
          (const MethodInfo_3842A64 *)Method_System_Linq_Enumerable_Concat_byte___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_76438544(v11, 0);
  v32 = System_Linq_Enumerable__Concat_byte_(
          v30,
          v31,
          (const MethodInfo_3842A64 *)Method_System_Linq_Enumerable_Concat_byte___);
  v34 = System_Linq_Enumerable__ToArray_byte_(
          v32,
          (const MethodInfo_38683BC *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !*(&Crc32_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v33);
  return Crc32__Compute(v34, 0);
}


System_String_o *BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  BattleResultRequest_Argument_o *v2; // x19
  struct System_Int32_array_array *voicePlayedArray; // x8
  BattleResultRequest_Argument_o *v4; // x21
  unsigned __int64 v5; // x28
  unsigned __int64 max_length_low; // x9
  System_Int32_array *v7; // x29
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BattleResultRequest_Argument_o *v14; // x20
  int32_t v15; // w1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  int32_t v28; // w1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  int32_t v41; // w1
  MissionNaviTransitionBoardItem_o *p_raidResult; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  int32_t v55; // w1
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  int32_t v68; // w1
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7

  v2 = this;
  if ( (byte_593A151 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_922/*",["*/);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (BattleResultRequest_Argument_o *)sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_593A151 = 1;
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
          this = (BattleResultRequest_Argument_o *)sub_21FFD10(string___TypeInfo, 5);
          if ( !this )
            goto LABEL_31;
          v14 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v15 = StringLiteral_16395/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_16395/*"["*/;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.scores, v15, v8, v9, v10, v11, v12, v13);
          if ( !LODWORD(v7->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0);
          if ( (v14->fields.battleResult & 0xFFFFFFFE) == 0 )
            goto LABEL_33;
          v14->fields.action = (struct System_String_o *)this;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v14->fields.action,
            (int32_t)this,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21);
          if ( v14->fields.battleResult <= 2u )
            goto LABEL_33;
          v28 = StringLiteral_869/*","*/;
          v14->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_869/*","*/;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v14->fields.voicePlayedArray,
            v28,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          if ( (v7->max_length & 0xFFFFFFFE) == 0 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0);
          if ( (v14->fields.battleResult & 0xFFFFFFFC) == 0 )
            goto LABEL_33;
          v14->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v14->fields.aliveUniqueIds,
            (int32_t)this,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          if ( v14->fields.battleResult <= 4u )
            goto LABEL_33;
          v41 = StringLiteral_16659/*"]"*/;
          v14->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16659/*"]"*/;
          p_raidResult = (MissionNaviTransitionBoardItem_o *)&v14->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_21FFD10(string___TypeInfo, 6);
          if ( !this )
            goto LABEL_31;
          v14 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v4;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.scores,
            (int32_t)v4,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
          if ( (v14->fields.battleResult & 0xFFFFFFFE) == 0 )
            goto LABEL_33;
          v55 = StringLiteral_922/*",["*/;
          v14->fields.action = (struct System_String_o *)StringLiteral_922/*",["*/;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->fields.action, v55, v49, v50, v51, v52, v53, v54);
          if ( !LODWORD(v7->max_length) )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0);
          if ( v14->fields.battleResult <= 2u )
            goto LABEL_33;
          v14->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v14->fields.voicePlayedArray,
            (int32_t)this,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          if ( (v14->fields.battleResult & 0xFFFFFFFC) == 0
            || (v68 = StringLiteral_869/*","*/,
                v14->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_869/*","*/,
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v14->fields.aliveUniqueIds,
                  v68,
                  v62,
                  v63,
                  v64,
                  v65,
                  v66,
                  v67),
                (v7->max_length & 0xFFFFFFFE) == 0)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0),
                v14->fields.battleResult <= 4u)
            || (v14->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_21FFBF4(
                  (MissionNaviTransitionBoardItem_o *)&v14->fields.raidResult,
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
            sub_21FFED4(this);
          }
          v41 = StringLiteral_16659/*"]"*/;
          v14->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16659/*"]"*/;
          p_raidResult = (MissionNaviTransitionBoardItem_o *)&v14->fields.superBossResult;
        }
        sub_21FFBF4(p_raidResult, v41, v35, v36, v37, v38, v39, v40);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_75483816((System_String_array *)v14, 0);
        v4 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v5;
      if ( !voicePlayedArray )
LABEL_31:
        sub_21FFECC(this, method);
    }
  }
  return System_String__Concat_75481624(
           (System_String_o *)StringLiteral_16395/*"["*/,
           (System_String_o *)v4,
           (System_String_o *)StringLiteral_16659/*"]"*/,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593A153 & 1) == 0 )
  {
    sub_21FFC50(&BattleResultRequest___c_TypeInfo);
    byte_593A153 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleResultRequest___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleResultRequest___c_TypeInfo->static_fields->__9 = (struct BattleResultRequest___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleResultRequest___c_TypeInfo->static_fields,
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