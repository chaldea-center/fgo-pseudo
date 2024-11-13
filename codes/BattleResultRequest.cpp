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
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x1
  __int64 v72; // x2
  __int64 v73; // x1
  __int64 v74; // x2
  __int64 v75; // x1
  __int64 v76; // x2
  __int64 v77; // x1
  __int64 v78; // x2
  __int64 v79; // x1
  __int64 v80; // x2
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x1
  __int64 v84; // x2
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x1
  __int64 v92; // x2
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x1
  __int64 v96; // x2
  __int64 v97; // x1
  __int64 v98; // x2
  __int64 v99; // x1
  __int64 v100; // x2
  __int64 v101; // x1
  __int64 v102; // x2
  __int64 v103; // x1
  __int64 v104; // x2
  __int64 v105; // x1
  __int64 v106; // x2
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x1
  __int64 v110; // x2
  __int64 v111; // x1
  __int64 v112; // x2
  __int64 v113; // x1
  __int64 v114; // x2
  __int64 v115; // x1
  __int64 v116; // x2
  System_Collections_Generic_Dictionary_object__object__o *v117; // x21
  System_String_o *v118; // x0
  __int64 v119; // x1
  Il2CppObject *v120; // x0
  Il2CppObject *v121; // x0
  __int64 v122; // x1
  Il2CppObject *v123; // x0
  Il2CppObject *v124; // x0
  Il2CppObject *v125; // x0
  Il2CppObject *v126; // x0
  System_Object_array *v127; // x0
  Il2CppObject *v128; // x0
  Il2CppObject *v129; // x0
  signed int max_length; // w8
  int v131; // w9
  __int64 v132; // x22
  BattleResultRequest_RaidResult_o *v133; // x10
  signed int v134; // w8
  int v135; // w9
  __int64 v136; // x20
  BattleResultRequest_SuperBossResult_o *v137; // x10
  __int64 v138; // x8
  __int64 v139; // x27
  __int64 v140; // x9
  int32_t *v141; // x10
  __int64 v142; // t1
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_63017940; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v145; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v146; // x0
  __int64 v147; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v148; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v149; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v150; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v151; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v152; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v153; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v154; // x0
  __int64 v155; // x1
  System_Byte_array *v156; // x19
  Il2CppObject *v157; // x0
  System_Int32_array_array *v158; // x10
  __int64 v159; // x8
  System_String_o *v160; // x22
  unsigned __int64 v161; // x25
  System_Int32_array *v162; // x29
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  System_String_o *v169; // x19
  int64_t v170; // x1
  int64_t v171; // x2
  int32_t v172; // w3
  System_String_o *v173; // x4
  BattleSetupInfo_o *v174; // x5
  FollowerInfo_o *v175; // x6
  PartyListViewItem_o *v176; // x7
  int64_t v177; // x2
  int32_t v178; // w3
  System_String_o *v179; // x4
  BattleSetupInfo_o *v180; // x5
  FollowerInfo_o *v181; // x6
  PartyListViewItem_o *v182; // x7
  void *v183; // x1
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  int64_t v190; // x2
  int32_t v191; // w3
  System_String_o *v192; // x4
  BattleSetupInfo_o *v193; // x5
  FollowerInfo_o *v194; // x6
  PartyListViewItem_o *v195; // x7
  int64_t v196; // x1
  PartyOrganizationUtility_o *p_fields; // x0
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  int64_t v210; // x1
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  void *v223; // x1
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  Il2CppObject *v230; // x0
  __int64 v231; // x1
  Il2CppObject *v232; // x0
  __int64 v233; // x1
  __int64 v234; // x2
  __int64 v235; // x3
  MiniMessagePack_MiniMessagePacker_o *v236; // x19
  __int64 v237; // x1
  System_Byte_array *v238; // x19
  __int64 v239; // x1
  System_Byte_array *v240; // x19
  System_String_o *v241; // x0
  const MethodInfo *v242; // x3
  const MethodInfo *v243; // x1
  int32_t v250; // [xsp+58h] [xbp-78h] BYREF
  int32_t v251; // [xsp+5Ch] [xbp-74h] BYREF
  int32_t v252; // [xsp+60h] [xbp-70h] BYREF
  int32_t v253; // [xsp+64h] [xbp-6Ch] BYREF
  int64_t v254; // [xsp+68h] [xbp-68h] BYREF

  if ( (byte_4B179EB & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, battleId, *(_QWORD *)&battleResult);
    sub_1BCA7E0(&System_Convert_TypeInfo, v27, v28);
    sub_1BCA7E0(&Crc32_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v31, v32);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v33, v34);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Concat_byte___, v37, v38);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_byte___, v39, v40);
    sub_1BCA7E0(&int_TypeInfo, v41, v42);
    sub_1BCA7E0(&long_TypeInfo, v43, v44);
    sub_1BCA7E0(&JsonManager_TypeInfo, v45, v46);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v47, v48);
    sub_1BCA7E0(&MiniMessagePack_MiniMessagePacker_TypeInfo, v49, v50);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v51, v52);
    sub_1BCA7E0(&string___TypeInfo, v53, v54);
    sub_1BCA7E0(&uint_TypeInfo, v55, v56);
    sub_1BCA7E0(&StringLiteral_23216/*"routeSelect"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_23150/*"result"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_23056/*"recordValueJson"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_17885/*"calledEnemyUniqueIds"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_23594/*"skillShiftNpcSvtIds"*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_23002/*"raidResult"*/, v67, v68);
    sub_1BCA7E0(&StringLiteral_24617/*"useTreasureDevices"*/, v69, v70);
    sub_1BCA7E0(&StringLiteral_23055/*"recordType"*/, v71, v72);
    sub_1BCA7E0(&StringLiteral_914/*",["*/, v73, v74);
    sub_1BCA7E0(&StringLiteral_23595/*"skillShiftUniqueIds"*/, v75, v76);
    sub_1BCA7E0(&StringLiteral_18653/*"dataLostUniqueIds"*/, v77, v78);
    sub_1BCA7E0(&StringLiteral_24620/*"usedEquipSkillList"*/, v79, v80);
    sub_1BCA7E0(&StringLiteral_19130/*"elapsedTurn"*/, v81, v82);
    sub_1BCA7E0(&StringLiteral_24621/*"usedTurnList"*/, v83, v84);
    sub_1BCA7E0(&StringLiteral_23951/*"svtCommonFlagList"*/, v85, v86);
    sub_1BCA7E0(&StringLiteral_23287/*"scores"*/, v87, v88);
    sub_1BCA7E0(&StringLiteral_24920/*"waveInfo"*/, v89, v90);
    sub_1BCA7E0(&StringLiteral_17294/*"battleStatus"*/, v91, v92);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v93, v94);
    sub_1BCA7E0(&StringLiteral_24117/*"tdPlayed"*/, v95, v96);
    sub_1BCA7E0(&StringLiteral_24845/*"voicePlayedList"*/, v97, v98);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v99, v100);
    sub_1BCA7E0(&StringLiteral_24955/*"winResult"*/, v101, v102);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v103, v104);
    sub_1BCA7E0(&StringLiteral_23934/*"superBossResult"*/, v105, v106);
    sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v107, v108);
    sub_1BCA7E0(&StringLiteral_17285/*"battleId"*/, v109, v110);
    sub_1BCA7E0(&StringLiteral_17288/*"battleResult"*/, v111, v112);
    sub_1BCA7E0(&StringLiteral_16814/*"action"*/, v113, v114);
    sub_1BCA7E0(&StringLiteral_16901/*"aliveUniqueIds"*/, v115, v116);
    byte_4B179EB = 1;
  }
  v117 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                      System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                      battleId,
                                                                      *(_QWORD *)&battleResult,
                                                                      *(_QWORD *)&winResult);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v117,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v254 = battleId;
  v118 = (System_String_o *)j_il2cpp_value_box_0(long_TypeInfo, &v254);
  if ( !v117 )
    goto LABEL_76;
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_17285/*"battleId"*/,
    (Il2CppObject *)v118,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v253 = battleResult;
  v120 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v253);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_17288/*"battleResult"*/,
    v120,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v252 = winResult;
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v252);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_24955/*"winResult"*/,
    v121,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_23287/*"scores"*/,
    (Il2CppObject *)scores,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_16814/*"action"*/,
    (Il2CppObject *)action,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v122);
  v123 = (Il2CppObject *)JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_23002/*"raidResult"*/,
    v123,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v124 = (Il2CppObject *)JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_23934/*"superBossResult"*/,
    v124,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v251 = elapsedTurn;
  v125 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v251);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_19130/*"elapsedTurn"*/,
    v125,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v250 = recordType;
  v126 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v250);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_23055/*"recordType"*/,
    v126,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_23056/*"recordValueJson"*/,
    (Il2CppObject *)recordJson,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_76;
  v127 = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)firstNpPlayList,
           (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v128 = (Il2CppObject *)JsonManager__toJson(&v127->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_24117/*"tdPlayed"*/,
    v128,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_76;
  v129 = (Il2CppObject *)PlayerServantNoblePhantasmUsageData__ConvertToJsonString(
                           playerServantNoblePhantasmUsageData,
                           0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_24617/*"useTreasureDevices"*/,
    v129,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_24620/*"usedEquipSkillList"*/,
    (Il2CppObject *)usedEquipSkillDict,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_23951/*"svtCommonFlagList"*/,
    (Il2CppObject *)svtCommonFlagDict,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_23595/*"skillShiftUniqueIds"*/,
    &skillShiftUniqueIdArray->obj,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_23594/*"skillShiftNpcSvtIds"*/,
    &skillShiftNpcSvtIdArray->obj,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_17885/*"calledEnemyUniqueIds"*/,
    &calledEnemyUniqueIdArray->obj,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_23216/*"routeSelect"*/,
    &routeSelectIdArray->obj,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_18653/*"dataLostUniqueIds"*/,
    &dataLostUniqueIdArray->obj,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_76;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v132 = 0LL;
    if ( !superBossResult )
      goto LABEL_76;
  }
  else
  {
    v131 = 0;
    v132 = 0LL;
    do
    {
      if ( max_length == v131 )
        goto LABEL_75;
      v133 = raidResult->m_Items[v131];
      if ( !v133 )
        goto LABEL_76;
      ++v131;
      v132 += v133->fields.addDamage + (__int64)v133->fields.day + v133->fields.uniqueId;
    }
    while ( max_length != v131 );
    if ( !superBossResult )
LABEL_76:
      sub_1BCAA3C(v118, v119);
  }
  v134 = superBossResult->max_length;
  if ( v134 >= 1 )
  {
    v135 = 0;
    v136 = 0LL;
    while ( v134 != v135 )
    {
      v137 = superBossResult->m_Items[v135];
      if ( !v137 )
        goto LABEL_76;
      ++v135;
      v136 += v137->fields.addDamage + (__int64)v137->fields.superBossId + v137->fields.uniqueId;
      if ( v134 == v135 )
        goto LABEL_24;
    }
LABEL_75:
    sub_1BCAA44(v118, v119);
  }
  v136 = 0LL;
LABEL_24:
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_16901/*"aliveUniqueIds"*/,
    &aliveUniqueIds->obj,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_76;
  v138 = aliveUniqueIds->max_length;
  if ( v138 << 32 >= 1 )
  {
    v139 = 0LL;
    v140 = (int)v138;
    v141 = &aliveUniqueIds->m_Items[1];
    while ( v138 )
    {
      v142 = *v141++;
      --v140;
      --v138;
      v139 += v142;
      if ( !v140 )
        goto LABEL_31;
    }
    goto LABEL_75;
  }
  v139 = 0LL;
LABEL_31:
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v119);
  UserId = NetworkManager__get_UserId(0LL);
  Bytes_63017940 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(
                                                                          UserId + battleResult,
                                                                          0LL);
  v145 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(
                                                                v132 - 4231125,
                                                                0LL);
  v146 = System_Linq_Enumerable__Concat_byte_(
           Bytes_63017940,
           v145,
           (const MethodInfo_2F2A97C *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v139 >= 0 )
    v147 = v139;
  else
    v147 = v139 + 1;
  v148 = v146;
  v149 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(v147 >> 1, 0LL);
  v150 = System_Linq_Enumerable__Concat_byte_(
           v148,
           v149,
           (const MethodInfo_2F2A97C *)Method_System_Linq_Enumerable_Concat_byte___);
  v151 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(
                                                                battleId - 0x7FFFFFFF,
                                                                0LL);
  v152 = System_Linq_Enumerable__Concat_byte_(
           v150,
           v151,
           (const MethodInfo_2F2A97C *)Method_System_Linq_Enumerable_Concat_byte___);
  v153 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(
                                                                v136 - 2469110,
                                                                0LL);
  v154 = System_Linq_Enumerable__Concat_byte_(
           v152,
           v153,
           (const MethodInfo_2F2A97C *)Method_System_Linq_Enumerable_Concat_byte___);
  v156 = System_Linq_Enumerable__ToArray_byte_(
           v154,
           (const MethodInfo_2F4B760 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v155);
  LODWORD(v254) = Crc32__Compute(v156, 0LL);
  v157 = (Il2CppObject *)j_il2cpp_value_box_0(uint_TypeInfo, &v254);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_17294/*"battleStatus"*/,
    v157,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v158 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v159 = *(_QWORD *)&voicePlayedArray->max_length;
    v160 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v159 >= 1 )
    {
      v161 = 0LL;
      while ( v161 < (unsigned int)v159 )
      {
        v162 = voicePlayedArray->m_Items[v161];
        if ( v162 && v162->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty(v160, 0LL) )
          {
            v118 = (System_String_o *)sub_1BCA888(string___TypeInfo, 5LL);
            if ( !v118 )
              goto LABEL_76;
            v169 = v118;
            if ( !LODWORD(v118[1].klass) )
              goto LABEL_75;
            v170 = StringLiteral_15978/*"["*/;
            v118[1].monitor = (void *)StringLiteral_15978/*"["*/;
            sub_1BCA784((PartyOrganizationUtility_o *)&v118[1].monitor, v170, v163, v164, v165, v166, v167, v168);
            if ( !v162->max_length )
              goto LABEL_75;
            v118 = System_Int32__ToString((int)v162 + 32, 0LL);
            if ( LODWORD(v169[1].klass) <= 1 )
              goto LABEL_75;
            v169[1].fields = (System_String_Fields)v118;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v169[1].fields,
              (int64_t)v118,
              v171,
              v172,
              v173,
              v174,
              v175,
              v176);
            if ( LODWORD(v169[1].klass) <= 2 )
              goto LABEL_75;
            v183 = StringLiteral_863/*","*/;
            v169[2].klass = (System_String_c *)StringLiteral_863/*","*/;
            sub_1BCA784((PartyOrganizationUtility_o *)&v169[2], (int64_t)v183, v177, v178, v179, v180, v181, v182);
            if ( v162->max_length <= 1 )
              goto LABEL_75;
            v118 = System_Int32__ToString((int)v162 + 36, 0LL);
            if ( LODWORD(v169[1].klass) <= 3 )
              goto LABEL_75;
            v169[2].monitor = v118;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v169[2].monitor,
              (int64_t)v118,
              v184,
              v185,
              v186,
              v187,
              v188,
              v189);
            if ( LODWORD(v169[1].klass) <= 4 )
              goto LABEL_75;
            v196 = StringLiteral_16236/*"]"*/;
            v169[2].fields = (System_String_Fields)StringLiteral_16236/*"]"*/;
            p_fields = (PartyOrganizationUtility_o *)&v169[2].fields;
          }
          else
          {
            v118 = (System_String_o *)sub_1BCA888(string___TypeInfo, 6LL);
            if ( !v118 )
              goto LABEL_76;
            v169 = v118;
            if ( !LODWORD(v118[1].klass) )
              goto LABEL_75;
            v118[1].monitor = v160;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v118[1].monitor,
              (int64_t)v160,
              v198,
              v199,
              v200,
              v201,
              v202,
              v203);
            if ( LODWORD(v169[1].klass) <= 1 )
              goto LABEL_75;
            v210 = StringLiteral_914/*",["*/;
            v169[1].fields = (System_String_Fields)StringLiteral_914/*",["*/;
            sub_1BCA784((PartyOrganizationUtility_o *)&v169[1].fields, v210, v204, v205, v206, v207, v208, v209);
            if ( !v162->max_length )
              goto LABEL_75;
            v118 = System_Int32__ToString((int)v162 + 32, 0LL);
            if ( LODWORD(v169[1].klass) <= 2 )
              goto LABEL_75;
            v169[2].klass = (System_String_c *)v118;
            sub_1BCA784((PartyOrganizationUtility_o *)&v169[2], (int64_t)v118, v211, v212, v213, v214, v215, v216);
            if ( LODWORD(v169[1].klass) <= 3 )
              goto LABEL_75;
            v223 = StringLiteral_863/*","*/;
            v169[2].monitor = StringLiteral_863/*","*/;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v169[2].monitor,
              (int64_t)v223,
              v217,
              v218,
              v219,
              v220,
              v221,
              v222);
            if ( v162->max_length <= 1 )
              goto LABEL_75;
            v118 = System_Int32__ToString((int)v162 + 36, 0LL);
            if ( LODWORD(v169[1].klass) <= 4 )
              goto LABEL_75;
            v169[2].fields = (System_String_Fields)v118;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v169[2].fields,
              (int64_t)v118,
              v224,
              v225,
              v226,
              v227,
              v228,
              v229);
            if ( LODWORD(v169[1].klass) <= 5 )
              goto LABEL_75;
            v196 = StringLiteral_16236/*"]"*/;
            v169[3].klass = (System_String_c *)StringLiteral_16236/*"]"*/;
            p_fields = (PartyOrganizationUtility_o *)&v169[3];
          }
          sub_1BCA784(p_fields, v196, v190, v191, v192, v193, v194, v195);
          v118 = System_String__Concat_62414748((System_String_array *)v169, 0LL);
          v158 = voicePlayedArray;
          v160 = v118;
        }
        LODWORD(v159) = v158->max_length;
        if ( (__int64)++v161 >= (int)v159 )
          goto LABEL_66;
      }
      goto LABEL_75;
    }
