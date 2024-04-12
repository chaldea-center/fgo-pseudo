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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v26; // x21
  __int64 StatusLong; // x0
  __int64 v28; // x1
  System_Xml_Schema_XmlSchemaObject_o *v29; // x0
  System_Xml_Schema_XmlSchemaObject_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x0
  System_Xml_Schema_XmlSchemaObject_o *v33; // x0
  System_Xml_Schema_XmlSchemaObject_o *v34; // x0
  WarBoardUiData_SaveData_array *v35; // x0
  System_String_o *v36; // x0
  System_String_o *v37; // x0
  signed int max_length; // w8
  signed int v39; // w19
  __int64 v40; // x20
  signed int v41; // w8
  signed int v42; // w19
  __int64 v43; // x22
  unsigned __int64 v44; // x8
  __int64 v45; // x23
  unsigned __int64 v46; // x9
  __int64 v47; // x12
  int64_t UserId; // x19
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_40259420; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v51; // x0
  __int64 v52; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v58; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Byte_array *v60; // x19
  System_Xml_Schema_XmlSchemaObject_o *v61; // x0
  System_Int32_array_array *v62; // x10
  __int64 v63; // x8
  System_Int32_array **v64; // x22
  unsigned __int64 v65; // x20
  System_Int32_array *v66; // x25
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_String_array *v73; // x19
  System_Int32_array **v74; // x1
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x22
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x1
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x22
  System_String_array **v109; // x2
  System_String_array **v110; // x3
  System_Boolean_array **v111; // x4
  System_Int32_array **v112; // x5
  System_Int32_array *v113; // x6
  System_Int32_array *v114; // x7
  System_Int32_array **v115; // x1
  System_String_array **v116; // x2
  System_String_array **v117; // x3
  System_Boolean_array **v118; // x4
  System_Int32_array **v119; // x5
  System_Int32_array *v120; // x6
  System_Int32_array *v121; // x7
  System_Int32_array **v122; // x22
  System_String_array **v123; // x2
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_Int32_array **v129; // x1
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  System_Int32_array **v136; // x22
  BattleServantConfConponent_o *v137; // x0
  System_String_o *v138; // x0
  MiniMessagePack_MiniMessagePacker_o *v139; // x19
  System_Byte_array *v140; // x19
  System_Byte_array *v141; // x19
  System_String_o *v142; // x0
  __int64 v143; // x0
  __int64 v144; // x0
  int64_t v146; // [xsp+8h] [xbp-98h]
  int32_t v152; // [xsp+38h] [xbp-68h] BYREF
  int32_t v153; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t v154; // [xsp+40h] [xbp-60h] BYREF
  int32_t v155; // [xsp+44h] [xbp-5Ch] BYREF
  int64_t v156; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42B0301 & 1) == 0 )
  {
    sub_B52984(&System_BitConverter_TypeInfo);
    sub_B52984(&CatAndMouseGame_TypeInfo);
    sub_B52984(&System_Convert_TypeInfo);
    sub_B52984(&Crc32_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_byte___);
    sub_B52984(&int_TypeInfo);
    sub_B52984(&long_TypeInfo);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_B52984(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&uint_TypeInfo);
    sub_B52984(&StringLiteral_22041/*"routeSelect"*/);
    sub_B52984(&StringLiteral_21980/*"result"*/);
    sub_B52984(&StringLiteral_21904/*"recordValueJson"*/);
    sub_B52984(&StringLiteral_17297/*"calledEnemyUniqueIds"*/);
    sub_B52984(&StringLiteral_22333/*"skillShiftNpcSvtIds"*/);
    sub_B52984(&StringLiteral_21856/*"raidResult"*/);
    sub_B52984(&StringLiteral_23176/*"useTreasureDevices"*/);
    sub_B52984(&StringLiteral_21903/*"recordType"*/);
    sub_B52984(&StringLiteral_756/*",["*/);
    sub_B52984(&StringLiteral_22334/*"skillShiftUniqueIds"*/);
    sub_B52984(&StringLiteral_17999/*"dataLostUniqueIds"*/);
    sub_B52984(&StringLiteral_23178/*"usedEquipSkillList"*/);
    sub_B52984(&StringLiteral_18422/*"elapsedTurn"*/);
    sub_B52984(&StringLiteral_23179/*"usedTurnList"*/);
    sub_B52984(&StringLiteral_22653/*"svtCommonFlagList"*/);
    sub_B52984(&StringLiteral_22106/*"scores"*/);
    sub_B52984(&StringLiteral_16772/*"battleStatus"*/);
    sub_B52984(&StringLiteral_709/*","*/);
    sub_B52984(&StringLiteral_22813/*"tdPlayed"*/);
    sub_B52984(&StringLiteral_23373/*"voicePlayedList"*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_23475/*"winResult"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_22637/*"superBossResult"*/);
    sub_B52984(&StringLiteral_15976/*"]"*/);
    sub_B52984(&StringLiteral_16764/*"battleId"*/);
    sub_B52984(&StringLiteral_16766/*"battleResult"*/);
    sub_B52984(&StringLiteral_16343/*"action"*/);
    sub_B52984(&StringLiteral_16417/*"aliveUniqueIds"*/);
    byte_42B0301 = 1;
  }
  v26 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v26,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v146 = battleId;
  v156 = battleId;
  StatusLong = j_il2cpp_value_box_0(long_TypeInfo, &v156);
  if ( !v26 )
    goto LABEL_116;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16764/*"battleId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)StatusLong,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v155 = battleResult;
  v29 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v155);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16766/*"battleResult"*/,
    v29,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v154 = winResult;
  v30 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v154);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23475/*"winResult"*/,
    v30,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22106/*"scores"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)scores,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16343/*"action"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)action,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v31 = JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21856/*"raidResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v31,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v32 = JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22637/*"superBossResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v32,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v153 = elapsedTurn;
  v33 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v153);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18422/*"elapsedTurn"*/,
    v33,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v152 = recordType;
  v34 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v152);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21903/*"recordType"*/,
    v34,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21904/*"recordValueJson"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)recordJson,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_116;
  v35 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)firstNpPlayList,
          (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v36 = JsonManager__toJson(&v35->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22813/*"tdPlayed"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v36,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_116;
  v37 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23176/*"useTreasureDevices"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v37,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23178/*"usedEquipSkillList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedEquipSkillDict,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22653/*"svtCommonFlagList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)svtCommonFlagDict,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22334/*"skillShiftUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftUniqueIdArray,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22333/*"skillShiftNpcSvtIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftNpcSvtIdArray,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17297/*"calledEnemyUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)calledEnemyUniqueIdArray,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22041/*"routeSelect"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)routeSelectIdArray,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17999/*"dataLostUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)dataLostUniqueIdArray,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_116;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v40 = 0LL;
    if ( !superBossResult )
      goto LABEL_116;
  }
  else
  {
    v39 = 0;
    v40 = 0LL;
    do
    {
      if ( v39 >= (unsigned int)max_length )
        goto LABEL_115;
      StatusLong = (__int64)raidResult->m_Items[v39];
      if ( !StatusLong )
        goto LABEL_116;
      StatusLong = BattleResultRequest_RaidResult__getStatusLong((BattleResultRequest_RaidResult_o *)StatusLong, 0LL);
      max_length = raidResult->max_length;
      ++v39;
      v40 += StatusLong;
    }
    while ( v39 < max_length );
    if ( !superBossResult )
LABEL_116:
      sub_B52A5C(StatusLong, v28);
  }
  v41 = superBossResult->max_length;
  if ( v41 >= 1 )
  {
    v42 = 0;
    v43 = 0LL;
    while ( v42 < (unsigned int)v41 )
    {
      StatusLong = (__int64)superBossResult->m_Items[v42];
      if ( !StatusLong )
        goto LABEL_116;
      StatusLong = BattleResultRequest_SuperBossResult__getStatusLong(
                     (BattleResultRequest_SuperBossResult_o *)StatusLong,
                     0LL);
      v41 = superBossResult->max_length;
      ++v42;
      v43 += StatusLong;
      if ( v42 >= v41 )
        goto LABEL_25;
    }
LABEL_115:
    v143 = sub_B52A88(StatusLong);
    sub_B52A28(v143, 0LL);
  }
  v43 = 0LL;
LABEL_25:
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16417/*"aliveUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)aliveUniqueIds,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_116;
  v44 = aliveUniqueIds->max_length;
  if ( (__int64)(v44 << 32) >= 1 )
  {
    v45 = 0LL;
    v46 = 0LL;
    while ( v46 < v44 )
    {
      v47 = aliveUniqueIds->m_Items[++v46];
      v45 += v47;
      if ( (__int64)v46 >= (int)v44 )
        goto LABEL_32;
    }
    goto LABEL_115;
  }
  v45 = 0LL;
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
  Bytes_40259420 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(
                                                                          UserId + battleResult,
                                                                          0LL);
  v50 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(v40 - 4231125, 0LL);
  v51 = System_Linq_Enumerable__Concat_byte_(
          Bytes_40259420,
          v50,
          (const MethodInfo_1B5B9D8 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v45 >= 0 )
    v52 = v45;
  else
    v52 = v45 + 1;
  v53 = v51;
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(v52 >> 1, 0LL);
  v55 = System_Linq_Enumerable__Concat_byte_(
          v53,
          v54,
          (const MethodInfo_1B5B9D8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(
                                                               v146 - 0x7FFFFFFF,
                                                               0LL);
  v57 = System_Linq_Enumerable__Concat_byte_(
          v55,
          v56,
          (const MethodInfo_1B5B9D8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v58 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(v43 - 2469110, 0LL);
  v59 = System_Linq_Enumerable__Concat_byte_(
          v57,
          v58,
          (const MethodInfo_1B5B9D8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v60 = System_Linq_Enumerable__ToArray_byte_(
          v59,
          (const MethodInfo_1B6E354 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v156) = Crc32__Compute(v60, 0LL);
  v61 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(uint_TypeInfo, &v156);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16772/*"battleStatus"*/,
    v61,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v62 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v63 = *(_QWORD *)&voicePlayedArray->max_length;
    v64 = (System_Int32_array **)StringLiteral_1/*""*/;
    if ( (int)v63 >= 1 )
    {
      v65 = 0LL;
      while ( v65 < (unsigned int)v63 )
      {
        v66 = voicePlayedArray->m_Items[v65];
        if ( v66 && v66->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty((System_String_o *)v64, 0LL) )
          {
            StatusLong = sub_B5299C(string___TypeInfo, 5LL);
            if ( !StatusLong )
              goto LABEL_116;
            v73 = (System_String_array *)StatusLong;
            StatusLong = StringLiteral_15739/*"["*/;
            if ( StringLiteral_15739/*"["*/ )
            {
              StatusLong = sub_B52A44(StringLiteral_15739/*"["*/, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v74 = (System_Int32_array **)StringLiteral_15739/*"["*/;
            }
            else
            {
              v74 = 0LL;
            }
            if ( !v73->max_length )
              goto LABEL_115;
            v73->m_Items[0] = (System_String_o *)v74;
            sub_B52920((BattleServantConfConponent_o *)v73->m_Items, v74, v67, v68, v69, v70, v71, v72);
            if ( !v66->max_length )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v66 + 32, 0LL);
            v94 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B52A44(StatusLong, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v73->max_length <= 1 )
              goto LABEL_115;
            v73->m_Items[1] = (System_String_o *)v94;
            sub_B52920((BattleServantConfConponent_o *)&v73->m_Items[1], v94, v88, v89, v90, v91, v92, v93);
            StatusLong = StringLiteral_709/*","*/;
            if ( StringLiteral_709/*","*/ )
            {
              StatusLong = sub_B52A44(StringLiteral_709/*","*/, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v101 = (System_Int32_array **)StringLiteral_709/*","*/;
            }
            else
            {
              v101 = 0LL;
            }
            if ( v73->max_length <= 2 )
              goto LABEL_115;
            v73->m_Items[2] = (System_String_o *)v101;
            sub_B52920((BattleServantConfConponent_o *)&v73->m_Items[2], v101, v95, v96, v97, v98, v99, v100);
            if ( v66->max_length <= 1 )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v66 + 36, 0LL);
            v122 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B52A44(StatusLong, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v73->max_length <= 3 )
              goto LABEL_115;
            v73->m_Items[3] = (System_String_o *)v122;
            sub_B52920((BattleServantConfConponent_o *)&v73->m_Items[3], v122, v116, v117, v118, v119, v120, v121);
            StatusLong = StringLiteral_15976/*"]"*/;
            if ( StringLiteral_15976/*"]"*/ )
            {
              StatusLong = sub_B52A44(StringLiteral_15976/*"]"*/, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v129 = (System_Int32_array **)StringLiteral_15976/*"]"*/;
            }
            else
            {
              v129 = 0LL;
            }
            if ( v73->max_length <= 4 )
              goto LABEL_115;
            v73->m_Items[4] = (System_String_o *)v129;
            v137 = (BattleServantConfConponent_o *)&v73->m_Items[4];
          }
          else
          {
            StatusLong = sub_B5299C(string___TypeInfo, 6LL);
            if ( !StatusLong )
              goto LABEL_116;
            v73 = (System_String_array *)StatusLong;
            if ( v64 )
            {
              StatusLong = sub_B52A44(v64, *(_QWORD *)(*(_QWORD *)StatusLong + 64LL));
              if ( !StatusLong )
              {
LABEL_117:
                v144 = sub_B52A7C(StatusLong);
                sub_B52A28(v144, 0LL);
              }
            }
            if ( !v73->max_length )
              goto LABEL_115;
            v73->m_Items[0] = (System_String_o *)v64;
            sub_B52920((BattleServantConfConponent_o *)v73->m_Items, v64, v75, v76, v77, v78, v79, v80);
            StatusLong = StringLiteral_756/*",["*/;
            if ( StringLiteral_756/*",["*/ )
            {
              StatusLong = sub_B52A44(StringLiteral_756/*",["*/, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v87 = (System_Int32_array **)StringLiteral_756/*",["*/;
            }
            else
            {
              v87 = 0LL;
            }
            if ( v73->max_length <= 1 )
              goto LABEL_115;
            v73->m_Items[1] = (System_String_o *)v87;
            sub_B52920((BattleServantConfConponent_o *)&v73->m_Items[1], v87, v81, v82, v83, v84, v85, v86);
            if ( !v66->max_length )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v66 + 32, 0LL);
            v108 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B52A44(StatusLong, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v73->max_length <= 2 )
              goto LABEL_115;
            v73->m_Items[2] = (System_String_o *)v108;
            sub_B52920((BattleServantConfConponent_o *)&v73->m_Items[2], v108, v102, v103, v104, v105, v106, v107);
            StatusLong = StringLiteral_709/*","*/;
            if ( StringLiteral_709/*","*/ )
            {
              StatusLong = sub_B52A44(StringLiteral_709/*","*/, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v115 = (System_Int32_array **)StringLiteral_709/*","*/;
            }
            else
            {
              v115 = 0LL;
            }
            if ( v73->max_length <= 3 )
              goto LABEL_115;
            v73->m_Items[3] = (System_String_o *)v115;
            sub_B52920((BattleServantConfConponent_o *)&v73->m_Items[3], v115, v109, v110, v111, v112, v113, v114);
            if ( v66->max_length <= 1 )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v66 + 36, 0LL);
            v136 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B52A44(StatusLong, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v73->max_length <= 4 )
              goto LABEL_115;
            v73->m_Items[4] = (System_String_o *)v136;
            sub_B52920((BattleServantConfConponent_o *)&v73->m_Items[4], v136, v130, v131, v132, v133, v134, v135);
            StatusLong = StringLiteral_15976/*"]"*/;
            if ( StringLiteral_15976/*"]"*/ )
            {
              StatusLong = sub_B52A44(StringLiteral_15976/*"]"*/, v73->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v129 = (System_Int32_array **)StringLiteral_15976/*"]"*/;
            }
            else
            {
              v129 = 0LL;
            }
            if ( v73->max_length <= 5 )
              goto LABEL_115;
            v73->m_Items[5] = (System_String_o *)v129;
            v137 = (BattleServantConfConponent_o *)&v73->m_Items[5];
          }
          sub_B52920(v137, v129, v123, v124, v125, v126, v127, v128);
          StatusLong = (__int64)System_String__Concat_44648440(v73, 0LL);
          v62 = voicePlayedArray;
          v64 = (System_Int32_array **)StatusLong;
        }
        LODWORD(v63) = v62->max_length;
        if ( (__int64)++v65 >= (int)v63 )
          goto LABEL_106;
      }
      goto LABEL_115;
    }
LABEL_106:
    v138 = System_String__Concat_44570600(
             (System_String_o *)StringLiteral_15739/*"["*/,
             (System_String_o *)v64,
             (System_String_o *)StringLiteral_15976/*"]"*/,
             0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v26,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23373/*"voicePlayedList"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v138,
      (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v26,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23179/*"usedTurnList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedTurnArray,
    (const MethodInfo_2F1B800 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v139 = (MiniMessagePack_MiniMessagePacker_o *)sub_B52A54(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v139, 0LL);
  if ( !v139 )
    goto LABEL_116;
  v140 = MiniMessagePack_MiniMessagePacker__PackClass(v139, (Il2CppObject *)v26, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v141 = CatAndMouseGame__CatGame5Bytes(v140, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v142 = System_Convert__ToBase64String(v141, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_21980/*"result"*/, v142, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42B0303 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    byte_42B0303 = 1;
  }
  memset(&v4, 0, sizeof(v4));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B52A5C(0LL, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)paramString,
    (const MethodInfo_2F1BDDC *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v4,
            (const MethodInfo_274E62C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v4,
    (const MethodInfo_274E794 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_42B0300 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_9213/*"MockBattleResultRequest"*/);
    byte_42B0300 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9213/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B02FF & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_16748/*"battle/result"*/);
    byte_42B02FF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_16748/*"battle/result"*/, 0LL);
}


