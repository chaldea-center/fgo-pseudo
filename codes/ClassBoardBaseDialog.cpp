void ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4CF21AA & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CF21AA = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardBaseDialog__Close(ClassBoardBaseDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSquare; // x21
  __int64 v6; // x1
  ClassBoardSquare_o *v7; // x0

  if ( (byte_4CF21A7 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF21A7 = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0, 0) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1C7BD40(0, v6);
    ClassBoardSquare__SetSelectedEffectActive(v7, 0, 0);
  }
  BaseDialog__Close((BaseDialog_o *)this, callback, 0);
}


void ClassBoardBaseDialog__CloseItemInfoListWindow(
        ClassBoardBaseDialog_o *this,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4CF21A9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF21A9 = 1;
  }
  v4 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C7BB00(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v7);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, closedAction, 0);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *ClassBoardBaseDialog__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x19
  System_Int32_array *IsPassive; // x0
  __int64 v10; // x1
  Il2CppObject *v11; // x22
  Il2CppObject *v12; // x28
  int max_length; // w8
  unsigned int v14; // w21
  ClassBoardSquareEntity_o *v15; // x29
  System_Collections_Generic_List_object__o *v16; // x19
  Il2CppObject *p_obj; // x21
  System_Collections_Generic_List_object__o *v18; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v20; // x19
  SkillLvEntity_o *v21; // x24
  System_Collections_Generic_List_object__o *v22; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppClass **v33; // x0
  System_Collections_Generic_List_object__o *v34; // x23
  _BOOL8 v35; // x0
  __int64 v36; // x1
  Il2CppObject *current; // x24
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x27
  __int64 v41; // x1
  System_Collections_Generic_List_object__o *v42; // x19
  Il2CppObject *v43; // x0
  FuncDispEntity_o *v44; // x19
  System_Collections_Generic_List_object__o *v45; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v46; // x25
  __int64 v47; // x0
  __int64 v48; // x1
  int32_t v49; // w2
  int32_t v50; // w3
  System_String_o *v51; // x4
  int32_t v52; // w5
  int64_t v53; // x6
  System_String_o *v54; // x7
  struct System_Object_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v69; // w27
  int32_t v70; // w26
  int32_t v71; // w28
  int32_t v72; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v73; // x24
  __int64 v74; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  struct System_Object_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  Il2CppClass **v89; // x0
  System_Int32_array *v90; // x19
  System_String_o *Detail; // x0
  const MethodInfo *v92; // x2
  System_String_o *v93; // x19
  System_String_o *Name; // x0
  int32_t priority; // w23
  int32_t id; // w24
  int32_t iconId; // w25
  int32_t skillType; // w26
  System_String_o *v99; // x27
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v100; // x21
  int32_t v101; // w2
  int32_t v102; // w3
  System_String_o *v103; // x4
  int32_t v104; // w5
  int64_t v105; // x6
  System_String_o *v106; // x7
  struct System_Object_array *v107; // x8
  _QWORD *v108; // x9
  __int64 v109; // x10
  Il2CppClass **v110; // x0
  _BOOL8 v111; // x0
  __int64 v112; // x1
  Il2CppObject *value; // x23
  System_String_o *data; // x21
  Il2CppObject *v115; // x0
  __int64 v116; // x1
  Il2CppObject *v117; // x0
  __int64 v118; // x1
  _DWORD *v119; // x8
  __int64 v120; // x1
  Il2CppObject *v121; // x0
  __int64 v122; // x1
  Il2CppObject *v123; // x0
  __int64 v124; // x1
  Il2CppClass *v125; // x8
  System_Int32_array *v126; // x26
  int32_t v127; // w25
  Il2CppObject *v128; // x19
  __int64 v129; // x0
  __int64 v130; // x1
  _DWORD *v131; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v133; // x8
  il2cpp_array_size_t v134; // x10
  unsigned __int64 v135; // x9
  __int64 v136; // x10
  char *v137; // x12
  int v138; // w13
  _DWORD *v139; // x8
  int32_t v140; // w8
  Il2CppObject *v141; // x0
  __int64 v142; // x1
  const MethodInfo *v143; // x2
  Il2CppClass *v144; // x8
  System_String_o *v145; // x26
  Il2CppObject *v146; // x0
  __int64 v147; // x1
  _DWORD *v148; // x8
  int32_t v149; // w27
  Il2CppObject *v150; // x0
  __int64 v151; // x1
  _DWORD *v152; // x8
  int32_t v153; // w28
  Il2CppObject *v154; // x0
  __int64 v155; // x1
  _DWORD *v156; // x8
  int32_t v157; // w19
  System_String_o *v158; // x23
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v159; // x21
  __int64 v160; // x0
  __int64 v161; // x1
  int32_t v162; // w2
  int32_t v163; // w3
  System_String_o *v164; // x4
  int32_t v165; // w5
  int64_t v166; // x6
  System_String_o *v167; // x7
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  Il2CppClass **v171; // x0
  ClassBoardBaseDialog___c_c *v172; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v174; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v182; // x0
  ClassBoardBaseDialog___c_c *v183; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v184; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v186; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v187; // x0
  int32_t v188; // w2
  int32_t v189; // w3
  System_String_o *v190; // x4
  int32_t v191; // w5
  int64_t v192; // x6
  System_String_o *v193; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x0
  int32_t v197; // [xsp+Ch] [xbp-154h]
  ClassBoardCommandSpellMaster_o *v198; // [xsp+10h] [xbp-150h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+18h] [xbp-148h]
  ClassBoardSquareEntity_array *v200; // [xsp+20h] [xbp-140h]
  unsigned int v201; // [xsp+2Ch] [xbp-134h]
  System_Collections_Generic_Dictionary_object__object__o *v202; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v203; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v204; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v205; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v206; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v207; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v208; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v209; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v210; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v211; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v213; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  if ( (byte_4CF21A4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1C7BAE8(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1C7BAE8(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1C7BAE8(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1C7BAE8(&Method_System_String_Join_int___);
    sub_1C7BAE8(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__);
    sub_1C7BAE8(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__);
    sub_1C7BAE8(&ClassBoardBaseDialog___c_TypeInfo);
    sub_1C7BAE8(&StringLiteral_809/*","*/);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CF21A4 = 1;
  }
  v213 = 0;
  entity = 0;
  v211 = 0;
  entitys = 0;
  memset(&v210, 0, sizeof(v210));
  v209 = 0;
  v207 = 0;
  memset(&v208, 0, sizeof(v208));
  memset(&v206, 0, sizeof(v206));
  v8 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_156;
  if ( !openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v8;
  v197 = dispType;
  v203 = v8;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v198 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v202 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v202,
    (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v14 = 0;
    v200 = openedSquareArray;
    v204 = (FuncDispMaster_o *)v12;
    while ( 1 )
    {
      if ( v14 >= max_length )
        sub_1C7BD48(IsPassive);
      v15 = openedSquareArray->m_Items[v14];
      v16 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v16,
        (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v16;
      if ( !v15 )
        goto LABEL_156;
      v201 = v14;
      IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsPassive(v15, 0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        break;
      if ( dispType == 2 )
        goto LABEL_62;
      IsPassive = (System_Int32_array *)Master_object;
      if ( !Master_object )
        goto LABEL_156;
      IsPassive = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                          Master_object,
                                          &entity,
                                          v15->fields.targetId,
                                          (const MethodInfo_342E348 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v11 )
        goto LABEL_156;
      IsPassive = (System_Int32_array *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)v11,
                                          &v213,
                                          v15->fields.targetId,
                                          v15->fields.upSkillLv,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (System_Int32_array *)v213;
        if ( !v213 )
          goto LABEL_156;
        IsPassive = (System_Int32_array *)SkillLvEntity__IsContainsTurnOrCountBuff(v213, 0);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v213 )
        goto LABEL_156;
      if ( !v12 )
        goto LABEL_156;
      IsPassive = (System_Int32_array *)FuncDispMaster__IsContainFuncIds(
                                          (FuncDispMaster_o *)v12,
                                          &v211,
                                          v213->fields.funcId,
                                          v15->fields.classBoardBaseId,
                                          0);
      if ( !v213 )
        goto LABEL_156;
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        IsPassive = (System_Int32_array *)System_String__Join_int_(
                                            (System_String_o *)StringLiteral_809/*","*/,
                                            (System_Collections_Generic_IEnumerable_T__o *)v213->fields.funcId,
                                            (const MethodInfo_321B12C *)Method_System_String_Join_int___);
        if ( !v202 )
          goto LABEL_156;
        p_obj = &IsPassive->obj;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v202,
                &IsPassive->obj,
                (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v18 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v18,
            (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v202,
            p_obj,
            (Il2CppObject *)v18,
            (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v202,
                 p_obj,
                 (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v20 = v211;
        v21 = v213;
        v22 = (System_Collections_Generic_List_object__o *)Item;
        v23 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C7BD34(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v23, v20, v21, 0, v15, 0);
        if ( !v22 )
          goto LABEL_156;
        items = v22->fields._items;
        v31 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v22->fields._version;
        if ( !items )
          goto LABEL_156;
        size = v22->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v23,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
        }
        else
        {
          v33 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v33[4] = (Il2CppClass *)v23;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v33 + 4), (int32_t)v23, v24, v25, v26, v27, v28, v29);
        }
LABEL_61:
        dispType = v197;
        goto LABEL_62;
      }
      IsPassive = SkillLvMaster__GetDispValFromSkill(
                    (SkillLvMaster_o *)v11,
                    v213->fields.skillId,
                    v213->fields.lv,
                    classStatisticsInfos,
                    0);
      if ( !v213 )
        goto LABEL_156;
      v90 = IsPassive;
      Detail = SkillLvEntity__getDetail(v213, 0, 1, 0);
      IsPassive = (System_Int32_array *)ClassBoardBaseDialog__ReplaceFractionFormat(Detail, v90, v92);
      if ( !entity )
        goto LABEL_156;
      v93 = (System_String_o *)IsPassive;
      Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
      priority = v15->fields.priority;
      id = v15->fields.id;
      iconId = v15->fields.iconId;
      skillType = v15->fields.skillType;
      v99 = Name;
      v100 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C7BD34(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v100,
        v99,
        v93,
        id,
        priority,
        iconId,
        skillType,
        0);
      if ( !v203 )
        goto LABEL_156;
      v107 = v203->fields._items;
      dispType = v197;
      v108 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v203->fields._version;
      if ( !v107 )
        goto LABEL_156;
      v109 = v203->fields._size;
      if ( (unsigned int)v109 >= LODWORD(v107->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v203,
          (Il2CppObject *)v100,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
      }
      else
      {
        v110 = &v107->obj.klass + v109;
        v203->fields._size = v109 + 1;
        v110[4] = (Il2CppClass *)v100;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v110 + 4), (int32_t)v100, v101, v102, v103, v104, v105, v106);
      }
LABEL_62:
      openedSquareArray = v200;
      max_length = v200->max_length;
      v14 = v201 + 1;
      if ( (int)(v201 + 1) >= max_length )
        goto LABEL_81;
    }
    IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsCommandSpell(v15, 0);
    if ( dispType == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (System_Int32_array *)v198;
    if ( !v198 )
      goto LABEL_156;
    IsPassive = (System_Int32_array *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v198,
                                        &entitys,
                                        v15->fields.targetId,
                                        v15->fields.upSkillLv,
                                        0);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v34 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v34,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (System_Int32_array *)entitys;
    if ( !entitys )
      goto LABEL_156;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v205,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    *(_OWORD *)&v210.fields._list = *(_OWORD *)&v205.fields._dictionary;
    v210.fields._current = v205.fields._current.fields.key;
    while ( 1 )
    {
      v35 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v210,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v12 = (Il2CppObject *)v204;
      if ( !v35 )
        break;
      current = v210.fields._current;
      if ( !v210.fields._current )
        sub_1C7BD40(v35, v36);
      if ( !v204 )
        sub_1C7BD40(v35, v36);
      if ( FuncDispMaster__IsContainFuncIds(
             v204,
             &v209,
             (System_Int32_array *)v210.fields._current[3].klass,
             v15->fields.classBoardBaseId,
             0) )
      {
        v38 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_809/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_321B12C *)Method_System_String_Join_int___);
        if ( !v34 )
          sub_1C7BD40(v38, v39);
        v40 = v38;
        if ( !System_Collections_Generic_List_object___Contains(
                v34,
                v38,
                (const MethodInfo_383F18C *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v202 )
            sub_1C7BD40(0, v41);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v202,
                  v40,
                  (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v42 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v42,
              (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v202,
              v40,
              (Il2CppObject *)v42,
              (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v43 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v202,
                  v40,
                  (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v44 = v209;
          v45 = (System_Collections_Generic_List_object__o *)v43;
          v46 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C7BD34(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v46,
            v44,
            0,
            (ClassBoardCommandSpellEntity_o *)current,
            v15,
            0);
          if ( !v45 )
            sub_1C7BD40(v47, v48);
          v55 = v45->fields._items;
          v56 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
          ++v45->fields._version;
          if ( !v55 )
            sub_1C7BD40(v47, v48);
          v57 = v45->fields._size;
          if ( (unsigned int)v57 >= LODWORD(v55->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v45,
              (Il2CppObject *)v46,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
          }
          else
          {
            v58 = &v55->obj.klass + v57;
            v45->fields._size = v57 + 1;
            v58[4] = (Il2CppClass *)v46;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v58 + 4), (int32_t)v46, v49, v50, v51, v52, v53, v54);
          }
          v86 = v34->fields._items;
          v87 = Method_System_Collections_Generic_List_string__Add__;
          ++v34->fields._version;
          if ( !v86 )
            sub_1C7BD40(v59, v60);
          v88 = v34->fields._size;
          if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v34,
              v40,
              *(const MethodInfo_383EDFC **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
          }
          else
          {
            v89 = &v86->obj.klass + v88;
            v34->fields._size = v88 + 1;
            v89[4] = (Il2CppClass *)v40;
            sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v89 + 4), (int32_t)v40, v61, v62, v63, v64, v65, v66);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v69 = v15->fields.priority;
        v71 = v15->fields.id;
        v70 = v15->fields.iconId;
        v72 = v15->fields.skillType;
        v73 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C7BD34(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v73, klass, monitor, v71, v69, v70, v72, 0);
        if ( !v203 )
          sub_1C7BD40(v74, v75);
        v82 = v203->fields._items;
        v83 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v203->fields._version;
        if ( !v82 )
          sub_1C7BD40(v74, v75);
        v84 = v203->fields._size;
        if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v203,
            (Il2CppObject *)v73,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v203->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v73;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v85 + 4), (int32_t)v73, v76, v77, v78, v79, v80, v81);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v210,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_81:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Int32_array *)v202;
  if ( !v202 )
LABEL_156:
    sub_1C7BD40(IsPassive, v10);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v205,
    v202,
    (const MethodInfo_34F28BC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v208 = v205;
  while ( 1 )
  {
    v111 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v208,
             (const MethodInfo_35F10F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v111 )
      break;
    value = v208.fields._current.fields.value;
    if ( !v208.fields._current.fields.value )
      sub_1C7BD40(v111, v112);
    if ( SLODWORD(v208.fields._current.fields.value[1].monitor) >= 1 )
    {
      data = (System_String_o *)StringLiteral_1/*""*/;
      v115 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v208.fields._current.fields.value,
               0,
               (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v115 )
        sub_1C7BD40(0, v116);
      if ( v115[1].monitor )
      {
        v117 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v117 )
          sub_1C7BD40(0, v118);
        v119 = v117[1].monitor;
        if ( !v119 )
          sub_1C7BD40(v117, v118);
        if ( !Master_object )
          sub_1C7BD40(0, v118);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v207,
               v119[4],
               (const MethodInfo_342E348 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v207 )
            sub_1C7BD40(0, v120);
          data = SkillEntity__getName((SkillEntity_o *)v207, 0);
        }
      }
      else
      {
        v121 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v121 )
          sub_1C7BD40(0, v122);
        if ( v121[2].klass )
        {
          v123 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v123 )
            sub_1C7BD40(0, v124);
          v125 = v123[2].klass;
          if ( !v125 )
            sub_1C7BD40(v123, v124);
          data = (System_String_o *)v125->_1.byval_arg.data;
        }
      }
      v126 = (System_Int32_array *)sub_1C7BB90(int___TypeInfo, 0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v205,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v127 = 0;
      *(_OWORD *)&v206.fields._list = *(_OWORD *)&v205.fields._dictionary;
      v206.fields._current = v205.fields._current.fields.key;
LABEL_102:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v206,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v206,
          (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v141 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v141 )
          sub_1C7BD40(0, v142);
        v144 = v141[1].klass;
        if ( !v144 )
          sub_1C7BD40(v141, v142);
        v145 = ClassBoardBaseDialog__ReplaceFractionFormat(*(System_String_o **)&v144->_1.byval_arg.bits, v126, v143);
        v146 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v146 )
          sub_1C7BD40(0, v147);
        v148 = v146[2].monitor;
        if ( !v148 )
          sub_1C7BD40(v146, v147);
        v149 = v148[5];
        v150 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v150 )
          sub_1C7BD40(0, v151);
        v152 = v150[2].monitor;
        if ( !v152 )
          sub_1C7BD40(v150, v151);
        v153 = v152[6];
        v154 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v154 )
          sub_1C7BD40(0, v155);
        v156 = v154[2].monitor;
        if ( !v156 )
          sub_1C7BD40(v154, v155);
        v157 = v156[14];
        v158 = data;
        v159 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C7BD34(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v159, v158, v145, v149, v127, v153, v157, 0);
        if ( !v203 )
          sub_1C7BD40(v160, v161);
        v168 = v203->fields._items;
        v169 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v203->fields._version;
        if ( !v168 )
          sub_1C7BD40(v160, v161);
        v170 = v203->fields._size;
        if ( (unsigned int)v170 >= LODWORD(v168->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v203,
            (Il2CppObject *)v159,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
        }
        else
        {
          v171 = &v168->obj.klass + v170;
          v203->fields._size = v170 + 1;
          v171[4] = (Il2CppClass *)v159;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v171 + 4), (int32_t)v159, v162, v163, v164, v165, v166, v167);
        }
        continue;
      }
      v128 = v206.fields._current;
      v129 = sub_1C7BB90(int___TypeInfo, 0);
      if ( !v128 )
        sub_1C7BD40(v129, v130);
      v131 = v128[1].monitor;
      if ( v131 )
      {
        if ( !v11 )
          sub_1C7BD40(v129, v130);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v11,
                                                               v131[4],
                                                               v131[5],
                                                               classStatisticsInfos,
                                                               0);
LABEL_109:
        v133 = (__int64)DispValFromSkill;
      }
      else
      {
        v133 = v129;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v128[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 classStatisticsInfos,
                                                                 0);
          goto LABEL_109;
        }
      }
      if ( !v126 )
        sub_1C7BD40(DispValFromSkill, v130);
      v134 = v126->max_length;
      if ( v134 )
      {
        if ( (int)v134 >= 1 )
        {
          v135 = 0;
          v136 = (unsigned int)v126->max_length;
          do
          {
            if ( !v133 )
              sub_1C7BD40(DispValFromSkill, v130);
            if ( v135 >= *(unsigned int *)(v133 + 24) )
              sub_1C7BD48(DispValFromSkill);
            v137 = (char *)v126 + 4 * v135;
            v138 = *(_DWORD *)(v133 + 32 + 4 * v135++);
            *((_DWORD *)v137 + 8) += v138;
          }
          while ( v136 != v135 );
        }
      }
      else
      {
        v126 = (System_Int32_array *)v133;
      }
      v139 = v128[2].monitor;
      if ( !v139 )
        sub_1C7BD40(DispValFromSkill, v130);
      v140 = v139[20];
      if ( v140 > v127 )
        v127 = v140;
      goto LABEL_102;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v208,
    (const MethodInfo_35F1210 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v172 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v172 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v172->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v172->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v172);
      v172 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v174 = (Il2CppObject *)v172->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v174, Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, 0);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__28_0,
      (int32_t)_9__28_0,
      v176,
      v177,
      v178,
      v179,
      v180,
      v181);
  }
  v182 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v203,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_319F4D8 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v183 = ClassBoardBaseDialog___c_TypeInfo;
  v184 = v182;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v183 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v183->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v183->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v183);
      v183 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v186 = (Il2CppObject *)v183->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1C7BD34(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_1, v186, Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, 0);
    v187 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v187->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v187->__9__28_1, (int32_t)_9__28_1, v188, v189, v190, v191, v192, v193);
  }
  v194 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v184,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_31AE27C *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v194, (const MethodInfo_31B3E80 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4CF219E & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF219E = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectObj, 0, 0) )
  {
    gameObject = this->fields.effectObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  itemListObj = (UnityEngine_Object_o *)this->fields.itemListObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemListObj, 0, 0) )
  {
    gameObject = this->fields.itemListObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  conditionListObj = (UnityEngine_Object_o *)this->fields.conditionListObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(conditionListObj, 0, 0) )
  {
    gameObject = this->fields.conditionListObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_20:
    sub_1C7BD40(gameObject, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void ClassBoardBaseDialog__OpenItemInfoListWindow(
        ClassBoardBaseDialog_o *this,
        System_Action_o *closedAction,
        const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_object__o *Item; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  __int64 v22; // x21
  __int64 v23; // x22
  unsigned __int64 v24; // x24
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v28; // x23

  if ( (byte_4CF21A8 & 1) == 0 )
  {
    sub_1C7BAE8(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    sub_1C7BAE8(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
    sub_1C7BAE8(&int___TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C7BAE8(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__);
    sub_1C7BAE8(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
    byte_4CF21A8 = 1;
  }
  v5 = sub_1C7BD34(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = closedAction;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)closedAction, v14, v15, v16, v17, v18, v19);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_317C204 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v22 = sub_1C7BB90(int___TypeInfo, (unsigned int)size);
    v23 = sub_1C7BB90(int___TypeInfo, (unsigned int)size);
    if ( (int)size >= 1 )
    {
      v24 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v24,
                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v22 )
          break;
        if ( v24 >= *(unsigned int *)(v22 + 24) )
          goto LABEL_23;
        *(_DWORD *)(v22 + 32 + 4 * v24) = HIDWORD(Item[2].fields._items);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v24,
                                                              (const MethodInfo_383EB2C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v23 )
          break;
        if ( v24 >= *(unsigned int *)(v23 + 24) )
LABEL_23:
          sub_1C7BD48(Item);
        *(_DWORD *)(v23 + 32 + 4 * v24++) = Item[2].fields._syncRoot;
        if ( size == v24 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1C7BD40(Item, v7);
    }
LABEL_17:
    v25 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1C7BB00(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v26 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v28 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C7BD34(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v28,
      (Il2CppObject *)v5,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow(
      (CommonUI_o *)Instance,
      (System_Int32_array *)v22,
      (System_Int32_array *)v23,
      v28,
      0,
      0);
  }
}


System_String_o *ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  System_String_o *v5; // x20

  if ( (byte_4CF21A5 & 1) == 0 )
  {
    sub_1C7BAE8(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4CF21A5 = 1;
  }
  v5 = FuncDispMaster__ReplaceFractionFormat(text, funcVals, 0);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__ApplyGivenValues(v5, funcVals, 0);
}


void ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemIconComponentList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF21A3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    byte_4CF21A3 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      itemIconComponentList,
      (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C7BD40(0, v4);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v5.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
  }
}


void ClassBoardBaseDialog__SetEffectScrollInitPos(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *effectScrollView; // x8
  ClassBoardBaseDialog_o *v3; // x19
  float v4; // s0

  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_8;
  v3 = this;
  this = (ClassBoardBaseDialog_o *)effectScrollView->fields.verticalScrollBar;
  if ( !this )
    goto LABEL_8;
  v4 = 0.0;
  if ( effectScrollView->fields.contentPivot == 4 )
    v4 = 0.5;
  UIProgressBar__set_value((UIProgressBar_o *)this, v4, 0);
  this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView;
  if ( !this
    || (UIScrollView__UpdatePosition((UIScrollView_o *)this, 0),
        (this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView) == 0) )
  {
LABEL_8:
    sub_1C7BD40(this, method);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0);
}


void ClassBoardBaseDialog__SetQpLabel(ClassBoardBaseDialog_o *this, int32_t needNum, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  System_String_c *klass; // x23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  System_String_o *v10; // x0
  System_String_o *v11; // x22
  Il2CppObject *v12; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v15; // x21
  Il2CppObject *v16; // x0
  System_String_c *v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CF21A1 & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&long_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3383/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/);
    sub_1C7BAE8(&StringLiteral_3385/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/);
    sub_1C7BAE8(&StringLiteral_3382/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/);
    sub_1C7BAE8(&StringLiteral_3384/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/);
    sub_1C7BAE8(&StringLiteral_3380/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/);
    byte_4CF21A1 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_19;
  klass = SelfUserGame[4].klass;
  itemQpLabel = this->fields.itemQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( (__int64)klass >= needNum )
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3382/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0);
    itemQpNum = this->fields.itemQpNum;
    v10 = (System_String_o *)StringLiteral_3384/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3383/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0);
    itemQpNum = this->fields.itemQpNum;
    v10 = (System_String_o *)StringLiteral_3385/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/;
  }
  v11 = LocalizationManager__Get(v10, 0);
  LODWORD(v17) = needNum;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17);
  SelfUserGame = System_String__Format(v11, v12, 0);
  if ( !itemQpNum )
    goto LABEL_19;
  UILabel__set_text(itemQpNum, SelfUserGame, 0);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v15 = LocalizationManager__Get((System_String_o *)StringLiteral_3384/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0);
  v17 = klass;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v17);
  SelfUserGame = System_String__Format(v15, v16, 0);
  if ( !itemHaveQpNum
    || (UILabel__set_text(itemHaveQpNum, SelfUserGame, 0),
        (SelfUserGame = (System_String_o *)this->fields.itemQpObj) == 0)
    || (SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)SelfUserGame,
                                            0)) == 0 )
  {
LABEL_19:
    sub_1C7BD40(SelfUserGame, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SelfUserGame, 1, 0);
}


