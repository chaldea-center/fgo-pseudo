void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4187D2C & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187D2C = 1;
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
  __int64 v6; // x1
  ClassBoardSquare_o *v7; // x0

  if ( (byte_4187D2B & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, callback);
    byte_4187D2B = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0LL, 0LL) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_B2C434(0LL, v6);
    ClassBoardSquare__SetSelectedEffectActive(v7, 0, 0LL);
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
  __int64 v59; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v61; // x26
  signed int max_length; // w8
  int v63; // w25
  int v64; // w24
  unsigned int v65; // w27
  ClassBoardSquareEntity_o *v66; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v67; // x19
  System_Xml_XmlQualifiedName_o *v68; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v69; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v71; // x21
  SkillLvEntity_o *v72; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v73; // x19
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v74; // x20
  const MethodInfo *v75; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x22
  _BOOL8 v77; // x0
  __int64 v78; // x1
  Il2CppObject *current; // x20
  System_String_o *v80; // x0
  __int64 v81; // x1
  System_Xml_XmlQualifiedName_o *v82; // x26
  _BOOL8 v83; // x0
  __int64 v84; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v85; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v86; // x0
  FuncDispEntity_o *v87; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v88; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v89; // x21
  __int64 v90; // x0
  __int64 v91; // x1
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v94; // w26
  int32_t v95; // w24
  int32_t v96; // w25
  int32_t v97; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v98; // x20
  __int64 v99; // x1
  int v100; // w8
  System_String_o *v101; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t skillType; // w24
  System_String_o *v107; // x25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v108; // x20
  int v109; // w23
  _BOOL8 v110; // x0
  __int64 v111; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *Name; // x19
  __int64 v115; // x8
  __int64 v116; // x1
  __int64 v117; // x8
  __int64 v118; // x25
  int32_t v119; // w24
  int32_t v120; // w8
  Il2CppObject *v121; // x19
  __int64 v122; // x0
  const MethodInfo *v123; // x1
  _DWORD *v124; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v126; // x8
  __int64 v127; // x10
  __int64 v128; // x11
  bool v129; // cc
  _DWORD *v130; // x8
  int v131; // w19
  __int64 v132; // x0
  __int64 v133; // x1
  const MethodInfo *v134; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v135; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  System_String_o *v137; // x0
  __int64 v138; // x1
  System_String_o *v139; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v140; // x8
  _DWORD *v141; // x9
  int32_t v142; // w25
  _DWORD *v143; // x9
  int32_t v144; // w26
  _DWORD *v145; // x8
  int32_t v146; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v147; // x22
  __int64 v148; // x1
  __int64 v149; // x0
  __int64 v150; // x0
  int v151; // w20
  ClassBoardBaseDialog___c_c *v152; // x0
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_0; // x20
  Il2CppObject *v155; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v156; // x0
  System_String_array **v157; // x2
  System_String_array **v158; // x3
  System_Boolean_array **v159; // x4
  System_Int32_array **v160; // x5
  System_Int32_array *v161; // x6
  System_Int32_array *v162; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v163; // x0
  ClassBoardBaseDialog___c_c *v164; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v165; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v166; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x20
  Il2CppObject *v168; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v169; // x0
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v176; // x0
  __int64 v178; // x0
  ClassBoardCommandSpellMaster_o *v180; // [xsp+10h] [xbp-180h]
  int v181; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v182; // [xsp+20h] [xbp-170h]
  int32_t v183; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v184; // [xsp+30h] [xbp-160h]
  int v185; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v186; // [xsp+40h] [xbp-150h]
  int v187; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v188; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v189; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v190; // [xsp+60h] [xbp-130h]
  System_String_o *v191; // [xsp+60h] [xbp-130h]
  _WORD v192[26]; // [xsp+68h] [xbp-128h] BYREF
  int v193; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v194; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v195; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v196; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v197; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v198; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v199; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v201; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  v4 = dispType;
  if ( (byte_4187D28 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, *(_QWORD *)&dispType);
    sub_B2C35C(&Method_DataManager_GetMaster_FuncDispMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_FunctionMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillLvMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_SkillMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v13);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v14);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v16);
    sub_B2C35C(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v17);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v18);
    sub_B2C35C(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v19);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v21);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v22);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v23);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v24);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v25);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v27);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v28);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v29);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v30);
    sub_B2C35C(&Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__, v31);
    sub_B2C35C(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v32);
    sub_B2C35C(&int___TypeInfo, v33);
    sub_B2C35C(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v34);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v35);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v36);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v37);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v38);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v39);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v40);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v41);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v42);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v43);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v44);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v45);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v46);
    sub_B2C35C(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v47);
    sub_B2C35C(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v48);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v49);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v50);
    sub_B2C35C(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v51);
    sub_B2C35C(&Method_System_String_Join_int___, v52);
    sub_B2C35C(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, v53);
    sub_B2C35C(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, v54);
    sub_B2C35C(&ClassBoardBaseDialog___c_TypeInfo, v55);
    sub_B2C35C(&StringLiteral_699/*","*/, v56);
    sub_B2C35C(&StringLiteral_1/*""*/, v57);
    byte_4187D28 = 1;
  }
  v201 = 0LL;
  entity = 0LL;
  v199 = 0LL;
  entitys = 0LL;
  v197 = 0LL;
  v195 = 0LL;
  memset(&v198, 0, sizeof(v198));
  memset(&v196, 0, sizeof(v196));
  memset(&v194, 0, sizeof(v194));
  v193 = 0;
  v189 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v189,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_154;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v189;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillMaster___);
  v186 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_SkillLvMaster___);
  v61 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v190 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FuncDispMaster___);
  v188 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v188,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v63 = 0;
  v184 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v64 = 0;
    v65 = 0;
    v187 = 0;
    v183 = v4;
    v182 = openedSquareArray;
    v180 = v61;
    while ( 1 )
    {
      if ( v65 >= max_length )
      {
        v178 = sub_B2C460(IsPassive);
        sub_B2C400(v178, 0LL);
      }
      v66 = openedSquareArray->m_Items[v65];
      v67 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v67,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v67;
      if ( !v66 )
        break;
      IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsPassive(v66, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( v4 != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         Master_WarQuestSelectionMaster,
                                                         &entity,
                                                         v66->fields.targetId,
                                                         (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            IsPassive = (System_Xml_XmlQualifiedName_o *)v186;
            if ( !v186 )
              break;
            IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvMaster__TryGetEntity(
                                                           v186,
                                                           &v201,
                                                           v66->fields.targetId,
                                                           v66->fields.upSkillLv,
                                                           0LL);
            if ( ((unsigned __int8)IsPassive & 1) != 0 )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_171;
              IsPassive = (System_Xml_XmlQualifiedName_o *)v201;
              if ( !v201 )
                break;
              IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvEntity__IsContainsTurnOrCountBuff(v201, 0LL);
              if ( ((unsigned __int8)IsPassive & 1) == 0 )
              {
LABEL_171:
                if ( !v201 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)v190;
                if ( !v190 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)FuncDispMaster__IsContainFuncIds(
                                                               v190,
                                                               &v199,
                                                               v201->fields.funcId,
                                                               0LL);
                if ( ((unsigned __int8)IsPassive & 1) != 0 )
                {
                  if ( !v201 )
                    break;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)System_String__Join_int_(
                                                                 (System_String_o *)StringLiteral_699/*","*/,
                                                                 (System_Collections_Generic_IEnumerable_T__o *)v201->fields.funcId,
                                                                 (const MethodInfo_209C7C0 *)Method_System_String_Join_int___);
                  if ( !v188 )
                    break;
                  v68 = IsPassive;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v188,
                          IsPassive,
                          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v69 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v69,
                      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v188,
                      v68,
                      (System_Xml_Schema_XmlSchemaObject_o *)v69,
                      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v188,
                           (System_Type_o *)v68,
                           (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v71 = v199;
                  v72 = v201;
                  v73 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v74 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v74, v71, v72, 0LL, v66, 0LL);
                  if ( !v73 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v73,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v74,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v184;
                  v4 = v183;
                  openedSquareArray = v182;
                }
                else
                {
                  IsPassive = (System_Xml_XmlQualifiedName_o *)entity;
                  if ( !entity )
                    break;
                  v185 = v63;
                  v181 = v64;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                  if ( !entity )
                    break;
                  v101 = (System_String_o *)IsPassive;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v66->fields.priority;
                  id = v66->fields.id;
                  iconId = v66->fields.iconId;
                  skillType = v66->fields.skillType;
                  v107 = EffectExplanation;
                  v108 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v108,
                    v101,
                    v107,
                    id,
                    priority,
                    iconId,
                    skillType,
                    0LL);
                  IsPassive = (System_Xml_XmlQualifiedName_o *)v189;
                  if ( !v189 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v189,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v108,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v184;
                  v4 = v183;
                  openedSquareArray = v182;
                  v64 = v181;
                  v63 = v185;
                }
              }
            }
          }
        }
      }
      else
      {
        IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsCommandSpell(v66, 0LL);
        if ( v4 != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v61 )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                         v61,
                                                         &entitys,
                                                         v66->fields.targetId,
                                                         v66->fields.upSkillLv,
                                                         v75);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v76,
              (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
            IsPassive = (System_Xml_XmlQualifiedName_o *)entitys;
            if ( !entitys )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v192,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
              (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            v198 = *(System_Collections_Generic_List_Enumerator_T__o *)v192;
            while ( 1 )
            {
              v77 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v198,
                      (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              if ( !v77 )
                break;
              current = v198.fields.current;
              if ( !v198.fields.current )
                sub_B2C434(v77, v78);
              if ( !v190 )
                sub_B2C434(0LL, v78);
              if ( FuncDispMaster__IsContainFuncIds(
                     v190,
                     &v197,
                     (System_Int32_array *)v198.fields.current[3].klass,
                     0LL) )
              {
                v80 = System_String__Join_int_(
                        (System_String_o *)StringLiteral_699/*","*/,
                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                        (const MethodInfo_209C7C0 *)Method_System_String_Join_int___);
                if ( !v76 )
                  sub_B2C434(v80, v81);
                v82 = (System_Xml_XmlQualifiedName_o *)v80;
                v83 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v76,
                        (WarBoardManager_TaskList_o *)v80,
                        (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( !v83 )
                {
                  if ( !v188 )
                    sub_B2C434(v83, v84);
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v188,
                          v82,
                          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v85 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v85,
                      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v188,
                      v82,
                      (System_Xml_Schema_XmlSchemaObject_o *)v85,
                      (const MethodInfo_2DB1C98 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  v86 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v188,
                          (System_Type_o *)v82,
                          (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v87 = v197;
                  v88 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v86;
                  v89 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v89,
                    v87,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v66,
                    0LL);
                  if ( !v88 )
                    sub_B2C434(v90, v91);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v88,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v89,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v76,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v82,
                    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                v94 = v66->fields.priority;
                v96 = v66->fields.id;
                v95 = v66->fields.iconId;
                v97 = v66->fields.skillType;
                v98 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v98,
                  klass,
                  monitor,
                  v96,
                  v94,
                  v95,
                  v97,
                  0LL);
                if ( !v189 )
                  sub_B2C434(0LL, v99);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v189,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v98,
                  (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
              }
            }
            *(_DWORD *)&v192[2 * v187 + 20] = 569;
            v64 = ++v193;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v198,
              (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            Master_WarQuestSelectionMaster = v184;
            v4 = v183;
            openedSquareArray = v182;
            v61 = v180;
            v63 = v64;
            if ( v64 )
            {
              v100 = v64 - 1;
              v187 = v64;
              if ( *(_DWORD *)&v192[2 * v64 + 18] == 569 )
              {
                v63 = --v64;
                v193 = v100;
                v187 = v100;
              }
            }
            else
            {
              v187 = 0;
            }
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v65 >= max_length )
        goto LABEL_65;
    }
LABEL_154:
    sub_B2C434(IsPassive, v59);
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Xml_XmlQualifiedName_o *)v188;
  if ( !v188 )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v192,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v188,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v196 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v192;
  v109 = v63;
  while ( 1 )
  {
    v110 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
             &v196,
             (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v110 )
      break;
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v196.fields.current.fields.value;
    if ( !v196.fields.current.fields.value )
      sub_B2C434(v110, v111);
    if ( SLODWORD(v196.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v196.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B2C434(v110, v111);
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( data[3] )
      {
        v115 = data[3];
        if ( !v115 )
          sub_B2C434(v110, v111);
        if ( !v184 )
          sub_B2C434(0LL, v111);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v184,
               &v195,
               *(_DWORD *)(v115 + 16),
               (const MethodInfo_24E412C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v195 )
            sub_B2C434(0LL, v116);
          Name = SkillEntity__getName((SkillEntity_o *)v195, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v196.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v117 = data[4];
        if ( !v117 )
          sub_B2C434(v110, v111);
        Name = *(System_String_o **)(v117 + 32);
      }
      v191 = Name;
      v118 = sub_B2C374(int___TypeInfo, 0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v192,
        value,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v119 = 0;
      v194 = *(System_Collections_Generic_List_Enumerator_T__o *)v192;
LABEL_88:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v194,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        *(_DWORD *)&v192[2 * v109 + 20] = 947;
        v131 = v193 + 1;
        v193 = v131;
        v109 = v131;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v194,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        if ( v131 && *(_DWORD *)&v192[2 * v131 + 18] == 947 )
        {
          v109 = v131 - 1;
          v193 = v131 - 1;
        }
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v135 = value->fields._items->m_Items[0];
        if ( !v135 )
          sub_B2C434(v132, v133);
        buff = v135->fields.buff;
        if ( !buff )
          sub_B2C434(v132, v133);
        v137 = ClassBoardBaseDialog__ReplaceFractionFormat(
                 *(System_String_o **)&buff->fields.isUse,
                 (System_Int32_array *)v118,
                 v134);
        v139 = v137;
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v140 = value->fields._items->m_Items[0];
        if ( !v140 )
          sub_B2C434(v137, v138);
        v141 = v140[1].monitor;
        if ( !v141 )
          sub_B2C434(v137, v138);
        v142 = v141[5];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v143 = v140[1].monitor;
        if ( !v143 )
          sub_B2C434(v137, v138);
        v144 = v143[6];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v145 = v140[1].monitor;
        if ( !v145 )
          sub_B2C434(v137, v138);
        v146 = v145[14];
        v147 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B2C42C(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v147, v191, v139, v142, v119, v144, v146, 0LL);
        if ( !v189 )
          sub_B2C434(0LL, v148);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v189,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v147,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
        continue;
      }
      v121 = v194.fields.current;
      v122 = sub_B2C374(int___TypeInfo, 0LL);
      if ( !v121 )
        sub_B2C434(v122, v123);
      v124 = v121[1].monitor;
      if ( v124 )
      {
        if ( !v186 )
          sub_B2C434(v122, v123);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               v186,
                                                               v124[4],
                                                               v124[5],
                                                               0LL);
LABEL_95:
        v126 = (__int64)DispValFromSkill;
      }
      else
      {
        v126 = v122;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v121[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 v123);
          goto LABEL_95;
        }
      }
      if ( !v118 )
        sub_B2C434(DispValFromSkill, v123);
      v127 = *(_QWORD *)(v118 + 24);
      if ( v127 )
      {
        if ( (int)v127 >= 1 )
        {
          v128 = 8LL;
          do
          {
            if ( v128 - 8 >= (unsigned __int64)(unsigned int)v127 )
            {
              v149 = sub_B2C460(DispValFromSkill);
              sub_B2C400(v149, 0LL);
            }
            if ( !v126 )
              sub_B2C434(DispValFromSkill, v123);
            if ( v128 - 8 >= (unsigned __int64)*(unsigned int *)(v126 + 24) )
            {
              v150 = sub_B2C460(DispValFromSkill);
              sub_B2C400(v150, 0LL);
            }
            v129 = v128 - 7 < (int)v127;
            *(_DWORD *)(v118 + 4 * v128) += *(_DWORD *)(v126 + 4 * v128);
            ++v128;
          }
          while ( v129 );
        }
      }
      else
      {
        v118 = v126;
      }
      v130 = v121[2].monitor;
      if ( !v130 )
        sub_B2C434(DispValFromSkill, v123);
      v120 = v130[20];
      if ( v120 > v119 )
        v119 = v120;
      goto LABEL_88;
    }
  }
  *(_DWORD *)&v192[2 * v109 + 20] = 1073;
  v151 = ++v193;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v196,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v151 && *(_DWORD *)&v192[2 * v151 + 18] == 1073 )
    v193 = v151 - 1;
  v152 = ClassBoardBaseDialog___c_TypeInfo;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v152 = ClassBoardBaseDialog___c_TypeInfo;
  }
  static_fields = v152->static_fields;
  _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v152->vtable._0_Equals.methodPtr) & 4) != 0 && !v152->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v152);
      static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v155 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_0,
      v155,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      (const MethodInfo_27127B0 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v156 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v156->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v156->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v157,
      v158,
      v159,
      v160,
      v161,
      v162);
  }
  v163 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v189,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_1A93A04 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v164 = ClassBoardBaseDialog___c_TypeInfo;
  v165 = v163;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v164 = ClassBoardBaseDialog___c_TypeInfo;
  }
  v166 = v164->static_fields;
  _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v166->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( (BYTE3(v164->vtable._0_Equals.methodPtr) & 4) != 0 && !v164->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v164);
      v166 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v168 = (Il2CppObject *)v166->__9;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B2C42C(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_1,
      v168,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      (const MethodInfo_27127B0 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v169 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v169->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v169->__9__28_1,
      (System_Int32_array **)_9__28_1,
      v170,
      v171,
      v172,
      v173,
      v174,
      v175);
  }
  v176 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v165,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_1A9A820 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v176, (const MethodInfo_1A9DE9C *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4187D22 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187D22 = 1;
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
    sub_B2C434(gameObject, v4);
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
  __int64 v34; // x1
  System_String_o *v35; // x20
  System_String_o *v36; // x20
  System_String_o *v37; // x20
  System_String_o *v38; // x20
  System_String_o *v39; // x20
  unsigned __int64 v40; // x8
  System_String_o *v41; // x20
  unsigned __int64 v42; // x8
  System_String_o *v43; // x20
  unsigned __int64 v44; // x8
  System_String_o *v45; // x20
  unsigned __int64 v46; // x8
  __int64 v48; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v50; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4187D29 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_23675/*"{x"*/, funcVals);
    sub_B2C35C(&StringLiteral_23471/*"{"*/, v5);
    sub_B2C35C(&StringLiteral_23406/*"xx}"*/, v6);
    sub_B2C35C(&StringLiteral_23405/*"xxx}"*/, v7);
    sub_B2C35C(&StringLiteral_23696/*"}"*/, v8);
    sub_B2C35C(&StringLiteral_23678/*"{xxxx"*/, v9);
    sub_B2C35C(&StringLiteral_23676/*"{xx"*/, v10);
    sub_B2C35C(&StringLiteral_23404/*"xxxx}"*/, v11);
    sub_B2C35C(&StringLiteral_23407/*"x}"*/, v12);
    sub_B2C35C(&StringLiteral_23677/*"{xxx"*/, v13);
    byte_4187D29 = 1;
  }
  v50 = 0LL;
  if ( funcVals )
  {
    v14 = *(_QWORD *)&funcVals->max_length;
    if ( v14 )
    {
      HIDWORD(v50) = 0;
      if ( (int)v14 >= 1 )
      {
        do
        {
          v15 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v16 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v15,
                  (System_String_o *)StringLiteral_23404/*"xxxx}"*/,
                  0LL);
          v17 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v18 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v17,
                  (System_String_o *)StringLiteral_23405/*"xxx}"*/,
                  0LL);
          v19 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v20 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v19,
                  (System_String_o *)StringLiteral_23406/*"xx}"*/,
                  0LL);
          v21 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v22 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v21,
                  (System_String_o *)StringLiteral_23407/*"x}"*/,
                  0LL);
          v23 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v24 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23471/*"{"*/,
                  v23,
                  (System_String_o *)StringLiteral_23696/*"}"*/,
                  0LL);
          v25 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v26 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23675/*"{x"*/,
                  v25,
                  (System_String_o *)StringLiteral_23696/*"}"*/,
                  0LL);
          v27 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v28 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23676/*"{xx"*/,
                  v27,
                  (System_String_o *)StringLiteral_23696/*"}"*/,
                  0LL);
          v29 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          oldValue = System_String__Concat_44307816(
                       (System_String_o *)StringLiteral_23677/*"{xxx"*/,
                       v29,
                       (System_String_o *)StringLiteral_23696/*"}"*/,
                       0LL);
          v30 = System_Int32__ToString((int32_t)&v50 + 4, 0LL);
          v31 = System_String__Concat_44307816(
                  (System_String_o *)StringLiteral_23678/*"{xxxx"*/,
                  v30,
                  (System_String_o *)StringLiteral_23696/*"}"*/,
                  0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_26;
          v32 = v31;
          LODWORD(v50) = 10000 * funcVals->m_Items[SHIDWORD(v50) + 1];
          v33 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !text )
            goto LABEL_27;
          v31 = System_String__Replace_44312768(text, v16, v33, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_26;
          v35 = v31;
          LODWORD(v50) = 1000 * funcVals->m_Items[SHIDWORD(v50) + 1];
          v33 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v35 )
            goto LABEL_27;
          v31 = System_String__Replace_44312768(v35, v18, v33, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_26;
          v36 = v31;
          LODWORD(v50) = 100 * funcVals->m_Items[SHIDWORD(v50) + 1];
          v33 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v36 )
            goto LABEL_27;
          v31 = System_String__Replace_44312768(v36, v20, v33, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_26;
          v37 = v31;
          LODWORD(v50) = 10 * funcVals->m_Items[SHIDWORD(v50) + 1];
          v33 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v37 )
            goto LABEL_27;
          v31 = System_String__Replace_44312768(v37, v22, v33, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_26;
          v38 = v31;
          v33 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v50) + 32, 0LL);
          if ( !v38 )
            goto LABEL_27;
          v31 = System_String__Replace_44312768(v38, v24, v33, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_26;
          v39 = v31;
          v40 = 1717986919LL * funcVals->m_Items[SHIDWORD(v50) + 1];
          LODWORD(v50) = (v40 >> 63) + (SHIDWORD(v40) >> 2);
          v33 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v39 )
            goto LABEL_27;
          v31 = System_String__Replace_44312768(v39, v26, v33, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_26;
          v41 = v31;
          v42 = 1374389535LL * funcVals->m_Items[SHIDWORD(v50) + 1];
          LODWORD(v50) = (v42 >> 63) + (SHIDWORD(v42) >> 5);
          v33 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v41 )
            goto LABEL_27;
          v31 = System_String__Replace_44312768(v41, v28, v33, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
            goto LABEL_26;
          v43 = v31;
          v44 = 274877907LL * funcVals->m_Items[SHIDWORD(v50) + 1];
          LODWORD(v50) = (v44 >> 63) + (SHIDWORD(v44) >> 6);
          v33 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v43 )
            goto LABEL_27;
          v31 = System_String__Replace_44312768(v43, oldValue, v33, 0LL);
          if ( HIDWORD(v50) >= funcVals->max_length )
          {
LABEL_26:
            v48 = sub_B2C460(v31);
            sub_B2C400(v48, 0LL);
          }
          v45 = v31;
          v46 = 1759218605LL * funcVals->m_Items[SHIDWORD(v50) + 1];
          LODWORD(v50) = (v46 >> 63) + (SHIDWORD(v46) >> 12);
          v33 = System_Int32__ToString((int32_t)&v50, 0LL);
          if ( !v45 )
