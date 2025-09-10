void ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C2AC3D & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2AC3D = 1;
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

  if ( (byte_4C2AC3A & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC3A = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0, 0) )
  {
    v7 = this->fields.classBoardSquare;
    if ( !v7 )
      sub_1C2D6EC(0, v6);
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

  if ( (byte_4C2AC3C & 1) == 0 )
  {
    sub_1C2D490(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C2AC3C = 1;
  }
  v4 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v7);
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
  __int64 v13; // x2
  int max_length; // w8
  unsigned int v15; // w21
  ClassBoardSquareEntity_o *v16; // x29
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppObject *p_obj; // x21
  System_Collections_Generic_List_object__o *v19; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v21; // x19
  SkillLvEntity_o *v22; // x24
  System_Collections_Generic_List_object__o *v23; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v24; // x21
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  System_Collections_Generic_List_object__o *v31; // x23
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x24
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  Il2CppObject *v37; // x27
  __int64 v38; // x1
  System_Collections_Generic_List_object__o *v39; // x19
  Il2CppObject *v40; // x0
  FuncDispEntity_o *v41; // x19
  System_Collections_Generic_List_object__o *v42; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v43; // x25
  __int64 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v58; // w27
  int32_t v59; // w26
  int32_t v60; // w28
  int32_t v61; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v62; // x24
  __int64 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  System_Int32_array *v75; // x19
  System_String_o *Detail; // x0
  const MethodInfo *v77; // x2
  System_String_o *v78; // x19
  System_String_o *Name; // x0
  int32_t priority; // w23
  int32_t id; // w24
  int32_t iconId; // w25
  int32_t skillType; // w26
  System_String_o *v84; // x27
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v85; // x21
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass **v91; // x0
  _BOOL8 v92; // x0
  __int64 v93; // x1
  Il2CppObject *value; // x23
  System_String_o *data; // x21
  Il2CppObject *v96; // x0
  __int64 v97; // x1
  Il2CppObject *v98; // x0
  __int64 v99; // x1
  _DWORD *v100; // x8
  __int64 v101; // x1
  Il2CppObject *v102; // x0
  __int64 v103; // x1
  Il2CppObject *v104; // x0
  __int64 v105; // x1
  Il2CppClass *v106; // x8
  System_Int32_array *v107; // x26
  int32_t v108; // w25
  Il2CppObject *v109; // x19
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x2
  _DWORD *v113; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v115; // x8
  il2cpp_array_size_t v116; // x10
  unsigned __int64 v117; // x9
  __int64 v118; // x10
  char *v119; // x12
  int v120; // w13
  _DWORD *v121; // x8
  int32_t v122; // w8
  Il2CppObject *v123; // x0
  __int64 v124; // x1
  const MethodInfo *v125; // x2
  Il2CppClass *v126; // x8
  System_String_o *v127; // x26
  Il2CppObject *v128; // x0
  __int64 v129; // x1
  _DWORD *v130; // x8
  int32_t v131; // w27
  Il2CppObject *v132; // x0
  __int64 v133; // x1
  _DWORD *v134; // x8
  int32_t v135; // w28
  Il2CppObject *v136; // x0
  __int64 v137; // x1
  _DWORD *v138; // x8
  int32_t v139; // w19
  System_String_o *v140; // x23
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v141; // x21
  __int64 v142; // x0
  __int64 v143; // x1
  int32_t v144; // w2
  const MethodInfo *v145; // x3
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  Il2CppClass **v149; // x0
  ClassBoardBaseDialog___c_c *v150; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v152; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int32_t v154; // w2
  const MethodInfo *v155; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v156; // x0
  ClassBoardBaseDialog___c_c *v157; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v158; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v160; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v161; // x0
  int32_t v162; // w2
  const MethodInfo *v163; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v164; // x0
  int32_t v167; // [xsp+Ch] [xbp-154h]
  ClassBoardCommandSpellMaster_o *v168; // [xsp+10h] [xbp-150h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+18h] [xbp-148h]
  ClassBoardSquareEntity_array *v170; // [xsp+20h] [xbp-140h]
  unsigned int v171; // [xsp+2Ch] [xbp-134h]
  System_Collections_Generic_Dictionary_object__object__o *v172; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v173; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v174; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v175; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v176; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v177; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v178; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v179; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v180; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v181; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v183; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  if ( (byte_4C2AC37 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1C2D490(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1C2D490(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1C2D490(&Method_System_String_Join_int___);
    sub_1C2D490(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__);
    sub_1C2D490(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__);
    sub_1C2D490(&ClassBoardBaseDialog___c_TypeInfo);
    sub_1C2D490(&StringLiteral_811/*","*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2AC37 = 1;
  }
  v183 = 0;
  entity = 0;
  v181 = 0;
  entitys = 0;
  memset(&v180, 0, sizeof(v180));
  v179 = 0;
  v177 = 0;
  memset(&v178, 0, sizeof(v178));
  memset(&v176, 0, sizeof(v176));
  v8 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_156;
  if ( !openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v8;
  v167 = dispType;
  v173 = v8;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_SkillLvMaster___);
  v168 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v12 = DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FuncDispMaster___);
  v172 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C2D6DC(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v172,
    (const MethodInfo_3449978 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v170 = openedSquareArray;
    v174 = (FuncDispMaster_o *)v12;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1C2D6F4(IsPassive, v10, v13);
      v16 = openedSquareArray->m_Items[v15];
      v17 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v17,
        (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v17;
      if ( !v16 )
        goto LABEL_156;
      v171 = v15;
      IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsPassive(v16, 0);
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
                                          v16->fields.targetId,
                                          (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v11 )
        goto LABEL_156;
      IsPassive = (System_Int32_array *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)v11,
                                          &v183,
                                          v16->fields.targetId,
                                          v16->fields.upSkillLv,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (System_Int32_array *)v183;
        if ( !v183 )
          goto LABEL_156;
        IsPassive = (System_Int32_array *)SkillLvEntity__IsContainsTurnOrCountBuff(v183, 0);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v183 )
        goto LABEL_156;
      if ( !v12 )
        goto LABEL_156;
      IsPassive = (System_Int32_array *)FuncDispMaster__IsContainFuncIds(
                                          (FuncDispMaster_o *)v12,
                                          &v181,
                                          v183->fields.funcId,
                                          v16->fields.classBoardBaseId,
                                          0);
      if ( !v183 )
        goto LABEL_156;
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        IsPassive = (System_Int32_array *)System_String__Join_int_(
                                            (System_String_o *)StringLiteral_811/*","*/,
                                            (System_Collections_Generic_IEnumerable_T__o *)v183->fields.funcId,
                                            (const MethodInfo_3179BD4 *)Method_System_String_Join_int___);
        if ( !v172 )
          goto LABEL_156;
        p_obj = &IsPassive->obj;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v172,
                &IsPassive->obj,
                (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v19 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v19,
            (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v172,
            p_obj,
            (Il2CppObject *)v19,
            (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v172,
                 p_obj,
                 (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v21 = v181;
        v22 = v183;
        v23 = (System_Collections_Generic_List_object__o *)Item;
        v24 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v24, v21, v22, 0, v16, 0);
        if ( !v23 )
          goto LABEL_156;
        items = v23->fields._items;
        v28 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v23->fields._version;
        if ( !items )
          goto LABEL_156;
        size = v23->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v23,
            (Il2CppObject *)v24,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        }
        else
        {
          v30 = &items->obj.klass + size;
          v23->fields._size = size + 1;
          v30[4] = (Il2CppClass *)v24;
          sub_1C2D434((CGThumbnailListItem_o *)(v30 + 4), (int32_t)v24, v25, v26);
        }
LABEL_61:
        dispType = v167;
        goto LABEL_62;
      }
      IsPassive = SkillLvMaster__GetDispValFromSkill(
                    (SkillLvMaster_o *)v11,
                    v183->fields.skillId,
                    v183->fields.lv,
                    classStatisticsInfos,
                    0);
      if ( !v183 )
        goto LABEL_156;
      v75 = IsPassive;
      Detail = SkillLvEntity__getDetail(v183, 0, 1, 0);
      IsPassive = (System_Int32_array *)ClassBoardBaseDialog__ReplaceFractionFormat(Detail, v75, v77);
      if ( !entity )
        goto LABEL_156;
      v78 = (System_String_o *)IsPassive;
      Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
      priority = v16->fields.priority;
      id = v16->fields.id;
      iconId = v16->fields.iconId;
      skillType = v16->fields.skillType;
      v84 = Name;
      v85 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v85,
        v84,
        v78,
        id,
        priority,
        iconId,
        skillType,
        0);
      if ( !v173 )
        goto LABEL_156;
      v88 = v173->fields._items;
      dispType = v167;
      v89 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v173->fields._version;
      if ( !v88 )
        goto LABEL_156;
      v90 = v173->fields._size;
      if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v173,
          (Il2CppObject *)v85,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &v88->obj.klass + v90;
        v173->fields._size = v90 + 1;
        v91[4] = (Il2CppClass *)v85;
        sub_1C2D434((CGThumbnailListItem_o *)(v91 + 4), (int32_t)v85, v86, v87);
      }
LABEL_62:
      openedSquareArray = v170;
      max_length = v170->max_length;
      v15 = v171 + 1;
      if ( (int)(v171 + 1) >= max_length )
        goto LABEL_81;
    }
    IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsCommandSpell(v16, 0);
    if ( dispType == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (System_Int32_array *)v168;
    if ( !v168 )
      goto LABEL_156;
    IsPassive = (System_Int32_array *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v168,
                                        &entitys,
                                        v16->fields.targetId,
                                        v16->fields.upSkillLv,
                                        0);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v31 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v31,
      (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (System_Int32_array *)entitys;
    if ( !entitys )
      goto LABEL_156;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v175,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    *(_OWORD *)&v180.fields._list = *(_OWORD *)&v175.fields._dictionary;
    v180.fields._current = v175.fields._current.fields.key;
    while ( 1 )
    {
      v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v180,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v12 = (Il2CppObject *)v174;
      if ( !v32 )
        break;
      current = v180.fields._current;
      if ( !v180.fields._current )
        sub_1C2D6EC(v32, v33);
      if ( !v174 )
        sub_1C2D6EC(v32, v33);
      if ( FuncDispMaster__IsContainFuncIds(
             v174,
             &v179,
             (System_Int32_array *)v180.fields._current[3].klass,
             v16->fields.classBoardBaseId,
             0) )
      {
        v35 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_811/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_3179BD4 *)Method_System_String_Join_int___);
        if ( !v31 )
          sub_1C2D6EC(v35, v36);
        v37 = v35;
        if ( !System_Collections_Generic_List_object___Contains(
                v31,
                v35,
                (const MethodInfo_3789F14 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v172 )
            sub_1C2D6EC(0, v38);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v172,
                  v37,
                  (const MethodInfo_344A51C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v39 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v39,
              (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v172,
              v37,
              (Il2CppObject *)v39,
              (const MethodInfo_344A314 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v40 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v172,
                  v37,
                  (const MethodInfo_344A2A8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v41 = v179;
          v42 = (System_Collections_Generic_List_object__o *)v40;
          v43 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v43,
            v41,
            0,
            (ClassBoardCommandSpellEntity_o *)current,
            v16,
            0);
          if ( !v42 )
            sub_1C2D6EC(v44, v45);
          v48 = v42->fields._items;
          v49 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
          ++v42->fields._version;
          if ( !v48 )
            sub_1C2D6EC(v44, v45);
          v50 = v42->fields._size;
          if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v42,
              (Il2CppObject *)v43,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
          }
          else
          {
            v51 = &v48->obj.klass + v50;
            v42->fields._size = v50 + 1;
            v51[4] = (Il2CppClass *)v43;
            sub_1C2D434((CGThumbnailListItem_o *)(v51 + 4), (int32_t)v43, v46, v47);
          }
          v71 = v31->fields._items;
          v72 = Method_System_Collections_Generic_List_string__Add__;
          ++v31->fields._version;
          if ( !v71 )
            sub_1C2D6EC(v52, v53);
          v73 = v31->fields._size;
          if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v31,
              v37,
              *(const MethodInfo_3789B84 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v71->obj.klass + v73;
            v31->fields._size = v73 + 1;
            v74[4] = (Il2CppClass *)v37;
            sub_1C2D434((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v37, v54, v55);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v58 = v16->fields.priority;
        v60 = v16->fields.id;
        v59 = v16->fields.iconId;
        v61 = v16->fields.skillType;
        v62 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v62, klass, monitor, v60, v58, v59, v61, 0);
        if ( !v173 )
          sub_1C2D6EC(v63, v64);
        v67 = v173->fields._items;
        v68 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v173->fields._version;
        if ( !v67 )
          sub_1C2D6EC(v63, v64);
        v69 = v173->fields._size;
        if ( (unsigned int)v69 >= LODWORD(v67->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v173,
            (Il2CppObject *)v62,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
        }
        else
        {
          v70 = &v67->obj.klass + v69;
          v173->fields._size = v69 + 1;
          v70[4] = (Il2CppClass *)v62;
          sub_1C2D434((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v62, v65, v66);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v180,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_81:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Int32_array *)v172;
  if ( !v172 )
LABEL_156:
    sub_1C2D6EC(IsPassive, v10);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v175,
    v172,
    (const MethodInfo_344A758 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v178 = v175;
  while ( 1 )
  {
    v92 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v178,
            (const MethodInfo_3546DD4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v92 )
      break;
    value = v178.fields._current.fields.value;
    if ( !v178.fields._current.fields.value )
      sub_1C2D6EC(v92, v93);
    if ( SLODWORD(v178.fields._current.fields.value[1].monitor) >= 1 )
    {
      data = (System_String_o *)StringLiteral_1/*""*/;
      v96 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)v178.fields._current.fields.value,
              0,
              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v96 )
        sub_1C2D6EC(0, v97);
      if ( v96[1].monitor )
      {
        v98 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)value,
                0,
                (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v98 )
          sub_1C2D6EC(0, v99);
        v100 = v98[1].monitor;
        if ( !v100 )
          sub_1C2D6EC(v98, v99);
        if ( !Master_object )
          sub_1C2D6EC(0, v99);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v177,
               v100[4],
               (const MethodInfo_3387DE4 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v177 )
            sub_1C2D6EC(0, v101);
          data = SkillEntity__getName((SkillEntity_o *)v177, 0);
        }
      }
      else
      {
        v102 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v102 )
          sub_1C2D6EC(0, v103);
        if ( v102[2].klass )
        {
          v104 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v104 )
            sub_1C2D6EC(0, v105);
          v106 = v104[2].klass;
          if ( !v106 )
            sub_1C2D6EC(v104, v105);
          data = (System_String_o *)v106->_1.byval_arg.data;
        }
      }
      v107 = (System_Int32_array *)sub_1C2D538(int___TypeInfo, 0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v175,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v108 = 0;
      *(_OWORD *)&v176.fields._list = *(_OWORD *)&v175.fields._dictionary;
      v176.fields._current = v175.fields._current.fields.key;
LABEL_102:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v176,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v176,
          (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v123 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v123 )
          sub_1C2D6EC(0, v124);
        v126 = v123[1].klass;
        if ( !v126 )
          sub_1C2D6EC(v123, v124);
        v127 = ClassBoardBaseDialog__ReplaceFractionFormat(*(System_String_o **)&v126->_1.byval_arg.bits, v107, v125);
        v128 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v128 )
          sub_1C2D6EC(0, v129);
        v130 = v128[2].monitor;
        if ( !v130 )
          sub_1C2D6EC(v128, v129);
        v131 = v130[5];
        v132 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v132 )
          sub_1C2D6EC(0, v133);
        v134 = v132[2].monitor;
        if ( !v134 )
          sub_1C2D6EC(v132, v133);
        v135 = v134[6];
        v136 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v136 )
          sub_1C2D6EC(0, v137);
        v138 = v136[2].monitor;
        if ( !v138 )
          sub_1C2D6EC(v136, v137);
        v139 = v138[14];
        v140 = data;
        v141 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C2D6DC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v141, v140, v127, v131, v108, v135, v139, 0);
        if ( !v173 )
          sub_1C2D6EC(v142, v143);
        v146 = v173->fields._items;
        v147 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v173->fields._version;
        if ( !v146 )
          sub_1C2D6EC(v142, v143);
        v148 = v173->fields._size;
        if ( (unsigned int)v148 >= LODWORD(v146->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v173,
            (Il2CppObject *)v141,
            *(const MethodInfo_3789B84 **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
        }
        else
        {
          v149 = &v146->obj.klass + v148;
          v173->fields._size = v148 + 1;
          v149[4] = (Il2CppClass *)v141;
          sub_1C2D434((CGThumbnailListItem_o *)(v149 + 4), (int32_t)v141, v144, v145);
        }
        continue;
      }
      v109 = v176.fields._current;
      v110 = sub_1C2D538(int___TypeInfo, 0);
      if ( !v109 )
        sub_1C2D6EC(v110, v111);
      v113 = v109[1].monitor;
      if ( v113 )
      {
        if ( !v11 )
          sub_1C2D6EC(v110, v111);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v11,
                                                               v113[4],
                                                               v113[5],
                                                               classStatisticsInfos,
                                                               0);
LABEL_109:
        v115 = (__int64)DispValFromSkill;
      }
      else
      {
        v115 = v110;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v109[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 classStatisticsInfos,
                                                                 0);
          goto LABEL_109;
        }
      }
      if ( !v107 )
        sub_1C2D6EC(DispValFromSkill, v111);
      v116 = v107->max_length;
      if ( v116 )
      {
        if ( (int)v116 >= 1 )
        {
          v117 = 0;
          v118 = (unsigned int)v107->max_length;
          do
          {
            if ( !v115 )
              sub_1C2D6EC(DispValFromSkill, v111);
            if ( v117 >= *(unsigned int *)(v115 + 24) )
              sub_1C2D6F4(DispValFromSkill, v111, v112);
            v119 = (char *)v107 + 4 * v117;
            v120 = *(_DWORD *)(v115 + 32 + 4 * v117++);
            *((_DWORD *)v119 + 8) += v120;
          }
          while ( v118 != v117 );
        }
      }
      else
      {
        v107 = (System_Int32_array *)v115;
      }
      v121 = v109[2].monitor;
      if ( !v121 )
        sub_1C2D6EC(DispValFromSkill, v111);
      v122 = v121[20];
      if ( v122 > v108 )
        v108 = v122;
      goto LABEL_102;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v178,
    (const MethodInfo_3546EF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v150 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v150 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v150->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v150->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v150);
      v150 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v152 = (Il2CppObject *)v150->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v152, Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, 0);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v154, v155);
  }
  v156 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v173,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_30FE624 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v157 = ClassBoardBaseDialog___c_TypeInfo;
  v158 = v156;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v157 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v157->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v157->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v157);
      v157 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v160 = (Il2CppObject *)v157->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1C2D6DC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_1, v160, Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, 0);
    v161 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v161->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1C2D434((CGThumbnailListItem_o *)&v161->__9__28_1, (int32_t)_9__28_1, v162, v163);
  }
  v164 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v158,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_310D150 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v164, (const MethodInfo_3112C88 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4C2AC31 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC31 = 1;
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
    sub_1C2D6EC(gameObject, v4);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  __int64 v14; // x21
  __int64 v15; // x22
  unsigned __int64 v16; // x24
  __int64 v17; // x2
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v21; // x23

  if ( (byte_4C2AC3B & 1) == 0 )
  {
    sub_1C2D490(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C2D490(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    sub_1C2D490(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
    sub_1C2D490(&int___TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
    sub_1C2D490(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C2D490(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__);
    sub_1C2D490(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
    byte_4C2AC3B = 1;
  }
  v5 = sub_1C2D6DC(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = closedAction;
  sub_1C2D434((CGThumbnailListItem_o *)(v5 + 24), (int32_t)closedAction, v10, v11);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_30DA4C8 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v14 = sub_1C2D538(int___TypeInfo, (unsigned int)size);
    v15 = sub_1C2D538(int___TypeInfo, (unsigned int)size);
    if ( (int)size >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v16,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v14 )
          break;
        if ( v16 >= *(unsigned int *)(v14 + 24) )
          goto LABEL_23;
        *(_DWORD *)(v14 + 32 + 4 * v16) = HIDWORD(Item[2].fields._items);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v16,
                                                              (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v15 )
          break;
        if ( v16 >= *(unsigned int *)(v15 + 24) )
LABEL_23:
          sub_1C2D6F4(Item, v7, v17);
        *(_DWORD *)(v15 + 32 + 4 * v16++) = Item[2].fields._syncRoot;
        if ( size == v16 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1C2D6EC(Item, v7);
    }
LABEL_17:
    v18 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C2D4A8(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C2D474(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C2D6DC(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)v5,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow(
      (CommonUI_o *)Instance,
      (System_Int32_array *)v14,
      (System_Int32_array *)v15,
      v21,
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

  if ( (byte_4C2AC38 & 1) == 0 )
  {
    sub_1C2D490(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4C2AC38 = 1;
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

  if ( (byte_4C2AC36 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    byte_4C2AC36 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      itemIconComponentList,
      (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C2D6EC(0, v4);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v5.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_1C2D6EC(this, method);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v18; // x21
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  Il2CppObject *v22; // x0
  System_String_c *v23; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C2AC34 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&long_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_3376/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/);
    sub_1C2D490(&StringLiteral_3378/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/);
    sub_1C2D490(&StringLiteral_3375/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/);
    sub_1C2D490(&StringLiteral_3377/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/);
    sub_1C2D490(&StringLiteral_3373/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/);
    byte_4C2AC34 = 1;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3375/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0);
    itemQpNum = this->fields.itemQpNum;
    v10 = (System_String_o *)StringLiteral_3377/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3376/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0);
    itemQpNum = this->fields.itemQpNum;
    v10 = (System_String_o *)StringLiteral_3378/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/;
  }
  v11 = LocalizationManager__Get(v10, 0);
  LODWORD(v23) = needNum;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v12, v13, v14);
  SelfUserGame = System_String__Format(v11, v15, 0);
  if ( !itemQpNum )
    goto LABEL_19;
  UILabel__set_text(itemQpNum, SelfUserGame, 0);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3373/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3377/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0);
  v23 = klass;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v23, v19, v20, v21);
  SelfUserGame = System_String__Format(v18, v22, 0);
  if ( !itemHaveQpNum
    || (UILabel__set_text(itemHaveQpNum, SelfUserGame, 0),
        (SelfUserGame = (System_String_o *)this->fields.itemQpObj) == 0)
    || (SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)SelfUserGame,
                                            0)) == 0 )
  {
LABEL_19:
    sub_1C2D6EC(SelfUserGame, v6);
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
  __int64 v23; // x2
  const MethodInfo *v24; // x3
  ClassBoardSquareEntity_o *v25; // x23
  UnityEngine_GameObject_o *v26; // x22
  const MethodInfo *v27; // x4
  float v28; // s11
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v31; // x0
  __int64 v32; // x1
  UnityEngine_GameObject_o *v33; // x22
  Il2CppObject *Component_object; // x0
  __int64 v35; // x1
  IClassBoardSquareModel_c *v36; // x8
  System_String_o *monitor; // x25
  System_String_o *v38; // x26
  int32_t v39; // w24
  __int64 v40; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v41; // x23
  int32_t *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x5
  float v47; // s10
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v50; // x0
  __int64 v51; // x0
  System_Collections_Generic_List_Enumerator_object__o v52; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4C2AC32 & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardSquareEntity___TypeInfo);
    sub_1C2D490(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    sub_1C2D490(&IClassBoardSquareModel_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC32 = 1;
  }
  entity = 0;
  memset(&v53, 0, sizeof(v53));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
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
    v16 = sub_1C7DCA8(squareModel, IClassBoardSquareModel_TypeInfo, 1);
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
    v22 = sub_1C7DCA8(squareModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v22)(
                                            squareModel,
                                            *(_QWORD *)(v22 + 8));
  if ( !v13 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v13, &entity, v19, (int32_t)effectObj, 0);
  effectObj = (UnityEngine_GameObject_o *)sub_1C2D538(ClassBoardSquareEntity___TypeInfo, 1);
  if ( !effectObj )
    goto LABEL_54;
  v25 = entity;
  v26 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1C2D5CC(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v51 = sub_1C2D710(0);
      sub_1C2D5B8(v51, 0);
    }
  }
  if ( !LODWORD(v26[1].klass) )
    sub_1C2D6F4(effectObj, squareModel, v23);
  v26[1].monitor = v25;
  sub_1C2D434((CGThumbnailListItem_o *)&v26[1].monitor, (int32_t)v25, v23, v24);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v26,
                                            0,
                                            0,
                                            classStatisticsInfos,
                                            v27);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v52,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_378A67C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v28 = 0.0;
  v53 = v52;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v53,
            (const MethodInfo_3514508 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v53.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v31 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v33 = (UnityEngine_GameObject_o *)v31;
    if ( !v31 )
      sub_1C2D6EC(0, v32);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v31,
                         (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1C2D6EC(Component_object, v35);
    v36 = squareModel->klass;
    v38 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v39 = (int32_t)current[2].monitor;
    v40 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
    v41 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)&squareModel->klass->_2.rank )
    {
      v42 = &v36->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v42 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v40;
        v42 += 4;
        if ( !v40 )
          goto LABEL_35;
      }
      v43 = (__int64)&v36->vtable[*v42 + 7];
    }
    else
    {
LABEL_35:
      v43 = sub_1C7DCA8(squareModel, IClassBoardSquareModel_TypeInfo, 7);
    }
    v44 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v43)(squareModel, *(_QWORD *)(v43 + 8));
    if ( !v41 )
      sub_1C2D6EC(v44, v45);
    v47 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v41, v38, monitor, v39, v44, v46);
    GameObjectExtensions__SetParent_35924212(v33, this->fields.effectDetailParent, 0);
    if ( !byte_4C20DA6 )
    {
      sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
      byte_4C20DA6 = 1;
    }
    GameObjectExtensions__SetLocalScale(v33, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    GameObjectExtensions__SetLocalPosition_35918600(v33, 0.0, -v28, 0.0, 0);
    UnityEngine_GameObject__SetActive(v33, 1, 0);
    v28 = v28 + v47;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v53,
    (const MethodInfo_3514504 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  if ( disableScrollViewSize > 0.0 && v28 <= disableScrollViewSize )
  {
    effectObj = (UnityEngine_GameObject_o *)this->fields.effectScrollView;
    if ( effectObj )
    {
      HIDWORD(effectObj[3].monitor) = 4;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0);
      effectObj = (UnityEngine_GameObject_o *)GameObjectExtensions__GetParent(gameObject, 0);
      if ( effectObj )
      {
        v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0);
        GameObjectExtensions__SetLocalPositionY(v50, disableScrollViewPosY, 0);
        return;
      }
    }
LABEL_54:
    sub_1C2D6EC(effectObj, squareModel);
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
  const MethodInfo *v12; // x3
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v14; // x9
  int32_t *p_offset; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x20
  _BOOL4 v20; // w27
  char v21; // w26
  _BOOL4 i; // w23
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x24
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  int32_t v38; // w0
  __int64 v39; // x8
  int32_t v40; // w23
  __int64 v41; // x9
  IClassBoardItemModel_c **v42; // x10
  __int64 v43; // x0
  int32_t v44; // w24
  Il2CppObject *Instance; // x0
  __int64 v46; // x1
  Il2CppObject *MasterData_object; // x0
  __int64 v48; // x1
  _BOOL8 isQP; // x0
  __int64 v50; // x1
  const MethodInfo *v51; // x2
  Il2CppObject *itemIcon; // x25
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  UIGrid_o *itemIconListGrid; // x26
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  __int64 v58; // x1
  Il2CppObject *v59; // x25
  __int64 v60; // x1
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  System_Collections_Generic_List_object__o *v63; // x0
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  Il2CppClass **v67; // x8
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_4C2AC33 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
    sub_1C2D490(&IClassBoardItemModel_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C2D490(&StringLiteral_3371/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/);
    byte_4C2AC33 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0, 0) )
  {
    v6 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3371/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0);
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
  v10 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.itemIconComponentList, (int32_t)v10, v11, v12);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0);
  if ( !itemList )
    goto LABEL_86;
  klass = itemList->klass;
  v14 = *(unsigned __int16 *)&itemList->klass->_2.rank;
  if ( *(_WORD *)&itemList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v14;
      p_offset += 4;
      if ( !v14 )
        goto LABEL_21;
    }
    v16 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v16 = sub_1C7DCA8(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
  }
  v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))v16)(
          itemList,
          *(_QWORD *)(v16 + 8));
  v19 = v17;
  v20 = 0;
  v21 = 1;
