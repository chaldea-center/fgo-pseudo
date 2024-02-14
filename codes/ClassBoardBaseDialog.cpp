void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4217AAB & 1) == 0 )
  {
    sub_B0D8A4(&BaseDialog_TypeInfo, method);
    byte_4217AAB = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__Close(
        ClassBoardBaseDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSquare; // x21
  ClassBoardSquare_o *v6; // x0

  if ( (byte_4217AAA & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, callback);
    byte_4217AAA = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v6 = this->fields.classBoardSquare;
    if ( !v6 )
      sub_B0D97C(0LL);
    ClassBoardSquare__SetSelectedEffectActive(v6, 0, 0LL);
  }
  BaseDialog__Close((BaseDialog_o *)this, callback, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardBaseDialog__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  int32_t v4; // w21
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
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
  System_Xml_XmlQualifiedName_o *IsPassive; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v60; // x26
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  signed int max_length; // w8
  int v66; // w25
  int v67; // w24
  unsigned int v68; // w27
  ClassBoardSquareEntity_o *v69; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v70; // x19
  System_Xml_XmlQualifiedName_o *v71; // x20
  __int64 v72; // x1
  __int64 v73; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v74; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v76; // x21
  SkillLvEntity_o *v77; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v78; // x19
  __int64 v79; // x1
  __int64 v80; // x2
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v81; // x20
  const MethodInfo *v82; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v83; // x22
  _BOOL8 v84; // x0
  Il2CppObject *current; // x20
  __int64 v86; // x1
  __int64 v87; // x2
  System_String_o *v88; // x0
  System_Xml_XmlQualifiedName_o *v89; // x26
  _BOOL8 v90; // x0
  __int64 v91; // x1
  __int64 v92; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v93; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v94; // x0
  FuncDispEntity_o *v95; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v96; // x23
  __int64 v97; // x1
  __int64 v98; // x2
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v99; // x21
  __int64 v100; // x0
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v103; // w26
  int32_t v104; // w24
  int32_t v105; // w25
  int32_t v106; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v107; // x20
  int v108; // w8
  System_String_o *v109; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t skillType; // w24
  System_String_o *v115; // x25
  __int64 v116; // x1
  __int64 v117; // x2
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v118; // x20
  int v119; // w23
  _BOOL8 v120; // x0
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *Name; // x19
  __int64 v124; // x8
  __int64 v125; // x8
  __int64 v126; // x25
  int32_t v127; // w24
  int32_t v128; // w8
  Il2CppObject *v129; // x19
  __int64 v130; // x0
  const MethodInfo *v131; // x1
  _DWORD *v132; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v134; // x8
  __int64 v135; // x10
  __int64 v136; // x11
  bool v137; // cc
  _DWORD *v138; // x8
  int v139; // w19
  __int64 v140; // x0
  const MethodInfo *v141; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v142; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  System_String_o *v144; // x0
  __int64 v145; // x1
  __int64 v146; // x2
  System_String_o *v147; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v148; // x8
  _DWORD *v149; // x9
  int32_t v150; // w25
  _DWORD *v151; // x9
  int32_t v152; // w26
  _DWORD *v153; // x8
  int32_t v154; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v155; // x22
  __int64 v156; // x0
  __int64 v157; // x0
  int v158; // w20
  __int64 v159; // x1
  __int64 v160; // x2
  ClassBoardBaseDialog___c_c *v161; // x0
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_0; // x20
  Il2CppObject *v164; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v165; // x0
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v172; // x0
  __int64 v173; // x1
  __int64 v174; // x2
  ClassBoardBaseDialog___c_c *v175; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v176; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v177; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x20
  Il2CppObject *v179; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v180; // x0
  System_String_array **v181; // x2
  System_String_array **v182; // x3
  System_Boolean_array **v183; // x4
  System_Int32_array **v184; // x5
  System_Int32_array *v185; // x6
  System_Int32_array *v186; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v187; // x0
  __int64 v189; // x0
  ClassBoardCommandSpellMaster_o *v191; // [xsp+10h] [xbp-180h]
  int v192; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v193; // [xsp+20h] [xbp-170h]
  int32_t v194; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v195; // [xsp+30h] [xbp-160h]
  int v196; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v197; // [xsp+40h] [xbp-150h]
  int v198; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v199; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v200; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v201; // [xsp+60h] [xbp-130h]
  System_String_o *v202; // [xsp+60h] [xbp-130h]
  _WORD v203[26]; // [xsp+68h] [xbp-128h] BYREF
  int v204; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v205; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v206; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v207; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v208; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v209; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v210; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v212; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4217AA7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, *(_QWORD *)&dispType);
    sub_B0D8A4(&Method_DataManager_GetMaster_FuncDispMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_B0D8A4(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v13);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v14);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v16);
    sub_B0D8A4(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v17);
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v18);
    sub_B0D8A4(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v21);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v22);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v23);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v24);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v25);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v27);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v28);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v29);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v30);
    sub_B0D8A4(&Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__, v31);
    sub_B0D8A4(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v32);
    sub_B0D8A4(&int___TypeInfo, v33);
    sub_B0D8A4(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v34);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v35);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Add__, v36);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v37);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__Contains__, v38);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v39);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v40);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor__, v41);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v42);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v43);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v44);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v45);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v46);
    sub_B0D8A4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v47);
    sub_B0D8A4(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v48);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v49);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v50);
    sub_B0D8A4(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v51);
    sub_B0D8A4(&Method_System_String_Join_int___, v52);
    sub_B0D8A4(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v53);
    sub_B0D8A4(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v54);
    sub_B0D8A4(&ClassBoardBaseDialog___c_TypeInfo, v55);
    sub_B0D8A4(&StringLiteral_705/*","*/, v56);
    sub_B0D8A4(&StringLiteral_1/*""*/, v57);
    byte_4217AA7 = 1;
  }
  v212 = 0LL;
  entity = 0LL;
  v210 = 0LL;
  entitys = 0LL;
  v208 = 0LL;
  v206 = 0LL;
  memset(&v209, 0, sizeof(v209));
  memset(&v207, 0, sizeof(v207));
  memset(&v205, 0, sizeof(v205));
  v204 = 0;
  v200 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                                                                   *(_QWORD *)&dispType,
                                                                                                   ignoreTurnOrCountPassive);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v200,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_154;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v200;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillMaster___);
  v197 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v60 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v201 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v199 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B0D974(
                                                                                         System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
                                                                                         v61,
                                                                                         v62);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v199,
    (const MethodInfo_2E4A0B8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v66 = 0;
  v195 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v67 = 0;
    v68 = 0;
    v198 = 0;
    v194 = v4;
    v193 = openedSquareArray;
    v191 = v60;
    while ( 1 )
    {
      if ( v68 >= max_length )
      {
        v189 = sub_B0D9A8(IsPassive);
        sub_B0D948(v189, 0LL);
      }
      v69 = openedSquareArray->m_Items[v68];
      v70 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v63, v64);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v70,
        (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v70;
      if ( !v69 )
        break;
      IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsPassive(v69, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( v4 != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         Master_WarQuestSelectionMaster,
                                                         &entity,
                                                         v69->fields.targetId,
                                                         (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            IsPassive = (System_Xml_XmlQualifiedName_o *)v197;
            if ( !v197 )
              break;
            IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvMaster__TryGetEntity(
                                                           v197,
                                                           &v212,
                                                           v69->fields.targetId,
                                                           v69->fields.upSkillLv,
                                                           0LL);
            if ( ((unsigned __int8)IsPassive & 1) != 0 )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_171;
              IsPassive = (System_Xml_XmlQualifiedName_o *)v212;
              if ( !v212 )
                break;
              IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvEntity__IsContainsTurnOrCountBuff(v212, 0LL);
              if ( ((unsigned __int8)IsPassive & 1) == 0 )
              {
LABEL_171:
                if ( !v212 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)v201;
                if ( !v201 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)FuncDispMaster__IsContainFuncIds(
                                                               v201,
                                                               &v210,
                                                               v212->fields.funcId,
                                                               0LL);
                if ( ((unsigned __int8)IsPassive & 1) != 0 )
                {
                  if ( !v212 )
                    break;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)System_String__Join_int_(
                                                                 (System_String_o *)StringLiteral_705/*","*/,
                                                                 (System_Collections_Generic_IEnumerable_T__o *)v212->fields.funcId,
                                                                 (const MethodInfo_20513F0 *)Method_System_String_Join_int___);
                  if ( !v199 )
                    break;
                  v71 = IsPassive;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v199,
                          IsPassive,
                          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v74 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo, v72, v73);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v74,
                      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v199,
                      v71,
                      (System_Xml_Schema_XmlSchemaObject_o *)v74,
                      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v199,
                           (System_Type_o *)v71,
                           (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v76 = v210;
                  v77 = v212;
                  v78 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v81 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B0D974(
                                                                                               ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                               v79,
                                                                                               v80);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v81, v76, v77, 0LL, v69, 0LL);
                  if ( !v78 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v78,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v81,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v195;
                  v4 = v194;
                  openedSquareArray = v193;
                }
                else
                {
                  IsPassive = (System_Xml_XmlQualifiedName_o *)entity;
                  if ( !entity )
                    break;
                  v196 = v66;
                  v192 = v67;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                  if ( !entity )
                    break;
                  v109 = (System_String_o *)IsPassive;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v69->fields.priority;
                  id = v69->fields.id;
                  iconId = v69->fields.iconId;
                  skillType = v69->fields.skillType;
                  v115 = EffectExplanation;
                  v118 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B0D974(
                                                                                           ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                           v116,
                                                                                           v117);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v118,
                    v109,
                    v115,
                    id,
                    priority,
                    iconId,
                    skillType,
                    0LL);
                  IsPassive = (System_Xml_XmlQualifiedName_o *)v200;
                  if ( !v200 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v200,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v118,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v195;
                  v4 = v194;
                  openedSquareArray = v193;
                  v67 = v192;
                  v66 = v196;
                }
              }
            }
          }
        }
      }
      else
      {
        IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsCommandSpell(v69, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v60 )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                         v60,
                                                         &entitys,
                                                         v69->fields.targetId,
                                                         v69->fields.upSkillLv,
                                                         v82);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v83 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_string__TypeInfo, v63, v64);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v83,
              (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (System_Xml_XmlQualifiedName_o *)entitys;
            if ( !entitys )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v203,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
              (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            v209 = *(System_Collections_Generic_List_Enumerator_T__o *)v203;
            while ( 1 )
            {
              v84 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v209,
                      (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              if ( !v84 )
                break;
              current = v209.fields.current;
              if ( !v209.fields.current )
                sub_B0D97C(v84);
              if ( !v201 )
                sub_B0D97C(0LL);
              if ( FuncDispMaster__IsContainFuncIds(
                     v201,
                     &v208,
                     (System_Int32_array *)v209.fields.current[3].klass,
                     0LL) )
              {
                v88 = System_String__Join_int_(
                        (System_String_o *)StringLiteral_705/*","*/,
                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                        (const MethodInfo_20513F0 *)Method_System_String_Join_int___);
                if ( !v83 )
                  sub_B0D97C(v88);
                v89 = (System_Xml_XmlQualifiedName_o *)v88;
                v90 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v83,
                        (WarBoardManager_TaskList_o *)v88,
                        (const MethodInfo_2FC5B38 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( !v90 )
                {
                  if ( !v199 )
                    sub_B0D97C(v90);
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v199,
                          v89,
                          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v93 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo, v91, v92);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v93,
                      (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v199,
                      v89,
                      (System_Xml_Schema_XmlSchemaObject_o *)v93,
                      (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  v94 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v199,
                          (System_Type_o *)v89,
                          (const MethodInfo_2E4ABA4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v95 = v208;
                  v96 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v94;
                  v99 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B0D974(
                                                                                               ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                               v97,
                                                                                               v98);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v99,
                    v95,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v69,
                    0LL);
                  if ( !v96 )
                    sub_B0D97C(v100);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v96,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v99,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v83,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
                    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_string__Add__);
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                v103 = v69->fields.priority;
                v105 = v69->fields.id;
                v104 = v69->fields.iconId;
                v106 = v69->fields.skillType;
                v107 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B0D974(
                                                                                         ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                         v86,
                                                                                         v87);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v107,
                  klass,
                  monitor,
                  v105,
                  v103,
                  v104,
                  v106,
                  0LL);
                if ( !v200 )
                  sub_B0D97C(0LL);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v200,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v107,
                  (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
              }
            }
            *(_DWORD *)&v203[2 * v198 + 20] = 569;
            v67 = ++v204;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v209,
              (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            Master_WarQuestSelectionMaster = v195;
            v4 = v194;
            openedSquareArray = v193;
            v60 = v191;
            v66 = v67;
            if ( v67 )
            {
              v108 = v67 - 1;
              v198 = v67;
              if ( *(_DWORD *)&v203[2 * v67 + 18] == 569 )
              {
                v66 = --v67;
                v204 = v108;
                v198 = v108;
              }
            }
            else
            {
              v198 = 0;
            }
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v68 >= max_length )
        goto LABEL_65;
    }
LABEL_154:
    sub_B0D97C(IsPassive);
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Xml_XmlQualifiedName_o *)v199;
  if ( !v199 )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v203,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v199,
    (const MethodInfo_2E4B244 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v207 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v203;
  v119 = v66;
  while ( 1 )
  {
    v120 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v207,
             (const MethodInfo_26C9288 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v120 )
      break;
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v207.fields.current.fields.value;
    if ( !v207.fields.current.fields.value )
      sub_B0D97C(v120);
    if ( SLODWORD(v207.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v207.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B0D97C(v120);
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( data[3] )
      {
        v124 = data[3];
        if ( !v124 )
          sub_B0D97C(v120);
        if ( !v195 )
          sub_B0D97C(0LL);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v195,
               &v206,
               *(_DWORD *)(v124 + 16),
               (const MethodInfo_2669C30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v206 )
            sub_B0D97C(0LL);
          Name = SkillEntity__getName((SkillEntity_o *)v206, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v207.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v125 = data[4];
        if ( !v125 )
          sub_B0D97C(v120);
        Name = *(System_String_o **)(v125 + 32);
      }
      v202 = Name;
      v126 = sub_B0D8BC(int___TypeInfo, 0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v203,
        value,
        (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v127 = 0;
      v205 = *(System_Collections_Generic_List_Enumerator_T__o *)v203;
LABEL_88:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v205,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        *(_DWORD *)&v203[2 * v119 + 20] = 947;
        v139 = v204 + 1;
        v204 = v139;
        v119 = v139;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v205,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        if ( v139 && *(_DWORD *)&v203[2 * v139 + 18] == 947 )
        {
          v119 = v139 - 1;
          v204 = v139 - 1;
        }
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v142 = value->fields._items->m_Items[0];
        if ( !v142 )
          sub_B0D97C(v140);
        buff = v142->fields.buff;
        if ( !buff )
          sub_B0D97C(v140);
        v144 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 *(System_String_o **)&buff->fields.isUse,
                 (System_Int32_array *)v126,
                 v141);
        v147 = v144;
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v148 = value->fields._items->m_Items[0];
        if ( !v148 )
          sub_B0D97C(v144);
        v149 = v148[1].monitor;
        if ( !v149 )
          sub_B0D97C(v144);
        v150 = v149[5];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v151 = v148[1].monitor;
        if ( !v151 )
          sub_B0D97C(v144);
        v152 = v151[6];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
        v153 = v148[1].monitor;
        if ( !v153 )
          sub_B0D97C(v144);
        v154 = v153[14];
        v155 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B0D974(
                                                                                 ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                 v145,
                                                                                 v146);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v155, v202, v147, v150, v127, v152, v154, 0LL);
        if ( !v200 )
          sub_B0D97C(0LL);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v200,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v155,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
        continue;
      }
      v129 = v205.fields.current;
      v130 = sub_B0D8BC(int___TypeInfo, 0LL);
      if ( !v129 )
        sub_B0D97C(v130);
      v132 = v129[1].monitor;
      if ( v132 )
      {
        if ( !v197 )
          sub_B0D97C(v130);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               v197,
                                                               v132[4],
                                                               v132[5],
                                                               0LL);
LABEL_95:
        v134 = (__int64)DispValFromSkill;
      }
      else
      {
        v134 = v130;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v129[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 v131);
          goto LABEL_95;
        }
      }
      if ( !v126 )
        sub_B0D97C(DispValFromSkill);
      v135 = *(_QWORD *)(v126 + 24);
      if ( v135 )
      {
        if ( (int)v135 >= 1 )
        {
          v136 = 8LL;
          do
          {
            if ( v136 - 8 >= (unsigned __int64)(unsigned int)v135 )
            {
              v156 = sub_B0D9A8(DispValFromSkill);
              sub_B0D948(v156, 0LL);
            }
            if ( !v134 )
              sub_B0D97C(DispValFromSkill);
            if ( v136 - 8 >= (unsigned __int64)*(unsigned int *)(v134 + 24) )
            {
              v157 = sub_B0D9A8(DispValFromSkill);
              sub_B0D948(v157, 0LL);
            }
            v137 = v136 - 7 < (int)v135;
            *(_DWORD *)(v126 + 4 * v136) += *(_DWORD *)(v134 + 4 * v136);
            ++v136;
          }
          while ( v137 );
        }
      }
      else
      {
        v126 = v134;
      }
      v138 = v129[2].monitor;
      if ( !v138 )
        sub_B0D97C(DispValFromSkill);
      v128 = v138[20];
      if ( v128 > v127 )
        v127 = v128;
      goto LABEL_88;
    }
  }
  *(_DWORD *)&v203[2 * v119 + 20] = 1073;
  v158 = ++v204;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v207,
    (const MethodInfo_26C93F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v158 && *(_DWORD *)&v203[2 * v158 + 18] == 1073 )
    v204 = v158 - 1;
  v161 = ClassBoardBaseDialog___c_TypeInfo;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v161 = ClassBoardBaseDialog___c_TypeInfo;
  }
  static_fields = v161->static_fields;
  _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v161->vtable._0_Equals.methodPtr) & 4) != 0 && !v161->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v161);
      static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v164 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                                                                 v159,
                                                                                 v160);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_0,
      v164,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      (const MethodInfo_2619564 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v165 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v165->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v165->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v166,
      v167,
      v168,
      v169,
      v170,
      v171);
  }
  v172 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v200,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_1B4ECD0 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v175 = ClassBoardBaseDialog___c_TypeInfo;
  v176 = v172;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v175 = ClassBoardBaseDialog___c_TypeInfo;
  }
  v177 = v175->static_fields;
  _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v177->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( (BYTE3(v175->vtable._0_Equals.methodPtr) & 4) != 0 && !v175->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v175);
      v177 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v179 = (Il2CppObject *)v177->__9;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B0D974(
                                                                                 System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                                                                 v173,
                                                                                 v174);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_1,
      v179,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      (const MethodInfo_2619564 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v180 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v180->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v180->__9__28_1,
      (System_Int32_array **)_9__28_1,
      v181,
      v182,
      v183,
      v184,
      v185,
      v186);
  }
  v187 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v176,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_1B55AEC *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v187, (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4217AA1 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217AA1 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    gameObject = this->fields.effectObj;
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  itemListObj = (UnityEngine_Object_o *)this->fields.itemListObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemListObj, 0LL, 0LL) )
  {
    gameObject = this->fields.itemListObj;
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  conditionListObj = (UnityEngine_Object_o *)this->fields.conditionListObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(conditionListObj, 0LL, 0LL) )
  {
    gameObject = this->fields.conditionListObj;
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_23:
    sub_B0D97C(gameObject);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x8
  System_String_o *v15; // x0
  System_String_o *v16; // x20
  System_String_o *v17; // x0
  System_String_o *v18; // x28
  System_String_o *v19; // x0
  System_String_o *v20; // x27
  System_String_o *v21; // x0
  System_String_o *v22; // x26
  System_String_o *v23; // x0
  System_String_o *v24; // x25
  System_String_o *v25; // x0
  System_String_o *v26; // x24
  System_String_o *v27; // x0
  System_String_o *v28; // x23
  System_String_o *v29; // x0
  System_String_o *v30; // x0
  System_String_o *v31; // x0
  System_String_o *v32; // x21
  System_String_o *v33; // x0
  System_String_o *v34; // x20
  System_String_o *v35; // x20
  System_String_o *v36; // x20
  System_String_o *v37; // x20
  System_String_o *v38; // x20
  unsigned __int64 v39; // x8
  System_String_o *v40; // x20
  unsigned __int64 v41; // x8
  System_String_o *v42; // x20
  unsigned __int64 v43; // x8
  System_String_o *v44; // x20
  unsigned __int64 v45; // x8
  __int64 v47; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v49; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4217AA8 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_23753/*"{x"*/, funcVals);
    sub_B0D8A4(&StringLiteral_23549/*"{"*/, v5);
    sub_B0D8A4(&StringLiteral_23484/*"xx}"*/, v6);
    sub_B0D8A4(&StringLiteral_23483/*"xxx}"*/, v7);
    sub_B0D8A4(&StringLiteral_23774/*"}"*/, v8);
    sub_B0D8A4(&StringLiteral_23756/*"{xxxx"*/, v9);
    sub_B0D8A4(&StringLiteral_23754/*"{xx"*/, v10);
    sub_B0D8A4(&StringLiteral_23482/*"xxxx}"*/, v11);
    sub_B0D8A4(&StringLiteral_23485/*"x}"*/, v12);
    sub_B0D8A4(&StringLiteral_23755/*"{xxx"*/, v13);
    byte_4217AA8 = 1;
  }
  v49 = 0LL;
  if ( funcVals )
  {
    v14 = *(_QWORD *)&funcVals->max_length;
    if ( v14 )
    {
      HIDWORD(v49) = 0;
      if ( (int)v14 >= 1 )
      {
        do
        {
          v15 = System_Int32__ToString((int32_t)&v49 + 4, 0LL);
          v16 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v15,
                  (System_String_o *)StringLiteral_23482/*"xxxx}"*/,
                  0LL);
          v17 = System_Int32__ToString((int32_t)&v49 + 4, 0LL);
          v18 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v17,
                  (System_String_o *)StringLiteral_23483/*"xxx}"*/,
                  0LL);
          v19 = System_Int32__ToString((int32_t)&v49 + 4, 0LL);
          v20 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v19,
                  (System_String_o *)StringLiteral_23484/*"xx}"*/,
                  0LL);
          v21 = System_Int32__ToString((int32_t)&v49 + 4, 0LL);
          v22 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v21,
                  (System_String_o *)StringLiteral_23485/*"x}"*/,
                  0LL);
          v23 = System_Int32__ToString((int32_t)&v49 + 4, 0LL);
          v24 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23549/*"{"*/,
                  v23,
                  (System_String_o *)StringLiteral_23774/*"}"*/,
                  0LL);
          v25 = System_Int32__ToString((int32_t)&v49 + 4, 0LL);
          v26 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23753/*"{x"*/,
                  v25,
                  (System_String_o *)StringLiteral_23774/*"}"*/,
                  0LL);
          v27 = System_Int32__ToString((int32_t)&v49 + 4, 0LL);
          v28 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23754/*"{xx"*/,
                  v27,
                  (System_String_o *)StringLiteral_23774/*"}"*/,
                  0LL);
          v29 = System_Int32__ToString((int32_t)&v49 + 4, 0LL);
          oldValue = System_String__Concat_43852188(
                       (System_String_o *)StringLiteral_23755/*"{xxx"*/,
                       v29,
                       (System_String_o *)StringLiteral_23774/*"}"*/,
                       0LL);
          v30 = System_Int32__ToString((int32_t)&v49 + 4, 0LL);
          v31 = System_String__Concat_43852188(
                  (System_String_o *)StringLiteral_23756/*"{xxxx"*/,
                  v30,
                  (System_String_o *)StringLiteral_23774/*"}"*/,
                  0LL);
          if ( HIDWORD(v49) >= funcVals->max_length )
            goto LABEL_26;
          v32 = v31;
          LODWORD(v49) = 10000 * funcVals->m_Items[SHIDWORD(v49) + 1];
          v33 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !text )
            goto LABEL_27;
          v31 = System_String__Replace_43857140(text, v16, v33, 0LL);
          if ( HIDWORD(v49) >= funcVals->max_length )
            goto LABEL_26;
          v34 = v31;
          LODWORD(v49) = 1000 * funcVals->m_Items[SHIDWORD(v49) + 1];
          v33 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v34 )
            goto LABEL_27;
          v31 = System_String__Replace_43857140(v34, v18, v33, 0LL);
          if ( HIDWORD(v49) >= funcVals->max_length )
            goto LABEL_26;
          v35 = v31;
          LODWORD(v49) = 100 * funcVals->m_Items[SHIDWORD(v49) + 1];
          v33 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v35 )
            goto LABEL_27;
          v31 = System_String__Replace_43857140(v35, v20, v33, 0LL);
          if ( HIDWORD(v49) >= funcVals->max_length )
            goto LABEL_26;
          v36 = v31;
          LODWORD(v49) = 10 * funcVals->m_Items[SHIDWORD(v49) + 1];
          v33 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v36 )
            goto LABEL_27;
          v31 = System_String__Replace_43857140(v36, v22, v33, 0LL);
          if ( HIDWORD(v49) >= funcVals->max_length )
            goto LABEL_26;
          v37 = v31;
          v33 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v49) + 32, 0LL);
          if ( !v37 )
            goto LABEL_27;
          v31 = System_String__Replace_43857140(v37, v24, v33, 0LL);
          if ( HIDWORD(v49) >= funcVals->max_length )
            goto LABEL_26;
          v38 = v31;
          v39 = 1717986919LL * funcVals->m_Items[SHIDWORD(v49) + 1];
          LODWORD(v49) = (v39 >> 63) + (SHIDWORD(v39) >> 2);
          v33 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v38 )
            goto LABEL_27;
          v31 = System_String__Replace_43857140(v38, v26, v33, 0LL);
          if ( HIDWORD(v49) >= funcVals->max_length )
            goto LABEL_26;
          v40 = v31;
          v41 = 1374389535LL * funcVals->m_Items[SHIDWORD(v49) + 1];
          LODWORD(v49) = (v41 >> 63) + (SHIDWORD(v41) >> 5);
          v33 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v40 )
            goto LABEL_27;
          v31 = System_String__Replace_43857140(v40, v28, v33, 0LL);
          if ( HIDWORD(v49) >= funcVals->max_length )
            goto LABEL_26;
          v42 = v31;
          v43 = 274877907LL * funcVals->m_Items[SHIDWORD(v49) + 1];
          LODWORD(v49) = (v43 >> 63) + (SHIDWORD(v43) >> 6);
          v33 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v42 )
            goto LABEL_27;
          v31 = System_String__Replace_43857140(v42, oldValue, v33, 0LL);
          if ( HIDWORD(v49) >= funcVals->max_length )
          {
LABEL_26:
            v47 = sub_B0D9A8(v31);
            sub_B0D948(v47, 0LL);
          }
          v44 = v31;
          v45 = 1759218605LL * funcVals->m_Items[SHIDWORD(v49) + 1];
          LODWORD(v49) = (v45 >> 63) + (SHIDWORD(v45) >> 12);
          v33 = System_Int32__ToString((int32_t)&v49, 0LL);
          if ( !v44 )