LABEL_27:
            sub_B2C434(v33, v34);
          text = System_String__Replace_44312768(v45, v32, v33, 0LL);
          ++HIDWORD(v50);
        }
        while ( SHIDWORD(v50) < (signed int)funcVals->max_length );
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
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187D27 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__, v6);
    byte_4187D27 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  itemIconComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v9,
      itemIconComponentList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v9,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v9.fields.current )
        sub_B2C434(0LL, v8);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v9.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v9,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_B2C434(this, method);
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
  __int64 v12; // x1
  int32_t klass; // w23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  System_String_o *v16; // x22
  int32_t *v17; // x1
  Il2CppObject *v18; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v21; // x21
  Il2CppObject *v22; // x0
  int32_t v23; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v24; // [xsp+8h] [xbp-38h] BYREF
  int32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4187D25 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&needNum);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_3001/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, v6);
    sub_B2C35C(&StringLiteral_3003/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, v7);
    sub_B2C35C(&StringLiteral_3000/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, v8);
    sub_B2C35C(&StringLiteral_3002/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, v9);
    sub_B2C35C(&StringLiteral_2998/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, v10);
    byte_4187D25 = 1;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3000/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( itemQpLabel )
    {
      UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
      itemQpNum = this->fields.itemQpNum;
      v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3002/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
      v24 = needNum;
      v17 = &v24;
      goto LABEL_15;
    }
