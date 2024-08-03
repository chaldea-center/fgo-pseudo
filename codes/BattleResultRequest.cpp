void __fastcall BattleResultRequest___ctor(BattleResultRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
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
  System_String_o *v73; // x0
  Il2CppObject *v74; // x0
  Il2CppObject *v75; // x0
  Il2CppObject *v76; // x0
  Il2CppObject *v77; // x0
  Il2CppObject *v78; // x0
  Il2CppObject *v79; // x0
  System_Object_array *v80; // x0
  Il2CppObject *v81; // x0
  Il2CppObject *v82; // x0
  __int64 v83; // x1
  signed int max_length; // w8
  int v85; // w9
  __int64 v86; // x22
  BattleResultRequest_RaidResult_o *v87; // x10
  signed int v88; // w8
  int v89; // w9
  __int64 v90; // x20
  BattleResultRequest_SuperBossResult_o *v91; // x10
  __int64 v92; // x8
  __int64 v93; // x27
  __int64 v94; // x9
  int32_t *v95; // x10
  __int64 v96; // t1
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_61991780; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  __int64 v101; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v105; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v107; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v108; // x0
  System_Byte_array *v109; // x19
  Il2CppObject *v110; // x0
  System_Int32_array_array *v111; // x10
  __int64 v112; // x8
  System_String_o *v113; // x22
  unsigned __int64 v114; // x25
  System_Int32_array *v115; // x29
  int32_t v116; // w2
  int32_t v117; // w3
  System_String_o *v118; // x19
  int32_t v119; // w1
  int32_t v120; // w2
  int32_t v121; // w3
  int32_t v122; // w2
  int32_t v123; // w3
  int32_t v124; // w1
  int32_t v125; // w2
  int32_t v126; // w3
  int32_t v127; // w2
  int32_t v128; // w3
  int32_t v129; // w1
  ServantStatusBattleListViewItem_o *p_fields; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  int32_t v133; // w2
  int32_t v134; // w3
  int32_t v135; // w1
  int32_t v136; // w2
  int32_t v137; // w3
  int32_t v138; // w2
  int32_t v139; // w3
  int32_t v140; // w1
  int32_t v141; // w2
  int32_t v142; // w3
  Il2CppObject *v143; // x0
  Il2CppObject *v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  MiniMessagePack_MiniMessagePacker_o *v147; // x19
  System_Byte_array *v148; // x19
  System_Byte_array *v149; // x19
  System_String_o *v150; // x0
  int32_t v157; // [xsp+58h] [xbp-78h] BYREF
  int32_t v158; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v159; // [xsp+60h] [xbp-70h] BYREF
  int32_t v160; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v161; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_49FDADD & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, battleId);
    sub_1B640C8(&System_Convert_TypeInfo, v27);
    sub_1B640C8(&Crc32_TypeInfo, v28);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v29);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v30);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v31);
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_byte___, v32);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_byte___, v33);
    sub_1B640C8(&int_TypeInfo, v34);
    sub_1B640C8(&long_TypeInfo, v35);
    sub_1B640C8(&JsonManager_TypeInfo, v36);
    sub_1B640C8(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v37);
    sub_1B640C8(&MiniMessagePack_MiniMessagePacker_TypeInfo, v38);
    sub_1B640C8(&NetworkManager_TypeInfo, v39);
    sub_1B640C8(&string___TypeInfo, v40);
    sub_1B640C8(&uint_TypeInfo, v41);
    sub_1B640C8(&StringLiteral_22874/*"routeSelect"*/, v42);
    sub_1B640C8(&StringLiteral_22809/*"result"*/, v43);
    sub_1B640C8(&StringLiteral_22718/*"recordValueJson"*/, v44);
    sub_1B640C8(&StringLiteral_17636/*"calledEnemyUniqueIds"*/, v45);
    sub_1B640C8(&StringLiteral_23248/*"skillShiftNpcSvtIds"*/, v46);
    sub_1B640C8(&StringLiteral_22665/*"raidResult"*/, v47);
    sub_1B640C8(&StringLiteral_24265/*"useTreasureDevices"*/, v48);
    sub_1B640C8(&StringLiteral_22717/*"recordType"*/, v49);
    sub_1B640C8(&StringLiteral_919/*",["*/, v50);
    sub_1B640C8(&StringLiteral_23249/*"skillShiftUniqueIds"*/, v51);
    sub_1B640C8(&StringLiteral_18396/*"dataLostUniqueIds"*/, v52);
    sub_1B640C8(&StringLiteral_24267/*"usedEquipSkillList"*/, v53);
    sub_1B640C8(&StringLiteral_18862/*"elapsedTurn"*/, v54);
    sub_1B640C8(&StringLiteral_24268/*"usedTurnList"*/, v55);
    sub_1B640C8(&StringLiteral_23606/*"svtCommonFlagList"*/, v56);
    sub_1B640C8(&StringLiteral_22947/*"scores"*/, v57);
    sub_1B640C8(&StringLiteral_24567/*"waveInfo"*/, v58);
    sub_1B640C8(&StringLiteral_17054/*"battleStatus"*/, v59);
    sub_1B640C8(&StringLiteral_869/*","*/, v60);
    sub_1B640C8(&StringLiteral_23771/*"tdPlayed"*/, v61);
    sub_1B640C8(&StringLiteral_24492/*"voicePlayedList"*/, v62);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v63);
    sub_1B640C8(&StringLiteral_24602/*"winResult"*/, v64);
    sub_1B640C8(&StringLiteral_1/*""*/, v65);
    sub_1B640C8(&StringLiteral_23589/*"superBossResult"*/, v66);
    sub_1B640C8(&StringLiteral_16000/*"]"*/, v67);
    sub_1B640C8(&StringLiteral_17045/*"battleId"*/, v68);
    sub_1B640C8(&StringLiteral_17048/*"battleResult"*/, v69);
    sub_1B640C8(&StringLiteral_16576/*"action"*/, v70);
    sub_1B640C8(&StringLiteral_16663/*"aliveUniqueIds"*/, v71);
    byte_49FDADD = 1;
  }
  v72 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     battleId,
                                                                     *(_QWORD *)&battleResult);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v72,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v161 = battleId;
  v73 = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &v161);
  if ( !v72 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_17045/*"battleId"*/,
    (Il2CppObject *)v73,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v160 = battleResult;
  v74 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v160);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_17048/*"battleResult"*/,
    v74,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v159 = winResult;
  v75 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v159);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24602/*"winResult"*/,
    v75,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22947/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_16576/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v76 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22665/*"raidResult"*/,
    v76,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v77 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23589/*"superBossResult"*/,
    v77,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v158 = elapsedTurn;
  v78 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v158);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_18862/*"elapsedTurn"*/,
    v78,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v157 = recordType;
  v79 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v157);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22717/*"recordType"*/,
    v79,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22718/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_76;
  v80 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)firstNpPlayList,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v81 = (Il2CppObject *)JsonManager__toJson(&v80->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23771/*"tdPlayed"*/,
    v81,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_76;
  v82 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
                          playerServantNoblePhantasmUsageData,
                          0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24265/*"useTreasureDevices"*/,
    v82,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24267/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23606/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23249/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_23248/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_17636/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_22874/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_18396/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_76;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v86 = 0LL;
    if ( !superBossResult )
      goto LABEL_76;
  }
  else
  {
    v85 = 0;
    v86 = 0LL;
    do
    {
      if ( max_length == v85 )
        goto LABEL_75;
      v87 = raidResult->m_Items[v85];
      if ( !v87 )
        goto LABEL_76;
      ++v85;
      v86 += v87->fields.addDamage + (__int64)v87->fields.day + v87->fields.uniqueId;
    }
    while ( max_length != v85 );
    if ( !superBossResult )
LABEL_76:
      sub_1B64324(v73);
  }
  v88 = superBossResult->max_length;
  if ( v88 >= 1 )
  {
    v89 = 0;
    v90 = 0LL;
    while ( v88 != v89 )
    {
      v91 = superBossResult->m_Items[v89];
      if ( !v91 )
        goto LABEL_76;
      ++v89;
      v90 += v91->fields.addDamage + (__int64)v91->fields.superBossId + v91->fields.uniqueId;
      if ( v88 == v89 )
        goto LABEL_24;
    }
LABEL_75:
    sub_1B6432C(v73, v83);
  }
  v90 = 0LL;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_16663/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_76;
  v92 = aliveUniqueIds->max_length;
  if ( v92 << 32 >= 1 )
  {
    v93 = 0LL;
    v94 = (int)v92;
    v95 = &aliveUniqueIds->m_Items[1];
    while ( v92 )
    {
      v96 = *v95++;
      --v94;
      --v92;
      v93 += v96;
      if ( !v94 )
        goto LABEL_31;
    }
    goto LABEL_75;
  }
  v93 = 0LL;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  Bytes_61991780 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(
                                                                          UserId + battleResult,
                                                                          0LL);
  v99 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(v86 - 4231125, 0LL);
  v100 = System_Linq_Enumerable__Concat_byte_(
           Bytes_61991780,
           v99,
           (const MethodInfo_2E526A8 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v93 >= 0 )
    v101 = v93;
  else
    v101 = v93 + 1;
  v102 = v100;
  v103 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(v101 >> 1, 0LL);
  v104 = System_Linq_Enumerable__Concat_byte_(
           v102,
           v103,
           (const MethodInfo_2E526A8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v105 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(
                                                                battleId - 0x7FFFFFFF,
                                                                0LL);
  v106 = System_Linq_Enumerable__Concat_byte_(
           v104,
           v105,
           (const MethodInfo_2E526A8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v107 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(v90 - 2469110, 0LL);
  v108 = System_Linq_Enumerable__Concat_byte_(
           v106,
           v107,
           (const MethodInfo_2E526A8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v109 = System_Linq_Enumerable__ToArray_byte_(
           v108,
           (const MethodInfo_2E7111C *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v161) = Crc32__Compute(v109, 0LL);
  v110 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v161);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_17054/*"battleStatus"*/,
    v110,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v111 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v112 = *(_QWORD *)&voicePlayedArray->max_length;
    v113 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v112 >= 1 )
    {
      v114 = 0LL;
      while ( v114 < (unsigned int)v112 )
      {
        v115 = voicePlayedArray->m_Items[v114];
        if ( v115 && v115->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty(v113, 0LL) )
          {
            v73 = (System_String_o *)sub_1B64170(string___TypeInfo, 5LL);
            if ( !v73 )
              goto LABEL_76;
            v118 = v73;
            if ( !LODWORD(v73[1].klass) )
              goto LABEL_75;
            v119 = StringLiteral_15744/*"["*/;
            v73[1].monitor = (void *)StringLiteral_15744/*"["*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v73[1].monitor, v119, v116, v117);
            if ( !v115->max_length )
              goto LABEL_75;
            v73 = System_Int32__ToString((int)v115 + 32, 0LL);
            if ( LODWORD(v118[1].klass) <= 1 )
              goto LABEL_75;
            v118[1].fields = (System_String_Fields)v73;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v118[1].fields, (int32_t)v73, v120, v121);
            if ( LODWORD(v118[1].klass) <= 2 )
              goto LABEL_75;
            v124 = (int)StringLiteral_869/*","*/;
            v118[2].klass = (System_String_c *)StringLiteral_869/*","*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v118[2], v124, v122, v123);
            if ( v115->max_length <= 1 )
              goto LABEL_75;
            v73 = System_Int32__ToString((int)v115 + 36, 0LL);
            if ( LODWORD(v118[1].klass) <= 3 )
              goto LABEL_75;
            v118[2].monitor = v73;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v118[2].monitor, (int32_t)v73, v125, v126);
            if ( LODWORD(v118[1].klass) <= 4 )
              goto LABEL_75;
            v129 = StringLiteral_16000/*"]"*/;
            v118[2].fields = (System_String_Fields)StringLiteral_16000/*"]"*/;
            p_fields = (ServantStatusBattleListViewItem_o *)&v118[2].fields;
          }
          else
          {
            v73 = (System_String_o *)sub_1B64170(string___TypeInfo, 6LL);
            if ( !v73 )
              goto LABEL_76;
            v118 = v73;
            if ( !LODWORD(v73[1].klass) )
              goto LABEL_75;
            v73[1].monitor = v113;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v73[1].monitor, (int32_t)v113, v131, v132);
            if ( LODWORD(v118[1].klass) <= 1 )
              goto LABEL_75;
            v135 = StringLiteral_919/*",["*/;
            v118[1].fields = (System_String_Fields)StringLiteral_919/*",["*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v118[1].fields, v135, v133, v134);
            if ( !v115->max_length )
              goto LABEL_75;
            v73 = System_Int32__ToString((int)v115 + 32, 0LL);
            if ( LODWORD(v118[1].klass) <= 2 )
              goto LABEL_75;
            v118[2].klass = (System_String_c *)v73;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v118[2], (int32_t)v73, v136, v137);
            if ( LODWORD(v118[1].klass) <= 3 )
              goto LABEL_75;
            v140 = (int)StringLiteral_869/*","*/;
            v118[2].monitor = StringLiteral_869/*","*/;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v118[2].monitor, v140, v138, v139);
            if ( v115->max_length <= 1 )
              goto LABEL_75;
            v73 = System_Int32__ToString((int)v115 + 36, 0LL);
            if ( LODWORD(v118[1].klass) <= 4 )
              goto LABEL_75;
            v118[2].fields = (System_String_Fields)v73;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v118[2].fields, (int32_t)v73, v141, v142);
            if ( LODWORD(v118[1].klass) <= 5 )
              goto LABEL_75;
            v129 = StringLiteral_16000/*"]"*/;
            v118[3].klass = (System_String_c *)StringLiteral_16000/*"]"*/;
            p_fields = (ServantStatusBattleListViewItem_o *)&v118[3];
          }
          sub_1B6406C(p_fields, v129, v127, v128);
          v73 = System_String__Concat_61388924((System_String_array *)v118, 0LL);
          v111 = voicePlayedArray;
          v113 = v73;
        }
        LODWORD(v112) = v111->max_length;
        if ( (__int64)++v114 >= (int)v112 )
          goto LABEL_66;
      }
      goto LABEL_75;
    }
LABEL_66:
    v143 = (Il2CppObject *)System_String__Concat_61386656(
                             (System_String_o *)StringLiteral_15744/*"["*/,
                             v113,
                             (System_String_o *)StringLiteral_16000/*"]"*/,
                             0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v72,
      (Il2CppObject *)StringLiteral_24492/*"voicePlayedList"*/,
      v143,
      (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24268/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v144 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v72,
    (Il2CppObject *)StringLiteral_24567/*"waveInfo"*/,
    v144,
    (const MethodInfo_31793F8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v147 = (MiniMessagePack_MiniMessagePacker_o *)sub_1B64314(MiniMessagePack_MiniMessagePacker_TypeInfo, v145, v146);
  MiniMessagePack_MiniMessagePacker___ctor(v147, 0LL);
  if ( !v147 )
    goto LABEL_76;
  v148 = MiniMessagePack_MiniMessagePacker__PackClass(v147, (Il2CppObject *)v72, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  v149 = CatAndMouseGame__CatGame5Bytes(v148, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v150 = System_Convert__ToBase64String(v149, 0LL);
  RequestBase__addField_40850936((RequestBase_o *)this, (System_String_o *)StringLiteral_22809/*"result"*/, v150, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_49FDADF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v5);
    byte_49FDADF = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1B64324(0LL);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_3179828 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v7,
            (const MethodInfo_3275FB0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v7,
    (const MethodInfo_32760D0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_49FDADC & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_9058/*"MockBattleResultRequest"*/, v2);
    byte_49FDADC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9058/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FDADB & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_17026/*"battle/result"*/, v2);
    byte_49FDADB = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61375396(BaseUrl, (System_String_o *)StringLiteral_17026/*"battle/result"*/, 0LL);
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

  if ( (byte_49FDADE & 1) == 0 )
  {
    sub_1B640C8(&JsonManager_TypeInfo, responseList);
    sub_1B640C8(&ResponseCommandKind_TypeInfo, v5);
    sub_1B640C8(&ServantCommentManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_21968/*"ng"*/, v7);
    byte_49FDADE = 1;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v8 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v8
    && (v9 = v8, ResponseData__checkError_40846016(v8, 0LL))
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
    v11 = (System_String_o *)StringLiteral_21968/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v11, 0LL);
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
  __int64 v36; // x1
  __int64 v37; // x2
  System_Collections_Generic_Dictionary_object__object__o *v38; // x20
  int32_t v39; // w2
  int32_t v40; // w3
  __int64 v41; // x1
  __int64 v42; // x2
  System_Collections_Generic_List_object__o *v43; // x20
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x1
  __int64 v47; // x2
  System_Collections_Generic_Dictionary_int__int__o *v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  struct System_Int32_array *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  struct System_Int64_array *v57; // x0
  int32_t v58; // w2
  int32_t v59; // w3
  struct System_Int32_array *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3

  if ( (byte_49FDAE2 & 1) == 0 )
  {
    sub_1B640C8(&BattleData_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v6);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v7);
    sub_1B640C8(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v8);
    sub_1B640C8(&int_____TypeInfo, v9);
    sub_1B640C8(&int___TypeInfo, v10);
    sub_1B640C8(&long___TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v13);
    sub_1B640C8(&BattleResultRequest_RaidResult___TypeInfo, v14);
    sub_1B640C8(&BattleResultRequest_SuperBossResult___TypeInfo, v15);
    sub_1B640C8(&StringLiteral_1/*""*/, v16);
    byte_49FDAE2 = 1;
  }
  v17 = (int)StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.scores, v17, v2, v3);
  v18 = (int)StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.action, v18, v19, v20);
  v21 = (struct System_Int32_array_array *)sub_1B64170(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v21;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.voicePlayedArray, (int32_t)v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v24;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.aliveUniqueIds, (int32_t)v24, v25, v26);
  v27 = (struct BattleResultRequest_RaidResult_array *)sub_1B64170(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v27;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.raidResult, (int32_t)v27, v28, v29);
  v30 = (struct BattleResultRequest_SuperBossResult_array *)sub_1B64170(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v30;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.superBossResult, (int32_t)v30, v31, v32);
  v33 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v33;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.usedTurnArray, (int32_t)v33, v34, v35);
  this->fields.recordType = 1;
  v38 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B64314(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     v36,
                                                                     v37);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v38,
    (const MethodInfo_3178A48 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v38;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.recordJson, (int32_t)v38, v39, v40);
  v43 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_Dictionary_string__object___TypeInfo,
                                                       v41,
                                                       v42);
  System_Collections_Generic_List_object____ctor(
    v43,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v43;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.firstNpPlayList, (int32_t)v43, v44, v45);
  v48 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B64314(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v46,
                                                               v47);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v48,
    (const MethodInfo_311A4F0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v48;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.usedEquipSkillDict, (int32_t)v48, v49, v50);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.svtCommonFlagDict,
    (int32_t)SavedServantCommonFlagDict,
    v52,
    v53);
  v54 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v54;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillShiftUniqueIds, (int32_t)v54, v55, v56);
  v57 = (struct System_Int64_array *)sub_1B64170(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v57;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.skillShiftNpcSvtIds, (int32_t)v57, v58, v59);
  v60 = (struct System_Int32_array *)sub_1B64170(int___TypeInfo, 0LL);
  this->fields.routeSelect = v60;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.routeSelect, (int32_t)v60, v61, v62);
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
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_61991780; // x23
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
  if ( (byte_49FDAE0 & 1) == 0 )
  {
    sub_1B640C8(&Crc32_TypeInfo, method);
    sub_1B640C8(&Method_System_Linq_Enumerable_Concat_byte___, v3);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_byte___, v4);
    this = (BattleResultRequest_Argument_o *)sub_1B640C8(&NetworkManager_TypeInfo, v5);
    byte_49FDAE0 = 1;
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
        sub_1B6432C(this, method);
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
    sub_1B64324(this);
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
  Bytes_61991780 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(
                                                                          UserId + v2->fields.battleResult,
                                                                          0LL);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(v8, 0LL);
  v29 = System_Linq_Enumerable__Concat_byte_(
          Bytes_61991780,
          v28,
          (const MethodInfo_2E526A8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(v25, 0LL);
  v31 = System_Linq_Enumerable__Concat_byte_(
          v29,
          v30,
          (const MethodInfo_2E526A8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v33 = System_Linq_Enumerable__Concat_byte_(
          v31,
          v32,
          (const MethodInfo_2E526A8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_61991780(v14, 0LL);
  v35 = System_Linq_Enumerable__Concat_byte_(
          v33,
          v34,
          (const MethodInfo_2E526A8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v36 = System_Linq_Enumerable__ToArray_byte_(
          v35,
          (const MethodInfo_2E7111C *)Method_System_Linq_Enumerable_ToArray_byte___);
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
  if ( (byte_49FDAE1 & 1) == 0 )
  {
    sub_1B640C8(&string___TypeInfo, method);
    sub_1B640C8(&StringLiteral_919/*",["*/, v3);
    sub_1B640C8(&StringLiteral_869/*","*/, v4);
    sub_1B640C8(&StringLiteral_15744/*"["*/, v5);
    sub_1B640C8(&StringLiteral_1/*""*/, v6);
    this = (BattleResultRequest_Argument_o *)sub_1B640C8(&StringLiteral_16000/*"]"*/, v7);
    byte_49FDAE1 = 1;
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
          this = (BattleResultRequest_Argument_o *)sub_1B64170(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v16 = StringLiteral_15744/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15744/*"["*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.scores, v16, v13, v14);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v15->fields.action = (struct System_String_o *)this;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.action, (int32_t)this, v17, v18);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v21 = (int)StringLiteral_869/*","*/;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_869/*","*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.voicePlayedArray, v21, v19, v20);
          if ( v12->max_length <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL);
          if ( v15->fields.battleResult <= 3u )
            goto LABEL_33;
          v15->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.aliveUniqueIds, (int32_t)this, v22, v23);
          if ( v15->fields.battleResult <= 4u )
            goto LABEL_33;
          v26 = StringLiteral_16000/*"]"*/;
          v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16000/*"]"*/;
          p_raidResult = (ServantStatusBattleListViewItem_o *)&v15->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1B64170(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_31;
          v15 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v9;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.scores, (int32_t)v9, v28, v29);
          if ( v15->fields.battleResult <= 1u )
            goto LABEL_33;
          v32 = StringLiteral_919/*",["*/;
          v15->fields.action = (struct System_String_o *)StringLiteral_919/*",["*/;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.action, v32, v30, v31);
          if ( !v12->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          if ( v15->fields.battleResult <= 2u )
            goto LABEL_33;
          v15->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.voicePlayedArray, (int32_t)this, v33, v34);
          if ( v15->fields.battleResult <= 3u
            || (v37 = (int)StringLiteral_869/*","*/,
                v15->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_869/*","*/,
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.aliveUniqueIds, v37, v35, v36),
                v12->max_length <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL),
                v15->fields.battleResult <= 4u)
            || (v15->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1B6406C((ServantStatusBattleListViewItem_o *)&v15->fields.raidResult, (int32_t)this, v38, v39),
                v15->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1B6432C(this, method);
          }
          v26 = StringLiteral_16000/*"]"*/;
          v15->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16000/*"]"*/;
          p_raidResult = (ServantStatusBattleListViewItem_o *)&v15->fields.superBossResult;
        }
        sub_1B6406C(p_raidResult, v26, v24, v25);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_61388924((System_String_array *)v15, 0LL);
        v9 = this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v10;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1B64324(this);
    }
  }
  return System_String__Concat_61386656(
           (System_String_o *)StringLiteral_15744/*"["*/,
           (System_String_o *)v9,
           (System_String_o *)StringLiteral_16000/*"]"*/,
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