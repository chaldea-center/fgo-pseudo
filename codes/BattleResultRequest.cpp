void __fastcall BattleResultRequest___ctor(BattleResultRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


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
        System_Collections_Generic_Dictionary_int__int__o *battleMissionValueDict,
        const MethodInfo *method)
{
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
  System_Collections_Generic_Dictionary_object__object__o *v85; // x21
  __int64 v86; // x2
  __int64 v87; // x3
  __int64 v88; // x4
  __int64 Item; // x0
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x3
  __int64 v93; // x4
  Il2CppObject *v94; // x0
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  Il2CppObject *v98; // x0
  Il2CppObject *v99; // x0
  Il2CppObject *v100; // x0
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  Il2CppObject *v104; // x0
  __int64 v105; // x2
  __int64 v106; // x3
  __int64 v107; // x4
  Il2CppObject *v108; // x0
  System_Object_array *v109; // x0
  Il2CppObject *v110; // x0
  Il2CppObject *v111; // x0
  __int64 v112; // x2
  signed int max_length; // w8
  int v114; // w9
  __int64 v115; // x22
  BattleResultRequest_RaidResult_o *v116; // x10
  signed int v117; // w8
  int v118; // w9
  __int64 v119; // x20
  BattleResultRequest_SuperBossResult_o *v120; // x10
  __int64 v121; // x8
  __int64 v122; // x23
  __int64 v123; // x9
  int32_t *v124; // x10
  __int64 v125; // t1
  NetworkManager_c *v126; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_63607448; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v129; // x0
  __int64 v130; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v133; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v134; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v135; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v136; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v137; // x0
  System_Byte_array *v138; // x19
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  Il2CppObject *v142; // x0
  System_Int32_array_array *v143; // x10
  __int64 v144; // x8
  System_String_o *v145; // x22
  unsigned __int64 v146; // x25
  System_Int32_array *v147; // x29
  const MethodInfo *v148; // x3
  __int64 v149; // x19
  int32_t v150; // w1
  const MethodInfo *v151; // x3
  const MethodInfo *v152; // x3
  int32_t v153; // w1
  const MethodInfo *v154; // x3
  const MethodInfo *v155; // x3
  int32_t v156; // w1
  CGThumbnailListItem_o *v157; // x0
  const MethodInfo *v158; // x3
  const MethodInfo *v159; // x3
  int32_t v160; // w1
  const MethodInfo *v161; // x3
  const MethodInfo *v162; // x3
  int32_t v163; // w1
  const MethodInfo *v164; // x3
  Il2CppObject *v165; // x0
  Il2CppObject *v166; // x0
  __int64 v167; // x2
  __int64 v168; // x3
  __int64 v169; // x4
  Il2CppObject *v170; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  BattleResultRequest___c_c *v172; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v173; // x19
  System_Func_int__int__o *_9__5_0; // x22
  Il2CppObject *v175; // x23
  struct BattleResultRequest___c_StaticFields *static_fields; // x0
  int32_t v177; // w2
  const MethodInfo *v178; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v179; // x0
  Il2CppObject *v180; // x19
  void *monitor; // x8
  __int64 v182; // x22
  unsigned __int64 v183; // x23
  MiniMessagePack_MiniMessagePacker_o *v184; // x19
  System_Byte_array *v185; // x19
  System_Byte_array *v186; // x19
  System_String_o *v187; // x0
  int64_t v189; // [xsp+10h] [xbp-C0h]
  int32_t v195; // [xsp+58h] [xbp-78h] BYREF
  int32_t v196; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v197; // [xsp+60h] [xbp-70h] BYREF
  int32_t v198; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v199; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B46435 & 1) == 0 )
  {
    sub_1BDB878(&CatAndMouseGame_TypeInfo, battleId);
    sub_1BDB878(&System_Convert_TypeInfo, v29);
    sub_1BDB878(&Crc32_TypeInfo, v30);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v31);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v32);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v33);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v34);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v35);
    sub_1BDB878(&Method_System_Linq_Enumerable_Concat_byte___, v36);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderBy_int__int___, v37);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_byte___, v38);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v39);
    sub_1BDB878(&System_Func_int__int__TypeInfo, v40);
    sub_1BDB878(&int___TypeInfo, v41);
    sub_1BDB878(&int_TypeInfo, v42);
    sub_1BDB878(&long_TypeInfo, v43);
    sub_1BDB878(&JsonManager_TypeInfo, v44);
    sub_1BDB878(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v45);
    sub_1BDB878(&MiniMessagePack_MiniMessagePacker_TypeInfo, v46);
    sub_1BDB878(&NetworkManager_TypeInfo, v47);
    sub_1BDB878(&string___TypeInfo, v48);
    sub_1BDB878(&Method_BattleResultRequest___c__beginRequest_b__5_0__, v49);
    sub_1BDB878(&BattleResultRequest___c_TypeInfo, v50);
    sub_1BDB878(&uint_TypeInfo, v51);
    sub_1BDB878(&StringLiteral_23174/*"routeSelect"*/, v52);
    sub_1BDB878(&StringLiteral_23098/*"result"*/, v53);
    sub_1BDB878(&StringLiteral_23009/*"recordValueJson"*/, v54);
    sub_1BDB878(&StringLiteral_17710/*"calledEnemyUniqueIds"*/, v55);
    sub_1BDB878(&StringLiteral_23549/*"skillShiftNpcSvtIds"*/, v56);
    sub_1BDB878(&StringLiteral_22956/*"raidResult"*/, v57);
    sub_1BDB878(&StringLiteral_24551/*"useTreasureDevices"*/, v58);
    sub_1BDB878(&StringLiteral_23008/*"recordType"*/, v59);
    sub_1BDB878(&StringLiteral_17095/*"battleMissionTargetIds"*/, v60);
    sub_1BDB878(&StringLiteral_870/*",["*/, v61);
    sub_1BDB878(&StringLiteral_23550/*"skillShiftUniqueIds"*/, v62);
    sub_1BDB878(&StringLiteral_18480/*"dataLostUniqueIds"*/, v63);
    sub_1BDB878(&StringLiteral_24555/*"usedEquipSkillList"*/, v64);
    sub_1BDB878(&StringLiteral_18951/*"elapsedTurn"*/, v65);
    sub_1BDB878(&StringLiteral_22989/*"reachedWave"*/, v66);
    sub_1BDB878(&StringLiteral_24556/*"usedTurnList"*/, v67);
    sub_1BDB878(&StringLiteral_23895/*"svtCommonFlagList"*/, v68);
    sub_1BDB878(&StringLiteral_17096/*"battleMissionTargetValues"*/, v69);
    sub_1BDB878(&StringLiteral_23243/*"scores"*/, v70);
    sub_1BDB878(&StringLiteral_24860/*"waveInfo"*/, v71);
    sub_1BDB878(&StringLiteral_17105/*"battleStatus"*/, v72);
    sub_1BDB878(&StringLiteral_820/*","*/, v73);
    sub_1BDB878(&StringLiteral_24060/*"tdPlayed"*/, v74);
    sub_1BDB878(&StringLiteral_24784/*"voicePlayedList"*/, v75);
    sub_1BDB878(&StringLiteral_15782/*"["*/, v76);
    sub_1BDB878(&StringLiteral_24897/*"winResult"*/, v77);
    sub_1BDB878(&StringLiteral_1/*""*/, v78);
    sub_1BDB878(&StringLiteral_23878/*"superBossResult"*/, v79);
    sub_1BDB878(&StringLiteral_16038/*"]"*/, v80);
    sub_1BDB878(&StringLiteral_17092/*"battleId"*/, v81);
    sub_1BDB878(&StringLiteral_17097/*"battleResult"*/, v82);
    sub_1BDB878(&StringLiteral_16636/*"action"*/, v83);
    sub_1BDB878(&StringLiteral_16721/*"aliveUniqueIds"*/, v84);
    byte_4B46435 = 1;
  }
  v85 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v85,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v189 = battleId;
  v199 = battleId;
  Item = j_il2cpp_value_box_0(long_TypeInfo, &v199, v86, v87, v88);
  if ( !v85 )
    goto LABEL_94;
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_17092/*"battleId"*/,
    (Il2CppObject *)Item,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v198 = battleResult;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v198, v91, v92, v93);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_17097/*"battleResult"*/,
    v94,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v197 = winResult;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v197, v95, v96, v97);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24897/*"winResult"*/,
    v98,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23243/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_16636/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v99 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_22956/*"raidResult"*/,
    v99,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v100 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23878/*"superBossResult"*/,
    v100,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v196 = elapsedTurn;
  v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v196, v101, v102, v103);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_18951/*"elapsedTurn"*/,
    v104,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v195 = recordType;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v195, v105, v106, v107);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23008/*"recordType"*/,
    v108,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23009/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_94;
  v109 = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)firstNpPlayList,
           (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v110 = (Il2CppObject *)JsonManager__toJson(&v109->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24060/*"tdPlayed"*/,
    v110,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_94;
  v111 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
                           playerServantNoblePhantasmUsageData,
                           0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24551/*"useTreasureDevices"*/,
    v111,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24555/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23895/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23550/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23549/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_17710/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23174/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_18480/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_94;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v115 = 0LL;
    if ( !superBossResult )
      goto LABEL_94;
  }
  else
  {
    v114 = 0;
    v115 = 0LL;
    do
    {
      if ( max_length == v114 )
        goto LABEL_93;
      v116 = raidResult->m_Items[v114];
      if ( !v116 )
        goto LABEL_94;
      ++v114;
      v115 += v116->fields.addDamage + (__int64)v116->fields.day + v116->fields.uniqueId;
    }
    while ( max_length != v114 );
    if ( !superBossResult )
LABEL_94:
      sub_1BDBAD4(Item, v90);
  }
  v117 = superBossResult->max_length;
  if ( v117 >= 1 )
  {
    v118 = 0;
    v119 = 0LL;
    while ( v117 != v118 )
    {
      v120 = superBossResult->m_Items[v118];
      if ( !v120 )
        goto LABEL_94;
      ++v118;
      v119 += v120->fields.addDamage + (__int64)v120->fields.superBossId + v120->fields.uniqueId;
      if ( v117 == v118 )
        goto LABEL_24;
    }
LABEL_93:
    sub_1BDBADC(Item, v90, v112);
  }
  v119 = 0LL;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_16721/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_94;
  v121 = aliveUniqueIds->max_length;
  if ( v121 << 32 >= 1 )
  {
    v122 = 0LL;
    v123 = (int)v121;
    v124 = &aliveUniqueIds->m_Items[1];
    while ( v121 )
    {
      v125 = *v124++;
      --v123;
      --v121;
      v122 += v125;
      if ( !v123 )
        goto LABEL_31;
    }
    goto LABEL_93;
  }
  v122 = 0LL;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, v90);
    byte_4B3ED56 = 1;
  }
  v126 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v126 = NetworkManager_TypeInfo;
  }
  Bytes_63607448 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(
                                                                          v126->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0LL);
  v128 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(
                                                                v115 - 4231125,
                                                                0LL);
  v129 = System_Linq_Enumerable__Concat_byte_(
           Bytes_63607448,
           v128,
           (const MethodInfo_304C358 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v122 >= 0 )
    v130 = v122;
  else
    v130 = v122 + 1;
  v131 = v129;
  v132 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(v130 >> 1, 0LL);
  v133 = System_Linq_Enumerable__Concat_byte_(
           v131,
           v132,
           (const MethodInfo_304C358 *)Method_System_Linq_Enumerable_Concat_byte___);
  v134 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(
                                                                v189 - 0x7FFFFFFF,
                                                                0LL);
  v135 = System_Linq_Enumerable__Concat_byte_(
           v133,
           v134,
           (const MethodInfo_304C358 *)Method_System_Linq_Enumerable_Concat_byte___);
  v136 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(
                                                                v119 - 2469110,
                                                                0LL);
  v137 = System_Linq_Enumerable__Concat_byte_(
           v135,
           v136,
           (const MethodInfo_304C358 *)Method_System_Linq_Enumerable_Concat_byte___);
  v138 = System_Linq_Enumerable__ToArray_byte_(
           v137,
           (const MethodInfo_3070500 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v199) = Crc32__Compute(v138, 0LL);
  v142 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v199, v139, v140, v141);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_17105/*"battleStatus"*/,
    v142,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v143 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v144 = *(_QWORD *)&voicePlayedArray->max_length;
    v145 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v144 >= 1 )
    {
      v146 = 0LL;
      while ( v146 < (unsigned int)v144 )
      {
        v147 = voicePlayedArray->m_Items[v146];
        if ( v147 && v147->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty(v145, 0LL) )
          {
            Item = sub_1BDB920(string___TypeInfo, 5LL);
            if ( !Item )
              goto LABEL_94;
            v149 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            v150 = StringLiteral_15782/*"["*/;
            *(_QWORD *)(Item + 32) = StringLiteral_15782/*"["*/;
            sub_1BDB81C((CGThumbnailListItem_o *)(Item + 32), v150, v112, v148);
            if ( !v147->max_length )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v147 + 32, 0LL);
            if ( *(_DWORD *)(v149 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v149 + 40) = Item;
            sub_1BDB81C((CGThumbnailListItem_o *)(v149 + 40), Item, v112, v151);
            if ( *(_DWORD *)(v149 + 24) <= 2u )
              goto LABEL_93;
            v153 = (int)StringLiteral_820/*","*/;
            *(_QWORD *)(v149 + 48) = StringLiteral_820/*","*/;
            sub_1BDB81C((CGThumbnailListItem_o *)(v149 + 48), v153, v112, v152);
            if ( v147->max_length <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v147 + 36, 0LL);
            if ( *(_DWORD *)(v149 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v149 + 56) = Item;
            sub_1BDB81C((CGThumbnailListItem_o *)(v149 + 56), Item, v112, v154);
            if ( *(_DWORD *)(v149 + 24) <= 4u )
              goto LABEL_93;
            v156 = StringLiteral_16038/*"]"*/;
            *(_QWORD *)(v149 + 64) = StringLiteral_16038/*"]"*/;
            v157 = (CGThumbnailListItem_o *)(v149 + 64);
          }
          else
          {
            Item = sub_1BDB920(string___TypeInfo, 6LL);
            if ( !Item )
              goto LABEL_94;
            v149 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            *(_QWORD *)(Item + 32) = v145;
            sub_1BDB81C((CGThumbnailListItem_o *)(Item + 32), (int32_t)v145, v112, v158);
            if ( *(_DWORD *)(v149 + 24) <= 1u )
              goto LABEL_93;
            v160 = StringLiteral_870/*",["*/;
            *(_QWORD *)(v149 + 40) = StringLiteral_870/*",["*/;
            sub_1BDB81C((CGThumbnailListItem_o *)(v149 + 40), v160, v112, v159);
            if ( !v147->max_length )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v147 + 32, 0LL);
            if ( *(_DWORD *)(v149 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v149 + 48) = Item;
            sub_1BDB81C((CGThumbnailListItem_o *)(v149 + 48), Item, v112, v161);
            if ( *(_DWORD *)(v149 + 24) <= 3u )
              goto LABEL_93;
            v163 = (int)StringLiteral_820/*","*/;
            *(_QWORD *)(v149 + 56) = StringLiteral_820/*","*/;
            sub_1BDB81C((CGThumbnailListItem_o *)(v149 + 56), v163, v112, v162);
            if ( v147->max_length <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v147 + 36, 0LL);
            if ( *(_DWORD *)(v149 + 24) <= 4u )
              goto LABEL_93;
            *(_QWORD *)(v149 + 64) = Item;
            sub_1BDB81C((CGThumbnailListItem_o *)(v149 + 64), Item, v112, v164);
            if ( *(_DWORD *)(v149 + 24) <= 5u )
              goto LABEL_93;
            v156 = StringLiteral_16038/*"]"*/;
            *(_QWORD *)(v149 + 72) = StringLiteral_16038/*"]"*/;
            v157 = (CGThumbnailListItem_o *)(v149 + 72);
          }
          sub_1BDB81C(v157, v156, v112, v155);
          Item = (__int64)System_String__Concat_62612776((System_String_array *)v149, 0LL);
          v143 = voicePlayedArray;
          v145 = (System_String_o *)Item;
        }
        LODWORD(v144) = v143->max_length;
        if ( (__int64)++v146 >= (int)v144 )
          goto LABEL_70;
      }
      goto LABEL_93;
    }
