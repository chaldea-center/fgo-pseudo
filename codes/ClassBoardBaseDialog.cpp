void ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_593C3CF & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_593C3CF = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardBaseDialog__Close(ClassBoardBaseDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSquare; // x21
  __int64 v6; // x1
  ClassBoardSquare_o *v7; // x0

  if ( (byte_593C3CC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C3CC = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, callback);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0, 0) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_21FFECC(0, v6);
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

  if ( (byte_593C3CE & 1) == 0 )
  {
    sub_21FFC50(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C3CE = 1;
  }
  v4 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v7);
  CommonUI__CloseItemLinkInfoListWindow((CommonUI_o *)Instance, closedAction, 0);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *ClassBoardBaseDialog__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x21
  System_Int32_array *IsPassive; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x28
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v13; // x9
  ClassBoardSquareEntity_o *v14; // x29
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppObject *p_obj; // x21
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v19; // x19
  SkillLvEntity_o *v20; // x24
  System_Collections_Generic_List_object__o *v21; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct System_Object_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_object__o *v33; // x23
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x24
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  Il2CppObject *v39; // x27
  __int64 v40; // x1
  System_Collections_Generic_List_object__o *v41; // x19
  Il2CppObject *v42; // x0
  FuncDispEntity_o *v43; // x19
  System_Collections_Generic_List_object__o *v44; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v45; // x25
  __int64 v46; // x0
  __int64 v47; // x1
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  struct System_Object_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  Il2CppClass **v57; // x0
  __int64 v58; // x0
  __int64 v59; // x1
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v68; // w27
  int32_t v69; // w19
  int32_t v70; // w26
  int32_t v71; // w28
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v72; // x24
  __int64 v73; // x0
  __int64 v74; // x1
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  struct System_Object_array *v85; // x8
  _QWORD *v86; // x9
  __int64 v87; // x10
  Il2CppClass **v88; // x0
  System_Int32_array *v89; // x19
  System_String_o *Detail; // x0
  const MethodInfo *v91; // x2
  System_String_o *v92; // x23
  System_String_o *Name; // x0
  int32_t priority; // w19
  int32_t skillType; // w26
  int32_t id; // w24
  int32_t iconId; // w25
  System_String_o *v98; // x27
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v99; // x21
  System_String_o *v100; // x2
  System_String_o *v101; // x3
  int32_t v102; // w4
  int32_t v103; // w5
  bool v104; // w6
  bool v105; // w7
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  _BOOL8 v110; // x0
  __int64 v111; // x1
  Il2CppObject *value; // x23
  System_String_o *data; // x20
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  Il2CppObject *v116; // x0
  __int64 v117; // x1
  _DWORD *v118; // x8
  __int64 v119; // x1
  Il2CppObject *v120; // x0
  __int64 v121; // x1
  Il2CppObject *v122; // x0
  __int64 v123; // x1
  Il2CppClass *v124; // x8
  System_Int32_array *v125; // x27
  int32_t v126; // w25
  Il2CppObject *v127; // x19
  System_Int32_array *DispValFromSkill; // x0
  __int64 v129; // x1
  _DWORD *v130; // x8
  il2cpp_array_size_t max_length; // x9
  unsigned __int64 v132; // x8
  __int64 v133; // x9
  char *v134; // x11
  int32_t v135; // w13
  _DWORD *v136; // x8
  int32_t v137; // w8
  Il2CppObject *v138; // x0
  __int64 v139; // x1
  const MethodInfo *v140; // x2
  Il2CppClass *v141; // x8
  System_String_o *v142; // x26
  Il2CppObject *v143; // x0
  __int64 v144; // x1
  _DWORD *v145; // x8
  int32_t v146; // w27
  Il2CppObject *v147; // x0
  __int64 v148; // x1
  _DWORD *v149; // x8
  int32_t v150; // w28
  Il2CppObject *v151; // x0
  __int64 v152; // x1
  _DWORD *v153; // x8
  int32_t v154; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v155; // x21
  __int64 v156; // x0
  __int64 v157; // x1
  System_String_o *v158; // x2
  System_String_o *v159; // x3
  int32_t v160; // w4
  int32_t v161; // w5
  bool v162; // w6
  bool v163; // w7
  struct System_Object_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  Il2CppClass **v167; // x0
  __int64 v168; // x1
  ClassBoardBaseDialog___c_c *v169; // x0
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v172; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v173; // x0
  System_String_o *v174; // x2
  System_String_o *v175; // x3
  int32_t v176; // w4
  int32_t v177; // w5
  bool v178; // w6
  bool v179; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v180; // x0
  __int64 v181; // x1
  ClassBoardBaseDialog___c_c *v182; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v183; // x19
  struct ClassBoardBaseDialog___c_StaticFields *v184; // x9
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v186; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v187; // x0
  System_String_o *v188; // x2
  System_String_o *v189; // x3
  int32_t v190; // w4
  int32_t v191; // w5
  bool v192; // w6
  bool v193; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v194; // x0
  int32_t v197; // [xsp+14h] [xbp-16Ch]
  ClassBoardCommandSpellMaster_o *v198; // [xsp+18h] [xbp-168h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-160h]
  ClassBoardSquareEntity_array *v200; // [xsp+28h] [xbp-158h]
  unsigned __int64 v201; // [xsp+30h] [xbp-150h]
  System_Collections_Generic_Dictionary_object__object__o *v202; // [xsp+38h] [xbp-148h]
  System_Collections_Generic_List_object__o *v203; // [xsp+40h] [xbp-140h]
  FuncDispMaster_o *v204; // [xsp+48h] [xbp-138h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v206; // [xsp+68h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v207; // [xsp+90h] [xbp-F0h] BYREF
  Il2CppObject *v208; // [xsp+A8h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v209; // [xsp+B0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v210; // [xsp+D8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v211; // [xsp+E0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v212; // [xsp+100h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+108h] [xbp-78h] BYREF
  SkillLvEntity_o *v214; // [xsp+110h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+118h] [xbp-68h] BYREF

  if ( (byte_593C3C9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_SkillMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_21FFC50(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_21FFC50(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_21FFC50(&Method_System_String_Join_int___);
    sub_21FFC50(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__);
    sub_21FFC50(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__);
    sub_21FFC50(&ClassBoardBaseDialog___c_TypeInfo);
    sub_21FFC50(&StringLiteral_869/*","*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593C3C9 = 1;
  }
  v214 = 0;
  entity = 0;
  v212 = 0;
  entitys = 0;
  memset(&v211, 0, sizeof(v211));
  v210 = 0;
  memset(&v209, 0, sizeof(v209));
  v208 = 0;
  memset(&v207, 0, sizeof(v207));
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_154;
  if ( !openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v7;
  v197 = dispType;
  v203 = v7;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v198 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v202 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v202,
    (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length_low = LODWORD(openedSquareArray->max_length);
  if ( (int)max_length_low >= 1 )
  {
    v13 = 0;
    v200 = openedSquareArray;
    v204 = (FuncDispMaster_o *)v11;
    while ( 1 )
    {
      if ( v13 >= max_length_low )
        sub_21FFED4(IsPassive);
      v201 = v13;
      v14 = openedSquareArray->m_Items[v13];
      v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v15,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v15;
      if ( !v14 )
        goto LABEL_154;
      IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsPassive(v14, 0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        break;
      if ( dispType == 2 )
        goto LABEL_62;
      IsPassive = (System_Int32_array *)Master_object;
      if ( !Master_object )
        goto LABEL_154;
      IsPassive = (System_Int32_array *)DataMasterBase_object__object__int___TryGetEntity(
                                          Master_object,
                                          &entity,
                                          v14->fields.targetId,
                                          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v10 )
        goto LABEL_154;
      IsPassive = (System_Int32_array *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)v10,
                                          &v214,
                                          v14->fields.targetId,
                                          v14->fields.upSkillLv,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (System_Int32_array *)v214;
        if ( !v214 )
          goto LABEL_154;
        IsPassive = (System_Int32_array *)SkillLvEntity__IsContainsTurnOrCountBuff(v214, 0);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v214 || !v11 )
        goto LABEL_154;
      IsPassive = (System_Int32_array *)FuncDispMaster__IsContainFuncIds(
                                          (FuncDispMaster_o *)v11,
                                          &v212,
                                          v214->fields.funcId,
                                          v14->fields.classBoardBaseId,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( !v214 )
          goto LABEL_154;
        IsPassive = (System_Int32_array *)System_String__Join_int_(
                                            (System_String_o *)StringLiteral_869/*","*/,
                                            (System_Collections_Generic_IEnumerable_T__o *)v214->fields.funcId,
                                            (const MethodInfo_3957568 *)Method_System_String_Join_int___);
        if ( !v202 )
          goto LABEL_154;
        p_obj = &IsPassive->obj;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v202,
                &IsPassive->obj,
                (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v17,
            (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v202,
            p_obj,
            (Il2CppObject *)v17,
            (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v202,
                 p_obj,
                 (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v19 = v212;
        v20 = v214;
        v21 = (System_Collections_Generic_List_object__o *)Item;
        v22 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_21FFEBC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v22, v19, v20, 0, v14, 0);
        if ( !v21 )
          goto LABEL_154;
        items = v21->fields._items;
        v30 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_154;
        size = v21->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v22,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
        }
        else
        {
          v32 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v32[4] = (Il2CppClass *)v22;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 4), (int32_t)v22, v23, v24, v25, v26, v27, v28);
        }
LABEL_61:
        dispType = v197;
        goto LABEL_62;
      }
      if ( !v214 )
        goto LABEL_154;
      IsPassive = SkillLvMaster__GetDispValFromSkill(
                    (SkillLvMaster_o *)v10,
                    v214->fields.skillId,
                    v214->fields.lv,
                    classStatisticsInfos,
                    0);
      if ( !v214 )
        goto LABEL_154;
      v89 = IsPassive;
      Detail = SkillLvEntity__getDetail(v214, 0, 1, 0);
      IsPassive = (System_Int32_array *)ClassBoardBaseDialog__ReplaceFractionFormat(Detail, v89, v91);
      if ( !entity )
        goto LABEL_154;
      v92 = (System_String_o *)IsPassive;
      Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
      priority = v14->fields.priority;
      skillType = v14->fields.skillType;
      id = v14->fields.id;
      iconId = v14->fields.iconId;
      v98 = Name;
      v99 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_21FFEBC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v99,
        v98,
        v92,
        id,
        priority,
        iconId,
        skillType,
        0);
      if ( !v203 )
        goto LABEL_154;
      v106 = v203->fields._items;
      dispType = v197;
      v107 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v203->fields._version;
      if ( !v106 )
        goto LABEL_154;
      v108 = v203->fields._size;
      if ( (unsigned int)v108 >= LODWORD(v106->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v203,
          (Il2CppObject *)v99,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
      }
      else
      {
        v109 = &v106->obj.klass + v108;
        v203->fields._size = v108 + 1;
        v109[4] = (Il2CppClass *)v99;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v109 + 4), (int32_t)v99, v100, v101, v102, v103, v104, v105);
      }
LABEL_62:
      openedSquareArray = v200;
      max_length_low = LODWORD(v200->max_length);
      v13 = v201 + 1;
      if ( (int)v201 + 1 >= (int)max_length_low )
        goto LABEL_80;
    }
    IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsCommandSpell(v14, 0);
    if ( dispType == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (System_Int32_array *)v198;
    if ( !v198 )
      goto LABEL_154;
    IsPassive = (System_Int32_array *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v198,
                                        &entitys,
                                        v14->fields.targetId,
                                        v14->fields.upSkillLv,
                                        0);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v33 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v33,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (System_Int32_array *)entitys;
    if ( !entitys )
      goto LABEL_154;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v206,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    v211.fields._current = v206.fields._current.fields.key;
    *(_OWORD *)&v211.fields._list = *(_OWORD *)&v206.fields._dictionary;
    v206.fields._dictionary = 0;
    *(_QWORD *)&v206.fields._version = &v211;
    while ( 1 )
    {
      v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v211,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v11 = (Il2CppObject *)v204;
      if ( !v34 )
        break;
      current = v211.fields._current;
      if ( !v211.fields._current )
        sub_21FFECC(v34, v35);
      if ( !v204 )
        sub_21FFECC(v34, v35);
      if ( FuncDispMaster__IsContainFuncIds(
             v204,
             &v210,
             (System_Int32_array *)v211.fields._current[3].klass,
             v14->fields.classBoardBaseId,
             0) )
      {
        v37 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_869/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_3957568 *)Method_System_String_Join_int___);
        if ( !v33 )
          sub_21FFECC(v37, v38);
        v39 = v37;
        if ( !System_Collections_Generic_List_object___Contains(
                v33,
                v37,
                (const MethodInfo_444FEC8 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v202 )
            sub_21FFECC(0, v40);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v202,
                  v39,
                  (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v41 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v41,
              (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v202,
              v39,
              (Il2CppObject *)v41,
              (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v42 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v202,
                  v39,
                  (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v43 = v210;
          v44 = (System_Collections_Generic_List_object__o *)v42;
          v45 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_21FFEBC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v45,
            v43,
            0,
            (ClassBoardCommandSpellEntity_o *)current,
            v14,
            0);
          if ( !v44
            || (v54 = v44->fields._items,
                v55 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
                ++v44->fields._version,
                !v54) )
          {
            sub_21FFECC(v46, v47);
          }
          v56 = v44->fields._size;
          if ( (unsigned int)v56 >= LODWORD(v54->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v44,
              (Il2CppObject *)v45,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v57 = &v54->obj.klass + v56;
            v44->fields._size = v56 + 1;
            v57[4] = (Il2CppClass *)v45;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v57 + 4), (int32_t)v45, v48, v49, v50, v51, v52, v53);
          }
          v85 = v33->fields._items;
          v86 = Method_System_Collections_Generic_List_string__Add__;
          ++v33->fields._version;
          if ( !v85 )
            sub_21FFECC(v58, v59);
          v87 = v33->fields._size;
          if ( (unsigned int)v87 >= LODWORD(v85->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v33,
              v39,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v86[4] + 192LL) + 112LL));
          }
          else
          {
            v88 = &v85->obj.klass + v87;
            v33->fields._size = v87 + 1;
            v88[4] = (Il2CppClass *)v39;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v88 + 4), (int32_t)v39, v60, v61, v62, v63, v64, v65);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v68 = v14->fields.priority;
        v69 = v14->fields.skillType;
        v71 = v14->fields.id;
        v70 = v14->fields.iconId;
        v72 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_21FFEBC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v72, klass, monitor, v71, v68, v70, v69, 0);
        if ( !v203
          || (v81 = v203->fields._items,
              v82 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
              ++v203->fields._version,
              !v81) )
        {
          sub_21FFECC(v73, v74);
        }
        v83 = v203->fields._size;
        if ( (unsigned int)v83 >= LODWORD(v81->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v203,
            (Il2CppObject *)v72,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
        }
        else
        {
          v84 = &v81->obj.klass + v83;
          v203->fields._size = v83 + 1;
          v84[4] = (Il2CppClass *)v72;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 4), (int32_t)v72, v75, v76, v77, v78, v79, v80);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v211,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_80:
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v9);
  DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Int32_array *)v202;
  if ( !v202 )