void __fastcall BattleResultRequest__requestCompleted(
        BattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_42B0302 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&ServantCommentManager_TypeInfo);
    sub_B52984(&TopHomeRequest_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B0302 = 1;
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
  v5 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL))
    && (success = (Il2CppObject *)v6->fields.success) != 0LL )
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__UpdateChapter(0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}


void __fastcall BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v3; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x21
  System_Collections_Generic_Dictionary_int__int__o *v5; // x21

  if ( (byte_42AD834 & 1) == 0 )
  {
    sub_B52984(&BattleData_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B52984(&int_____TypeInfo);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&long___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_B52984(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_B52984(&BattleResultRequest_RaidResult___TypeInfo);
    sub_B52984(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD834 = 1;
  }
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(&this->fields.scores);
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B52920(&this->fields.action);
  this->fields.voicePlayedArray = (struct System_Int32_array_array *)sub_B5299C(int_____TypeInfo, 0LL);
  sub_B52920(&this->fields.voicePlayedArray);
  this->fields.aliveUniqueIds = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  sub_B52920(&this->fields.aliveUniqueIds);
  this->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)sub_B5299C(
                                                                             BattleResultRequest_RaidResult___TypeInfo,
                                                                             0LL);
  sub_B52920(&this->fields.raidResult);
  this->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)sub_B5299C(
                                                                                       BattleResultRequest_SuperBossResult___TypeInfo,
                                                                                       0LL);
  sub_B52920(&this->fields.superBossResult);
  this->fields.usedTurnArray = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  sub_B52920(&this->fields.usedTurnArray);
  this->fields.recordType = 1;
  v3 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B52A54(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v3,
    (const MethodInfo_2F1AC50 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v3;
  sub_B52920(&this->fields.recordJson);
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v4;
  sub_B52920(&this->fields.firstNpPlayList);
  v5 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v5,
    (const MethodInfo_2EFEEF8 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v5;
  sub_B52920(&this->fields.usedEquipSkillDict);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  this->fields.svtCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  sub_B52920(&this->fields.svtCommonFlagDict);
  this->fields.skillShiftUniqueIds = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  sub_B52920(&this->fields.skillShiftUniqueIds);
  this->fields.skillShiftNpcSvtIds = (struct System_Int64_array *)sub_B5299C(long___TypeInfo, 0LL);
  sub_B52920(&this->fields.skillShiftNpcSvtIds);
  this->fields.routeSelect = (struct System_Int32_array *)sub_B5299C(int___TypeInfo, 0LL);
  sub_B52920(&this->fields.routeSelect);
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
  struct System_Int32_array *aliveUniqueIds; // x12
  unsigned __int64 v16; // x8
  __int64 v17; // x9
  unsigned __int64 v18; // x10
  int32_t *v19; // x12
  __int64 v20; // x13
  __int64 v21; // x8
  __int64 v22; // x22
  int64_t UserId; // x0
  __int64 battleResult; // x24
  int64_t v25; // x23
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_40259420; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Byte_array *v35; // x19
  __int64 v37; // x0

  v2 = this;
  if ( (byte_42AD832 & 1) == 0 )
  {
    sub_B52984(&System_BitConverter_TypeInfo);
    sub_B52984(&Crc32_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_byte___);
    this = (BattleResultRequest_Argument_o *)sub_B52984(&NetworkManager_TypeInfo);
    byte_42AD832 = 1;
  }
  raidResult = v2->fields.raidResult;
  if ( !raidResult )
    goto LABEL_38;
  max_length = raidResult->max_length;
  v5 = -4231125LL;
  if ( max_length >= 1 )
  {
    v6 = 0;
    v7 = 0LL;
    do
    {
      if ( v6 >= (unsigned int)max_length )
      {
LABEL_37:
        v37 = sub_B52A88(this);
        sub_B52A28(v37, 0LL);
      }
      v8 = (int *)raidResult->m_Items[v6];
      if ( !v8 )
        goto LABEL_38;
      ++v6;
      v7 += v8[6] + (__int64)v8[5] + v8[4];
    }
    while ( v6 < max_length );
    v5 = v7 - 4231125;
  }
  superBossResult = v2->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_38;
  v10 = superBossResult->max_length;
  v11 = -2469110LL;
  if ( v10 >= 1 )
  {
    v12 = 0;
    v13 = 0LL;
    do
    {
      if ( v12 >= (unsigned int)v10 )
        goto LABEL_37;
      v14 = (int *)superBossResult->m_Items[v12];
      if ( !v14 )
        goto LABEL_38;
      ++v12;
      v13 += v14[6] + (__int64)v14[4] + v14[5];
    }
    while ( v12 < v10 );
    v11 = v13 - 2469110;
  }
  aliveUniqueIds = v2->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_38:
    sub_B52A5C(this, method);
  v16 = aliveUniqueIds->max_length;
  if ( (__int64)(v16 << 32) < 1 )
  {
    v22 = 0LL;
  }
  else
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = &aliveUniqueIds->m_Items[1];
    do
    {
      if ( v18 >= v16 )
        goto LABEL_37;
      v20 = v19[v18++];
      v17 += v20;
    }
    while ( (__int64)v18 < (int)v16 );
    if ( v17 >= 0 )
      v21 = v17;
    else
      v21 = v17 + 1;
    v22 = v21 >> 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  battleResult = v2->fields.battleResult;
  v25 = UserId;
  if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_BitConverter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
  }
  Bytes_40259420 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(
                                                                          v25 + battleResult,
                                                                          0LL);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(v5, 0LL);
  v28 = System_Linq_Enumerable__Concat_byte_(
          Bytes_40259420,
          v27,
          (const MethodInfo_1B5B9D8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(v22, 0LL);
  v30 = System_Linq_Enumerable__Concat_byte_(
          v28,
          v29,
          (const MethodInfo_1B5B9D8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v32 = System_Linq_Enumerable__Concat_byte_(
          v30,
          v31,
          (const MethodInfo_1B5B9D8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40259420(v11, 0LL);
  v34 = System_Linq_Enumerable__Concat_byte_(
          v32,
          v33,
          (const MethodInfo_1B5B9D8 *)Method_System_Linq_Enumerable_Concat_byte___);
  v35 = System_Linq_Enumerable__ToArray_byte_(
          v34,
          (const MethodInfo_1B6E354 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  return Crc32__Compute(v35, 0LL);
}


System_String_o *__fastcall BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  BattleResultRequest_Argument_o *v2; // x19
  struct System_Int32_array_array *voicePlayedArray; // x8
  System_String_o *v4; // x21
  unsigned __int64 v5; // x22
  unsigned __int64 max_length; // x9
  System_Int32_array *v7; // x28
  BattleResultRequest_Argument_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x1
  BattleResultRequest_Argument_o *v11; // x21
  __int64 v12; // x1
  BattleResultRequest_Argument_o *v13; // x21
  __int64 v14; // x1
  BattleResultRequest_Argument_o *v15; // x21
  __int64 v16; // x1
  BattleResultRequest_Argument_o *v17; // x21
  __int64 v18; // x1
  void *p_raidResult; // x0
  __int64 v21; // x0
  __int64 v22; // x0

  v2 = this;
  if ( (byte_42AD833 & 1) == 0 )
  {
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_756/*",["*/);
    sub_B52984(&StringLiteral_709/*","*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_1/*""*/);
    this = (BattleResultRequest_Argument_o *)sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42AD833 = 1;
  }
  voicePlayedArray = v2->fields.voicePlayedArray;
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  if ( voicePlayedArray )
  {
    v5 = 0LL;
    while ( 1 )
    {
      max_length = voicePlayedArray->max_length;
      if ( (__int64)v5 >= (int)max_length )
        break;
      if ( v5 >= max_length )
        goto LABEL_67;
      v7 = voicePlayedArray->m_Items[v5];
      if ( v7 && v7->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty(v4, 0LL) )
        {
          this = (BattleResultRequest_Argument_o *)sub_B5299C(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_65;
          v8 = this;
          this = (BattleResultRequest_Argument_o *)StringLiteral_15739/*"["*/;
          if ( StringLiteral_15739/*"["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(StringLiteral_15739/*"["*/, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v9 = StringLiteral_15739/*"["*/;
          }
          else
          {
            v9 = 0LL;
          }
          if ( !v8->fields.battleResult )
            goto LABEL_67;
          v8->fields.scores = (struct System_String_o *)v9;
          sub_B52920(&v8->fields.scores);
          if ( !v7->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0LL);
          v11 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(this, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v8->fields.battleResult <= 1u )
            goto LABEL_67;
          v8->fields.action = (struct System_String_o *)v11;
          sub_B52920(&v8->fields.action);
          this = (BattleResultRequest_Argument_o *)StringLiteral_709/*","*/;
          if ( StringLiteral_709/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(StringLiteral_709/*","*/, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v12 = StringLiteral_709/*","*/;
          }
          else
          {
            v12 = 0LL;
          }
          if ( v8->fields.battleResult <= 2u )
            goto LABEL_67;
          v8->fields.voicePlayedArray = (struct System_Int32_array_array *)v12;
          sub_B52920(&v8->fields.voicePlayedArray);
          if ( v7->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0LL);
          v15 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(this, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v8->fields.battleResult <= 3u )
            goto LABEL_67;
          v8->fields.aliveUniqueIds = (struct System_Int32_array *)v15;
          sub_B52920(&v8->fields.aliveUniqueIds);
          this = (BattleResultRequest_Argument_o *)StringLiteral_15976/*"]"*/;
          if ( StringLiteral_15976/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(StringLiteral_15976/*"]"*/, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v16 = StringLiteral_15976/*"]"*/;
          }
          else
          {
            v16 = 0LL;
          }
          if ( v8->fields.battleResult <= 4u )
            goto LABEL_67;
          v8->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v16;
          p_raidResult = &v8->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_B5299C(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_65;
          v8 = this;
          if ( v4 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(v4, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_68:
              v22 = sub_B52A7C();
              sub_B52A28(v22, 0LL);
            }
          }
          if ( !v8->fields.battleResult )
            goto LABEL_67;
          v8->fields.scores = v4;
          sub_B52920(&v8->fields.scores);
          this = (BattleResultRequest_Argument_o *)StringLiteral_756/*",["*/;
          if ( StringLiteral_756/*",["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(StringLiteral_756/*",["*/, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v10 = StringLiteral_756/*",["*/;
          }
          else
          {
            v10 = 0LL;
          }
          if ( v8->fields.battleResult <= 1u )
            goto LABEL_67;
          v8->fields.action = (struct System_String_o *)v10;
          sub_B52920(&v8->fields.action);
          if ( !v7->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0LL);
          v13 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(this, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v8->fields.battleResult <= 2u )
            goto LABEL_67;
          v8->fields.voicePlayedArray = (struct System_Int32_array_array *)v13;
          sub_B52920(&v8->fields.voicePlayedArray);
          this = (BattleResultRequest_Argument_o *)StringLiteral_709/*","*/;
          if ( StringLiteral_709/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(StringLiteral_709/*","*/, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v14 = StringLiteral_709/*","*/;
          }
          else
          {
            v14 = 0LL;
          }
          if ( v8->fields.battleResult <= 3u )
            goto LABEL_67;
          v8->fields.aliveUniqueIds = (struct System_Int32_array *)v14;
          sub_B52920(&v8->fields.aliveUniqueIds);
          if ( v7->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0LL);
          v17 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(this, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v8->fields.battleResult <= 4u )
            goto LABEL_67;
          v8->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v17;
          sub_B52920(&v8->fields.raidResult);
          this = (BattleResultRequest_Argument_o *)StringLiteral_15976/*"]"*/;
          if ( StringLiteral_15976/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B52A44(StringLiteral_15976/*"]"*/, v8->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v18 = StringLiteral_15976/*"]"*/;
          }
          else
          {
            v18 = 0LL;
          }
          if ( v8->fields.battleResult <= 5u )
          {
LABEL_67:
            v21 = sub_B52A88(this);
            sub_B52A28(v21, 0LL);
          }
          v8->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)v18;
          p_raidResult = &v8->fields.superBossResult;
        }
        sub_B52920(p_raidResult);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_44648440((System_String_array *)v8, 0LL);
        v4 = (System_String_o *)this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v5;
      if ( !voicePlayedArray )
LABEL_65:
        sub_B52A5C(this, method);
    }
  }
  return System_String__Concat_44570600(
           (System_String_o *)StringLiteral_15739/*"["*/,
           v4,
           (System_String_o *)StringLiteral_15976/*"]"*/,
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