LABEL_70:
    v165 = (Il2CppObject *)System_String__Concat_62610508(
                             (System_String_o *)StringLiteral_15782/*"["*/,
                             v145,
                             (System_String_o *)StringLiteral_16038/*"]"*/,
                             0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v85,
      (Il2CppObject *)StringLiteral_24784/*"voicePlayedList"*/,
      v165,
      (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24556/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v166 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24860/*"waveInfo"*/,
    v166,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  LODWORD(v199) = waveNum;
  v170 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v199, v167, v168, v169);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_22989/*"reachedWave"*/,
    v170,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !battleMissionValueDict )
    goto LABEL_94;
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           battleMissionValueDict,
           (const MethodInfo_333252C *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v172 = BattleResultRequest___c_TypeInfo;
  v173 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !BattleResultRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultRequest___c_TypeInfo);
    v172 = BattleResultRequest___c_TypeInfo;
  }
  _9__5_0 = v172->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v172->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v172);
      v172 = BattleResultRequest___c_TypeInfo;
    }
    v175 = (Il2CppObject *)v172->static_fields->__9;
    _9__5_0 = (System_Func_int__int__o *)sub_1BDBAC4(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__5_0, v175, Method_BattleResultRequest___c__beginRequest_b__5_0__, 0LL);
    static_fields = BattleResultRequest___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v177, v178);
  }
  v179 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                                v173,
                                                                (System_Func_TSource__TKey__o *)_9__5_0,
                                                                (const MethodInfo_305F35C *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Item = (__int64)System_Linq_Enumerable__ToArray_int_(
                    v179,
                    (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Item )
    goto LABEL_94;
  v180 = (Il2CppObject *)Item;
  Item = sub_1BDB920(int___TypeInfo, *(unsigned int *)(Item + 24));
  monitor = v180[1].monitor;
  v182 = Item;
  if ( (int)monitor >= 1 )
  {
    v183 = 0LL;
    while ( v183 < (unsigned int)monitor )
    {
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               battleMissionValueDict,
               *((_DWORD *)&v180[2].klass + v183),
               (const MethodInfo_33327CC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !v182 )
        goto LABEL_94;
      if ( v183 >= *(unsigned int *)(v182 + 24) )
        break;
      *(_DWORD *)(v182 + 32 + 4 * v183) = Item;
      LODWORD(monitor) = v180[1].monitor;
      if ( (__int64)++v183 >= (int)monitor )
        goto LABEL_87;
    }
    goto LABEL_93;
  }
LABEL_87:
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_17095/*"battleMissionTargetIds"*/,
    v180,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_17096/*"battleMissionTargetValues"*/,
    (Il2CppObject *)v182,
    (const MethodInfo_33A0230 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v184 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BDBAC4(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v184, 0LL);
  if ( !v184 )
    goto LABEL_94;
  v185 = MiniMessagePack_MiniMessagePacker__PackClass(v184, (Il2CppObject *)v85, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v186 = CatAndMouseGame__CatGame5Bytes(v185, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v187 = System_Convert__ToBase64String(v186, 0LL);
  RequestBase__addField_43151112((RequestBase_o *)this, (System_String_o *)StringLiteral_23098/*"result"*/, v187, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4B46437 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v5);
    byte_4B46437 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1BDBAD4(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_33A0660 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v7,
            (const MethodInfo_349BF94 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_349C0B4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4B46434 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_9128/*"MockBattleResultRequest"*/, v2);
    byte_4B46434 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9128/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B46433 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17072/*"battle/result"*/, v2);
    byte_4B46433 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_17072/*"battle/result"*/, 0LL);
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
  System_String_o *v11; // x1

  if ( (byte_4B46436 & 1) == 0 )
  {
    sub_1BDB878(&JsonManager_TypeInfo, responseList);
    sub_1BDB878(&ResponseCommandKind_TypeInfo, v5);
    sub_1BDB878(&ServantCommentManager_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v7);
    byte_4B46436 = 1;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v8
    && (v9 = v8, ResponseData__checkError_43151432(v8, 0LL))
    && (success = (Il2CppObject *)v9->fields.success) != 0LL )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__UpdateChapter(0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_22233/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
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

  if ( (byte_4B4643A & 1) == 0 )
  {
    sub_1BDB878(&BattleData_TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8);
    sub_1BDB878(&int_____TypeInfo, v9);
    sub_1BDB878(&int___TypeInfo, v10);
    sub_1BDB878(&long___TypeInfo, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v12);
    sub_1BDB878(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v13);
    sub_1BDB878(&BattleResultRequest_RaidResult___TypeInfo, v14);
    sub_1BDB878(&BattleResultRequest_SuperBossResult___TypeInfo, v15);
    sub_1BDB878(&StringLiteral_1/*""*/, v16);
    byte_4B4643A = 1;
  }
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.scores, v17, v2, v3);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.action, v18, v19, v20);
  v21 = (struct System_Int32_array_array *)sub_1BDB920(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v21;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.voicePlayedArray, (int32_t)v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v24;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.aliveUniqueIds, (int32_t)v24, v25, v26);
  v27 = (struct BattleResultRequest_RaidResult_array *)sub_1BDB920(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v27;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.raidResult, (int32_t)v27, v28, v29);
  v30 = (struct BattleResultRequest_SuperBossResult_array *)sub_1BDB920(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v30;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.superBossResult, (int32_t)v30, v31, v32);
  v33 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v33;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.usedTurnArray, (int32_t)v33, v34, v35);
  this->fields.recordType = 1;
  v36 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v36,
    (const MethodInfo_339F880 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v36;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.recordJson, (int32_t)v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v39;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.firstNpPlayList, (int32_t)v39, v40, v41);
  v42 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BDBAC4(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v42,
    (const MethodInfo_3331EA4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v42;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.usedEquipSkillDict, (int32_t)v42, v43, v44);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.svtCommonFlagDict, (int32_t)SavedServantCommonFlagDict, v46, v47);
  v48 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v48;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillShiftUniqueIds, (int32_t)v48, v49, v50);
  v51 = (struct System_Int64_array *)sub_1BDB920(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v51;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.skillShiftNpcSvtIds, (int32_t)v51, v52, v53);
  v54 = (struct System_Int32_array *)sub_1BDB920(int___TypeInfo, 0LL);
  this->fields.routeSelect = v54;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.routeSelect, (int32_t)v54, v55, v56);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


