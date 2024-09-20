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
  __int64 v63; // x27
  __int64 v64; // x9
  int32_t *v65; // x10
  __int64 v66; // t1
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_62323424; // x19
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
  int32_t v89; // w2
  int32_t v90; // w3
  System_String_o *v91; // x19
  int32_t v92; // w1
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w1
  int32_t v98; // w2
  int32_t v99; // w3
  int32_t v100; // w2
  int32_t v101; // w3
  int32_t v102; // w1
  ServantStatusBattleListViewItem_o *p_fields; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w1
  int32_t v109; // w2
  int32_t v110; // w3
  int32_t v111; // w2
  int32_t v112; // w3
  int32_t v113; // w1
  int32_t v114; // w2
  int32_t v115; // w3
  Il2CppObject *v116; // x0
  Il2CppObject *v117; // x0
  MiniMessagePack_MiniMessagePacker_o *v118; // x19
  System_Byte_array *v119; // x19
  System_Byte_array *v120; // x19
  System_String_o *v121; // x0
  const MethodInfo *v122; // x3
  const MethodInfo *v123; // x1
  int32_t v130; // [xsp+58h] [xbp-78h] BYREF
  int32_t v131; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v132; // [xsp+60h] [xbp-70h] BYREF
  int32_t v133; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v134; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4A5C92D & 1) == 0 )
  {
    sub_1B885B0(&CatAndMouseGame_TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_byte___);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_1B885B0(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&uint_TypeInfo);
    sub_1B885B0(&StringLiteral_22969/*"routeSelect"*/);
    sub_1B885B0(&StringLiteral_22903/*"result"*/);
    sub_1B885B0(&StringLiteral_22812/*"recordValueJson"*/);
    sub_1B885B0(&StringLiteral_17706/*"calledEnemyUniqueIds"*/);
    sub_1B885B0(&StringLiteral_23346/*"skillShiftNpcSvtIds"*/);
    sub_1B885B0(&StringLiteral_22758/*"raidResult"*/);
    sub_1B885B0(&StringLiteral_24364/*"useTreasureDevices"*/);
    sub_1B885B0(&StringLiteral_22811/*"recordType"*/);
    sub_1B885B0(&StringLiteral_918/*",["*/);
    sub_1B885B0(&StringLiteral_23347/*"skillShiftUniqueIds"*/);
    sub_1B885B0(&StringLiteral_18468/*"dataLostUniqueIds"*/);
    sub_1B885B0(&StringLiteral_24366/*"usedEquipSkillList"*/);
    sub_1B885B0(&StringLiteral_18935/*"elapsedTurn"*/);
    sub_1B885B0(&StringLiteral_24367/*"usedTurnList"*/);
    sub_1B885B0(&StringLiteral_23703/*"svtCommonFlagList"*/);
    sub_1B885B0(&StringLiteral_23042/*"scores"*/);
    sub_1B885B0(&StringLiteral_24666/*"waveInfo"*/);
    sub_1B885B0(&StringLiteral_17122/*"battleStatus"*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_23868/*"tdPlayed"*/);
    sub_1B885B0(&StringLiteral_24591/*"voicePlayedList"*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_24701/*"winResult"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_23686/*"superBossResult"*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    sub_1B885B0(&StringLiteral_17113/*"battleId"*/);
    sub_1B885B0(&StringLiteral_17116/*"battleResult"*/);
    sub_1B885B0(&StringLiteral_16645/*"action"*/);
    sub_1B885B0(&StringLiteral_16732/*"aliveUniqueIds"*/);
    byte_4A5C92D = 1;
  }
  v27 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v27,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v134 = battleId;
  v31 = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &v134, v28, v29, v30);
  if ( !v27 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_17113/*"battleId"*/,
    (Il2CppObject *)v31,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v133 = battleResult;
  v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v133, v33, v34, v35);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_17116/*"battleResult"*/,
    v36,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v132 = winResult;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v132, v37, v38, v39);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24701/*"winResult"*/,
    v40,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23042/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_16645/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v41 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_22758/*"raidResult"*/,
    v41,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v42 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23686/*"superBossResult"*/,
    v42,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v131 = elapsedTurn;
  v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v131, v43, v44, v45);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_18935/*"elapsedTurn"*/,
    v46,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v130 = recordType;
  v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v130, v47, v48, v49);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_22811/*"recordType"*/,
    v50,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_22812/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_76;
  v51 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v52 = (Il2CppObject *)JsonManager__toJson(&v51->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23868/*"tdPlayed"*/,
    v52,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_76;
  v53 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
                          playerServantNoblePhantasmUsageData,
                          0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24364/*"useTreasureDevices"*/,
    v53,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24366/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23703/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23347/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_23346/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_17706/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_22969/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_18468/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_76;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v56 = 0LL;
    if ( !superBossResult )
      goto LABEL_76;
  }
  else
  {
    v55 = 0;
    v56 = 0LL;
    do
    {
      if ( max_length == v55 )
        goto LABEL_75;
      v57 = raidResult->m_Items[v55];
      if ( !v57 )
        goto LABEL_76;
      ++v55;
      v56 += v57->fields.addDamage + (__int64)v57->fields.day + v57->fields.uniqueId;
    }
    while ( max_length != v55 );
    if ( !superBossResult )
LABEL_76:
      sub_1B8880C(v31, v32);
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
        goto LABEL_76;
      ++v59;
      v60 += v61->fields.addDamage + (__int64)v61->fields.superBossId + v61->fields.uniqueId;
      if ( v58 == v59 )
        goto LABEL_24;
    }
