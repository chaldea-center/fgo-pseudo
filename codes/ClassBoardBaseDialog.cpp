void __fastcall ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_438C3F7 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438C3F7 = 1;
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

  if ( (byte_438C3F6 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3F6 = 1;
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
      sub_B7769C(0LL, v6);
    ClassBoardSquare__SetSelectedEffectActive(v7, 0, 0LL);
  }
  BaseDialog__Close((BaseDialog_o *)this, callback, 0LL);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardBaseDialog__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  System_Xml_XmlQualifiedName_o *IsPassive; // x0
  __int64 v7; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x20
  ClassBoardCommandSpellMaster_o *v9; // x26
  signed int max_length; // w8
  int v11; // w25
  int v12; // w24
  unsigned int v13; // w27
  ClassBoardSquareEntity_o *v14; // x28
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x19
  System_Xml_XmlQualifiedName_o *v16; // x20
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v17; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  FuncDispEntity_o *v19; // x21
  SkillLvEntity_o *v20; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v21; // x19
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v22; // x20
  const MethodInfo *v23; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  Il2CppObject *current; // x20
  System_String_o *v28; // x0
  __int64 v29; // x1
  System_Xml_XmlQualifiedName_o *v30; // x26
  _BOOL8 v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x19
  UnityEngine_Purchasing_IStoreExtension_o *v34; // x0
  FuncDispEntity_o *v35; // x19
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v36; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x1
  System_String_o *klass; // x21
  System_String_o *monitor; // x23
  int32_t v42; // w26
  int32_t v43; // w24
  int32_t v44; // w25
  int32_t v45; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v46; // x20
  __int64 v47; // x1
  int v48; // w8
  System_String_o *v49; // x19
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w21
  int32_t id; // w22
  int32_t iconId; // w23
  int32_t skillType; // w24
  System_String_o *v55; // x25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v56; // x20
  int v57; // w23
  _BOOL8 v58; // x0
  __int64 v59; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *value; // x22
  _QWORD *data; // x8
  System_String_o *Name; // x19
  __int64 v63; // x8
  __int64 v64; // x1
  __int64 v65; // x8
  __int64 v66; // x25
  int32_t v67; // w24
  int32_t v68; // w8
  Il2CppObject *v69; // x19
  __int64 v70; // x0
  const MethodInfo *v71; // x1
  _DWORD *v72; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v74; // x8
  __int64 v75; // x10
  __int64 v76; // x11
  bool v77; // cc
  _DWORD *v78; // x8
  int v79; // w19
  __int64 v80; // x0
  __int64 v81; // x1
  const MethodInfo *v82; // x2
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v83; // x8
  struct BattleBuffData_BuffData_o *buff; // x8
  System_String_o *v85; // x0
  __int64 v86; // x1
  System_String_o *v87; // x20
  BattleLogicBuff_ReduceHpProcess_BuffInfo_o *v88; // x8
  _DWORD *v89; // x9
  int32_t v90; // w25
  _DWORD *v91; // x9
  int32_t v92; // w26
  _DWORD *v93; // x8
  int32_t v94; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v95; // x22
  __int64 v96; // x1
  __int64 v97; // x0
  __int64 v98; // x0
  int v99; // w20
  ClassBoardBaseDialog___c_c *v100; // x0
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x8
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_0; // x20
  Il2CppObject *v103; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v104; // x0
  System_String_array **v105; // x2
  System_String_array **v106; // x3
  System_Boolean_array **v107; // x4
  System_Int32_array **v108; // x5
  System_Int32_array *v109; // x6
  System_Int32_array *v110; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v111; // x0
  ClassBoardBaseDialog___c_c *v112; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v113; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v114; // x9
  System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *_9__28_1; // x20
  Il2CppObject *v116; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v117; // x0
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v124; // x0
  __int64 v126; // x0
  ClassBoardCommandSpellMaster_o *v128; // [xsp+10h] [xbp-180h]
  int v129; // [xsp+1Ch] [xbp-174h]
  ClassBoardSquareEntity_array *v130; // [xsp+20h] [xbp-170h]
  int32_t v131; // [xsp+2Ch] [xbp-164h]
  DataMasterBase_WarMaster__WarEntity__int__o *v132; // [xsp+30h] [xbp-160h]
  int v133; // [xsp+3Ch] [xbp-154h]
  SkillLvMaster_o *v134; // [xsp+40h] [xbp-150h]
  int v135; // [xsp+4Ch] [xbp-144h]
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v136; // [xsp+50h] [xbp-140h]
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v137; // [xsp+58h] [xbp-138h]
  FuncDispMaster_o *v138; // [xsp+60h] [xbp-130h]
  System_String_o *v139; // [xsp+60h] [xbp-130h]
  _WORD v140[26]; // [xsp+68h] [xbp-128h] BYREF
  int v141; // [xsp+9Ch] [xbp-F4h]
  System_Collections_Generic_List_Enumerator_T__o v142; // [xsp+A0h] [xbp-F0h] BYREF
  WarEntity_o *v143; // [xsp+B8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v144; // [xsp+C0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v145; // [xsp+E8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v146; // [xsp+F0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v147; // [xsp+110h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+118h] [xbp-78h] BYREF
  SkillLvEntity_o *v149; // [xsp+120h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+128h] [xbp-68h] BYREF

  if ( (byte_438C3F3 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_SkillMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_B775C4(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_B775C4(&Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    sub_B775C4(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_B775C4(&int___TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_B775C4(&Method_System_String_Join_int___);
    sub_B775C4(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__);
    sub_B775C4(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__);
    sub_B775C4(&ClassBoardBaseDialog___c_TypeInfo);
    sub_B775C4(&StringLiteral_714/*","*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C3F3 = 1;
  }
  v149 = 0LL;
  entity = 0LL;
  v147 = 0LL;
  entitys = 0LL;
  v145 = 0LL;
  v143 = 0LL;
  memset(&v146, 0, sizeof(v146));
  memset(&v144, 0, sizeof(v144));
  memset(&v142, 0, sizeof(v142));
  v141 = 0;
  v137 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v137,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_154;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v137;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillMaster___);
  v134 = (SkillLvMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v9 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v138 = (FuncDispMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v136 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B77694(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v136,
    (const MethodInfo_2F7CA48 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  v11 = 0;
  v132 = Master_WarQuestSelectionMaster;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v13 = 0;
    v135 = 0;
    v131 = dispType;
    v130 = openedSquareArray;
    v128 = v9;
    while ( 1 )
    {
      if ( v13 >= max_length )
      {
        v126 = sub_B776C8(IsPassive);
        sub_B77668(v126, 0LL);
      }
      v14 = openedSquareArray->m_Items[v13];
      v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v15,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v15;
      if ( !v14 )
        break;
      IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsPassive(v14, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( dispType != 2 )
        {
          if ( !Master_WarQuestSelectionMaster )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                         Master_WarQuestSelectionMaster,
                                                         &entity,
                                                         v14->fields.targetId,
                                                         (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            IsPassive = (System_Xml_XmlQualifiedName_o *)v134;
            if ( !v134 )
              break;
            IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvMaster__TryGetEntity(
                                                           v134,
                                                           &v149,
                                                           v14->fields.targetId,
                                                           v14->fields.upSkillLv,
                                                           0LL);
            if ( ((unsigned __int8)IsPassive & 1) != 0 )
            {
              if ( !ignoreTurnOrCountPassive )
                goto LABEL_171;
              IsPassive = (System_Xml_XmlQualifiedName_o *)v149;
              if ( !v149 )
                break;
              IsPassive = (System_Xml_XmlQualifiedName_o *)SkillLvEntity__IsContainsTurnOrCountBuff(v149, 0LL);
              if ( ((unsigned __int8)IsPassive & 1) == 0 )
              {
LABEL_171:
                if ( !v149 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)v138;
                if ( !v138 )
                  break;
                IsPassive = (System_Xml_XmlQualifiedName_o *)FuncDispMaster__IsContainFuncIds(
                                                               v138,
                                                               &v147,
                                                               v149->fields.funcId,
                                                               0LL);
                if ( ((unsigned __int8)IsPassive & 1) != 0 )
                {
                  if ( !v149 )
                    break;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)System_String__Join_int_(
                                                                 (System_String_o *)StringLiteral_714/*","*/,
                                                                 (System_Collections_Generic_IEnumerable_T__o *)v149->fields.funcId,
                                                                 (const MethodInfo_1E0036C *)Method_System_String_Join_int___);
                  if ( !v136 )
                    break;
                  v16 = IsPassive;
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v136,
                          IsPassive,
                          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v17 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v17,
                      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v136,
                      v16,
                      (System_Xml_Schema_XmlSchemaObject_o *)v17,
                      (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                           (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v136,
                           (System_Type_o *)v16,
                           (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v19 = v147;
                  v20 = v149;
                  v21 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Item;
                  v22 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B77694(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v22, v19, v20, 0LL, v14, 0LL);
                  if ( !v21 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v21,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v22,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  Master_WarQuestSelectionMaster = v132;
                  dispType = v131;
                  openedSquareArray = v130;
                }
                else
                {
                  IsPassive = (System_Xml_XmlQualifiedName_o *)entity;
                  if ( !entity )
                    break;
                  v133 = v11;
                  v129 = v12;
                  IsPassive = (System_Xml_XmlQualifiedName_o *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                  if ( !entity )
                    break;
                  v49 = (System_String_o *)IsPassive;
                  EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                  priority = v14->fields.priority;
                  id = v14->fields.id;
                  iconId = v14->fields.iconId;
                  skillType = v14->fields.skillType;
                  v55 = EffectExplanation;
                  v56 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B77694(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                    v56,
                    v49,
                    v55,
                    id,
                    priority,
                    iconId,
                    skillType,
                    0LL);
                  IsPassive = (System_Xml_XmlQualifiedName_o *)v137;
                  if ( !v137 )
                    break;
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v137,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
                  Master_WarQuestSelectionMaster = v132;
                  dispType = v131;
                  openedSquareArray = v130;
                  v12 = v129;
                  v11 = v133;
                }
              }
            }
          }
        }
      }
      else
      {
        IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardSquareEntity__get_IsCommandSpell(v14, 0LL);
        if ( dispType != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v9 )
            break;
          IsPassive = (System_Xml_XmlQualifiedName_o *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                         v9,
                                                         &entitys,
                                                         v14->fields.targetId,
                                                         v14->fields.upSkillLv,
                                                         v23);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
              v24,
              (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
            IsPassive = (System_Xml_XmlQualifiedName_o *)entitys;
            if ( !entitys )
              break;
            System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)v140,
              (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
              (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            v146 = *(System_Collections_Generic_List_Enumerator_T__o *)v140;
            while ( 1 )
            {
              v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                      &v146,
                      (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              if ( !v25 )
                break;
              current = v146.fields.current;
              if ( !v146.fields.current )
                sub_B7769C(v25, v26);
              if ( !v138 )
                sub_B7769C(0LL, v26);
              if ( FuncDispMaster__IsContainFuncIds(
                     v138,
                     &v145,
                     (System_Int32_array *)v146.fields.current[3].klass,
                     0LL) )
              {
                v28 = System_String__Join_int_(
                        (System_String_o *)StringLiteral_714/*","*/,
                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                        (const MethodInfo_1E0036C *)Method_System_String_Join_int___);
                if ( !v24 )
                  sub_B7769C(v28, v29);
                v30 = (System_Xml_XmlQualifiedName_o *)v28;
                v31 = System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                        (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v24,
                        (WarBoardManager_TaskList_o *)v28,
                        (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( !v31 )
                {
                  if ( !v136 )
                    sub_B7769C(v31, v32);
                  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                          v136,
                          v30,
                          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
                      v33,
                      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
                      v136,
                      v30,
                      (System_Xml_Schema_XmlSchemaObject_o *)v33,
                      (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  v34 = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                          (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v136,
                          (System_Type_o *)v30,
                          (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v35 = v145;
                  v36 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v34;
                  v37 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_B77694(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v37,
                    v35,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v14,
                    0LL);
                  if ( !v36 )
                    sub_B7769C(v38, v39);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v36,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
                  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                    v24,
                    (EventMissionProgressRequest_Argument_ProgressData_o *)v30,
                    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                v42 = v14->fields.priority;
                v44 = v14->fields.id;
                v43 = v14->fields.iconId;
                v45 = v14->fields.skillType;
                v46 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B77694(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v46,
                  klass,
                  monitor,
                  v44,
                  v42,
                  v43,
                  v45,
                  0LL);
                if ( !v137 )
                  sub_B7769C(0LL, v47);
                System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                  v137,
                  (EventMissionProgressRequest_Argument_ProgressData_o *)v46,
                  (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
              }
            }
            *(_DWORD *)&v140[2 * v135 + 20] = 569;
            v12 = ++v141;
            System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
              &v146,
              (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            Master_WarQuestSelectionMaster = v132;
            dispType = v131;
            openedSquareArray = v130;
            v9 = v128;
            v11 = v12;
            if ( v12 )
            {
              v48 = v12 - 1;
              v135 = v12;
              if ( *(_DWORD *)&v140[2 * v12 + 18] == 569 )
              {
                v11 = --v12;
                v141 = v48;
                v135 = v48;
              }
            }
            else
            {
              v135 = 0;
            }
          }
        }
      }
      max_length = openedSquareArray->max_length;
      if ( (int)++v13 >= max_length )
        goto LABEL_65;
    }
LABEL_154:
    sub_B7769C(IsPassive, v7);
  }
LABEL_65:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Xml_XmlQualifiedName_o *)v136;
  if ( !v136 )
    goto LABEL_154;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)v140,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)v136,
    (const MethodInfo_2F7DBD4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v144 = *(System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o *)v140;
  v57 = v11;
  while ( 1 )
  {
    v58 = System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v144,
            (const MethodInfo_27E37AC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v58 )
      break;
    value = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v144.fields.current.fields.value;
    if ( !v144.fields.current.fields.value )
      sub_B7769C(v58, v59);
    if ( SLODWORD(v144.fields.current.fields.value[1].monitor) >= 1 )
    {
      data = v144.fields.current.fields.value[1].klass->_1.byval_arg.data;
      if ( !data )
        sub_B7769C(v58, v59);
      Name = (System_String_o *)StringLiteral_1/*""*/;
      if ( data[3] )
      {
        v63 = data[3];
        if ( !v63 )
          sub_B7769C(v58, v59);
        if ( !v132 )
          sub_B7769C(0LL, v59);
        if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v132,
               &v143,
               *(_DWORD *)(v63 + 16),
               (const MethodInfo_21FB8F0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v143 )
            sub_B7769C(0LL, v64);
          Name = SkillEntity__getName((SkillEntity_o *)v143, 0LL);
        }
      }
      else if ( data[4] )
      {
        if ( !LODWORD(v144.fields.current.fields.value[1].monitor) )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v65 = data[4];
        if ( !v65 )
          sub_B7769C(v58, v59);
        Name = *(System_String_o **)(v65 + 32);
      }
      v139 = Name;
      v66 = sub_B775DC(int___TypeInfo, 0LL);
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v140,
        value,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v67 = 0;
      v142 = *(System_Collections_Generic_List_Enumerator_T__o *)v140;
LABEL_88:
      if ( !System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v142,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        *(_DWORD *)&v140[2 * v57 + 20] = 947;
        v79 = v141 + 1;
        v141 = v79;
        v57 = v79;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v142,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        if ( v79 && *(_DWORD *)&v140[2 * v79 + 18] == 947 )
        {
          v57 = v79 - 1;
          v141 = v79 - 1;
        }
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v83 = value->fields._items->m_Items[0];
        if ( !v83 )
          sub_B7769C(v80, v81);
        buff = v83->fields.buff;
        if ( !buff )
          sub_B7769C(v80, v81);
        v85 = ClassBoardBaseDialog__ReplaceFractionFormat(
                *(System_String_o **)&buff->fields.isUse,
                (System_Int32_array *)v66,
                v82);
        v87 = v85;
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v88 = value->fields._items->m_Items[0];
        if ( !v88 )
          sub_B7769C(v85, v86);
        v89 = v88[1].monitor;
        if ( !v89 )
          sub_B7769C(v85, v86);
        v90 = v89[5];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v91 = v88[1].monitor;
        if ( !v91 )
          sub_B7769C(v85, v86);
        v92 = v91[6];
        if ( !value->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v93 = v88[1].monitor;
        if ( !v93 )
          sub_B7769C(v85, v86);
        v94 = v93[14];
        v95 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_B77694(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v95, v139, v87, v90, v67, v92, v94, 0LL);
        if ( !v137 )
          sub_B7769C(0LL, v96);
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v137,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v95,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
        continue;
      }
      v69 = v142.fields.current;
      v70 = sub_B775DC(int___TypeInfo, 0LL);
      if ( !v69 )
        sub_B7769C(v70, v71);
      v72 = v69[1].monitor;
      if ( v72 )
      {
        if ( !v134 )
          sub_B7769C(v70, v71);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               v134,
                                                               v72[4],
                                                               v72[5],
                                                               0LL);
LABEL_95:
        v74 = (__int64)DispValFromSkill;
      }
      else
      {
        v74 = v70;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v69[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 v71);
          goto LABEL_95;
        }
      }
      if ( !v66 )
        sub_B7769C(DispValFromSkill, v71);
      v75 = *(_QWORD *)(v66 + 24);
      if ( v75 )
      {
        if ( (int)v75 >= 1 )
        {
          v76 = 8LL;
          do
          {
            if ( v76 - 8 >= (unsigned __int64)(unsigned int)v75 )
            {
              v97 = sub_B776C8(DispValFromSkill);
              sub_B77668(v97, 0LL);
            }
            if ( !v74 )
              sub_B7769C(DispValFromSkill, v71);
            if ( v76 - 8 >= (unsigned __int64)*(unsigned int *)(v74 + 24) )
            {
              v98 = sub_B776C8(DispValFromSkill);
              sub_B77668(v98, 0LL);
            }
            v77 = v76 - 7 < (int)v75;
            *(_DWORD *)(v66 + 4 * v76) += *(_DWORD *)(v74 + 4 * v76);
            ++v76;
          }
          while ( v77 );
        }
      }
      else
      {
        v66 = v74;
      }
      v78 = v69[2].monitor;
      if ( !v78 )
        sub_B7769C(DispValFromSkill, v71);
      v68 = v78[20];
      if ( v68 > v67 )
        v67 = v68;
      goto LABEL_88;
    }
  }
  *(_DWORD *)&v140[2 * v57 + 20] = 1073;
  v99 = ++v141;
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v144,
    (const MethodInfo_27E3914 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  if ( v99 && *(_DWORD *)&v140[2 * v99 + 18] == 1073 )
    v141 = v99 - 1;
  v100 = ClassBoardBaseDialog___c_TypeInfo;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v100 = ClassBoardBaseDialog___c_TypeInfo;
  }
  static_fields = v100->static_fields;
  _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v100);
      static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v103 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_0,
      v103,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__,
      (const MethodInfo_29E9E70 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v104 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v104->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v104->__9__28_0,
      (System_Int32_array **)_9__28_0,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
  }
  v111 = System_Linq_Enumerable__OrderByDescending_WarBoardManager_TaskList__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v137,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_1D34DBC *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v112 = ClassBoardBaseDialog___c_TypeInfo;
  v113 = v111;
  if ( (BYTE3(ClassBoardBaseDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v112 = ClassBoardBaseDialog___c_TypeInfo;
  }
  v114 = v112->static_fields;
  _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)v114->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( (BYTE3(v112->vtable._0_Equals.methodPtr) & 4) != 0 && !v112->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v112);
      v114 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v116 = (Il2CppObject *)v114->__9;
    _9__28_1 = (System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int__o *)sub_B77694(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_BattleLogicBuff_ReduceHpProcess_BuffInfo__int____ctor(
      _9__28_1,
      v116,
      Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__,
      (const MethodInfo_29E9E70 *)Method_System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___ctor__);
    v117 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v117->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v117->__9__28_1,
      (System_Int32_array **)_9__28_1,
      v118,
      v119,
      v120,
      v121,
      v122,
      v123);
  }
  v124 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int_(
                                                                v113,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_1D3CDB0 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(v124, (const MethodInfo_1D404B8 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_438C3ED & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3ED = 1;
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
    sub_B7769C(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


System_String_o *__fastcall ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  __int64 v5; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x28
  System_String_o *v10; // x0
  System_String_o *v11; // x27
  System_String_o *v12; // x0
  System_String_o *v13; // x26
  System_String_o *v14; // x0
  System_String_o *v15; // x25
  System_String_o *v16; // x0
  System_String_o *v17; // x24
  System_String_o *v18; // x0
  System_String_o *v19; // x23
  System_String_o *v20; // x0
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x0
  __int64 v25; // x1
  System_String_o *v26; // x20
  System_String_o *v27; // x20
  System_String_o *v28; // x20
  System_String_o *v29; // x20
  System_String_o *v30; // x20
  unsigned __int64 v31; // x8
  System_String_o *v32; // x20
  unsigned __int64 v33; // x8
  System_String_o *v34; // x20
  unsigned __int64 v35; // x8
  System_String_o *v36; // x20
  unsigned __int64 v37; // x8
  __int64 v39; // x0
  System_String_o *oldValue; // [xsp+0h] [xbp-60h]
  __int64 v41; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438C3F4 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_24163/*"{x"*/);
    sub_B775C4(&StringLiteral_23957/*"{"*/);
    sub_B775C4(&StringLiteral_23891/*"xx}"*/);
    sub_B775C4(&StringLiteral_23890/*"xxx}"*/);
    sub_B775C4(&StringLiteral_24184/*"}"*/);
    sub_B775C4(&StringLiteral_24166/*"{xxxx"*/);
    sub_B775C4(&StringLiteral_24164/*"{xx"*/);
    sub_B775C4(&StringLiteral_23889/*"xxxx}"*/);
    sub_B775C4(&StringLiteral_23892/*"x}"*/);
    sub_B775C4(&StringLiteral_24165/*"{xxx"*/);
    byte_438C3F4 = 1;
  }
  v41 = 0LL;
  if ( funcVals )
  {
    v5 = *(_QWORD *)&funcVals->max_length;
    if ( v5 )
    {
      HIDWORD(v41) = 0;
      if ( (int)v5 >= 1 )
      {
        do
        {
          v6 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v7 = System_String__Concat_44904220(
                 (System_String_o *)StringLiteral_23957/*"{"*/,
                 v6,
                 (System_String_o *)StringLiteral_23889/*"xxxx}"*/,
                 0LL);
          v8 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v9 = System_String__Concat_44904220(
                 (System_String_o *)StringLiteral_23957/*"{"*/,
                 v8,
                 (System_String_o *)StringLiteral_23890/*"xxx}"*/,
                 0LL);
          v10 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v11 = System_String__Concat_44904220(
                  (System_String_o *)StringLiteral_23957/*"{"*/,
                  v10,
                  (System_String_o *)StringLiteral_23891/*"xx}"*/,
                  0LL);
          v12 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v13 = System_String__Concat_44904220(
                  (System_String_o *)StringLiteral_23957/*"{"*/,
                  v12,
                  (System_String_o *)StringLiteral_23892/*"x}"*/,
                  0LL);
          v14 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v15 = System_String__Concat_44904220(
                  (System_String_o *)StringLiteral_23957/*"{"*/,
                  v14,
                  (System_String_o *)StringLiteral_24184/*"}"*/,
                  0LL);
          v16 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v17 = System_String__Concat_44904220(
                  (System_String_o *)StringLiteral_24163/*"{x"*/,
                  v16,
                  (System_String_o *)StringLiteral_24184/*"}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v19 = System_String__Concat_44904220(
                  (System_String_o *)StringLiteral_24164/*"{xx"*/,
                  v18,
                  (System_String_o *)StringLiteral_24184/*"}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          oldValue = System_String__Concat_44904220(
                       (System_String_o *)StringLiteral_24165/*"{xxx"*/,
                       v20,
                       (System_String_o *)StringLiteral_24184/*"}"*/,
                       0LL);
          v21 = System_Int32__ToString((int32_t)&v41 + 4, 0LL);
          v22 = System_String__Concat_44904220(
                  (System_String_o *)StringLiteral_24166/*"{xxxx"*/,
                  v21,
                  (System_String_o *)StringLiteral_24184/*"}"*/,
                  0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_26;
          v23 = v22;
          LODWORD(v41) = 10000 * funcVals->m_Items[SHIDWORD(v41) + 1];
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !text )
            goto LABEL_27;
          v22 = System_String__Replace_44909172(text, v7, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_26;
          v26 = v22;
          LODWORD(v41) = 1000 * funcVals->m_Items[SHIDWORD(v41) + 1];
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v26 )
            goto LABEL_27;
          v22 = System_String__Replace_44909172(v26, v9, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_26;
          v27 = v22;
          LODWORD(v41) = 100 * funcVals->m_Items[SHIDWORD(v41) + 1];
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v27 )
            goto LABEL_27;
          v22 = System_String__Replace_44909172(v27, v11, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_26;
          v28 = v22;
          LODWORD(v41) = 10 * funcVals->m_Items[SHIDWORD(v41) + 1];
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v28 )
            goto LABEL_27;
          v22 = System_String__Replace_44909172(v28, v13, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_26;
          v29 = v22;
          v24 = System_Int32__ToString((int)funcVals + 4 * HIDWORD(v41) + 32, 0LL);
          if ( !v29 )
            goto LABEL_27;
          v22 = System_String__Replace_44909172(v29, v15, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_26;
          v30 = v22;
          v31 = 1717986919LL * funcVals->m_Items[SHIDWORD(v41) + 1];
          LODWORD(v41) = (v31 >> 63) + (SHIDWORD(v31) >> 2);
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v30 )
            goto LABEL_27;
          v22 = System_String__Replace_44909172(v30, v17, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_26;
          v32 = v22;
          v33 = 1374389535LL * funcVals->m_Items[SHIDWORD(v41) + 1];
          LODWORD(v41) = (v33 >> 63) + (SHIDWORD(v33) >> 5);
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v32 )
            goto LABEL_27;
          v22 = System_String__Replace_44909172(v32, v19, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
            goto LABEL_26;
          v34 = v22;
          v35 = 274877907LL * funcVals->m_Items[SHIDWORD(v41) + 1];
          LODWORD(v41) = (v35 >> 63) + (SHIDWORD(v35) >> 6);
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v34 )
            goto LABEL_27;
          v22 = System_String__Replace_44909172(v34, oldValue, v24, 0LL);
          if ( HIDWORD(v41) >= funcVals->max_length )
          {
LABEL_26:
            v39 = sub_B776C8(v22);
            sub_B77668(v39, 0LL);
          }
          v36 = v22;
          v37 = 1759218605LL * funcVals->m_Items[SHIDWORD(v41) + 1];
          LODWORD(v41) = (v37 >> 63) + (SHIDWORD(v37) >> 12);
          v24 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v36 )
LABEL_27:
            sub_B7769C(v24, v25);
          text = System_String__Replace_44909172(v36, v23, v24, 0LL);
          ++HIDWORD(v41);
        }
        while ( SHIDWORD(v41) < (signed int)funcVals->max_length );
      }
    }
  }
  return text;
}


void __fastcall ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemIconComponentList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438C3F2 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    byte_438C3F2 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemIconComponentList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v5,
      itemIconComponentList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v5,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v5.fields.current )
        sub_B7769C(0LL, v4);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v5.fields.current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v5,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_B7769C(this, method);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0LL);
}


void __fastcall ClassBoardBaseDialog__SetQpLabel(
        ClassBoardBaseDialog_o *this,
        int32_t needNum,
        const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  int32_t klass; // w23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  __int64 v10; // x2
  System_String_o *v11; // x22
  int32_t *v12; // x1
  Il2CppObject *v13; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v16; // x21
  __int64 v17; // x2
  Il2CppObject *v18; // x0
  int32_t v19; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v20; // [xsp+8h] [xbp-38h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438C3F0 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_3118/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/);
    sub_B775C4(&StringLiteral_3120/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/);
    sub_B775C4(&StringLiteral_3117/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/);
    sub_B775C4(&StringLiteral_3119/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/);
    sub_B775C4(&StringLiteral_3115/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/);
    byte_438C3F0 = 1;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3117/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0LL);
    if ( itemQpLabel )
    {
      UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
      itemQpNum = this->fields.itemQpNum;
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3119/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
      v20 = needNum;
      v12 = &v20;
      goto LABEL_15;
    }
LABEL_24:
    sub_B7769C(SelfUserGame, v6);
  }
  if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3118/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0LL);
  if ( !itemQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemQpLabel, SelfUserGame, 0LL);
  itemQpNum = this->fields.itemQpNum;
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_3120/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/, 0LL);
  v12 = &v21;
  v21 = needNum;
LABEL_15:
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v12, v10);
  SelfUserGame = System_String__Format(v11, v13, 0LL);
  if ( !itemQpNum )
    goto LABEL_24;
  UILabel__set_text(itemQpNum, SelfUserGame, 0LL);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3115/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0LL);
  if ( !itemHaveQpLabel )
    goto LABEL_24;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0LL);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3119/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0LL);
  v19 = klass;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v19, v17);
  SelfUserGame = System_String__Format(v16, v18, 0LL);
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
  UnityEngine_GameObject_o *effectObj; // x0
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v11; // x21
  unsigned __int64 v12; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  int32_t v15; // w0
  IClassBoardSquareModel_c *v16; // x8
  int32_t v17; // w22
  unsigned __int64 v18; // x10
  int32_t *v19; // x11
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x22
  UnityEngine_GameObject_o *v28; // x21
  const MethodInfo *v29; // x3
  float v30; // s11
  Il2CppObject *current; // x23
  struct UnityEngine_GameObject_o *effectDetailObj; // x21
  UnityEngine_GameObject_o *v33; // x0
  __int64 v34; // x1
  UnityEngine_GameObject_o *v35; // x21
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v37; // x1
  IClassBoardSquareModel_c *v38; // x8
  System_String_o *monitor; // x24
  System_String_o *v40; // x25
  int32_t v41; // w23
  ClassBoardDialogSkillDetailPartsComponent_o *v42; // x22
  unsigned __int64 v43; // x10
  int32_t *v44; // x11
  __int64 v45; // x0
  __int64 v46; // x0
  __int64 v47; // x1
  const MethodInfo *v48; // x5
  float v49; // s10
  struct UIScrollView_o *effectScrollView; // x8
  struct UIScrollView_o *v51; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v53; // x0
  __int64 v54; // x0
  __int64 v55; // x0
  System_Collections_Generic_List_Enumerator_T__o v56; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+20h] [xbp-90h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C3EE & 1) == 0 )
  {
    sub_B775C4(&ClassBoardSquareEntity___TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    sub_B775C4(&IClassBoardSquareModel_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3EE = 1;
  }
  entity = 0LL;
  memset(&v57, 0, sizeof(v57));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_55;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0LL);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_55;
  klass = squareModel->klass;
  v11 = (ClassBoardSquareMaster_o *)effectObj;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v12 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v12;
      p_offset += 4;
      if ( v12 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset + 1].method;
  }
  else
  {
LABEL_12:
    p_method = sub_B0F4C0(squareModel, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  v15 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(squareModel, *(_QWORD *)(p_method + 8));
  v16 = squareModel->klass;
  v17 = v15;
  if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
  {
    v18 = 0LL;
    v19 = &v16->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v19 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      ++v18;
      v19 += 4;
      if ( v18 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
        goto LABEL_18;
    }
    v20 = (__int64)&v16->vtable[*v19].method;
  }
  else
  {
LABEL_18:
    v20 = sub_B0F4C0(squareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v20)(
                                            squareModel,
                                            *(_QWORD *)(v20 + 8));
  if ( !v11 )
    goto LABEL_55;
  ClassBoardSquareMaster__TryGetEntity(v11, &entity, v17, (int32_t)effectObj, 0LL);
  effectObj = (UnityEngine_GameObject_o *)sub_B775DC(ClassBoardSquareEntity___TypeInfo, 1LL);
  if ( !effectObj )
    goto LABEL_55;
  v27 = (System_Int32_array **)entity;
  v28 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_B77684(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v55 = sub_B776BC(0LL);
      sub_B77668(v55, 0LL);
    }
  }
  if ( !LODWORD(v28[1].klass) )
  {
    v54 = sub_B776C8(effectObj);
    sub_B77668(v54, 0LL);
  }
  v28[1].monitor = v27;
  sub_B77560((BattleServantConfConponent_o *)&v28[1].monitor, v27, v21, v22, v23, v24, v25, v26);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v28,
                                            0,
                                            0,
                                            v29);
  if ( !effectObj )
    goto LABEL_55;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v56,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)effectObj,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v57 = v56;
  v30 = 0.0;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v57,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v57.fields.current;
    effectDetailObj = this->fields.effectDetailObj;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                        (UnityEngine_UI_Dropdown_DropdownItem_o *)effectDetailObj,
                                        (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v35 = v33;
    if ( !v33 )
      sub_B7769C(0LL, v34);
    Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                v33,
                                (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_B7769C(Component_srcLineSprite, v37);
    v38 = squareModel->klass;
    v40 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v41 = (int32_t)current[2].monitor;
    v42 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_srcLineSprite;
    if ( *(_WORD *)&squareModel->klass->_2.bitflags1 )
    {
      v43 = 0LL;
      v44 = &v38->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v44 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        ++v43;
        v44 += 4;
        if ( v43 >= *(unsigned __int16 *)&squareModel->klass->_2.bitflags1 )
          goto LABEL_36;
      }
      v45 = (__int64)&v38->vtable[*v44 + 7].method;
    }
    else
    {
LABEL_36:
      v45 = sub_B0F4C0(squareModel, IClassBoardSquareModel_TypeInfo, 7LL);
    }
    v46 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v45)(squareModel, *(_QWORD *)(v45 + 8));
    if ( !v42 )
      sub_B7769C(v46, v47);
    v49 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v42, v40, monitor, v41, v46, v48);
    GameObjectExtensions__SetParent_32813552(v35, this->fields.effectDetailParent, 0LL);
    one = UnityEngine_Vector3__get_one(0LL);
    GameObjectExtensions__SetLocalScale(v35, one, 0LL);
    GameObjectExtensions__SetLocalPosition_32807768(v35, 0.0, -v30, 0.0, 0LL);
    UnityEngine_GameObject__SetActive(v35, 1, 0LL);
    v30 = v30 + v49;
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v57,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( disableScrollViewSize > 0.0 && v30 <= disableScrollViewSize )
  {
    v51 = this->fields.effectScrollView;
    if ( v51 )
    {
      HIDWORD(v51->fields.onDragStarted) = 4;
      effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
      if ( effectObj )
      {
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
        effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0LL);
        if ( effectObj )
        {
          v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0LL);
          GameObjectExtensions__SetLocalPositionY(v53, disableScrollViewPosY, 0LL);
          return;
        }
      }
    }
