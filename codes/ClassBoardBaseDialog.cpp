void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FAF9B & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FAF9B = 1;
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

  if ( (byte_40FAF9A & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, callback);
    byte_40FAF9A = 1;
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
      sub_B170D4();
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
  __int64 v4; // x4
  int32_t v5; // w21
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
  __int64 v58; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v60; // x26
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  _BOOL8 IsPassive; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x3
  const MethodInfo *v69; // x4
  signed int max_length; // w8
  int v71; // w25
  int v72; // w24
  unsigned int v73; // w27
  ClassBoardSquareEntity_o *v74; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v75; // x19
  System_String_o *v76; // x0
  System_Xml_XmlQualifiedName_o *v77; // x20
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  __int64 v81; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v82; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v84; // x21
  SkillLvEntity_o *v85; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v86; // x19
  __int64 v87; // x1
  __int64 v88; // x2
  __int64 v89; // x3
  __int64 v90; // x4
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v91; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v92; // x22
  Il2CppObject *current; // x20
  __int64 v94; // x1
  __int64 v95; // x2
  __int64 v96; // x3
  __int64 v97; // x4
  System_String_o *v98; // x0
  System_Xml_XmlQualifiedName_o *v99; // x26
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x3
  __int64 v103; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v104; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v105; // x0
  FuncDispEntity_o *v106; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v107; // x23
  __int64 v108; // x1
  __int64 v109; // x2
  __int64 v110; // x3
  __int64 v111; // x4
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v112; // x21
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v115; // w26
  int32_t v116; // w24
  int32_t v117; // w25
  int32_t v118; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v119; // x20
  int v120; // w8
  System_String_o *Name; // x0
  System_String_o *v122; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t skillType; // w24
  System_String_o *v128; // x25
  __int64 v129; // x1
  __int64 v130; // x2
  __int64 v131; // x3
  __int64 v132; // x4
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v133; // x20
  int v134; // w23
  __int64 v135; // x2
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *v138; // x19
  __int64 v139; // x8
  __int64 v140; // x8
  __int64 v141; // x25
  int32_t v142; // w24
  int32_t v143; // w8
  __int64 v144; // x2
  Il2CppObject *v145; // x19
  __int64 v146; // x0
  const MethodInfo *v147; // x1
  __int64 v148; // x2
  _DWORD *v149; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v151; // x8
  __int64 v152; // x10
  __int64 v153; // x11
  bool v154; // cc
  _DWORD *v155; // x8
  int v156; // w19
  const MethodInfo *v157; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v158; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  System_String_o *v164; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v165; // x8
  _DWORD *v166; // x9
  int32_t v167; // w25
  _DWORD *v168; // x9
  int32_t v169; // w26
  _DWORD *v170; // x8
  int32_t v171; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v172; // x22
  int v173; // w20
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x3
  __int64 v177; // x4
  ClassBoardBaseDialog___c_c *v178; // x0
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_0; // x20
  Il2CppObject *v181; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v182; // x0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v189; // x0
  __int64 v190; // x1
  __int64 v191; // x2
  __int64 v192; // x3
  __int64 v193; // x4
  ClassBoardBaseDialog___c_c *v194; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v195; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v196; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x20
  Il2CppObject *v198; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v199; // x0
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v206; // x0
  ClassBoardCommandSpellMaster_o *v209; // [xsp+10h] [xbp-180h]
  int v210; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v211; // [xsp+20h] [xbp-170h]
  int32_t v212; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v213; // [xsp+30h] [xbp-160h]
  int v214; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v215; // [xsp+40h] [xbp-150h]
  int v216; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v217; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v218; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v219; // [xsp+60h] [xbp-130h]
  System_String_o *v220; // [xsp+60h] [xbp-130h]
  _WORD v221[26]; // [xsp+68h] [xbp-128h] BYREF
  int v222; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v223; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v224; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v225; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v226; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v227; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v228; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v230; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  v5 = dispType;
  if ( (byte_40FAF97 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, *(_QWORD *)&dispType);
    sub_B16FFC(&Method_DataManager_GetMaster_FuncDispMaster___, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_FunctionMaster___, v8);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillLvMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_SkillMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v13);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v14);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v16);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v17);
    sub_B16FFC(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v18);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_B16FFC(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___, v21);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v22);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v23);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v24);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v25);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v27);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v28);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v29);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v30);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v31);
    sub_B16FFC(&Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__, v32);
    sub_B16FFC(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v33);
    sub_B16FFC(&int___TypeInfo, v34);
    sub_B16FFC(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v35);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v36);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v37);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v38);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v39);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v40);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v41);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v42);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v43);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v44);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v45);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v46);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v47);
    sub_B16FFC(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v48);
    sub_B16FFC(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v49);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v50);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v51);
    sub_B16FFC(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v52);
    sub_B16FFC(&Method_System_String_Join_int___, v53);
    sub_B16FFC(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v54);
    sub_B16FFC(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v55);
    sub_B16FFC(&ClassBoardBaseDialog___c_TypeInfo, v56);
    sub_B16FFC(&StringLiteral_698/*","*/, v57);
    sub_B16FFC(&StringLiteral_1/*""*/, v58);
    byte_40FAF97 = 1;
  }
  v230 = 0LL;
  entity = 0LL;
  v228 = 0LL;
  entitys = 0LL;
  v226 = 0LL;
  v224 = 0LL;
  memset(&v227, 0, sizeof(v227));
  memset(&v225, 0, sizeof(v225));
  memset(&v223, 0, sizeof(v223));
  v222 = 0;
  v218 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
                                                                                                   *(_QWORD *)&dispType,
                                                                                                   ignoreTurnOrCountPassive,
                                                                                                   method,
                                                                                                   v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v218,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_154;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v218;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillMaster___);
  v215 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v60 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v219 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v217 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B170CC(
                                                                                         System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
                                                                                         v61,
                                                                                         v62,
                                                                                         v63,
                                                                                         v64);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v217,
    (const MethodInfo_2DA3068 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v71 = 0;
  v213 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v72 = 0;
    v73 = 0;
    v216 = 0;
    v212 = v5;
    v211 = openedSquareArray;
    v209 = v60;
    while ( 1 )
    {
      if ( v73 >= max_length )
      {
        sub_B17100(IsPassive, v66, v67);
        sub_B170A0();
      }
      v74 = openedSquareArray->m_Items[v73];
      v75 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v66, v67, v68, v69);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v75,
        (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v75;
      if ( !v74 )
        break;
      IsPassive = ClassBoardSquareEntity__get_IsPassive(v74, 0LL);
      if ( IsPassive )
      {
        if ( v5 != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsPassive = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                        Master_WarQuestSelectionMaster,
                        &entity,
                        v74->fields.targetId,
                        (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( IsPassive )
          {
            if ( !v215 )
              break;
            IsPassive = SkillLvMaster__TryGetEntity(v215, &v230, v74->fields.targetId, v74->fields.upSkillLv, 0LL);
            if ( IsPassive )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_22;
              if ( !v230 )
                break;
              IsPassive = SkillLvEntity__IsContainsTurnOrCountBuff(v230, 0LL);
              if ( !IsPassive )
              {
LABEL_22:
                if ( !v230 || !v219 )
                  break;
                if ( FuncDispMaster__IsContainFuncIds(v219, &v228, v230->fields.funcId, 0LL) )
                {
                  if ( !v230 )
                    break;
                  v76 = System_String__Join_int_(
                          (System_String_o *)StringLiteral_698/*","*/,
                          (System_Collections_Generic_IEnumerable_T__o *)v230->fields.funcId,
                          (const MethodInfo_224FA24 *)Method_System_String_Join_int___);
                  if ( !v217 )
                    break;
                  v77 = (System_Xml_XmlQualifiedName_o *)v76;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v217,
                          (System_Xml_XmlQualifiedName_o *)v76,
                          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v82 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo, v78, v79, v80, v81);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v82,
                      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v217,
                      v77,
                      (System_Xml_Schema_XmlSchemaObject_o *)v82,
                      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v217,
                           (System_Type_o *)v77,
                           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v84 = v228;
                  v85 = v230;
                  v86 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v91 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B170CC(
                                                                                               ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                               v87,
                                                                                               v88,
                                                                                               v89,
                                                                                               v90);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v91, v84, v85, 0LL, v74, 0LL);
                  if ( !v86 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v86,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v91,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v213;
                  v5 = v212;
                  openedSquareArray = v211;
                }
                else
                {
                  if ( !entity )
                    break;
                  v214 = v71;
                  v210 = v72;
                  Name = SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                  if ( !entity )
                    break;
                  v122 = Name;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v74->fields.priority;
                  id = v74->fields.id;
                  iconId = v74->fields.iconId;
                  skillType = v74->fields.skillType;
                  v128 = EffectExplanation;
                  v133 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B170CC(
                                                                                           ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                           v129,
                                                                                           v130,
                                                                                           v131,
                                                                                           v132);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v133,
                    v122,
                    v128,
                    id,
                    priority,
                    iconId,
                    skillType,
                    0LL);
                  if ( !v218 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v218,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v133,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v213;
                  v5 = v212;
                  openedSquareArray = v211;
                  v72 = v210;
                  v71 = v214;
                }
              }
            }
          }
        }
      }
      else
      {
        IsPassive = ClassBoardSquareEntity__get_IsCommandSpell(v74, 0LL);
        if ( v5 != 1 && IsPassive )
        {
          if ( !v60 )
            break;
          IsPassive = ClassBoardCommandSpellMaster__TryGetEntityList(
                        v60,
                        &entitys,
                        v74->fields.targetId,
                        v74->fields.upSkillLv,
                        v69);
          if ( IsPassive )
          {
            v92 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_string__TypeInfo, v66, v67, v68, v69);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v92,
              (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
            if ( !entitys )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v221,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
              (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            v227 = *(System_Collections_Generic_List_Enumerator_T__o *)v221;
            while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v227,
                      (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
            {
              current = v227.fields.current;
              if ( !v227.fields.current )
                sub_B170D4();
              if ( !v219 )
                sub_B170D4();
              if ( FuncDispMaster__IsContainFuncIds(
                     v219,
                     &v226,
                     (System_Int32_array *)v227.fields.current[3].klass,
                     0LL) )
              {
                v98 = System_String__Join_int_(
                        (System_String_o *)StringLiteral_698/*","*/,
                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                        (const MethodInfo_224FA24 *)Method_System_String_Join_int___);
                if ( !v92 )
                  sub_B170D4();
                v99 = (System_Xml_XmlQualifiedName_o *)v98;
                if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v92,
                        (WarBoardManager_TaskList_o *)v98,
                        (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v217 )
                    sub_B170D4();
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v217,
                          v99,
                          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v104 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo, v100, v101, v102, v103);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v104,
                      (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v217,
                      v99,
                      (System_Xml_Schema_XmlSchemaObject_o *)v104,
                      (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  v105 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v217,
                           (System_Type_o *)v99,
                           (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v106 = v226;
                  v107 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v105;
                  v112 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B170CC(
                                                                                                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo,
                                                                                                v108,
                                                                                                v109,
                                                                                                v110,
                                                                                                v111);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v112,
                    v106,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v74,
                    0LL);
                  if ( !v107 )
                    sub_B170D4();
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v107,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v112,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v92,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v99,
                    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                v115 = v74->fields.priority;
                v117 = v74->fields.id;
                v116 = v74->fields.iconId;
                v118 = v74->fields.skillType;
                v119 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B170CC(
                                                                                         ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                         v94,
                                                                                         v95,
                                                                                         v96,
                                                                                         v97);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v119,
                  klass,
                  monitor,
                  v117,
                  v115,
                  v116,
                  v118,
                  0LL);
                if ( !v218 )
                  sub_B170D4();
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v218,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v119,
                  (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
              }
            }
            *(_DWORD *)&v221[2 * v216 + 20] = 569;
            v72 = ++v222;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v227,
              (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            Master_WarQuestSelectionMaster = v213;
            v5 = v212;
            openedSquareArray = v211;
            v60 = v209;
            v71 = v72;
            if ( v72 )
            {
              v120 = v72 - 1;
              v216 = v72;
              if ( *(_DWORD *)&v221[2 * v72 + 18] == 569 )
              {
                v71 = --v72;
                v222 = v120;
                v216 = v120;
              }
            }
            else
            {
              v216 = 0;
            }
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v73 >= max_length )
        goto LABEL_65;
    }
LABEL_154:
    sub_B170D4();
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_FunctionMaster___);
  if ( !v217 )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v221,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v217,
    (const MethodInfo_2DA41F4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v225 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v221;
  v134 = v71;
LABEL_70:
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v225,
            (const MethodInfo_26BCF58 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__) )
  {
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v225.fields.current.fields.value;
    if ( !v225.fields.current.fields.value )
      sub_B170D4();
    if ( SLODWORD(v225.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v225.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B170D4();
      v138 = (System_String_o *)StringLiteral_1/*""*/;
      if ( data[3] )
      {
        v139 = data[3];
        if ( !v139 )
          sub_B170D4();
        if ( !v213 )
          sub_B170D4();
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v213,
               &v224,
               *(_DWORD *)(v139 + 16),
               (const MethodInfo_266F3E4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v224 )
            sub_B170D4();
          v138 = SkillEntity__getName((SkillEntity_o *)v224, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v225.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
        v140 = data[4];
        if ( !v140 )
          sub_B170D4();
        v138 = *(System_String_o **)(v140 + 32);
      }
      v220 = v138;
      v141 = sub_B17014(int___TypeInfo, 0LL, v135);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v221,
        value,
        (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v142 = 0;
      v223 = *(System_Collections_Generic_List_Enumerator_T__o *)v221;
      while ( 2 )
      {
        if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v223,
                (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
        {
          *(_DWORD *)&v221[2 * v134 + 20] = 947;
          v156 = v222 + 1;
          v222 = v156;
          v134 = v156;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v223,
            (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
          if ( v156 && *(_DWORD *)&v221[2 * v156 + 18] == 947 )
          {
            v134 = v156 - 1;
            v222 = v156 - 1;
          }
          if ( !value->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v158 = value->fields._items->m_Items[0];
          if ( !v158 )
            sub_B170D4();
          buff = v158->fields.buff;
          if ( !buff )
            sub_B170D4();
          v164 = ClassBoardBaseDialog__ReplaceFractionFormat(
                   *(System_String_o **)&buff->fields.isUse,
                   (System_Int32_array *)v141,
                   v157);
          if ( !value->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v165 = value->fields._items->m_Items[0];
          if ( !v165 )
            sub_B170D4();
          v166 = v165[1].monitor;
          if ( !v166 )
            sub_B170D4();
          v167 = v166[5];
          if ( !value->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v168 = v165[1].monitor;
          if ( !v168 )
            sub_B170D4();
          v169 = v168[6];
          if ( !value->fields._size )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
          v170 = v165[1].monitor;
          if ( !v170 )
            sub_B170D4();
          v171 = v170[14];
          v172 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B170CC(
                                                                                   ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo,
                                                                                   v160,
                                                                                   v161,
                                                                                   v162,
                                                                                   v163);
          ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
            v172,
            v220,
            v164,
            v167,
            v142,
            v169,
            v171,
            0LL);
          if ( !v218 )
            sub_B170D4();
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            v218,
            (EventMissionProgressRequest_Argument_ProgressData_o *)v172,
            (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
          goto LABEL_70;
        }
        v145 = v223.fields.current;
        v146 = sub_B17014(int___TypeInfo, 0LL, v144);
        if ( !v145 )
          sub_B170D4();
        v149 = v145[1].monitor;
        if ( v149 )
        {
          if ( !v215 )
            sub_B170D4();
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                                 v215,
                                                                 v149[4],
                                                                 v149[5],
                                                                 0LL);
LABEL_95:
          v151 = (__int64)DispValFromSkill;
        }
        else
        {
          v151 = v146;
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v145[2].klass;
          if ( DispValFromSkill )
          {
            DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                   DispValFromSkill,
                                                                   v147);
            goto LABEL_95;
          }
        }
        if ( !v141 )
          sub_B170D4();
        v152 = *(_QWORD *)(v141 + 24);
        if ( v152 )
        {
          if ( (int)v152 >= 1 )
          {
            v153 = 8LL;
            do
            {
              if ( v153 - 8 >= (unsigned __int64)(unsigned int)v152 )
              {
                sub_B17100(DispValFromSkill, v147, v148);
                sub_B170A0();
              }
              if ( !v151 )
                sub_B170D4();
              if ( v153 - 8 >= (unsigned __int64)*(unsigned int *)(v151 + 24) )
              {
                sub_B17100(DispValFromSkill, v147, v148);
                sub_B170A0();
              }
              v154 = v153 - 7 < (int)v152;
              *(_DWORD *)(v141 + 4 * v153) += *(_DWORD *)(v151 + 4 * v153);
              ++v153;
            }
            while ( v154 );
          }
        }
        else
        {
          v141 = v151;
        }
        v155 = v145[2].monitor;
        if ( !v155 )
          sub_B170D4();
        v143 = v155[20];
        if ( v143 > v142 )
          v142 = v143;
        continue;
      }
    }
  }
  *(_DWORD *)&v221[2 * v134 + 20] = 1073;
  v173 = ++v222;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v225,
    (const MethodInfo_26BD0C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v173 && *(_DWORD *)&v221[2 * v173 + 18] == 1073 )
    v222 = v173 - 1;
  v178 = ClassBoardBaseDialog___c_TypeInfo;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v178 = ClassBoardBaseDialog___c_TypeInfo;
  }
  static_fields = v178->static_fields;
  _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v178->vtable._0_Equals.methodPtr) & 4) != 0 && !v178->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v178);
      static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v181 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                                                                 v174,
                                                                                 v175,
                                                                                 v176,
                                                                                 v177);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_0,
      v181,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v182 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v182->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v182->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v183,
      v184,
      v185,
      v186,
      v187,
      v188);
  }
  v189 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v218,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_19BDA8C *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v194 = ClassBoardBaseDialog___c_TypeInfo;
  v195 = v189;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v194 = ClassBoardBaseDialog___c_TypeInfo;
  }
  v196 = v194->static_fields;
  _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v196->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( (BYTE3(v194->vtable._0_Equals.methodPtr) & 4) != 0 && !v194->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v194);
      v196 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v198 = (Il2CppObject *)v196->__9;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B170CC(
                                                                                 System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo,
                                                                                 v190,
                                                                                 v191,
                                                                                 v192,
                                                                                 v193);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_1,
      v198,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      (const MethodInfo_2B6B6EC *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v199 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v199->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v199->__9__28_1,
      (System_Int32_array **)_9__28_1,
      v200,
      v201,
      v202,
      v203,
      v204,
      v205);
  }
  v206 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v195,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_19C4504 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v206, (const MethodInfo_19C7AA0 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  UnityEngine_GameObject_o *v4; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_Object_o *conditionListObj; // x20
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_40FAF91 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAF91 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectObj, 0LL, 0LL) )
  {
    v4 = this->fields.effectObj;
    if ( !v4 )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(v4, 0, 0LL);
  }
  itemListObj = (UnityEngine_Object_o *)this->fields.itemListObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemListObj, 0LL, 0LL) )
  {
    v6 = this->fields.itemListObj;
    if ( !v6 )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(v6, 0, 0LL);
  }
  conditionListObj = (UnityEngine_Object_o *)this->fields.conditionListObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(conditionListObj, 0LL, 0LL) )
  {
    v8 = this->fields.conditionListObj;
    if ( !v8 )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(v8, 0, 0LL);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
LABEL_23:
    sub_B170D4();
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
  __int64 v32; // x1
  __int64 v33; // x2
  System_String_o *v34; // x21
  System_String_o *v35; // x0
  System_String_o *v36; // x20
  System_String_o *v37; // x0
  System_String_o *v38; // x20
  System_String_o *v39; // x0
  System_String_o *v40; // x20
  System_String_o *v41; // x0
  System_String_o *v42; // x20
  System_String_o *v43; // x0
  System_String_o *v44; // x20
  unsigned __int64 v45; // x8
  System_String_o *v46; // x0
  System_String_o *v47; // x20
  unsigned __int64 v48; // x8
  System_String_o *v49; // x0
  System_String_o *v50; // x20
  unsigned __int64 v51; // x8
  System_String_o *v52; // x0
  System_String_o *v53; // x20
  unsigned __int64 v54; // x8
  System_String_o *v55; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v58; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_40FAF98 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_23581/*"{x"*/, funcVals);
    sub_B16FFC(&StringLiteral_23377/*"{"*/, v5);
    sub_B16FFC(&StringLiteral_23312/*"xx}"*/, v6);
    sub_B16FFC(&StringLiteral_23311/*"xxx}"*/, v7);
    sub_B16FFC(&StringLiteral_23602/*"}"*/, v8);
    sub_B16FFC(&StringLiteral_23584/*"{xxxx"*/, v9);
    sub_B16FFC(&StringLiteral_23582/*"{xx"*/, v10);
    sub_B16FFC(&StringLiteral_23310/*"xxxx}"*/, v11);
    sub_B16FFC(&StringLiteral_23313/*"x}"*/, v12);
    sub_B16FFC(&StringLiteral_23583/*"{xxx"*/, v13);
    byte_40FAF98 = 1;
  }
  v58 = 0LL;
  if ( funcVals )
  {
    v14 = *(_QWORD *)&funcVals->max_length;
    if ( v14 )
    {
      HIDWORD(v58) = 0;
      if ( (int)v14 >= 1 )
      {
        do
        {
          v15 = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
          v16 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377/*"{"*/,
                  v15,
                  (System_String_o *)StringLiteral_23310/*"xxxx}"*/,
                  0LL);
          v17 = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
          v18 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377/*"{"*/,
                  v17,
                  (System_String_o *)StringLiteral_23311/*"xxx}"*/,
                  0LL);
          v19 = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
          v20 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377/*"{"*/,
                  v19,
                  (System_String_o *)StringLiteral_23312/*"xx}"*/,
                  0LL);
          v21 = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
          v22 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377/*"{"*/,
                  v21,
                  (System_String_o *)StringLiteral_23313/*"x}"*/,
                  0LL);
          v23 = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
          v24 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23377/*"{"*/,
                  v23,
                  (System_String_o *)StringLiteral_23602/*"}"*/,
                  0LL);
          v25 = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
          v26 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23581/*"{x"*/,
                  v25,
                  (System_String_o *)StringLiteral_23602/*"}"*/,
                  0LL);
          v27 = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
          v28 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23582/*"{xx"*/,
                  v27,
                  (System_String_o *)StringLiteral_23602/*"}"*/,
                  0LL);
          v29 = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
          oldValue = System_String__Concat_43746016(
                       (System_String_o *)StringLiteral_23583/*"{xxx"*/,
                       v29,
                       (System_String_o *)StringLiteral_23602/*"}"*/,
                       0LL);
          v30 = System_Int32__ToString((int32_t)&v58 + 4, 0LL);
          v31 = System_String__Concat_43746016(
                  (System_String_o *)StringLiteral_23584/*"{xxxx"*/,
                  v30,
                  (System_String_o *)StringLiteral_23602/*"}"*/,
                  0LL);
          if ( HIDWORD(v58) >= funcVals->max_length )
            goto LABEL_26;
          v34 = v31;
          LODWORD(v58) = 10000 * funcVals->m_Items[SHIDWORD(v58) + 1];
          v35 = System_Int32__ToString((int32_t)&v58, 0LL);
          if ( !text )
            goto LABEL_27;
          v31 = System_String__Replace_43750968(text, v16, v35, 0LL);
          if ( HIDWORD(v58) >= funcVals->max_length )
            goto LABEL_26;
          v36 = v31;
          LODWORD(v58) = 1000 * funcVals->m_Items[SHIDWORD(v58) + 1];
          v37 = System_Int32__ToString((int32_t)&v58, 0LL);
          if ( !v36 )
            goto LABEL_27;
          v31 = System_String__Replace_43750968(v36, v18, v37, 0LL);
          if ( HIDWORD(v58) >= funcVals->max_length )
            goto LABEL_26;
          v38 = v31;
          LODWORD(v58) = 100 * funcVals->m_Items[SHIDWORD(v58) + 1];
          v39 = System_Int32__ToString((int32_t)&v58, 0LL);
          if ( !v38 )
            goto LABEL_27;
          v31 = System_String__Replace_43750968(v38, v20, v39, 0LL);
          if ( HIDWORD(v58) >= funcVals->max_length )
            goto LABEL_26;
          v40 = v31;
          LODWORD(v58) = 10 * funcVals->m_Items[SHIDWORD(v58) + 1];
          v41 = System_Int32__ToString((int32_t)&v58, 0LL);
          if ( !v40 )
            goto LABEL_27;
          v31 = System_String__Replace_43750968(v40, v22, v41, 0LL);
          if ( HIDWORD(v58) >= funcVals->max_length )
            goto LABEL_26;
          v42 = v31;
          v43 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v58) + 32, 0LL);
          if ( !v42 )
            goto LABEL_27;
          v31 = System_String__Replace_43750968(v42, v24, v43, 0LL);
          if ( HIDWORD(v58) >= funcVals->max_length )
            goto LABEL_26;
          v44 = v31;
          v45 = 1717986919LL * funcVals->m_Items[SHIDWORD(v58) + 1];
          LODWORD(v58) = (v45 >> 63) + (SHIDWORD(v45) >> 2);
          v46 = System_Int32__ToString((int32_t)&v58, 0LL);
          if ( !v44 )
            goto LABEL_27;
          v31 = System_String__Replace_43750968(v44, v26, v46, 0LL);
          if ( HIDWORD(v58) >= funcVals->max_length )
            goto LABEL_26;
          v47 = v31;
          v48 = 1374389535LL * funcVals->m_Items[SHIDWORD(v58) + 1];
          LODWORD(v58) = (v48 >> 63) + (SHIDWORD(v48) >> 5);
          v49 = System_Int32__ToString((int32_t)&v58, 0LL);
          if ( !v47 )
            goto LABEL_27;
          v31 = System_String__Replace_43750968(v47, v28, v49, 0LL);
          if ( HIDWORD(v58) >= funcVals->max_length )
            goto LABEL_26;
          v50 = v31;
          v51 = 274877907LL * funcVals->m_Items[SHIDWORD(v58) + 1];
          LODWORD(v58) = (v51 >> 63) + (SHIDWORD(v51) >> 6);
          v52 = System_Int32__ToString((int32_t)&v58, 0LL);
          if ( !v50 )
            goto LABEL_27;
          v31 = System_String__Replace_43750968(v50, oldValue, v52, 0LL);
          if ( HIDWORD(v58) >= funcVals->max_length )
          {
LABEL_26:
            sub_B17100(v31, v32, v33);
            sub_B170A0();
          }
          v53 = v31;
          v54 = 1759218605LL * funcVals->m_Items[SHIDWORD(v58) + 1];
          LODWORD(v58) = (v54 >> 63) + (SHIDWORD(v54) >> 12);
          v55 = System_Int32__ToString((int32_t)&v58, 0LL);
          if ( !v53 )