LABEL_75:
    sub_1B88814(v31, v32);
  }
  v60 = 0LL;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_16732/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_76;
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
    goto LABEL_75;
  }
  v63 = 0LL;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Bytes_62323424 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(
                                                                          UserId + battleResult,
                                                                          0LL);
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(v56 - 4231125, 0LL);
  v70 = System_Linq_Enumerable__Concat_byte_(
          Bytes_62323424,
          v69,
          (const MethodInfo_2E99414 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v63 >= 0 )
    v71 = v63;
  else
    v71 = v63 + 1;
  v72 = v70;
  v73 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(v71 >> 1, 0LL);
  v74 = System_Linq_Enumerable__Concat_byte_(
          v72,
          v73,
          (const MethodInfo_2E99414 *)Method_System_Linq_Enumerable_Concat_byte___);
  v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(
                                                               battleId - 0x7FFFFFFF,
                                                               0LL);
  v76 = System_Linq_Enumerable__Concat_byte_(
          v74,
          v75,
          (const MethodInfo_2E99414 *)Method_System_Linq_Enumerable_Concat_byte___);
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(v60 - 2469110, 0LL);
  v78 = System_Linq_Enumerable__Concat_byte_(
          v76,
          v77,
          (const MethodInfo_2E99414 *)Method_System_Linq_Enumerable_Concat_byte___);
  v79 = System_Linq_Enumerable__ToArray_byte_(
          v78,
          (const MethodInfo_2EB843C *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v134) = Crc32__Compute(v79, 0LL);
  v83 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v134, v80, v81, v82);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_17122/*"battleStatus"*/,
    v83,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
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
            v31 = (System_String_o *)sub_1B88658(string___TypeInfo, 5LL);
            if ( !v31 )
              goto LABEL_76;
            v91 = v31;
            if ( !LODWORD(v31[1].klass) )
              goto LABEL_75;
            v92 = StringLiteral_15812/*"["*/;
            v31[1].monitor = (void *)StringLiteral_15812/*"["*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v31[1].monitor, v92, v89, v90);
            if ( !v88->max_length )
              goto LABEL_75;
            v31 = System_Int32__ToString((int)v88 + 32, 0LL);
            if ( LODWORD(v91[1].klass) <= 1 )
              goto LABEL_75;
            v91[1].fields = (System_String_Fields)v31;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v91[1].fields, (int32_t)v31, v93, v94);
            if ( LODWORD(v91[1].klass) <= 2 )
              goto LABEL_75;
            v97 = (int)StringLiteral_868/*","*/;
            v91[2].klass = (System_String_c *)StringLiteral_868/*","*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v91[2], v97, v95, v96);
            if ( v88->max_length <= 1 )
              goto LABEL_75;
            v31 = System_Int32__ToString((int)v88 + 36, 0LL);
            if ( LODWORD(v91[1].klass) <= 3 )
              goto LABEL_75;
            v91[2].monitor = v31;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v91[2].monitor, (int32_t)v31, v98, v99);
            if ( LODWORD(v91[1].klass) <= 4 )
              goto LABEL_75;
            v102 = StringLiteral_16069/*"]"*/;
            v91[2].fields = (System_String_Fields)StringLiteral_16069/*"]"*/;
            p_fields = (ServantStatusBattleListViewItem_o *)&v91[2].fields;
          }
          else
          {
            v31 = (System_String_o *)sub_1B88658(string___TypeInfo, 6LL);
            if ( !v31 )
              goto LABEL_76;
            v91 = v31;
            if ( !LODWORD(v31[1].klass) )
              goto LABEL_75;
            v31[1].monitor = v86;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v31[1].monitor, (int32_t)v86, v104, v105);
            if ( LODWORD(v91[1].klass) <= 1 )
              goto LABEL_75;
            v108 = StringLiteral_918/*",["*/;
            v91[1].fields = (System_String_Fields)StringLiteral_918/*",["*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v91[1].fields, v108, v106, v107);
            if ( !v88->max_length )
              goto LABEL_75;
            v31 = System_Int32__ToString((int)v88 + 32, 0LL);
            if ( LODWORD(v91[1].klass) <= 2 )
              goto LABEL_75;
            v91[2].klass = (System_String_c *)v31;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v91[2], (int32_t)v31, v109, v110);
            if ( LODWORD(v91[1].klass) <= 3 )
              goto LABEL_75;
            v113 = (int)StringLiteral_868/*","*/;
            v91[2].monitor = StringLiteral_868/*","*/;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v91[2].monitor, v113, v111, v112);
            if ( v88->max_length <= 1 )
              goto LABEL_75;
            v31 = System_Int32__ToString((int)v88 + 36, 0LL);
            if ( LODWORD(v91[1].klass) <= 4 )
              goto LABEL_75;
            v91[2].fields = (System_String_Fields)v31;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v91[2].fields, (int32_t)v31, v114, v115);
            if ( LODWORD(v91[1].klass) <= 5 )
              goto LABEL_75;
            v102 = StringLiteral_16069/*"]"*/;
            v91[3].klass = (System_String_c *)StringLiteral_16069/*"]"*/;
            p_fields = (ServantStatusBattleListViewItem_o *)&v91[3];
          }
          sub_1B88554(p_fields, v102, v100, v101);
          v31 = System_String__Concat_61720560((System_String_array *)v91, 0LL);
          v84 = voicePlayedArray;
          v86 = v31;
        }
        LODWORD(v85) = v84->max_length;
        if ( (__int64)++v87 >= (int)v85 )
          goto LABEL_66;
      }
      goto LABEL_75;
    }