LABEL_154:
    sub_21FFECC(IsPassive, v9);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v206,
    v202,
    (const MethodInfo_3FCA89C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v209 = v206;
  while ( 1 )
  {
    v110 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v209,
             (const MethodInfo_4135514 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v110 )
      break;
    value = v209.fields._current.fields.value;
    if ( !v209.fields._current.fields.value )
      sub_21FFECC(v110, v111);
    if ( SLODWORD(v209.fields._current.fields.value[1].monitor) >= 1 )
    {
      data = (System_String_o *)StringLiteral_1/*""*/;
      v114 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v209.fields._current.fields.value,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v114 )
        sub_21FFECC(0, v115);
      if ( v114[1].monitor )
      {
        v116 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v116 )
          sub_21FFECC(0, v117);
        v118 = v116[1].monitor;
        if ( !v118 )
          sub_21FFECC(v116, v117);
        if ( !Master_object )
          sub_21FFECC(0, v117);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v208,
               v118[4],
               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v208 )
            sub_21FFECC(0, v119);
          data = SkillEntity__getName((SkillEntity_o *)v208, 0);
        }
      }
      else
      {
        v120 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v120 )
          sub_21FFECC(0, v121);
        if ( v120[2].klass )
        {
          v122 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v122 )
            sub_21FFECC(0, v123);
          v124 = v122[2].klass;
          if ( !v124 )
            sub_21FFECC(v122, v123);
          data = (System_String_o *)v124->_1.byval_arg.data;
        }
      }
      v125 = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v206,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v126 = 0;
      v207.fields._current = v206.fields._current.fields.key;
      *(_OWORD *)&v207.fields._list = *(_OWORD *)&v206.fields._dictionary;
      v206.fields._dictionary = 0;
      *(_QWORD *)&v206.fields._version = &v207;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v207,
                (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        v127 = v207.fields._current;
        DispValFromSkill = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 0);
        if ( !v127 )
          sub_21FFECC(DispValFromSkill, v129);
        v130 = v127[1].monitor;
        if ( v130 )
        {
          if ( !v10 )
            sub_21FFECC(DispValFromSkill, v129);
          DispValFromSkill = SkillLvMaster__GetDispValFromSkill(
                               (SkillLvMaster_o *)v10,
                               v130[4],
                               v130[5],
                               classStatisticsInfos,
                               0);
        }
        else if ( v127[2].klass )
        {
          DispValFromSkill = ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                               (ClassBoardCommandSpellEntity_o *)v127[2].klass,
                               classStatisticsInfos,
                               0);
        }
        if ( !v125 )
          sub_21FFECC(DispValFromSkill, v129);
        max_length = v125->max_length;
        if ( max_length )
        {
          if ( (int)max_length >= 1 )
          {
            v132 = 0;
            v133 = (unsigned int)v125->max_length;
            do
            {
              if ( !DispValFromSkill )
                sub_21FFECC(0, v129);
              if ( v132 >= LODWORD(DispValFromSkill->max_length) )
                sub_21FFED4(DispValFromSkill);
              v134 = (char *)v125 + 4 * v132;
              v135 = DispValFromSkill->m_Items[v132++];
              *((_DWORD *)v134 + 8) += v135;
            }
            while ( v133 != v132 );
          }
        }
        else
        {
          v125 = DispValFromSkill;
        }
        v136 = v127[2].monitor;
        if ( !v136 )
          sub_21FFECC(DispValFromSkill, v129);
        v137 = v136[20];
        if ( v137 > v126 )
          v126 = v137;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v207,
        (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
      v138 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)value,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v138 )
        sub_21FFECC(0, v139);
      v141 = v138[1].klass;
      if ( !v141 )
        sub_21FFECC(v138, v139);
      v142 = ClassBoardBaseDialog__ReplaceFractionFormat(*(System_String_o **)&v141->_1.byval_arg.bits, v125, v140);
      v143 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)value,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v143 )
        sub_21FFECC(0, v144);
      v145 = v143[2].monitor;
      if ( !v145 )
        sub_21FFECC(v143, v144);
      v146 = v145[5];
      v147 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)value,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v147 )
        sub_21FFECC(0, v148);
      v149 = v147[2].monitor;
      if ( !v149 )
        sub_21FFECC(v147, v148);
      v150 = v149[6];
      v151 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)value,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v151 )
        sub_21FFECC(0, v152);
      v153 = v151[2].monitor;
      if ( !v153 )
        sub_21FFECC(v151, v152);
      v154 = v153[14];
      v155 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_21FFEBC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v155, data, v142, v146, v126, v150, v154, 0);
      if ( !v203
        || (v164 = v203->fields._items,
            v165 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
            ++v203->fields._version,
            !v164) )
      {
        sub_21FFECC(v156, v157);
      }
      v166 = v203->fields._size;
      if ( (unsigned int)v166 >= LODWORD(v164->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v203,
          (Il2CppObject *)v155,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
      }
      else
      {
        v167 = &v164->obj.klass + v166;
        v203->fields._size = v166 + 1;
        v167[4] = (Il2CppClass *)v155;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v167 + 4), (int32_t)v155, v158, v159, v160, v161, v162, v163);
      }
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v209,
    (const MethodInfo_4135634 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v169 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !*(&ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo, v168);
    v169 = ClassBoardBaseDialog___c_TypeInfo;
  }
  static_fields = v169->static_fields;
  _9__28_0 = (System_Func_object__int__o *)static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !*(&v169->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v169, v168);
      static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v172 = (Il2CppObject *)static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v172, Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, 0);
    v173 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v173->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v173->__9__28_0,
      (int32_t)_9__28_0,
      v174,
      v175,
      v176,
      v177,
      v178,
      v179);
  }
  v180 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v203,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_3855CFC *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v182 = ClassBoardBaseDialog___c_TypeInfo;
  v183 = v180;
  if ( !*(&ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo, v181);
    v182 = ClassBoardBaseDialog___c_TypeInfo;
  }
  v184 = v182->static_fields;
  _9__28_1 = (System_Func_object__int__o *)v184->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !*(&v182->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v182, v181);
      v184 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    }
    v186 = (Il2CppObject *)v184->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_1, v186, Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, 0);
    v187 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v187->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v187->__9__28_1,
      (int32_t)_9__28_1,
      v188,
      v189,
      v190,
      v191,
      v192,
      v193);
  }
  v194 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v183,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_3867630 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v194, (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_593C3C3 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C3C3 = 1;
  }
  effectObj = (UnityEngine_Object_o *)this->fields.effectObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effectObj, 0, 0) )
  {
    gameObject = this->fields.effectObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  itemListObj = (UnityEngine_Object_o *)this->fields.itemListObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(itemListObj, 0, 0) )
  {
    gameObject = this->fields.itemListObj;
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
  conditionListObj = (UnityEngine_Object_o *)this->fields.conditionListObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
    sub_21FFECC(gameObject, v4);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  __int64 v22; // x21
  __int64 v23; // x22
  unsigned __int64 v24; // x24
  System_Collections_Generic_List_object__o *v25; // x8
  _QWORD *v26; // x0
  System_Reflection_MethodBase_o *v27; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v29; // x23

  if ( (byte_593C3CD & 1) == 0 )
  {
    sub_21FFC50(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
    sub_21FFC50(&int___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__);
    sub_21FFC50(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
    byte_593C3CD = 1;
  }
  v5 = sub_21FFEBC(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = closedAction;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)closedAction, v14, v15, v16, v17, v18, v19);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_3832C14 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v22 = sub_21FFD10(int___TypeInfo, (unsigned int)size);
    v23 = sub_21FFD10(int___TypeInfo, (unsigned int)size);
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
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v22 )
          break;
        if ( v24 >= *(unsigned int *)(v22 + 24) )
          goto LABEL_23;
        v25 = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        *(_DWORD *)(v22 + 32 + 4 * v24) = HIDWORD(Item[2].fields._items);
        if ( !v25 )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              v25,
                                                              v24,
                                                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v23 )
          break;
        if ( v24 >= *(unsigned int *)(v23 + 24) )
