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
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v27; // x21
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_String_o *v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  Il2CppObject *v36; // x0
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  Il2CppObject *v40; // x0
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x0
  __int64 v43; // x2
  __int64 v44; // x3
  __int64 v45; // x4
  Il2CppObject *v46; // x0
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  Il2CppObject *v50; // x0
  System_Object_array *v51; // x0
  Il2CppObject *v52; // x0
  Il2CppObject *v53; // x0
  signed int max_length; // w8
  int v55; // w9
  __int64 v56; // x22
  BattleResultRequest_RaidResult_o *v57; // x10
  signed int v58; // w8
  int v59; // w9
  __int64 v60; // x20
  BattleResultRequest_SuperBossResult_o *v61; // x10
  __int64 v62; // x8
  __int64 v63; // x23
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // t1
  NetworkManager_c *v67; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_63732196; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v70; // x0
  __int64 v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v73; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x0
  System_Byte_array *v79; // x19
  __int64 v80; // x2
  __int64 v81; // x3
  __int64 v82; // x4
  Il2CppObject *v83; // x0
  System_Int32_array_array *v84; // x10
  __int64 v85; // x8
  System_String_o *v86; // x22
  unsigned __int64 v87; // x25
  System_Int32_array *v88; // x29
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7
  System_String_o *v95; // x19
  int64_t v96; // x1
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x2
  int32_t v104; // w3
  System_String_o *v105; // x4
  BattleSetupInfo_o *v106; // x5
  FollowerInfo_o *v107; // x6
  PartyListViewItem_o *v108; // x7
  void *v109; // x1
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  int64_t v116; // x2
  int32_t v117; // w3
  System_String_o *v118; // x4
  BattleSetupInfo_o *v119; // x5
  FollowerInfo_o *v120; // x6
  PartyListViewItem_o *v121; // x7
  int64_t v122; // x1
  PartyOrganizationUtility_o *p_fields; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  int64_t v130; // x2
  int32_t v131; // w3
  System_String_o *v132; // x4
  BattleSetupInfo_o *v133; // x5
  FollowerInfo_o *v134; // x6
  PartyListViewItem_o *v135; // x7
  int64_t v136; // x1
  int64_t v137; // x2
  int32_t v138; // w3
  System_String_o *v139; // x4
  BattleSetupInfo_o *v140; // x5
  FollowerInfo_o *v141; // x6
  PartyListViewItem_o *v142; // x7
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  void *v149; // x1
  int64_t v150; // x2
  int32_t v151; // w3
  System_String_o *v152; // x4
  BattleSetupInfo_o *v153; // x5
  FollowerInfo_o *v154; // x6
  PartyListViewItem_o *v155; // x7
  Il2CppObject *v156; // x0
  Il2CppObject *v157; // x0
  MiniMessagePack_MiniMessagePacker_o *v158; // x19
  System_Byte_array *v159; // x19
  System_Byte_array *v160; // x19
  System_String_o *v161; // x0
  const MethodInfo *v162; // x3
  const MethodInfo *v163; // x1
  int64_t v165; // [xsp+10h] [xbp-C0h]
  int32_t v171; // [xsp+58h] [xbp-78h] BYREF
  int32_t v172; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v173; // [xsp+60h] [xbp-70h] BYREF
  int32_t v174; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v175; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4BDDDCB & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_byte___);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&long_TypeInfo);
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1C21E38(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&uint_TypeInfo);
    sub_1C21E38(&StringLiteral_23393/*"routeSelect"*/);
    sub_1C21E38(&StringLiteral_23322/*"result"*/);
    sub_1C21E38(&StringLiteral_23227/*"recordValueJson"*/);
    sub_1C21E38(&StringLiteral_18004/*"calledEnemyUniqueIds"*/);
    sub_1C21E38(&StringLiteral_23774/*"skillShiftNpcSvtIds"*/);
    sub_1C21E38(&StringLiteral_23172/*"raidResult"*/);
    sub_1C21E38(&StringLiteral_24801/*"useTreasureDevices"*/);
    sub_1C21E38(&StringLiteral_23226/*"recordType"*/);
    sub_1C21E38(&StringLiteral_917/*",["*/);
    sub_1C21E38(&StringLiteral_23775/*"skillShiftUniqueIds"*/);
    sub_1C21E38(&StringLiteral_18779/*"dataLostUniqueIds"*/);
    sub_1C21E38(&StringLiteral_24805/*"usedEquipSkillList"*/);
    sub_1C21E38(&StringLiteral_19261/*"elapsedTurn"*/);
    sub_1C21E38(&StringLiteral_24806/*"usedTurnList"*/);
    sub_1C21E38(&StringLiteral_24132/*"svtCommonFlagList"*/);
    sub_1C21E38(&StringLiteral_23465/*"scores"*/);
    sub_1C21E38(&StringLiteral_25107/*"waveInfo"*/);
    sub_1C21E38(&StringLiteral_17410/*"battleStatus"*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_24299/*"tdPlayed"*/);
    sub_1C21E38(&StringLiteral_25032/*"voicePlayedList"*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_25143/*"winResult"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_24115/*"superBossResult"*/);
    sub_1C21E38(&StringLiteral_16345/*"]"*/);
    sub_1C21E38(&StringLiteral_17401/*"battleId"*/);
    sub_1C21E38(&StringLiteral_17404/*"battleResult"*/);
    sub_1C21E38(&StringLiteral_16926/*"action"*/);
    sub_1C21E38(&StringLiteral_17014/*"aliveUniqueIds"*/);
    byte_4BDDDCB = 1;
  }
  v27 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v27,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v165 = battleId;
  v175 = battleId;
  v31 = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &v175, v28, v29, v30);
  if ( !v27 )
    goto LABEL_80;
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_17401/*"battleId"*/,
    (Il2CppObject *)v31,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v174 = battleResult;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v174, v33, v34, v35);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_17404/*"battleResult"*/,
    v36,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v173 = winResult;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v173, v37, v38, v39);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_25143/*"winResult"*/,
    v40,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23465/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_16926/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v41 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23172/*"raidResult"*/,
    v41,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v42 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24115/*"superBossResult"*/,
    v42,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v172 = elapsedTurn;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v172, v43, v44, v45);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_19261/*"elapsedTurn"*/,
    v46,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v171 = recordType;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v171, v47, v48, v49);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23226/*"recordType"*/,
    v50,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23227/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_80;
  v51 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v52 = (Il2CppObject *)JsonManager__toJson(&v51->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24299/*"tdPlayed"*/,
    v52,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_80;
  v53 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
                          playerServantNoblePhantasmUsageData,
                          0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24801/*"useTreasureDevices"*/,
    v53,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24805/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24132/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23775/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23774/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_18004/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23393/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_18779/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_80;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v56 = 0LL;
    if ( !superBossResult )
      goto LABEL_80;
  }
  else
  {
    v55 = 0;
    v56 = 0LL;
    do
    {
      if ( max_length == v55 )
        goto LABEL_79;
      v57 = raidResult->m_Items[v55];
      if ( !v57 )
        goto LABEL_80;
      ++v55;
      v56 += v57->fields.addDamage + (__int64)v57->fields.day + v57->fields.uniqueId;
    }
    while ( max_length != v55 );
    if ( !superBossResult )
LABEL_80:
      sub_1C22094(v31, v32);
  }
  v58 = superBossResult->max_length;
  if ( v58 >= 1 )
  {
    v59 = 0;
    v60 = 0LL;
    while ( v58 != v59 )
    {
      v61 = superBossResult->m_Items[v59];
      if ( !v61 )
        goto LABEL_80;
      ++v59;
      v60 += v61->fields.addDamage + (__int64)v61->fields.superBossId + v61->fields.uniqueId;
      if ( v58 == v59 )
        goto LABEL_24;
    }
LABEL_79:
    sub_1C2209C(v31, v32);
  }
  v60 = 0LL;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_17014/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_80;
  v62 = aliveUniqueIds->max_length;
  if ( v62 << 32 >= 1 )
  {
    v63 = 0LL;
    v64 = (int)v62;
    v65 = &aliveUniqueIds->m_Items[1];
    while ( v62 )
    {
      v66 = *v65++;
      --v64;
      --v62;
      v63 += v66;
      if ( !v64 )
        goto LABEL_31;
    }
    goto LABEL_79;
  }
  v63 = 0LL;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v67 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v67 = NetworkManager_TypeInfo;
  }
  Bytes_63732196 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(
                                                                          v67->static_fields->userIdNumber
                                                                        + battleResult,
                                                                          0LL);
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(v56 - 4231125, 0LL);
  v70 = System_Linq_Enumerable__Concat_byte_(
          Bytes_63732196,
          v69,
          (const MethodInfo_2FC7800 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v63 >= 0 )
    v71 = v63;
  else
    v71 = v63 + 1;
  v72 = v70;
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(v71 >> 1, 0LL);
  v74 = System_Linq_Enumerable__Concat_byte_(
          v72,
          v73,
          (const MethodInfo_2FC7800 *)Method_System_Linq_Enumerable_Concat_byte___);
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(
                                                               v165 - 0x7FFFFFFF,
                                                               0LL);
  v76 = System_Linq_Enumerable__Concat_byte_(
          v74,
          v75,
          (const MethodInfo_2FC7800 *)Method_System_Linq_Enumerable_Concat_byte___);
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(v60 - 2469110, 0LL);
  v78 = System_Linq_Enumerable__Concat_byte_(
          v76,
          v77,
          (const MethodInfo_2FC7800 *)Method_System_Linq_Enumerable_Concat_byte___);
  v79 = System_Linq_Enumerable__ToArray_byte_(
          v78,
          (const MethodInfo_2FE953C *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v175) = Crc32__Compute(v79, 0LL);
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v175, v80, v81, v82);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_17410/*"battleStatus"*/,
    v83,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v84 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v85 = *(_QWORD *)&voicePlayedArray->max_length;
    v86 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v85 >= 1 )
    {
      v87 = 0LL;
      while ( v87 < (unsigned int)v85 )
      {
        v88 = voicePlayedArray->m_Items[v87];
        if ( v88 && v88->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty(v86, 0LL) )
          {
            v31 = (System_String_o *)sub_1C21EE0(string___TypeInfo, 5LL);
            if ( !v31 )
              goto LABEL_80;
            v95 = v31;
            if ( !LODWORD(v31[1].klass) )
              goto LABEL_79;
            v96 = StringLiteral_16086/*"["*/;
            v31[1].monitor = (void *)StringLiteral_16086/*"["*/;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v31[1].monitor, v96, v89, v90, v91, v92, v93, v94);
            if ( !v88->max_length )
              goto LABEL_79;
            v31 = System_Int32__ToString((int)v88 + 32, 0LL);
            if ( LODWORD(v95[1].klass) <= 1 )
              goto LABEL_79;
            v95[1].fields = (System_String_Fields)v31;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v95[1].fields, (int64_t)v31, v97, v98, v99, v100, v101, v102);
            if ( LODWORD(v95[1].klass) <= 2 )
              goto LABEL_79;
            v109 = StringLiteral_866/*","*/;
            v95[2].klass = (System_String_c *)StringLiteral_866/*","*/;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v95[2], (int64_t)v109, v103, v104, v105, v106, v107, v108);
            if ( v88->max_length <= 1 )
              goto LABEL_79;
            v31 = System_Int32__ToString((int)v88 + 36, 0LL);
            if ( LODWORD(v95[1].klass) <= 3 )
              goto LABEL_79;
            v95[2].monitor = v31;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v95[2].monitor, (int64_t)v31, v110, v111, v112, v113, v114, v115);
            if ( LODWORD(v95[1].klass) <= 4 )
              goto LABEL_79;
            v122 = StringLiteral_16345/*"]"*/;
            v95[2].fields = (System_String_Fields)StringLiteral_16345/*"]"*/;
            p_fields = (PartyOrganizationUtility_o *)&v95[2].fields;
          }
          else
          {
            v31 = (System_String_o *)sub_1C21EE0(string___TypeInfo, 6LL);
            if ( !v31 )
              goto LABEL_80;
            v95 = v31;
            if ( !LODWORD(v31[1].klass) )
              goto LABEL_79;
            v31[1].monitor = v86;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v31[1].monitor, (int64_t)v86, v124, v125, v126, v127, v128, v129);
            if ( LODWORD(v95[1].klass) <= 1 )
              goto LABEL_79;
            v136 = StringLiteral_917/*",["*/;
            v95[1].fields = (System_String_Fields)StringLiteral_917/*",["*/;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v95[1].fields, v136, v130, v131, v132, v133, v134, v135);
            if ( !v88->max_length )
              goto LABEL_79;
            v31 = System_Int32__ToString((int)v88 + 32, 0LL);
            if ( LODWORD(v95[1].klass) <= 2 )
              goto LABEL_79;
            v95[2].klass = (System_String_c *)v31;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v95[2], (int64_t)v31, v137, v138, v139, v140, v141, v142);
            if ( LODWORD(v95[1].klass) <= 3 )
              goto LABEL_79;
            v149 = StringLiteral_866/*","*/;
            v95[2].monitor = StringLiteral_866/*","*/;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&v95[2].monitor,
              (int64_t)v149,
              v143,
              v144,
              v145,
              v146,
              v147,
              v148);
            if ( v88->max_length <= 1 )
              goto LABEL_79;
            v31 = System_Int32__ToString((int)v88 + 36, 0LL);
            if ( LODWORD(v95[1].klass) <= 4 )
              goto LABEL_79;
            v95[2].fields = (System_String_Fields)v31;
            sub_1C21DDC((PartyOrganizationUtility_o *)&v95[2].fields, (int64_t)v31, v150, v151, v152, v153, v154, v155);
            if ( LODWORD(v95[1].klass) <= 5 )
              goto LABEL_79;
            v122 = StringLiteral_16345/*"]"*/;
            v95[3].klass = (System_String_c *)StringLiteral_16345/*"]"*/;
            p_fields = (PartyOrganizationUtility_o *)&v95[3];
          }
          sub_1C21DDC(p_fields, v122, v116, v117, v118, v119, v120, v121);
          v31 = System_String__Concat_63129004((System_String_array *)v95, 0LL);
          v84 = voicePlayedArray;
          v86 = v31;
        }
        LODWORD(v85) = v84->max_length;
        if ( (__int64)++v87 >= (int)v85 )
          goto LABEL_70;
      }
      goto LABEL_79;
    }