LABEL_24:
    sub_B2C434(SelfUserGame, v12);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3001/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
  if ( !itemQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
  itemQpNum = this->fields.itemQpNum;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3003/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
  v17 = &v25;
  v25 = needNum;
LABEL_15:
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v17);
  SelfUserGame = System_String__Format(v16, v18, 0LL);
  if ( !itemQpNum )
    goto LABEL_24;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_2998/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3002/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v23 = klass;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23);
  SelfUserGame = System_String__Format(v21, v22, 0LL);
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
  __int64 v20; // x3
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v22; // x21
  unsigned __int64 v23; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v26; // w0
  __int64 v27; // x3
  IClassBoardSquareModel_c *v28; // x8
  int32_t v29; // w22
  unsigned __int64 v30; // x10
  int32_t *v31; // x11
  __int64 v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array **v39; // x22
  UnityEngine_GameObject_o *v40; // x21
  const MethodInfo *v41; // x3
  float v42; // s11
  Il2CppObject *current; // x23
  struct UnityEngine_GameObject_o *effectDetailObj; // x21
  UnityEngine_GameObject_o *v45; // x0
  __int64 v46; // x1
  UnityEngine_GameObject_o *v47; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v49; // x1
  __int64 v50; // x3
  IClassBoardSquareModel_c *v51; // x8
  System_String_o *monitor; // x24
  System_String_o *v53; // x25
  int32_t v54; // w23
  ClassBoardDialogSkillDetailPartsComponent_o *v55; // x22
  unsigned __int64 v56; // x10
  int32_t *v57; // x11
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  float v61; // s10
  struct UIScrollView_o *effectScrollView; // x8
  struct UIScrollView_o *v63; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v65; // x0
  __int64 v66; // x0
  __int64 v67; // x0
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+20h] [xbp-90h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187D23 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardSquareEntity___TypeInfo, squareModel);
    sub_B2C35C(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v12);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___, v14);
    sub_B2C35C(&IClassBoardSquareModel_TypeInfo, v15);
    sub_B2C35C(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v16);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    byte_4187D23 = 1;
  }
  entity = 0LL;
  memset(&v69, 0, sizeof(v69));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_55;
  klass = squareModel->klass;
  v22 = (ClassBoardSquareMaster_o *)effectObj;
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
    p_method = sub_AC5258(squareModel, IClassBoardSquareModel_TypeInfo, 1LL, v20);
  }
  v26 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v28 = squareModel->klass;
  v29 = v26;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v30 = 0LL;
    v31 = &v28->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v31 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v30;
      v31 += 4;
      if ( v30 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v32 = (__int64)&v28->vtable[*v31].method;
  }
  else
  {
LABEL_18:
    v32 = sub_AC5258(squareModel, IClassBoardSquareModel_TypeInfo, 0LL, v27);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v32)(
                                            squareModel,
                                            *(_QWORD *)(v32 + 8));
  if ( !v22 )
    goto LABEL_55;
  ClassBoardSquareMaster__TryGetEntity(v22, &entity, v29, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_B2C374(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_55;
  v39 = (System_Int32_array **)entity;
  v40 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_B2C41C(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v67 = sub_B2C454(0LL);
      sub_B2C400(v67, 0LL);
    }
  }
  if ( !LODWORD(v40[1].klass) )
  {
    v66 = sub_B2C460(effectObj);
    sub_B2C400(v66, 0LL);
  }
  v40[1].monitor = v39;
  sub_B2C2F8((BattleServantConfConponent_o *)&v40[1].monitor, v39, v33, v34, v35, v36, v37, v38);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v40,
                                            0,
                                            0,
                                            v41);
  if ( !effectObj )
    goto LABEL_55;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v68,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)effectObj,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v69 = v68;
  v42 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v69,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v69.fields.current;
    effectDetailObj = this->fields.effectDetailObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v45 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)effectDetailObj,
                                        (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v47 = v45;
    if ( !v45 )
      sub_B2C434(0LL, v46);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v45,
                                (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_B2C434(Component_srcLineSprite, v49);
    v51 = squareModel->klass;
    v53 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v54 = (int32_t)current[2].monitor;
    v55 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_srcLineSprite;
    if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
    {
      v56 = 0LL;
      v57 = &v51->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v57 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v56;
        v57 += 4;
        if ( v56 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v58 = (__int64)&v51->vtable[*v57 + 7].method;
    }
    else
    {
LABEL_36:
      v58 = sub_AC5258(squareModel, IClassBoardSquareModel_TypeInfo, 7LL, v50);
    }
    v59 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v58)(squareModel, *(_QWORD *)(v58 + 8));
    if ( !v55 )
      sub_B2C434(v59, v60);
    v61 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v55, v53, monitor, v54, v59, 0LL);
    GameObjectExtensions__SetParent_31331816(v47, this->fields.effectDetailParent, 0LL);
    one = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v47, one, 0LL);
    GameObjectExtensions__SetLocalPosition_31326032(v47, 0.0, -v42, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v47, 1, 0LL);
    v42 = v42 + v61;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v69,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( disableScrollViewSize > 0.0 && v42 <= disableScrollViewSize )
  {
    v63 = this->fields.effectScrollView;
    if ( v63 )
    {
      HIDWORD(v63->fields.onDragStarted) = 4;
      effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
      if ( effectObj )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( effectObj )
        {
          v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
          GameObjectExtensions__SetLocalPositionY(v65, disableScrollViewPosY, 0LL);
          return;
        }
      }
    }