LABEL_27:
            sub_B0D97C(v33);
          text = System_String__Replace_43857140(v44, v32, v33, 0LL);
          ++HIDWORD(v49);
        }
        while ( SHIDWORD(v49) < (signed int)funcVals->max_length );
      }
    }
  }
  return text;
}


void __fastcall ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemIconComponentList; // x0
  _BOOL8 v8; // x0
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4217AA6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v6);
    byte_4217AA6 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemIconComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      itemIconComponentList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v9,
             (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
      if ( !v8 )
        break;
      if ( !v9.fields.current )
        sub_B0D97C(v8);
      LOBYTE(v9.fields.current[5].monitor) = 1;
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
  }
}


void __fastcall ClassBoardBaseDialog__SetEffectScrollInitPos(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *effectScrollView; // x8
  ClassBoardBaseDialog_o *v3; // x19
  float v4; // s0

  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView
    || (v3 = this, (this = *(ClassBoardBaseDialog_o **)&effectScrollView->fields.showScrollBars) == 0LL)
    || (HIDWORD(effectScrollView->fields.onDragStarted) != 4 ? (v4 = 0.0) : (v4 = 0.5),
        (UIProgressBar__set_value((UIProgressBar_o *)this, v4, 0LL),
         (this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView) == 0LL)
     || (UIScrollView__UpdatePosition((UIScrollView_o *)this, 0LL),
         (this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView) == 0LL)) )
  {
    sub_B0D97C(this);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardBaseDialog__SetQpLabel(
        ClassBoardBaseDialog_o *this,
        int32_t needNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *SelfUserGame; // x0
  int32_t klass; // w23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  System_String_o *v15; // x22
  int32_t *v16; // x1
  Il2CppObject *v17; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v20; // x21
  Il2CppObject *v21; // x0
  int32_t v22; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4217AA4 & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&needNum);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_3013/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v6);
    sub_B0D8A4(&StringLiteral_3015/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v7);
    sub_B0D8A4(&StringLiteral_3012/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v8);
    sub_B0D8A4(&StringLiteral_3014/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v9);
    sub_B0D8A4(&StringLiteral_3010/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v10);
    byte_4217AA4 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  klass = (int32_t)SelfUserGame[4].klass;
  itemQpLabel = this->fields.itemQpLabel;
  if ( klass >= needNum )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3012/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( itemQpLabel )
    {
      UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
      itemQpNum = this->fields.itemQpNum;
      v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3014/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
      v23 = needNum;
      v16 = &v23;
      goto LABEL_15;
    }