LABEL_66:
    v230 = (Il2CppObject *)System_String__Concat_62412480(
                             (System_String_o *)StringLiteral_15978/*"["*/,
                             v160,
                             (System_String_o *)StringLiteral_16236/*"]"*/,
                             0LL);
    System_Collections_Generic_Dictionary_object__object___Add(
      v117,
      (Il2CppObject *)StringLiteral_24845/*"voicePlayedList"*/,
      v230,
      (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_24621/*"usedTurnList"*/,
    &usedTurnArray->obj,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v231);
  v232 = (Il2CppObject *)JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_object__object___Add(
    v117,
    (Il2CppObject *)StringLiteral_24920/*"waveInfo"*/,
    v232,
    (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v236 = (MiniMessagePack_MiniMessagePacker_o *)sub_1BCAA2C(
                                                  MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                  v233,
                                                  v234,
                                                  v235);
  MiniMessagePack_MiniMessagePacker___ctor(v236, 0LL);
  if ( !v236 )
    goto LABEL_76;
  v238 = MiniMessagePack_MiniMessagePacker__PackClass(v236, (Il2CppObject *)v117, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v237);
  v240 = CatAndMouseGame__CatGame5Bytes(v238, 0LL);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v239);
  v241 = System_Convert__ToBase64String(v240, 0LL);
  RequestBase__addField_41862348((RequestBase_o *)this, (System_String_o *)StringLiteral_23150/*"result"*/, v241, v242);
  RequestBase__beginRequest((RequestBase_o *)this, v243);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v11; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_4B179ED & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v8, v9);
    byte_4B179ED = 1;
  }
  memset(&v11, 0, sizeof(v11));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_1BCAA3C(0LL, method);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v11,
    (System_Collections_Generic_Dictionary_object__object__o *)paramString,
    (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v11,
            (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v11,
    (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B179EA & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9230/*"MockBattleResultRequest"*/, v3, v4);
    byte_4B179EA = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9230/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179E9 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17266/*"battle/result"*/, v3, v4);
    byte_4B179E9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17266/*"battle/result"*/, 0LL);
}


