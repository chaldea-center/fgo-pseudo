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
  signed int max_length; // w8
  int v113; // w9
  __int64 v114; // x22
  BattleResultRequest_RaidResult_o *v115; // x10
  signed int v116; // w8
  int v117; // w9
  __int64 v118; // x20
  BattleResultRequest_SuperBossResult_o *v119; // x10
  __int64 v120; // x8
  __int64 v121; // x23
  __int64 v122; // x9
  int32_t *v123; // x10
  __int64 v124; // t1
  NetworkManager_c *v125; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_62679620; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v127; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v128; // x0
  __int64 v129; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v130; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v131; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v132; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v133; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v134; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v135; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v136; // x0
  System_Byte_array *v137; // x19
  __int64 v138; // x2
  __int64 v139; // x3
  __int64 v140; // x4
  Il2CppObject *v141; // x0
  System_Int32_array_array *v142; // x10
  __int64 v143; // x8
  System_String_o *v144; // x22
  unsigned __int64 v145; // x25
  System_Int32_array *v146; // x29
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  __int64 v149; // x19
  int32_t v150; // w1
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
  CGThumbnailListItem_o *v161; // x0
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  int32_t v164; // w2
  const MethodInfo *v165; // x3
  int32_t v166; // w1
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  int32_t v169; // w2
  const MethodInfo *v170; // x3
  int32_t v171; // w1
  int32_t v172; // w2
  const MethodInfo *v173; // x3
  Il2CppObject *v174; // x0
  Il2CppObject *v175; // x0
  __int64 v176; // x2
  __int64 v177; // x3
  __int64 v178; // x4
  Il2CppObject *v179; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  BattleResultRequest___c_c *v181; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v182; // x19
  System_Func_int__int__o *_9__5_0; // x22
  Il2CppObject *v184; // x23
  struct BattleResultRequest___c_StaticFields *static_fields; // x0
  int32_t v186; // w2
  const MethodInfo *v187; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v188; // x0
  Il2CppObject *v189; // x19
  void *monitor; // x8
  __int64 v191; // x22
  unsigned __int64 v192; // x23
  MiniMessagePack_MiniMessagePacker_o *v193; // x19
  System_Byte_array *v194; // x19
  System_Byte_array *v195; // x19
  System_String_o *v196; // x0
  int64_t v198; // [xsp+10h] [xbp-C0h]
  int32_t v204; // [xsp+58h] [xbp-78h] BYREF
  int32_t v205; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v206; // [xsp+60h] [xbp-70h] BYREF
  int32_t v207; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v208; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A4FE06 & 1) == 0 )
  {
    sub_1B863B8(&CatAndMouseGame_TypeInfo, battleId);
    sub_1B863B8(&System_Convert_TypeInfo, v29);
    sub_1B863B8(&Crc32_TypeInfo, v30);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v31);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v32);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v33);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int__get_Keys__, v34);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v35);
    sub_1B863B8(&Method_System_Linq_Enumerable_Concat_byte___, v36);
    sub_1B863B8(&Method_System_Linq_Enumerable_OrderBy_int__int___, v37);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_byte___, v38);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_int___, v39);
    sub_1B863B8(&System_Func_int__int__TypeInfo, v40);
    sub_1B863B8(&int___TypeInfo, v41);
    sub_1B863B8(&int_TypeInfo, v42);
    sub_1B863B8(&long_TypeInfo, v43);
    sub_1B863B8(&JsonManager_TypeInfo, v44);
    sub_1B863B8(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v45);
    sub_1B863B8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v46);
    sub_1B863B8(&NetworkManager_TypeInfo, v47);
    sub_1B863B8(&string___TypeInfo, v48);
    sub_1B863B8(&Method_BattleResultRequest___c__beginRequest_b__5_0__, v49);
    sub_1B863B8(&BattleResultRequest___c_TypeInfo, v50);
    sub_1B863B8(&uint_TypeInfo, v51);
    sub_1B863B8(&StringLiteral_22823/*"routeSelect"*/, v52);
    sub_1B863B8(&StringLiteral_22751/*"result"*/, v53);
    sub_1B863B8(&StringLiteral_22663/*"recordValueJson"*/, v54);
    sub_1B863B8(&StringLiteral_17473/*"calledEnemyUniqueIds"*/, v55);
    sub_1B863B8(&StringLiteral_23198/*"skillShiftNpcSvtIds"*/, v56);
    sub_1B863B8(&StringLiteral_22610/*"raidResult"*/, v57);
    sub_1B863B8(&StringLiteral_24199/*"useTreasureDevices"*/, v58);
    sub_1B863B8(&StringLiteral_22662/*"recordType"*/, v59);
    sub_1B863B8(&StringLiteral_16871/*"battleMissionTargetIds"*/, v60);
    sub_1B863B8(&StringLiteral_867/*",["*/, v61);
    sub_1B863B8(&StringLiteral_23199/*"skillShiftUniqueIds"*/, v62);
    sub_1B863B8(&StringLiteral_18242/*"dataLostUniqueIds"*/, v63);
    sub_1B863B8(&StringLiteral_24203/*"usedEquipSkillList"*/, v64);
    sub_1B863B8(&StringLiteral_18708/*"elapsedTurn"*/, v65);
    sub_1B863B8(&StringLiteral_22643/*"reachedWave"*/, v66);
    sub_1B863B8(&StringLiteral_24204/*"usedTurnList"*/, v67);
    sub_1B863B8(&StringLiteral_23544/*"svtCommonFlagList"*/, v68);
    sub_1B863B8(&StringLiteral_16872/*"battleMissionTargetValues"*/, v69);
    sub_1B863B8(&StringLiteral_22892/*"scores"*/, v70);
    sub_1B863B8(&StringLiteral_24503/*"waveInfo"*/, v71);
    sub_1B863B8(&StringLiteral_16881/*"battleStatus"*/, v72);
    sub_1B863B8(&StringLiteral_817/*","*/, v73);
    sub_1B863B8(&StringLiteral_23709/*"tdPlayed"*/, v74);
    sub_1B863B8(&StringLiteral_24428/*"voicePlayedList"*/, v75);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v76);
    sub_1B863B8(&StringLiteral_24540/*"winResult"*/, v77);
    sub_1B863B8(&StringLiteral_1/*""*/, v78);
    sub_1B863B8(&StringLiteral_23527/*"superBossResult"*/, v79);
    sub_1B863B8(&StringLiteral_15836/*"]"*/, v80);
    sub_1B863B8(&StringLiteral_16868/*"battleId"*/, v81);
    sub_1B863B8(&StringLiteral_16873/*"battleResult"*/, v82);
    sub_1B863B8(&StringLiteral_16413/*"action"*/, v83);
    sub_1B863B8(&StringLiteral_16498/*"aliveUniqueIds"*/, v84);
    byte_4A4FE06 = 1;
  }
  v85 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v85,
    (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v198 = battleId;
  v208 = battleId;
  Item = j_il2cpp_value_box_0(long_TypeInfo, &v208, v86, v87, v88);
  if ( !v85 )
    goto LABEL_94;
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_16868/*"battleId"*/,
    (Il2CppObject *)Item,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v207 = battleResult;
  v94 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v207, v91, v92, v93);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_16873/*"battleResult"*/,
    v94,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v206 = winResult;
  v98 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v206, v95, v96, v97);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24540/*"winResult"*/,
    v98,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_22892/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_16413/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v99 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_22610/*"raidResult"*/,
    v99,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v100 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23527/*"superBossResult"*/,
    v100,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v205 = elapsedTurn;
  v104 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205, v101, v102, v103);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_18708/*"elapsedTurn"*/,
    v104,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v204 = recordType;
  v108 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v204, v105, v106, v107);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_22662/*"recordType"*/,
    v108,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_22663/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_94;
  v109 = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)firstNpPlayList,
           (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v110 = (Il2CppObject *)JsonManager__toJson(&v109->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23709/*"tdPlayed"*/,
    v110,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_94;
  v111 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
                           playerServantNoblePhantasmUsageData,
                           0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24199/*"useTreasureDevices"*/,
    v111,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24203/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23544/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23199/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_23198/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_17473/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_22823/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_18242/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_94;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v114 = 0LL;
    if ( !superBossResult )
      goto LABEL_94;
  }
  else
  {
    v113 = 0;
    v114 = 0LL;
    do
    {
      if ( max_length == v113 )
        goto LABEL_93;
      v115 = raidResult->m_Items[v113];
      if ( !v115 )
        goto LABEL_94;
      ++v113;
      v114 += v115->fields.addDamage + (__int64)v115->fields.day + v115->fields.uniqueId;
    }
    while ( max_length != v113 );
    if ( !superBossResult )
LABEL_94:
      sub_1B86614(Item, v90);
  }
  v116 = superBossResult->max_length;
  if ( v116 >= 1 )
  {
    v117 = 0;
    v118 = 0LL;
    while ( v116 != v117 )
    {
      v119 = superBossResult->m_Items[v117];
      if ( !v119 )
        goto LABEL_94;
      ++v117;
      v118 += v119->fields.addDamage + (__int64)v119->fields.superBossId + v119->fields.uniqueId;
      if ( v116 == v117 )
        goto LABEL_24;
    }
LABEL_93:
    sub_1B8661C(Item, v90);
  }
  v118 = 0LL;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_16498/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_94;
  v120 = aliveUniqueIds->max_length;
  if ( v120 << 32 >= 1 )
  {
    v121 = 0LL;
    v122 = (int)v120;
    v123 = &aliveUniqueIds->m_Items[1];
    while ( v120 )
    {
      v124 = *v123++;
      --v122;
      --v120;
      v121 += v124;
      if ( !v122 )
        goto LABEL_31;
    }
    goto LABEL_93;
  }
  v121 = 0LL;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v90);
    byte_4A48C25 = 1;
  }
  v125 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v125 = NetworkManager_TypeInfo;
  }
  Bytes_62679620 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(
                                                                          v125->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0LL);
  v127 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(
                                                                v114 - 4231125,
                                                                0LL);
  v128 = System_Linq_Enumerable__Concat_byte_(
           Bytes_62679620,
           v127,
           (const MethodInfo_2F87EF0 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v121 >= 0 )
    v129 = v121;
  else
    v129 = v121 + 1;
  v130 = v128;
  v131 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(v129 >> 1, 0LL);
  v132 = System_Linq_Enumerable__Concat_byte_(
           v130,
           v131,
           (const MethodInfo_2F87EF0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v133 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(
                                                                v198 - 0x7FFFFFFF,
                                                                0LL);
  v134 = System_Linq_Enumerable__Concat_byte_(
           v132,
           v133,
           (const MethodInfo_2F87EF0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v135 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(
                                                                v118 - 2469110,
                                                                0LL);
  v136 = System_Linq_Enumerable__Concat_byte_(
           v134,
           v135,
           (const MethodInfo_2F87EF0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v137 = System_Linq_Enumerable__ToArray_byte_(
           v136,
           (const MethodInfo_2FA9630 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v208) = Crc32__Compute(v137, 0LL);
  v141 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v208, v138, v139, v140);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_16881/*"battleStatus"*/,
    v141,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v142 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v143 = *(_QWORD *)&voicePlayedArray->max_length;
    v144 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v143 >= 1 )
    {
      v145 = 0LL;
      while ( v145 < (unsigned int)v143 )
      {
        v146 = voicePlayedArray->m_Items[v145];
        if ( v146 && v146->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty(v144, 0LL) )
          {
            Item = sub_1B86460(string___TypeInfo, 5LL);
            if ( !Item )
              goto LABEL_94;
            v149 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            v150 = StringLiteral_15580/*"["*/;
            *(_QWORD *)(Item + 32) = StringLiteral_15580/*"["*/;
            sub_1B8635C((CGThumbnailListItem_o *)(Item + 32), v150, v147, v148);
            if ( !v146->max_length )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v146 + 32, 0LL);
            if ( *(_DWORD *)(v149 + 24) <= 1u )
              goto LABEL_93;
            *(_QWORD *)(v149 + 40) = Item;
            sub_1B8635C((CGThumbnailListItem_o *)(v149 + 40), Item, v151, v152);
            if ( *(_DWORD *)(v149 + 24) <= 2u )
              goto LABEL_93;
            v155 = (int)StringLiteral_817/*","*/;
            *(_QWORD *)(v149 + 48) = StringLiteral_817/*","*/;
            sub_1B8635C((CGThumbnailListItem_o *)(v149 + 48), v155, v153, v154);
            if ( v146->max_length <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v146 + 36, 0LL);
            if ( *(_DWORD *)(v149 + 24) <= 3u )
              goto LABEL_93;
            *(_QWORD *)(v149 + 56) = Item;
            sub_1B8635C((CGThumbnailListItem_o *)(v149 + 56), Item, v156, v157);
            if ( *(_DWORD *)(v149 + 24) <= 4u )
              goto LABEL_93;
            v160 = StringLiteral_15836/*"]"*/;
            *(_QWORD *)(v149 + 64) = StringLiteral_15836/*"]"*/;
            v161 = (CGThumbnailListItem_o *)(v149 + 64);
          }
          else
          {
            Item = sub_1B86460(string___TypeInfo, 6LL);
            if ( !Item )
              goto LABEL_94;
            v149 = Item;
            if ( !*(_DWORD *)(Item + 24) )
              goto LABEL_93;
            *(_QWORD *)(Item + 32) = v144;
            sub_1B8635C((CGThumbnailListItem_o *)(Item + 32), (int32_t)v144, v162, v163);
            if ( *(_DWORD *)(v149 + 24) <= 1u )
              goto LABEL_93;
            v166 = StringLiteral_867/*",["*/;
            *(_QWORD *)(v149 + 40) = StringLiteral_867/*",["*/;
            sub_1B8635C((CGThumbnailListItem_o *)(v149 + 40), v166, v164, v165);
            if ( !v146->max_length )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v146 + 32, 0LL);
            if ( *(_DWORD *)(v149 + 24) <= 2u )
              goto LABEL_93;
            *(_QWORD *)(v149 + 48) = Item;
            sub_1B8635C((CGThumbnailListItem_o *)(v149 + 48), Item, v167, v168);
            if ( *(_DWORD *)(v149 + 24) <= 3u )
              goto LABEL_93;
            v171 = (int)StringLiteral_817/*","*/;
            *(_QWORD *)(v149 + 56) = StringLiteral_817/*","*/;
            sub_1B8635C((CGThumbnailListItem_o *)(v149 + 56), v171, v169, v170);
            if ( v146->max_length <= 1 )
              goto LABEL_93;
            Item = (__int64)System_Int32__ToString((int)v146 + 36, 0LL);
            if ( *(_DWORD *)(v149 + 24) <= 4u )
              goto LABEL_93;
            *(_QWORD *)(v149 + 64) = Item;
            sub_1B8635C((CGThumbnailListItem_o *)(v149 + 64), Item, v172, v173);
            if ( *(_DWORD *)(v149 + 24) <= 5u )
              goto LABEL_93;
            v160 = StringLiteral_15836/*"]"*/;
            *(_QWORD *)(v149 + 72) = StringLiteral_15836/*"]"*/;
            v161 = (CGThumbnailListItem_o *)(v149 + 72);
          }
          sub_1B8635C(v161, v160, v158, v159);
          Item = (__int64)System_String__Concat_61685692((System_String_array *)v149, 0LL);
          v142 = voicePlayedArray;
          v144 = (System_String_o *)Item;
        }
        LODWORD(v143) = v142->max_length;
        if ( (__int64)++v145 >= (int)v143 )
          goto LABEL_70;
      }
      goto LABEL_93;
    }
LABEL_70:
    v174 = (Il2CppObject *)System_String__Concat_61683424(
                             (System_String_o *)StringLiteral_15580/*"["*/,
                             v144,
                             (System_String_o *)StringLiteral_15836/*"]"*/,
                             0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v85,
      (Il2CppObject *)StringLiteral_24428/*"voicePlayedList"*/,
      v174,
      (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24204/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v175 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_24503/*"waveInfo"*/,
    v175,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  LODWORD(v208) = waveNum;
  v179 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v208, v176, v177, v178);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_22643/*"reachedWave"*/,
    v179,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !battleMissionValueDict )
    goto LABEL_94;
  Keys = System_Collections_Generic_Dictionary_int__int___get_Keys(
           battleMissionValueDict,
           (const MethodInfo_3264700 *)Method_System_Collections_Generic_Dictionary_int__int__get_Keys__);
  v181 = BattleResultRequest___c_TypeInfo;
  v182 = (System_Collections_Generic_IEnumerable_TSource__o *)Keys;
  if ( !BattleResultRequest___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleResultRequest___c_TypeInfo);
    v181 = BattleResultRequest___c_TypeInfo;
  }
  _9__5_0 = v181->static_fields->__9__5_0;
  if ( !_9__5_0 )
  {
    if ( !v181->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v181);
      v181 = BattleResultRequest___c_TypeInfo;
    }
    v184 = (Il2CppObject *)v181->static_fields->__9;
    _9__5_0 = (System_Func_int__int__o *)sub_1B86604(System_Func_int__int__TypeInfo);
    System_Func_int__int____ctor(_9__5_0, v184, Method_BattleResultRequest___c__beginRequest_b__5_0__, 0LL);
    static_fields = BattleResultRequest___c_TypeInfo->static_fields;
    static_fields->__9__5_0 = _9__5_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__5_0, (int32_t)_9__5_0, v186, v187);
  }
  v188 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_int__int_(
                                                                v182,
                                                                (System_Func_TSource__TKey__o *)_9__5_0,
                                                                (const MethodInfo_2F9A934 *)Method_System_Linq_Enumerable_OrderBy_int__int___);
  Item = (__int64)System_Linq_Enumerable__ToArray_int_(
                    v188,
                    (const MethodInfo_2FA9740 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Item )
    goto LABEL_94;
  v189 = (Il2CppObject *)Item;
  Item = sub_1B86460(int___TypeInfo, *(unsigned int *)(Item + 24));
  monitor = v189[1].monitor;
  v191 = Item;
  if ( (int)monitor >= 1 )
  {
    v192 = 0LL;
    while ( v192 < (unsigned int)monitor )
    {
      Item = System_Collections_Generic_Dictionary_int__int___get_Item(
               battleMissionValueDict,
               *((_DWORD *)&v189[2].klass + v192),
               (const MethodInfo_32649A0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
      if ( !v191 )
        goto LABEL_94;
      if ( v192 >= *(unsigned int *)(v191 + 24) )
        break;
      *(_DWORD *)(v191 + 32 + 4 * v192) = Item;
      LODWORD(monitor) = v189[1].monitor;
      if ( (__int64)++v192 >= (int)monitor )
        goto LABEL_87;
    }
    goto LABEL_93;
  }
LABEL_87:
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_16871/*"battleMissionTargetIds"*/,
    v189,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v85,
    (Il2CppObject *)StringLiteral_16872/*"battleMissionTargetValues"*/,
    (Il2CppObject *)v191,
    (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v193 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B86604(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v193, 0LL);
  if ( !v193 )
    goto LABEL_94;
  v194 = MiniMessagePack_MiniMessagePacker__PackClass(v193, (Il2CppObject *)v85, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v195 = CatAndMouseGame__CatGame5Bytes(v194, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v196 = System_Convert__ToBase64String(v195, 0LL);
  RequestBase__addField_42282000((RequestBase_o *)this, (System_String_o *)StringLiteral_22751/*"result"*/, v196, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4A4FE08 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v5);
    byte_4A4FE08 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B86614(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_32CEB10 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v7,
            (const MethodInfo_33C9A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_33C9BAC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A4FE05 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_8983/*"MockBattleResultRequest"*/, v2);
    byte_4A4FE05 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_8983/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A4FE04 & 1) == 0 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    sub_1B863B8(&StringLiteral_16848/*"battle/result"*/, v2);
    byte_4A4FE04 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61645176(BaseUrl, (System_String_o *)StringLiteral_16848/*"battle/result"*/, 0LL);
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

  if ( (byte_4A4FE07 & 1) == 0 )
  {
    sub_1B863B8(&JsonManager_TypeInfo, responseList);
    sub_1B863B8(&ResponseCommandKind_TypeInfo, v5);
    sub_1B863B8(&ServantCommentManager_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_21893/*"ng"*/, v7);
    byte_4A4FE07 = 1;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v8
    && (v9 = v8, ResponseData__checkError_42282948(v8, 0LL))
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
    v11 = (System_String_o *)StringLiteral_21893/*"ng"*/;
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

  if ( (byte_4A4FE0B & 1) == 0 )
  {
    sub_1B863B8(&BattleData_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8);
    sub_1B863B8(&int_____TypeInfo, v9);
    sub_1B863B8(&int___TypeInfo, v10);
    sub_1B863B8(&long___TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v12);
    sub_1B863B8(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v13);
    sub_1B863B8(&BattleResultRequest_RaidResult___TypeInfo, v14);
    sub_1B863B8(&BattleResultRequest_SuperBossResult___TypeInfo, v15);
    sub_1B863B8(&StringLiteral_1/*""*/, v16);
    byte_4A4FE0B = 1;
  }
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.scores, v17, v2, v3);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.action, v18, v19, v20);
  v21 = (struct System_Int32_array_array *)sub_1B86460(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v21;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.voicePlayedArray, (int32_t)v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v24;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.aliveUniqueIds, (int32_t)v24, v25, v26);
  v27 = (struct BattleResultRequest_RaidResult_array *)sub_1B86460(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v27;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.raidResult, (int32_t)v27, v28, v29);
  v30 = (struct BattleResultRequest_SuperBossResult_array *)sub_1B86460(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v30;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.superBossResult, (int32_t)v30, v31, v32);
  v33 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v33;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.usedTurnArray, (int32_t)v33, v34, v35);
  this->fields.recordType = 1;
  v36 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v36,
    (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v36;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.recordJson, (int32_t)v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v39;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.firstNpPlayList, (int32_t)v39, v40, v41);
  v42 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v42,
    (const MethodInfo_3264078 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v42;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.usedEquipSkillDict, (int32_t)v42, v43, v44);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.svtCommonFlagDict, (int32_t)SavedServantCommonFlagDict, v46, v47);
  v48 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v48;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.skillShiftUniqueIds, (int32_t)v48, v49, v50);
  v51 = (struct System_Int64_array *)sub_1B86460(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v51;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.skillShiftNpcSvtIds, (int32_t)v51, v52, v53);
  v54 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 0LL);
  this->fields.routeSelect = v54;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.routeSelect, (int32_t)v54, v55, v56);
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
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_62679620; // x23
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
  if ( (byte_4A4FE09 & 1) == 0 )
  {
    sub_1B863B8(&Crc32_TypeInfo, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_Concat_byte___, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_byte___, v4);
    this = (BattleResultRequest_Argument_o *)sub_1B863B8(&NetworkManager_TypeInfo, v5);
    byte_4A4FE09 = 1;
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
        sub_1B8661C(this, method);
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
    sub_1B86614(this, method);
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
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, method);
    byte_4A48C25 = 1;
  }
  v26 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v26 = NetworkManager_TypeInfo;
  }
  Bytes_62679620 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(
                                                                          v26->static_fields->userIdNumber
                                                                        + v2->fields.battleResult,
                                                                          0LL);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(v8, 0LL);
  v29 = System_Linq_Enumerable__Concat_byte_(
          Bytes_62679620,
          v28,
          (const MethodInfo_2F87EF0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(v25, 0LL);
  v31 = System_Linq_Enumerable__Concat_byte_(
          v29,
          v30,
          (const MethodInfo_2F87EF0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v33 = System_Linq_Enumerable__Concat_byte_(
          v31,
          v32,
          (const MethodInfo_2F87EF0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62679620(v14, 0LL);
  v35 = System_Linq_Enumerable__Concat_byte_(
          v33,
          v34,
          (const MethodInfo_2F87EF0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v36 = System_Linq_Enumerable__ToArray_byte_(
          v35,
          (const MethodInfo_2FA9630 *)Method_System_Linq_Enumerable_ToArray_byte___);
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
  if ( (byte_4A4FE0A & 1) == 0 )
  {
    sub_1B863B8(&string___TypeInfo, method);
    sub_1B863B8(&StringLiteral_867/*",["*/, v3);
    sub_1B863B8(&StringLiteral_817/*","*/, v4);
    sub_1B863B8(&StringLiteral_15580/*"["*/, v5);
    sub_1B863B8(&StringLiteral_1/*""*/, v6);
    this = (BattleResultRequest_Argument_o *)sub_1B863B8(&StringLiteral_15836/*"]"*/, v7);
    byte_4A4FE0A = 1;
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
          this = (BattleResultRequest_Argument_o *)sub_1B86460(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v16 = StringLiteral_15580/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15580/*"["*/;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.scores, v16, v13, v14);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v15->fields.action = (struct System_String_o *)this;
          sub_1B8635C((CGThumbnailListItem_o *)&v15->fields.action, (int32_t)this, v17, v18);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v21 = (int)StringLiteral_817/*","*/;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_817/*","*/;
          sub_1B8635C((CGThumbnailListItem_o *)&v15->fields.voicePlayedArray, v21, v19, v20);
          if ( v12->max_length <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL);
          if ( v15->fields.battleResult <= 3u )
            goto LABEL_33;
          v15->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1B8635C((CGThumbnailListItem_o *)&v15->fields.aliveUniqueIds, (int32_t)this, v22, v23);
          if ( v15->fields.battleResult <= 4u )
            goto LABEL_33;
          v26 = StringLiteral_15836/*"]"*/;
          v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_15836/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v15->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1B86460(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v9;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.scores, (int32_t)v9, v28, v29);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v32 = StringLiteral_867/*",["*/;
          v15->fields.action = (struct System_String_o *)StringLiteral_867/*",["*/;
          sub_1B8635C((CGThumbnailListItem_o *)&v15->fields.action, v32, v30, v31);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1B8635C((CGThumbnailListItem_o *)&v15->fields.voicePlayedArray, (int32_t)this, v33, v34);
          if ( v15->fields.battleResult <= 3u
            || (v37 = (int)StringLiteral_817/*","*/,
                v15->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_817/*","*/,
                sub_1B8635C((CGThumbnailListItem_o *)&v15->fields.aliveUniqueIds, v37, v35, v36),
                v12->max_length <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL),
                v15->fields.battleResult <= 4u)
            || (v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1B8635C((CGThumbnailListItem_o *)&v15->fields.raidResult, (int32_t)this, v38, v39),
                v15->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1B8661C(this, method);
          }
          v26 = StringLiteral_15836/*"]"*/;
          v15->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_15836/*"]"*/;
          p_raidResult = (CGThumbnailListItem_o *)&v15->fields.superBossResult;
        }
        sub_1B8635C(p_raidResult, v26, v24, v25);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_61685692((System_String_array *)v15, 0LL);
        v9 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v10;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1B86614(this, method);
    }
  }
  return System_String__Concat_61683424(
           (System_String_o *)StringLiteral_15580/*"["*/,
           (System_String_o *)v9,
           (System_String_o *)StringLiteral_15836/*"]"*/,
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

  if ( (byte_4A4FE0C & 1) == 0 )
  {
    sub_1B863B8(&BattleResultRequest___c_TypeInfo, v1);
    byte_4A4FE0C = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattleResultRequest___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleResultRequest___c_TypeInfo->static_fields->__9 = (struct BattleResultRequest___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)BattleResultRequest___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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