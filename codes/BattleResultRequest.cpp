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
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  int v147; // w1
  int v148; // w2
  __int64 v149; // x3
  int v150; // w1
  int v151; // w2
  __int64 v152; // x3
  int v153; // w1
  int v154; // w2
  __int64 v155; // x3
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  int v159; // w1
  int v160; // w2
  __int64 v161; // x3
  int v162; // w1
  int v163; // w2
  __int64 v164; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v165; // x21
  __int64 StatusLong; // x0
  __int64 v167; // x1
  System_Xml_Schema_XmlSchemaObject_o *v168; // x0
  System_Xml_Schema_XmlSchemaObject_o *v169; // x0
  System_String_o *v170; // x0
  System_String_o *v171; // x0
  System_Xml_Schema_XmlSchemaObject_o *v172; // x0
  System_Xml_Schema_XmlSchemaObject_o *v173; // x0
  WarBoardUiData_SaveData_array *v174; // x0
  System_String_o *v175; // x0
  System_String_o *v176; // x0
  signed int max_length; // w8
  signed int v178; // w19
  __int64 v179; // x20
  signed int v180; // w8
  signed int v181; // w19
  __int64 v182; // x22
  unsigned __int64 v183; // x8
  __int64 v184; // x23
  unsigned __int64 v185; // x9
  __int64 v186; // x12
  int64_t UserId; // x19
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_40367604; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v189; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v190; // x0
  __int64 v191; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v192; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v193; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v195; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v196; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v197; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v198; // x0
  System_Byte_array *v199; // x19
  System_Xml_Schema_XmlSchemaObject_o *v200; // x0
  System_Int32_array_array *v201; // x10
  __int64 v202; // x8
  System_String_o *v203; // x22
  unsigned __int64 v204; // x20
  System_Int32_array *v205; // x25
  System_String_array *v206; // x19
  __int64 v207; // x1
  __int64 v208; // x1
  System_String_o *v209; // x22
  __int64 v210; // x1
  System_String_o *v211; // x22
  __int64 v212; // x1
  System_String_o *v213; // x22
  __int64 v214; // x1
  System_String_o *v215; // x22
  __int64 v216; // x1
  System_String_o **v217; // x0
  System_String_o *v218; // x0
  System_String_o *v219; // x0
  MiniMessagePack_MiniMessagePacker_o *v220; // x19
  System_Byte_array *v221; // x19
  System_Byte_array *v222; // x19
  System_String_o *v223; // x0
  __int64 v224; // x0
  __int64 v225; // x0
  int64_t v227; // [xsp+8h] [xbp-98h]
  int32_t v233; // [xsp+38h] [xbp-68h] BYREF
  int32_t v234; // [xsp+3Ch] [xbp-64h] BYREF
  int32_t v235; // [xsp+40h] [xbp-60h] BYREF
  int32_t v236; // [xsp+44h] [xbp-5Ch] BYREF
  int64_t v237; // [xsp+48h] [xbp-58h] BYREF

  if ( (byte_42E5732 & 1) == 0 )
  {
    sub_B5D5C4(&System_BitConverter_TypeInfo, battleId, battleResult, *(_QWORD *)&winResult);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&System_Convert_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Crc32_TypeInfo, v33, v34, v35);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__Add__, v36, v37, v38);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v39, v40, v41);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v42, v43, v44);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Concat_byte___, v45, v46, v47);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_byte___, v48, v49, v50);
    sub_B5D5C4(&int_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&long_TypeInfo, v54, v55, v56);
    sub_B5D5C4(&JsonManager_TypeInfo, v57, v58, v59);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__, v60, v61, v62);
    sub_B5D5C4(&MiniMessagePack_MiniMessagePacker_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&NetworkManager_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&string___TypeInfo, v69, v70, v71);
    sub_B5D5C4(&uint_TypeInfo, v72, v73, v74);
    sub_B5D5C4(&StringLiteral_22155/*"routeSelect"*/, v75, v76, v77);
    sub_B5D5C4(&StringLiteral_22094/*"result"*/, v78, v79, v80);
    sub_B5D5C4(&StringLiteral_22017/*"recordValueJson"*/, v81, v82, v83);
    sub_B5D5C4(&StringLiteral_17391/*"calledEnemyUniqueIds"*/, v84, v85, v86);
    sub_B5D5C4(&StringLiteral_22448/*"skillShiftNpcSvtIds"*/, v87, v88, v89);
    sub_B5D5C4(&StringLiteral_21969/*"raidResult"*/, v90, v91, v92);
    sub_B5D5C4(&StringLiteral_23291/*"useTreasureDevices"*/, v93, v94, v95);
    sub_B5D5C4(&StringLiteral_22016/*"recordType"*/, v96, v97, v98);
    sub_B5D5C4(&StringLiteral_754/*",["*/, v99, v100, v101);
    sub_B5D5C4(&StringLiteral_22449/*"skillShiftUniqueIds"*/, v102, v103, v104);
    sub_B5D5C4(&StringLiteral_18093/*"dataLostUniqueIds"*/, v105, v106, v107);
    sub_B5D5C4(&StringLiteral_23293/*"usedEquipSkillList"*/, v108, v109, v110);
    sub_B5D5C4(&StringLiteral_18516/*"elapsedTurn"*/, v111, v112, v113);
    sub_B5D5C4(&StringLiteral_23294/*"usedTurnList"*/, v114, v115, v116);
    sub_B5D5C4(&StringLiteral_22768/*"svtCommonFlagList"*/, v117, v118, v119);
    sub_B5D5C4(&StringLiteral_22220/*"scores"*/, v120, v121, v122);
    sub_B5D5C4(&StringLiteral_23563/*"waveInfo"*/, v123, v124, v125);
    sub_B5D5C4(&StringLiteral_16862/*"battleStatus"*/, v126, v127, v128);
    sub_B5D5C4(&StringLiteral_707/*","*/, v129, v130, v131);
    sub_B5D5C4(&StringLiteral_22928/*"tdPlayed"*/, v132, v133, v134);
    sub_B5D5C4(&StringLiteral_23490/*"voicePlayedList"*/, v135, v136, v137);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v138, v139, v140);
    sub_B5D5C4(&StringLiteral_23593/*"winResult"*/, v141, v142, v143);
    sub_B5D5C4(&StringLiteral_1/*""*/, v144, v145, v146);
    sub_B5D5C4(&StringLiteral_22752/*"superBossResult"*/, v147, v148, v149);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v150, v151, v152);
    sub_B5D5C4(&StringLiteral_16853/*"battleId"*/, v153, v154, v155);
    sub_B5D5C4(&StringLiteral_16856/*"battleResult"*/, v156, v157, v158);
    sub_B5D5C4(&StringLiteral_16428/*"action"*/, v159, v160, v161);
    sub_B5D5C4(&StringLiteral_16503/*"aliveUniqueIds"*/, v162, v163, v164);
    byte_42E5732 = 1;
  }
  v165 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v165,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  v227 = battleId;
  v237 = battleId;
  StatusLong = j_il2cpp_value_box_0(long_TypeInfo, &v237);
  if ( !v165 )
    goto LABEL_119;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16853/*"battleId"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)StatusLong,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v236 = battleResult;
  v168 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v236);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16856/*"battleResult"*/,
    v168,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v235 = winResult;
  v169 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v235);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23593/*"winResult"*/,
    v169,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22220/*"scores"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)scores,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16428/*"action"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)action,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v170 = JsonManager__toJson(&raidResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_21969/*"raidResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v170,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v171 = JsonManager__toJson(&superBossResult->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22752/*"superBossResult"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v171,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v234 = elapsedTurn;
  v172 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v234);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18516/*"elapsedTurn"*/,
    v172,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v233 = recordType;
  v173 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(int_TypeInfo, &v233);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22016/*"recordType"*/,
    v173,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22017/*"recordValueJson"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)recordJson,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !firstNpPlayList )
    goto LABEL_119;
  v174 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
           (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)firstNpPlayList,
           (const MethodInfo_305910C *)Method_System_Collections_Generic_List_Dictionary_string__object___ToArray__);
  v175 = JsonManager__toJson(&v174->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22928/*"tdPlayed"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v175,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !playerServantNoblePhantasmUsageData )
    goto LABEL_119;
  v176 = PlayerServantNoblePhantasmUsageData__ConvertToJsonString(playerServantNoblePhantasmUsageData, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23291/*"useTreasureDevices"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v176,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23293/*"usedEquipSkillList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedEquipSkillDict,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22768/*"svtCommonFlagList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)svtCommonFlagDict,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22449/*"skillShiftUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftUniqueIdArray,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22448/*"skillShiftNpcSvtIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)skillShiftNpcSvtIdArray,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_17391/*"calledEnemyUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)calledEnemyUniqueIdArray,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_22155/*"routeSelect"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)routeSelectIdArray,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_18093/*"dataLostUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)dataLostUniqueIdArray,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !raidResult )
    goto LABEL_119;
  max_length = raidResult->max_length;
  if ( max_length < 1 )
  {
    v179 = 0LL;
    if ( !superBossResult )
      goto LABEL_119;
  }
  else
  {
    v178 = 0;
    v179 = 0LL;
    do
    {
      if ( v178 >= (unsigned int)max_length )
        goto LABEL_118;
      StatusLong = (__int64)raidResult->m_Items[v178];
      if ( !StatusLong )
        goto LABEL_119;
      StatusLong = BattleResultRequest_RaidResult__getStatusLong((BattleResultRequest_RaidResult_o *)StatusLong, 0LL);
      max_length = raidResult->max_length;
      ++v178;
      v179 += StatusLong;
    }
    while ( v178 < max_length );
    if ( !superBossResult )
LABEL_119:
      sub_B5D69C(StatusLong, v167);
  }
  v180 = superBossResult->max_length;
  if ( v180 >= 1 )
  {
    v181 = 0;
    v182 = 0LL;
    while ( v181 < (unsigned int)v180 )
    {
      StatusLong = (__int64)superBossResult->m_Items[v181];
      if ( !StatusLong )
        goto LABEL_119;
      StatusLong = BattleResultRequest_SuperBossResult__getStatusLong(
                     (BattleResultRequest_SuperBossResult_o *)StatusLong,
                     0LL);
      v180 = superBossResult->max_length;
      ++v181;
      v182 += StatusLong;
      if ( v181 >= v180 )
        goto LABEL_25;
    }
LABEL_118:
    v224 = sub_B5D6C8(StatusLong);
    sub_B5D668(v224, 0LL);
  }
  v182 = 0LL;
LABEL_25:
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16503/*"aliveUniqueIds"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)aliveUniqueIds,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( !aliveUniqueIds )
    goto LABEL_119;
  v183 = aliveUniqueIds->max_length;
  if ( (__int64)(v183 << 32) >= 1 )
  {
    v184 = 0LL;
    v185 = 0LL;
    while ( v185 < v183 )
    {
      v186 = aliveUniqueIds->m_Items[++v185];
      v184 += v186;
      if ( (__int64)v185 >= (int)v183 )
        goto LABEL_32;
    }
    goto LABEL_118;
  }
  v184 = 0LL;
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
  Bytes_40367604 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(
                                                                          UserId + battleResult,
                                                                          0LL);
  v189 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(
                                                                v179 - 4231125,
                                                                0LL);
  v190 = System_Linq_Enumerable__Concat_byte_(
           Bytes_40367604,
           v189,
           (const MethodInfo_1CA48B0 *)Method_System_Linq_Enumerable_Concat_byte___);
  if ( v184 >= 0 )
    v191 = v184;
  else
    v191 = v184 + 1;
  v192 = v190;
  v193 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(v191 >> 1, 0LL);
  v194 = System_Linq_Enumerable__Concat_byte_(
           v192,
           v193,
           (const MethodInfo_1CA48B0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v195 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(
                                                                v227 - 0x7FFFFFFF,
                                                                0LL);
  v196 = System_Linq_Enumerable__Concat_byte_(
           v194,
           v195,
           (const MethodInfo_1CA48B0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v197 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(
                                                                v182 - 2469110,
                                                                0LL);
  v198 = System_Linq_Enumerable__Concat_byte_(
           v196,
           v197,
           (const MethodInfo_1CA48B0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v199 = System_Linq_Enumerable__ToArray_byte_(
           v198,
           (const MethodInfo_1CB75A4 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  LODWORD(v237) = Crc32__Compute(v199, 0LL);
  v200 = (System_Xml_Schema_XmlSchemaObject_o *)j_il2cpp_value_box_0(uint_TypeInfo, &v237);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_16862/*"battleStatus"*/,
    v200,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v201 = voicePlayedArray;
  if ( voicePlayedArray )
  {
    v202 = *(_QWORD *)&voicePlayedArray->max_length;
    v203 = (System_String_o *)StringLiteral_1/*""*/;
    if ( (int)v202 >= 1 )
    {
      v204 = 0LL;
      while ( v204 < (unsigned int)v202 )
      {
        v205 = voicePlayedArray->m_Items[v204];
        if ( v205 && v205->max_length == 2 )
        {
          if ( System_String__IsNullOrEmpty(v203, 0LL) )
          {
            StatusLong = sub_B5D5DC(string___TypeInfo, 5LL);
            if ( !StatusLong )
              goto LABEL_119;
            v206 = (System_String_array *)StatusLong;
            StatusLong = StringLiteral_15824/*"["*/;
            if ( StringLiteral_15824/*"["*/ )
            {
              StatusLong = sub_B5D684(StringLiteral_15824/*"["*/, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v207 = StringLiteral_15824/*"["*/;
            }
            else
            {
              v207 = 0LL;
            }
            if ( !v206->max_length )
              goto LABEL_118;
            v206->m_Items[0] = (System_String_o *)v207;
            sub_B5D560(v206->m_Items);
            if ( !v205->max_length )
              goto LABEL_118;
            StatusLong = (__int64)System_Int32__ToString((int)v205 + 32, 0LL);
            v209 = (System_String_o *)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B5D684(StatusLong, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
            }
            if ( v206->max_length <= 1 )
              goto LABEL_118;
            v206->m_Items[1] = v209;
            sub_B5D560(&v206->m_Items[1]);
            StatusLong = StringLiteral_707/*","*/;
            if ( StringLiteral_707/*","*/ )
            {
              StatusLong = sub_B5D684(StringLiteral_707/*","*/, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v210 = StringLiteral_707/*","*/;
            }
            else
            {
              v210 = 0LL;
            }
            if ( v206->max_length <= 2 )
              goto LABEL_118;
            v206->m_Items[2] = (System_String_o *)v210;
            sub_B5D560(&v206->m_Items[2]);
            if ( v205->max_length <= 1 )
              goto LABEL_118;
            StatusLong = (__int64)System_Int32__ToString((int)v205 + 36, 0LL);
            v213 = (System_String_o *)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B5D684(StatusLong, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
            }
            if ( v206->max_length <= 3 )
              goto LABEL_118;
            v206->m_Items[3] = v213;
            sub_B5D560(&v206->m_Items[3]);
            StatusLong = StringLiteral_16061/*"]"*/;
            if ( StringLiteral_16061/*"]"*/ )
            {
              StatusLong = sub_B5D684(StringLiteral_16061/*"]"*/, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v214 = StringLiteral_16061/*"]"*/;
            }
            else
            {
              v214 = 0LL;
            }
            if ( v206->max_length <= 4 )
              goto LABEL_118;
            v206->m_Items[4] = (System_String_o *)v214;
            v217 = &v206->m_Items[4];
          }
          else
          {
            StatusLong = sub_B5D5DC(string___TypeInfo, 6LL);
            if ( !StatusLong )
              goto LABEL_119;
            v206 = (System_String_array *)StatusLong;
            if ( v203 )
            {
              StatusLong = sub_B5D684(v203, *(_QWORD *)(*(_QWORD *)StatusLong + 64LL));
              if ( !StatusLong )
              {
LABEL_120:
                v225 = sub_B5D6BC();
                sub_B5D668(v225, 0LL);
              }
            }
            if ( !v206->max_length )
              goto LABEL_118;
            v206->m_Items[0] = v203;
            sub_B5D560(v206->m_Items);
            StatusLong = StringLiteral_754/*",["*/;
            if ( StringLiteral_754/*",["*/ )
            {
              StatusLong = sub_B5D684(StringLiteral_754/*",["*/, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v208 = StringLiteral_754/*",["*/;
            }
            else
            {
              v208 = 0LL;
            }
            if ( v206->max_length <= 1 )
              goto LABEL_118;
            v206->m_Items[1] = (System_String_o *)v208;
            sub_B5D560(&v206->m_Items[1]);
            if ( !v205->max_length )
              goto LABEL_118;
            StatusLong = (__int64)System_Int32__ToString((int)v205 + 32, 0LL);
            v211 = (System_String_o *)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B5D684(StatusLong, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
            }
            if ( v206->max_length <= 2 )
              goto LABEL_118;
            v206->m_Items[2] = v211;
            sub_B5D560(&v206->m_Items[2]);
            StatusLong = StringLiteral_707/*","*/;
            if ( StringLiteral_707/*","*/ )
            {
              StatusLong = sub_B5D684(StringLiteral_707/*","*/, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v212 = StringLiteral_707/*","*/;
            }
            else
            {
              v212 = 0LL;
            }
            if ( v206->max_length <= 3 )
              goto LABEL_118;
            v206->m_Items[3] = (System_String_o *)v212;
            sub_B5D560(&v206->m_Items[3]);
            if ( v205->max_length <= 1 )
              goto LABEL_118;
            StatusLong = (__int64)System_Int32__ToString((int)v205 + 36, 0LL);
            v215 = (System_String_o *)StatusLong;
            if ( StatusLong )
            {
              StatusLong = sub_B5D684(StatusLong, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
            }
            if ( v206->max_length <= 4 )
              goto LABEL_118;
            v206->m_Items[4] = v215;
            sub_B5D560(&v206->m_Items[4]);
            StatusLong = StringLiteral_16061/*"]"*/;
            if ( StringLiteral_16061/*"]"*/ )
            {
              StatusLong = sub_B5D684(StringLiteral_16061/*"]"*/, v206->obj.klass->_1.element_class);
              if ( !StatusLong )
                goto LABEL_120;
              v216 = StringLiteral_16061/*"]"*/;
            }
            else
            {
              v216 = 0LL;
            }
            if ( v206->max_length <= 5 )
              goto LABEL_118;
            v206->m_Items[5] = (System_String_o *)v216;
            v217 = &v206->m_Items[5];
          }
          sub_B5D560(v217);
          StatusLong = (__int64)System_String__Concat_44657912(v206, 0LL);
          v201 = voicePlayedArray;
          v203 = (System_String_o *)StatusLong;
        }
        LODWORD(v202) = v201->max_length;
        if ( (__int64)++v204 >= (int)v202 )
          goto LABEL_106;
      }
      goto LABEL_118;
    }
LABEL_106:
    v218 = System_String__Concat_44580072(
             (System_String_o *)StringLiteral_15824/*"["*/,
             v203,
             (System_String_o *)StringLiteral_16061/*"]"*/,
             0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      v165,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23490/*"voicePlayedList"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v218,
      (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  }
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23294/*"usedTurnList"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)usedTurnArray,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v219 = JsonManager__toJson(&waveInfos->obj, 0, 0, 0LL);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
    v165,
    (System_Xml_XmlQualifiedName_o *)StringLiteral_23563/*"waveInfo"*/,
    (System_Xml_Schema_XmlSchemaObject_o *)v219,
    (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__object__Add__);
  v220 = (MiniMessagePack_MiniMessagePacker_o *)sub_B5D694(MiniMessagePack_MiniMessagePacker_TypeInfo);
  MiniMessagePack_MiniMessagePacker___ctor(v220, 0LL);
  if ( !v220 )
    goto LABEL_119;
  v221 = MiniMessagePack_MiniMessagePacker__PackClass(v220, (Il2CppObject *)v165, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  v222 = CatAndMouseGame__CatGame5Bytes(v221, 0LL);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v223 = System_Convert__ToBase64String(v222, 0LL);
  RequestBase__addField_32362260((RequestBase_o *)this, (System_String_o *)StringLiteral_22094/*"result"*/, v223, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall BattleResultRequest__debugPrint(BattleResultRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *paramString; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E5734 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v11, v12, v13);
    byte_42E5734 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  paramString = this->fields.paramString;
  if ( !paramString )
    sub_B5D69C(0LL, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)paramString,
    (const MethodInfo_2F27198 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v15,
            (const MethodInfo_2767D00 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__) )
    ;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    (System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)&v15,
    (const MethodInfo_2767E68 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
}


System_String_o *__fastcall BattleResultRequest__getMockData(BattleResultRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3

  if ( (byte_42E5731 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_9251/*"MockBattleResultRequest"*/, v4, v5, v6);
    byte_42E5731 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9251/*"MockBattleResultRequest"*/, 0LL);
}


System_String_o *__fastcall BattleResultRequest__getURL(BattleResultRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42E5730 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_16834/*"battle/result"*/, v4, v5, v6);
    byte_42E5730 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_16834/*"battle/result"*/, 0LL);
}


void __fastcall BattleResultRequest__requestCompleted(
        BattleResultRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  ResponseData_o *v18; // x0
  ResponseData_o *v19; // x20
  Il2CppObject *success; // x20
  System_String_o *v21; // x1

  if ( (byte_42E5733 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)responseList, (_DWORD)method, v3);
    sub_B5D5C4(&ResponseCommandKind_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ServantCommentManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&TopHomeRequest_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v15, v16, v17);
    byte_42E5733 = 1;
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
  v18 = ResponseCommandKind__SearchData(22, responseList, 0LL);
  if ( v18
    && (v19 = v18, ResponseData__checkError_29500464(v18, 0LL))
    && (success = (Il2CppObject *)v19->fields.success) != 0LL )
  {
    if ( (BYTE3(ServantCommentManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantCommentManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantCommentManager_TypeInfo);
    }
    ServantCommentManager__UpdateChapter(0LL);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v21 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v21 = (System_String_o *)StringLiteral_21345/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v21, 0LL);
}


void __fastcall BattleResultRequest_Argument___ctor(BattleResultRequest_Argument_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v41; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v42; // x21
  System_Collections_Generic_Dictionary_int__int__o *v43; // x21

  if ( (byte_42E60B7 & 1) == 0 )
  {
    sub_B5D5C4(&BattleData_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object___ctor__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&int_____TypeInfo, v17, v18, v19);
    sub_B5D5C4(&int___TypeInfo, v20, v21, v22);
    sub_B5D5C4(&long___TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Dictionary_string__object____ctor__, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_Dictionary_string__object___TypeInfo, v29, v30, v31);
    sub_B5D5C4(&BattleResultRequest_RaidResult___TypeInfo, v32, v33, v34);
    sub_B5D5C4(&BattleResultRequest_SuperBossResult___TypeInfo, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_1/*""*/, v38, v39, v40);
    byte_42E60B7 = 1;
  }
  this->fields.scores = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.scores);
  this->fields.action = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560(&this->fields.action);
  this->fields.voicePlayedArray = (struct System_Int32_array_array *)sub_B5D5DC(int_____TypeInfo, 0LL);
  sub_B5D560(&this->fields.voicePlayedArray);
  this->fields.aliveUniqueIds = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  sub_B5D560(&this->fields.aliveUniqueIds);
  this->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)sub_B5D5DC(
                                                                             BattleResultRequest_RaidResult___TypeInfo,
                                                                             0LL);
  sub_B5D560(&this->fields.raidResult);
  this->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)sub_B5D5DC(
                                                                                       BattleResultRequest_SuperBossResult___TypeInfo,
                                                                                       0LL);
  sub_B5D560(&this->fields.superBossResult);
  this->fields.usedTurnArray = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  sub_B5D560(&this->fields.usedTurnArray);
  this->fields.recordType = 1;
  v41 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__object__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v41,
    (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__object___ctor__);
  this->fields.recordJson = (struct System_Collections_Generic_Dictionary_string__object__o *)v41;
  sub_B5D560(&this->fields.recordJson);
  v42 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Dictionary_string__object___TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v42,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Dictionary_string__object____ctor__);
  this->fields.firstNpPlayList = (struct System_Collections_Generic_List_Dictionary_string__object___o *)v42;
  sub_B5D560(&this->fields.firstNpPlayList);
  v43 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
  System_Collections_Generic_Dictionary_int__int____ctor(
    v43,
    (const MethodInfo_2F0A2B4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
  this->fields.usedEquipSkillDict = v43;
  sub_B5D560(&this->fields.usedEquipSkillDict);
  if ( (BYTE3(BattleData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  this->fields.svtCommonFlagDict = BattleData__GetSavedServantCommonFlagDict(0LL);
  sub_B5D560(&this->fields.svtCommonFlagDict);
  this->fields.skillShiftUniqueIds = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  sub_B5D560(&this->fields.skillShiftUniqueIds);
  this->fields.skillShiftNpcSvtIds = (struct System_Int64_array *)sub_B5D5DC(long___TypeInfo, 0LL);
  sub_B5D560(&this->fields.skillShiftNpcSvtIds);
  this->fields.routeSelect = (struct System_Int32_array *)sub_B5D5DC(int___TypeInfo, 0LL);
  sub_B5D560(&this->fields.routeSelect);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


uint32_t __fastcall BattleResultRequest_Argument__ConvertBattleStatus(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultRequest_Argument_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct BattleResultRequest_RaidResult_array *raidResult; // x8
  int max_length; // w9
  int64_t v19; // x20
  int v20; // w10
  __int64 v21; // x11
  int *v22; // x12
  struct BattleResultRequest_SuperBossResult_array *superBossResult; // x8
  int v24; // w9
  int64_t v25; // x21
  int v26; // w10
  __int64 v27; // x11
  int *v28; // x12
  struct System_Int32_array *aliveUniqueIds; // x12
  unsigned __int64 v30; // x8
  __int64 v31; // x9
  unsigned __int64 v32; // x10
  int32_t *v33; // x12
  __int64 v34; // x13
  __int64 v35; // x8
  __int64 v36; // x22
  int64_t UserId; // x0
  __int64 battleResult; // x24
  int64_t v39; // x23
  System_Collections_Generic_IEnumerable_TSource__o *Bytes_40367604; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x0
  System_Byte_array *v49; // x19
  __int64 v51; // x0

  v4 = this;
  if ( (byte_42E60B5 & 1) == 0 )
  {
    sub_B5D5C4(&System_BitConverter_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Crc32_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Concat_byte___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_byte___, v11, v12, v13);
    this = (BattleResultRequest_Argument_o *)sub_B5D5C4(&NetworkManager_TypeInfo, v14, v15, v16);
    byte_42E60B5 = 1;
  }
  raidResult = v4->fields.raidResult;
  if ( !raidResult )
    goto LABEL_38;
  max_length = raidResult->max_length;
  v19 = -4231125LL;
  if ( max_length >= 1 )
  {
    v20 = 0;
    v21 = 0LL;
    do
    {
      if ( v20 >= (unsigned int)max_length )
      {
LABEL_37:
        v51 = sub_B5D6C8(this);
        sub_B5D668(v51, 0LL);
      }
      v22 = (int *)raidResult->m_Items[v20];
      if ( !v22 )
        goto LABEL_38;
      ++v20;
      v21 += v22[6] + (__int64)v22[5] + v22[4];
    }
    while ( v20 < max_length );
    v19 = v21 - 4231125;
  }
  superBossResult = v4->fields.superBossResult;
  if ( !superBossResult )
    goto LABEL_38;
  v24 = superBossResult->max_length;
  v25 = -2469110LL;
  if ( v24 >= 1 )
  {
    v26 = 0;
    v27 = 0LL;
    do
    {
      if ( v26 >= (unsigned int)v24 )
        goto LABEL_37;
      v28 = (int *)superBossResult->m_Items[v26];
      if ( !v28 )
        goto LABEL_38;
      ++v26;
      v27 += v28[6] + (__int64)v28[4] + v28[5];
    }
    while ( v26 < v24 );
    v25 = v27 - 2469110;
  }
  aliveUniqueIds = v4->fields.aliveUniqueIds;
  if ( !aliveUniqueIds )
LABEL_38:
    sub_B5D69C(this, method);
  v30 = aliveUniqueIds->max_length;
  if ( (__int64)(v30 << 32) < 1 )
  {
    v36 = 0LL;
  }
  else
  {
    v31 = 0LL;
    v32 = 0LL;
    v33 = &aliveUniqueIds->m_Items[1];
    do
    {
      if ( v32 >= v30 )
        goto LABEL_37;
      v34 = v33[v32++];
      v31 += v34;
    }
    while ( (__int64)v32 < (int)v30 );
    if ( v31 >= 0 )
      v35 = v31;
    else
      v35 = v31 + 1;
    v36 = v35 >> 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  battleResult = v4->fields.battleResult;
  v39 = UserId;
  if ( (BYTE3(System_BitConverter_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_BitConverter_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_BitConverter_TypeInfo);
  }
  Bytes_40367604 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(
                                                                          v39 + battleResult,
                                                                          0LL);
  v41 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(v19, 0LL);
  v42 = System_Linq_Enumerable__Concat_byte_(
          Bytes_40367604,
          v41,
          (const MethodInfo_1CA48B0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(v36, 0LL);
  v44 = System_Linq_Enumerable__Concat_byte_(
          v42,
          v43,
          (const MethodInfo_1CA48B0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(
                                                               v4->fields.battleId - 0x7FFFFFFF,
                                                               0LL);
  v46 = System_Linq_Enumerable__Concat_byte_(
          v44,
          v45,
          (const MethodInfo_1CA48B0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_BitConverter__GetBytes_40367604(v25, 0LL);
  v48 = System_Linq_Enumerable__Concat_byte_(
          v46,
          v47,
          (const MethodInfo_1CA48B0 *)Method_System_Linq_Enumerable_Concat_byte___);
  v49 = System_Linq_Enumerable__ToArray_byte_(
          v48,
          (const MethodInfo_1CB75A4 *)Method_System_Linq_Enumerable_ToArray_byte___);
  if ( (BYTE3(Crc32_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Crc32_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Crc32_TypeInfo);
  return Crc32__Compute(v49, 0LL);
}


System_String_o *__fastcall BattleResultRequest_Argument__ConvertVoicePlayedData(
        BattleResultRequest_Argument_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleResultRequest_Argument_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Int32_array_array *voicePlayedArray; // x8
  System_String_o *v21; // x21
  unsigned __int64 v22; // x22
  unsigned __int64 max_length; // x9
  System_Int32_array *v24; // x28
  BattleResultRequest_Argument_o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x1
  BattleResultRequest_Argument_o *v28; // x21
  __int64 v29; // x1
  BattleResultRequest_Argument_o *v30; // x21
  __int64 v31; // x1
  BattleResultRequest_Argument_o *v32; // x21
  __int64 v33; // x1
  BattleResultRequest_Argument_o *v34; // x21
  __int64 v35; // x1
  void *p_raidResult; // x0
  __int64 v38; // x0
  __int64 v39; // x0

  v4 = this;
  if ( (byte_42E60B6 & 1) == 0 )
  {
    sub_B5D5C4(&string___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_754/*",["*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_707/*","*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_1/*""*/, v14, v15, v16);
    this = (BattleResultRequest_Argument_o *)sub_B5D5C4(&StringLiteral_16061/*"]"*/, v17, v18, v19);
    byte_42E60B6 = 1;
  }
  voicePlayedArray = v4->fields.voicePlayedArray;
  v21 = (System_String_o *)StringLiteral_1/*""*/;
  if ( voicePlayedArray )
  {
    v22 = 0LL;
    while ( 1 )
    {
      max_length = voicePlayedArray->max_length;
      if ( (__int64)v22 >= (int)max_length )
        break;
      if ( v22 >= max_length )
        goto LABEL_67;
      v24 = voicePlayedArray->m_Items[v22];
      if ( v24 && v24->max_length == 2 )
      {
        if ( System_String__IsNullOrEmpty(v21, 0LL) )
        {
          this = (BattleResultRequest_Argument_o *)sub_B5D5DC(string___TypeInfo, 5LL);
          if ( !this )
            goto LABEL_65;
          v25 = this;
          this = (BattleResultRequest_Argument_o *)StringLiteral_15824/*"["*/;
          if ( StringLiteral_15824/*"["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(StringLiteral_15824/*"["*/, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v26 = StringLiteral_15824/*"["*/;
          }
          else
          {
            v26 = 0LL;
          }
          if ( !v25->fields.battleResult )
            goto LABEL_67;
          v25->fields.scores = (struct System_String_o *)v26;
          sub_B5D560(&v25->fields.scores);
          if ( !v24->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v24 + 32, 0LL);
          v28 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(this, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v25->fields.battleResult <= 1u )
            goto LABEL_67;
          v25->fields.action = (struct System_String_o *)v28;
          sub_B5D560(&v25->fields.action);
          this = (BattleResultRequest_Argument_o *)StringLiteral_707/*","*/;
          if ( StringLiteral_707/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(StringLiteral_707/*","*/, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v29 = StringLiteral_707/*","*/;
          }
          else
          {
            v29 = 0LL;
          }
          if ( v25->fields.battleResult <= 2u )
            goto LABEL_67;
          v25->fields.voicePlayedArray = (struct System_Int32_array_array *)v29;
          sub_B5D560(&v25->fields.voicePlayedArray);
          if ( v24->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v24 + 36, 0LL);
          v32 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(this, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v25->fields.battleResult <= 3u )
            goto LABEL_67;
          v25->fields.aliveUniqueIds = (struct System_Int32_array *)v32;
          sub_B5D560(&v25->fields.aliveUniqueIds);
          this = (BattleResultRequest_Argument_o *)StringLiteral_16061/*"]"*/;
          if ( StringLiteral_16061/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(StringLiteral_16061/*"]"*/, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v33 = StringLiteral_16061/*"]"*/;
          }
          else
          {
            v33 = 0LL;
          }
          if ( v25->fields.battleResult <= 4u )
            goto LABEL_67;
          v25->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v33;
          p_raidResult = &v25->fields.raidResult;
        }
        else
        {
          this = (BattleResultRequest_Argument_o *)sub_B5D5DC(string___TypeInfo, 6LL);
          if ( !this )
            goto LABEL_65;
          v25 = this;
          if ( v21 )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(v21, this->klass->_1.element_class);
            if ( !this )
            {
LABEL_68:
              v39 = sub_B5D6BC();
              sub_B5D668(v39, 0LL);
            }
          }
          if ( !v25->fields.battleResult )
            goto LABEL_67;
          v25->fields.scores = v21;
          sub_B5D560(&v25->fields.scores);
          this = (BattleResultRequest_Argument_o *)StringLiteral_754/*",["*/;
          if ( StringLiteral_754/*",["*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(StringLiteral_754/*",["*/, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v27 = StringLiteral_754/*",["*/;
          }
          else
          {
            v27 = 0LL;
          }
          if ( v25->fields.battleResult <= 1u )
            goto LABEL_67;
          v25->fields.action = (struct System_String_o *)v27;
          sub_B5D560(&v25->fields.action);
          if ( !v24->max_length )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v24 + 32, 0LL);
          v30 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(this, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v25->fields.battleResult <= 2u )
            goto LABEL_67;
          v25->fields.voicePlayedArray = (struct System_Int32_array_array *)v30;
          sub_B5D560(&v25->fields.voicePlayedArray);
          this = (BattleResultRequest_Argument_o *)StringLiteral_707/*","*/;
          if ( StringLiteral_707/*","*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(StringLiteral_707/*","*/, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v31 = StringLiteral_707/*","*/;
          }
          else
          {
            v31 = 0LL;
          }
          if ( v25->fields.battleResult <= 3u )
            goto LABEL_67;
          v25->fields.aliveUniqueIds = (struct System_Int32_array *)v31;
          sub_B5D560(&v25->fields.aliveUniqueIds);
          if ( v24->max_length <= 1 )
            goto LABEL_67;
          this = (BattleResultRequest_Argument_o *)System_Int32__ToString((int)v24 + 36, 0LL);
          v34 = this;
          if ( this )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(this, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
          }
          if ( v25->fields.battleResult <= 4u )
            goto LABEL_67;
          v25->fields.raidResult = (struct BattleResultRequest_RaidResult_array *)v34;
          sub_B5D560(&v25->fields.raidResult);
          this = (BattleResultRequest_Argument_o *)StringLiteral_16061/*"]"*/;
          if ( StringLiteral_16061/*"]"*/ )
          {
            this = (BattleResultRequest_Argument_o *)sub_B5D684(StringLiteral_16061/*"]"*/, v25->klass->_1.element_class);
            if ( !this )
              goto LABEL_68;
            v35 = StringLiteral_16061/*"]"*/;
          }
          else
          {
            v35 = 0LL;
          }
          if ( v25->fields.battleResult <= 5u )
          {
LABEL_67:
            v38 = sub_B5D6C8(this);
            sub_B5D668(v38, 0LL);
          }
          v25->fields.superBossResult = (struct BattleResultRequest_SuperBossResult_array *)v35;
          p_raidResult = &v25->fields.superBossResult;
        }
        sub_B5D560(p_raidResult);
        this = (BattleResultRequest_Argument_o *)System_String__Concat_44657912((System_String_array *)v25, 0LL);
        v21 = (System_String_o *)this;
      }
      voicePlayedArray = v4->fields.voicePlayedArray;
      ++v22;
      if ( !voicePlayedArray )
LABEL_65:
        sub_B5D69C(this, method);
    }
  }
  return System_String__Concat_44580072(
           (System_String_o *)StringLiteral_15824/*"["*/,
           v21,
           (System_String_o *)StringLiteral_16061/*"]"*/,
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