LABEL_55:
    sub_B7769C(effectObj, squareModel);
  }
}


bool __fastcall ClassBoardBaseDialog__SetUpItemList(
        ClassBoardBaseDialog_o *this,
        System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *itemList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemInfoLabel; // x21
  UILabel_o *v6; // x21
  System_String_o *itemListObj; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *itemQpObj; // x21
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  unsigned __int64 v18; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  int v24; // w26
  char v25; // w25
  int i; // w22
  __int64 v27; // x8
  unsigned __int64 v28; // x10
  int *v29; // x11
  __int64 v30; // x0
  __int64 v31; // x8
  unsigned __int64 v32; // x10
  int *v33; // x11
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x23
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  int32_t v42; // w0
  __int64 v43; // x8
  int32_t v44; // w22
  unsigned __int64 v45; // x10
  IClassBoardItemModel_c **v46; // x11
  __int64 v47; // x0
  int32_t v48; // w23
  WebViewManager_o *Instance; // x0
  __int64 v50; // x1
  ItemMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v52; // x1
  _BOOL8 isQP; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  struct UnityEngine_GameObject_o *itemIcon; // x24
  UnityEngine_GameObject_o *v57; // x0
  __int64 v58; // x1
  UIGrid_o *itemIconListGrid; // x25
  UnityEngine_Transform_o *transform; // x0
  ClassBoardItemIconComponent_o *Component_srcLineSprite; // x0
  __int64 v62; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v63; // x24
  __int64 v64; // x1
  __int64 v65; // x8
  unsigned __int64 v66; // x10
  int *v67; // x11
  __int64 v68; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o **p_itemIconComponentList; // [xsp+0h] [xbp-60h]
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438C3EF & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
    sub_B775C4(&IClassBoardItemModel_TypeInfo);
    sub_B775C4(&System_IDisposable_TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_B775C4(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_B775C4(&System_Collections_IEnumerator_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_3113/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/);
    byte_438C3EF = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0LL, 0LL) )
  {
    v6 = this->fields.itemInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3113/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0LL);
    if ( !v6 )
      goto LABEL_82;
    UILabel__set_text(v6, itemListObj, 0LL);
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
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.itemIconComponentList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
    v18 = 0LL;
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      ++v18;
      p_offset += 4;
      if ( v18 >= *(unsigned __int16 *)&itemList->klass->_2.bitflags1 )
        goto LABEL_24;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_24:
    p_method = sub_B0F4C0(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))p_method)(
          itemList,
          *(_QWORD *)(p_method + 8));
  v23 = v21;
  v24 = 0;
  v25 = 1;