void ClassBoardBaseDialog__SetUpEffectDetail(
        ClassBoardBaseDialog_o *this,
        IClassBoardSquareModel_o *squareModel,
        float disableScrollViewSize,
        float disableScrollViewPosY,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *effectObj; // x0
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v13; // x22
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  int32_t v17; // w0
  IClassBoardSquareModel_c *v18; // x8
  int32_t v19; // w23
  __int64 v20; // x9
  int32_t *v21; // x10
  __int64 v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  ClassBoardSquareEntity_o *v29; // x23
  UnityEngine_GameObject_o *v30; // x22
  const MethodInfo *v31; // x4
  float v32; // s11
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  UnityEngine_GameObject_o *v37; // x22
  Il2CppObject *Component_object; // x0
  __int64 v39; // x1
  IClassBoardSquareModel_c *v40; // x8
  System_String_o *monitor; // x25
  System_String_o *v42; // x26
  int32_t v43; // w24
  __int64 v44; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v45; // x23
  int32_t *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  const MethodInfo *v50; // x5
  float v51; // s10
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v54; // x0
  __int64 v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4CF219F & 1) == 0 )
  {
    sub_1C7BAE8(&ClassBoardSquareEntity___TypeInfo);
    sub_1C7BAE8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    sub_1C7BAE8(&IClassBoardSquareModel_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF219F = 1;
  }
  entity = 0;
  memset(&v57, 0, sizeof(v57));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_54;
  klass = squareModel->klass;
  v13 = (ClassBoardSquareMaster_o *)effectObj;
  v14 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_11;
    }
    v16 = (__int64)&klass->vtable[*p_offset + 1];
  }
  else
  {
LABEL_11:
    v16 = sub_1C51E70(squareModel, IClassBoardSquareModel_TypeInfo, 1);
  }
  v17 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v16)(squareModel, *(_QWORD *)(v16 + 8));
  v18 = squareModel->klass;
  v19 = v17;
  v20 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    v21 = &v18->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      v21 += 4;
      if ( !v20 )
        goto LABEL_17;
    }
    v22 = (__int64)&v18->vtable[*v21];
  }
  else
  {
LABEL_17:
    v22 = sub_1C51E70(squareModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v22)(
                                            squareModel,
                                            *(_QWORD *)(v22 + 8));
  if ( !v13 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v13, &entity, v19, (int32_t)effectObj, 0);
  effectObj = (UnityEngine_GameObject_o *)sub_1C7BB90(ClassBoardSquareEntity___TypeInfo, 1);
  if ( !effectObj )
    goto LABEL_54;
  v29 = entity;
  v30 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1C7BC24(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v55 = sub_1C7BD64(0);
      sub_1C7BC10(v55, 0);
    }
  }
  if ( !LODWORD(v30[1].klass) )
    sub_1C7BD48(effectObj);
  v30[1].monitor = v29;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v30[1].monitor, (int32_t)v29, v23, v24, v25, v26, v27, v28);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v30,
                                            0,
                                            0,
                                            classStatisticsInfos,
                                            v31);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v32 = 0.0;
  v57 = v56;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v57.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v35 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v37 = (UnityEngine_GameObject_o *)v35;
    if ( !v35 )
      sub_1C7BD40(0, v36);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v35,
                         (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1C7BD40(Component_object, v39);
    v40 = squareModel->klass;
    v42 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v43 = (int32_t)current[2].monitor;
    v44 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
    v45 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)&squareModel->klass->_2.rank )
    {
      v46 = &v40->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v46 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v44;
        v46 += 4;
        if ( !v44 )
          goto LABEL_35;
      }
      v47 = (__int64)&v40->vtable[*v46 + 7];
    }
    else
    {
LABEL_35:
      v47 = sub_1C51E70(squareModel, IClassBoardSquareModel_TypeInfo, 7);
    }
    v48 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v47)(squareModel, *(_QWORD *)(v47 + 8));
    if ( !v45 )
      sub_1C7BD40(v48, v49);
    v51 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v45, v42, monitor, v43, v48, v50);
    GameObjectExtensions__SetParent_36529040(v37, this->fields.effectDetailParent, 0);
    if ( !byte_4CE7E5E )
    {
      sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
      byte_4CE7E5E = 1;
    }
    GameObjectExtensions__SetLocalScale(v37, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    GameObjectExtensions__SetLocalPosition_36523428(v37, 0.0, -v32, 0.0, 0);
    UnityEngine_GameObject__SetActive(v37, 1, 0);
    v32 = v32 + v51;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_54;
  effectObj = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, Il2CppClass *, float, float))effectObj->klass[1]._1.declaringType)(
                                            effectObj,
                                            0,
                                            effectObj->klass[1]._1.parent,
                                            0.0,
                                            0.0);
  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_54;
  effectObj = (UnityEngine_GameObject_o *)effectScrollView->fields.verticalScrollBar;
  if ( !effectObj )
    goto LABEL_54;
  UIProgressBar__set_value((UIProgressBar_o *)effectObj, 0.0, 0);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_54;
  UIScrollView__UpdatePosition((UIScrollView_o *)effectObj, 0);
  if ( disableScrollViewSize > 0.0 && v32 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0);
      if ( effectObj )
      {
        v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0);
        GameObjectExtensions__SetLocalPositionY(v54, disableScrollViewPosY, 0);
        return;
      }
    }