LABEL_23:
          sub_21FFED4(Item);
        *(_DWORD *)(v23 + 32 + 4 * v24++) = Item[2].fields._syncRoot;
        if ( size == v24 )
          goto LABEL_17;
      }
LABEL_22:
      sub_21FFECC(Item, v7);
    }
LABEL_17:
    v26 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v26 = (_QWORD *)sub_21FFC68(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v27 = (System_Reflection_MethodBase_o *)sub_21FFC34(v26, v26[4]);
    OverwriteAssetSoundName__PlaySystemSe(v27, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_21FFEBC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v29,
      (Il2CppObject *)v5,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow(
      (CommonUI_o *)Instance,
      (System_Int32_array *)v22,
      (System_Int32_array *)v23,
      v29,
      0,
      0);
  }
}


System_String_o *ClassBoardBaseDialog__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x20

  if ( (byte_593C3CA & 1) == 0 )
  {
    sub_21FFC50(&SkillDetailParamFormatResolver_TypeInfo);
    byte_593C3CA = 1;
  }
  v6 = FuncDispMaster__ReplaceFractionFormat(text, funcVals, 0);
  if ( !*(&SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo, v5);
  return SkillDetailParamFormatResolver__ApplyGivenValues(v6, funcVals, 0);
}


void ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemIconComponentList; // x0
  __int64 v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_593C3C8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    byte_593C3C8 = 1;
  }
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  memset(&v5, 0, sizeof(v5));
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      itemIconComponentList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_21FFECC(0, v4);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v5.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
  }
}