void __fastcall BattleResultRequest__requestCompleted(
        BattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  ResponseData_o *v12; // x0
  ResponseData_o *v13; // x20
  __int64 v14; // x1
  Il2CppObject *success; // x20
  __int64 v16; // x1
  System_String_o *v17; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v19; // x8

  if ( (byte_4B179EC & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantCommentManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v9, v10);
    byte_4B179EC = 1;
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, v11);
  v12 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v12
    && (v13 = v12, ResponseData__checkError_41952396(v12, 0LL))
    && (success = (Il2CppObject *)v13->fields.success) != 0LL )
  {
    if ( !ServantCommentManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo, v14);
    ServantCommentManager__UpdateChapter(0LL);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v16);
    v17 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v17,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v19 = this->fields.CallBack;
    if ( v19 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v19->fields.m_target)(
        v19->fields.original_method_info,
        StringLiteral_22292/*"ng"*/,
        *(_QWORD *)&v19->fields.extra_arg);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  void *v33; // x1
  void *v34; // x1
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_Int32_array_array *v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Int32_array *v48; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct BattleResultRequest_RaidResult_array *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct BattleResultRequest_SuperBossResult_array *v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  struct System_Int32_array *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  System_Collections_Generic_Dictionary_object__object__o *v79; // x20
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x3
  System_Collections_Generic_List_object__o *v89; // x20
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  System_Collections_Generic_Dictionary_int__int__o *v99; // x20
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  __int64 v106; // x1
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  struct System_Int32_array *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  struct System_Int64_array *v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  struct System_Int32_array *v128; // x0
  int64_t v129; // x2
  int32_t v130; // w3
  System_String_o *v131; // x4
  BattleSetupInfo_o *v132; // x5
  FollowerInfo_o *v133; // x6
  PartyListViewItem_o *v134; // x7

  if ( (byte_4B179F0 & 1) == 0 )
  {
    sub_1BCA7E0(&BattleData_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v13, v14);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v15, v16);
    sub_1BCA7E0(&int_____TypeInfo, v17, v18);
    sub_1BCA7E0(&int___TypeInfo, v19, v20);
    sub_1BCA7E0(&long___TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v25, v26);
    sub_1BCA7E0(&BattleResultRequest_RaidResult___TypeInfo, v27, v28);
    sub_1BCA7E0(&BattleResultRequest_SuperBossResult___TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v31, v32);
    byte_4B179F0 = 1;
  }
  v33 = StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.scores, (int64_t)v33, v2, v3, v4, v5, v6, v7);
  v34 = StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.action, (int64_t)v34, v35, v36, v37, v38, v39, v40);
  v41 = (struct System_Int32_array_array *)sub_1BCA888(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v41;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.voicePlayedArray, (int64_t)v41, v42, v43, v44, v45, v46, v47);
  v48 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v48;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.aliveUniqueIds, (int64_t)v48, v49, v50, v51, v52, v53, v54);
  v55 = (struct BattleResultRequest_RaidResult_array *)sub_1BCA888(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v55;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.raidResult, (int64_t)v55, v56, v57, v58, v59, v60, v61);
  v62 = (struct BattleResultRequest_SuperBossResult_array *)sub_1BCA888(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v62;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.superBossResult, (int64_t)v62, v63, v64, v65, v66, v67, v68);
  v69 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v69;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.usedTurnArray, (int64_t)v69, v70, v71, v72, v73, v74, v75);
  this->fields.recordType = 1;
  v79 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                     v76,
                                                                     v77,
                                                                     v78);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v79,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v79;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.recordJson, (int64_t)v79, v80, v81, v82, v83, v84, v85);
  v89 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Dictionary_string__object___TypeInfo,
                                                       v86,
                                                       v87,
                                                       v88);
  System_Collections_Generic_List_object____ctor(
    v89,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v89;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.firstNpPlayList, (int64_t)v89, v90, v91, v92, v93, v94, v95);
  v99 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1BCAA2C(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v96,
                                                               v97,
                                                               v98);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v99,
    (const MethodInfo_31FC8B0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v99;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.usedEquipSkillDict,
    (int64_t)v99,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo, v106);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.svtCommonFlagDict,
    (int64_t)SavedServantCommonFlagDict,
    v108,
    v109,
    v110,
    v111,
    v112,
    v113);
  v114 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v114;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillShiftUniqueIds,
    (int64_t)v114,
    v115,
    v116,
    v117,
    v118,
    v119,
    v120);
  v121 = (struct System_Int64_array *)sub_1BCA888(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v121;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.skillShiftNpcSvtIds,
    (int64_t)v121,
    v122,
    v123,
    v124,
    v125,
    v126,
    v127);
  v128 = (struct System_Int32_array *)sub_1BCA888(int___TypeInfo, 0LL);
  this->fields.routeSelect = v128;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.routeSelect,
    (int64_t)v128,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


