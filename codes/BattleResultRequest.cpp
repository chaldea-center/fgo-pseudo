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
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v27; // x21
  __int64 v28; // x2
  __int64 StatusLong; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  System_Xml_Schema_XmlSchemaObject_o *v32; // x0
  __int64 v33; // x2
  System_Xml_Schema_XmlSchemaObject_o *v34; // x0
  System_String_o *v35; // x0
  System_String_o *v36; // x0
  __int64 v37; // x2
  System_Xml_Schema_XmlSchemaObject_o *v38; // x0
  __int64 v39; // x2
  System_Xml_Schema_XmlSchemaObject_o *v40; // x0
  WarBoardUiData_SaveData_array *v41; // x0
  System_String_o *v42; // x0
  System_String_o *v43; // x0
  signed int max_length; // w8
  signed int v45; // w19
  __int64 v46; // x20
  signed int v47; // w8
  signed int v48; // w19
  __int64 v49; // x22
  unsigned __int64 v50; // x8
  __int64 v51; // x23
  unsigned __int64 v52; // x9
  __int64 v53; // x12
  int64_t UserId; // x19
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_39886904; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v57; // x0
  __int64 v58; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v64; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v65; // x0
  System_Byte_array *v66; // x19
  __int64 v67; // x2
  System_Xml_Schema_XmlSchemaObject_o *v68; // x0
  System_Int32_array_array *v69; // x10
  __int64 v70; // x8
  System_String_o *v71; // x22
  unsigned __int64 v72; // x20
  System_Int32_array *v73; // x25
  System_String_array *v74; // x19
  __int64 v75; // x1
  __int64 v76; // x1
  System_String_o *v77; // x22
  __int64 v78; // x1
  System_String_o *v79; // x22
  __int64 v80; // x1
  System_String_o *v81; // x22
  __int64 v82; // x1
  System_String_o *v83; // x22
  __int64 v84; // x1
  System_String_o **v85; // x0
  System_String_o *v86; // x0
  System_String_o *v87; // x0
  MiniMessagePack_MiniMessagePacker_o *v88; // x19
  System_Byte_array *v89; // x19
  System_Byte_array *v90; // x19
  System_String_o *v91; // x0
  __int64 v92; // x0
  __int64 v93; // x0
  int64_t v95; // [xsp+8h] [xbp-98h]
  int32_t v101; // [xsp+38h] [xbp-68h] BYREF
  int32_t v102; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t v103; // [xsp+40h] [xbp-60h] BYREF
  int32_t v104; // [xsp+44h] [xbp-5Ch] BYREF
  int64_t v105; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_434EC22 & 1) == 0 )
  {
    sub_B70694(&System_BitConverter_TypeInfo);
    sub_B70694(&CatAndMouseGame_TypeInfo);
    sub_B70694(&System_Convert_TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_byte___);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&long_TypeInfo);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
    sub_B70694(&MiniMessagePack_MiniMessagePacker_TypeInfo);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&uint_TypeInfo);
    sub_B70694(&StringLiteral_22223/*"routeSelect"*/);
    sub_B70694(&StringLiteral_22162/*"result"*/);
    sub_B70694(&StringLiteral_22084/*"recordValueJson"*/);
    sub_B70694(&StringLiteral_17438/*"calledEnemyUniqueIds"*/);
    sub_B70694(&StringLiteral_22518/*"skillShiftNpcSvtIds"*/);
    sub_B70694(&StringLiteral_22036/*"raidResult"*/);
    sub_B70694(&StringLiteral_23363/*"useTreasureDevices"*/);
    sub_B70694(&StringLiteral_22083/*"recordType"*/);
    sub_B70694(&StringLiteral_759/*",["*/);
    sub_B70694(&StringLiteral_22519/*"skillShiftUniqueIds"*/);
    sub_B70694(&StringLiteral_18140/*"dataLostUniqueIds"*/);
    sub_B70694(&StringLiteral_23365/*"usedEquipSkillList"*/);
    sub_B70694(&StringLiteral_18566/*"elapsedTurn"*/);
    sub_B70694(&StringLiteral_23366/*"usedTurnList"*/);
    sub_B70694(&StringLiteral_22839/*"svtCommonFlagList"*/);
    sub_B70694(&StringLiteral_22288/*"scores"*/);
    sub_B70694(&StringLiteral_23635/*"waveInfo"*/);
    sub_B70694(&StringLiteral_16906/*"battleStatus"*/);
    sub_B70694(&StringLiteral_712/*","*/);
    sub_B70694(&StringLiteral_22999/*"tdPlayed"*/);
    sub_B70694(&StringLiteral_23562/*"voicePlayedList"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_23665/*"winResult"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_22823/*"superBossResult"*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    sub_B70694(&StringLiteral_16897/*"battleId"*/);
    sub_B70694(&StringLiteral_16900/*"battleResult"*/);
    sub_B70694(&StringLiteral_16472/*"action"*/);
    sub_B70694(&StringLiteral_16547/*"aliveUniqueIds"*/);
    byte_434EC22 = 1;
  }
  v27 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v27,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v95 = battleId;
  v105 = battleId;
  StatusLong = j_il2cpp_value_box_0(long_TypeInfo, &v105, v28);
  if ( !v27 )
    goto LABEL_119;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16897/*"battleId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)StatusLong,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v104 = battleResult;
  v32 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v104, v31);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16900/*"battleResult"*/,
    v32,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v103 = winResult;
  v34 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v103, v33);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23665/*"winResult"*/,
    v34,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22288/*"scores"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)scores,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16472/*"action"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)action,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v35 = JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22036/*"raidResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v35,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v36 = JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22823/*"superBossResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v36,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v102 = elapsedTurn;
  v38 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v102, v37);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18566/*"elapsedTurn"*/,
    v38,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v101 = recordType;
  v40 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v101, v39);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22083/*"recordType"*/,
    v40,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22084/*"recordValueJson"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)recordJson,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_119;
  v41 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)firstNpPlayList,
          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v42 = JsonManager__toJson(&v41->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22999/*"tdPlayed"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v42,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_119;
  v43 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23363/*"useTreasureDevices"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v43,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23365/*"usedEquipSkillList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedEquipSkillDict,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22839/*"svtCommonFlagList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)svtCommonFlagDict,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22519/*"skillShiftUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftUniqueIdArray,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22518/*"skillShiftNpcSvtIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftNpcSvtIdArray,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17438/*"calledEnemyUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)calledEnemyUniqueIdArray,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22223/*"routeSelect"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)routeSelectIdArray,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18140/*"dataLostUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)dataLostUniqueIdArray,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_119;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v46 = 0LL;
    if ( !superBossResult )
      goto LABEL_119;
  }
  else
  {
    v45 = 0;
    v46 = 0LL;
    do
    {
      if ( v45 >= (unsigned int)max_length )
        goto LABEL_118;
      StatusLong = (__int64)raidResult->m_Items[v45];
      if ( !StatusLong )
        goto LABEL_119;
      StatusLong = BattleResultRequest_RaidResult__getStatusLong((BattleResultRequest_RaidResult_o *)StatusLong, 0LL);
      max_length = raidResult->max_length;
      ++v45;
      v46 += StatusLong;
    }
    while ( v45 < max_length );
    if ( !superBossResult )
LABEL_119:
      sub_B7076C(StatusLong, v30);
  }
  v47 = superBossResult->max_length;
  if ( v47 >= 1 )
  {
    v48 = 0;
    v49 = 0LL;
    while ( v48 < (unsigned int)v47 )
    {
      StatusLong = (__int64)superBossResult->m_Items[v48];
      if ( !StatusLong )
        goto LABEL_119;
      StatusLong = BattleResultRequest_SuperBossResult__getStatusLong(
                     (BattleResultRequest_SuperBossResult_o *)StatusLong,
                     0LL);
      v47 = superBossResult->max_length;
      ++v48;
      v49 += StatusLong;
      if ( v48 >= v47 )
        goto LABEL_25;
    }
LABEL_118:
    v92 = sub_B70798(StatusLong);
    sub_B70738(v92, 0LL);
  }
  v49 = 0LL;
LABEL_25:
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16547/*"aliveUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)aliveUniqueIds,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_119;
  v50 = aliveUniqueIds->max_length;
  if ( (__int64)(v50 << 32) >= 1 )
  {
    v51 = 0LL;
    v52 = 0LL;
    while ( v52 < v50 )
    {
      v53 = aliveUniqueIds->m_Items[++v52];
      v51 += v53;
      if ( (__int64)v52 >= (int)v50 )
        goto LABEL_32;
    }
    goto LABEL_118;
  }
  v51 = 0LL;
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
  Bytes_39886904 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(
                                                                          UserId + battleResult,
                                                                          0LL);
  v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(v46 - 4231125, 0LL);
  v57 = System_Linq_Enumerable__Concat_byte_(
          Bytes_39886904,
          v56,
          (const MethodInfo_1CB51F4 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v51 >= 0 )
    v58 = v51;
  else
    v58 = v51 + 1;
  v59 = v57;
  v60 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(v58 >> 1, 0LL);
  v61 = System_Linq_Enumerable__Concat_byte_(
          v59,
          v60,
          (const MethodInfo_1CB51F4 *)Method_System_Linq_Enumerable_Concat_byte___);
  v62 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(
                                                               v95 - 0x7FFFFFFF,
                                                               0LL);
  v63 = System_Linq_Enumerable__Concat_byte_(
          v61,
          v62,
          (const MethodInfo_1CB51F4 *)Method_System_Linq_Enumerable_Concat_byte___);
  v64 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(v49 - 2469110, 0LL);
  v65 = System_Linq_Enumerable__Concat_byte_(
          v63,
          v64,
          (const MethodInfo_1CB51F4 *)Method_System_Linq_Enumerable_Concat_byte___);
  v66 = System_Linq_Enumerable__ToArray_byte_(
          v65,
          (const MethodInfo_1CC84D8 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v105) = Crc32__Compute(v66, 0LL);
  v68 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(uint_TypeInfo, &v105, v67);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16906/*"battleStatus"*/,
    v68,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v69 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v70 = *(_QWORD *)&voicePlayedArray->max_length;
    v71 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v70 >= 1 )
    {
      v72 = 0LL;
      while ( v72 < (unsigned int)v70 )
      {
        v73 = voicePlayedArray->m_Items[v72];
        if ( v73 && v73->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty(v71, 0LL) )
          {
            StatusLong = sub_B706AC(string___TypeInfo, 5LL);
            if ( !StatusLong )
              goto LABEL_119;
            v74 = (System_String_array *)StatusLong;
            StatusLong = StringLiteral_15855/*"["*/;
            if ( StringLiteral_15855/*"["*/ )
            {
              StatusLong = sub_B70754(StringLiteral_15855/*"["*/, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v75 = StringLiteral_15855/*"["*/;
            }
            else
            {
              v75 = 0LL;
            }
            if ( !v74->max_length )
              goto LABEL_118;
            v74->m_Items[0] = (System_String_o *)v75;
            sub_B70630(v74->m_Items);
            if ( !v73->max_length )
              goto LABEL_118;
            StatusLong = (__int64)System_Int32__ToString((int)v73 + 32, 0LL);
            v77 = (System_String_o *)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B70754(StatusLong, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
            }
            if ( v74->max_length <= 1 )
              goto LABEL_118;
            v74->m_Items[1] = v77;
            sub_B70630(&v74->m_Items[1]);
            StatusLong = StringLiteral_712/*","*/;
            if ( StringLiteral_712/*","*/ )
            {
              StatusLong = sub_B70754(StringLiteral_712/*","*/, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v78 = StringLiteral_712/*","*/;
            }
            else
            {
              v78 = 0LL;
            }
            if ( v74->max_length <= 2 )
              goto LABEL_118;
            v74->m_Items[2] = (System_String_o *)v78;
            sub_B70630(&v74->m_Items[2]);
            if ( v73->max_length <= 1 )
              goto LABEL_118;
            StatusLong = (__int64)System_Int32__ToString((int)v73 + 36, 0LL);
            v81 = (System_String_o *)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B70754(StatusLong, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
            }
            if ( v74->max_length <= 3 )
              goto LABEL_118;
            v74->m_Items[3] = v81;
            sub_B70630(&v74->m_Items[3]);
            StatusLong = StringLiteral_16092/*"]"*/;
            if ( StringLiteral_16092/*"]"*/ )
            {
              StatusLong = sub_B70754(StringLiteral_16092/*"]"*/, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v82 = StringLiteral_16092/*"]"*/;
            }
            else
            {
              v82 = 0LL;
            }
            if ( v74->max_length <= 4 )
              goto LABEL_118;
            v74->m_Items[4] = (System_String_o *)v82;
            v85 = &v74->m_Items[4];
          }
          else
          {
            StatusLong = sub_B706AC(string___TypeInfo, 6LL);
            if ( !StatusLong )
              goto LABEL_119;
            v74 = (System_String_array *)StatusLong;
            if ( v71 )
            {
              StatusLong = sub_B70754(v71, *(_QWORD *)(*(_QWORD *)StatusLong + 64LL));
              if ( !StatusLong )
              {
LABEL_120:
                v93 = sub_B7078C();
                sub_B70738(v93, 0LL);
              }
            }
            if ( !v74->max_length )
              goto LABEL_118;
            v74->m_Items[0] = v71;
            sub_B70630(v74->m_Items);
            StatusLong = StringLiteral_759/*",["*/;
            if ( StringLiteral_759/*",["*/ )
            {
              StatusLong = sub_B70754(StringLiteral_759/*",["*/, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v76 = StringLiteral_759/*",["*/;
            }
            else
            {
              v76 = 0LL;
            }
            if ( v74->max_length <= 1 )
              goto LABEL_118;
            v74->m_Items[1] = (System_String_o *)v76;
            sub_B70630(&v74->m_Items[1]);
            if ( !v73->max_length )
              goto LABEL_118;
            StatusLong = (__int64)System_Int32__ToString((int)v73 + 32, 0LL);
            v79 = (System_String_o *)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B70754(StatusLong, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
            }
            if ( v74->max_length <= 2 )
              goto LABEL_118;
            v74->m_Items[2] = v79;
            sub_B70630(&v74->m_Items[2]);
            StatusLong = StringLiteral_712/*","*/;
            if ( StringLiteral_712/*","*/ )
            {
              StatusLong = sub_B70754(StringLiteral_712/*","*/, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v80 = StringLiteral_712/*","*/;
            }
            else
            {
              v80 = 0LL;
            }
            if ( v74->max_length <= 3 )
              goto LABEL_118;
            v74->m_Items[3] = (System_String_o *)v80;
            sub_B70630(&v74->m_Items[3]);
            if ( v73->max_length <= 1 )
              goto LABEL_118;
            StatusLong = (__int64)System_Int32__ToString((int)v73 + 36, 0LL);
            v83 = (System_String_o *)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B70754(StatusLong, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
            }
            if ( v74->max_length <= 4 )
              goto LABEL_118;
            v74->m_Items[4] = v83;
            sub_B70630(&v74->m_Items[4]);
            StatusLong = StringLiteral_16092/*"]"*/;
            if ( StringLiteral_16092/*"]"*/ )
            {
              StatusLong = sub_B70754(StringLiteral_16092/*"]"*/, v74->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v84 = StringLiteral_16092/*"]"*/;
            }
            else
            {
              v84 = 0LL;
            }
            if ( v74->max_length <= 5 )
              goto LABEL_118;
            v74->m_Items[5] = (System_String_o *)v84;
            v85 = &v74->m_Items[5];
          }
          sub_B70630(v85);
          StatusLong = (__int64)System_String__Concat_44838292(v74, 0LL);
          v69 = voicePlayedArray;
          v71 = (System_String_o *)StatusLong;
        }
        LODWORD(v70) = v69->max_length;
        if ( (__int64)++v72 >= (int)v70 )
          goto LABEL_106;
      }
      goto LABEL_118;
    }
LABEL_106:
    v86 = System_String__Concat_44760452(
            (System_String_o *)StringLiteral_15855/*"["*/,
            v71,
            (System_String_o *)StringLiteral_16092/*"]"*/,
            0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v27,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23562/*"voicePlayedList"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v86,
      (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23366/*"usedTurnList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedTurnArray,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v87 = JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v27,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23635/*"waveInfo"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v87,
    (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v88 = (MiniMessagePack_MiniMessagePacker_o *)sub_B70764(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v88, 0LL);
  if ( !v88 )
    goto LABEL_119;
  v89 = MiniMessagePack_MiniMessagePacker__PackClass(v88, (Il2CppObject *)v27, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v90 = CatAndMouseGame__CatGame5Bytes(v89, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v91 = System_Convert__ToBase64String(v90, 0LL);
  RequestBase__addField_32336576((RequestBase_o *)this, (System_String_o *)StringLiteral_22162/*"result"*/, v91, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v4; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434EC24 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    byte_434EC24 = 1;
  }
  memset(&v4, 0, sizeof(v4));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B7076C(0LL, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v4,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)paramString,
    (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v4,
            (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v4,
    (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  if ( (byte_434EC21 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_9266/*"MockBattleResultRequest"*/);
    byte_434EC21 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9266/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_434EC20 & 1) == 0 )
  {
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&StringLiteral_16878/*"battle/result"*/);
    byte_434EC20 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44758168(BaseUrl, (System_String_o *)StringLiteral_16878/*"battle/result"*/, 0LL);
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

  if ( (byte_434EC23 & 1) == 0 )
  {
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&ResponseCommandKind_TypeInfo);
    sub_B70694(&ServantCommentManager_TypeInfo);
    sub_B70694(&TopHomeRequest_TypeInfo);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_434EC23 = 1;
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
    && (v6 = v5, ResponseData__checkError_29653500(v5, 0LL))
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
    v8 = (System_String_o *)StringLiteral_21408/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}


void __fastcall BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Int32_array **v9; // x1
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_Int32_array_array *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  struct System_Int32_array *v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct BattleResultRequest_RaidResult_array *v31; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct BattleResultRequest_SuperBossResult_array *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  struct System_Int32_array *v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v59; // x21
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Collections_Generic_Dictionary_int__int__o *v66; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  struct System_Int32_array *v80; // x0
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  struct System_Int64_array *v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  struct System_Int32_array *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7

  if ( (byte_434F819 & 1) == 0 )
  {
    sub_B70694(&BattleData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__object___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_B70694(&int_____TypeInfo);
    sub_B70694(&int___TypeInfo);
    sub_B70694(&long___TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
    sub_B70694(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
    sub_B70694(&BattleResultRequest_RaidResult___TypeInfo);
    sub_B70694(&BattleResultRequest_SuperBossResult___TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_434F819 = 1;
  }
  v9 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.scores, v9, v2, v3, v4, v5, v6, v7);
  v10 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.action, v10, v11, v12, v13, v14, v15, v16);
  v17 = (struct System_Int32_array_array *)sub_B706AC(int_____TypeInfo, 0LL);
  this->fields.voicePlayedArray = v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.voicePlayedArray,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  this->fields.aliveUniqueIds = v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.aliveUniqueIds,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (struct BattleResultRequest_RaidResult_array *)sub_B706AC(BattleResultRequest_RaidResult___TypeInfo, 0LL);
  this->fields.raidResult = v31;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.raidResult,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (struct BattleResultRequest_SuperBossResult_array *)sub_B706AC(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL);
  this->fields.superBossResult = v38;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.superBossResult,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  v45 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  this->fields.usedTurnArray = v45;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.usedTurnArray,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.recordType = 1;
  v52 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v52,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v52;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.recordJson,
    (System_Int32_array **)v52,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  v59 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v59,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v59;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.firstNpPlayList,
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v66 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B70764(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v66,
    (const MethodInfo_2FBA5BC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v66;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.usedEquipSkillDict,
    (System_Int32_array **)v66,
    v67,
    v68,
    v69,
    v70,
    v71,
    v72);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtCommonFlagDict,
    (System_Int32_array **)SavedServantCommonFlagDict,
    v74,
    v75,
    v76,
    v77,
    v78,
    v79);
  v80 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  this->fields.skillShiftUniqueIds = v80;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillShiftUniqueIds,
    (System_Int32_array **)v80,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = (struct System_Int64_array *)sub_B706AC(long___TypeInfo, 0LL);
  this->fields.skillShiftNpcSvtIds = v87;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.skillShiftNpcSvtIds,
    (System_Int32_array **)v87,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v94 = (struct System_Int32_array *)sub_B706AC(int___TypeInfo, 0LL);
  this->fields.routeSelect = v94;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.routeSelect,
    (System_Int32_array **)v94,
    v95,
    v96,
    v97,
    v98,
    v99,
    v100);
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
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_39886904; // x23
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
  if ( (byte_434F817 & 1) == 0 )
  {
    sub_B70694(&System_BitConverter_TypeInfo);
    sub_B70694(&Crc32_TypeInfo);
    sub_B70694(&Method_System_Linq_Enumerable_Concat_byte___);
    sub_B70694(&Method_System_Linq_Enumerable_ToArray_byte___);
    this = (BattleResultRequest_Argument_o *)sub_B70694(&NetworkManager_TypeInfo);
    byte_434F817 = 1;
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
        v37 = sub_B70798(this);
        sub_B70738(v37, 0LL);
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
    sub_B7076C(this, method);
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
  Bytes_39886904 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(
                                                                          v25 + battleResult,
                                                                          0LL);
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(v5, 0LL);
  v28 = System_Linq_Enumerable__Concat_byte_(
          Bytes_39886904,
          v27,
          (const MethodInfo_1CB51F4 *)Method_System_Linq_Enumerable_Concat_byte___);
  v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(v22, 0LL);
  v30 = System_Linq_Enumerable__Concat_byte_(
          v28,
          v29,
          (const MethodInfo_1CB51F4 *)Method_System_Linq_Enumerable_Concat_byte___);
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(
                                                               v2->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v32 = System_Linq_Enumerable__Concat_byte_(
          v30,
          v31,
          (const MethodInfo_1CB51F4 *)Method_System_Linq_Enumerable_Concat_byte___);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39886904(v11, 0LL);
  v34 = System_Linq_Enumerable__Concat_byte_(
          v32,
          v33,
          (const MethodInfo_1CB51F4 *)Method_System_Linq_Enumerable_Concat_byte___);
  v35 = System_Linq_Enumerable__ToArray_byte_(
          v34,
          (const MethodInfo_1CC84D8 *)Method_System_Linq_Enumerable_ToArray_byte___);
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
  System_Int32_array **v4; // x21
  unsigned __int64 v5; // x22
  unsigned __int64 max_length; // x9
  System_Int32_array *v7; // x28
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleResultRequest_Argument_o *v14; // x20
  System_Int32_array **v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Int32_array **v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  System_Int32_array **v49; // x21
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Int32_array **v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Int32_array **v63; // x21
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  System_Int32_array **v70; // x1
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x21
  BattleServantConfConponent_o *p_raidResult; // x0
  __int64 v80; // x0
  __int64 v81; // x0

  v2 = this;
  if ( (byte_434F818 & 1) == 0 )
  {
    sub_B70694(&string___TypeInfo);
    sub_B70694(&StringLiteral_759/*",["*/);
    sub_B70694(&StringLiteral_712/*","*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_1/*""*/);
    this = (BattleResultRequest_Argument_o *)sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_434F818 = 1;
  }
  voicePlayedArray = v2->fields.voicePlayedArray;
  v4 = (System_Int32_array **)StringLiteral_1/*""*/;
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
        if ( System_String__IsNullOrEmpty((System_String_o *)v4, 0LL) )
        {
          this = (BattleResultRequest_Argument_o *)sub_B706AC(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_65;
          v14 = this;
          this = (BattleResultRequest_Argument_o *)StringLiteral_15855/*"["*/;
          if ( StringLiteral_15855/*"["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(StringLiteral_15855/*"["*/, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v15 = (System_Int32_array **)StringLiteral_15855/*"["*/;
          }
          else
          {
            v15 = 0LL;
          }
          if ( !v14->fields.battleResult )
            goto LABEL_67;
          v14->fields.scores = (struct System_String_o *)v15;
          sub_B70630((BattleServantConfConponent_o *)&v14->fields.scores, v15, v8, v9, v10, v11, v12, v13);
          if ( !v7->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0LL);
          v35 = (System_Int32_array **)this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(this, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v14->fields.battleResult <= 1u )
            goto LABEL_67;
          v14->fields.action = (struct System_String_o *)v35;
          sub_B70630((BattleServantConfConponent_o *)&v14->fields.action, v35, v29, v30, v31, v32, v33, v34);
          this = (BattleResultRequest_Argument_o *)StringLiteral_712/*","*/;
          if ( StringLiteral_712/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(StringLiteral_712/*","*/, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v42 = (System_Int32_array **)StringLiteral_712/*","*/;
          }
          else
          {
            v42 = 0LL;
          }
          if ( v14->fields.battleResult <= 2u )
            goto LABEL_67;
          v14->fields.voicePlayedArray = (struct System_Int32_array_array *)v42;
          sub_B70630((BattleServantConfConponent_o *)&v14->fields.voicePlayedArray, v42, v36, v37, v38, v39, v40, v41);
          if ( v7->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0LL);
          v63 = (System_Int32_array **)this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(this, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v14->fields.battleResult <= 3u )
            goto LABEL_67;
          v14->fields.aliveUniqueIds = (struct System_Int32_array *)v63;
          sub_B70630((BattleServantConfConponent_o *)&v14->fields.aliveUniqueIds, v63, v57, v58, v59, v60, v61, v62);
          this = (BattleResultRequest_Argument_o *)StringLiteral_16092/*"]"*/;
          if ( StringLiteral_16092/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(StringLiteral_16092/*"]"*/, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v70 = (System_Int32_array **)StringLiteral_16092/*"]"*/;
          }
          else
          {
            v70 = 0LL;
          }
          if ( v14->fields.battleResult <= 4u )
            goto LABEL_67;
          v14->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v70;
          p_raidResult = (BattleServantConfConponent_o *)&v14->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_B706AC(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_65;
          v14 = this;
          if ( v4 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(v4, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_68:
              v81 = sub_B7078C();
              sub_B70738(v81, 0LL);
            }
          }
          if ( !v14->fields.battleResult )
            goto LABEL_67;
          v14->fields.scores = (struct System_String_o *)v4;
          sub_B70630((BattleServantConfConponent_o *)&v14->fields.scores, v4, v16, v17, v18, v19, v20, v21);
          this = (BattleResultRequest_Argument_o *)StringLiteral_759/*",["*/;
          if ( StringLiteral_759/*",["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(StringLiteral_759/*",["*/, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v28 = (System_Int32_array **)StringLiteral_759/*",["*/;
          }
          else
          {
            v28 = 0LL;
          }
          if ( v14->fields.battleResult <= 1u )
            goto LABEL_67;
          v14->fields.action = (struct System_String_o *)v28;
          sub_B70630((BattleServantConfConponent_o *)&v14->fields.action, v28, v22, v23, v24, v25, v26, v27);
          if ( !v7->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 32, 0LL);
          v49 = (System_Int32_array **)this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(this, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v14->fields.battleResult <= 2u )
            goto LABEL_67;
          v14->fields.voicePlayedArray = (struct System_Int32_array_array *)v49;
          sub_B70630((BattleServantConfConponent_o *)&v14->fields.voicePlayedArray, v49, v43, v44, v45, v46, v47, v48);
          this = (BattleResultRequest_Argument_o *)StringLiteral_712/*","*/;
          if ( StringLiteral_712/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(StringLiteral_712/*","*/, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v56 = (System_Int32_array **)StringLiteral_712/*","*/;
          }
          else
          {
            v56 = 0LL;
          }
          if ( v14->fields.battleResult <= 3u )
            goto LABEL_67;
          v14->fields.aliveUniqueIds = (struct System_Int32_array *)v56;
          sub_B70630((BattleServantConfConponent_o *)&v14->fields.aliveUniqueIds, v56, v50, v51, v52, v53, v54, v55);
          if ( v7->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v7 + 36, 0LL);
          v77 = (System_Int32_array **)this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(this, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v14->fields.battleResult <= 4u )
            goto LABEL_67;
          v14->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v77;
          sub_B70630((BattleServantConfConponent_o *)&v14->fields.raidResult, v77, v71, v72, v73, v74, v75, v76);
          this = (BattleResultRequest_Argument_o *)StringLiteral_16092/*"]"*/;
          if ( StringLiteral_16092/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B70754(StringLiteral_16092/*"]"*/, v14->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v70 = (System_Int32_array **)StringLiteral_16092/*"]"*/;
          }
          else
          {
            v70 = 0LL;
          }
          if ( v14->fields.battleResult <= 5u )
          {
LABEL_67:
            v80 = sub_B70798(this);
            sub_B70738(v80, 0LL);
          }
          v14->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)v70;
          p_raidResult = (BattleServantConfConponent_o *)&v14->fields.superBossResult;
        }
        sub_B70630(p_raidResult, v70, v64, v65, v66, v67, v68, v69);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_44838292((System_String_array *)v14, 0LL);
        v4 = (System_Int32_array **)this;
      }
      voicePlayedArray = v2->fields.voicePlayedArray;
      ++v5;
      if ( !voicePlayedArray )
LABEL_65:
        sub_B7076C(this, method);
    }
  }
  return System_String__Concat_44760452(
           (System_String_o *)StringLiteral_15855/*"["*/,
           (System_String_o *)v4,
           (System_String_o *)StringLiteral_16092/*"]"*/,
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