uint32_t __fastcall BattleResultRequest_Argument__ConvertBattleStatus(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultRequest_Argument_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleResultRequest_RaidResult_array *raidResult; // x8
  int max_length; // w9
  int64_t v9; // x20
  int v10; // w10
  __int64 v11; // x11
  int *v12; // x12
  struct BattleResultRequest_SuperBossResult_array *superBossResult; // x8
  int v14; // w9
  int64_t v15; // x21
  int v16; // w10
  __int64 v17; // x11
  int *v18; // x12
  struct System_Int32_array *aliveUniqueIds; // x11
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // x10
  int32_t *v23; // x11
  __int64 v24; // t1
  __int64 v25; // x8
  __int64 v26; // x22
  NetworkManager_c *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_63607448; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Byte_array *v37; // x19

  v3 = this;
  if ( (byte_4B46438 & 1) == 0 )
  {
    sub_1BDB878(&Crc32_TypeInfo, method);
    sub_1BDB878(&Method_System_Linq_Enumerable_Concat_byte___, v4);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_byte___, v5);
    this = (BattleResultRequest_Argument_o *)sub_1BDB878(&NetworkManager_TypeInfo, v6);
    byte_4B46438 = 1;
  }
  raidResult = v3->fields.raidResult;
  if ( !raidResult )
    goto LABEL_37;
  max_length = raidResult->max_length;
  v9 = -4231125LL;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = 0LL;
    do
    {
      if ( max_length == v10 )
LABEL_36:
        sub_1BDBADC(this, method, v2);
      v12 = (int *)raidResult->m_Items[v10];
      if ( !v12 )
        goto LABEL_37;
      ++v10;
      v11 += v12[6] + (__int64)v12[5] + v12[4];
    }
    while ( max_length != v10 );
    v9 = v11 - 4231125;
  }
  superBossResult = v3->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_37;
  v14 = superBossResult->max_length;
  v15 = -2469110LL;
  if ( v14 >= 1 )
  {
    v16 = 0;
    v17 = 0LL;
    do
    {
      if ( v14 == v16 )
        goto LABEL_36;
      v18 = (int *)superBossResult->m_Items[v16];
      if ( !v18 )
        goto LABEL_37;
      ++v16;
      v17 += v18[6] + (__int64)v18[4] + v18[5];
    }
    while ( v14 != v16 );
    v15 = v17 - 2469110;
  }
  aliveUniqueIds = v3->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_37:
    sub_1BDBAD4(this, method);
  v20 = aliveUniqueIds->max_length;
  if ( v20 << 32 < 1 )
  {
    v26 = 0LL;
  }
  else
  {
    v21 = 0LL;
    v22 = (int)v20;
    v23 = &aliveUniqueIds->m_Items[1];
    do
    {
      if ( !v20 )
        goto LABEL_36;
      v24 = *v23++;
      --v22;
      --v20;
      v21 += v24;
    }
    while ( v22 );
    if ( v21 >= 0 )
      v25 = v21;
    else
      v25 = v21 + 1;
    v26 = v25 >> 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4B3ED56 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    byte_4B3ED56 = 1;
  }
  v27 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v27 = NetworkManager_TypeInfo;
  }
  Bytes_63607448 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(
                                                                          v27->static_fields->userIdNumber
                                                                        + v3->fields.battleResult,
                                                                          0LL);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(v9, 0LL);
  v30 = System_Linq_Enumerable__Concat_byte_(
          Bytes_63607448,
          v29,
          (const MethodInfo_304C358 *)Method_System_Linq_Enumerable_Concat_byte___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(v26, 0LL);
  v32 = System_Linq_Enumerable__Concat_byte_(
          v30,
          v31,
          (const MethodInfo_304C358 *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(
                                                               v3->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v34 = System_Linq_Enumerable__Concat_byte_(
          v32,
          v33,
          (const MethodInfo_304C358 *)Method_System_Linq_Enumerable_Concat_byte___);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63607448(v15, 0LL);
  v36 = System_Linq_Enumerable__Concat_byte_(
          v34,
          v35,
          (const MethodInfo_304C358 *)Method_System_Linq_Enumerable_Concat_byte___);
  v37 = System_Linq_Enumerable__ToArray_byte_(
          v36,
          (const MethodInfo_3070500 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  return Crc32__Compute(v37, 0LL);
}


System_String_o *__fastcall BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultRequest_Argument_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Int32_array_array *voicePlayedArray; // x8
  BattleResultRequest_Argument_o *v10; // x21
  unsigned __int64 v11; // x25
  unsigned __int64 max_length; // x9
  System_Int32_array *v13; // x29
  const MethodInfo *v14; // x3
  BattleResultRequest_Argument_o *v15; // x20
  int32_t v16; // w1
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  int32_t v22; // w1
  CGThumbnailListItem_o *p_raidResult; // x0
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x3
  int32_t v26; // w1
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  const MethodInfo *v30; // x3

  v3 = this;
  if ( (byte_4B46439 & 1) == 0 )
  {
    sub_1BDB878(&string___TypeInfo, method);
    sub_1BDB878(&StringLiteral_870/*",["*/, v4);
    sub_1BDB878(&StringLiteral_820/*","*/, v5);
    sub_1BDB878(&StringLiteral_15782/*"["*/, v6);
    sub_1BDB878(&StringLiteral_1/*""*/, v7);
    this = (BattleResultRequest_Argument_o *)sub_1BDB878(&StringLiteral_16038/*"]"*/, v8);
    byte_4B46439 = 1;
  }
  voicePlayedArray = v3->fields.voicePlayedArray;
  v10 = (BattleResultRequest_Argument_o *)StringLiteral_1/*""*/;
  if ( voicePlayedArray )
  {
    v11 = 0LL;
    while ( 1 )
    {
      max_length = voicePlayedArray->max_length;
      if ( (__int64)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_33;
      v13 = voicePlayedArray->m_Items[v11];
      if ( v13 && v13->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v10, 0LL) )
        {
          this = (BattleResultRequest_Argument_o *)sub_1BDB920(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v16 = StringLiteral_15782/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15782/*"["*/;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.scores, v16, v2, v14);
          if ( !v13->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v13 + 32, 0LL);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v15->fields.action = (struct System_String_o *)this;
          sub_1BDB81C((CGThumbnailListItem_o *)&v15->fields.action, (int32_t)this, v2, v17);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v19 = (int)StringLiteral_820/*","*/;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_820/*","*/;
          sub_1BDB81C((CGThumbnailListItem_o *)&v15->fields.voicePlayedArray, v19, v2, v18);
          if ( v13->max_length <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v13 + 36, 0LL);
          if ( v15->fields.battleResult <= 3u )
            goto LABEL_33;
          v15->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1BDB81C((CGThumbnailListItem_o *)&v15->fields.aliveUniqueIds, (int32_t)this, v2, v20);
          if ( v15->fields.battleResult <= 4u )
            goto LABEL_33;
          v22 = StringLiteral_16038/*"]"*/;
          v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16038/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v15->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1BDB920(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v10;
          sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.scores, (int32_t)v10, v2, v24);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v26 = StringLiteral_870/*",["*/;
          v15->fields.action = (struct System_String_o *)StringLiteral_870/*",["*/;
          sub_1BDB81C((CGThumbnailListItem_o *)&v15->fields.action, v26, v2, v25);
          if ( !v13->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v13 + 32, 0LL);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1BDB81C((CGThumbnailListItem_o *)&v15->fields.voicePlayedArray, (int32_t)this, v2, v27);
          if ( v15->fields.battleResult <= 3u
            || (v29 = (int)StringLiteral_820/*","*/,
                v15->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_820/*","*/,
                sub_1BDB81C((CGThumbnailListItem_o *)&v15->fields.aliveUniqueIds, v29, v2, v28),
                v13->max_length <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v13 + 36, 0LL),
                v15->fields.battleResult <= 4u)
            || (v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1BDB81C((CGThumbnailListItem_o *)&v15->fields.raidResult, (int32_t)this, v2, v30),
                v15->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1BDBADC(this, method, v2);
          }
          v22 = StringLiteral_16038/*"]"*/;
          v15->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16038/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v15->fields.superBossResult;
        }
        sub_1BDB81C(p_raidResult, v22, v2, v21);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_62612776((System_String_array *)v15, 0LL);
        v10 = this;
      }
      voicePlayedArray = v3->fields.voicePlayedArray;
      ++v11;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1BDBAD4(this, method);
    }
  }
  return System_String__Concat_62610508(
           (System_String_o *)StringLiteral_15782/*"["*/,
           (System_String_o *)v10,
           (System_String_o *)StringLiteral_16038/*"]"*/,
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


void __fastcall BattleResultRequest___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B4643B & 1) == 0 )
  {
    sub_1BDB878(&BattleResultRequest___c_TypeInfo, v1);
    byte_4B4643B = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(BattleResultRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultRequest___c_TypeInfo->static_fields->__9 = (struct BattleResultRequest___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)BattleResultRequest___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleResultRequest___c___ctor(BattleResultRequest___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleResultRequest___c___beginRequest_b__5_0(
        BattleResultRequest___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}