void ClassBoardBaseDialog__SetEffectScrollInitPos(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  struct UIScrollView_o *effectScrollView; // x8
  ClassBoardBaseDialog_o *v3; // x19
  float v4; // s0

  effectScrollView = this->fields.effectScrollView;
  if ( !effectScrollView )
    goto LABEL_9;
  v3 = this;
  this = (ClassBoardBaseDialog_o *)effectScrollView->fields.verticalScrollBar;
  if ( effectScrollView->fields.contentPivot == 4 )
  {
    v4 = 0.5;
    if ( !this )
      goto LABEL_9;
  }
  else
  {
    v4 = 0.0;
    if ( !this )
      goto LABEL_9;
  }
  UIProgressBar__set_value((UIProgressBar_o *)this, v4, 0);
  this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView;
  if ( !this
    || (UIScrollView__UpdatePosition((UIScrollView_o *)this, 0),
        (this = (ClassBoardBaseDialog_o *)v3->fields.effectScrollView) == 0) )
  {
LABEL_9:
    sub_21FFECC(this, method);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0);
}


void ClassBoardBaseDialog__SetQpLabel(ClassBoardBaseDialog_o *this, int32_t needNum, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  __int64 v6; // x1
  System_String_c *klass; // x23
  UILabel_o *itemQpLabel; // x21
  int v9; // w8
  UILabel_o *itemQpNum; // x21
  System_String_o *v11; // x0
  System_String_o *v12; // x22
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v17; // x21
  Il2CppObject *v18; // x0
  System_String_c *v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593C3C6 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3513/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/);
    sub_21FFC50(&StringLiteral_3515/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/);
    sub_21FFC50(&StringLiteral_3512/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/);
    sub_21FFC50(&StringLiteral_3514/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/);
    sub_21FFC50(&StringLiteral_3510/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/);
    byte_593C3C6 = 1;
  }
  SelfUserGame = (System_String_o *)UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_21;
  klass = SelfUserGame[4].klass;
  itemQpLabel = this->fields.itemQpLabel;
  v9 = *(&LocalizationManager_TypeInfo->_2.cctor_finished + 1);
  if ( (__int64)klass >= needNum )
  {
    if ( !v9 )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3512/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0);
    if ( itemQpLabel )
    {
      UILabel__set_text(itemQpLabel, SelfUserGame, 0);
      itemQpNum = this->fields.itemQpNum;
      v11 = (System_String_o *)StringLiteral_3514/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/;
      goto LABEL_13;
    }