LABEL_24:
    sub_B0D97C(SelfUserGame);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3013/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
  if ( !itemQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
  itemQpNum = this->fields.itemQpNum;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3015/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
  v16 = &v24;
  v24 = needNum;
LABEL_15:
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v16);
  SelfUserGame = System_String__Format(v15, v17, 0LL);
  if ( !itemQpNum )
    goto LABEL_24;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3010/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3014/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v22 = klass;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22);
  SelfUserGame = System_String__Format(v20, v21, 0LL);
  if ( !itemHaveQpNum )
    goto LABEL_24;
  UILabel__set_text(itemHaveQpNum, SelfUserGame, 0LL);
  SelfUserGame = (System_String_o *)this->fields.itemQpObj;
  if ( !SelfUserGame )
    goto LABEL_24;
  SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                      (UnityEngine_GameObject_o *)SelfUserGame,
                                      0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0LL);
}


void __fastcall ClassBoardBaseDialog__SetUpEffectDetail(
        ClassBoardBaseDialog_o *this,
        IClassBoardSquareModel_o *squareModel,
        float disableScrollViewSize,
        float disableScrollViewPosY,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *effectObj; // x0
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v21; // x21
  unsigned __int64 v22; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v25; // w0
  IClassBoardSquareModel_c *v26; // x8
  int32_t v27; // w22
  unsigned __int64 v28; // x10
  int32_t *v29; // x11
  __int64 v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Int32_array **v37; // x22
  UnityEngine_GameObject_o *v38; // x21
  const MethodInfo *v39; // x3
  float v40; // s11
  Il2CppObject *current; // x23
  struct UnityEngine_GameObject_o *effectDetailObj; // x21
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  IClassBoardSquareModel_c *v46; // x8
  System_String_o *monitor; // x24
  System_String_o *v48; // x25
  int32_t v49; // w23
  ClassBoardDialogSkillDetailPartsComponent_o *v50; // x22
  unsigned __int64 v51; // x10
  int32_t *v52; // x11
  __int64 v53; // x0
  __int64 v54; // x0
  const MethodInfo *v55; // x5
  float v56; // s10
  struct UIScrollView_o *effectScrollView; // x8
  struct UIScrollView_o *v58; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v60; // x0
  __int64 v61; // x0
  __int64 v62; // x0
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+20h] [xbp-90h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217AA2 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardSquareEntity___TypeInfo, squareModel);
    sub_B0D8A4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9);
    sub_B0D8A4(&DataManager_TypeInfo, v10);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v11);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v12);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v14);
    sub_B0D8A4(&IClassBoardSquareModel_TypeInfo, v15);
    sub_B0D8A4(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v16);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    byte_4217AA2 = 1;
  }
  entity = 0LL;
  memset(&v64, 0, sizeof(v64));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_55;
  klass = squareModel->klass;
  v21 = (ClassBoardSquareMaster_o *)effectObj;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v22 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v22;
      p_offset += 4;
      if ( v22 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_12:
    p_method = sub_AA67A0(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v25 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v26 = squareModel->klass;
  v27 = v25;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v28 = 0LL;
    v29 = &v26->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v28;
      v29 += 4;
      if ( v28 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v30 = (__int64)&v26->vtable[*v29].method;
  }
  else
  {
LABEL_18:
    v30 = sub_AA67A0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v30)(
                                            squareModel,
                                            *(_QWORD *)(v30 + 8));
  if ( !v21 )
    goto LABEL_55;
  ClassBoardSquareMaster__TryGetEntity(v21, &entity, v27, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_B0D8BC(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_55;
  v37 = (System_Int32_array **)entity;
  v38 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_B0D964(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v62 = sub_B0D99C(0LL);
      sub_B0D948(v62, 0LL);
    }
  }
  if ( !LODWORD(v38[1].klass) )
  {
    v61 = sub_B0D9A8(effectObj);
    sub_B0D948(v61, 0LL);
  }
  v38[1].monitor = v37;
  sub_B0D840((BattleServantConfConponent_o *)&v38[1].monitor, v37, v31, v32, v33, v34, v35, v36);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v38,
                                            0,
                                            0,
                                            v39);
  if ( !effectObj )
    goto LABEL_55;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v63,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)effectObj,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v64 = v63;
  v40 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v64,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v64.fields.current;
    effectDetailObj = this->fields.effectDetailObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v43 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)effectDetailObj,
                                        (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v44 = v43;
    if ( !v43 )
      sub_B0D97C(0LL);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v43,
                                (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_B0D97C(Component_srcLineSprite);
    v46 = squareModel->klass;
    v48 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v49 = (int32_t)current[2].monitor;
    v50 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_srcLineSprite;
    if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
    {
      v51 = 0LL;
      v52 = &v46->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v52 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v51;
        v52 += 4;
        if ( v51 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v53 = (__int64)&v46->vtable[*v52 + 7].method;
    }
    else
    {
LABEL_36:
      v53 = sub_AA67A0(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v54 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v53)(squareModel, *(_QWORD *)(v53 + 8));
    if ( !v50 )
      sub_B0D97C(v54);
    v56 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v50, v48, monitor, v49, v54, v55);
    GameObjectExtensions__SetParent_31184580(v44, this->fields.effectDetailParent, 0LL);
    one = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v44, one, 0LL);
    GameObjectExtensions__SetLocalPosition_31178796(v44, 0.0, -v40, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v44, 1, 0LL);
    v40 = v40 + v56;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v64,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_55;
  effectObj = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))effectObj->klass[1]._1.parent)(
                                            effectObj,
                                            0LL,
                                            effectObj->klass[1]._1.generic_class,
                                            0.0,
                                            0.0);
  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_55;
  effectObj = *(UnityEngine_GameObject_o **)&effectScrollView->fields.showScrollBars;
  if ( !effectObj )
    goto LABEL_55;
  UIProgressBar__set_value((UIProgressBar_o *)effectObj, 0.0, 0LL);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_55;
  UIScrollView__UpdatePosition((UIScrollView_o *)effectObj, 0LL);
  if ( disableScrollViewSize > 0.0 && v40 <= disableScrollViewSize )
  {
    v58 = this->fields.effectScrollView;
    if ( v58 )
    {
      HIDWORD(v58->fields.onDragStarted) = 4;
      effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
      if ( effectObj )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( effectObj )
        {
          v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
          GameObjectExtensions__SetLocalPositionY(v60, disableScrollViewPosY, 0LL);
          return;
        }
      }
    }