LABEL_27:
  for ( i = v24; ; i = 1 )
  {
    if ( !v23 )
      sub_B7769C(v21, v22);
    v27 = *(_QWORD *)v23;
    v24 = i;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v28 = 0LL;
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v28;
        v29 += 4;
        if ( v28 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_33;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_33:
      v30 = sub_B0F4C0(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v23, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v23;
    if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
    {
      v32 = 0LL;
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v33 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        ++v32;
        v33 += 4;
        if ( v32 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
          goto LABEL_40;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_40:
      v34 = sub_B0F4C0(v23, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0LL);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v23, *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_B7769C(0LL, v36);
    v38 = *(_QWORD *)v35;
    if ( *(_WORD *)(*(_QWORD *)v35 + 298LL) )
    {
      v39 = 0LL;
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v40 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v39;
        v40 += 4;
        if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v35 + 298LL) )
          goto LABEL_47;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_47:
      v41 = sub_B0F4C0(v35, IClassBoardItemModel_TypeInfo, 0LL);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
    v43 = *(_QWORD *)v37;
    v44 = v42;
    if ( *(_WORD *)(*(_QWORD *)v37 + 298LL) )
    {
      v45 = 0LL;
      v46 = (IClassBoardItemModel_c **)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *(v46 - 1) != IClassBoardItemModel_TypeInfo )
      {
        ++v45;
        v46 += 2;
        if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v37 + 298LL) )
          goto LABEL_53;
      }
      v47 = v43 + 16LL * (*(_DWORD *)v46 + 1) + 312;
    }
    else
    {
LABEL_53:
      v47 = sub_B0F4C0(v37, IClassBoardItemModel_TypeInfo, 1LL);
    }
    v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B7769C(0LL, v50);
    MasterData_WarQuestSelectionMaster = (ItemMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      sub_B7769C(0LL, v52);
    isQP = ItemMaster__isQP(MasterData_WarQuestSelectionMaster, v44, 0LL);
    if ( !isQP )
    {
      itemIcon = this->fields.itemIcon;
      if ( (v25 & 1) == 0 )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v57 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                            (UnityEngine_UI_Dropdown_DropdownItem_o *)itemIcon,
                                            (const MethodInfo_1DF9900 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v57;
        if ( !v57 )
          sub_B7769C(0LL, v58);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform(v57, 0LL);
        if ( !itemIconListGrid )
          sub_B7769C(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0LL);
      }
      if ( !itemIcon )
        sub_B7769C(isQP, v54);
      UnityEngine_GameObject__SetActive(itemIcon, 1, 0LL);
      zero = UnityEngine_Vector3__get_zero(0LL);
      GameObjectExtensions__SetLocalPosition(itemIcon, zero, 0LL);
      one = UnityEngine_Vector3__get_one(0LL);
      GameObjectExtensions__SetLocalScale(itemIcon, one, 0LL);
      Component_srcLineSprite = (ClassBoardItemIconComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                   itemIcon,
                                                                   (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v63 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v62);
      ClassBoardItemIconComponent__setItemInfo(Component_srcLineSprite, v44, v48, 0LL);
      if ( !*p_itemIconComponentList )
        sub_B7769C(0LL, v64);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        *p_itemIconComponentList,
        v63,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
      v25 = 0;
      goto LABEL_27;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v48, v55);
  }
  v65 = *(_QWORD *)v23;
  if ( *(_WORD *)(*(_QWORD *)v23 + 298LL) )
  {
    v66 = 0LL;
    v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v67 - 1) != System_IDisposable_TypeInfo )
    {
      ++v66;
      v67 += 4;
      if ( v66 >= *(unsigned __int16 *)(*(_QWORD *)v23 + 298LL) )
        goto LABEL_74;
    }
    v68 = v65 + 16LL * *v67 + 312;
  }
  else
  {
LABEL_74:
    v68 = sub_B0F4C0(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v68)(v23, *(_QWORD *)(v68 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_82:
    sub_B7769C(itemListObj, v8);
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
  UnityEngine_GameObject_o *conditionListObj; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v8; // x20
  __int64 v9; // x22
  __int64 v10; // x9
  DataMasterBase_WarMaster__WarEntity__int__o *v11; // x20
  char v12; // w23
  _BOOL8 v13; // x0
  __int64 v14; // x1
  EventMissionEntity_o *v15; // x22
  MasterMissionListViewItem_o *v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  UIWidget_o *ComponentInChildren_UIWidget; // x0
  __int64 v20; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  UnityEngine_Transform_o *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Component_o *v27; // x0
  __int64 v28; // x1
  UIGrid_o *v29; // x21
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_Transform_o *v31; // x0
  __int64 v32; // x0
  System_Collections_Generic_List_Enumerator_int__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v34; // [xsp+20h] [xbp-70h] BYREF
  WarEntity_o *entity; // [xsp+38h] [xbp-58h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_438C3F1 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
    sub_B775C4(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&MasterMissionListViewItem_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Object_Instantiate_Transform___);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3F1 = 1;
  }
  entity = 0LL;
  memset(&v34, 0, sizeof(v34));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0LL);
  v6 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_54;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0LL);
      if ( !conditionListObj )
        goto LABEL_54;
      klass = conditionListObj[1].klass;
      v8 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v9 = 0LL;
        do
        {
          if ( (unsigned int)v9 >= (unsigned int)klass )
          {
            v32 = sub_B776C8(conditionListObj);
            sub_B77668(v32, 0LL);
          }
          v10 = *((_QWORD *)&v8[1].monitor + v9);
          if ( !v10 )
            goto LABEL_54;
          if ( (unsigned int)(*(_DWORD *)(v10 + 28) - 23) <= 1 )
          {
            if ( !v6 )
              goto LABEL_54;
            System_Collections_Generic_List_int___Add(
              v6,
              *(_DWORD *)(v10 + 32),
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
            klass = v8[1].klass;
          }
        }
        while ( (int)++v9 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v6 )
      goto LABEL_54;
    System_Collections_Generic_List_int___Add(
      v6,
      SHIDWORD(v3),
      (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v6 )
    goto LABEL_54;
  v11 = (DataMasterBase_WarMaster__WarEntity__int__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v6,
    (const MethodInfo_30E6C2C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v34 = v33;
  v12 = 1;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v34,
            (const MethodInfo_225A1B4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v13 )
      break;
    if ( !v11 )
      sub_B7769C(v13, v14);
    DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
      v11,
      &entity,
      v34.fields.current,
      (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v15 = (EventMissionEntity_o *)entity;
    if ( entity )
    {
      v16 = (MasterMissionListViewItem_o *)sub_B77694(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v16, v15, 2, 0LL);
      if ( !v16 )
        sub_B7769C(v17, v18);
      ComponentInChildren_UIWidget = (UIWidget_o *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, Il2CppMethodPointer))v16->klass->vtable._6_CheckMissionCond.method)(
                                                     v16,
                                                     v16->klass->vtable._7_SetGiftData.methodPtr);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v12 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_B7769C(ComponentInChildren_UIWidget, v20);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0LL);
        Parent = GameObjectExtensions__GetParent(gameObject, 0LL);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_B7769C(0LL, v23);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        v27 = (UnityEngine_Component_o *)UnityEngine_Object__Instantiate_UILabel_(
                                           (UILabel_o *)Parent,
                                           transform,
                                           (const MethodInfo_1DF9A3C *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v27 )
          sub_B7769C(0LL, v28);
        ComponentInChildren_UIWidget = UnityEngine_Component__GetComponentInChildren_UIWidget_(
                                         v27,
                                         (const MethodInfo_1C6D75C *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_UIWidget;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_B7769C(ComponentInChildren_UIWidget, v20);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, const char *))classBoardMissionListViewItemDraw->klass[1]._1.gc_desc)(
        classBoardMissionListViewItemDraw,
        v16,
        1LL,
        0LL,
        classBoardMissionListViewItemDraw->klass[1]._1.name);
      v29 = this->fields.conditionGrid;
      v30 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0LL);
      v31 = GameObjectExtensions__GetParent(v30, 0LL);
      if ( !v29 )
        sub_B7769C(v31, v31);
      UIGrid__AddChild(v29, v31, 0LL);
      v12 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v34,
    (const MethodInfo_225A1B0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_B7769C(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0LL);
}


void __fastcall ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_438C3F5 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438C3F5 = 1;
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
      sub_B7769C(0LL, v4);
    UIScrollView__UpdateScrollbars(v5, 0LL);
  }
}


void __fastcall ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4388574 & 1) == 0 )
  {
    sub_B775C4(&ClassBoardBaseDialog___c_TypeInfo);
    byte_4388574 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v1;
  sub_B77560(static_fields);
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
    sub_B7769C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.squareId;
}