LABEL_21:
    sub_21FFECC(SelfUserGame, v6);
  }
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3513/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0);
  if ( !itemQpLabel )
    goto LABEL_21;
  UILabel__set_text(itemQpLabel, SelfUserGame, 0);
  itemQpNum = this->fields.itemQpNum;
  v11 = (System_String_o *)StringLiteral_3515/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/;
LABEL_13:
  v12 = LocalizationManager__Get(v11, 0);
  LODWORD(v19) = needNum;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v19);
  SelfUserGame = System_String__Format(v12, v13, 0);
  if ( !itemQpNum )
    goto LABEL_21;
  UILabel__set_text(itemQpNum, SelfUserGame, 0);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3510/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0);
  if ( !itemHaveQpLabel )
    goto LABEL_21;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_3514/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0);
  v19 = klass;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C090, &v19);
  SelfUserGame = System_String__Format(v17, v18, 0);
  if ( !itemHaveQpNum )
    goto LABEL_21;
  UILabel__set_text(itemHaveQpNum, SelfUserGame, 0);
  SelfUserGame = (System_String_o *)this->fields.itemQpObj;
  if ( !SelfUserGame )
    goto LABEL_21;
  SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)SelfUserGame, 0);
  if ( !SelfUserGame )
    goto LABEL_21;
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
  __int64 v12; // x1
  IClassBoardSquareModel_c *klass; // x8
  ClassBoardSquareMaster_o *v14; // x22
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  int32_t v18; // w0
  IClassBoardSquareModel_c *v19; // x8
  int32_t v20; // w23
  __int64 v21; // x9
  int32_t *v22; // x10
  __int64 v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  ClassBoardSquareEntity_o *v30; // x23
  UnityEngine_GameObject_o *v31; // x22
  __int64 v32; // x1
  const MethodInfo *v33; // x4
  float v34; // s11
  __int64 v35; // x1
  Il2CppObject *current; // x26
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v38; // x0
  __int64 v39; // x1
  UnityEngine_GameObject_o *v40; // x22
  Il2CppObject *Component_object; // x0
  __int64 v42; // x1
  IClassBoardSquareModel_c *v43; // x8
  ClassBoardDialogSkillDetailPartsComponent_o *v44; // x23
  System_String_o *v45; // x24
  System_String_o *monitor; // x25
  int32_t v47; // w26
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  const MethodInfo *v53; // x5
  float v54; // s10
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v57; // x0
  __int64 v58; // x0
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_593C3C4 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardSquareEntity___TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C3C4 = 1;
  }
  effectObj = this->fields.effectObj;
  entity = 0;
  memset(&v60, 0, sizeof(v60));
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  if ( !squareModel )
    goto LABEL_54;
  klass = squareModel->klass;
  v14 = (ClassBoardSquareMaster_o *)effectObj;
  v15 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_11;
    }
    v17 = (__int64)&klass->vtable[*p_offset + 1];
  }
  else
  {
LABEL_11:
    v17 = sub_2237E2C(squareModel, IClassBoardSquareModel_TypeInfo, 1);
  }
  v18 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v17)(squareModel, *(_QWORD *)(v17 + 8));
  v19 = squareModel->klass;
  v20 = v18;
  v21 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
  if ( *(_WORD *)&squareModel->klass->_2.rank )
  {
    v22 = &v19->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v21;
      v22 += 4;
      if ( !v21 )
        goto LABEL_17;
    }
    v23 = (__int64)&v19->vtable[*v22];
  }
  else
  {
LABEL_17:
    v23 = sub_2237E2C(squareModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v23)(
                                            squareModel,
                                            *(_QWORD *)(v23 + 8));
  if ( !v14 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v14, &entity, v20, (int32_t)effectObj, 0);
  effectObj = (UnityEngine_GameObject_o *)sub_21FFD10(ClassBoardSquareEntity___TypeInfo, 1);
  if ( !effectObj )
    goto LABEL_54;
  v30 = entity;
  v31 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_21FFDA4(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v58 = sub_21FFEF0(0, v32);
      sub_21FFD90(v58, 0);
    }
  }
  if ( !LODWORD(v31[1].klass) )
    sub_21FFED4(effectObj);
  v31[1].monitor = v30;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v31[1].monitor, (int32_t)v30, v24, v25, v26, v27, v28, v29);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v31,
                                            0,
                                            0,
                                            classStatisticsInfos,
                                            v33);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v34 = 0.0;
  v60 = v59;
  v59.fields._list = 0;
  *(_QWORD *)&v59.fields._index = &v60;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v60.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35);
    v38 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v40 = (UnityEngine_GameObject_o *)v38;
    if ( !v38 )
      sub_21FFECC(0, v39);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v38,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_21FFECC(Component_object, v42);
    v43 = squareModel->klass;
    v44 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    v45 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v47 = (int32_t)current[2].monitor;
    v48 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
    if ( *(_WORD *)&squareModel->klass->_2.rank )
    {
      v49 = &v43->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v49 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_35;
      }
      v50 = (__int64)&v43->vtable[*v49 + 7];
    }
    else
    {
LABEL_35:
      v50 = sub_2237E2C(squareModel, IClassBoardSquareModel_TypeInfo, 7);
    }
    v51 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v50)(squareModel, *(_QWORD *)(v50 + 8));
    if ( !v44 )
      sub_21FFECC(v51, v52);
    v54 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v44, v45, monitor, v47, v51, v53);
    GameObjectExtensions__SetParent_42881836(v40, this->fields.effectDetailParent, 0);
    if ( !byte_5931945 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    GameObjectExtensions__SetLocalScale(v40, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    GameObjectExtensions__SetLocalPosition_42876224(v40, 0.0, -v34, 0.0, 0);
    UnityEngine_GameObject__SetActive(v40, 1, 0);
    v34 = v34 + v54;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
  if ( !effectObj )
    goto LABEL_54;
  effectObj = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, Il2CppClass *, double, double))effectObj->klass[1]._1.declaringType)(
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
  if ( disableScrollViewSize > 0.0 && v34 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0);
      if ( effectObj )
      {
        v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0);
        GameObjectExtensions__SetLocalPositionY(v57, disableScrollViewPosY, 0);
        return;
      }
    }