LABEL_54:
    sub_1C7BD40(effectObj, squareModel);
  }
}


bool ClassBoardBaseDialog__SetUpItemList(
        ClassBoardBaseDialog_o *this,
        System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *itemList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemInfoLabel; // x21
  UILabel_o *v6; // x21
  System_String_o *itemListObj; // x0
  __int64 v8; // x1
  UnityEngine_Object_o *itemQpObj; // x21
  System_Collections_Generic_List_object__o *v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v18; // x9
  int32_t *p_offset; // x10
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x20
  _BOOL4 v24; // w27
  char v25; // w26
  _BOOL4 i; // w23
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x24
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  int32_t v42; // w0
  __int64 v43; // x8
  int32_t v44; // w23
  __int64 v45; // x9
  IClassBoardItemModel_c **v46; // x10
  __int64 v47; // x0
  int32_t v48; // w24
  Il2CppObject *Instance; // x0
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v52; // x1
  _BOOL8 isQP; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  Il2CppObject *itemIcon; // x25
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  UIGrid_o *itemIconListGrid; // x26
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x25
  __int64 v64; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  System_Collections_Generic_List_object__o *v71; // x0
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x8
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_4CF21A0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
    sub_1C7BAE8(&IClassBoardItemModel_TypeInfo);
    sub_1C7BAE8(&System_IDisposable_TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1C7BAE8(&System_Collections_IEnumerator_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_3378/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/);
    byte_4CF21A0 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0, 0) )
  {
    v6 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3378/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0);
    if ( !v6 )
      goto LABEL_86;
    UILabel__set_text(v6, itemListObj, 0);
  }
  itemQpObj = (UnityEngine_Object_o *)this->fields.itemQpObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemQpObj, 0, 0) )
  {
    itemListObj = (System_String_o *)this->fields.itemQpObj;
    if ( !itemListObj )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 0, 0);
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.itemIconComponentList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0);
  if ( !itemList )
    goto LABEL_86;
  klass = itemList->klass;
  v18 = *(unsigned __int16 *)&itemList->klass->_2.rank;
  if ( *(_WORD *)&itemList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v18;
      p_offset += 4;
      if ( !v18 )
        goto LABEL_21;
    }
    v20 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v20 = sub_1C51E70(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))v20)(
          itemList,
          *(_QWORD *)(v20 + 8));
  v23 = v21;
  v24 = 0;
  v25 = 1;
