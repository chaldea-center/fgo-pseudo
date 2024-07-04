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
  __int64 v27; // x1
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
  System_Collections_Generic_Dictionary_object__object__o *v72; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  System_String_o *v76; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x3
  __int64 v80; // x4
  Il2CppObject *v81; // x0
  __int64 v82; // x2
  __int64 v83; // x3
  __int64 v84; // x4
  Il2CppObject *v85; // x0
  Il2CppObject *v86; // x0
  Il2CppObject *v87; // x0
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  Il2CppObject *v91; // x0
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x0
  System_Object_array *v96; // x0
  Il2CppObject *v97; // x0
  Il2CppObject *v98; // x0
  signed int max_length; // w8
  int v100; // w9
  __int64 v101; // x22
  BattleResultRequest_RaidResult_o *v102; // x10
  signed int v103; // w8
  int v104; // w9
  __int64 v105; // x20
  BattleResultRequest_SuperBossResult_o *v106; // x10
  __int64 v107; // x8
  __int64 v108; // x27
  __int64 v109; // x9
  int32_t *v110; // x10
  __int64 v111; // t1
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_60942000; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v114; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v115; // x0
  __int64 v116; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v118; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v119; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v120; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v121; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v122; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v123; // x0
  System_Byte_array *v124; // x19
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  Il2CppObject *v128; // x0
  System_Int32_array_array *v129; // x10
  __int64 v130; // x8
  System_String_o *v131; // x22
  unsigned __int64 v132; // x25
  System_Int32_array *v133; // x29
  int32_t v134; // w2
  int32_t v135; // w3
  System_String_o *v136; // x19
  int32_t v137; // w1
  int32_t v138; // w2
  int32_t v139; // w3
  int32_t v140; // w2
  int32_t v141; // w3
  int32_t v142; // w1
  int32_t v143; // w2
  int32_t v144; // w3
  int32_t v145; // w2
  int32_t v146; // w3
  int32_t v147; // w1
  ServantStatusBattleListViewItem_o *p_fields; // x0
  int32_t v149; // w2
  int32_t v150; // w3
  int32_t v151; // w2
  int32_t v152; // w3
  int32_t v153; // w1
  int32_t v154; // w2
  int32_t v155; // w3
  int32_t v156; // w2
  int32_t v157; // w3
  int32_t v158; // w1
  int32_t v159; // w2
  int32_t v160; // w3
  Il2CppObject *v161; // x0
  Il2CppObject *v162; // x0
  MiniMessagePack_MiniMessagePacker_o *v163; // x19
  System_Byte_array *v164; // x19
  System_Byte_array *v165; // x19
  System_String_o *v166; // x0
  const MethodInfo *v167; // x3
  const MethodInfo *v168; // x1
  int32_t v175; // [xsp+58h] [xbp-78h] BYREF
  int32_t v176; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v177; // [xsp+60h] [xbp-70h] BYREF
  int32_t v178; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v179; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_48E3E37 & 1) == 0 )
  {
    sub_1B00CCC(&CatAndMouseGame_TypeInfo, battleId);
    sub_1B00CCC(&System_Convert_TypeInfo, v27);
    sub_1B00CCC(&Crc32_TypeInfo, v28);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v29);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v30);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v31);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Concat_byte___, v32);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_byte___, v33);
    sub_1B00CCC(&int_TypeInfo, v34);
    sub_1B00CCC(&long_TypeInfo, v35);
    sub_1B00CCC(&JsonManager_TypeInfo, v36);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v37);
    sub_1B00CCC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v38);
    sub_1B00CCC(&NetworkManager_TypeInfo, v39);
    sub_1B00CCC(&string___TypeInfo, v40);
    sub_1B00CCC(&uint_TypeInfo, v41);
    sub_1B00CCC(&StringLiteral_22652/*"routeSelect"*/, v42);
    sub_1B00CCC(&StringLiteral_22589/*"result"*/, v43);
    sub_1B00CCC(&StringLiteral_22498/*"recordValueJson"*/, v44);
    sub_1B00CCC(&StringLiteral_17463/*"calledEnemyUniqueIds"*/, v45);
    sub_1B00CCC(&StringLiteral_23000/*"skillShiftNpcSvtIds"*/, v46);
    sub_1B00CCC(&StringLiteral_22447/*"raidResult"*/, v47);
    sub_1B00CCC(&StringLiteral_24008/*"useTreasureDevices"*/, v48);
    sub_1B00CCC(&StringLiteral_22497/*"recordType"*/, v49);
    sub_1B00CCC(&StringLiteral_915/*",["*/, v50);
    sub_1B00CCC(&StringLiteral_23001/*"skillShiftUniqueIds"*/, v51);
    sub_1B00CCC(&StringLiteral_18218/*"dataLostUniqueIds"*/, v52);
    sub_1B00CCC(&StringLiteral_24010/*"usedEquipSkillList"*/, v53);
    sub_1B00CCC(&StringLiteral_18683/*"elapsedTurn"*/, v54);
    sub_1B00CCC(&StringLiteral_24011/*"usedTurnList"*/, v55);
    sub_1B00CCC(&StringLiteral_23352/*"svtCommonFlagList"*/, v56);
    sub_1B00CCC(&StringLiteral_22725/*"scores"*/, v57);
    sub_1B00CCC(&StringLiteral_24302/*"waveInfo"*/, v58);
    sub_1B00CCC(&StringLiteral_16888/*"battleStatus"*/, v59);
    sub_1B00CCC(&StringLiteral_865/*","*/, v60);
    sub_1B00CCC(&StringLiteral_23515/*"tdPlayed"*/, v61);
    sub_1B00CCC(&StringLiteral_24228/*"voicePlayedList"*/, v62);
    sub_1B00CCC(&StringLiteral_15581/*"["*/, v63);
    sub_1B00CCC(&StringLiteral_24337/*"winResult"*/, v64);
    sub_1B00CCC(&StringLiteral_1/*""*/, v65);
    sub_1B00CCC(&StringLiteral_23335/*"superBossResult"*/, v66);
    sub_1B00CCC(&StringLiteral_15837/*"]"*/, v67);
    sub_1B00CCC(&StringLiteral_16879/*"battleId"*/, v68);
    sub_1B00CCC(&StringLiteral_16882/*"battleResult"*/, v69);
    sub_1B00CCC(&StringLiteral_16411/*"action"*/, v70);
    sub_1B00CCC(&StringLiteral_16498/*"aliveUniqueIds"*/, v71);
    byte_48E3E37 = 1;
  }
  v72 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v72,
    (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v179 = battleId;
  v76 = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &v179, v73, v74, v75);
  if ( !v72 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_16879/*"battleId"*/,
    (Il2CppObject *)v76,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v178 = battleResult;
  v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v178, v78, v79, v80);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_16882/*"battleResult"*/,
    v81,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v177 = winResult;
  v85 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v177, v82, v83, v84);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24337/*"winResult"*/,
    v85,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22725/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_16411/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v86 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22447/*"raidResult"*/,
    v86,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v87 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23335/*"superBossResult"*/,
    v87,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v176 = elapsedTurn;
  v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v176, v88, v89, v90);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_18683/*"elapsedTurn"*/,
    v91,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v175 = recordType;
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v175, v92, v93, v94);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22497/*"recordType"*/,
    v95,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22498/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_76;
  v96 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v97 = (Il2CppObject *)JsonManager__toJson(&v96->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23515/*"tdPlayed"*/,
    v97,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_76;
  v98 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
                          playerServantNoblePhantasmUsageData,
                          0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24008/*"useTreasureDevices"*/,
    v98,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24010/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23352/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23001/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23000/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_17463/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22652/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_18218/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_76;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v101 = 0LL;
    if ( !superBossResult )
      goto LABEL_76;
  }
  else
  {
    v100 = 0;
    v101 = 0LL;
    do
    {
      if ( max_length == v100 )
        goto LABEL_75;
      v102 = raidResult->m_Items[v100];
      if ( !v102 )
        goto LABEL_76;
      ++v100;
      v101 += v102->fields.addDamage + (__int64)v102->fields.day + v102->fields.uniqueId;
    }
    while ( max_length != v100 );
    if ( !superBossResult )
LABEL_76:
      sub_1B00F28(v76, v77);
  }
  v103 = superBossResult->max_length;
  if ( v103 >= 1 )
  {
    v104 = 0;
    v105 = 0LL;
    while ( v103 != v104 )
    {
      v106 = superBossResult->m_Items[v104];
      if ( !v106 )
        goto LABEL_76;
      ++v104;
      v105 += v106->fields.addDamage + (__int64)v106->fields.superBossId + v106->fields.uniqueId;
      if ( v103 == v104 )
        goto LABEL_24;
    }
LABEL_75:
    sub_1B00F30(v76, v77);
  }
  v105 = 0LL;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_16498/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_76;
  v107 = aliveUniqueIds->max_length;
  if ( v107 << 32 >= 1 )
  {
    v108 = 0LL;
    v109 = (int)v107;
    v110 = &aliveUniqueIds->m_Items[1];
    while ( v107 )
    {
      v111 = *v110++;
      --v109;
      --v107;
      v108 += v111;
      if ( !v109 )
        goto LABEL_31;
    }
    goto LABEL_75;
  }
  v108 = 0LL;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Bytes_60942000 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(
                                                                          UserId + battleResult,
                                                                          0LL);
  v114 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(
                                                                v101 - 4231125,
                                                                0LL);
  v115 = System_Linq_Enumerable__Concat_byte_(
           Bytes_60942000,
           v114,
           (const MethodInfo_2D7A01C *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v108 >= 0 )
    v116 = v108;
  else
    v116 = v108 + 1;
  v117 = v115;
  v118 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(v116 >> 1, 0LL);
  v119 = System_Linq_Enumerable__Concat_byte_(
           v117,
           v118,
           (const MethodInfo_2D7A01C *)Method_System_Linq_Enumerable_Concat_byte___);
  v120 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(
                                                                battleId - 0x7FFFFFFF,
                                                                0LL);
  v121 = System_Linq_Enumerable__Concat_byte_(
           v119,
           v120,
           (const MethodInfo_2D7A01C *)Method_System_Linq_Enumerable_Concat_byte___);
  v122 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(
                                                                v105 - 2469110,
                                                                0LL);
  v123 = System_Linq_Enumerable__Concat_byte_(
           v121,
           v122,
           (const MethodInfo_2D7A01C *)Method_System_Linq_Enumerable_Concat_byte___);
  v124 = System_Linq_Enumerable__ToArray_byte_(
           v123,
           (const MethodInfo_2D97414 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v179) = Crc32__Compute(v124, 0LL);
  v128 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v179, v125, v126, v127);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_16888/*"battleStatus"*/,
    v128,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v129 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v130 = *(_QWORD *)&voicePlayedArray->max_length;
    v131 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v130 >= 1 )
    {
      v132 = 0LL;
      while ( v132 < (unsigned int)v130 )
      {
        v133 = voicePlayedArray->m_Items[v132];
        if ( v133 && v133->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty(v131, 0LL) )
          {
            v76 = (System_String_o *)sub_1B00D74(string___TypeInfo, 5LL);
            if ( !v76 )
              goto LABEL_76;
            v136 = v76;
            if ( !LODWORD(v76[1].klass) )
              goto LABEL_75;
            v137 = StringLiteral_15581/*"["*/;
            v76[1].monitor = (void *)StringLiteral_15581/*"["*/;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v76[1].monitor, v137, v134, v135);
            if ( !v133->max_length )
              goto LABEL_75;
            v76 = System_Int32__ToString((int)v133 + 32, 0LL);
            if ( LODWORD(v136[1].klass) <= 1 )
              goto LABEL_75;
            v136[1].fields = (System_String_Fields)v76;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v136[1].fields, (int32_t)v76, v138, v139);
            if ( LODWORD(v136[1].klass) <= 2 )
              goto LABEL_75;
            v142 = (int)StringLiteral_865/*","*/;
            v136[2].klass = (System_String_c *)StringLiteral_865/*","*/;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v136[2], v142, v140, v141);
            if ( v133->max_length <= 1 )
              goto LABEL_75;
            v76 = System_Int32__ToString((int)v133 + 36, 0LL);
            if ( LODWORD(v136[1].klass) <= 3 )
              goto LABEL_75;
            v136[2].monitor = v76;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v136[2].monitor, (int32_t)v76, v143, v144);
            if ( LODWORD(v136[1].klass) <= 4 )
              goto LABEL_75;
            v147 = StringLiteral_15837/*"]"*/;
            v136[2].fields = (System_String_Fields)StringLiteral_15837/*"]"*/;
            p_fields = (ServantStatusBattleListViewItem_o *)&v136[2].fields;
          }
          else
          {
            v76 = (System_String_o *)sub_1B00D74(string___TypeInfo, 6LL);
            if ( !v76 )
              goto LABEL_76;
            v136 = v76;
            if ( !LODWORD(v76[1].klass) )
              goto LABEL_75;
            v76[1].monitor = v131;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v76[1].monitor, (int32_t)v131, v149, v150);
            if ( LODWORD(v136[1].klass) <= 1 )
              goto LABEL_75;
            v153 = StringLiteral_915/*",["*/;
            v136[1].fields = (System_String_Fields)StringLiteral_915/*",["*/;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v136[1].fields, v153, v151, v152);
            if ( !v133->max_length )
              goto LABEL_75;
            v76 = System_Int32__ToString((int)v133 + 32, 0LL);
            if ( LODWORD(v136[1].klass) <= 2 )
              goto LABEL_75;
            v136[2].klass = (System_String_c *)v76;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v136[2], (int32_t)v76, v154, v155);
            if ( LODWORD(v136[1].klass) <= 3 )
              goto LABEL_75;
            v158 = (int)StringLiteral_865/*","*/;
            v136[2].monitor = StringLiteral_865/*","*/;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v136[2].monitor, v158, v156, v157);
            if ( v133->max_length <= 1 )
              goto LABEL_75;
            v76 = System_Int32__ToString((int)v133 + 36, 0LL);
            if ( LODWORD(v136[1].klass) <= 4 )
              goto LABEL_75;
            v136[2].fields = (System_String_Fields)v76;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)&v136[2].fields, (int32_t)v76, v159, v160);
            if ( LODWORD(v136[1].klass) <= 5 )
              goto LABEL_75;
            v147 = StringLiteral_15837/*"]"*/;
            v136[3].klass = (System_String_c *)StringLiteral_15837/*"]"*/;
            p_fields = (ServantStatusBattleListViewItem_o *)&v136[3];
          }
          sub_1B00C70(p_fields, v147, v145, v146);
          v76 = System_String__Concat_60339276((System_String_array *)v136, 0LL);
          v129 = voicePlayedArray;
          v131 = v76;
        }
        LODWORD(v130) = v129->max_length;
        if ( (__int64)++v132 >= (int)v130 )
          goto LABEL_66;
      }
      goto LABEL_75;
    }
