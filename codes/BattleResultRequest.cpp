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
  System_Xml_Schema_XmlSchemaObject_o *v72; // x0
  System_Xml_Schema_XmlSchemaObject_o *v73; // x0
  System_Xml_Schema_XmlSchemaObject_o *v74; // x0
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  System_Xml_Schema_XmlSchemaObject_o *v77; // x0
  System_Xml_Schema_XmlSchemaObject_o *v78; // x0
  WarBoardUiData_SaveData_array *v79; // x0
  System_String_o *v80; // x0
  System_String_o *v81; // x0
  __int64 StatusLong; // x0
  System_Int32_array **v83; // x1
  System_String_array **v84; // x2
  signed int max_length; // w8
  signed int v86; // w19
  __int64 v87; // x20
  BattleResultRequest_RaidResult_o *v88; // x0
  signed int v89; // w8
  signed int v90; // w19
  __int64 v91; // x22
  BattleResultRequest_SuperBossResult_o *v92; // x0
  unsigned __int64 v93; // x8
  __int64 v94; // x23
  unsigned __int64 v95; // x9
  __int64 v96; // x12
  int64_t UserId; // x19
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_39203268; // x19
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
  System_Xml_Schema_XmlSchemaObject_o *v110; // x0
  System_Int32_array_array *v111; // x10
  __int64 v112; // x8
  System_Int32_array **v113; // x22
  unsigned __int64 v114; // x20
  System_Int32_array *v115; // x25
  __int64 v116; // x2
  __int64 v117; // x0
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  System_String_array *v123; // x19
  System_String_array **v124; // x3
  System_Boolean_array **v125; // x4
  System_Int32_array **v126; // x5
  System_Int32_array *v127; // x6
  System_Int32_array *v128; // x7
  System_String_array **v129; // x3
  System_Boolean_array **v130; // x4
  System_Int32_array **v131; // x5
  System_Int32_array *v132; // x6
  System_Int32_array *v133; // x7
  System_String_array **v134; // x3
  System_Boolean_array **v135; // x4
  System_Int32_array **v136; // x5
  System_Int32_array *v137; // x6
  System_Int32_array *v138; // x7
  System_Int32_array **v139; // x22
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_String_array **v145; // x3
  System_Boolean_array **v146; // x4
  System_Int32_array **v147; // x5
  System_Int32_array *v148; // x6
  System_Int32_array *v149; // x7
  System_Int32_array **v150; // x22
  System_String_array **v151; // x3
  System_Boolean_array **v152; // x4
  System_Int32_array **v153; // x5
  System_Int32_array *v154; // x6
  System_Int32_array *v155; // x7
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  System_Int32_array **v161; // x22
  System_String_array **v162; // x3
  System_Boolean_array **v163; // x4
  System_Int32_array **v164; // x5
  System_Int32_array *v165; // x6
  System_Int32_array *v166; // x7
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Int32_array **v172; // x22
  BattleServantConfConponent_o *v173; // x0
  System_String_o *v174; // x0
  __int64 v175; // x1
  __int64 v176; // x2
  __int64 v177; // x3
  __int64 v178; // x4
  MiniMessagePack_MiniMessagePacker_o *v179; // x19
  System_Byte_array *v180; // x19
  System_Byte_array *v181; // x19
  System_String_o *v182; // x0
  int64_t v184; // [xsp+8h] [xbp-98h]
  int32_t v190; // [xsp+38h] [xbp-68h] BYREF
  int32_t v191; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t v192; // [xsp+40h] [xbp-60h] BYREF
  int32_t v193; // [xsp+44h] [xbp-5Ch] BYREF
  int64_t v194; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_40FA407 & 1) == 0 )
  {
    sub_B16FFC(&System_BitConverter_TypeInfo, battleId);
    sub_B16FFC(&CatAndMouseGame_TypeInfo, v26);
    sub_B16FFC(&System_Convert_TypeInfo, v27);
    sub_B16FFC(&Crc32_TypeInfo, v28);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v29);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v30);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v31);
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_byte___, v32);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_byte___, v33);
    sub_B16FFC(&int_TypeInfo, v34);
    sub_B16FFC(&long_TypeInfo, v35);
    sub_B16FFC(&JsonManager_TypeInfo, v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v37);
    sub_B16FFC(&MiniMessagePack_MiniMessagePacker_TypeInfo, v38);
    sub_B16FFC(&NetworkManager_TypeInfo, v39);
    sub_B16FFC(&string___TypeInfo, v40);
    sub_B16FFC(&uint_TypeInfo, v41);
    sub_B16FFC(&StringLiteral_21765, v42);
    sub_B16FFC(&StringLiteral_21706, v43);
    sub_B16FFC(&StringLiteral_21631, v44);
    sub_B16FFC(&StringLiteral_17112, v45);
    sub_B16FFC(&StringLiteral_22054, v46);
    sub_B16FFC(&StringLiteral_21584, v47);
    sub_B16FFC(&StringLiteral_22893, v48);
    sub_B16FFC(&StringLiteral_21630, v49);
    sub_B16FFC(&StringLiteral_745, v50);
    sub_B16FFC(&StringLiteral_22055, v51);
    sub_B16FFC(&StringLiteral_17806, v52);
    sub_B16FFC(&StringLiteral_22895, v53);
    sub_B16FFC(&StringLiteral_18219, v54);
    sub_B16FFC(&StringLiteral_22896, v55);
    sub_B16FFC(&StringLiteral_22372, v56);
    sub_B16FFC(&StringLiteral_21829, v57);
    sub_B16FFC(&StringLiteral_16593, v58);
    sub_B16FFC(&StringLiteral_698, v59);
    sub_B16FFC(&StringLiteral_22530, v60);
    sub_B16FFC(&StringLiteral_23087, v61);
    sub_B16FFC(&StringLiteral_15571, v62);
    sub_B16FFC(&StringLiteral_23188, v63);
    sub_B16FFC(&StringLiteral_1, v64);
    sub_B16FFC(&StringLiteral_22356, v65);
    sub_B16FFC(&StringLiteral_15807, v66);
    sub_B16FFC(&StringLiteral_16585, v67);
    sub_B16FFC(&StringLiteral_16587, v68);
    sub_B16FFC(&StringLiteral_16169, v69);
    sub_B16FFC(&StringLiteral_16240, v70);
    byte_40FA407 = 1;
  }
  v71 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        battleId,
                                                                                        *(_QWORD *)&battleResult,
                                                                                        *(_QWORD *)&winResult,
                                                                                        scores);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v71,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v184 = battleId;
  v194 = battleId;
  v72 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(long_TypeInfo, &v194);
  if ( !v71 )
    goto LABEL_116;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16585,
    v72,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v193 = battleResult;
  v73 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v193);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16587,
    v73,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v192 = winResult;
  v74 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v192);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23188,
    v74,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21829,
    (System_Xml_Schema_XmlSchemaObject_o *)scores,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16169,
    (System_Xml_Schema_XmlSchemaObject_o *)action,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v75 = JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21584,
    (System_Xml_Schema_XmlSchemaObject_o *)v75,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v76 = JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22356,
    (System_Xml_Schema_XmlSchemaObject_o *)v76,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v191 = elapsedTurn;
  v77 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v191);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18219,
    v77,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v190 = recordType;
  v78 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v190);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21630,
    v78,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21631,
    (System_Xml_Schema_XmlSchemaObject_o *)recordJson,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_116;
  v79 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)firstNpPlayList,
          (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v80 = JsonManager__toJson(&v79->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22530,
    (System_Xml_Schema_XmlSchemaObject_o *)v80,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_116;
  v81 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22893,
    (System_Xml_Schema_XmlSchemaObject_o *)v81,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22895,
    (System_Xml_Schema_XmlSchemaObject_o *)usedEquipSkillDict,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22372,
    (System_Xml_Schema_XmlSchemaObject_o *)svtCommonFlagDict,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22055,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftUniqueIdArray,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22054,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftNpcSvtIdArray,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17112,
    (System_Xml_Schema_XmlSchemaObject_o *)calledEnemyUniqueIdArray,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21765,
    (System_Xml_Schema_XmlSchemaObject_o *)routeSelectIdArray,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17806,
    (System_Xml_Schema_XmlSchemaObject_o *)dataLostUniqueIdArray,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_116;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v87 = 0LL;
    if ( !superBossResult )
      goto LABEL_116;
  }
  else
  {
    v86 = 0;
    v87 = 0LL;
    do
    {
      if ( v86 >= (unsigned int)max_length )
        goto LABEL_115;
      v88 = raidResult->m_Items[v86];
      if ( !v88 )
        goto LABEL_116;
      StatusLong = BattleResultRequest_RaidResult__getStatusLong(v88, 0LL);
      max_length = raidResult->max_length;
      ++v86;
      v87 += StatusLong;
    }
    while ( v86 < max_length );
    if ( !superBossResult )
LABEL_116:
      sub_B170D4();
  }
  v89 = superBossResult->max_length;
  if ( v89 >= 1 )
  {
    v90 = 0;
    v91 = 0LL;
    while ( v90 < (unsigned int)v89 )
    {
      v92 = superBossResult->m_Items[v90];
      if ( !v92 )
        goto LABEL_116;
      StatusLong = BattleResultRequest_SuperBossResult__getStatusLong(v92, 0LL);
      v89 = superBossResult->max_length;
      ++v90;
      v91 += StatusLong;
      if ( v90 >= v89 )
        goto LABEL_25;
    }
LABEL_115:
    sub_B17100(StatusLong, v83, v84);
    sub_B170A0();
  }
  v91 = 0LL;
LABEL_25:
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16240,
    (System_Xml_Schema_XmlSchemaObject_o *)aliveUniqueIds,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_116;
  v93 = aliveUniqueIds->max_length;
  if ( (__int64)(v93 << 32) >= 1 )
  {
    v94 = 0LL;
    v95 = 0LL;
    while ( v95 < v93 )
    {
      v96 = aliveUniqueIds->m_Items[++v95];
      v94 += v96;
      if ( (__int64)v95 >= (int)v93 )
        goto LABEL_32;
    }
    goto LABEL_115;
  }
  v94 = 0LL;
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
  Bytes_39203268 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(
                                                                          UserId + battleResult,
                                                                          0LL);
  v99 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(v87 - 4231125, 0LL);
  v100 = System_Linq_Enumerable__Concat_byte_(
           Bytes_39203268,
           v99,
           (const MethodInfo_18D165C *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v94 >= 0 )
    v101 = v94;
  else
    v101 = v94 + 1;
  v102 = v100;
  v103 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(v101 >> 1, 0LL);
  v104 = System_Linq_Enumerable__Concat_byte_(
           v102,
           v103,
           (const MethodInfo_18D165C *)Method_System_Linq_Enumerable_Concat_byte___);
  v105 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(
                                                                v184 - 0x7FFFFFFF,
                                                                0LL);
  v106 = System_Linq_Enumerable__Concat_byte_(
           v104,
           v105,
           (const MethodInfo_18D165C *)Method_System_Linq_Enumerable_Concat_byte___);
  v107 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(v91 - 2469110, 0LL);
  v108 = System_Linq_Enumerable__Concat_byte_(
           v106,
           v107,
           (const MethodInfo_18D165C *)Method_System_Linq_Enumerable_Concat_byte___);
  v109 = System_Linq_Enumerable__ToArray_byte_(
           v108,
           (const MethodInfo_19C4910 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v194) = Crc32__Compute(v109, 0LL);
  v110 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(uint_TypeInfo, &v194);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16593,
    v110,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v111 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v112 = *(_QWORD *)&voicePlayedArray->max_length;
    v113 = (System_Int32_array **)StringLiteral_1;
    if ( (int)v112 >= 1 )
    {
      v114 = 0LL;
      while ( v114 < (unsigned int)v112 )
      {
        v115 = voicePlayedArray->m_Items[v114];
        if ( v115 && v115->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty((System_String_o *)v113, 0LL) )
          {
            v117 = sub_B17014(string___TypeInfo, 5LL, v116);
            if ( !v117 )
              goto LABEL_116;
            v123 = (System_String_array *)v117;
            StatusLong = StringLiteral_15571;
            if ( StringLiteral_15571 )
            {
              StatusLong = sub_B170BC(StringLiteral_15571, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v83 = (System_Int32_array **)StringLiteral_15571;
            }
            else
            {
              v83 = 0LL;
            }
            if ( !v123->max_length )
              goto LABEL_115;
            v123->m_Items[0] = (System_String_o *)v83;
            sub_B16F98((BattleServantConfConponent_o *)v123->m_Items, v83, v84, v118, v119, v120, v121, v122);
            if ( !v115->max_length )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v115 + 32, 0LL);
            v139 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B170BC(StatusLong, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v123->max_length <= 1 )
              goto LABEL_115;
            v123->m_Items[1] = (System_String_o *)v139;
            sub_B16F98((BattleServantConfConponent_o *)&v123->m_Items[1], v139, v84, v134, v135, v136, v137, v138);
            StatusLong = StringLiteral_698;
            if ( StringLiteral_698 )
            {
              StatusLong = sub_B170BC(StringLiteral_698, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v83 = (System_Int32_array **)StringLiteral_698;
            }
            else
            {
              v83 = 0LL;
            }
            if ( v123->max_length <= 2 )
              goto LABEL_115;
            v123->m_Items[2] = (System_String_o *)v83;
            sub_B16F98((BattleServantConfConponent_o *)&v123->m_Items[2], v83, v84, v140, v141, v142, v143, v144);
            if ( v115->max_length <= 1 )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v115 + 36, 0LL);
            v161 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B170BC(StatusLong, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v123->max_length <= 3 )
              goto LABEL_115;
            v123->m_Items[3] = (System_String_o *)v161;
            sub_B16F98((BattleServantConfConponent_o *)&v123->m_Items[3], v161, v84, v156, v157, v158, v159, v160);
            StatusLong = StringLiteral_15807;
            if ( StringLiteral_15807 )
            {
              StatusLong = sub_B170BC(StringLiteral_15807, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v83 = (System_Int32_array **)StringLiteral_15807;
            }
            else
            {
              v83 = 0LL;
            }
            if ( v123->max_length <= 4 )
              goto LABEL_115;
            v123->m_Items[4] = (System_String_o *)v83;
            v173 = (BattleServantConfConponent_o *)&v123->m_Items[4];
          }
          else
          {
            StatusLong = sub_B17014(string___TypeInfo, 6LL, v116);
            if ( !StatusLong )
              goto LABEL_116;
            v123 = (System_String_array *)StatusLong;
            if ( v113 )
            {
              StatusLong = sub_B170BC(v113, *(_QWORD *)(*(_QWORD *)StatusLong + 64LL));
              if ( !StatusLong )
              {
LABEL_117:
                sub_B170F4(StatusLong);
                sub_B170A0();
              }
            }
            if ( !v123->max_length )
              goto LABEL_115;
            v123->m_Items[0] = (System_String_o *)v113;
            sub_B16F98((BattleServantConfConponent_o *)v123->m_Items, v113, v84, v124, v125, v126, v127, v128);
            StatusLong = StringLiteral_745;
            if ( StringLiteral_745 )
            {
              StatusLong = sub_B170BC(StringLiteral_745, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v83 = (System_Int32_array **)StringLiteral_745;
            }
            else
            {
              v83 = 0LL;
            }
            if ( v123->max_length <= 1 )
              goto LABEL_115;
            v123->m_Items[1] = (System_String_o *)v83;
            sub_B16F98((BattleServantConfConponent_o *)&v123->m_Items[1], v83, v84, v129, v130, v131, v132, v133);
            if ( !v115->max_length )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v115 + 32, 0LL);
            v150 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B170BC(StatusLong, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v123->max_length <= 2 )
              goto LABEL_115;
            v123->m_Items[2] = (System_String_o *)v150;
            sub_B16F98((BattleServantConfConponent_o *)&v123->m_Items[2], v150, v84, v145, v146, v147, v148, v149);
            StatusLong = StringLiteral_698;
            if ( StringLiteral_698 )
            {
              StatusLong = sub_B170BC(StringLiteral_698, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v83 = (System_Int32_array **)StringLiteral_698;
            }
            else
            {
              v83 = 0LL;
            }
            if ( v123->max_length <= 3 )
              goto LABEL_115;
            v123->m_Items[3] = (System_String_o *)v83;
            sub_B16F98((BattleServantConfConponent_o *)&v123->m_Items[3], v83, v84, v151, v152, v153, v154, v155);
            if ( v115->max_length <= 1 )
              goto LABEL_115;
            StatusLong = (__int64)System_Int32__ToString((int)v115 + 36, 0LL);
            v172 = (System_Int32_array **)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B170BC(StatusLong, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
            }
            if ( v123->max_length <= 4 )
              goto LABEL_115;
            v123->m_Items[4] = (System_String_o *)v172;
            sub_B16F98((BattleServantConfConponent_o *)&v123->m_Items[4], v172, v84, v167, v168, v169, v170, v171);
            StatusLong = StringLiteral_15807;
            if ( StringLiteral_15807 )
            {
              StatusLong = sub_B170BC(StringLiteral_15807, v123->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_117;
              v83 = (System_Int32_array **)StringLiteral_15807;
            }
            else
            {
              v83 = 0LL;
            }
            if ( v123->max_length <= 5 )
              goto LABEL_115;
            v123->m_Items[5] = (System_String_o *)v83;
            v173 = (BattleServantConfConponent_o *)&v123->m_Items[5];
          }
          sub_B16F98(v173, v83, v84, v162, v163, v164, v165, v166);
          StatusLong = (__int64)System_String__Concat_43823856(v123, 0LL);
          v111 = voicePlayedArray;
          v113 = (System_Int32_array **)StatusLong;
        }
        LODWORD(v112) = v111->max_length;
        if ( (__int64)++v114 >= (int)v112 )
          goto LABEL_106;
      }
      goto LABEL_115;
    }
LABEL_106:
    v174 = System_String__Concat_43746016(
             (System_String_o *)StringLiteral_15571,
             (System_String_o *)v113,
             (System_String_o *)StringLiteral_15807,
             0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v71,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23087,
      (System_Xml_Schema_XmlSchemaObject_o *)v174,
      (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v71,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22896,
    (System_Xml_Schema_XmlSchemaObject_o *)usedTurnArray,
    (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v179 = (MiniMessagePack_MiniMessagePacker_o *)sub_B170CC(
                                                  MiniMessagePack_MiniMessagePacker_TypeInfo,
                                                  v175,
                                                  v176,
                                                  v177,
                                                  v178);
  MiniMessagePack_MiniMessagePacker___ctor(v179, 0LL);
  if ( !v179 )
    goto LABEL_116;
  v180 = MiniMessagePack_MiniMessagePacker__PackClass(v179, (Il2CppObject *)v71, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v181 = CatAndMouseGame__CatGame5Bytes(v180, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v182 = System_Convert__ToBase64String(v181, 0LL);
  RequestBase__addField_30957164((RequestBase_o *)this, (System_String_o *)StringLiteral_21706, v182, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v7; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40FA409 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v5);
    byte_40FA409 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v7,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)paramString,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v7,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v7,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_40FA406 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_9127, v2);
    byte_40FA406 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9127, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FA405 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_16569, v2);
    byte_40FA405 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_16569, 0LL);
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

  if ( (byte_40FA408 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, responseList);
    sub_B16FFC(&ResponseCommandKind_TypeInfo, v5);
    sub_B16FFC(&ServantCommentManager_TypeInfo, v6);
    sub_B16FFC(&TopHomeRequest_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_20980, v8);
    byte_40FA408 = 1;
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
    && (v10 = v9, ResponseData__checkError_30924960(v9, 0LL))
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
    v12 = (System_String_o *)StringLiteral_20980;
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
  __int64 v17; // x2
  struct System_Int32_array_array *v18; // x0
  __int64 v19; // x2
  struct System_Int32_array *v20; // x0
  __int64 v21; // x2
  struct BattleResultRequest_RaidResult_array *v22; // x0
  __int64 v23; // x2
  struct BattleResultRequest_SuperBossResult_array *v24; // x0
  __int64 v25; // x2
  struct System_Int32_array *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v31; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  System_Collections_Generic_Dictionary_int__int__o *v41; // x21
  struct System_Collections_Generic_Dictionary_int__int__o *SavedServantCommonFlagDict; // x0
  __int64 v43; // x2
  struct System_Int32_array *v44; // x0
  __int64 v45; // x2
  struct System_Int64_array *v46; // x0
  __int64 v47; // x2
  struct System_Int32_array *v48; // x0

  if ( (byte_40F7195 & 1) == 0 )
  {
    sub_B16FFC(&BattleData_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v5);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v6);
    sub_B16FFC(&int_____TypeInfo, v7);
    sub_B16FFC(&int___TypeInfo, v8);
    sub_B16FFC(&long___TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v11);
    sub_B16FFC(&BattleResultRequest_RaidResult___TypeInfo, v12);
    sub_B16FFC(&BattleResultRequest_SuperBossResult___TypeInfo, v13);
    sub_B16FFC(&StringLiteral_1, v14);
    byte_40F7195 = 1;
  }
  v15 = StringLiteral_1;
  this->fields.scores = (struct System_String_o *)StringLiteral_1;
  sub_B16F98(&this->fields.scores, v15);
  v16 = StringLiteral_1;
  this->fields.action = (struct System_String_o *)StringLiteral_1;
  sub_B16F98(&this->fields.action, v16);
  v18 = (struct System_Int32_array_array *)sub_B17014(int_____TypeInfo, 0LL, v17);
  this->fields.voicePlayedArray = v18;
  sub_B16F98(&this->fields.voicePlayedArray, v18);
  v20 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v19);
  this->fields.aliveUniqueIds = v20;
  sub_B16F98(&this->fields.aliveUniqueIds, v20);
  v22 = (struct BattleResultRequest_RaidResult_array *)sub_B17014(BattleResultRequest_RaidResult___TypeInfo, 0LL, v21);
  this->fields.raidResult = v22;
  sub_B16F98(&this->fields.raidResult, v22);
  v24 = (struct BattleResultRequest_SuperBossResult_array *)sub_B17014(
                                                              BattleResultRequest_SuperBossResult___TypeInfo,
                                                              0LL,
                                                              v23);
  this->fields.superBossResult = v24;
  sub_B16F98(&this->fields.superBossResult, v24);
  v26 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v25);
  this->fields.usedTurnArray = v26;
  sub_B16F98(&this->fields.usedTurnArray, v26);
  this->fields.recordType = 1;
  v31 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                        System_Collections_Generic_Dictionary_string__object__TypeInfo,
                                                                                        v27,
                                                                                        v28,
                                                                                        v29,
                                                                                        v30);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v31,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v31;
  sub_B16F98(&this->fields.recordJson, v31);
  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Dictionary_string__object___TypeInfo,
                                                                                                  v32,
                                                                                                  v33,
                                                                                                  v34,
                                                                                                  v35);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v36,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v36;
  sub_B16F98(&this->fields.firstNpPlayList, v36);
  v41 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B170CC(
                                                               System_Collections_Generic_Dictionary_int__int__TypeInfo,
                                                               v37,
                                                               v38,
                                                               v39,
                                                               v40);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v41,
    (const MethodInfo_2DDC410 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v41;
  sub_B16F98(&this->fields.usedEquipSkillDict, v41);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  SavedServantCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  this->fields.svtCommonFlagDict = SavedServantCommonFlagDict;
  sub_B16F98(&this->fields.svtCommonFlagDict, SavedServantCommonFlagDict);
  v44 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v43);
  this->fields.skillShiftUniqueIds = v44;
  sub_B16F98(&this->fields.skillShiftUniqueIds, v44);
  v46 = (struct System_Int64_array *)sub_B17014(long___TypeInfo, 0LL, v45);
  this->fields.skillShiftNpcSvtIds = v46;
  sub_B16F98(&this->fields.skillShiftNpcSvtIds, v46);
  v48 = (struct System_Int32_array *)sub_B17014(int___TypeInfo, 0LL, v47);
  this->fields.routeSelect = v48;
  sub_B16F98(&this->fields.routeSelect, v48);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


uint32_t __fastcall BattleResultRequest_Argument__ConvertBattleStatus(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultRequest_Argument_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct BattleResultRequest_RaidResult_array *raidResult; // x8
  int max_length; // w9
  int64_t v10; // x20
  int v11; // w10
  __int64 v12; // x11
  int *v13; // x12
  struct BattleResultRequest_SuperBossResult_array *superBossResult; // x8
  int v15; // w9
  int64_t v16; // x21
  int v17; // w10
  __int64 v18; // x11
  int *v19; // x12
  struct System_Int32_array *aliveUniqueIds; // x12
  unsigned __int64 v21; // x8
  __int64 v22; // x9
  unsigned __int64 v23; // x10
  int32_t *v24; // x12
  __int64 v25; // x13
  __int64 v26; // x8
  __int64 v27; // x22
  int64_t UserId; // x0
  __int64 battleResult; // x24
  int64_t v30; // x23
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_39203268; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  System_Byte_array *v40; // x19

  v3 = this;
  if ( (byte_40F7193 & 1) == 0 )
  {
    sub_B16FFC(&System_BitConverter_TypeInfo, method);
    sub_B16FFC(&Crc32_TypeInfo, v4);
    sub_B16FFC(&Method_System_Linq_Enumerable_Concat_byte___, v5);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_byte___, v6);
    this = (BattleResultRequest_Argument_o *)sub_B16FFC(&NetworkManager_TypeInfo, v7);
    byte_40F7193 = 1;
  }
  raidResult = v3->fields.raidResult;
  if ( !raidResult )
    goto LABEL_38;
  max_length = raidResult->max_length;
  v10 = -4231125LL;
  if ( max_length >= 1 )
  {
    v11 = 0;
    v12 = 0LL;
    do
    {
      if ( v11 >= (unsigned int)max_length )
      {
LABEL_37:
        sub_B17100(this, method, v2);
        sub_B170A0();
      }
      v13 = (int *)raidResult->m_Items[v11];
      if ( !v13 )
        goto LABEL_38;
      ++v11;
      v12 += v13[6] + (__int64)v13[5] + v13[4];
    }
    while ( v11 < max_length );
    v10 = v12 - 4231125;
  }
  superBossResult = v3->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_38;
  v15 = superBossResult->max_length;
  v16 = -2469110LL;
  if ( v15 >= 1 )
  {
    v17 = 0;
    v18 = 0LL;
    do
    {
      if ( v17 >= (unsigned int)v15 )
        goto LABEL_37;
      v19 = (int *)superBossResult->m_Items[v17];
      if ( !v19 )
        goto LABEL_38;
      ++v17;
      v18 += v19[6] + (__int64)v19[4] + v19[5];
    }
    while ( v17 < v15 );
    v16 = v18 - 2469110;
  }
  aliveUniqueIds = v3->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_38:
    sub_B170D4();
  v21 = aliveUniqueIds->max_length;
  if ( (__int64)(v21 << 32) < 1 )
  {
    v27 = 0LL;
  }
  else
  {
    v22 = 0LL;
    v23 = 0LL;
    v24 = &aliveUniqueIds->m_Items[1];
    do
    {
      if ( v23 >= v21 )
        goto LABEL_37;
      v25 = v24[v23++];
      v22 += v25;
    }
    while ( (__int64)v23 < (int)v21 );
    if ( v22 >= 0 )
      v26 = v22;
    else
      v26 = v22 + 1;
    v27 = v26 >> 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  battleResult = v3->fields.battleResult;
  v30 = UserId;
  if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_BitConverter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
  }
  Bytes_39203268 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(
                                                                          v30 + battleResult,
                                                                          0LL);
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(v10, 0LL);
  v33 = System_Linq_Enumerable__Concat_byte_(
          Bytes_39203268,
          v32,
          (const MethodInfo_18D165C *)Method_System_Linq_Enumerable_Concat_byte___);
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(v27, 0LL);
  v35 = System_Linq_Enumerable__Concat_byte_(
          v33,
          v34,
          (const MethodInfo_18D165C *)Method_System_Linq_Enumerable_Concat_byte___);
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(
                                                               v3->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v37 = System_Linq_Enumerable__Concat_byte_(
          v35,
          v36,
          (const MethodInfo_18D165C *)Method_System_Linq_Enumerable_Concat_byte___);
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_39203268(v16, 0LL);
  v39 = System_Linq_Enumerable__Concat_byte_(
          v37,
          v38,
          (const MethodInfo_18D165C *)Method_System_Linq_Enumerable_Concat_byte___);
  v40 = System_Linq_Enumerable__ToArray_byte_(
          v39,
          (const MethodInfo_19C4910 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  return Crc32__Compute(v40, 0LL);
}


System_String_o *__fastcall BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  BattleResultRequest_Argument_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Int32_array_array *voicePlayedArray; // x8
  System_String_o *v10; // x21
  unsigned __int64 v11; // x22
  unsigned __int64 max_length; // x9
  System_Int32_array *v13; // x28
  __int64 v14; // x2
  __int64 v15; // x0
  BattleResultRequest_Argument_o *v16; // x20
  BattleResultRequest_Argument_o *v17; // x21
  BattleResultRequest_Argument_o *v18; // x21
  BattleResultRequest_Argument_o *v19; // x21
  BattleResultRequest_Argument_o *v20; // x21
  void *p_raidResult; // x0

  v3 = this;
  if ( (byte_40F7194 & 1) == 0 )
  {
    sub_B16FFC(&string___TypeInfo, method);
    sub_B16FFC(&StringLiteral_745, v4);
    sub_B16FFC(&StringLiteral_698, v5);
    sub_B16FFC(&StringLiteral_15571, v6);
    sub_B16FFC(&StringLiteral_1, v7);
    this = (BattleResultRequest_Argument_o *)sub_B16FFC(&StringLiteral_15807, v8);
    byte_40F7194 = 1;
  }
  voicePlayedArray = v3->fields.voicePlayedArray;
  v10 = (System_String_o *)StringLiteral_1;
  if ( voicePlayedArray )
  {
    v11 = 0LL;
    while ( 1 )
    {
      max_length = voicePlayedArray->max_length;
      if ( (__int64)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_67;
      v13 = voicePlayedArray->m_Items[v11];
      if ( v13 && v13->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty(v10, 0LL) )
        {
          v15 = sub_B17014(string___TypeInfo, 5LL, v14);
          if ( !v15 )
            goto LABEL_65;
          v16 = (BattleResultRequest_Argument_o *)v15;
          this = (BattleResultRequest_Argument_o *)StringLiteral_15571;
          if ( StringLiteral_15571 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(StringLiteral_15571, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            method = (const MethodInfo *)StringLiteral_15571;
          }
          else
          {
            method = 0LL;
          }
          if ( !v16->fields.battleResult )
            goto LABEL_67;
          v16->fields.scores = (struct System_String_o *)method;
          sub_B16F98(&v16->fields.scores, method);
          if ( !v13->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v13 + 32, 0LL);
          v17 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(this, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v16->fields.battleResult <= 1u )
            goto LABEL_67;
          v16->fields.action = (struct System_String_o *)v17;
          sub_B16F98(&v16->fields.action, v17);
          this = (BattleResultRequest_Argument_o *)StringLiteral_698;
          if ( StringLiteral_698 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(StringLiteral_698, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            method = (const MethodInfo *)StringLiteral_698;
          }
          else
          {
            method = 0LL;
          }
          if ( v16->fields.battleResult <= 2u )
            goto LABEL_67;
          v16->fields.voicePlayedArray = (struct System_Int32_array_array *)method;
          sub_B16F98(&v16->fields.voicePlayedArray, method);
          if ( v13->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v13 + 36, 0LL);
          v19 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(this, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v16->fields.battleResult <= 3u )
            goto LABEL_67;
          v16->fields.aliveUniqueIds = (struct System_Int32_array *)v19;
          sub_B16F98(&v16->fields.aliveUniqueIds, v19);
          this = (BattleResultRequest_Argument_o *)StringLiteral_15807;
          if ( StringLiteral_15807 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(StringLiteral_15807, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            method = (const MethodInfo *)StringLiteral_15807;
          }
          else
          {
            method = 0LL;
          }
          if ( v16->fields.battleResult <= 4u )
            goto LABEL_67;
          v16->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)method;
          p_raidResult = &v16->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_B17014(string___TypeInfo, 6LL, v14);
          if ( !this )
            goto LABEL_65;
          v16 = this;
          if ( v10 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(v10, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_68:
              sub_B170F4();
              sub_B170A0();
            }
          }
          if ( !v16->fields.battleResult )
            goto LABEL_67;
          v16->fields.scores = v10;
          sub_B16F98(&v16->fields.scores, v10);
          this = (BattleResultRequest_Argument_o *)StringLiteral_745;
          if ( StringLiteral_745 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(StringLiteral_745, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            method = (const MethodInfo *)StringLiteral_745;
          }
          else
          {
            method = 0LL;
          }
          if ( v16->fields.battleResult <= 1u )
            goto LABEL_67;
          v16->fields.action = (struct System_String_o *)method;
          sub_B16F98(&v16->fields.action, method);
          if ( !v13->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v13 + 32, 0LL);
          v18 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(this, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v16->fields.battleResult <= 2u )
            goto LABEL_67;
          v16->fields.voicePlayedArray = (struct System_Int32_array_array *)v18;
          sub_B16F98(&v16->fields.voicePlayedArray, v18);
          this = (BattleResultRequest_Argument_o *)StringLiteral_698;
          if ( StringLiteral_698 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(StringLiteral_698, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            method = (const MethodInfo *)StringLiteral_698;
          }
          else
          {
            method = 0LL;
          }
          if ( v16->fields.battleResult <= 3u )
            goto LABEL_67;
          v16->fields.aliveUniqueIds = (struct System_Int32_array *)method;
          sub_B16F98(&v16->fields.aliveUniqueIds, method);
          if ( v13->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v13 + 36, 0LL);
          v20 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(this, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v16->fields.battleResult <= 4u )
            goto LABEL_67;
          v16->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v20;
          sub_B16F98(&v16->fields.raidResult, v20);
          this = (BattleResultRequest_Argument_o *)StringLiteral_15807;
          if ( StringLiteral_15807 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B170BC(StringLiteral_15807, v16->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            method = (const MethodInfo *)StringLiteral_15807;
          }
          else
          {
            method = 0LL;
          }
          if ( v16->fields.battleResult <= 5u )
          {
LABEL_67:
            sub_B17100(this, method, v2);
            sub_B170A0();
          }
          v16->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)method;
          p_raidResult = &v16->fields.superBossResult;
        }
        sub_B16F98(p_raidResult, method);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_43823856((System_String_array *)v16, 0LL);
        v10 = (System_String_o *)this;
      }
      voicePlayedArray = v3->fields.voicePlayedArray;
      ++v11;
      if ( !voicePlayedArray )
LABEL_65:
        sub_B170D4();
    }
  }
  return System_String__Concat_43746016(
           (System_String_o *)StringLiteral_15571,
           v10,
           (System_String_o *)StringLiteral_15807,
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