LABEL_24:
  for ( i = v20; ; i = 1 )
  {
    if ( !v19 )
      sub_1C2D6EC(v17, v18);
    v23 = *(_QWORD *)v19;
    v20 = i;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_30;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_30:
      v26 = sub_1C7DCA8(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v19, *(_QWORD *)(v26 + 8)) & 1) == 0 )
      break;
    v27 = *(_QWORD *)v19;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v29 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_37;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_37:
      v30 = sub_1C7DCA8(v19, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
    }
    v31 = (*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v19, *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      sub_1C2D6EC(0, v32);
    v34 = *(_QWORD *)v31;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v36 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_44;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_44:
      v37 = sub_1C7DCA8(v31, IClassBoardItemModel_TypeInfo, 0);
    }
    v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8));
    v39 = *(_QWORD *)v33;
    v40 = v38;
    v41 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v42 = (IClassBoardItemModel_c **)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *(v42 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v41;
        v42 += 2;
        if ( !v41 )
          goto LABEL_50;
      }
      v43 = v39 + 16LL * (*(_DWORD *)v42 + 1) + 312;
    }
    else
    {
LABEL_50:
      v43 = sub_1C7DCA8(v33, IClassBoardItemModel_TypeInfo, 1);
    }
    v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v33, *(_QWORD *)(v43 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C2D6EC(0, v46);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1C2D6EC(0, v48);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v40, 0);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v21 & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v53 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_315ACB8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v53;
        if ( !v53 )
          sub_1C2D6EC(0, v54);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v53, 0);
        if ( !itemIconListGrid )
          sub_1C2D6EC(transform, transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0);
      }
      if ( !itemIcon )
        sub_1C2D6EC(isQP, v50);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0);
      if ( !byte_4C20DA1 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA1 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      if ( !byte_4C20DA6 )
      {
        sub_1C2D490(&UnityEngine_Vector3_TypeInfo);
        byte_4C20DA6 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v59 = Component_object;
      if ( !Component_object )
        sub_1C2D6EC(0, v58);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v40, v44, 0);
      v63 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1C2D6EC(0, v60);
      items = v63->fields._items;
      v65 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v63->fields._version;
      if ( !items )
        sub_1C2D6EC(v63, v60);
      size = v63->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v63,
          v59,
          *(const MethodInfo_3789B84 **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
      }
      else
      {
        v67 = &items->obj.klass + size;
        v63->fields._size = size + 1;
        v67[4] = (Il2CppClass *)v59;
        sub_1C2D434((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v59, v61, v62);
      }
      v21 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v44, v51);
  }
  v68 = *(_QWORD *)v19;
  v69 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v70 - 1) != System_IDisposable_TypeInfo )
    {
      --v69;
      v70 += 4;
      if ( !v69 )
        goto LABEL_78;
    }
    v71 = v68 + 16LL * *v70 + 312;
  }
  else
  {
LABEL_78:
    v71 = sub_1C7DCA8(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v71)(v19, *(_QWORD *)(v71 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1C2D6EC(itemListObj, v8);
  ((void (__fastcall *)(System_String_o *, const MethodInfo *))itemListObj->klass->vtable._8_Equals.methodPtr)(
    itemListObj,
    itemListObj->klass->vtable._8_Equals.method);
  return i;
}


// local variable allocation has failed, the output may be wrong!
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
  UnityEngine_GameObject_o *v12; // x20
  __int64 v13; // x22
  __int64 v14; // x9
  struct System_Int32_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x20
  char v19; // w23
  _BOOL8 v20; // x0
  __int64 v21; // x1
  Il2CppObject *v22; // x22
  MasterMissionListViewItem_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x1
  Il2CppObject *ComponentInChildren_object__51139460; // x0
  __int64 v27; // x1
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
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
  if ( (byte_4C2AC35 & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
    sub_1C2D490(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C2D490(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C2D490(&DataManager_TypeInfo);
    sub_1C2D490(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C2D490(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&MasterMissionListViewItem_TypeInfo);
    sub_1C2D490(&Method_UnityEngine_Object_Instantiate_Transform___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC35 = 1;
  }
  entity = 0;
  memset(&v40, 0, sizeof(v40));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_CommonReleaseMaster___);
      if ( !conditionListObj )
        goto LABEL_58;
      conditionListObj = (UnityEngine_GameObject_o *)CommonReleaseMaster__getList(
                                                       (CommonReleaseMaster_o *)conditionListObj,
                                                       SHIDWORD(v3),
                                                       0);
      if ( !conditionListObj )
        goto LABEL_58;
      klass = conditionListObj[1].klass;
      v12 = conditionListObj;
      if ( !klass )
        return;
      if ( (int)klass >= 1 )
      {
        v13 = 0;
        do
        {
          if ( (unsigned int)v13 >= (unsigned int)klass )
            sub_1C2D6F4(conditionListObj, *(_QWORD *)&condData.fields.Type, *(_QWORD *)&condData.fields.Num);
          v14 = *((_QWORD *)&v12[1].monitor + v13);
          if ( !v14 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v14 + 28) - 23) <= 1 )
          {
            if ( !v6 )
              goto LABEL_58;
            *(_QWORD *)&condData.fields.Type = *(unsigned int *)(v14 + 32);
            items = v6->fields._items;
            v16 = Method_System_Collections_Generic_List_int__Add__;
            ++v6->fields._version;
            if ( !items )
              goto LABEL_58;
            size = v6->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v6,
                condData.fields.Type,
                *(const MethodInfo_376CB60 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
              klass = v12[1].klass;
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size] = condData.fields.Type;
            }
          }
        }
        while ( (int)++v13 < (int)klass );
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
        *(const MethodInfo_376CB60 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = v9 + 1;
      v7->m_Items[v9] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30CE8FC *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v6 )
    goto LABEL_58;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    v6,
    (const MethodInfo_376D634 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v19 = 1;
  v40 = v39;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v40,
            (const MethodInfo_35106F0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v20 )
      break;
    if ( !v18 )
      sub_1C2D6EC(v20, v21);
    DataMasterBase_object__object__int___TryGetEntity(
      v18,
      &entity,
      v40.fields._current,
      (const MethodInfo_3387DE4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v22 = entity;
    if ( entity )
    {
      v23 = (MasterMissionListViewItem_o *)sub_1C2D6DC(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v23, (EventMissionEntity_o *)v22, 2, 0);
      if ( !v23 )
        sub_1C2D6EC(v24, v25);
      ComponentInChildren_object__51139460 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, const MethodInfo *))v23->klass->vtable._6_CheckMissionCond.methodPtr)(
                                                               v23,
                                                               v23->klass->vtable._6_CheckMissionCond.method);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v19 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1C2D6EC(ComponentInChildren_object__51139460, v27);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1C2D6EC(0, v30);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v34 = UnityEngine_Object__Instantiate_object__51752420(
                Parent,
                transform,
                (const MethodInfo_315ADE4 *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v34 )
          sub_1C2D6EC(0, v35);
        ComponentInChildren_object__51139460 = UnityEngine_Component__GetComponentInChildren_object__51139460(
                                                 (UnityEngine_Component_o *)v34,
                                                 (const MethodInfo_30C5384 *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__51139460;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1C2D6EC(ComponentInChildren_object__51139460, v27);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, void *))classBoardMissionListViewItemDraw->klass[1]._1.image)(
        classBoardMissionListViewItemDraw,
        v23,
        1,
        0,
        classBoardMissionListViewItemDraw->klass[1]._1.gc_desc);
      v36 = this->fields.conditionGrid;
      v37 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0);
      v38 = GameObjectExtensions__GetParent(v37, 0);
      if ( !v36 )
        sub_1C2D6EC(v38, v38);
      UIGrid__AddChild(v36, v38, 0);
      v19 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v40,
    (const MethodInfo_35106EC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1C2D6EC(conditionListObj, *(_QWORD *)&condData.fields.Type);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0);
}


void ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  __int64 v4; // x1
  UIScrollView_o *v5; // x0

  if ( (byte_4C2AC39 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2AC39 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0, 0) )
  {
    v5 = this->fields.effectScrollView;
    if ( !v5 )
      sub_1C2D6EC(0, v4);
    UIScrollView__UpdateScrollbars(v5, 0);
  }
}


void ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2AC3E & 1) == 0 )
  {
    sub_1C2D490(&ClassBoardBaseDialog___c_TypeInfo);
    byte_4C2AC3E = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C2D6EC(this, 0);
  return x->fields.priority;
}


int32_t ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C2D6EC(this, 0);
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
    sub_1C2D6EC(this, isDecide);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}