LABEL_66:
    v116 = (Il2CppObject *)System_String__Concat_61718292(
                             (System_String_o *)StringLiteral_15812/*"["*/,
                             v86,
                             (System_String_o *)StringLiteral_16069/*"]"*/,
                             0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v27,
      (Il2CppObject *)StringLiteral_24591/*"voicePlayedList"*/,
      v116,
      (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24367/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v117 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v27,
    (Il2CppObject *)StringLiteral_24666/*"waveInfo"*/,
    v117,
    (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v118 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B887FC(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v118, 0LL);
  if ( !v118 )
    goto LABEL_76;
  v119 = MiniMessagePack_MiniMessagePacker__PackClass(v118, (Il2CppObject *)v27, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v120 = CatAndMouseGame__CatGame5Bytes(v119, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v121 = System_Convert__ToBase64String(v120, 0LL);
  RequestBase__addField_41126952((RequestBase_o *)this, (System_String_o *)StringLiteral_22903/*"result"*/, v121, v122);
  RequestBase__beginRequest((RequestBase_o *)this, v123);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4A5C92F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    byte_4A5C92F = 1;
  }
  memset(&v4, 0, sizeof(v4));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B8880C(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v4,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v4,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4A5C92C & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9100/*"MockBattleResultRequest"*/);
    byte_4A5C92C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9100/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C92B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17094/*"battle/result"*/);
    byte_4A5C92B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17094/*"battle/result"*/, 0LL);
}


void __fastcall BattleResultRequest__requestCompleted(
        BattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4A5C92E & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&ServantCommentManager_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C92E = 1;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v5
    && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6))
    && (success = (Il2CppObject *)v7->fields.success) != 0LL )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__UpdateChapter(0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v9,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v11->fields.m_target)(
        v11->fields.original_method_info,
        StringLiteral_22055/*"ng"*/,
        *(_QWORD *)&v11->fields.extra_arg);
  }
}