LABEL_55:
    sub_B2C434(effectObj, squareModel);
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
  __int64 v22; // x1
  UnityEngine_Object_o *itemQpObj; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  __int64 v31; // x3
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v33; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x3
  __int64 v39; // x20
  int v40; // w26
  char v41; // w25
  int i; // w22
  __int64 v43; // x8
  unsigned __int64 v44; // x10
  int *v45; // x11
  __int64 v46; // x0
  __int64 v47; // x3
  __int64 v48; // x8
  unsigned __int64 v49; // x10
  int *v50; // x11
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  __int64 v54; // x3
  __int64 v55; // x23
  __int64 v56; // x8
  unsigned __int64 v57; // x10
  int *v58; // x11
  __int64 v59; // x0
  int32_t v60; // w0
  __int64 v61; // x3
  __int64 v62; // x8
  int32_t v63; // w22
  unsigned __int64 v64; // x10
  IClassBoardItemModel_c **v65; // x11
  __int64 v66; // x0
  int32_t v67; // w23
  WebViewManager_o *Instance; // x0
  __int64 v69; // x1
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v71; // x1
  _BOOL8 isQP; // x0
  __int64 v73; // x1
  const MethodInfo *v74; // x2
  struct UnityEngine_GameObject_o *itemIcon; // x24
  UnityEngine_GameObject_o *v76; // x0
  __int64 v77; // x1
  UIGrid_o *itemIconListGrid; // x25
  UnityEngine_Transform_o *transform; // x0
  ClassBoardItemIconComponent_o *Component_srcLineSprite; // x0
  __int64 v81; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v82; // x24
  __int64 v83; // x1
  __int64 v84; // x8
  unsigned __int64 v85; // x10
  int *v86; // x11
  __int64 v87; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemIconComponentList; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4187D24 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ItemMaster___, itemList);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___, v5);
    sub_B2C35C(&IClassBoardItemModel_TypeInfo, v6);
    sub_B2C35C(&System_IDisposable_TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, v8);
    sub_B2C35C(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, v9);
    sub_B2C35C(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__, v12);
    sub_B2C35C(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo, v13);
    sub_B2C35C(&LocalizationManager_TypeInfo, v14);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v15);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&StringLiteral_2996/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, v18);
    byte_4187D24 = 1;
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
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_2996/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
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
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.itemIconComponentList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
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
    p_method = sub_AC5258(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL, v31);
  }
  v36 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v39 = v36;
  v40 = 0;
  v41 = 1;