LABEL_27:
            sub_B170D4();
          text = System_String__Replace_43750968(v53, v34, v55, 0LL);
          ++HIDWORD(v58);
        }
        while ( SHIDWORD(v58) < (signed int)funcVals->max_length );
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
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FAF96 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v6);
    byte_40FAF96 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  itemIconComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      itemIconComponentList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v8.fields.current )
        sub_B170D4();
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v8.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
  }
}


void __fastcall ClassBoardBaseDialog__SetEffectScrollInitPos(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *effectScrollView; // x8
  UIProgressBar_o *v4; // x0
  float v5; // s0
  UIScrollView_o *v6; // x0
  UIScrollView_o *v7; // x0

  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView
    || (v4 = *(UIProgressBar_o **)&effectScrollView->fields.showScrollBars) == 0LL
    || (HIDWORD(effectScrollView->fields.onDragStarted) != 4 ? (v5 = 0.0) : (v5 = 0.5),
        (UIProgressBar__set_value(v4, v5, 0LL), (v6 = this->fields.effectScrollView) == 0LL)
     || (UIScrollView__UpdatePosition(v6, 0LL), (v7 = this->fields.effectScrollView) == 0LL)) )
  {
    sub_B170D4();
  }
  UIScrollView__UpdateScrollbars(v7, 0LL);
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
  UserGameEntity_o *SelfUserGame; // x0
  int32_t qp; // w23
  UILabel_o *itemQpLabel; // x21
  System_String_o *v14; // x0
  UILabel_o *itemQpNum; // x21
  System_String_o *v16; // x22
  int32_t *v17; // x1
  System_String_o *v18; // x0
  Il2CppObject *v19; // x0
  System_String_o *v20; // x0
  UILabel_o *itemHaveQpLabel; // x20
  System_String_o *v22; // x0
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v24; // x21
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  UnityEngine_GameObject_o *itemQpObj; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v29; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v30; // [xsp+8h] [xbp-38h] BYREF
  int32_t v31; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FAF94 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&needNum);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_2992/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v6);
    sub_B16FFC(&StringLiteral_2994/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v7);
    sub_B16FFC(&StringLiteral_2991/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v8);
    sub_B16FFC(&StringLiteral_2993/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v9);
    sub_B16FFC(&StringLiteral_2989/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v10);
    byte_40FAF94 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_24;
  qp = SelfUserGame->fields.qp;
  itemQpLabel = this->fields.itemQpLabel;
  if ( qp >= needNum )
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__Get((System_String_o *)StringLiteral_2991/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( itemQpLabel )
    {
      UILabel__set_text(itemQpLabel, v18, 0LL);
      itemQpNum = this->fields.itemQpNum;
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
      v30 = needNum;
      v17 = &v30;
      goto LABEL_15;
    }
LABEL_24:
    sub_B170D4();
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v14 = LocalizationManager__Get((System_String_o *)StringLiteral_2992/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
  if ( !itemQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemQpLabel, v14, 0LL);
  itemQpNum = this->fields.itemQpNum;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_2994/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
  v17 = &v31;
  v31 = needNum;
LABEL_15:
  v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v17);
  v20 = System_String__Format(v16, v19, 0LL);
  if ( !itemQpNum )
    goto LABEL_24;
  UILabel__set_text(itemQpNum, v20, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v22 = LocalizationManager__Get((System_String_o *)StringLiteral_2989/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemHaveQpLabel, v22, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v24 = LocalizationManager__Get((System_String_o *)StringLiteral_2993/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v29 = qp;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v29);
  v26 = System_String__Format(v24, v25, 0LL);
  if ( !itemHaveQpNum )
    goto LABEL_24;
  UILabel__set_text(itemHaveQpNum, v26, 0LL);
  itemQpObj = this->fields.itemQpObj;
  if ( !itemQpObj )
    goto LABEL_24;
  gameObject = UnityEngine_GameObject__get_gameObject(itemQpObj, 0LL);
  if ( !gameObject )
    goto LABEL_24;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v22; // x21
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v26; // w0
  IClassBoardSquareModel_c *v27; // x8
  int32_t v28; // w22
  unsigned __int64 v29; // x10
  int32_t *v30; // x11
  __int64 v31; // x0
  int32_t v32; // w0
  __int64 v33; // x2
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Int32_array **v42; // x22
  __int64 v43; // x21
  const MethodInfo *v44; // x3
  System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillListLocal; // x0
  float v46; // s11
  Il2CppObject *current; // x23
  struct UnityEngine_GameObject_o *effectDetailObj; // x21
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  IClassBoardSquareModel_c *v52; // x8
  System_String_o *monitor; // x24
  System_String_o *v54; // x25
  int32_t v55; // w23
  ClassBoardDialogSkillDetailPartsComponent_o *v56; // x22
  unsigned __int64 v57; // x10
  int32_t *v58; // x11
  __int64 v59; // x0
  int32_t v60; // w0
  float v61; // s10
  struct UIScrollView_o *effectScrollView; // x0
  struct UIScrollView_o *v63; // x8
  UIProgressBar_o *v64; // x0
  UIScrollView_o *v65; // x0
  struct UIScrollView_o *v66; // x8
  UnityEngine_Component_o *v67; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *Parent; // x0
  UnityEngine_GameObject_o *v70; // x0
  System_Collections_Generic_List_Enumerator_T__o v71; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v72; // [xsp+20h] [xbp-90h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FAF92 & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardSquareEntity___TypeInfo, squareModel);
    sub_B16FFC(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9);
    sub_B16FFC(&DataManager_TypeInfo, v10);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v11);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v12);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v13);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v14);
    sub_B16FFC(&IClassBoardSquareModel_TypeInfo, v15);
    sub_B16FFC(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    byte_40FAF92 = 1;
  }
  entity = 0LL;
  memset(&v72, 0, sizeof(v72));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_55;
  klass = squareModel->klass;
  v22 = (ClassBoardSquareMaster_o *)Master_WarQuestSelectionMaster;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v23 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v23;
      p_offset += 4;
      if ( v23 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_12:
    p_method = sub_AAFEF8(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v26 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v27 = squareModel->klass;
  v28 = v26;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v29 = 0LL;
    v30 = &v27->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v30 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v29;
      v30 += 4;
      if ( v29 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v31 = (__int64)&v27->vtable[*v30].method;
  }
  else
  {
LABEL_18:
    v31 = sub_AAFEF8(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v31)(squareModel, *(_QWORD *)(v31 + 8));
  if ( !v22 )
    goto LABEL_55;
  ClassBoardSquareMaster__TryGetEntity(v22, &entity, v28, v32, 0LL);
  v34 = sub_B17014(ClassBoardSquareEntity___TypeInfo, 1LL, v33);
  if ( !v34 )
    goto LABEL_55;
  v42 = (System_Int32_array **)entity;
  v43 = v34;
  if ( entity )
  {
    v34 = sub_B170BC(entity, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !v34 )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
  }
  if ( !*(_DWORD *)(v43 + 24) )
  {
    sub_B17100(v34, v35, v36);
    sub_B170A0();
  }
  *(_QWORD *)(v43 + 32) = v42;
  sub_B16F98((BattleServantConfConponent_o *)(v43 + 32), v42, v36, v37, v38, v39, v40, v41);
  OpenSkillListLocal = ClassBoardBaseDialog__GetOpenSkillListLocal((ClassBoardSquareEntity_array *)v43, 0, 0, v44);
  if ( !OpenSkillListLocal )
    goto LABEL_55;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v71,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)OpenSkillListLocal,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v72 = v71;
  v46 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v72,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v72.fields.current;
    effectDetailObj = this->fields.effectDetailObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v49 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)effectDetailObj,
                                        (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v50 = v49;
    if ( !v49 )
      sub_B170D4();
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v49,
                                (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_B170D4();
    v52 = squareModel->klass;
    v54 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v55 = (int32_t)current[2].monitor;
    v56 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_srcLineSprite;
    if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
    {
      v57 = 0LL;
      v58 = &v52->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v58 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v59 = (__int64)&v52->vtable[*v58 + 7].method;
    }
    else
    {
LABEL_36:
      v59 = sub_AAFEF8(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v60 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v59)(squareModel, *(_QWORD *)(v59 + 8));
    if ( !v56 )
      sub_B170D4();
    v61 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v56, v54, monitor, v55, v60, 0LL);
    GameObjectExtensions__SetParent_27425860(v50, this->fields.effectDetailParent, 0LL);
    one = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v50, one, 0LL);
    GameObjectExtensions__SetLocalPosition_27420076(v50, 0.0, -v46, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v50, 1, 0LL);
    v46 = v46 + v61;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v72,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_55;
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))effectScrollView->klass->vtable._9_SetDragAmount.method)(
    effectScrollView,
    0LL,
    effectScrollView->klass->vtable._10_MoveRelative.methodPtr,
    0.0,
    0.0);
  v63 = this->fields.effectScrollView;
  if ( !v63 )
    goto LABEL_55;
  v64 = *(UIProgressBar_o **)&v63->fields.showScrollBars;
  if ( !v64 )
    goto LABEL_55;
  UIProgressBar__set_value(v64, 0.0, 0LL);
  v65 = this->fields.effectScrollView;
  if ( !v65 )
    goto LABEL_55;
  UIScrollView__UpdatePosition(v65, 0LL);
  if ( disableScrollViewSize > 0.0 && v46 <= disableScrollViewSize )
  {
    v66 = this->fields.effectScrollView;
    if ( v66 )
    {
      HIDWORD(v66->fields.onDragStarted) = 4;
      v67 = (UnityEngine_Component_o *)this->fields.effectScrollView;
      if ( v67 )
      {
        gameObject = UnityEngine_Component__get_gameObject(v67, 0LL);
        Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( Parent )
        {
          v70 = UnityEngine_Component__get_gameObject(Parent, 0LL);
          GameObjectExtensions__SetLocalPositionY(v70, disableScrollViewPosY, 0LL);
          return;
        }
      }
    }
LABEL_55:
    sub_B170D4();
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
  System_String_o *v21; // x0
  UnityEngine_Object_o *itemQpObj; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  UnityEngine_GameObject_o *v27; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v28; // x22
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_GameObject_o *itemListObj; // x0
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v37; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v40; // x20
  int v41; // w26
  char v42; // w25
  int i; // w22
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x23
  __int64 v54; // x8
  unsigned __int64 v55; // x10
  int *v56; // x11
  __int64 v57; // x0
  int32_t v58; // w0
  __int64 v59; // x8
  int32_t v60; // w22
  unsigned __int64 v61; // x10
  IClassBoardItemModel_c **v62; // x11
  __int64 v63; // x0
  int32_t v64; // w23
  WebViewManager_o *Instance; // x0
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v67; // x2
  struct UnityEngine_GameObject_o *itemIcon; // x24
  UnityEngine_GameObject_o *v69; // x0
  UIGrid_o *itemIconListGrid; // x25
  UnityEngine_Transform_o *transform; // x1
  ClassBoardItemIconComponent_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v73; // x24
  __int64 v74; // x8
  unsigned __int64 v75; // x10
  int *v76; // x11
  __int64 v77; // x0
  struct UIGrid_o *v78; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemIconComponentList; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FAF93 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ItemMaster___, itemList);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5);
    sub_B16FFC(&IClassBoardItemModel_TypeInfo, v6);
    sub_B16FFC(&System_IDisposable_TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v12);
    sub_B16FFC(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v13);
    sub_B16FFC(&LocalizationManager_TypeInfo, v14);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&StringLiteral_2987/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v18);
    byte_40FAF93 = 1;
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
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_2987/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
    if ( !v20 )
      goto LABEL_82;
    UILabel__set_text(v20, v21, 0LL);
  }
  itemQpObj = (UnityEngine_Object_o *)this->fields.itemQpObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemQpObj, 0LL, 0LL) )
  {
    v27 = this->fields.itemQpObj;
    if ( !v27 )
      goto LABEL_82;
    UnityEngine_GameObject__SetActive(v27, 0, 0LL);
  }
  v28 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo,
                                                                                                  v23,
                                                                                                  v24,
                                                                                                  v25,
                                                                                                  v26);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v28,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v28;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.itemIconComponentList,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  itemListObj = this->fields.itemListObj;
  p_itemIconComponentList = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **)&this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_82;
  UnityEngine_GameObject__SetActive(itemListObj, 1, 0LL);
  if ( !itemList )
    goto LABEL_82;
  klass = itemList->klass;
  if ( *(_WORD *)&itemList->klass->_2.bitflags1 )
  {
    v37 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v37;
      p_offset += 4;
      if ( v37 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_24:
    p_method = sub_AAFEF8(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v40 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v41 = 0;
  v42 = 1;
LABEL_27:
  for ( i = v41; ; i = 1 )
  {
    if ( !v40 )
      sub_B170D4();
    v44 = *(_QWORD *)v40;
    v41 = i;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v45 = 0LL;
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v45;
        v46 += 4;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_33;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_33:
      v47 = sub_AAFEF8(v40, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v40, *(_QWORD *)(v47 + 8)) & 1) == 0 )
      break;
    v48 = *(_QWORD *)v40;
    if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
    {
      v49 = 0LL;
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v50 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
          goto LABEL_40;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_40:
      v51 = sub_AAFEF8(v40, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v40, *(_QWORD *)(v51 + 8));
    v53 = v52;
    if ( !v52 )
      sub_B170D4();
    v54 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v55 = 0LL;
      v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v56 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v55;
        v56 += 4;
        if ( v55 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_47;
      }
      v57 = v54 + 16LL * *v56 + 312;
    }
    else
    {
LABEL_47:
      v57 = sub_AAFEF8(v52, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v53, *(_QWORD *)(v57 + 8));
    v59 = *(_QWORD *)v53;
    v60 = v58;
    if ( *(_WORD *)(*(_QWORD *)v53 + 298LL) )
    {
      v61 = 0LL;
      v62 = (IClassBoardItemModel_c **)(*(_QWORD *)(v59 + 176) + 8LL);
      while ( *(v62 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v61;
        v62 += 2;
        if ( v61 >= *(unsigned __int16 *)(*(_QWORD *)v53 + 298LL) )
          goto LABEL_53;
      }
      v63 = v59 + 16LL * (*(_DWORD *)v62 + 1) + 312;
    }
    else
    {
LABEL_53:
      v63 = sub_AAFEF8(v53, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v53, *(_QWORD *)(v63 + 8));
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B170D4();
    if ( !ItemMaster__isQP(MasterData_WarQuestSelectionMaster, v60, 0LL) )
    {
      itemIcon = this->fields.itemIcon;
      if ( (v42 & 1) == 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v69 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                            (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v69;
        if ( !v69 )
          sub_B170D4();
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform(v69, 0LL);
        if ( !itemIconListGrid )
          sub_B170D4();
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_B170D4();
      UnityEngine_GameObject__SetActive(itemIcon, 1, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(itemIcon, zero, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(itemIcon, one, 0LL);
      Component_srcLineSprite = (ClassBoardItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   itemIcon,
                                                                   (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v73 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B170D4();
      ClassBoardItemIconComponent__setItemInfo(Component_srcLineSprite, v60, v64, 0LL);
      if ( !*p_itemIconComponentList )
        sub_B170D4();
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_itemIconComponentList,
        v73,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
      v42 = 0;
      goto LABEL_27;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v64, v67);
  }
  v74 = *(_QWORD *)v40;
  if ( *(_WORD *)(*(_QWORD *)v40 + 298LL) )
  {
    v75 = 0LL;
    v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      ++v75;
      v76 += 4;
      if ( v75 >= *(unsigned __int16 *)(*(_QWORD *)v40 + 298LL) )
        goto LABEL_74;
    }
    v77 = v74 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_74:
    v77 = sub_AAFEF8(v40, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v77)(v40, *(_QWORD *)(v77 + 8));
  v78 = this->fields.itemIconListGrid;
  if ( !v78 )
LABEL_82:
    sub_B170D4();
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v78->klass->vtable._8_Reposition.method)(
    v78,
    v78->klass->vtable._9_ResetPosition.methodPtr);
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
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_int__o *v24; // x21
  CommonReleaseMaster_o *Master_WarQuestSelectionMaster; // x0
  CommonReleaseEntity_array *List; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x8
  CommonReleaseEntity_array *v30; // x20
  __int64 v31; // x22
  CommonReleaseEntity_o *v32; // x9
  WarQuestSelectionMaster_o *v33; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v34; // x20
  char v35; // w23
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  EventMissionEntity_o *v40; // x22
  MasterMissionListViewItem_o *v41; // x21
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Transform_o *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Component_o *v47; // x0
  UIGrid_o *v48; // x21
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_Transform_o *v50; // x1
  struct UIGrid_o *v51; // x0
  struct UIScrollView_o *missionScrollView; // x0
  struct UIScrollView_o *v53; // x0
  UIScrollView_o *v54; // x0
  UnityEngine_Component_o *v55; // x0
  UnityEngine_Transform_o *v56; // x0
  UnityEngine_Behaviour_o *v57; // x0
  UnityEngine_GameObject_o *missionScrollBar; // x0
  System_Collections_Generic_List_Enumerator_int__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v60; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_40FAF95 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type);
    sub_B16FFC(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMissionMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B16FFC(&MasterMissionListViewItem_TypeInfo, v16);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_Transform___, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    byte_40FAF95 = 1;
  }
  entity = 0LL;
  memset(&v60, 0, sizeof(v60));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v24 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22,
                                                    v23);
  System_Collections_Generic_List_int____ctor(
    v24,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (CommonReleaseMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_54;
      List = CommonReleaseMaster__getList(Master_WarQuestSelectionMaster, SHIDWORD(v3), 0LL);
      if ( !List )
        goto LABEL_54;
      v29 = *(_QWORD *)&List->max_length;
      v30 = List;
      if ( !v29 )
        return;
      if ( (int)v29 >= 1 )
      {
        v31 = 0LL;
        do
        {
          if ( (unsigned int)v31 >= (unsigned int)v29 )
          {
            sub_B17100(List, v27, v28);
            sub_B170A0();
          }
          v32 = v30->m_Items[v31];
          if ( !v32 )
            goto LABEL_54;
          if ( (unsigned int)(v32->fields.condType - 23) <= 1 )
          {
            if ( !v24 )
              goto LABEL_54;
            System_Collections_Generic_List_int___Add(
              v24,
              v32->fields.condId,
              (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
            v29 = *(_QWORD *)&v30->max_length;
          }
        }
        while ( (int)++v31 < (int)v29 );
      }
    }
  }
  else
  {
    if ( !v24 )
      goto LABEL_54;
    System_Collections_Generic_List_int___Add(
      v24,
      SHIDWORD(v3),
      (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v33 = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v24 )
    goto LABEL_54;
  v34 = (DataMasterBase_WarMaster__WarEntity__int__o *)v33;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    v24,
    (const MethodInfo_2F11334 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v60 = v59;
  v35 = 1;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v60,
            (const MethodInfo_2071AE8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    if ( !v34 )
      sub_B170D4();
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      v34,
      &entity,
      v60.fields.current,
      (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v40 = (EventMissionEntity_o *)entity;
    if ( entity )
    {
      v41 = (MasterMissionListViewItem_o *)sub_B170CC(MasterMissionListViewItem_TypeInfo, v36, v37, v38, v39);
      MasterMissionListViewItem___ctor(v41, v40, 2, 0LL);
      if ( !v41 )
        sub_B170D4();
      ((void (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v41->klass->vtable._6_CheckMissionCond.method)(
        v41,
        v41->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v35 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_B170D4();
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_B170D4();
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v47 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                           (UILabel_o *)Parent,
                                           transform,
                                           (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v47 )
          sub_B170D4();
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                                                         v47,
                                                                         (const MethodInfo_18BD4D4 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_B170D4();
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v41,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v48 = this->fields.conditionGrid;
      v49 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v50 = GameObjectExtensions__GetParent(v49, 0LL);
      if ( !v48 )
        sub_B170D4();
      UIGrid__AddChild(v48, v50, 0LL);
      v35 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v60,
    (const MethodInfo_2071AE4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v51 = this->fields.conditionGrid;
  if ( !v51 )
    goto LABEL_54;
  ((void (__fastcall *)(struct UIGrid_o *, Il2CppMethodPointer))v51->klass->vtable._8_Reposition.method)(
    v51,
    v51->klass->vtable._9_ResetPosition.methodPtr);
  missionScrollView = this->fields.missionScrollView;
  if ( !missionScrollView )
    goto LABEL_54;
  ((void (__fastcall *)(struct UIScrollView_o *, _QWORD, Il2CppMethodPointer, float, float))missionScrollView->klass->vtable._9_SetDragAmount.method)(
    missionScrollView,
    0LL,
    missionScrollView->klass->vtable._10_MoveRelative.methodPtr,
    0.0,
    0.0);
  v53 = this->fields.missionScrollView;
  if ( !v53 )
    goto LABEL_54;
  ((void (__fastcall *)(struct UIScrollView_o *, __int64, Il2CppMethodPointer))v53->klass->vtable._8_UpdateScrollbars.method)(
    v53,
    1LL,
    v53->klass->vtable._9_SetDragAmount.methodPtr);
  v54 = this->fields.missionScrollView;
  if ( !v54 )
    goto LABEL_54;
  UIScrollView__UpdatePosition(v54, 0LL);
  v55 = (UnityEngine_Component_o *)this->fields.conditionGrid;
  if ( !v55 )
    goto LABEL_54;
  v56 = UnityEngine_Component__get_transform(v55, 0LL);
  if ( !v56 )
    goto LABEL_54;
  if ( UnityEngine_Transform__get_childCount(v56, 0LL) != 1 )
    return;
  v57 = (UnityEngine_Behaviour_o *)this->fields.missionScrollView;
  if ( !v57
    || (UnityEngine_Behaviour__set_enabled(v57, 0, 0LL), (missionScrollBar = this->fields.missionScrollBar) == 0LL) )
  {
LABEL_54:
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(missionScrollBar, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  UIScrollView_o *v4; // x0

  if ( (byte_40FAF99 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40FAF99 = 1;
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
      sub_B170D4();
    UIScrollView__UpdateScrollbars(v4, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70CC & 1) == 0 )
  {
    sub_B16FFC(&ClassBoardBaseDialog___c_TypeInfo, v1);
    byte_40F70CC = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(ClassBoardBaseDialog___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
  return x->fields.squareId;
}