LABEL_54:
    sub_21FFECC(effectObj, squareModel);
  }
}


bool ClassBoardBaseDialog__SetUpItemList(
        ClassBoardBaseDialog_o *this,
        System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *itemList,
        const MethodInfo *method)
{
  UnityEngine_Object_o *itemInfoLabel; // x20
  __int64 v6; // x1
  UILabel_o *v7; // x20
  System_String_o *itemListObj; // x0
  __int64 v9; // x1
  UnityEngine_Object_o *itemQpObj; // x20
  System_Collections_Generic_List_object__o *v11; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x1
  _BOOL4 v24; // w26
  char v25; // w25
  _BOOL4 i; // w24
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
  __int64 v37; // x23
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  int32_t v42; // w0
  __int64 v43; // x8
  int32_t v44; // w22
  __int64 v45; // x9
  IClassBoardItemModel_c **v46; // x10
  __int64 v47; // x0
  int32_t v48; // w23
  Il2CppObject *Instance; // x0
  __int64 v50; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v52; // x1
  _BOOL8 isQP; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x2
  Il2CppObject *itemIcon; // x24
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  UIGrid_o *itemIconListGrid; // x25
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  __int64 v62; // x1
  Il2CppObject *v63; // x24
  __int64 v64; // x1
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  System_Collections_Generic_List_object__o *v71; // x0
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x8
  __int64 v76; // x8
  __int64 v77; // x9
  int *v78; // x10
  __int64 v79; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+0h] [xbp-80h]
  __int64 v82; // [xsp+18h] [xbp-68h]

  if ( (byte_593C3C5 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
    sub_21FFC50(&IClassBoardItemModel_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_3508/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/);
    byte_593C3C5 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, itemList);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0, 0) )
  {
    v7 = this->fields.itemInfoLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3508/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0);
    if ( !v7 )
      goto LABEL_87;
    UILabel__set_text(v7, itemListObj, 0);
  }
  itemQpObj = (UnityEngine_Object_o *)this->fields.itemQpObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  if ( UnityEngine_Object__op_Inequality(itemQpObj, 0, 0) )
  {
    itemListObj = (System_String_o *)this->fields.itemQpObj;
    if ( !itemListObj )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 0, 0);
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemIconComponentList,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_87;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0);
  if ( !itemList )
    goto LABEL_87;
  klass = itemList->klass;
  v19 = *(unsigned __int16 *)&itemList->klass->_2.rank;
  if ( *(_WORD *)&itemList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_21;
    }
    v21 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v21 = sub_2237E2C(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
  }
  v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))v21)(
          itemList,
          *(_QWORD *)(v21 + 8));
  v24 = 0;
  v82 = v22;
  v25 = 1;