LABEL_27:
  for ( i = v40; ; i = 1 )
  {
    if ( !v39 )
      sub_B2C434(v36, v37);
    v43 = *(_QWORD *)v39;
    v40 = i;
    if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
    {
      v44 = 0LL;
      v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v44;
        v45 += 4;
        if ( v44 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
          goto LABEL_33;
      }
      v46 = v43 + 16LL * *v45 + 312;
    }
    else
    {
LABEL_33:
      v46 = sub_AC5258(v39, System_Collections_IEnumerator_TypeInfo, 0LL, v38);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v39, *(_QWORD *)(v46 + 8)) & 1) == 0 )
      break;
    v48 = *(_QWORD *)v39;
    if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
    {
      v49 = 0LL;
      v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v50 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v49;
        v50 += 4;
        if ( v49 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
          goto LABEL_40;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_40:
      v51 = sub_AC5258(v39, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL, v47);
    }
    v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v39, *(_QWORD *)(v51 + 8));
    v55 = v52;
    if ( !v52 )
      sub_B2C434(0LL, v53);
    v56 = *(_QWORD *)v52;
    if ( *(_WORD *)(*(_QWORD *)v52 + 298LL) )
    {
      v57 = 0LL;
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v58 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v57;
        v58 += 4;
        if ( v57 >= *(unsigned __int16 *)(*(_QWORD *)v52 + 298LL) )
          goto LABEL_47;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_47:
      v59 = sub_AC5258(v52, IClassBoardItemModel_TypeInfo, 0LL, v54);
    }
    v60 = (*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v55, *(_QWORD *)(v59 + 8));
    v62 = *(_QWORD *)v55;
    v63 = v60;
    if ( *(_WORD *)(*(_QWORD *)v55 + 298LL) )
    {
      v64 = 0LL;
      v65 = (IClassBoardItemModel_c **)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *(v65 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v64;
        v65 += 2;
        if ( v64 >= *(unsigned __int16 *)(*(_QWORD *)v55 + 298LL) )
          goto LABEL_53;
      }
      v66 = v62 + 16LL * (*(_DWORD *)v65 + 1) + 312;
    }
    else
    {
LABEL_53:
      v66 = sub_AC5258(v55, IClassBoardItemModel_TypeInfo, 1LL, v61);
    }
    v67 = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v55, *(_QWORD *)(v66 + 8));
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v69);
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B2C434(0LL, v71);
    isQP = ItemMaster__isQP(MasterData_WarQuestSelectionMaster, v63, 0LL);
    if ( !isQP )
    {
      itemIcon = this->fields.itemIcon;
      if ( (v41 & 1) == 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v76 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                            (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v76;
        if ( !v76 )
          sub_B2C434(0LL, v77);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform(v76, 0LL);
        if ( !itemIconListGrid )
          sub_B2C434(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_B2C434(isQP, v73);
      UnityEngine_GameObject__SetActive(itemIcon, 1, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(itemIcon, zero, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(itemIcon, one, 0LL);
      Component_srcLineSprite = (ClassBoardItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   itemIcon,
                                                                   (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v82 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v81);
      ClassBoardItemIconComponent__setItemInfo(Component_srcLineSprite, v63, v67, 0LL);
      if ( !*p_itemIconComponentList )
        sub_B2C434(0LL, v83);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_itemIconComponentList,
        v82,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
      v41 = 0;
      goto LABEL_27;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v67, v74);
  }
  v84 = *(_QWORD *)v39;
  if ( *(_WORD *)(*(_QWORD *)v39 + 298LL) )
  {
    v85 = 0LL;
    v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v86 - 1) != System_IDisposable_TypeInfo )
    {
      ++v85;
      v86 += 4;
      if ( v85 >= *(unsigned __int16 *)(*(_QWORD *)v39 + 298LL) )
        goto LABEL_74;
    }
    v87 = v84 + 16LL * *v86 + 312;
  }
  else
  {
LABEL_74:
    v87 = sub_AC5258(v39, System_IDisposable_TypeInfo, 0LL, v47);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v87)(v39, *(_QWORD *)(v87 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_82:
    sub_B2C434(itemListObj, v22);
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
  System_Collections_Generic_List_int__o *v20; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v22; // x20
  __int64 v23; // x22
  __int64 v24; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *v25; // x20
  char v26; // w23
  _BOOL8 v27; // x0
  __int64 v28; // x1
  EventMissionEntity_o *v29; // x22
  MasterMissionListViewItem_o *v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  __int64 v34; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  UnityEngine_Transform_o *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Component_o *v41; // x0
  __int64 v42; // x1
  UIGrid_o *v43; // x21
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_Transform_o *v45; // x0
  __int64 v46; // x0
  System_Collections_Generic_List_Enumerator_int__o v47; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v48; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_4187D26 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___,
      *(_QWORD *)&condData.fields.Type);
    sub_B2C35C(&Method_DataManager_GetMaster_CommonReleaseMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMissionMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v15);
    sub_B2C35C(&MasterMissionListViewItem_TypeInfo, v16);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_Transform___, v17);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v18);
    byte_4187D26 = 1;
  }
  entity = 0LL;
  memset(&v48, 0, sizeof(v48));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v20 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_54;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_54;
      klass = conditionListObj[1].klass;
      v22 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v23 = 0LL;
        do
        {
          if ( (unsigned int)v23 >= (unsigned int)klass )
          {
            v46 = sub_B2C460(conditionListObj);
            sub_B2C400(v46, 0LL);
          }
          v24 = *((_QWORD *)&v22[1].monitor + v23);
          if ( !v24 )
            goto LABEL_54;
          if ( (unsigned int)(*(_DWORD *)(v24 + 28) - 23) <= 1 )
          {
            if ( !v20 )
              goto LABEL_54;
            System_Collections_Generic_List_int___Add(
              v20,
              *(_DWORD *)(v24 + 32),
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
            klass = v22[1].klass;
          }
        }
        while ( (int)++v23 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v20 )
      goto LABEL_54;
    System_Collections_Generic_List_int___Add(
      v20,
      SHIDWORD(v3),
      (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v20 )
    goto LABEL_54;
  v25 = (DataMasterBase_WarMaster__WarEntity__int__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    v20,
    (const MethodInfo_2F67E3C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v48 = v47;
  v26 = 1;
  while ( 1 )
  {
    v27 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v48,
            (const MethodInfo_20E7EC0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v27 )
      break;
    if ( !v25 )
      sub_B2C434(v27, v28);
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      v25,
      &entity,
      v48.fields.current,
      (const MethodInfo_24E412C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v29 = (EventMissionEntity_o *)entity;
    if ( entity )
    {
      v30 = (MasterMissionListViewItem_o *)sub_B2C42C(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v30, v29, 2, 0LL);
      if ( !v30 )
        sub_B2C434(v31, v32);
      ComponentInChildren_UIWidget = (UIWidget_o *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v30->klass->vtable._6_CheckMissionCond.method)(
                                                     v30,
                                                     v30->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v26 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_B2C434(ComponentInChildren_UIWidget, v34);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_B2C434(0LL, v37);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v41 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                           (UILabel_o *)Parent,
                                           transform,
                                           (const MethodInfo_2095F74 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v41 )
          sub_B2C434(0LL, v42);
        ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                         v41,
                                         (const MethodInfo_172DC3C *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_UIWidget;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_B2C434(ComponentInChildren_UIWidget, v34);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v30,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v43 = this->fields.conditionGrid;
      v44 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v45 = GameObjectExtensions__GetParent(v44, 0LL);
      if ( !v43 )
        sub_B2C434(v45, v45);
      UIGrid__AddChild(v43, v45, 0LL);
      v26 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v48,
    (const MethodInfo_20E7EBC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_B2C434(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4187D2A & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4187D2A = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0LL, 0LL) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_B2C434(0LL, v4);
    UIScrollView__UpdateScrollbars(v5, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4184ED4 & 1) == 0 )
  {
    sub_B2C35C(&ClassBoardBaseDialog___c_TypeInfo, v1);
    byte_4184ED4 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
    sub_B2C434(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B2C434(this, 0LL);
  return x->fields.squareId;
}