LABEL_66:
    v161 = (Il2CppObject *)System_String__Concat_60337008(
                             (System_String_o *)StringLiteral_15581/*"["*/,
                             v131,
                             (System_String_o *)StringLiteral_15837/*"]"*/,
                             0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v72,
      (Il2CppObject *)StringLiteral_24228/*"voicePlayedList"*/,
      v161,
      (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24011/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v162 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24302/*"waveInfo"*/,
    v162,
    (const MethodInfo_308DA48 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v163 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B00F18(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v163, 0LL);
  if ( !v163 )
    goto LABEL_76;
  v164 = MiniMessagePack_MiniMessagePacker__PackClass(v163, (Il2CppObject *)v72, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v165 = CatAndMouseGame__CatGame5Bytes(v164, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v166 = System_Convert__ToBase64String(v165, 0LL);
  RequestBase__addField_39752868((RequestBase_o *)this, (System_String_o *)StringLiteral_22589/*"result"*/, v166, v167);
  RequestBase__beginRequest((RequestBase_o *)this, v168);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_48E3E39 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v5);
    byte_48E3E39 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B00F28(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_308DE78 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v7,
            (const MethodInfo_318E0BC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_318E1DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_48E3E36 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_8997/*"MockBattleResultRequest"*/, v2);
    byte_48E3E36 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_8997/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E3E35 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_16860/*"battle/result"*/, v2);
    byte_48E3E35 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_16860/*"battle/result"*/, 0LL);
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
  const MethodInfo *v9; // x2
  ResponseData_o *v10; // x20
  Il2CppObject *success; // x20
  System_String_o *v12; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v14; // x8

  if ( (byte_48E3E38 & 1) == 0 )
  {
    sub_1B00CCC(&JsonManager_TypeInfo, responseList);
    sub_1B00CCC(&ResponseCommandKind_TypeInfo, v5);
    sub_1B00CCC(&ServantCommentManager_TypeInfo, v6);
    sub_1B00CCC(&StringLiteral_21754/*"ng"*/, v7);
    byte_48E3E38 = 1;
  }
  if ( (byte_48E3FC5 & 1) == 0 )
  {
    sub_1B00CCC(&TopHomeRequest_TypeInfo, responseList);
    byte_48E3FC5 = 1;
  }
  TopHomeRequest_TypeInfo->static_fields->accessTime = 0LL;
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v8
    && (v10 = v8, ResponseData__checkError(v8, v8->fields.resCode, v9))
    && (success = (Il2CppObject *)v10->fields.success) != 0LL )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    ServantCommentManager__UpdateChapter(0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v12,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v14 = this->fields.CallBack;
    if ( v14 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v14->fields.m_target)(
        v14->fields.original_method_info,
        StringLiteral_21754/*"ng"*/,
        *(_QWORD *)&v14->fields.extra_arg);
  }
}


void __fastcall BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
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
  int32_t v20; // w3
  struct System_Int32_array_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Int32_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct BattleResultRequest_RaidResult_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct BattleResultRequest_SuperBossResult_array *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  struct System_Int32_array *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_Dictionary_object__object__o *v36; // x20
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_List_object__o *v39; // x20
  int32_t v40; // w2
  int32_t v41; // w3
  System_Collections_Generic_Dictionary_int__int__o *v42; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Int32_array *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Int64_array *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Int32_array *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3

  if ( (byte_48E3E3C & 1) == 0 )
  {
    sub_1B00CCC(&BattleData_TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B00CCC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8);
    sub_1B00CCC(&int_____TypeInfo, v9);
    sub_1B00CCC(&int___TypeInfo, v10);
    sub_1B00CCC(&long___TypeInfo, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v13);
    sub_1B00CCC(&BattleResultRequest_RaidResult___TypeInfo, v14);
    sub_1B00CCC(&BattleResultRequest_SuperBossResult___TypeInfo, v15);
    sub_1B00CCC(&StringLiteral_1/*""*/, v16);
    byte_48E3E3C = 1;
  }
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.scores, v17, v2, v3);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.action, v18, v19, v20);
  v21 = (struct System_Int32_array_array *)sub_1B00D74(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v21;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayedArray, (int32_t)v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v24;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.aliveUniqueIds, (int32_t)v24, v25, v26);
  v27 = (struct BattleResultRequest_RaidResult_array *)sub_1B00D74(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v27;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.raidResult, (int32_t)v27, v28, v29);
  v30 = (struct BattleResultRequest_SuperBossResult_array *)sub_1B00D74(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v30;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.superBossResult, (int32_t)v30, v31, v32);
  v33 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v33;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.usedTurnArray, (int32_t)v33, v34, v35);
  this->fields.recordType = 1;
  v36 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B00F18(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v36,
    (const MethodInfo_308D098 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v36;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.recordJson, (int32_t)v36, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v39;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.firstNpPlayList, (int32_t)v39, v40, v41);
  v42 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B00F18(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v42,
    (const MethodInfo_302D098 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v42;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.usedEquipSkillDict, (int32_t)v42, v43, v44);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.svtCommonFlagDict,
    (int32_t)SavedServantCommonFlagDict,
    v46,
    v47);
  v48 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v48;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillShiftUniqueIds, (int32_t)v48, v49, v50);
  v51 = (struct System_Int64_array *)sub_1B00D74(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v51;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillShiftNpcSvtIds, (int32_t)v51, v52, v53);
  v54 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  this->fields.routeSelect = v54;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.routeSelect, (int32_t)v54, v55, v56);
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
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_60942000; // x23
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
  if ( (byte_48E3E3A & 1) == 0 )
  {
    sub_1B00CCC(&Crc32_TypeInfo, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Concat_byte___, v3);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_byte___, v4);
    this = (BattleResultRequest_Argument_o *)sub_1B00CCC(&NetworkManager_TypeInfo, v5);
    byte_48E3E3A = 1;
  }
  raidResult = v2->fields.raidResult;
  if ( !raidResult )
    goto LABEL_33;
  max_length = raidResult->max_length;
  v8 = -4231125LL;
  if ( max_length >= 1 )
  {
    v9 = 0;
    v10 = 0LL;
    do
    {
      if ( max_length == v9 )
LABEL_32:
        sub_1B00F30(this, method);
      v11 = (int *)raidResult->m_Items[v9];
      if ( !v11 )
        goto LABEL_33;
      ++v9;
      v10 += v11[6] + (__int64)v11[5] + v11[4];
    }
    while ( max_length != v9 );
    v8 = v10 - 4231125;
  }
  superBossResult = v2->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_33;
  v13 = superBossResult->max_length;
  v14 = -2469110LL;
  if ( v13 >= 1 )
  {
    v15 = 0;
    v16 = 0LL;
    do
    {
      if ( v13 == v15 )
        goto LABEL_32;
      v17 = (int *)superBossResult->m_Items[v15];
      if ( !v17 )
        goto LABEL_33;
      ++v15;
      v16 += v17[6] + (__int64)v17[4] + v17[5];
    }
    while ( v13 != v15 );
    v14 = v16 - 2469110;
  }
  aliveUniqueIds = v2->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_33:
    sub_1B00F28(this, method);
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
        goto LABEL_32;
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
  UserId = NetworkManager__get_UserId(0LL);
  Bytes_60942000 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(
                                                                          UserId + v2->fields.battleResult,
                                                                          0LL);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(v8, 0LL);
  v29 = System_Linq_Enumerable__Concat_byte_(
          Bytes_60942000,
          v28,
          (const MethodInfo_2D7A01C *)Method_System_Linq_Enumerable_Concat_byte___);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(v25, 0LL);
  v31 = System_Linq_Enumerable__Concat_byte_(
          v29,
          v30,
          (const MethodInfo_2D7A01C *)Method_System_Linq_Enumerable_Concat_byte___);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v33 = System_Linq_Enumerable__Concat_byte_(
          v31,
          v32,
          (const MethodInfo_2D7A01C *)Method_System_Linq_Enumerable_Concat_byte___);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_60942000(v14, 0LL);
  v35 = System_Linq_Enumerable__Concat_byte_(
          v33,
          v34,
          (const MethodInfo_2D7A01C *)Method_System_Linq_Enumerable_Concat_byte___);
  v36 = System_Linq_Enumerable__ToArray_byte_(
          v35,
          (const MethodInfo_2D97414 *)Method_System_Linq_Enumerable_ToArray_byte___);
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
  int32_t v14; // w3
  BattleResultRequest_Argument_o *v15; // x20
  int32_t v16; // w1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  int32_t v26; // w1
  ServantStatusBattleListViewItem_o *p_raidResult; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  int32_t v38; // w2
  int32_t v39; // w3

  v2 = this;
  if ( (byte_48E3E3B & 1) == 0 )
  {
    sub_1B00CCC(&string___TypeInfo, method);
    sub_1B00CCC(&StringLiteral_915/*",["*/, v3);
    sub_1B00CCC(&StringLiteral_865/*","*/, v4);
    sub_1B00CCC(&StringLiteral_15581/*"["*/, v5);
    sub_1B00CCC(&StringLiteral_1/*""*/, v6);
    this = (BattleResultRequest_Argument_o *)sub_1B00CCC(&StringLiteral_15837/*"]"*/, v7);
    byte_48E3E3B = 1;
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
          this = (BattleResultRequest_Argument_o *)sub_1B00D74(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v16 = StringLiteral_15581/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15581/*"["*/;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.scores, v16, v13, v14);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v15->fields.action = (struct System_String_o *)this;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15->fields.action, (int32_t)this, v17, v18);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v21 = (int)StringLiteral_865/*","*/;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_865/*","*/;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15->fields.voicePlayedArray, v21, v19, v20);
          if ( v12->max_length <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL);
          if ( v15->fields.battleResult <= 3u )
            goto LABEL_33;
          v15->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15->fields.aliveUniqueIds, (int32_t)this, v22, v23);
          if ( v15->fields.battleResult <= 4u )
            goto LABEL_33;
          v26 = StringLiteral_15837/*"]"*/;
          v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_15837/*"]"*/;
          p_raidResult = (ServantStatusBattleListViewItem_o *)&v15->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1B00D74(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v9;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.scores, (int32_t)v9, v28, v29);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v32 = StringLiteral_915/*",["*/;
          v15->fields.action = (struct System_String_o *)StringLiteral_915/*",["*/;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15->fields.action, v32, v30, v31);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15->fields.voicePlayedArray, (int32_t)this, v33, v34);
          if ( v15->fields.battleResult <= 3u
            || (v37 = (int)StringLiteral_865/*","*/,
                v15->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_865/*","*/,
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15->fields.aliveUniqueIds, v37, v35, v36),
                v12->max_length <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL),
                v15->fields.battleResult <= 4u)
            || (v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1B00C70((ServantStatusBattleListViewItem_o *)&v15->fields.raidResult, (int32_t)this, v38, v39),
                v15->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1B00F30(this, method);
          }
          v26 = StringLiteral_15837/*"]"*/;
          v15->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_15837/*"]"*/;
          p_raidResult = (ServantStatusBattleListViewItem_o *)&v15->fields.superBossResult;
        }
        sub_1B00C70(p_raidResult, v26, v24, v25);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_60339276((System_String_array *)v15, 0LL);
        v9 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v10;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1B00F28(this, method);
    }
  }
  return System_String__Concat_60337008(
           (System_String_o *)StringLiteral_15581/*"["*/,
           (System_String_o *)v9,
           (System_String_o *)StringLiteral_15837/*"]"*/,
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