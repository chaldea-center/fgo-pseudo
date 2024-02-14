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
        const MethodInfo *method)
{
  __int64 v26; // x1
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v71; // x21
  __int64 StatusLong; // x0
  System_Xml_Schema_XmlSchemaObject_o *v73; // x0
  System_Xml_Schema_XmlSchemaObject_o *v74; // x0
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  System_Xml_Schema_XmlSchemaObject_o *v77; // x0
  System_Xml_Schema_XmlSchemaObject_o *v78; // x0
  WarBoardUiData_SaveData_array *v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  signed int max_length; // w8
  signed int v83; // w19
  __int64 v84; // x20
  signed int v85; // w8
  signed int v86; // w19
  __int64 v87; // x22
  unsigned __int64 v88; // x8
  __int64 v89; // x23
  unsigned __int64 v90; // x9
  __int64 v91; // x12
  int64_t UserId; // x19
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_39043992; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v94; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  __int64 v96; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v97; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x0
  System_Byte_array *v104; // x19
  System_Xml_Schema_XmlSchemaObject_o *v105; // x0
  System_Int32_array_array *v106; // x10
  __int64 v107; // x8
  System_Int32_array **v108; // x22
  unsigned __int64 v109; // x20
  System_Int32_array *v110; // x25
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_String_array *v117; // x19
  System_Int32_array **v118; // x1
  System_String_array **v119; // x2
  System_String_array **v120; // x3
  System_Boolean_array **v121; // x4
  System_Int32_array **v122; // x5
  System_Int32_array *v123; // x6
  System_Int32_array *v124; // x7
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x1
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x22
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x1
  System_String_array **v146; // x2
  System_String_array **v147; // x3
  System_Boolean_array **v148; // x4
  System_Int32_array **v149; // x5
  System_Int32_array *v150; // x6
  System_Int32_array *v151; // x7
  System_Int32_array **v152; // x22
  System_String_array **v153; // x2
  System_String_array **v154; // x3
  System_Boolean_array **v155; // x4
  System_Int32_array **v156; // x5
  System_Int32_array *v157; // x6
  System_Int32_array *v158; // x7
  System_Int32_array **v159; // x1
  System_String_array **v160; // x2
  System_String_array **v161; // x3
  System_Boolean_array **v162; // x4
  System_Int32_array **v163; // x5
  System_Int32_array *v164; // x6
  System_Int32_array *v165; // x7
  System_Int32_array **v166; // x22
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  System_Int32_array **v173; // x1
  System_String_array **v174; // x2
  System_String_array **v175; // x3
  System_Boolean_array **v176; // x4
  System_Int32_array **v177; // x5
  System_Int32_array *v178; // x6
  System_Int32_array *v179; // x7
  System_Int32_array **v180; // x22
  BattleServantConfConponent_o *v181; // x0
  System_String_o *v182; // x0
  __int64 v183; // x1
  __int64 v184; // x2
  MiniMessagePack_MiniMessagePacker_o *v185; // x19
  System_Byte_array *v186; // x19
  System_Byte_array *v187; // x19
  System_String_o *v188; // x0
  __int64 v189; // x0
  __int64 v190; // x0
  int64_t v192; // [xsp+8h] [xbp-98h]
  int32_t v198; // [xsp+38h] [xbp-68h] BYREF
  int32_t v199; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t v200; // [xsp+40h] [xbp-60h] BYREF
  int32_t v201; // [xsp+44h] [xbp-5Ch] BYREF
  int64_t v202; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4214946 & 1) == 0 )
  {
    sub_B0D8A4(&System_BitConverter_TypeInfo, battleId);
    sub_B0D8A4(&CatAndMouseGame_TypeInfo, v26);
    sub_B0D8A4(&System_Convert_TypeInfo, v27);
    sub_B0D8A4(&Crc32_TypeInfo, v28);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v29);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v30);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v31);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_byte___, v32);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_byte___, v33);
    sub_B0D8A4(&int_TypeInfo, v34);
    sub_B0D8A4(&long_TypeInfo, v35);
    sub_B0D8A4(&JsonManager_TypeInfo, v36);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v37);
    sub_B0D8A4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v38);
    sub_B0D8A4(&NetworkManager_TypeInfo, v39);
    sub_B0D8A4(&string___TypeInfo, v40);
    sub_B0D8A4(&uint_TypeInfo, v41);
    sub_B0D8A4(&StringLiteral_21930/*"routeSelect"*/, v42);
    sub_B0D8A4(&StringLiteral_21869/*"result"*/, v43);
    sub_B0D8A4(&StringLiteral_21793/*"recordValueJson"*/, v44);
    sub_B0D8A4(&StringLiteral_17230/*"calledEnemyUniqueIds"*/, v45);
    sub_B0D8A4(&StringLiteral_22221/*"skillShiftNpcSvtIds"*/, v46);
    sub_B0D8A4(&StringLiteral_21746/*"raidResult"*/, v47);
    sub_B0D8A4(&StringLiteral_23062/*"useTreasureDevices"*/, v48);
    sub_B0D8A4(&StringLiteral_21792/*"recordType"*/, v49);
    sub_B0D8A4(&StringLiteral_752/*",["*/, v50);
    sub_B0D8A4(&StringLiteral_22222/*"skillShiftUniqueIds"*/, v51);
    sub_B0D8A4(&StringLiteral_17930/*"dataLostUniqueIds"*/, v52);
    sub_B0D8A4(&StringLiteral_23064/*"usedEquipSkillList"*/, v53);
    sub_B0D8A4(&StringLiteral_18345/*"elapsedTurn"*/, v54);
    sub_B0D8A4(&StringLiteral_23065/*"usedTurnList"*/, v55);
    sub_B0D8A4(&StringLiteral_22540/*"svtCommonFlagList"*/, v56);
    sub_B0D8A4(&StringLiteral_21994/*"scores"*/, v57);
    sub_B0D8A4(&StringLiteral_16706/*"battleStatus"*/, v58);
    sub_B0D8A4(&StringLiteral_705/*","*/, v59);
    sub_B0D8A4(&StringLiteral_22699/*"tdPlayed"*/, v60);
    sub_B0D8A4(&StringLiteral_23259/*"voicePlayedList"*/, v61);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v62);
    sub_B0D8A4(&StringLiteral_23360/*"winResult"*/, v63);
    sub_B0D8A4(&StringLiteral_1/*""*/, v64);
    sub_B0D8A4(&StringLiteral_22524/*"superBossResult"*/, v65);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v66);
    sub_B0D8A4(&StringLiteral_16698/*"battleId"*/, v67);
    sub_B0D8A4(&StringLiteral_16700/*"battleResult"*/, v68);
    sub_B0D8A4(&StringLiteral_16282/*"action"*/, v69);
    sub_B0D8A4(&StringLiteral_16354/*"aliveUniqueIds"*/, v70);
    byte_4214946 = 1;
  }
  v71 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        battleId,
                                                                                        *(_QWORD *)&battleResult);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v71,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v192 = battleId;
  v202 = battleId;
  StatusLong = j_il2cpp_value_box_0(long_TypeInfo, &v202);
  if ( !v71 )
    goto LABEL_116;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16698/*"battleId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)StatusLong,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v201 = battleResult;
  v73 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v201);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16700/*"battleResult"*/,
    v73,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v200 = winResult;
  v74 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v200);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23360/*"winResult"*/,
    v74,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21994/*"scores"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)scores,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16282/*"action"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)action,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v75 = JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21746/*"raidResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v75,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v76 = JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22524/*"superBossResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v76,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v199 = elapsedTurn;
  v77 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v199);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18345/*"elapsedTurn"*/,
    v77,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v198 = recordType;
  v78 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v198);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21792/*"recordType"*/,
    v78,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21793/*"recordValueJson"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)recordJson,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_116;
  v79 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)firstNpPlayList,
          (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v80 = JsonManager__toJson(&v79->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22699/*"tdPlayed"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v80,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_116;
  v81 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23062/*"useTreasureDevices"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v81,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23064/*"usedEquipSkillList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedEquipSkillDict,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22540/*"svtCommonFlagList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)svtCommonFlagDict,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22222/*"skillShiftUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftUniqueIdArray,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22221/*"skillShiftNpcSvtIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftNpcSvtIdArray,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17230/*"calledEnemyUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)calledEnemyUniqueIdArray,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21930/*"routeSelect"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)routeSelectIdArray,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17930/*"dataLostUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)dataLostUniqueIdArray,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_116;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v84 = 0LL;
    if ( !superBossResult )
      goto LABEL_116;
  }
  else
  {
    v83 = 0;
    v84 = 0LL;
    do
    {
      if ( v83 >= (unsigned int)max_length )
        goto LABEL_115;
      StatusLong = (__int64)raidResult->m_Items[v83];
      if ( !StatusLong )
        goto LABEL_116;
      StatusLong = BattleResultRequest_RaidResult__getStatusLong((BattleResultRequest_RaidResult_o *)StatusLong, 0LL);
      max_length = raidResult->max_length;
      ++v83;
      v84 += StatusLong;
    }
    while ( v83 < max_length );
    if ( !superBossResult )
LABEL_116:
      sub_B0D97C(StatusLong);
  }
  v85 = superBossResult->max_length;
  if ( v85 >= 1 )
  {
    v86 = 0;
    v87 = 0LL;
    while ( v86 < (unsigned int)v85 )
    {
      StatusLong = (__int64)superBossResult->m_Items[v86];
      if ( !StatusLong )
        goto LABEL_116;
      StatusLong = BattleResultRequest_SuperBossResult__getStatusLong(
                     (BattleResultRequest_SuperBossResult_o *)StatusLong,
                     0LL);
      v85 = superBossResult->max_length;
      ++v86;
      v87 += StatusLong;
      if ( v86 >= v85 )
        goto LABEL_25;
    }
LABEL_115:
    v189 = sub_B0D9A8(StatusLong);
    sub_B0D948(v189, 0LL);
  }
  v87 = 0LL;
LABEL_25:
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16354/*"aliveUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)aliveUniqueIds,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_116;
  v88 = aliveUniqueIds->max_length;
  if ( (__int64)(v88 << 32) >= 1 )
  {
    v89 = 0LL;
    v90 = 0LL;
    while ( v90 < v88 )
    {
      v91 = aliveUniqueIds->m_Items[++v90];
      v89 += v91;
      if ( (__int64)v90 >= (int)v88 )
        goto LABEL_32;
    }
    goto LABEL_115;
  }
  v89 = 0LL;
LABEL_32:
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_BitConverter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
  }
  Bytes_39043992 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(
                                                                          UserId + battleResult,
                                                                          0LL);
  v94 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(v84 - 4231125, 0LL);
  v95 = System_Linq_Enumerable__Concat_byte_(
          Bytes_39043992,
          v94,
          (const MethodInfo_1B44D08 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v89 >= 0 )
    v96 = v89;
  else
    v96 = v89 + 1;
  v97 = v95;
  v98 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(v96 >> 1, 0LL);
  v99 = System_Linq_Enumerable__Concat_byte_(
          v97,
          v98,
          (const MethodInfo_1B44D08 *)Method_System_Linq_Enumerable_Concat_byte___);
  v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(
                                                                v192 - 0x7FFFFFFF,
                                                                0LL);
  v101 = System_Linq_Enumerable__Concat_byte_(
           v99,
           v100,
           (const MethodInfo_1B44D08 *)Method_System_Linq_Enumerable_Concat_byte___);
  v102 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(v87 - 2469110, 0LL);
  v103 = System_Linq_Enumerable__Concat_byte_(
           v101,
           v102,
           (const MethodInfo_1B44D08 *)Method_System_Linq_Enumerable_Concat_byte___);
  v104 = System_Linq_Enumerable__ToArray_byte_(
           v103,
           (const MethodInfo_1B55FD8 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v202) = Crc32__Compute(v104, 0LL);
  v105 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(uint_TypeInfo, &v202);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16706/*"battleStatus"*/,
    v105,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v106 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v107 = *(_QWORD *)&voicePlayedArray->max_length;
    v108 = (System_Int32_array **)StringLiteral_1/*""*/;
    if ( (int)v107 >= 1 )
    {
      v109 = 0LL;
      while ( v109 < (unsigned int)v107 )
      {
        v110 = voicePlayedArray->m_Items[v109];
        if ( v110 && v110->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty((System_String_o *)v108, 0LL) )
          {
            StatusLong = sub_B0D8BC(string___TypeInfo, 5LL);
            if ( !StatusLong )
              goto LABEL_116;
            v117 = (System_String_array *)StatusLong;
            StatusLong = StringLiteral_15681/*"["*/;
            if ( StringLiteral_15681/*"["*/ )
            {
              StatusLong = sub_B0D964(StringLiteral_15681/*"["*/, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v118 = (System_Int32_array **)StringLiteral_15681/*"["*/;
            }
            else
            {
              v118 = 0LL;
            }
            if ( !v117->max_length )
              goto LABEL_115;
            v117->m_Items[0] = (System_String_o *)v118;
            sub_B0D840((BattleServantConfConponent_o *)v117->m_Items, v118, v111, v112, v113, v114, v115, v116);
            if ( !v110->max_length )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v110 + 32, 0LL);
            v138 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B0D964(StatusLong, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v117->max_length <= 1 )
              goto LABEL_115;
            v117->m_Items[1] = (System_String_o *)v138;
            sub_B0D840((BattleServantConfConponent_o *)&v117->m_Items[1], v138, v132, v133, v134, v135, v136, v137);
            StatusLong = StringLiteral_705/*","*/;
            if ( StringLiteral_705/*","*/ )
            {
              StatusLong = sub_B0D964(StringLiteral_705/*","*/, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v145 = (System_Int32_array **)StringLiteral_705/*","*/;
            }
            else
            {
              v145 = 0LL;
            }
            if ( v117->max_length <= 2 )
              goto LABEL_115;
            v117->m_Items[2] = (System_String_o *)v145;
            sub_B0D840((BattleServantConfConponent_o *)&v117->m_Items[2], v145, v139, v140, v141, v142, v143, v144);
            if ( v110->max_length <= 1 )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v110 + 36, 0LL);
            v166 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B0D964(StatusLong, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v117->max_length <= 3 )
              goto LABEL_115;
            v117->m_Items[3] = (System_String_o *)v166;
            sub_B0D840((BattleServantConfConponent_o *)&v117->m_Items[3], v166, v160, v161, v162, v163, v164, v165);
            StatusLong = StringLiteral_15917/*"]"*/;
            if ( StringLiteral_15917/*"]"*/ )
            {
              StatusLong = sub_B0D964(StringLiteral_15917/*"]"*/, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v173 = (System_Int32_array **)StringLiteral_15917/*"]"*/;
            }
            else
            {
              v173 = 0LL;
            }
            if ( v117->max_length <= 4 )
              goto LABEL_115;
            v117->m_Items[4] = (System_String_o *)v173;
            v181 = (BattleServantConfConponent_o *)&v117->m_Items[4];
          }
          else
          {
            StatusLong = sub_B0D8BC(string___TypeInfo, 6LL);
            if ( !StatusLong )
              goto LABEL_116;
            v117 = (System_String_array *)StatusLong;
            if ( v108 )
            {
              StatusLong = sub_B0D964(v108, *(_QWORD *)(*(_QWORD *)StatusLong + 64LL));
              if ( !StatusLong )
              {
LABEL_117:
                v190 = sub_B0D99C(StatusLong);
                sub_B0D948(v190, 0LL);
              }
            }
            if ( !v117->max_length )
              goto LABEL_115;
            v117->m_Items[0] = (System_String_o *)v108;
            sub_B0D840((BattleServantConfConponent_o *)v117->m_Items, v108, v119, v120, v121, v122, v123, v124);
            StatusLong = StringLiteral_752/*",["*/;
            if ( StringLiteral_752/*",["*/ )
            {
              StatusLong = sub_B0D964(StringLiteral_752/*",["*/, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v131 = (System_Int32_array **)StringLiteral_752/*",["*/;
            }
            else
            {
              v131 = 0LL;
            }
            if ( v117->max_length <= 1 )
              goto LABEL_115;
            v117->m_Items[1] = (System_String_o *)v131;
            sub_B0D840((BattleServantConfConponent_o *)&v117->m_Items[1], v131, v125, v126, v127, v128, v129, v130);
            if ( !v110->max_length )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v110 + 32, 0LL);
            v152 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B0D964(StatusLong, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v117->max_length <= 2 )
              goto LABEL_115;
            v117->m_Items[2] = (System_String_o *)v152;
            sub_B0D840((BattleServantConfConponent_o *)&v117->m_Items[2], v152, v146, v147, v148, v149, v150, v151);
            StatusLong = StringLiteral_705/*","*/;
            if ( StringLiteral_705/*","*/ )
            {
              StatusLong = sub_B0D964(StringLiteral_705/*","*/, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v159 = (System_Int32_array **)StringLiteral_705/*","*/;
            }
            else
            {
              v159 = 0LL;
            }
            if ( v117->max_length <= 3 )
              goto LABEL_115;
            v117->m_Items[3] = (System_String_o *)v159;
            sub_B0D840((BattleServantConfConponent_o *)&v117->m_Items[3], v159, v153, v154, v155, v156, v157, v158);
            if ( v110->max_length <= 1 )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v110 + 36, 0LL);
            v180 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B0D964(StatusLong, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v117->max_length <= 4 )
              goto LABEL_115;
            v117->m_Items[4] = (System_String_o *)v180;
            sub_B0D840((BattleServantConfConponent_o *)&v117->m_Items[4], v180, v174, v175, v176, v177, v178, v179);
            StatusLong = StringLiteral_15917/*"]"*/;
            if ( StringLiteral_15917/*"]"*/ )
            {
              StatusLong = sub_B0D964(StringLiteral_15917/*"]"*/, v117->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v173 = (System_Int32_array **)StringLiteral_15917/*"]"*/;
            }
            else
            {
              v173 = 0LL;
            }
            if ( v117->max_length <= 5 )
              goto LABEL_115;
            v117->m_Items[5] = (System_String_o *)v173;
            v181 = (BattleServantConfConponent_o *)&v117->m_Items[5];
          }
          sub_B0D840(v181, v173, v167, v168, v169, v170, v171, v172);
          StatusLong = (__int64)System_String__Concat_43930028(v117, 0LL);
          v106 = voicePlayedArray;
          v108 = (System_Int32_array **)StatusLong;
        }
        LODWORD(v107) = v106->max_length;
        if ( (__int64)++v109 >= (int)v107 )
          goto LABEL_106;
      }
      goto LABEL_115;
    }
LABEL_106:
    v182 = System_String__Concat_43852188(
             (System_String_o *)StringLiteral_15681/*"["*/,
             (System_String_o *)v108,
             (System_String_o *)StringLiteral_15917/*"]"*/,
             0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v71,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23259/*"voicePlayedList"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v182,
      (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23065/*"usedTurnList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedTurnArray,
    (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v185 = (MiniMessagePack_MiniMessagePacker_o *)sub_B0D974(MiniMessagePack_MiniMessagePacker_TypeInfo, v183, v184);
  MiniMessagePack_MiniMessagePacker___ctor(v185, 0LL);
  if ( !v185 )
    goto LABEL_116;
  v186 = MiniMessagePack_MiniMessagePacker__PackClass(v185, (Il2CppObject *)v71, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v187 = CatAndMouseGame__CatGame5Bytes(v186, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v188 = System_Convert__ToBase64String(v187, 0LL);
  RequestBase__addField_30435648((RequestBase_o *)this, (System_String_o *)StringLiteral_21869/*"result"*/, v188, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4214948 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v5);
    byte_4214948 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B0D97C(0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)paramString,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v7,
            (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v7,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4214945 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_9180/*"MockBattleResultRequest"*/, v2);
    byte_4214945 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9180/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4214944 & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_16682/*"battle/result"*/, v2);
    byte_4214944 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_16682/*"battle/result"*/, 0LL);
}