void __fastcall BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1
  int32_t v6; // w1
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Int32_array_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int32_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct BattleResultRequest_RaidResult_array *v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  struct BattleResultRequest_SuperBossResult_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_Dictionary_object__object__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_Collections_Generic_List_object__o *v27; // x20
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_Dictionary_int__int__o *v30; // x20
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Int32_array *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct System_Int64_array *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Int32_array *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3

  if ( (byte_4A5C932 & 1) == 0 )
  {
    sub_1B885B0(&BattleData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&int_____TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&long___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_1B885B0(&BattleResultRequest_RaidResult___TypeInfo);
    sub_1B885B0(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5C932 = 1;
  }
  v5 = (int)StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.scores, v5, v2, v3);
  v6 = (int)StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.action, v6, v7, v8);
  v9 = (struct System_Int32_array_array *)sub_1B88658(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayedArray, (int32_t)v9, v10, v11);
  v12 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v12;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.aliveUniqueIds, (int32_t)v12, v13, v14);
  v15 = (struct BattleResultRequest_RaidResult_array *)sub_1B88658(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v15;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.raidResult, (int32_t)v15, v16, v17);
  v18 = (struct BattleResultRequest_SuperBossResult_array *)sub_1B88658(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.superBossResult, (int32_t)v18, v19, v20);
  v21 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.usedTurnArray, (int32_t)v21, v22, v23);
  this->fields.recordType = 1;
  v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v24,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.recordJson, (int32_t)v24, v25, v26);
  v27 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v27,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v27;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.firstNpPlayList, (int32_t)v27, v28, v29);
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.usedEquipSkillDict, (int32_t)v30, v31, v32);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.svtCommonFlagDict,
    (int32_t)SavedServantCommonFlagDict,
    v34,
    v35);
  v36 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillShiftUniqueIds, (int32_t)v36, v37, v38);
  v39 = (struct System_Int64_array *)sub_1B88658(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v39;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillShiftNpcSvtIds, (int32_t)v39, v40, v41);
  v42 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 0LL);
  this->fields.routeSelect = v42;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.routeSelect, (int32_t)v42, v43, v44);
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
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_62323424; // x23
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
  if ( (byte_4A5C930 & 1) == 0 )
  {
    sub_1B885B0(&Crc32_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_byte___);
    this = (BattleResultRequest_Argument_o *)sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5C930 = 1;
  }
  raidResult = v2->fields.raidResult;
  if ( !raidResult )
    goto LABEL_33;
  max_length = raidResult->max_length;
  v5 = -4231125LL;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0LL;
    do
    {
      if ( max_length == v6 )
LABEL_32:
        sub_1B88814(this, method);
      v8 = (int *)raidResult->m_Items[v6];
      if ( !v8 )
        goto LABEL_33;
      ++v6;
      v7 += v8[6] + (__int64)v8[5] + v8[4];
    }
    while ( max_length != v6 );
    v5 = v7 - 4231125;
  }
  superBossResult = v2->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_33;
  v10 = superBossResult->max_length;
  v11 = -2469110LL;
  if ( v10 >= 1 )
  {
    v12 = 0;
    v13 = 0LL;
    do
    {
      if ( v10 == v12 )
        goto LABEL_32;
      v14 = (int *)superBossResult->m_Items[v12];
      if ( !v14 )
        goto LABEL_33;
      ++v12;
      v13 += v14[6] + (__int64)v14[4] + v14[5];
    }
    while ( v10 != v12 );
    v11 = v13 - 2469110;
  }
  aliveUniqueIds = v2->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_33:
    sub_1B8880C(this, method);
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
        goto LABEL_32;
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
  UserId = NetworkManager__get_UserId(0LL);
  Bytes_62323424 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(
                                                                          UserId + v2->fields.battleResult,
                                                                          0LL);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(v5, 0LL);
  v26 = System_Linq_Enumerable__Concat_byte_(
          Bytes_62323424,
          v25,
          (const MethodInfo_2E99414 *)Method_System_Linq_Enumerable_Concat_byte___);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(v22, 0LL);
  v28 = System_Linq_Enumerable__Concat_byte_(
          v26,
          v27,
          (const MethodInfo_2E99414 *)Method_System_Linq_Enumerable_Concat_byte___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v30 = System_Linq_Enumerable__Concat_byte_(
          v28,
          v29,
          (const MethodInfo_2E99414 *)Method_System_Linq_Enumerable_Concat_byte___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_62323424(v11, 0LL);
  v32 = System_Linq_Enumerable__Concat_byte_(
          v30,
          v31,
          (const MethodInfo_2E99414 *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = System_Linq_Enumerable__ToArray_byte_(
          v32,
          (const MethodInfo_2EB843C *)Method_System_Linq_Enumerable_ToArray_byte___);
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
  int32_t v8; // w2
  int32_t v9; // w3
  BattleResultRequest_Argument_o *v10; // x20
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  ServantStatusBattleListViewItem_o *p_raidResult; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3

  v2 = this;
  if ( (byte_4A5C931 & 1) == 0 )
  {
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_918/*",["*/);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_15812/*"["*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (BattleResultRequest_Argument_o *)sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5C931 = 1;
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
          this = (BattleResultRequest_Argument_o *)sub_1B88658(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_31;
          v10 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v11 = StringLiteral_15812/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15812/*"["*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.scores, v11, v8, v9);
          if ( !v7->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0LL);
          if ( v10->fields.battleResult <= 1u )
            goto LABEL_33;
          v10->fields.action = (struct System_String_o *)this;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.action, (int32_t)this, v12, v13);
          if ( v10->fields.battleResult <= 2u )
            goto LABEL_33;
          v16 = (int)StringLiteral_868/*","*/;
          v10->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_868/*","*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.voicePlayedArray, v16, v14, v15);
          if ( v7->max_length <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0LL);
          if ( v10->fields.battleResult <= 3u )
            goto LABEL_33;
          v10->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.aliveUniqueIds, (int32_t)this, v17, v18);
          if ( v10->fields.battleResult <= 4u )
            goto LABEL_33;
          v21 = StringLiteral_16069/*"]"*/;
          v10->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16069/*"]"*/;
          p_raidResult = (ServantStatusBattleListViewItem_o *)&v10->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1B88658(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_31;
          v10 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v4;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.scores, (int32_t)v4, v23, v24);
          if ( v10->fields.battleResult <= 1u )
            goto LABEL_33;
          v27 = StringLiteral_918/*",["*/;
          v10->fields.action = (struct System_String_o *)StringLiteral_918/*",["*/;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.action, v27, v25, v26);
          if ( !v7->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0LL);
          if ( v10->fields.battleResult <= 2u )
            goto LABEL_33;
          v10->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.voicePlayedArray, (int32_t)this, v28, v29);
          if ( v10->fields.battleResult <= 3u
            || (v32 = (int)StringLiteral_868/*","*/,
                v10->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_868/*","*/,
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.aliveUniqueIds, v32, v30, v31),
                v7->max_length <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0LL),
                v10->fields.battleResult <= 4u)
            || (v10->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.raidResult, (int32_t)this, v33, v34),
                v10->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1B88814(this, method);
          }
          v21 = StringLiteral_16069/*"]"*/;
          v10->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16069/*"]"*/;
          p_raidResult = (ServantStatusBattleListViewItem_o *)&v10->fields.superBossResult;
        }
        sub_1B88554(p_raidResult, v21, v19, v20);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_61720560((System_String_array *)v10, 0LL);
        v4 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v5;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1B8880C(this, method);
    }
  }
  return System_String__Concat_61718292(
           (System_String_o *)StringLiteral_15812/*"["*/,
           (System_String_o *)v4,
           (System_String_o *)StringLiteral_16069/*"]"*/,
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