uint32_t __fastcall BattleResultRequest_Argument__ConvertBattleStatus(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultRequest_Argument_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleResultRequest_RaidResult_array *raidResult; // x8
  int max_length; // w9
  int64_t v12; // x20
  int v13; // w10
  __int64 v14; // x11
  int *v15; // x12
  struct BattleResultRequest_SuperBossResult_array *superBossResult; // x8
  int v17; // w9
  int64_t v18; // x21
  int v19; // w10
  __int64 v20; // x11
  int *v21; // x12
  struct System_Int32_array *aliveUniqueIds; // x11
  __int64 v23; // x8
  __int64 v24; // x9
  __int64 v25; // x10
  int32_t *v26; // x11
  __int64 v27; // t1
  __int64 v28; // x8
  __int64 v29; // x22
  int64_t UserId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_63017940; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  __int64 v40; // x1
  System_Byte_array *v41; // x19

  v3 = this;
  if ( (byte_4B179EE & 1) == 0 )
  {
    sub_1BCA7E0(&Crc32_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Concat_byte___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_byte___, v6, v7);
    this = (BattleResultRequest_Argument_o *)sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    byte_4B179EE = 1;
  }
  raidResult = v3->fields.raidResult;
  if ( !raidResult )
    goto LABEL_33;
  max_length = raidResult->max_length;
  v12 = -4231125LL;
  if ( max_length >= 1 )
  {
    v13 = 0;
    v14 = 0LL;
    do
    {
      if ( max_length == v13 )
LABEL_32:
        sub_1BCAA44(this, method);
      v15 = (int *)raidResult->m_Items[v13];
      if ( !v15 )
        goto LABEL_33;
      ++v13;
      v14 += v15[6] + (__int64)v15[5] + v15[4];
    }
    while ( max_length != v13 );
    v12 = v14 - 4231125;
  }
  superBossResult = v3->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_33;
  v17 = superBossResult->max_length;
  v18 = -2469110LL;
  if ( v17 >= 1 )
  {
    v19 = 0;
    v20 = 0LL;
    do
    {
      if ( v17 == v19 )
        goto LABEL_32;
      v21 = (int *)superBossResult->m_Items[v19];
      if ( !v21 )
        goto LABEL_33;
      ++v19;
      v20 += v21[6] + (__int64)v21[4] + v21[5];
    }
    while ( v17 != v19 );
    v18 = v20 - 2469110;
  }
  aliveUniqueIds = v3->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_33:
    sub_1BCAA3C(this, method);
  v23 = aliveUniqueIds->max_length;
  if ( v23 << 32 < 1 )
  {
    v29 = 0LL;
  }
  else
  {
    v24 = 0LL;
    v25 = (int)v23;
    v26 = &aliveUniqueIds->m_Items[1];
    do
    {
      if ( !v23 )
        goto LABEL_32;
      v27 = *v26++;
      --v25;
      --v23;
      v24 += v27;
    }
    while ( v25 );
    if ( v24 >= 0 )
      v28 = v24;
    else
      v28 = v24 + 1;
    v29 = v28 >> 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  UserId = NetworkManager__get_UserId(0LL);
  Bytes_63017940 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(
                                                                          UserId + v3->fields.battleResult,
                                                                          0LL);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(v12, 0LL);
  v33 = System_Linq_Enumerable__Concat_byte_(
          Bytes_63017940,
          v32,
          (const MethodInfo_2F2A97C *)Method_System_Linq_Enumerable_Concat_byte___);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(v29, 0LL);
  v35 = System_Linq_Enumerable__Concat_byte_(
          v33,
          v34,
          (const MethodInfo_2F2A97C *)Method_System_Linq_Enumerable_Concat_byte___);
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(
                                                               v3->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v37 = System_Linq_Enumerable__Concat_byte_(
          v35,
          v36,
          (const MethodInfo_2F2A97C *)Method_System_Linq_Enumerable_Concat_byte___);
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_63017940(v18, 0LL);
  v39 = System_Linq_Enumerable__Concat_byte_(
          v37,
          v38,
          (const MethodInfo_2F2A97C *)Method_System_Linq_Enumerable_Concat_byte___);
  v41 = System_Linq_Enumerable__ToArray_byte_(
          v39,
          (const MethodInfo_2F4B760 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo, v40);
  return Crc32__Compute(v41, 0LL);
}


System_String_o *__fastcall BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultRequest_Argument_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Int32_array_array *voicePlayedArray; // x8
  BattleResultRequest_Argument_o *v15; // x21
  unsigned __int64 v16; // x25
  unsigned __int64 max_length; // x9
  System_Int32_array *v18; // x29
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  BattleResultRequest_Argument_o *v25; // x20
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  void *v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  int64_t v52; // x1
  PartyOrganizationUtility_o *p_raidResult; // x0
  int64_t v54; // x2
  int32_t v55; // w3
  System_String_o *v56; // x4
  BattleSetupInfo_o *v57; // x5
  FollowerInfo_o *v58; // x6
  PartyListViewItem_o *v59; // x7
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  int64_t v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  void *v79; // x1
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7

  v3 = this;
  if ( (byte_4B179EF & 1) == 0 )
  {
    sub_1BCA7E0(&string___TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_914/*",["*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_863/*","*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_15978/*"["*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v10, v11);
    this = (BattleResultRequest_Argument_o *)sub_1BCA7E0(&StringLiteral_16236/*"]"*/, v12, v13);
    byte_4B179EF = 1;
  }
  voicePlayedArray = v3->fields.voicePlayedArray;
  v15 = (BattleResultRequest_Argument_o *)StringLiteral_1/*""*/;
  if ( voicePlayedArray )
  {
    v16 = 0LL;
    while ( 1 )
    {
      max_length = voicePlayedArray->max_length;
      if ( (__int64)v16 >= (int)max_length )
        break;
      if ( v16 >= max_length )
        goto LABEL_33;
      v18 = voicePlayedArray->m_Items[v16];
      if ( v18 && v18->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty((System_String_o *)v15, 0LL) )
        {
          this = (BattleResultRequest_Argument_o *)sub_1BCA888(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_31;
          v25 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          v26 = StringLiteral_15978/*"["*/;
          this->fields.scores = (struct System_String_o *)StringLiteral_15978/*"["*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.scores, v26, v19, v20, v21, v22, v23, v24);
          if ( !v18->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v18 + 32, 0LL);
          if ( v25->fields.battleResult <= 1u )
            goto LABEL_33;
          v25->fields.action = (struct System_String_o *)this;
          sub_1BCA784((PartyOrganizationUtility_o *)&v25->fields.action, (int64_t)this, v27, v28, v29, v30, v31, v32);
          if ( v25->fields.battleResult <= 2u )
            goto LABEL_33;
          v39 = StringLiteral_863/*","*/;
          v25->fields.voicePlayedArray = (struct System_Int32_array_array *)StringLiteral_863/*","*/;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v25->fields.voicePlayedArray,
            (int64_t)v39,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38);
          if ( v18->max_length <= 1 )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v18 + 36, 0LL);
          if ( v25->fields.battleResult <= 3u )
            goto LABEL_33;
          v25->fields.aliveUniqueIds = (struct System_Int32_array *)this;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v25->fields.aliveUniqueIds,
            (int64_t)this,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
          if ( v25->fields.battleResult <= 4u )
            goto LABEL_33;
          v52 = StringLiteral_16236/*"]"*/;
          v25->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)StringLiteral_16236/*"]"*/;
          p_raidResult = (PartyOrganizationUtility_o *)&v25->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_1BCA888(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_31;
          v25 = this;
          if ( !this->fields.battleResult )
            goto LABEL_33;
          this->fields.scores = (struct System_String_o *)v15;
          sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.scores, (int64_t)v15, v54, v55, v56, v57, v58, v59);
          if ( v25->fields.battleResult <= 1u )
            goto LABEL_33;
          v66 = StringLiteral_914/*",["*/;
          v25->fields.action = (struct System_String_o *)StringLiteral_914/*",["*/;
          sub_1BCA784((PartyOrganizationUtility_o *)&v25->fields.action, v66, v60, v61, v62, v63, v64, v65);
          if ( !v18->max_length )
            goto LABEL_33;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v18 + 32, 0LL);
          if ( v25->fields.battleResult <= 2u )
            goto LABEL_33;
          v25->fields.voicePlayedArray = (struct System_Int32_array_array *)this;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&v25->fields.voicePlayedArray,
            (int64_t)this,
            v67,
            v68,
            v69,
            v70,
            v71,
            v72);
          if ( v25->fields.battleResult <= 3u
            || (v79 = StringLiteral_863/*","*/,
                v25->fields.aliveUniqueIds = (struct System_Int32_array *)StringLiteral_863/*","*/,
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v25->fields.aliveUniqueIds,
                  (int64_t)v79,
                  v73,
                  v74,
                  v75,
                  v76,
                  v77,
                  v78),
                v18->max_length <= 1)
            || (this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v18 + 36, 0LL),
                v25->fields.battleResult <= 4u)
            || (v25->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)this,
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)&v25->fields.raidResult,
                  (int64_t)this,
                  v80,
                  v81,
                  v82,
                  v83,
                  v84,
                  v85),
                v25->fields.battleResult <= 5u) )
          {
LABEL_33:
            sub_1BCAA44(this, method);
          }
          v52 = StringLiteral_16236/*"]"*/;
          v25->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)StringLiteral_16236/*"]"*/;
          p_raidResult = (PartyOrganizationUtility_o *)&v25->fields.superBossResult;
        }
        sub_1BCA784(p_raidResult, v52, v46, v47, v48, v49, v50, v51);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_62414748((System_String_array *)v25, 0LL);
        v15 = this;
      }
      voicePlayedArray = v3->fields.voicePlayedArray;
      ++v16;
      if ( !voicePlayedArray )
LABEL_31:
        sub_1BCAA3C(this, method);
    }
  }
  return System_String__Concat_62412480(
           (System_String_o *)StringLiteral_15978/*"["*/,
           (System_String_o *)v15,
           (System_String_o *)StringLiteral_16236/*"]"*/,
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