void __fastcall BattleResultRequest__requestCompleted(
        BattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  Il2CppObject *success; // x20
  System_String_o *v12; // x1

  if ( (byte_4214947 & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, responseList);
    sub_B0D8A4(&ResponseCommandKind_TypeInfo, v5);
    sub_B0D8A4(&ServantCommentManager_TypeInfo, v6);
    sub_B0D8A4(&TopHomeRequest_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v8);
    byte_4214947 = 1;
  }
  if ( (BYTE3(TopHomeRequest_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TopHomeRequest_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TopHomeRequest_TypeInfo);
  }
  TopHomeRequest__clearExpirationDate(0LL);
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v9 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v9
    && (v10 = v9, ResponseData__checkError_30403444(v9, 0LL))
    && (success = (Il2CppObject *)v10->fields.success) != 0LL )
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__UpdateChapter(0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v12 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v12 = (System_String_o *)StringLiteral_21137/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v12, 0LL);
}


void __fastcall BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  void *v15; // x1
  void *v16; // x1
  struct System_Int32_array_array *v17; // x0
  struct System_Int32_array *v18; // x0
  struct BattleResultRequest_RaidResult_array *v19; // x0
  struct BattleResultRequest_SuperBossResult_array *v20; // x0
  struct System_Int32_array *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v24; // x21
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_Dictionary_int__int__o *v30; // x21
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  struct System_Int32_array *v32; // x0
  struct System_Int64_array *v33; // x0
  struct System_Int32_array *v34; // x0

  if ( (byte_4211ECB & 1) == 0 )
  {
    sub_B0D8A4(&BattleData_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B0D8A4(&int_____TypeInfo, v7);
    sub_B0D8A4(&int___TypeInfo, v8);
    sub_B0D8A4(&long___TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v11);
    sub_B0D8A4(&BattleResultRequest_RaidResult___TypeInfo, v12);
    sub_B0D8A4(&BattleResultRequest_SuperBossResult___TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_1/*""*/, v14);
    byte_4211ECB = 1;
  }
  v15 = StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.scores, v15);
  v16 = StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840(&this->fields.action, v16);
  v17 = (struct System_Int32_array_array *)sub_B0D8BC(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v17;
  sub_B0D840(&this->fields.voicePlayedArray, v17);
  v18 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v18;
  sub_B0D840(&this->fields.aliveUniqueIds, v18);
  v19 = (struct BattleResultRequest_RaidResult_array *)sub_B0D8BC(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v19;
  sub_B0D840(&this->fields.raidResult, v19);
  v20 = (struct BattleResultRequest_SuperBossResult_array *)sub_B0D8BC(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v20;
  sub_B0D840(&this->fields.superBossResult, v20);
  v21 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v21;
  sub_B0D840(&this->fields.usedTurnArray, v21);
  this->fields.recordType = 1;
  v24 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        v22,
                                                                                        v23);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v24,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v24;
  sub_B0D840(&this->fields.recordJson, v24);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Dictionary_string__object___TypeInfo,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v27;
  sub_B0D840(&this->fields.firstNpPlayList, v27);
  v30 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B0D974(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v28,
                                                               v29);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v30,
    (const MethodInfo_2E68CB0 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v30;
  sub_B0D840(&this->fields.usedEquipSkillDict, v30);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_B0D840(&this->fields.svtCommonFlagDict, SavedServantCommonFlagDict);
  v32 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v32;
  sub_B0D840(&this->fields.skillShiftUniqueIds, v32);
  v33 = (struct System_Int64_array *)sub_B0D8BC(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v33;
  sub_B0D840(&this->fields.skillShiftNpcSvtIds, v33);
  v34 = (struct System_Int32_array *)sub_B0D8BC(int___TypeInfo, 0LL);
  this->fields.routeSelect = v34;
  sub_B0D840(&this->fields.routeSelect, v34);
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
  struct System_Int32_array *aliveUniqueIds; // x12
  unsigned __int64 v20; // x8
  __int64 v21; // x9
  unsigned __int64 v22; // x10
  int32_t *v23; // x12
  __int64 v24; // x13
  __int64 v25; // x8
  __int64 v26; // x22
  int64_t UserId; // x0
  __int64 battleResult; // x24
  int64_t v29; // x23
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_39043992; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Byte_array *v39; // x19
  __int64 v41; // x0

  v2 = this;
  if ( (byte_4211EC9 & 1) == 0 )
  {
    sub_B0D8A4(&System_BitConverter_TypeInfo, method);
    sub_B0D8A4(&Crc32_TypeInfo, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Concat_byte___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_byte___, v5);
    this = (BattleResultRequest_Argument_o *)sub_B0D8A4(&NetworkManager_TypeInfo, v6);
    byte_4211EC9 = 1;
  }
  raidResult = v2->fields.raidResult;
  if ( !raidResult )
    goto LABEL_38;
  max_length = raidResult->max_length;
  v9 = -4231125LL;
  if ( max_length >= 1 )
  {
    v10 = 0;
    v11 = 0LL;
    do
    {
      if ( v10 >= (unsigned int)max_length )
      {
LABEL_37:
        v41 = sub_B0D9A8(this);
        sub_B0D948(v41, 0LL);
      }
      v12 = (int *)raidResult->m_Items[v10];
      if ( !v12 )
        goto LABEL_38;
      ++v10;
      v11 += v12[6] + (__int64)v12[5] + v12[4];
    }
    while ( v10 < max_length );
    v9 = v11 - 4231125;
  }
  superBossResult = v2->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_38;
  v14 = superBossResult->max_length;
  v15 = -2469110LL;
  if ( v14 >= 1 )
  {
    v16 = 0;
    v17 = 0LL;
    do
    {
      if ( v16 >= (unsigned int)v14 )
        goto LABEL_37;
      v18 = (int *)superBossResult->m_Items[v16];
      if ( !v18 )
        goto LABEL_38;
      ++v16;
      v17 += v18[6] + (__int64)v18[4] + v18[5];
    }
    while ( v16 < v14 );
    v15 = v17 - 2469110;
  }
  aliveUniqueIds = v2->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_38:
    sub_B0D97C(this);
  v20 = aliveUniqueIds->max_length;
  if ( (__int64)(v20 << 32) < 1 )
  {
    v26 = 0LL;
  }
  else
  {
    v21 = 0LL;
    v22 = 0LL;
    v23 = &aliveUniqueIds->m_Items[1];
    do
    {
      if ( v22 >= v20 )
        goto LABEL_37;
      v24 = v23[v22++];
      v21 += v24;
    }
    while ( (__int64)v22 < (int)v20 );
    if ( v21 >= 0 )
      v25 = v21;
    else
      v25 = v21 + 1;
    v26 = v25 >> 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  battleResult = v2->fields.battleResult;
  v29 = UserId;
  if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_BitConverter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
  }
  Bytes_39043992 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(
                                                                          v29 + battleResult,
                                                                          0LL);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(v9, 0LL);
  v32 = System_Linq_Enumerable__Concat_byte_(
          Bytes_39043992,
          v31,
          (const MethodInfo_1B44D08 *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(v26, 0LL);
  v34 = System_Linq_Enumerable__Concat_byte_(
          v32,
          v33,
          (const MethodInfo_1B44D08 *)Method_System_Linq_Enumerable_Concat_byte___);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v36 = System_Linq_Enumerable__Concat_byte_(
          v34,
          v35,
          (const MethodInfo_1B44D08 *)Method_System_Linq_Enumerable_Concat_byte___);
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39043992(v15, 0LL);
  v38 = System_Linq_Enumerable__Concat_byte_(
          v36,
          v37,
          (const MethodInfo_1B44D08 *)Method_System_Linq_Enumerable_Concat_byte___);
  v39 = System_Linq_Enumerable__ToArray_byte_(
          v38,
          (const MethodInfo_1B55FD8 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  return Crc32__Compute(v39, 0LL);
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
  System_String_o *v9; // x21
  unsigned __int64 v10; // x22
  unsigned __int64 max_length; // x9
  System_Int32_array *v12; // x28
  BattleResultRequest_Argument_o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x1
  BattleResultRequest_Argument_o *v16; // x21
  __int64 v17; // x1
  BattleResultRequest_Argument_o *v18; // x21
  __int64 v19; // x1
  BattleResultRequest_Argument_o *v20; // x21
  __int64 v21; // x1
  BattleResultRequest_Argument_o *v22; // x21
  void *p_raidResult; // x0
  __int64 v25; // x0
  __int64 v26; // x0

  v2 = this;
  if ( (byte_4211ECA & 1) == 0 )
  {
    sub_B0D8A4(&string___TypeInfo, method);
    sub_B0D8A4(&StringLiteral_752/*",["*/, v3);
    sub_B0D8A4(&StringLiteral_705/*","*/, v4);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v5);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    this = (BattleResultRequest_Argument_o *)sub_B0D8A4(&StringLiteral_15917/*"]"*/, v7);
    byte_4211ECA = 1;
  }
  voicePlayedArray = v2->fields.voicePlayedArray;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( voicePlayedArray )
  {
    v10 = 0LL;
    while ( 1 )
    {
      max_length = voicePlayedArray->max_length;
      if ( (__int64)v10 >= (int)max_length )
        break;
      if ( v10 >= max_length )
        goto LABEL_67;
      v12 = voicePlayedArray->m_Items[v10];
      if ( v12 && v12->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty(v9, 0LL) )
        {
          this = (BattleResultRequest_Argument_o *)sub_B0D8BC(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_65;
          v13 = this;
          this = (BattleResultRequest_Argument_o *)StringLiteral_15681/*"["*/;
          if ( StringLiteral_15681/*"["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(StringLiteral_15681/*"["*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v14 = StringLiteral_15681/*"["*/;
          }
          else
          {
            v14 = 0LL;
          }
          if ( !v13->fields.battleResult )
            goto LABEL_67;
          v13->fields.scores = (struct System_String_o *)v14;
          sub_B0D840(&v13->fields.scores, v14);
          if ( !v12->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          v16 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(this, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v13->fields.battleResult <= 1u )
            goto LABEL_67;
          v13->fields.action = (struct System_String_o *)v16;
          sub_B0D840(&v13->fields.action, v16);
          this = (BattleResultRequest_Argument_o *)StringLiteral_705/*","*/;
          if ( StringLiteral_705/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(StringLiteral_705/*","*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v17 = StringLiteral_705/*","*/;
          }
          else
          {
            v17 = 0LL;
          }
          if ( v13->fields.battleResult <= 2u )
            goto LABEL_67;
          v13->fields.voicePlayedArray = (struct System_Int32_array_array *)v17;
          sub_B0D840(&v13->fields.voicePlayedArray, v17);
          if ( v12->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL);
          v20 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(this, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v13->fields.battleResult <= 3u )
            goto LABEL_67;
          v13->fields.aliveUniqueIds = (struct System_Int32_array *)v20;
          sub_B0D840(&v13->fields.aliveUniqueIds, v20);
          this = (BattleResultRequest_Argument_o *)StringLiteral_15917/*"]"*/;
          if ( StringLiteral_15917/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(StringLiteral_15917/*"]"*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v21 = StringLiteral_15917/*"]"*/;
          }
          else
          {
            v21 = 0LL;
          }
          if ( v13->fields.battleResult <= 4u )
            goto LABEL_67;
          v13->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v21;
          p_raidResult = &v13->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_B0D8BC(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_65;
          v13 = this;
          if ( v9 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(v9, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_68:
              v26 = sub_B0D99C();
              sub_B0D948(v26, 0LL);
            }
          }
          if ( !v13->fields.battleResult )
            goto LABEL_67;
          v13->fields.scores = v9;
          sub_B0D840(&v13->fields.scores, v9);
          this = (BattleResultRequest_Argument_o *)StringLiteral_752/*",["*/;
          if ( StringLiteral_752/*",["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(StringLiteral_752/*",["*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v15 = StringLiteral_752/*",["*/;
          }
          else
          {
            v15 = 0LL;
          }
          if ( v13->fields.battleResult <= 1u )
            goto LABEL_67;
          v13->fields.action = (struct System_String_o *)v15;
          sub_B0D840(&v13->fields.action, v15);
          if ( !v12->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          v18 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(this, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v13->fields.battleResult <= 2u )
            goto LABEL_67;
          v13->fields.voicePlayedArray = (struct System_Int32_array_array *)v18;
          sub_B0D840(&v13->fields.voicePlayedArray, v18);
          this = (BattleResultRequest_Argument_o *)StringLiteral_705/*","*/;
          if ( StringLiteral_705/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(StringLiteral_705/*","*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v19 = StringLiteral_705/*","*/;
          }
          else
          {
            v19 = 0LL;
          }
          if ( v13->fields.battleResult <= 3u )
            goto LABEL_67;
          v13->fields.aliveUniqueIds = (struct System_Int32_array *)v19;
          sub_B0D840(&v13->fields.aliveUniqueIds, v19);
          if ( v12->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL);
          v22 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(this, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v13->fields.battleResult <= 4u )
            goto LABEL_67;
          v13->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v22;
          sub_B0D840(&v13->fields.raidResult, v22);
          this = (BattleResultRequest_Argument_o *)StringLiteral_15917/*"]"*/;
          if ( StringLiteral_15917/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B0D964(StringLiteral_15917/*"]"*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v21 = StringLiteral_15917/*"]"*/;
          }
          else
          {
            v21 = 0LL;
          }
          if ( v13->fields.battleResult <= 5u )
          {
LABEL_67:
            v25 = sub_B0D9A8(this);
            sub_B0D948(v25, 0LL);
          }
          v13->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)v21;
          p_raidResult = &v13->fields.superBossResult;
        }
        sub_B0D840(p_raidResult, v21);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_43930028((System_String_array *)v13, 0LL);
        v9 = (System_String_o *)this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v10;
      if ( !voicePlayedArray )
LABEL_65:
        sub_B0D97C(this);
    }
  }
  return System_String__Concat_43852188(
           (System_String_o *)StringLiteral_15681/*"["*/,
           v9,
           (System_String_o *)StringLiteral_15917/*"]"*/,
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