LABEL_24:
  for ( i = v24; ; i = 1 )
  {
    if ( !v23 )
      sub_1C7BD40(v21, v22);
    v27 = *(_QWORD *)v23;
    v24 = i;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_30;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_30:
      v30 = sub_1C51E70(v23, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v23, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v23;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v33 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_37;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_37:
      v34 = sub_1C51E70(v23, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v23, *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_1C7BD40(0, v36);
    v38 = *(_QWORD *)v35;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v40 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_44;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_44:
      v41 = sub_1C51E70(v35, IClassBoardItemModel_TypeInfo, 0);
    }
    v42 = (*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v37, *(_QWORD *)(v41 + 8));
    v43 = *(_QWORD *)v37;
    v44 = v42;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v37 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v37 + 302LL) )
    {
      v46 = (IClassBoardItemModel_c **)(*(_QWORD *)(v43 + 176) + 8LL);
      while ( *(v46 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v45;
        v46 += 2;
        if ( !v45 )
          goto LABEL_50;
      }
      v47 = v43 + 16LL * (*(_DWORD *)v46 + 1) + 312;
    }
    else
    {
LABEL_50:
      v47 = sub_1C51E70(v37, IClassBoardItemModel_TypeInfo, 1);
    }
    v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v50);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1C7BD40(0, v52);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v44, 0);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v25 & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v57 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_31FBEB0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v57;
        if ( !v57 )
          sub_1C7BD40(0, v58);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v57, 0);
        if ( !itemIconListGrid )
          sub_1C7BD40(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0);
      }
      if ( !itemIcon )
        sub_1C7BD40(isQP, v54);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0);
      if ( !byte_4CE7E59 )
      {
        sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E59 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      if ( !byte_4CE7E5E )
      {
        sub_1C7BAE8(&UnityEngine_Vector3_TypeInfo);
        byte_4CE7E5E = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v63 = Component_object;
      if ( !Component_object )
        sub_1C7BD40(0, v62);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v44, v48, 0);
      v71 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1C7BD40(0, v64);
      items = v71->fields._items;
      v73 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v71->fields._version;
      if ( !items )
        sub_1C7BD40(v71, v64);
      size = v71->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v71,
          v63,
          *(const MethodInfo_383EDFC **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        v71->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v63;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v75 + 4), (int32_t)v63, v65, v66, v67, v68, v69, v70);
      }
      v25 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v48, v55);
  }
  v76 = *(_QWORD *)v23;
  v77 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      --v77;
      v78 += 4;
      if ( !v77 )
        goto LABEL_78;
    }
    v79 = v76 + 16LL * *v78 + 312;
  }
  else
  {
LABEL_78:
    v79 = sub_1C51E70(v23, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v79)(v23, *(_QWORD *)(v79 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1C7BD40(itemListObj, v8);
  ((void (__fastcall *)(System_String_o *, const MethodInfo *))itemListObj->klass->vtable._8_Equals.methodPtr)(
    itemListObj,
    itemListObj->klass->vtable._8_Equals.method);
  return i;
}


void ClassBoardBaseDialog__SetUpLockReleaseCondition(
        ClassBoardBaseDialog_o *this,
        ClassBoardCondData_o condData,
        const MethodInfo *method)
{
  __int64 v3; // x20
  UnityEngine_GameObject_o *conditionListObj; // x0
  System_Collections_Generic_List_int__o *v6; // x21
  struct System_Int32_array *v7; // x8
  _QWORD *v8; // x9
  __int64 v9; // x10
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v11; // x20
  __int64 v12; // x22
  __int64 v13; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v15; // x10
  __int64 size; // x11
  DataMasterBase_TMaster__TEntity__PKType__o *v17; // x20
  char v18; // w23
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x22
  MasterMissionListViewItem_o *v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  Il2CppObject *ComponentInChildren_object__51801640; // x0
  __int64 v26; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  UIGrid_o *v35; // x21
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_Transform_o *v37; // x0
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_4CF21A2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C7BAE8(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&MasterMissionListViewItem_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Object_Instantiate_Transform___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF21A2 = 1;
  }
  entity = 0;
  memset(&v39, 0, sizeof(v39));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_58;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0);
      if ( !conditionListObj )
        goto LABEL_58;
      klass = conditionListObj[1].klass;
      v11 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v12 = 0;
        do
        {
          if ( (unsigned int)v12 >= (unsigned int)klass )
            sub_1C7BD48(conditionListObj);
          v13 = *((_QWORD *)&v11[1].monitor + v12);
          if ( !v13 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v13 + 28) - 23) <= 1 )
          {
            if ( !v6 )
              goto LABEL_58;
            *(_QWORD *)&condData.fields.Type = *(unsigned int *)(v13 + 32);
            items = v6->fields._items;
            v15 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_58;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                condData.fields.Type,
                *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
              klass = v11[1].klass;
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size] = condData.fields.Type;
            }
          }
        }
        while ( (int)++v12 < (int)klass );
      }
    }
  }
  else
  {
    if ( !v6 )
      goto LABEL_58;
    v7 = v6->fields._items;
    v8 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !v7 )
      goto LABEL_58;
    v9 = v6->fields._size;
    if ( (unsigned int)v9 >= LODWORD(v7->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v6,
        SHIDWORD(v3),
        *(const MethodInfo_3821DD8 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = v9 + 1;
      v7->m_Items[v9] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v6 )
    goto LABEL_58;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v6,
    (const MethodInfo_38228AC *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v18 = 1;
  v39 = v38;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v39,
            (const MethodInfo_35BA180 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v19 )
      break;
    if ( !v17 )
      sub_1C7BD40(v19, v20);
    DataMasterBase_object__object__int___TryGetEntity(
      v17,
      &entity,
      v39.fields._current,
      (const MethodInfo_342E348 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v21 = entity;
    if ( entity )
    {
      v22 = (MasterMissionListViewItem_o *)sub_1C7BD34(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v22, (EventMissionEntity_o *)v21, 2, 0);
      if ( !v22 )
        sub_1C7BD40(v23, v24);
      ComponentInChildren_object__51801640 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, const MethodInfo *))v22->klass->vtable._6_CheckMissionCond.methodPtr)(
                                                               v22,
                                                               v22->klass->vtable._6_CheckMissionCond.method);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v18 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1C7BD40(ComponentInChildren_object__51801640, v26);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1C7BD40(0, v29);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v33 = UnityEngine_Object__Instantiate_object__52412380(
                Parent,
                transform,
                (const MethodInfo_31FBFDC *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v33 )
          sub_1C7BD40(0, v34);
        ComponentInChildren_object__51801640 = UnityEngine_Component__GetComponentInChildren_object__51801640(
                                                 (UnityEngine_Component_o *)v33,
                                                 (const MethodInfo_3166E28 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__51801640;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1C7BD40(ComponentInChildren_object__51801640, v26);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, void *))classBoardMissionListViewItemDraw->klass[1]._1.image)(
        classBoardMissionListViewItemDraw,
        v22,
        1,
        0,
        classBoardMissionListViewItemDraw->klass[1]._1.gc_desc);
      v35 = this->fields.conditionGrid;
      v36 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0);
      v37 = GameObjectExtensions__GetParent(v36, 0);
      if ( !v35 )
        sub_1C7BD40(v37, v37);
      UIGrid__AddChild(v35, v37, 0);
      v18 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v39,
    (const MethodInfo_35BA17C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))conditionListObj->klass[1]._1.element_class)(
    conditionListObj,
    conditionListObj->klass[1]._1.castClass);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, Il2CppClass *, float, float))conditionListObj->klass[1]._1.declaringType)(
    conditionListObj,
    0,
    conditionListObj->klass[1]._1.parent,
    0.0,
    0.0);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, Il2CppClass *))conditionListObj->klass[1]._1.element_class)(
    conditionListObj,
    1,
    conditionListObj->klass[1]._1.castClass);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  UIScrollView__UpdatePosition((UIScrollView_o *)conditionListObj, 0);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_58;
  conditionListObj = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                   (UnityEngine_Component_o *)conditionListObj,
                                                   0);
  if ( !conditionListObj )
    goto LABEL_58;
  if ( UnityEngine_Transform__get_childCount((UnityEngine_Transform_o *)conditionListObj, 0) != 1 )
    return;
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)conditionListObj, 0, 0),
        (conditionListObj = this->fields.missionScrollBar) == 0) )
  {
LABEL_58:
    sub_1C7BD40(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0);
}


void ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4CF21A6 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF21A6 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0, 0) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_1C7BD40(0, v4);
    UIScrollView__UpdateScrollbars(v5, 0);
  }
}


void ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CF21AB & 1) == 0 )
  {
    sub_1C7BAE8(&ClassBoardBaseDialog___c_TypeInfo);
    byte_4CF21AB = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v1;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void ClassBoardBaseDialog___c___ctor(ClassBoardBaseDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_0(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.priority;
}


int32_t ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C7BD40(this, 0);
  return x->fields.squareId;
}


void ClassBoardBaseDialog___c__DisplayClass32_0___ctor(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardBaseDialog___c__DisplayClass32_0___OpenItemInfoListWindow_b__0(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_1C7BD40(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}