LABEL_55:
    sub_B0D97C(effectObj);
  }
}


bool __fastcall ClassBoardBaseDialog__SetUpItemList(
        ClassBoardBaseDialog_o *this,
        System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *itemList,
        const MethodInfo *method)
{
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
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_Object_o *itemInfoLabel; // x21
  UILabel_o *v20; // x21
  System_String_o *itemListObj; // x0
  UnityEngine_Object_o *itemQpObj; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x22
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x0
  __int64 v37; // x20
  int v38; // w26
  char v39; // w25
  int i; // w22
  __int64 v41; // x8
  unsigned __int64 v42; // x10
  int *v43; // x11
  __int64 v44; // x0
  __int64 v45; // x8
  unsigned __int64 v46; // x10
  int *v47; // x11
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x23
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  int32_t v55; // w0
  __int64 v56; // x8
  int32_t v57; // w22
  unsigned __int64 v58; // x10
  IClassBoardItemModel_c **v59; // x11
  __int64 v60; // x0
  int32_t v61; // w23
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  _BOOL8 isQP; // x0
  const MethodInfo *v65; // x2
  struct UnityEngine_GameObject_o *itemIcon; // x24
  UnityEngine_GameObject_o *v67; // x0
  UIGrid_o *itemIconListGrid; // x25
  UnityEngine_Transform_o *transform; // x0
  ClassBoardItemIconComponent_o *Component_srcLineSprite; // x0
  const MethodInfo *v71; // x3
  EventMissionProgressRequest_Argument_ProgressData_o *v72; // x24
  __int64 v73; // x8
  unsigned __int64 v74; // x10
  int *v75; // x11
  __int64 v76; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemIconComponentList; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4217AA3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ItemMaster___, itemList);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5);
    sub_B0D8A4(&IClassBoardItemModel_TypeInfo, v6);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v12);
    sub_B0D8A4(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v13);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v14);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&StringLiteral_3008/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v18);
    byte_4217AA3 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v20 = this->fields.itemInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3008/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
    if ( !v20 )
      goto LABEL_82;
    UILabel__set_text(v20, itemListObj, 0LL);
  }
  itemQpObj = (UnityEngine_Object_o *)this->fields.itemQpObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemQpObj, 0LL, 0LL) )
  {
    itemListObj = (System_String_o *)this->fields.itemQpObj;
    if ( !itemListObj )
      goto LABEL_82;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 0, 0LL);
  }
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo,
                                                                                                  v23,
                                                                                                  v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v25;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.itemIconComponentList,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0LL);
  if ( !itemList )
    goto LABEL_82;
  klass = itemList->klass;
  if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
  {
    v33 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v33;
      p_offset += 4;
      if ( v33 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_24:
    p_method = sub_AA67A0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v37 = v36;
  v38 = 0;
  v39 = 1;
LABEL_27:
  for ( i = v38; ; i = 1 )
  {
    if ( !v37 )
      sub_B0D97C(v36);
    v41 = *(_QWORD *)v37;
    v38 = i;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v42 = 0LL;
      v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v43 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v42;
        v43 += 4;
        if ( v42 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_33;
      }
      v44 = v41 + 16LL * *v43 + 312;
    }
    else
    {
LABEL_33:
      v44 = sub_AA67A0(v37, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v37, *(_QWORD *)(v44 + 8)) & 1) == 0 )
      break;
    v45 = *(_QWORD *)v37;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v46 = 0LL;
      v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v47 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v46;
        v47 += 4;
        if ( v46 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_40;
      }
      v48 = v45 + 16LL * *v47 + 312;
    }
    else
    {
LABEL_40:
      v48 = sub_AA67A0(v37, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v49 = (*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v37, *(_QWORD *)(v48 + 8));
    v50 = v49;
    if ( !v49 )
      sub_B0D97C(0LL);
    v51 = *(_QWORD *)v49;
    if ( *(_WORD *)(*(_QWORD *)v49 + 298LL) )
    {
      v52 = 0LL;
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v53 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v52;
        v53 += 4;
        if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v49 + 298LL) )
          goto LABEL_47;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_47:
      v54 = sub_AA67A0(v49, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v55 = (*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v50, *(_QWORD *)(v54 + 8));
    v56 = *(_QWORD *)v50;
    v57 = v55;
    if ( *(_WORD *)(*(_QWORD *)v50 + 298LL) )
    {
      v58 = 0LL;
      v59 = (IClassBoardItemModel_c **)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *(v59 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v58;
        v59 += 2;
        if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v50 + 298LL) )
          goto LABEL_53;
      }
      v60 = v56 + 16LL * (*(_DWORD *)v59 + 1) + 312;
    }
    else
    {
LABEL_53:
      v60 = sub_AA67A0(v50, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v50, *(_QWORD *)(v60 + 8));
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B0D97C(0LL);
    isQP = ItemMaster__isQP(MasterData_WarQuestSelectionMaster, v57, 0LL);
    if ( !isQP )
    {
      itemIcon = this->fields.itemIcon;
      if ( (v39 & 1) == 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v67 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                            (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v67;
        if ( !v67 )
          sub_B0D97C(0LL);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform(v67, 0LL);
        if ( !itemIconListGrid )
          sub_B0D97C(transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_B0D97C(isQP);
      UnityEngine_GameObject__SetActive(itemIcon, 1, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(itemIcon, zero, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(itemIcon, one, 0LL);
      Component_srcLineSprite = (ClassBoardItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   itemIcon,
                                                                   (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v72 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B0D97C(0LL);
      ClassBoardItemIconComponent__setItemInfo(Component_srcLineSprite, v57, v61, v71);
      if ( !*p_itemIconComponentList )
        sub_B0D97C(0LL);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_itemIconComponentList,
        v72,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
      v39 = 0;
      goto LABEL_27;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v61, v65);
  }
  v73 = *(_QWORD *)v37;
  if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
  {
    v74 = 0LL;
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      ++v74;
      v75 += 4;
      if ( v74 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
        goto LABEL_74;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_74:
    v76 = sub_AA67A0(v37, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v76)(v37, *(_QWORD *)(v76 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_82:
    sub_B0D97C(itemListObj);
  ((void (__fastcall *)(System_String_o *, Il2CppMethodPointer))itemListObj->klass->vtable._8_System_IConvertible_ToChar.method)(
    itemListObj,
    itemListObj->klass->vtable._9_System_IConvertible_ToSByte.methodPtr);
  return i & 1;
}


void __fastcall ClassBoardBaseDialog__SetUpLockReleaseCondition(
        ClassBoardBaseDialog_o *this,
        ClassBoardCondData_o condData,
        const MethodInfo *method)
{
  __int64 v3; // x20
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
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *conditionListObj; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  System_Collections_Generic_List_int__o *v22; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v24; // x20
  __int64 v25; // x22
  __int64 v26; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x20
  char v28; // w23
  _BOOL8 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x2
  EventMissionEntity_o *v32; // x22
  MasterMissionListViewItem_o *v33; // x21
  __int64 v34; // x0
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Component_o *v41; // x0
  UIGrid_o *v42; // x21
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_Transform_o *v44; // x0
  __int64 v45; // x0
  System_Collections_Generic_List_Enumerator_int__o v46; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_4217AA5 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type);
    sub_B0D8A4(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMissionMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B0D8A4(&MasterMissionListViewItem_TypeInfo, v16);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_Transform___, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    byte_4217AA5 = 1;
  }
  entity = 0LL;
  memset(&v47, 0, sizeof(v47));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v22 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v20, v21);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_54;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_54;
      klass = conditionListObj[1].klass;
      v24 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v25 = 0LL;
        do
        {
          if ( (unsigned int)v25 >= (unsigned int)klass )
          {
            v45 = sub_B0D9A8(conditionListObj);
            sub_B0D948(v45, 0LL);
          }
          v26 = *((_QWORD *)&v24[1].monitor + v25);
          if ( !v26 )
            goto LABEL_54;
          if ( (unsigned int)(*(_DWORD *)(v26 + 28) - 23) <= 1 )
          {
            if ( !v22 )
              goto LABEL_54;
            System_Collections_Generic_List_int___Add(
              v22,
              *(_DWORD *)(v26 + 32),
              (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
            klass = v24[1].klass;
          }
        }
        while ( (int)++v25 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v22 )
      goto LABEL_54;
    System_Collections_Generic_List_int___Add(
      v22,
      SHIDWORD(v3),
      (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v22 )
    goto LABEL_54;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    v22,
    (const MethodInfo_2FB0D44 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v47 = v46;
  v28 = 1;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v47,
            (const MethodInfo_210FFE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v29 )
      break;
    if ( !v27 )
      sub_B0D97C(v29);
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      v27,
      &entity,
      v47.fields.current,
      (const MethodInfo_2669C30 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v32 = (EventMissionEntity_o *)entity;
    if ( entity )
    {
      v33 = (MasterMissionListViewItem_o *)sub_B0D974(MasterMissionListViewItem_TypeInfo, v30, v31);
      MasterMissionListViewItem___ctor(v33, v32, 2, 0LL);
      if ( !v33 )
        sub_B0D97C(v34);
      ComponentInChildren_UIWidget = (UIWidget_o *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v33->klass->vtable._6_CheckMissionCond.method)(
                                                     v33,
                                                     v33->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v28 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_B0D97C(ComponentInChildren_UIWidget);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_B0D97C(0LL);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v41 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                           (UILabel_o *)Parent,
                                           transform,
                                           (const MethodInfo_204AAC0 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v41 )
          sub_B0D97C(0LL);
        ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                         v41,
                                         (const MethodInfo_170E750 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_UIWidget;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_B0D97C(ComponentInChildren_UIWidget);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v33,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v42 = this->fields.conditionGrid;
      v43 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v44 = GameObjectExtensions__GetParent(v43, 0LL);
      if ( !v42 )
        sub_B0D97C(v44);
      UIGrid__AddChild(v42, v44, 0LL);
      v28 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v47,
    (const MethodInfo_210FFE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_54;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))conditionListObj->klass[1]._1.castClass)(
    conditionListObj,
    conditionListObj->klass[1]._1.declaringType);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_54;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *, float, float))conditionListObj->klass[1]._1.parent)(
    conditionListObj,
    0LL,
    conditionListObj->klass[1]._1.generic_class,
    0.0,
    0.0);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_54;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))conditionListObj->klass[1]._1.castClass)(
    conditionListObj,
    1LL,
    conditionListObj->klass[1]._1.declaringType);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_54;
  UIScrollView__UpdatePosition((UIScrollView_o *)conditionListObj, 0LL);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_54;
  conditionListObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)conditionListObj,
                                                   0LL);
  if ( !conditionListObj )
    goto LABEL_54;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)conditionListObj, 0LL) != 1 )
    return;
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)conditionListObj, 0, 0LL),
        (conditionListObj = this->fields.missionScrollBar) == 0LL) )
  {
LABEL_54:
    sub_B0D97C(conditionListObj);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  UIScrollView_o *v4; // x0

  if ( (byte_4217AA9 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4217AA9 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v4 = this->fields.effectScrollView;
    if ( !v4 )
      sub_B0D97C(0LL);
    UIScrollView__UpdateScrollbars(v4, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4211E11 & 1) == 0 )
  {
    sub_B0D8A4(&ClassBoardBaseDialog___c_TypeInfo, v1);
    byte_4211E11 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(ClassBoardBaseDialog___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall ClassBoardBaseDialog___c___ctor(ClassBoardBaseDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_0(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.squareId;
}