LABEL_70:
    v156 = (Il2CppObject *)System_String__Concat_63126736(
                             (System_String_o *)StringLiteral_16086/*"["*/,
                             v86,
                             (System_String_o *)StringLiteral_16345/*"]"*/,
                             0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v27,
      (Il2CppObject *)StringLiteral_25032/*"voicePlayedList"*/,
      v156,
      (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24806/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v157 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_25107/*"waveInfo"*/,
    v157,
    (const MethodInfo_3316680 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v158 = (MiniMessagePack_MiniMessagePacker_o *)sub_1C22084(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v158, 0LL);
  if ( !v158 )
    goto LABEL_80;
  v159 = MiniMessagePack_MiniMessagePacker__PackClass(v158, (Il2CppObject *)v27, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v160 = CatAndMouseGame__CatGame5Bytes(v159, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v161 = System_Convert__ToBase64String(v160, 0LL);
  RequestBase__addField_42414744((RequestBase_o *)this, (System_String_o *)StringLiteral_23322/*"result"*/, v161, v162);
  RequestBase__beginRequest((RequestBase_o *)this, v163);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4BDDDCD & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    byte_4BDDDCD = 1;
  }
  memset(&v4, 0, sizeof(v4));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1C22094(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v4,
            (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v4,
    (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDDCA & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_9291/*"MockBattleResultRequest"*/);
    byte_4BDDDCA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9291/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDDC9 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_17381/*"battle/result"*/);
    byte_4BDDDC9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_17381/*"battle/result"*/, 0LL);
}


void __fastcall BattleResultRequest__requestCompleted(
        BattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v10; // x8

  if ( (byte_4BDDDCC & 1) == 0 )
  {
    sub_1C21E38(&JsonManager_TypeInfo);
    sub_1C21E38(&ResponseCommandKind_TypeInfo);
    sub_1C21E38(&ServantCommentManager_TypeInfo);
    sub_1C21E38(&StringLiteral_22456/*"ng"*/);
    byte_4BDDDCC = 1;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_42505456(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__UpdateChapter(0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v8,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v10 = this->fields.CallBack;
    if ( v10 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v10->fields.m_target)(
        v10->fields.original_method_info,
        StringLiteral_22456/*"ng"*/,
        *(_QWORD *)&v10->fields.extra_arg);
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
  void *v9; // x1
  void *v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct System_Int32_array_array *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Int32_array *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct BattleResultRequest_RaidResult_array *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct BattleResultRequest_SuperBossResult_array *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Int32_array *v45; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_Dictionary_object__object__o *v52; // x20
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_List_object__o *v59; // x20
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  System_Collections_Generic_Dictionary_int__int__o *v66; // x20
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  struct System_Int32_array *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  struct System_Int64_array *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct System_Int32_array *v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7

  if ( (byte_4BDDDD0 & 1) == 0 )
  {
    sub_1C21E38(&BattleData_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1C21E38(&int_____TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&long___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_1C21E38(&BattleResultRequest_RaidResult___TypeInfo);
    sub_1C21E38(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDDDD0 = 1;
  }
  v9 = StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.scores, (int64_t)v9, v2, v3, v4, v5, v6, v7);
  v10 = StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.action, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct System_Int32_array_array *)sub_1C21EE0(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v17;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.voicePlayedArray, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v24;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.aliveUniqueIds, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (struct BattleResultRequest_RaidResult_array *)sub_1C21EE0(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v31;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.raidResult, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  v38 = (struct BattleResultRequest_SuperBossResult_array *)sub_1C21EE0(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v38;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.superBossResult, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  v45 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v45;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.usedTurnArray, (int64_t)v45, v46, v47, v48, v49, v50, v51);
  this->fields.recordType = 1;
  v52 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v52,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v52;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.recordJson, (int64_t)v52, v53, v54, v55, v56, v57, v58);
  v59 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v59;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.firstNpPlayList, (int64_t)v59, v60, v61, v62, v63, v64, v65);
  v66 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1C22084(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v66,
    (const MethodInfo_32AC5B8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v66;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.usedEquipSkillDict,
    (int64_t)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.svtCommonFlagDict,
    (int64_t)SavedServantCommonFlagDict,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v80;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillShiftUniqueIds,
    (int64_t)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = (struct System_Int64_array *)sub_1C21EE0(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v87;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillShiftNpcSvtIds,
    (int64_t)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v94 = (struct System_Int32_array *)sub_1C21EE0(int___TypeInfo, 0LL);
  this->fields.routeSelect = v94;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.routeSelect, (int64_t)v94, v95, v96, v97, v98, v99, v100);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


uint32_t __fastcall BattleResultRequest_Argument__ConvertBattleStatus(
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
  __int64 v16; // x8
  __int64 v17; // x9
  __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // t1
  __int64 v21; // x8
  __int64 v22; // x22
  NetworkManager_c *v23; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_63732196; // x23
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
  if ( (byte_4BDDDCE & 1) == 0 )
  {
    sub_1C21E38(&Crc32_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_byte___);
    this = (BattleResultRequest_Argument_o *)sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BDDDCE = 1;
  }
  raidResult = v2->fields.raidResult;
  if ( !raidResult )
    goto LABEL_37;
  max_length = raidResult->max_length;
  v5 = -4231125LL;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0LL;
    do
    {
      if ( max_length == v6 )
LABEL_36:
        sub_1C2209C(this, method);
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
  v11 = -2469110LL;
  if ( v10 >= 1 )
  {
    v12 = 0;
    v13 = 0LL;
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
    sub_1C22094(this, method);
  v16 = aliveUniqueIds->max_length;
  if ( v16 << 32 < 1 )
  {
    v22 = 0LL;
  }
  else
  {
    v17 = 0LL;
    v18 = (int)v16;
    v19 = &aliveUniqueIds->m_Items[1];
    do
    {
      if ( !v16 )
        goto LABEL_36;
      v20 = *v19++;
      --v18;
      --v16;
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
  if ( !byte_4BD6FF5 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    byte_4BD6FF5 = 1;
  }
  v23 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v23 = NetworkManager_TypeInfo;
  }
  Bytes_63732196 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(
                                                                          v23->static_fields->userIdNumber
                                                                        + v2->fields.battleResult,
                                                                          0LL);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(v5, 0LL);
  v26 = System_Linq_Enumerable__Concat_byte_(
          Bytes_63732196,
          v25,
          (const MethodInfo_2FC7800 *)Method_System_Linq_Enumerable_Concat_byte___);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(v22, 0LL);
  v28 = System_Linq_Enumerable__Concat_byte_(
          v26,
          v27,
          (const MethodInfo_2FC7800 *)Method_System_Linq_Enumerable_Concat_byte___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v30 = System_Linq_Enumerable__Concat_byte_(
          v28,
          v29,
          (const MethodInfo_2FC7800 *)Method_System_Linq_Enumerable_Concat_byte___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63732196(v11, 0LL);
  v32 = System_Linq_Enumerable__Concat_byte_(
          v30,
          v31,
          (const MethodInfo_2FC7800 *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = System_Linq_Enumerable__ToArray_byte_(
          v32,
          (const MethodInfo_2FE953C *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  return Crc32__Compute(v33, 0LL);
}


System_String_o *__fastcall BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  BattleResultRequest_Argument_o *v2; // x19
  struct System_Int32_array_array *voicePlayedArray; // x8
  BattleResultRequest_Argument_o *v4; // x21
  unsigned __int64 v5; // x25
  unsigned __int64 max_length; // x9
  System_Int32_array *v7; // x29
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  BattleResultRequest_Argument_o *v14; // x20
  int64_t v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  void *v28; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  int64_t v41; // x1
  PartyOrganizationUtility_o *p_raidResult; // x0
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x1
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  void *v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7

  v2 = this;
  if ( (byte_4BDDDCF & 1) == 0 )
  {
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_917/*",["*/);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_16086/*"["*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (BattleResultRequest_Argument_o *)sub_1C21E38(&StringLiteral_16345/*"]"*/);
    byte_4BDDDCF = 1;
  }
  voicePlayedArray = v2->fields.voicePlayedArray;
  v4 = (BattleResultRequest_Argument_o *)StringLiteral_1/*""*/;
  if ( voicePlayedArray )
  {
    v5 = 0LL;
    while ( 1 )
    {
      max_length = voicePlayedArray->max_length;
      if ( (__int64)v5 >= (int)max_length )
        break;
      if ( v5 >= max_length )
        goto LABEL_33;
      v7 = voicePlayedArray->m_Items[v5];
      if ( v7 && v7->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v4, 0LL) )
        {
          this = (BattleResultRequest_Argument_o *)sub_1C21EE0(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_31;
          v14 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v15 = StringLiteral_16086/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_16086/*"["*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.scores, v15, v8, v9, v10, v11, v12, v13);
          if ( !v7->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0LL);
          if ( v14->fields.battleResult <= 1u )
            goto LABEL_33;
          v14->fields.action = (struct System_String_o *)this;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields.action, (int64_t)this, v16, v17, v18, v19, v20, v21);
          if ( v14->fields.battleResult <= 2u )
            goto LABEL_33;
          v28 = StringLiteral_866/*","*/;
          v14->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_866/*","*/;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v14->fields.voicePlayedArray,
            (int64_t)v28,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27);
          if ( v7->max_length <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0LL);
          if ( v14->fields.battleResult <= 3u )
            goto LABEL_33;
          v14->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v14->fields.aliveUniqueIds,
            (int64_t)this,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          if ( v14->fields.battleResult <= 4u )
            goto LABEL_33;
          v41 = StringLiteral_16345/*"]"*/;
          v14->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16345/*"]"*/;
          p_raidResult = (PartyOrganizationUtility_o *)&v14->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1C21EE0(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_31;
          v14 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v4;
          sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.scores, (int64_t)v4, v43, v44, v45, v46, v47, v48);
          if ( v14->fields.battleResult <= 1u )
            goto LABEL_33;
          v55 = StringLiteral_917/*",["*/;
          v14->fields.action = (struct System_String_o *)StringLiteral_917/*",["*/;
          sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields.action, v55, v49, v50, v51, v52, v53, v54);
          if ( !v7->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0LL);
          if ( v14->fields.battleResult <= 2u )
            goto LABEL_33;
          v14->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&v14->fields.voicePlayedArray,
            (int64_t)this,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
          if ( v14->fields.battleResult <= 3u
            || (v68 = StringLiteral_866/*","*/,
                v14->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_866/*","*/,
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&v14->fields.aliveUniqueIds,
                  (int64_t)v68,
                  v62,
                  v63,
                  v64,
                  v65,
                  v66,
                  v67),
                v7->max_length <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0LL),
                v14->fields.battleResult <= 4u)
            || (v14->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)&v14->fields.raidResult,
                  (int64_t)this,
                  v69,
                  v70,
                  v71,
                  v72,
                  v73,
                  v74),
                v14->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1C2209C(this, method);
          }
          v41 = StringLiteral_16345/*"]"*/;
          v14->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16345/*"]"*/;
          p_raidResult = (PartyOrganizationUtility_o *)&v14->fields.superBossResult;
        }
        sub_1C21DDC(p_raidResult, v41, v35, v36, v37, v38, v39, v40);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_63129004((System_String_array *)v14, 0LL);
        v4 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v5;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1C22094(this, method);
    }
  }
  return System_String__Concat_63126736(
           (System_String_o *)StringLiteral_16086/*"["*/,
           (System_String_o *)v4,
           (System_String_o *)StringLiteral_16345/*"]"*/,
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