LABEL_24:
  for ( i = v24; ; i = 1 )
  {
    v24 = i;
    if ( !v82 )
      sub_21FFECC(v22, v23);
    v27 = *(_QWORD *)v82;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
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
      v30 = sub_2237E2C(v82, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v82, *(_QWORD *)(v30 + 8)) & 1) == 0 )
      break;
    v31 = *(_QWORD *)v82;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
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
      v34 = sub_2237E2C(v82, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v82, *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_21FFECC(0, v36);
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
      v41 = sub_2237E2C(v35, IClassBoardItemModel_TypeInfo, 0);
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
      v47 = sub_2237E2C(v37, IClassBoardItemModel_TypeInfo, 1);
    }
    v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v37, *(_QWORD *)(v47 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v50);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_21FFECC(0, v52);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v44, 0);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v25 & 1) != 0 )
      {
        if ( !itemIcon )
          sub_21FFECC(isQP, v54);
      }
      else
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54);
        v57 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v57;
        if ( !v57 )
          sub_21FFECC(0, v58);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v57, 0);
        if ( !itemIconListGrid )
          sub_21FFECC(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0);
      if ( !byte_5931940 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931940 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      if ( !byte_5931945 )
      {
        sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931945 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v63 = Component_object;
      if ( !Component_object )
        sub_21FFECC(0, v62);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v44, v48, 0);
      v71 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList
        || (items = v71->fields._items,
            v73 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__,
            ++v71->fields._version,
            !items) )
      {
        sub_21FFECC(v71, v64);
      }
      size = v71->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v71,
          v63,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
      }
      else
      {
        v75 = &items->obj.klass + size;
        v71->fields._size = size + 1;
        v75[4] = (Il2CppClass *)v63;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)v63, v65, v66, v67, v68, v69, v70);
      }
      v25 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v48, v55);
  }
  v76 = *(_QWORD *)v82;
  v77 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
  {
    v78 = (int *)(*(_QWORD *)(v76 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
    {
      --v77;
      v78 += 4;
      if ( !v77 )
        goto LABEL_79;
    }
    v79 = v76 + 16LL * *v78 + 312;
  }
  else
  {
LABEL_79:
    v79 = sub_2237E2C(v82, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v79)(v82, *(_QWORD *)(v79 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_87:
    sub_21FFECC(itemListObj, v9);
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
  __int64 v13; // x10
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
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  __int64 v26; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  __int64 v32; // x1
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v34; // x0
  __int64 v35; // x1
  UIGrid_o *v36; // x21
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_Transform_o *v38; // x0
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_593C3C7 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
    sub_21FFC50(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&MasterMissionListViewItem_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_Transform___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C3C7 = 1;
  }
  conditionListObj = this->fields.conditionListObj;
  entity = 0;
  memset(&v40, 0, sizeof(v40));
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condData.fields.Type);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
            sub_21FFED4(conditionListObj);
          v13 = *((_QWORD *)&v11[1].monitor + v12);
          if ( !v13 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v13 + 28) - 23) <= 1 )
          {
            if ( !v6 )
              goto LABEL_58;
            items = v6->fields._items;
            *(_QWORD *)&condData.fields.Type = *(unsigned int *)(v13 + 32);
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
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
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
        *(const MethodInfo_4433138 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = v9 + 1;
      v7->m_Items[v9] = HIDWORD(v3);
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&condData.fields.Type);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v6 )
    goto LABEL_58;
  v17 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    v6,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v18 = 1;
  v40 = v39;
  v39.fields._list = 0;
  *(_QWORD *)&v39.fields._index = &v40;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v40,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v19 )
      break;
    if ( !v17 )
      sub_21FFECC(v19, v20);
    DataMasterBase_object__object__int___TryGetEntity(
      v17,
      &entity,
      v40.fields._current,
      (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v21 = entity;
    if ( entity )
    {
      v22 = (MasterMissionListViewItem_o *)sub_21FFEBC(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v22, (EventMissionEntity_o *)v21, 2, 0);
      if ( !v22 )
        sub_21FFECC(v23, v24);
      ComponentInChildren_object__58644924 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, const MethodInfo *))v22->klass->vtable._6_CheckMissionCond.methodPtr)(
                                                               v22,
                                                               v22->klass->vtable._6_CheckMissionCond.method);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v18 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_21FFECC(ComponentInChildren_object__58644924, v26);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_21FFECC(0, v29);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
        v34 = UnityEngine_Object__Instantiate_object__59506996(
                Parent,
                transform,
                (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v34 )
          sub_21FFECC(0, v35);
        ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                                 (UnityEngine_Component_o *)v34,
                                                 (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__58644924;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_21FFECC(ComponentInChildren_object__58644924, v26);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, void *))classBoardMissionListViewItemDraw->klass[1]._1.image)(
        classBoardMissionListViewItemDraw,
        v22,
        1,
        0,
        classBoardMissionListViewItemDraw->klass[1]._1.gc_desc);
      v36 = this->fields.conditionGrid;
      v37 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0);
      v38 = GameObjectExtensions__GetParent(v37, 0);
      if ( !v36 )
        sub_21FFECC(v38, v38);
      UIGrid__AddChild(v36, v38, 0);
      v18 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v40,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.conditionGrid;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))conditionListObj->klass[1]._1.element_class)(
    conditionListObj,
    conditionListObj->klass[1]._1.castClass);
  conditionListObj = (UnityEngine_GameObject_o *)this->fields.missionScrollView;
  if ( !conditionListObj )
    goto LABEL_58;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, Il2CppClass *, double, double))conditionListObj->klass[1]._1.declaringType)(
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
    sub_21FFECC(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0);
}


void ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_593C3CB & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593C3CB = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0, 0) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_21FFECC(0, v4);
    UIScrollView__UpdateScrollbars(v5, 0);
  }
}


void ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C3D0 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardBaseDialog___c_TypeInfo);
    byte_593C3D0 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
  return x->fields.priority;
}


int32_t ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.squareId;
}


void ClassBoardBaseDialog___c__DisplayClass32_0___ctor(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardBaseDialog___c__DisplayClass32_0___OpenItemInfoListWindow_b__0(
        ClassBoardBaseDialog___c__DisplayClass32_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  if ( !this->fields.__4__this )
    sub_21FFECC(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}