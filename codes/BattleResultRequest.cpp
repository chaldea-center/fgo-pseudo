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
  __int64 v73; // x1
  System_Xml_Schema_XmlSchemaObject_o *v74; // x0
  System_Xml_Schema_XmlSchemaObject_o *v75; // x0
  System_String_o *v76; // x0
  System_String_o *v77; // x0
  System_Xml_Schema_XmlSchemaObject_o *v78; // x0
  System_Xml_Schema_XmlSchemaObject_o *v79; // x0
  WarBoardUiData_SaveData_array *v80; // x0
  System_String_o *v81; // x0
  System_String_o *v82; // x0
  signed int max_length; // w8
  signed int v84; // w19
  __int64 v85; // x20
  signed int v86; // w8
  signed int v87; // w19
  __int64 v88; // x22
  unsigned __int64 v89; // x8
  __int64 v90; // x23
  unsigned __int64 v91; // x9
  __int64 v92; // x12
  int64_t UserId; // x19
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_39294544; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v95; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v96; // x0
  __int64 v97; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v98; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v99; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v102; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v103; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v104; // x0
  System_Byte_array *v105; // x19
  System_Xml_Schema_XmlSchemaObject_o *v106; // x0
  System_Int32_array_array *v107; // x10
  __int64 v108; // x8
  System_Int32_array **v109; // x22
  unsigned __int64 v110; // x20
  System_Int32_array *v111; // x25
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  System_String_array *v118; // x19
  System_Int32_array **v119; // x1
  System_String_array **v120; // x2
  System_String_array **v121; // x3
  System_Boolean_array **v122; // x4
  System_Int32_array **v123; // x5
  System_Int32_array *v124; // x6
  System_Int32_array *v125; // x7
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  System_Int32_array **v132; // x1
  System_String_array **v133; // x2
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x22
  System_String_array **v140; // x2
  System_String_array **v141; // x3
  System_Boolean_array **v142; // x4
  System_Int32_array **v143; // x5
  System_Int32_array *v144; // x6
  System_Int32_array *v145; // x7
  System_Int32_array **v146; // x1
  System_String_array **v147; // x2
  System_String_array **v148; // x3
  System_Boolean_array **v149; // x4
  System_Int32_array **v150; // x5
  System_Int32_array *v151; // x6
  System_Int32_array *v152; // x7
  System_Int32_array **v153; // x22
  System_String_array **v154; // x2
  System_String_array **v155; // x3
  System_Boolean_array **v156; // x4
  System_Int32_array **v157; // x5
  System_Int32_array *v158; // x6
  System_Int32_array *v159; // x7
  System_Int32_array **v160; // x1
  System_String_array **v161; // x2
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_Int32_array **v167; // x22
  System_String_array **v168; // x2
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  System_Int32_array **v174; // x1
  System_String_array **v175; // x2
  System_String_array **v176; // x3
  System_Boolean_array **v177; // x4
  System_Int32_array **v178; // x5
  System_Int32_array *v179; // x6
  System_Int32_array *v180; // x7
  System_Int32_array **v181; // x22
  BattleServantConfConponent_o *v182; // x0
  System_String_o *v183; // x0
  MiniMessagePack_MiniMessagePacker_o *v184; // x19
  System_Byte_array *v185; // x19
  System_Byte_array *v186; // x19
  System_String_o *v187; // x0
  __int64 v188; // x0
  __int64 v189; // x0
  int64_t v191; // [xsp+8h] [xbp-98h]
  int32_t v197; // [xsp+38h] [xbp-68h] BYREF
  int32_t v198; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t v199; // [xsp+40h] [xbp-60h] BYREF
  int32_t v200; // [xsp+44h] [xbp-5Ch] BYREF
  int64_t v201; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_4187F26 & 1) == 0 )
  {
    sub_B2C35C(&System_BitConverter_TypeInfo, battleId);
    sub_B2C35C(&CatAndMouseGame_TypeInfo, v26);
    sub_B2C35C(&System_Convert_TypeInfo, v27);
    sub_B2C35C(&Crc32_TypeInfo, v28);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v29);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v30);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v31);
    sub_B2C35C(&Method_System_Linq_Enumerable_Concat_byte___, v32);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_byte___, v33);
    sub_B2C35C(&int_TypeInfo, v34);
    sub_B2C35C(&long_TypeInfo, v35);
    sub_B2C35C(&JsonManager_TypeInfo, v36);
    sub_B2C35C(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v37);
    sub_B2C35C(&MiniMessagePack_MiniMessagePacker_TypeInfo, v38);
    sub_B2C35C(&NetworkManager_TypeInfo, v39);
    sub_B2C35C(&string___TypeInfo, v40);
    sub_B2C35C(&uint_TypeInfo, v41);
    sub_B2C35C(&StringLiteral_21857/*"routeSelect"*/, v42);
    sub_B2C35C(&StringLiteral_21798/*"result"*/, v43);
    sub_B2C35C(&StringLiteral_21723/*"recordValueJson"*/, v44);
    sub_B2C35C(&StringLiteral_17178/*"calledEnemyUniqueIds"*/, v45);
    sub_B2C35C(&StringLiteral_22146/*"skillShiftNpcSvtIds"*/, v46);
    sub_B2C35C(&StringLiteral_21676/*"raidResult"*/, v47);
    sub_B2C35C(&StringLiteral_22986/*"useTreasureDevices"*/, v48);
    sub_B2C35C(&StringLiteral_21722/*"recordType"*/, v49);
    sub_B2C35C(&StringLiteral_746/*",["*/, v50);
    sub_B2C35C(&StringLiteral_22147/*"skillShiftUniqueIds"*/, v51);
    sub_B2C35C(&StringLiteral_17874/*"dataLostUniqueIds"*/, v52);
    sub_B2C35C(&StringLiteral_22988/*"usedEquipSkillList"*/, v53);
    sub_B2C35C(&StringLiteral_18288/*"elapsedTurn"*/, v54);
    sub_B2C35C(&StringLiteral_22989/*"usedTurnList"*/, v55);
    sub_B2C35C(&StringLiteral_22464/*"svtCommonFlagList"*/, v56);
    sub_B2C35C(&StringLiteral_21921/*"scores"*/, v57);
    sub_B2C35C(&StringLiteral_16657/*"battleStatus"*/, v58);
    sub_B2C35C(&StringLiteral_699/*","*/, v59);
    sub_B2C35C(&StringLiteral_22623/*"tdPlayed"*/, v60);
    sub_B2C35C(&StringLiteral_23181/*"voicePlayedList"*/, v61);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v62);
    sub_B2C35C(&StringLiteral_23282/*"winResult"*/, v63);
    sub_B2C35C(&StringLiteral_1/*""*/, v64);
    sub_B2C35C(&StringLiteral_22448/*"superBossResult"*/, v65);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v66);
    sub_B2C35C(&StringLiteral_16649/*"battleId"*/, v67);
    sub_B2C35C(&StringLiteral_16651/*"battleResult"*/, v68);
    sub_B2C35C(&StringLiteral_16234/*"action"*/, v69);
    sub_B2C35C(&StringLiteral_16305/*"aliveUniqueIds"*/, v70);
    byte_4187F26 = 1;
  }
  v71 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v71,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v191 = battleId;
  v201 = battleId;
  StatusLong = j_il2cpp_value_box_0(long_TypeInfo, &v201);
  if ( !v71 )
    goto LABEL_116;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16649/*"battleId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)StatusLong,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v200 = battleResult;
  v74 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v200);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16651/*"battleResult"*/,
    v74,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v199 = winResult;
  v75 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v199);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23282/*"winResult"*/,
    v75,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21921/*"scores"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)scores,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16234/*"action"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)action,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v76 = JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21676/*"raidResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v76,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v77 = JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22448/*"superBossResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v77,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v198 = elapsedTurn;
  v78 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v198);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18288/*"elapsedTurn"*/,
    v78,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v197 = recordType;
  v79 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v197);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21722/*"recordType"*/,
    v79,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21723/*"recordValueJson"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)recordJson,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_116;
  v80 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)firstNpPlayList,
          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v81 = JsonManager__toJson(&v80->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22623/*"tdPlayed"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v81,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_116;
  v82 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22986/*"useTreasureDevices"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v82,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22988/*"usedEquipSkillList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedEquipSkillDict,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22464/*"svtCommonFlagList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)svtCommonFlagDict,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22147/*"skillShiftUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftUniqueIdArray,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22146/*"skillShiftNpcSvtIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftNpcSvtIdArray,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17178/*"calledEnemyUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)calledEnemyUniqueIdArray,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21857/*"routeSelect"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)routeSelectIdArray,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17874/*"dataLostUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)dataLostUniqueIdArray,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_116;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v85 = 0LL;
    if ( !superBossResult )
      goto LABEL_116;
  }
  else
  {
    v84 = 0;
    v85 = 0LL;
    do
    {
      if ( v84 >= (unsigned int)max_length )
        goto LABEL_115;
      StatusLong = (__int64)raidResult->m_Items[v84];
      if ( !StatusLong )
        goto LABEL_116;
      StatusLong = BattleResultRequest_RaidResult__getStatusLong((BattleResultRequest_RaidResult_o *)StatusLong, 0LL);
      max_length = raidResult->max_length;
      ++v84;
      v85 += StatusLong;
    }
    while ( v84 < max_length );
    if ( !superBossResult )
LABEL_116:
      sub_B2C434(StatusLong, v73);
  }
  v86 = superBossResult->max_length;
  if ( v86 >= 1 )
  {
    v87 = 0;
    v88 = 0LL;
    while ( v87 < (unsigned int)v86 )
    {
      StatusLong = (__int64)superBossResult->m_Items[v87];
      if ( !StatusLong )
        goto LABEL_116;
      StatusLong = BattleResultRequest_SuperBossResult__getStatusLong(
                     (BattleResultRequest_SuperBossResult_o *)StatusLong,
                     0LL);
      v86 = superBossResult->max_length;
      ++v87;
      v88 += StatusLong;
      if ( v87 >= v86 )
        goto LABEL_25;
    }
LABEL_115:
    v188 = sub_B2C460(StatusLong);
    sub_B2C400(v188, 0LL);
  }
  v88 = 0LL;
LABEL_25:
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16305/*"aliveUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)aliveUniqueIds,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_116;
  v89 = aliveUniqueIds->max_length;
  if ( (__int64)(v89 << 32) >= 1 )
  {
    v90 = 0LL;
    v91 = 0LL;
    while ( v91 < v89 )
    {
      v92 = aliveUniqueIds->m_Items[++v91];
      v90 += v92;
      if ( (__int64)v91 >= (int)v89 )
        goto LABEL_32;
    }
    goto LABEL_115;
  }
  v90 = 0LL;
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
  Bytes_39294544 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(
                                                                          UserId + battleResult,
                                                                          0LL);
  v95 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(v85 - 4231125, 0LL);
  v96 = System_Linq_Enumerable__Concat_byte_(
          Bytes_39294544,
          v95,
          (const MethodInfo_174233C *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v90 >= 0 )
    v97 = v90;
  else
    v97 = v90 + 1;
  v98 = v96;
  v99 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(v97 >> 1, 0LL);
  v100 = System_Linq_Enumerable__Concat_byte_(
           v98,
           v99,
           (const MethodInfo_174233C *)Method_System_Linq_Enumerable_Concat_byte___);
  v101 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(
                                                                v191 - 0x7FFFFFFF,
                                                                0LL);
  v102 = System_Linq_Enumerable__Concat_byte_(
           v100,
           v101,
           (const MethodInfo_174233C *)Method_System_Linq_Enumerable_Concat_byte___);
  v103 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(v88 - 2469110, 0LL);
  v104 = System_Linq_Enumerable__Concat_byte_(
           v102,
           v103,
           (const MethodInfo_174233C *)Method_System_Linq_Enumerable_Concat_byte___);
  v105 = System_Linq_Enumerable__ToArray_byte_(
           v104,
           (const MethodInfo_1A9AD0C *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v201) = Crc32__Compute(v105, 0LL);
  v106 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(uint_TypeInfo, &v201);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16657/*"battleStatus"*/,
    v106,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v107 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v108 = *(_QWORD *)&voicePlayedArray->max_length;
    v109 = (System_Int32_array **)StringLiteral_1/*""*/;
    if ( (int)v108 >= 1 )
    {
      v110 = 0LL;
      while ( v110 < (unsigned int)v108 )
      {
        v111 = voicePlayedArray->m_Items[v110];
        if ( v111 && v111->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty((System_String_o *)v109, 0LL) )
          {
            StatusLong = sub_B2C374(string___TypeInfo, 5LL);
            if ( !StatusLong )
              goto LABEL_116;
            v118 = (System_String_array *)StatusLong;
            StatusLong = StringLiteral_15634/*"["*/;
            if ( StringLiteral_15634/*"["*/ )
            {
              StatusLong = sub_B2C41C(StringLiteral_15634/*"["*/, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v119 = (System_Int32_array **)StringLiteral_15634/*"["*/;
            }
            else
            {
              v119 = 0LL;
            }
            if ( !v118->max_length )
              goto LABEL_115;
            v118->m_Items[0] = (System_String_o *)v119;
            sub_B2C2F8((BattleServantConfConponent_o *)v118->m_Items, v119, v112, v113, v114, v115, v116, v117);
            if ( !v111->max_length )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v111 + 32, 0LL);
            v139 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B2C41C(StatusLong, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v118->max_length <= 1 )
              goto LABEL_115;
            v118->m_Items[1] = (System_String_o *)v139;
            sub_B2C2F8((BattleServantConfConponent_o *)&v118->m_Items[1], v139, v133, v134, v135, v136, v137, v138);
            StatusLong = StringLiteral_699/*","*/;
            if ( StringLiteral_699/*","*/ )
            {
              StatusLong = sub_B2C41C(StringLiteral_699/*","*/, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v146 = (System_Int32_array **)StringLiteral_699/*","*/;
            }
            else
            {
              v146 = 0LL;
            }
            if ( v118->max_length <= 2 )
              goto LABEL_115;
            v118->m_Items[2] = (System_String_o *)v146;
            sub_B2C2F8((BattleServantConfConponent_o *)&v118->m_Items[2], v146, v140, v141, v142, v143, v144, v145);
            if ( v111->max_length <= 1 )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v111 + 36, 0LL);
            v167 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B2C41C(StatusLong, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v118->max_length <= 3 )
              goto LABEL_115;
            v118->m_Items[3] = (System_String_o *)v167;
            sub_B2C2F8((BattleServantConfConponent_o *)&v118->m_Items[3], v167, v161, v162, v163, v164, v165, v166);
            StatusLong = StringLiteral_15870/*"]"*/;
            if ( StringLiteral_15870/*"]"*/ )
            {
              StatusLong = sub_B2C41C(StringLiteral_15870/*"]"*/, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v174 = (System_Int32_array **)StringLiteral_15870/*"]"*/;
            }
            else
            {
              v174 = 0LL;
            }
            if ( v118->max_length <= 4 )
              goto LABEL_115;
            v118->m_Items[4] = (System_String_o *)v174;
            v182 = (BattleServantConfConponent_o *)&v118->m_Items[4];
          }
          else
          {
            StatusLong = sub_B2C374(string___TypeInfo, 6LL);
            if ( !StatusLong )
              goto LABEL_116;
            v118 = (System_String_array *)StatusLong;
            if ( v109 )
            {
              StatusLong = sub_B2C41C(v109, *(_QWORD *)(*(_QWORD *)StatusLong + 64LL));
              if ( !StatusLong )
              {
LABEL_117:
                v189 = sub_B2C454(StatusLong);
                sub_B2C400(v189, 0LL);
              }
            }
            if ( !v118->max_length )
              goto LABEL_115;
            v118->m_Items[0] = (System_String_o *)v109;
            sub_B2C2F8((BattleServantConfConponent_o *)v118->m_Items, v109, v120, v121, v122, v123, v124, v125);
            StatusLong = StringLiteral_746/*",["*/;
            if ( StringLiteral_746/*",["*/ )
            {
              StatusLong = sub_B2C41C(StringLiteral_746/*",["*/, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v132 = (System_Int32_array **)StringLiteral_746/*",["*/;
            }
            else
            {
              v132 = 0LL;
            }
            if ( v118->max_length <= 1 )
              goto LABEL_115;
            v118->m_Items[1] = (System_String_o *)v132;
            sub_B2C2F8((BattleServantConfConponent_o *)&v118->m_Items[1], v132, v126, v127, v128, v129, v130, v131);
            if ( !v111->max_length )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v111 + 32, 0LL);
            v153 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B2C41C(StatusLong, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v118->max_length <= 2 )
              goto LABEL_115;
            v118->m_Items[2] = (System_String_o *)v153;
            sub_B2C2F8((BattleServantConfConponent_o *)&v118->m_Items[2], v153, v147, v148, v149, v150, v151, v152);
            StatusLong = StringLiteral_699/*","*/;
            if ( StringLiteral_699/*","*/ )
            {
              StatusLong = sub_B2C41C(StringLiteral_699/*","*/, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v160 = (System_Int32_array **)StringLiteral_699/*","*/;
            }
            else
            {
              v160 = 0LL;
            }
            if ( v118->max_length <= 3 )
              goto LABEL_115;
            v118->m_Items[3] = (System_String_o *)v160;
            sub_B2C2F8((BattleServantConfConponent_o *)&v118->m_Items[3], v160, v154, v155, v156, v157, v158, v159);
            if ( v111->max_length <= 1 )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v111 + 36, 0LL);
            v181 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B2C41C(StatusLong, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v118->max_length <= 4 )
              goto LABEL_115;
            v118->m_Items[4] = (System_String_o *)v181;
            sub_B2C2F8((BattleServantConfConponent_o *)&v118->m_Items[4], v181, v175, v176, v177, v178, v179, v180);
            StatusLong = StringLiteral_15870/*"]"*/;
            if ( StringLiteral_15870/*"]"*/ )
            {
              StatusLong = sub_B2C41C(StringLiteral_15870/*"]"*/, v118->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v174 = (System_Int32_array **)StringLiteral_15870/*"]"*/;
            }
            else
            {
              v174 = 0LL;
            }
            if ( v118->max_length <= 5 )
              goto LABEL_115;
            v118->m_Items[5] = (System_String_o *)v174;
            v182 = (BattleServantConfConponent_o *)&v118->m_Items[5];
          }
          sub_B2C2F8(v182, v174, v168, v169, v170, v171, v172, v173);
          StatusLong = (__int64)System_String__Concat_44385656(v118, 0LL);
          v107 = voicePlayedArray;
          v109 = (System_Int32_array **)StatusLong;
        }
        LODWORD(v108) = v107->max_length;
        if ( (__int64)++v110 >= (int)v108 )
          goto LABEL_106;
      }
      goto LABEL_115;
    }
LABEL_106:
    v183 = System_String__Concat_44307816(
             (System_String_o *)StringLiteral_15634/*"["*/,
             (System_String_o *)v109,
             (System_String_o *)StringLiteral_15870/*"]"*/,
             0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v71,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23181/*"voicePlayedList"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v183,
      (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22989/*"usedTurnList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedTurnArray,
    (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v184 = (MiniMessagePack_MiniMessagePacker_o *)sub_B2C42C(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v184, 0LL);
  if ( !v184 )
    goto LABEL_116;
  v185 = MiniMessagePack_MiniMessagePacker__PackClass(v184, (Il2CppObject *)v71, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v186 = CatAndMouseGame__CatGame5Bytes(v185, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v187 = System_Convert__ToBase64String(v186, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_21798/*"result"*/, v187, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4187F28 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v5);
    byte_4187F28 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B2C434(0LL, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)paramString,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v7,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v7,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4187F25 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9157/*"MockBattleResultRequest"*/, v2);
    byte_4187F25 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9157/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4187F24 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_16633/*"battle/result"*/, v2);
    byte_4187F24 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_16633/*"battle/result"*/, 0LL);
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

  if ( (byte_4187F27 & 1) == 0 )
  {
    sub_B2C35C(&JsonManager_TypeInfo, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&ServantCommentManager_TypeInfo, v6);
    sub_B2C35C(&TopHomeRequest_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v8);
    byte_4187F27 = 1;
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
    && (v10 = v9, ResponseData__checkError_31019724(v9, 0LL))
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
    v12 = (System_String_o *)StringLiteral_21068/*"ng"*/;
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v22; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v23; // x21
  System_Collections_Generic_Dictionary_int__int__o *v24; // x21
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  struct System_Int32_array *v26; // x0
  struct System_Int64_array *v27; // x0
  struct System_Int32_array *v28; // x0

  if ( (byte_418509F & 1) == 0 )
  {
    sub_B2C35C(&BattleData_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B2C35C(&int_____TypeInfo, v7);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&long___TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v11);
    sub_B2C35C(&BattleResultRequest_RaidResult___TypeInfo, v12);
    sub_B2C35C(&BattleResultRequest_SuperBossResult___TypeInfo, v13);
    sub_B2C35C(&StringLiteral_1/*""*/, v14);
    byte_418509F = 1;
  }
  v15 = StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.scores, v15);
  v16 = StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8(&this->fields.action, v16);
  v17 = (struct System_Int32_array_array *)sub_B2C374(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v17;
  sub_B2C2F8(&this->fields.voicePlayedArray, v17);
  v18 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v18;
  sub_B2C2F8(&this->fields.aliveUniqueIds, v18);
  v19 = (struct BattleResultRequest_RaidResult_array *)sub_B2C374(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v19;
  sub_B2C2F8(&this->fields.raidResult, v19);
  v20 = (struct BattleResultRequest_SuperBossResult_array *)sub_B2C374(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v20;
  sub_B2C2F8(&this->fields.superBossResult, v20);
  v21 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v21;
  sub_B2C2F8(&this->fields.usedTurnArray, v21);
  this->fields.recordType = 1;
  v22 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v22,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v22;
  sub_B2C2F8(&this->fields.recordJson, v22);
  v23 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v23,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v23;
  sub_B2C2F8(&this->fields.firstNpPlayList, v23);
  v24 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v24,
    (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v24;
  sub_B2C2F8(&this->fields.usedEquipSkillDict, v24);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_B2C2F8(&this->fields.svtCommonFlagDict, SavedServantCommonFlagDict);
  v26 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v26;
  sub_B2C2F8(&this->fields.skillShiftUniqueIds, v26);
  v27 = (struct System_Int64_array *)sub_B2C374(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v27;
  sub_B2C2F8(&this->fields.skillShiftNpcSvtIds, v27);
  v28 = (struct System_Int32_array *)sub_B2C374(int___TypeInfo, 0LL);
  this->fields.routeSelect = v28;
  sub_B2C2F8(&this->fields.routeSelect, v28);
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
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_39294544; // x23
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
  if ( (byte_418509D & 1) == 0 )
  {
    sub_B2C35C(&System_BitConverter_TypeInfo, method);
    sub_B2C35C(&Crc32_TypeInfo, v3);
    sub_B2C35C(&Method_System_Linq_Enumerable_Concat_byte___, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToArray_byte___, v5);
    this = (BattleResultRequest_Argument_o *)sub_B2C35C(&NetworkManager_TypeInfo, v6);
    byte_418509D = 1;
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
        v41 = sub_B2C460(this);
        sub_B2C400(v41, 0LL);
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
    sub_B2C434(this, method);
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
  Bytes_39294544 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(
                                                                          v29 + battleResult,
                                                                          0LL);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(v9, 0LL);
  v32 = System_Linq_Enumerable__Concat_byte_(
          Bytes_39294544,
          v31,
          (const MethodInfo_174233C *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(v26, 0LL);
  v34 = System_Linq_Enumerable__Concat_byte_(
          v32,
          v33,
          (const MethodInfo_174233C *)Method_System_Linq_Enumerable_Concat_byte___);
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v36 = System_Linq_Enumerable__Concat_byte_(
          v34,
          v35,
          (const MethodInfo_174233C *)Method_System_Linq_Enumerable_Concat_byte___);
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39294544(v15, 0LL);
  v38 = System_Linq_Enumerable__Concat_byte_(
          v36,
          v37,
          (const MethodInfo_174233C *)Method_System_Linq_Enumerable_Concat_byte___);
  v39 = System_Linq_Enumerable__ToArray_byte_(
          v38,
          (const MethodInfo_1A9AD0C *)Method_System_Linq_Enumerable_ToArray_byte___);
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
  if ( (byte_418509E & 1) == 0 )
  {
    sub_B2C35C(&string___TypeInfo, method);
    sub_B2C35C(&StringLiteral_746/*",["*/, v3);
    sub_B2C35C(&StringLiteral_699/*","*/, v4);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v5);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    this = (BattleResultRequest_Argument_o *)sub_B2C35C(&StringLiteral_15870/*"]"*/, v7);
    byte_418509E = 1;
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
          this = (BattleResultRequest_Argument_o *)sub_B2C374(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_65;
          v13 = this;
          this = (BattleResultRequest_Argument_o *)StringLiteral_15634/*"["*/;
          if ( StringLiteral_15634/*"["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(StringLiteral_15634/*"["*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v14 = StringLiteral_15634/*"["*/;
          }
          else
          {
            v14 = 0LL;
          }
          if ( !v13->fields.battleResult )
            goto LABEL_67;
          v13->fields.scores = (struct System_String_o *)v14;
          sub_B2C2F8(&v13->fields.scores, v14);
          if ( !v12->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          v16 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(this, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v13->fields.battleResult <= 1u )
            goto LABEL_67;
          v13->fields.action = (struct System_String_o *)v16;
          sub_B2C2F8(&v13->fields.action, v16);
          this = (BattleResultRequest_Argument_o *)StringLiteral_699/*","*/;
          if ( StringLiteral_699/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(StringLiteral_699/*","*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v17 = StringLiteral_699/*","*/;
          }
          else
          {
            v17 = 0LL;
          }
          if ( v13->fields.battleResult <= 2u )
            goto LABEL_67;
          v13->fields.voicePlayedArray = (struct System_Int32_array_array *)v17;
          sub_B2C2F8(&v13->fields.voicePlayedArray, v17);
          if ( v12->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL);
          v20 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(this, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v13->fields.battleResult <= 3u )
            goto LABEL_67;
          v13->fields.aliveUniqueIds = (struct System_Int32_array *)v20;
          sub_B2C2F8(&v13->fields.aliveUniqueIds, v20);
          this = (BattleResultRequest_Argument_o *)StringLiteral_15870/*"]"*/;
          if ( StringLiteral_15870/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(StringLiteral_15870/*"]"*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v21 = StringLiteral_15870/*"]"*/;
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
          this = (BattleResultRequest_Argument_o *)sub_B2C374(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_65;
          v13 = this;
          if ( v9 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(v9, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_68:
              v26 = sub_B2C454();
              sub_B2C400(v26, 0LL);
            }
          }
          if ( !v13->fields.battleResult )
            goto LABEL_67;
          v13->fields.scores = v9;
          sub_B2C2F8(&v13->fields.scores, v9);
          this = (BattleResultRequest_Argument_o *)StringLiteral_746/*",["*/;
          if ( StringLiteral_746/*",["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(StringLiteral_746/*",["*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v15 = StringLiteral_746/*",["*/;
          }
          else
          {
            v15 = 0LL;
          }
          if ( v13->fields.battleResult <= 1u )
            goto LABEL_67;
          v13->fields.action = (struct System_String_o *)v15;
          sub_B2C2F8(&v13->fields.action, v15);
          if ( !v12->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 32, 0LL);
          v18 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(this, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v13->fields.battleResult <= 2u )
            goto LABEL_67;
          v13->fields.voicePlayedArray = (struct System_Int32_array_array *)v18;
          sub_B2C2F8(&v13->fields.voicePlayedArray, v18);
          this = (BattleResultRequest_Argument_o *)StringLiteral_699/*","*/;
          if ( StringLiteral_699/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(StringLiteral_699/*","*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v19 = StringLiteral_699/*","*/;
          }
          else
          {
            v19 = 0LL;
          }
          if ( v13->fields.battleResult <= 3u )
            goto LABEL_67;
          v13->fields.aliveUniqueIds = (struct System_Int32_array *)v19;
          sub_B2C2F8(&v13->fields.aliveUniqueIds, v19);
          if ( v12->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v12 + 36, 0LL);
          v22 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(this, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v13->fields.battleResult <= 4u )
            goto LABEL_67;
          v13->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v22;
          sub_B2C2F8(&v13->fields.raidResult, v22);
          this = (BattleResultRequest_Argument_o *)StringLiteral_15870/*"]"*/;
          if ( StringLiteral_15870/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B2C41C(StringLiteral_15870/*"]"*/, v13->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v21 = StringLiteral_15870/*"]"*/;
          }
          else
          {
            v21 = 0LL;
          }
          if ( v13->fields.battleResult <= 5u )
          {
LABEL_67:
            v25 = sub_B2C460(this);
            sub_B2C400(v25, 0LL);
          }
          v13->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)v21;
          p_raidResult = &v13->fields.superBossResult;
        }
        sub_B2C2F8(p_raidResult, v21);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_44385656((System_String_array *)v13, 0LL);
        v9 = (System_String_o *)this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v10;
      if ( !voicePlayedArray )
LABEL_65:
        sub_B2C434(this, method);
    }
  }
  return System_String__Concat_44307816(
           (System_String_o *)StringLiteral_15634/*"["*/,
           v9,
           (System_String_o *)StringLiteral_15870/*"]"*/,
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