void ClassBoardBaseDialog___ctor(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C4696D & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C4696D = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ClassBoardBaseDialog__Close(ClassBoardBaseDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  UnityEngine_Object_o *classBoardSquare; // x21
  ClassBoardSquare_o *v6; // x0

  if ( (byte_4C4696A & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4696A = 1;
  }
  classBoardSquare = (UnityEngine_Object_o *)this->fields.classBoardSquare;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(classBoardSquare, 0, 0) )
  {
    v6 = this->fields.classBoardSquare;
    if ( !v6 )
      sub_1C372B4(0);
    ClassBoardSquare__SetSelectedEffectActive(v6, 0, 0);
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

  if ( (byte_4C4696C & 1) == 0 )
  {
    sub_1C37058(&Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C4696C = 1;
  }
  v4 = Method_ClassBoardBaseDialog_CloseItemInfoListWindow__;
  if ( (*((_BYTE *)Method_ClassBoardBaseDialog_CloseItemInfoListWindow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1C37070(Method_ClassBoardBaseDialog_CloseItemInfoListWindow__);
  v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
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
  Il2CppObject *v10; // x22
  Il2CppObject *v11; // x28
  int max_length; // w8
  unsigned int v13; // w21
  ClassBoardSquareEntity_o *v14; // x29
  System_Collections_Generic_List_object__o *v15; // x19
  Il2CppObject *p_obj; // x21
  System_Collections_Generic_List_object__o *v17; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v19; // x19
  SkillLvEntity_o *v20; // x24
  System_Collections_Generic_List_object__o *v21; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *v29; // x23
  _BOOL8 v30; // x0
  Il2CppObject *current; // x24
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x27
  System_Collections_Generic_List_object__o *v34; // x19
  Il2CppObject *v35; // x0
  FuncDispEntity_o *v36; // x19
  System_Collections_Generic_List_object__o *v37; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v38; // x25
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  __int64 v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v51; // w27
  int32_t v52; // w26
  int32_t v53; // w28
  int32_t v54; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v55; // x24
  __int64 v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  Il2CppClass **v66; // x0
  System_Int32_array *v67; // x19
  System_String_o *Detail; // x0
  const MethodInfo *v69; // x2
  System_String_o *v70; // x19
  System_String_o *Name; // x0
  int32_t priority; // w23
  int32_t id; // w24
  int32_t iconId; // w25
  int32_t skillType; // w26
  System_String_o *v76; // x27
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v77; // x21
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  struct System_Object_array *v80; // x8
  _QWORD *v81; // x9
  __int64 v82; // x10
  Il2CppClass **v83; // x0
  _BOOL8 v84; // x0
  Il2CppObject *value; // x23
  System_String_o *data; // x21
  Il2CppObject *v87; // x0
  Il2CppObject *v88; // x0
  _DWORD *v89; // x8
  Il2CppObject *v90; // x0
  Il2CppObject *v91; // x0
  Il2CppClass *v92; // x8
  System_Int32_array *v93; // x26
  int32_t v94; // w25
  Il2CppObject *v95; // x19
  __int64 v96; // x0
  _DWORD *v97; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v99; // x8
  il2cpp_array_size_t v100; // x10
  unsigned __int64 v101; // x9
  __int64 v102; // x10
  char *v103; // x12
  int v104; // w13
  _DWORD *v105; // x8
  int32_t v106; // w8
  Il2CppObject *v107; // x0
  const MethodInfo *v108; // x2
  Il2CppClass *v109; // x8
  System_String_o *v110; // x26
  Il2CppObject *v111; // x0
  _DWORD *v112; // x8
  int32_t v113; // w27
  Il2CppObject *v114; // x0
  _DWORD *v115; // x8
  int32_t v116; // w28
  Il2CppObject *v117; // x0
  _DWORD *v118; // x8
  int32_t v119; // w19
  System_String_o *v120; // x23
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v121; // x21
  __int64 v122; // x0
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  Il2CppClass **v128; // x0
  ClassBoardBaseDialog___c_c *v129; // x0
  System_Func_object__int__o *_9__28_0; // x20
  Il2CppObject *v131; // x19
  struct ClassBoardBaseDialog___c_StaticFields *static_fields; // x0
  int32_t v133; // w2
  const MethodInfo *v134; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v135; // x0
  ClassBoardBaseDialog___c_c *v136; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v137; // x19
  System_Func_object__int__o *_9__28_1; // x20
  Il2CppObject *v139; // x21
  struct ClassBoardBaseDialog___c_StaticFields *v140; // x0
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v143; // x0
  int32_t v146; // [xsp+Ch] [xbp-154h]
  ClassBoardCommandSpellMaster_o *v147; // [xsp+10h] [xbp-150h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+18h] [xbp-148h]
  ClassBoardSquareEntity_array *v149; // [xsp+20h] [xbp-140h]
  unsigned int v150; // [xsp+2Ch] [xbp-134h]
  System_Collections_Generic_Dictionary_object__object__o *v151; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v152; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v153; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v154; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v155; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v156; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v157; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v158; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v159; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v160; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v162; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  if ( (byte_4C46967 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1C37058(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1C37058(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1C37058(&Method_System_String_Join_int___);
    sub_1C37058(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__);
    sub_1C37058(&Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__);
    sub_1C37058(&ClassBoardBaseDialog___c_TypeInfo);
    sub_1C37058(&StringLiteral_811/*","*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C46967 = 1;
  }
  v162 = 0;
  entity = 0;
  v160 = 0;
  entitys = 0;
  memset(&v159, 0, sizeof(v159));
  v158 = 0;
  v156 = 0;
  memset(&v157, 0, sizeof(v157));
  memset(&v155, 0, sizeof(v155));
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_156;
  if ( !openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v8;
  v146 = dispType;
  v152 = v8;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v147 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v11 = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v151 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v151,
    (const MethodInfo_3462C80 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    v149 = openedSquareArray;
    v153 = (FuncDispMaster_o *)v11;
    while ( 1 )
    {
      if ( v13 >= max_length )
        sub_1C372BC(IsPassive);
      v14 = openedSquareArray->m_Items[v13];
      v15 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v15,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v15;
      if ( !v14 )
        goto LABEL_156;
      v150 = v13;
      IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsPassive(v14, 0);
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
                                          v14->fields.targetId,
                                          (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v10 )
        goto LABEL_156;
      IsPassive = (System_Int32_array *)SkillLvMaster__TryGetEntity(
                                          (SkillLvMaster_o *)v10,
                                          &v162,
                                          v14->fields.targetId,
                                          v14->fields.upSkillLv,
                                          0);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (System_Int32_array *)v162;
        if ( !v162 )
          goto LABEL_156;
        IsPassive = (System_Int32_array *)SkillLvEntity__IsContainsTurnOrCountBuff(v162, 0);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v162 )
        goto LABEL_156;
      if ( !v11 )
        goto LABEL_156;
      IsPassive = (System_Int32_array *)FuncDispMaster__IsContainFuncIds(
                                          (FuncDispMaster_o *)v11,
                                          &v160,
                                          v162->fields.funcId,
                                          v14->fields.classBoardBaseId,
                                          0);
      if ( !v162 )
        goto LABEL_156;
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        IsPassive = (System_Int32_array *)System_String__Join_int_(
                                            (System_String_o *)StringLiteral_811/*","*/,
                                            (System_Collections_Generic_IEnumerable_T__o *)v162->fields.funcId,
                                            (const MethodInfo_3192EDC *)Method_System_String_Join_int___);
        if ( !v151 )
          goto LABEL_156;
        p_obj = &IsPassive->obj;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v151,
                &IsPassive->obj,
                (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v17 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v17,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v151,
            p_obj,
            (Il2CppObject *)v17,
            (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v151,
                 p_obj,
                 (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v19 = v160;
        v20 = v162;
        v21 = (System_Collections_Generic_List_object__o *)Item;
        v22 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C372A4(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v22, v19, v20, 0, v14, 0);
        if ( !v21 )
          goto LABEL_156;
        items = v21->fields._items;
        v26 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v21->fields._version;
        if ( !items )
          goto LABEL_156;
        size = v21->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v21,
            (Il2CppObject *)v22,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &items->obj.klass + size;
          v21->fields._size = size + 1;
          v28[4] = (Il2CppClass *)v22;
          sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v22, v23, v24);
        }
LABEL_61:
        dispType = v146;
        goto LABEL_62;
      }
      IsPassive = SkillLvMaster__GetDispValFromSkill(
                    (SkillLvMaster_o *)v10,
                    v162->fields.skillId,
                    v162->fields.lv,
                    classStatisticsInfos,
                    0);
      if ( !v162 )
        goto LABEL_156;
      v67 = IsPassive;
      Detail = SkillLvEntity__getDetail(v162, 0, 1, 0);
      IsPassive = (System_Int32_array *)ClassBoardBaseDialog__ReplaceFractionFormat(Detail, v67, v69);
      if ( !entity )
        goto LABEL_156;
      v70 = (System_String_o *)IsPassive;
      Name = SkillEntity__getName((SkillEntity_o *)entity, 0);
      priority = v14->fields.priority;
      id = v14->fields.id;
      iconId = v14->fields.iconId;
      skillType = v14->fields.skillType;
      v76 = Name;
      v77 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C372A4(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v77,
        v76,
        v70,
        id,
        priority,
        iconId,
        skillType,
        0);
      if ( !v152 )
        goto LABEL_156;
      v80 = v152->fields._items;
      dispType = v146;
      v81 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v152->fields._version;
      if ( !v80 )
        goto LABEL_156;
      v82 = v152->fields._size;
      if ( (unsigned int)v82 >= LODWORD(v80->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v152,
          (Il2CppObject *)v77,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
      }
      else
      {
        v83 = &v80->obj.klass + v82;
        v152->fields._size = v82 + 1;
        v83[4] = (Il2CppClass *)v77;
        sub_1C36FFC((CGThumbnailListItem_o *)(v83 + 4), (int32_t)v77, v78, v79);
      }
LABEL_62:
      openedSquareArray = v149;
      max_length = v149->max_length;
      v13 = v150 + 1;
      if ( (int)(v150 + 1) >= max_length )
        goto LABEL_81;
    }
    IsPassive = (System_Int32_array *)ClassBoardSquareEntity__get_IsCommandSpell(v14, 0);
    if ( dispType == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (System_Int32_array *)v147;
    if ( !v147 )
      goto LABEL_156;
    IsPassive = (System_Int32_array *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v147,
                                        &entitys,
                                        v14->fields.targetId,
                                        v14->fields.upSkillLv,
                                        0);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v29 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v29,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (System_Int32_array *)entitys;
    if ( !entitys )
      goto LABEL_156;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v154,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    *(_OWORD *)&v159.fields._list = *(_OWORD *)&v154.fields._dictionary;
    v159.fields._current = v154.fields._current.fields.key;
    while ( 1 )
    {
      v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v159,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v11 = (Il2CppObject *)v153;
      if ( !v30 )
        break;
      current = v159.fields._current;
      if ( !v159.fields._current )
        sub_1C372B4(v30);
      if ( !v153 )
        sub_1C372B4(v30);
      if ( FuncDispMaster__IsContainFuncIds(
             v153,
             &v158,
             (System_Int32_array *)v159.fields._current[3].klass,
             v14->fields.classBoardBaseId,
             0) )
      {
        v32 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_811/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_3192EDC *)Method_System_String_Join_int___);
        if ( !v29 )
          sub_1C372B4(v32);
        v33 = v32;
        if ( !System_Collections_Generic_List_object___Contains(
                v29,
                v32,
                (const MethodInfo_37A33B4 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v151 )
            sub_1C372B4(0);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v151,
                  v33,
                  (const MethodInfo_3463824 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v34 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v34,
              (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v151,
              v33,
              (Il2CppObject *)v34,
              (const MethodInfo_346361C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v35 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v151,
                  v33,
                  (const MethodInfo_34635B0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v36 = v158;
          v37 = (System_Collections_Generic_List_object__o *)v35;
          v38 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C372A4(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v38,
            v36,
            0,
            (ClassBoardCommandSpellEntity_o *)current,
            v14,
            0);
          if ( !v37 )
            sub_1C372B4(v39);
          v42 = v37->fields._items;
          v43 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
          ++v37->fields._version;
          if ( !v42 )
            sub_1C372B4(v39);
          v44 = v37->fields._size;
          if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v37,
              (Il2CppObject *)v38,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v45 = &v42->obj.klass + v44;
            v37->fields._size = v44 + 1;
            v45[4] = (Il2CppClass *)v38;
            sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 4), (int32_t)v38, v40, v41);
          }
          v63 = v29->fields._items;
          v64 = Method_System_Collections_Generic_List_string__Add__;
          ++v29->fields._version;
          if ( !v63 )
            sub_1C372B4(v46);
          v65 = v29->fields._size;
          if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v29,
              v33,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v66 = &v63->obj.klass + v65;
            v29->fields._size = v65 + 1;
            v66[4] = (Il2CppClass *)v33;
            sub_1C36FFC((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v33, v47, v48);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v51 = v14->fields.priority;
        v53 = v14->fields.id;
        v52 = v14->fields.iconId;
        v54 = v14->fields.skillType;
        v55 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C372A4(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v55, klass, monitor, v53, v51, v52, v54, 0);
        if ( !v152 )
          sub_1C372B4(v56);
        v59 = v152->fields._items;
        v60 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v152->fields._version;
        if ( !v59 )
          sub_1C372B4(v56);
        v61 = v152->fields._size;
        if ( (unsigned int)v61 >= LODWORD(v59->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v152,
            (Il2CppObject *)v55,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
        }
        else
        {
          v62 = &v59->obj.klass + v61;
          v152->fields._size = v61 + 1;
          v62[4] = (Il2CppClass *)v55;
          sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v55, v57, v58);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v159,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_81:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (System_Int32_array *)v151;
  if ( !v151 )
LABEL_156:
    sub_1C372B4(IsPassive);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v154,
    v151,
    (const MethodInfo_3463A60 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v157 = v154;
  while ( 1 )
  {
    v84 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v157,
            (const MethodInfo_35600DC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v84 )
      break;
    value = v157.fields._current.fields.value;
    if ( !v157.fields._current.fields.value )
      sub_1C372B4(v84);
    if ( SLODWORD(v157.fields._current.fields.value[1].monitor) >= 1 )
    {
      data = (System_String_o *)StringLiteral_1/*""*/;
      v87 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)v157.fields._current.fields.value,
              0,
              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v87 )
        sub_1C372B4(0);
      if ( v87[1].monitor )
      {
        v88 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)value,
                0,
                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v88 )
          sub_1C372B4(0);
        v89 = v88[1].monitor;
        if ( !v89 )
          sub_1C372B4(v88);
        if ( !Master_object )
          sub_1C372B4(0);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v156,
               v89[4],
               (const MethodInfo_33A10EC *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v156 )
            sub_1C372B4(0);
          data = SkillEntity__getName((SkillEntity_o *)v156, 0);
        }
      }
      else
      {
        v90 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)value,
                0,
                (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v90 )
          sub_1C372B4(0);
        if ( v90[2].klass )
        {
          v91 = System_Collections_Generic_List_object___get_Item(
                  (System_Collections_Generic_List_object__o *)value,
                  0,
                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v91 )
            sub_1C372B4(0);
          v92 = v91[2].klass;
          if ( !v92 )
            sub_1C372B4(v91);
          data = (System_String_o *)v92->_1.byval_arg.data;
        }
      }
      v93 = (System_Int32_array *)sub_1C37100(int___TypeInfo, 0);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v154,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v94 = 0;
      *(_OWORD *)&v155.fields._list = *(_OWORD *)&v154.fields._dictionary;
      v155.fields._current = v154.fields._current.fields.key;
LABEL_102:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v155,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v155,
          (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v107 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v107 )
          sub_1C372B4(0);
        v109 = v107[1].klass;
        if ( !v109 )
          sub_1C372B4(v107);
        v110 = ClassBoardBaseDialog__ReplaceFractionFormat(*(System_String_o **)&v109->_1.byval_arg.bits, v93, v108);
        v111 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v111 )
          sub_1C372B4(0);
        v112 = v111[2].monitor;
        if ( !v112 )
          sub_1C372B4(v111);
        v113 = v112[5];
        v114 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v114 )
          sub_1C372B4(0);
        v115 = v114[2].monitor;
        if ( !v115 )
          sub_1C372B4(v114);
        v116 = v115[6];
        v117 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v117 )
          sub_1C372B4(0);
        v118 = v117[2].monitor;
        if ( !v118 )
          sub_1C372B4(v117);
        v119 = v118[14];
        v120 = data;
        v121 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C372A4(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(v121, v120, v110, v113, v94, v116, v119, 0);
        if ( !v152 )
          sub_1C372B4(v122);
        v125 = v152->fields._items;
        v126 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v152->fields._version;
        if ( !v125 )
          sub_1C372B4(v122);
        v127 = v152->fields._size;
        if ( (unsigned int)v127 >= LODWORD(v125->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v152,
            (Il2CppObject *)v121,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
        }
        else
        {
          v128 = &v125->obj.klass + v127;
          v152->fields._size = v127 + 1;
          v128[4] = (Il2CppClass *)v121;
          sub_1C36FFC((CGThumbnailListItem_o *)(v128 + 4), (int32_t)v121, v123, v124);
        }
        continue;
      }
      v95 = v155.fields._current;
      v96 = sub_1C37100(int___TypeInfo, 0);
      if ( !v95 )
        sub_1C372B4(v96);
      v97 = v95[1].monitor;
      if ( v97 )
      {
        if ( !v10 )
          sub_1C372B4(v96);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v10,
                                                               v97[4],
                                                               v97[5],
                                                               classStatisticsInfos,
                                                               0);
LABEL_109:
        v99 = (__int64)DispValFromSkill;
      }
      else
      {
        v99 = v96;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v95[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 classStatisticsInfos,
                                                                 0);
          goto LABEL_109;
        }
      }
      if ( !v93 )
        sub_1C372B4(DispValFromSkill);
      v100 = v93->max_length;
      if ( v100 )
      {
        if ( (int)v100 >= 1 )
        {
          v101 = 0;
          v102 = (unsigned int)v93->max_length;
          do
          {
            if ( !v99 )
              sub_1C372B4(DispValFromSkill);
            if ( v101 >= *(unsigned int *)(v99 + 24) )
              sub_1C372BC(DispValFromSkill);
            v103 = (char *)v93 + 4 * v101;
            v104 = *(_DWORD *)(v99 + 32 + 4 * v101++);
            *((_DWORD *)v103 + 8) += v104;
          }
          while ( v102 != v101 );
        }
      }
      else
      {
        v93 = (System_Int32_array *)v99;
      }
      v105 = v95[2].monitor;
      if ( !v105 )
        sub_1C372B4(DispValFromSkill);
      v106 = v105[20];
      if ( v106 > v94 )
        v94 = v106;
      goto LABEL_102;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v157,
    (const MethodInfo_35601FC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v129 = ClassBoardBaseDialog___c_TypeInfo;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v129 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_0 = (System_Func_object__int__o *)v129->static_fields->__9__28_0;
  if ( !_9__28_0 )
  {
    if ( !v129->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v129);
      v129 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v131 = (Il2CppObject *)v129->static_fields->__9;
    _9__28_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_0, v131, Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_0__, 0);
    static_fields = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    static_fields->__9__28_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v133, v134);
  }
  v135 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v152,
           (System_Func_TSource__TKey__o *)_9__28_0,
           (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v136 = ClassBoardBaseDialog___c_TypeInfo;
  v137 = v135;
  if ( !ClassBoardBaseDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardBaseDialog___c_TypeInfo);
    v136 = ClassBoardBaseDialog___c_TypeInfo;
  }
  _9__28_1 = (System_Func_object__int__o *)v136->static_fields->__9__28_1;
  if ( !_9__28_1 )
  {
    if ( !v136->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v136);
      v136 = ClassBoardBaseDialog___c_TypeInfo;
    }
    v139 = (Il2CppObject *)v136->static_fields->__9;
    _9__28_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(_9__28_1, v139, Method_ClassBoardBaseDialog___c__GetOpenSkillListLocal_b__28_1__, 0);
    v140 = ClassBoardBaseDialog___c_TypeInfo->static_fields;
    v140->__9__28_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__28_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v140->__9__28_1, (int32_t)_9__28_1, v141, v142);
  }
  v143 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v137,
                                                                (System_Func_TSource__TKey__o *)_9__28_1,
                                                                (const MethodInfo_3126458 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v143, (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void ClassBoardBaseDialog__Init(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectObj; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *itemListObj; // x20
  UnityEngine_Object_o *conditionListObj; // x20

  if ( (byte_4C46961 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46961 = 1;
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
    sub_1C372B4(gameObject);
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *itemIconComponentList; // x8
  __int64 size; // x23
  __int64 v13; // x21
  __int64 v14; // x22
  unsigned __int64 v15; // x24
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  Il2CppObject *Instance; // x19
  ItemLinkInfoWindowComponent_CallbackFunc_o *v19; // x23

  if ( (byte_4C4696B & 1) == 0 )
  {
    sub_1C37058(&ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__);
    sub_1C37058(&ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
    byte_4C4696B = 1;
  }
  v5 = sub_1C372A4(ClassBoardBaseDialog___c__DisplayClass32_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_22;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = closedAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)closedAction, v9, v10);
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Any_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.itemIconComponentList,
                                                        (const MethodInfo_30F37D0 *)Method_System_Linq_Enumerable_Any_ClassBoardItemIconComponent___);
  if ( ((unsigned __int8)Item & 1) != 0 )
  {
    itemIconComponentList = this->fields.itemIconComponentList;
    if ( !itemIconComponentList )
      goto LABEL_22;
    size = (unsigned int)itemIconComponentList->fields._size;
    v13 = sub_1C37100(int___TypeInfo, (unsigned int)size);
    v14 = sub_1C37100(int___TypeInfo, (unsigned int)size);
    if ( (int)size >= 1 )
    {
      v15 = 0;
      while ( 1 )
      {
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v15,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v13 )
          break;
        if ( v15 >= *(unsigned int *)(v13 + 24) )
          goto LABEL_23;
        *(_DWORD *)(v13 + 32 + 4 * v15) = HIDWORD(Item[2].fields._items);
        Item = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
        if ( !Item )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                              Item,
                                                              v15,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Item__);
        if ( !Item || !v14 )
          break;
        if ( v15 >= *(unsigned int *)(v14 + 24) )
LABEL_23:
          sub_1C372BC(Item);
        *(_DWORD *)(v14 + 32 + 4 * v15++) = Item[2].fields._syncRoot;
        if ( size == v15 )
          goto LABEL_17;
      }
LABEL_22:
      sub_1C372B4(Item);
    }
LABEL_17:
    v16 = Method_ClassBoardBaseDialog_OpenItemInfoListWindow__;
    if ( (*((_BYTE *)Method_ClassBoardBaseDialog_OpenItemInfoListWindow__ + 83) & 2) != 0 )
      v16 = (_QWORD *)sub_1C37070(Method_ClassBoardBaseDialog_OpenItemInfoListWindow__);
    v17 = (System_Reflection_MethodBase_o *)sub_1C3703C(v16, v16[4]);
    OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v19 = (ItemLinkInfoWindowComponent_CallbackFunc_o *)sub_1C372A4(ItemLinkInfoWindowComponent_CallbackFunc_TypeInfo);
    ItemLinkInfoWindowComponent_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)v5,
      Method_ClassBoardBaseDialog___c__DisplayClass32_0__OpenItemInfoListWindow_b__0__,
      0);
    if ( !Instance )
      goto LABEL_22;
    CommonUI__OpenItemLinkInfoListWindow(
      (CommonUI_o *)Instance,
      (System_Int32_array *)v13,
      (System_Int32_array *)v14,
      v19,
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

  if ( (byte_4C46968 & 1) == 0 )
  {
    sub_1C37058(&SkillDetailParamFormatResolver_TypeInfo);
    byte_4C46968 = 1;
  }
  v5 = FuncDispMaster__ReplaceFractionFormat(text, funcVals, 0);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__ApplyGivenValues(v5, funcVals, 0);
}


void ClassBoardBaseDialog__SetDisableClickItemIcon(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *itemIconComponentList; // x0
  System_Collections_Generic_List_Enumerator_object__o v4; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C46966 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__get_Count__);
    byte_4C46966 = 1;
  }
  memset(&v4, 0, sizeof(v4));
  itemIconComponentList = (System_Collections_Generic_List_object__o *)this->fields.itemIconComponentList;
  if ( itemIconComponentList && itemIconComponentList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v4,
      itemIconComponentList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v4,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__MoveNext__) )
    {
      if ( !v4.fields._current )
        sub_1C372B4(0);
      ClassBoardItemIconComponent__SetDisableClick((ClassBoardItemIconComponent_o *)v4.fields._current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v4,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardItemIconComponent__Dispose__);
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
    sub_1C372B4(this);
  }
  UIScrollView__UpdateScrollbars((UIScrollView_o *)this, 0);
}


void ClassBoardBaseDialog__SetQpLabel(ClassBoardBaseDialog_o *this, int32_t needNum, const MethodInfo *method)
{
  System_String_o *SelfUserGame; // x0
  System_String_c *klass; // x23
  UILabel_o *itemQpLabel; // x21
  UILabel_o *itemQpNum; // x21
  System_String_o *v9; // x0
  System_String_o *v10; // x22
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  Il2CppObject *v17; // x0
  UILabel_o *itemHaveQpLabel; // x20
  UILabel_o *itemHaveQpNum; // x20
  System_String_o *v20; // x21
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  Il2CppObject *v27; // x0
  System_String_c *v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C46964 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&long_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_3379/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/);
    sub_1C37058(&StringLiteral_3381/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/);
    sub_1C37058(&StringLiteral_3378/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/);
    sub_1C37058(&StringLiteral_3380/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/);
    sub_1C37058(&StringLiteral_3376/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/);
    byte_4C46964 = 1;
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
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3378/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL"*/, 0);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0);
    itemQpNum = this->fields.itemQpNum;
    v9 = (System_String_o *)StringLiteral_3380/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/;
  }
  else
  {
    SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3379/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_LABEL_SHORTAGE"*/, 0);
    if ( !itemQpLabel )
      goto LABEL_19;
    UILabel__set_text(itemQpLabel, SelfUserGame, 0);
    itemQpNum = this->fields.itemQpNum;
    v9 = (System_String_o *)StringLiteral_3381/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM_SHORTAGE"*/;
  }
  v10 = LocalizationManager__Get(v9, 0);
  LODWORD(v28) = needNum;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28, v11, v12, v13, v14, v15, v16);
  SelfUserGame = System_String__Format(v10, v17, 0);
  if ( !itemQpNum )
    goto LABEL_19;
  UILabel__set_text(itemQpNum, SelfUserGame, 0);
  itemHaveQpLabel = this->fields.itemHaveQpLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  SelfUserGame = LocalizationManager__Get((System_String_o *)StringLiteral_3376/*"CLASS_BOARD_DIALOG_ITEM_INFO_HAVE_QP_LABEL"*/, 0);
  if ( !itemHaveQpLabel )
    goto LABEL_19;
  UILabel__set_text(itemHaveQpLabel, SelfUserGame, 0);
  itemHaveQpNum = this->fields.itemHaveQpNum;
  v20 = LocalizationManager__Get((System_String_o *)StringLiteral_3380/*"CLASS_BOARD_DIALOG_ITEM_INFO_NEED_QP_NUM"*/, 0);
  v28 = klass;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &v28, v21, v22, v23, v24, v25, v26);
  SelfUserGame = System_String__Format(v20, v27, 0);
  if ( !itemHaveQpNum
    || (UILabel__set_text(itemHaveQpNum, SelfUserGame, 0),
        (SelfUserGame = (System_String_o *)this->fields.itemQpObj) == 0)
    || (SelfUserGame = (System_String_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)SelfUserGame,
                                            0)) == 0 )
  {
LABEL_19:
    sub_1C372B4(SelfUserGame);
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
  const MethodInfo *v24; // x3
  ClassBoardSquareEntity_o *v25; // x23
  UnityEngine_GameObject_o *v26; // x22
  const MethodInfo *v27; // x4
  float v28; // s11
  Il2CppObject *current; // x24
  Il2CppObject *effectDetailObj; // x22
  Il2CppObject *v31; // x0
  UnityEngine_GameObject_o *v32; // x22
  Il2CppObject *Component_object; // x0
  IClassBoardSquareModel_c *v34; // x8
  System_String_o *monitor; // x25
  System_String_o *v36; // x26
  int32_t v37; // w24
  __int64 v38; // x9
  ClassBoardDialogSkillDetailPartsComponent_o *v39; // x23
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x0
  float v43; // s10
  struct UIScrollView_o *effectScrollView; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v46; // x0
  __int64 v47; // x0
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+20h] [xbp-A0h] BYREF
  ClassBoardSquareEntity_o *entity; // [xsp+38h] [xbp-88h] BYREF

  if ( (byte_4C46962 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardSquareEntity___TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46962 = 1;
  }
  entity = 0;
  memset(&v49, 0, sizeof(v49));
  effectObj = this->fields.effectObj;
  if ( !effectObj )
    goto LABEL_54;
  UnityEngine_GameObject__SetActive(effectObj, 1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  effectObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
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
    v16 = sub_1C87870(squareModel, IClassBoardSquareModel_TypeInfo, 1);
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
    v22 = sub_1C87870(squareModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  effectObj = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v22)(
                                            squareModel,
                                            *(_QWORD *)(v22 + 8));
  if ( !v13 )
    goto LABEL_54;
  ClassBoardSquareMaster__TryGetEntity(v13, &entity, v19, (int32_t)effectObj, 0);
  effectObj = (UnityEngine_GameObject_o *)sub_1C37100(ClassBoardSquareEntity___TypeInfo, 1);
  if ( !effectObj )
    goto LABEL_54;
  v25 = entity;
  v26 = effectObj;
  if ( entity )
  {
    effectObj = (UnityEngine_GameObject_o *)sub_1C37194(entity, effectObj->klass->_1.element_class);
    if ( !effectObj )
    {
      v47 = sub_1C372D8(0);
      sub_1C37180(v47, 0);
    }
  }
  if ( !LODWORD(v26[1].klass) )
    sub_1C372BC(effectObj);
  v26[1].monitor = v25;
  sub_1C36FFC((CGThumbnailListItem_o *)&v26[1].monitor, (int32_t)v25, v23, v24);
  effectObj = (UnityEngine_GameObject_o *)ClassBoardBaseDialog__GetOpenSkillListLocal(
                                            (ClassBoardSquareEntity_array *)v26,
                                            0,
                                            0,
                                            classStatisticsInfos,
                                            v27);
  if ( !effectObj )
    goto LABEL_54;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    (System_Collections_Generic_List_object__o *)effectObj,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
  v28 = 0.0;
  v49 = v48;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v49,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
  {
    current = v49.fields._current;
    effectDetailObj = (Il2CppObject *)this->fields.effectDetailObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v31 = UnityEngine_Object__Instantiate_object_(
            effectDetailObj,
            (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    v32 = (UnityEngine_GameObject_o *)v31;
    if ( !v31 )
      sub_1C372B4(0);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)v31,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardDialogSkillDetailPartsComponent___);
    if ( !current )
      sub_1C372B4(Component_object);
    v34 = squareModel->klass;
    v36 = (System_String_o *)current[1].klass;
    monitor = (System_String_o *)current[1].monitor;
    v37 = (int32_t)current[2].monitor;
    v38 = *(unsigned __int16 *)&squareModel->klass->_2.rank;
    v39 = (ClassBoardDialogSkillDetailPartsComponent_o *)Component_object;
    if ( *(_WORD *)&squareModel->klass->_2.rank )
    {
      v40 = &v34->_1.interfaceOffsets->offset;
      while ( *((IClassBoardSquareModel_c **)v40 - 1) != IClassBoardSquareModel_TypeInfo )
      {
        --v38;
        v40 += 4;
        if ( !v38 )
          goto LABEL_35;
      }
      v41 = (__int64)&v34->vtable[*v40 + 7];
    }
    else
    {
LABEL_35:
      v41 = sub_1C87870(squareModel, IClassBoardSquareModel_TypeInfo, 7);
    }
    v42 = (*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v41)(squareModel, *(_QWORD *)(v41 + 8));
    if ( !v39 )
      sub_1C372B4(v42);
    v43 = ClassBoardDialogSkillDetailPartsComponent__SetDetail(v39, v36, monitor, v37, v42, 0);
    GameObjectExtensions__SetParent_36138108(v32, this->fields.effectDetailParent, 0);
    if ( !byte_4C3C926 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    GameObjectExtensions__SetLocalScale(v32, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    GameObjectExtensions__SetLocalPosition_36132496(v32, 0.0, -v28, 0.0, 0);
    UnityEngine_GameObject__SetActive(v32, 1, 0);
    v28 = v28 + v43;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v49,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
        v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)effectObj, 0);
        GameObjectExtensions__SetLocalPositionY(v46, disableScrollViewPosY, 0);
        return;
      }
    }
LABEL_54:
    sub_1C372B4(effectObj);
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
  UnityEngine_Object_o *itemQpObj; // x21
  System_Collections_Generic_List_object__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x20
  _BOOL4 v18; // w27
  char v19; // w26
  _BOOL4 i; // w23
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x24
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  int32_t v35; // w0
  __int64 v36; // x8
  int32_t v37; // w23
  __int64 v38; // x9
  IClassBoardItemModel_c **v39; // x10
  __int64 v40; // x0
  int32_t v41; // w24
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  _BOOL8 isQP; // x0
  const MethodInfo *v45; // x2
  Il2CppObject *itemIcon; // x25
  Il2CppObject *v47; // x0
  UIGrid_o *itemIconListGrid; // x26
  UnityEngine_Transform_o *transform; // x0
  Il2CppObject *Component_object; // x0
  Il2CppObject *v51; // x25
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_Collections_Generic_List_object__o *v54; // x0
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x8
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  struct System_Collections_Generic_List_ClassBoardItemIconComponent__o **p_itemIconComponentList; // [xsp+8h] [xbp-68h]

  if ( (byte_4C46963 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
    sub_1C37058(&IClassBoardItemModel_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_3374/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/);
    byte_4C46963 = 1;
  }
  itemInfoLabel = (UnityEngine_Object_o *)this->fields.itemInfoLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(itemInfoLabel, 0, 0) )
  {
    v6 = this->fields.itemInfoLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    itemListObj = LocalizationManager__Get((System_String_o *)StringLiteral_3374/*"CLASS_BOARD_DIALOG_ITEM_INFO"*/, 0);
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
  v9 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardItemIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardItemIconComponent___ctor__);
  this->fields.itemIconComponentList = (struct System_Collections_Generic_List_ClassBoardItemIconComponent__o *)v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.itemIconComponentList, (int32_t)v9, v10, v11);
  itemListObj = (System_String_o *)this->fields.itemListObj;
  p_itemIconComponentList = &this->fields.itemIconComponentList;
  if ( !itemListObj )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemListObj, 1, 0);
  if ( !itemList )
    goto LABEL_86;
  klass = itemList->klass;
  v13 = *(unsigned __int16 *)&itemList->klass->_2.rank;
  if ( *(_WORD *)&itemList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IClassBoardItemModel__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo )
    {
      --v13;
      p_offset += 4;
      if ( !v13 )
        goto LABEL_21;
    }
    v15 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_21:
    v15 = sub_1C87870(itemList, System_Collections_Generic_IEnumerable_IClassBoardItemModel__TypeInfo, 0);
  }
  v16 = (*(__int64 (__fastcall **)(System_Collections_Generic_IReadOnlyCollection_IClassBoardItemModel__o *, _QWORD))v15)(
          itemList,
          *(_QWORD *)(v15 + 8));
  v17 = v16;
  v18 = 0;
  v19 = 1;
LABEL_24:
  for ( i = v18; ; i = 1 )
  {
    if ( !v17 )
      sub_1C372B4(v16);
    v21 = *(_QWORD *)v17;
    v18 = i;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_30;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_30:
      v24 = sub_1C87870(v17, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v17, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v17;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IClassBoardItemModel__c **)v27 - 1) != System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_37;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_37:
      v28 = sub_1C87870(v17, System_Collections_Generic_IEnumerator_IClassBoardItemModel__TypeInfo, 0);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v17, *(_QWORD *)(v28 + 8));
    v30 = v29;
    if ( !v29 )
      sub_1C372B4(0);
    v31 = *(_QWORD *)v29;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((IClassBoardItemModel_c **)v33 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_44;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_44:
      v34 = sub_1C87870(v29, IClassBoardItemModel_TypeInfo, 0);
    }
    v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v30, *(_QWORD *)(v34 + 8));
    v36 = *(_QWORD *)v30;
    v37 = v35;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v30 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v30 + 302LL) )
    {
      v39 = (IClassBoardItemModel_c **)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *(v39 - 1) != IClassBoardItemModel_TypeInfo )
      {
        --v38;
        v39 += 2;
        if ( !v38 )
          goto LABEL_50;
      }
      v40 = v36 + 16LL * (*(_DWORD *)v39 + 1) + 312;
    }
    else
    {
LABEL_50:
      v40 = sub_1C87870(v30, IClassBoardItemModel_TypeInfo, 1);
    }
    v41 = (*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v30, *(_QWORD *)(v40 + 8));
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ItemMaster___);
    if ( !MasterData_object )
      sub_1C372B4(0);
    isQP = ItemMaster__isQP((ItemMaster_o *)MasterData_object, v37, 0);
    if ( !isQP )
    {
      itemIcon = (Il2CppObject *)this->fields.itemIcon;
      if ( (v19 & 1) == 0 )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v47 = UnityEngine_Object__Instantiate_object_(
                itemIcon,
                (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        itemIcon = v47;
        if ( !v47 )
          sub_1C372B4(0);
        itemIconListGrid = this->fields.itemIconListGrid;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v47, 0);
        if ( !itemIconListGrid )
          sub_1C372B4(transform);
        UIGrid__AddChild(itemIconListGrid, transform, 0);
      }
      if ( !itemIcon )
        sub_1C372B4(isQP);
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemIcon, 1, 0);
      if ( !byte_4C3C921 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C921 = 1;
      }
      GameObjectExtensions__SetLocalPosition(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
        0);
      if ( !byte_4C3C926 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      GameObjectExtensions__SetLocalScale(
        (UnityEngine_GameObject_o *)itemIcon,
        UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
        0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)itemIcon,
                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardItemIconComponent___);
      v51 = Component_object;
      if ( !Component_object )
        sub_1C372B4(0);
      ClassBoardItemIconComponent__setItemInfo((ClassBoardItemIconComponent_o *)Component_object, v37, v41, 0);
      v54 = (System_Collections_Generic_List_object__o *)*p_itemIconComponentList;
      if ( !*p_itemIconComponentList )
        sub_1C372B4(0);
      items = v54->fields._items;
      v56 = Method_System_Collections_Generic_List_ClassBoardItemIconComponent__Add__;
      ++v54->fields._version;
      if ( !items )
        sub_1C372B4(v54);
      size = v54->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v54,
          v51,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v58 = &items->obj.klass + size;
        v54->fields._size = size + 1;
        v58[4] = (Il2CppClass *)v51;
        sub_1C36FFC((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v51, v52, v53);
      }
      v19 = 0;
      goto LABEL_24;
    }
    ClassBoardBaseDialog__SetQpLabel(this, v41, v45);
  }
  v59 = *(_QWORD *)v17;
  v60 = *(unsigned __int16 *)(*(_QWORD *)v17 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v17 + 302LL) )
  {
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_78;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_78:
    v62 = sub_1C87870(v17, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v62)(v17, *(_QWORD *)(v62 + 8));
  itemListObj = (System_String_o *)this->fields.itemIconListGrid;
  if ( !itemListObj )
LABEL_86:
    sub_1C372B4(itemListObj);
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
  int32_t v14; // w1
  struct System_Int32_array *items; // x9
  _QWORD *v16; // x10
  __int64 size; // x11
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x20
  char v19; // w23
  _BOOL8 v20; // x0
  Il2CppObject *v21; // x22
  MasterMissionListViewItem_o *v22; // x21
  __int64 v23; // x0
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  UnityEngine_Component_o *classBoardMissionListViewItemDraw; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Parent; // x22
  UnityEngine_Component_o *conditionGrid; // x0
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v30; // x0
  UIGrid_o *v31; // x21
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_Transform_o *v33; // x0
  System_Collections_Generic_List_Enumerator_int__o v34; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v35; // [xsp+20h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-68h] BYREF

  v3 = *(_QWORD *)&condData.fields.Type;
  if ( (byte_4C46965 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
    sub_1C37058(&Method_DataManager_GetMaster_CommonReleaseMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMissionMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&MasterMissionListViewItem_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_Transform___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46965 = 1;
  }
  entity = 0;
  memset(&v35, 0, sizeof(v35));
  conditionListObj = this->fields.conditionListObj;
  if ( !conditionListObj )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive(conditionListObj, 1, 0);
  v6 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (unsigned int)(v3 - 23) >= 2 )
  {
    if ( (_DWORD)v3 == 113 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_CommonReleaseMaster___);
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
            sub_1C372BC(conditionListObj);
          v13 = *((_QWORD *)&v11[1].monitor + v12);
          if ( !v13 )
            goto LABEL_58;
          if ( (unsigned int)(*(_DWORD *)(v13 + 28) - 23) <= 1 )
          {
            if ( !v6 )
              goto LABEL_58;
            v14 = *(_DWORD *)(v13 + 32);
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
                v14,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
              klass = v11[1].klass;
            }
            else
            {
              v6->fields._size = size + 1;
              items->m_Items[size] = v14;
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
        *(const MethodInfo_3786000 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = v9 + 1;
      v7->m_Items[v9] = HIDWORD(v3);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  conditionListObj = (UnityEngine_GameObject_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMissionMaster___);
  if ( !v6 )
    goto LABEL_58;
  v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)conditionListObj;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    v6,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v19 = 1;
  v35 = v34;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v35,
            (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v20 )
      break;
    if ( !v18 )
      sub_1C372B4(v20);
    DataMasterBase_object__object__int___TryGetEntity(
      v18,
      &entity,
      v35.fields._current,
      (const MethodInfo_33A10EC *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__TryGetEntity__);
    v21 = entity;
    if ( entity )
    {
      v22 = (MasterMissionListViewItem_o *)sub_1C372A4(MasterMissionListViewItem_TypeInfo);
      MasterMissionListViewItem___ctor(v22, (EventMissionEntity_o *)v21, 2, 0);
      if ( !v22 )
        sub_1C372B4(v23);
      ComponentInChildren_object__51242636 = (Il2CppObject *)((__int64 (__fastcall *)(MasterMissionListViewItem_o *, const MethodInfo *))v22->klass->vtable._6_CheckMissionCond.methodPtr)(
                                                               v22,
                                                               v22->klass->vtable._6_CheckMissionCond.method);
      classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw;
      if ( (v19 & 1) == 0 )
      {
        if ( !classBoardMissionListViewItemDraw )
          sub_1C372B4(ComponentInChildren_object__51242636);
        gameObject = UnityEngine_Component__get_gameObject(
                       (UnityEngine_Component_o *)this->fields.classBoardMissionListViewItemDraw,
                       0);
        Parent = (Il2CppObject *)GameObjectExtensions__GetParent(gameObject, 0);
        conditionGrid = (UnityEngine_Component_o *)this->fields.conditionGrid;
        if ( !conditionGrid )
          sub_1C372B4(0);
        transform = UnityEngine_Component__get_transform(conditionGrid, 0);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v30 = UnityEngine_Object__Instantiate_object__51855596(
                Parent,
                transform,
                (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_Transform___);
        if ( !v30 )
          sub_1C372B4(0);
        ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                                 (UnityEngine_Component_o *)v30,
                                                 (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_ClassBoardMissionListViewItemDraw___);
        classBoardMissionListViewItemDraw = (UnityEngine_Component_o *)ComponentInChildren_object__51242636;
      }
      if ( !classBoardMissionListViewItemDraw )
        sub_1C372B4(ComponentInChildren_object__51242636);
      ((void (__fastcall *)(UnityEngine_Component_o *, MasterMissionListViewItem_o *, __int64, _QWORD, void *))classBoardMissionListViewItemDraw->klass[1]._1.image)(
        classBoardMissionListViewItemDraw,
        v22,
        1,
        0,
        classBoardMissionListViewItemDraw->klass[1]._1.gc_desc);
      v31 = this->fields.conditionGrid;
      v32 = UnityEngine_Component__get_gameObject(classBoardMissionListViewItemDraw, 0);
      v33 = GameObjectExtensions__GetParent(v32, 0);
      if ( !v31 )
        sub_1C372B4(v33);
      UIGrid__AddChild(v31, v33, 0);
      v19 = 0;
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v35,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
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
    sub_1C372B4(conditionListObj);
  }
  UnityEngine_GameObject__SetActive(conditionListObj, 0, 0);
}


void ClassBoardBaseDialog__Update(ClassBoardBaseDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *effectScrollView; // x20
  UIScrollView_o *v4; // x0

  if ( (byte_4C46969 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C46969 = 1;
  }
  effectScrollView = (UnityEngine_Object_o *)this->fields.effectScrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(effectScrollView, 0, 0) )
  {
    v4 = this->fields.effectScrollView;
    if ( !v4 )
      sub_1C372B4(0);
    UIScrollView__UpdateScrollbars(v4, 0);
  }
}


void ClassBoardBaseDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4696E & 1) == 0 )
  {
    sub_1C37058(&ClassBoardBaseDialog___c_TypeInfo);
    byte_4C4696E = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ClassBoardBaseDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardBaseDialog___c_TypeInfo->static_fields->__9 = (struct ClassBoardBaseDialog___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ClassBoardBaseDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
  return x->fields.priority;
}


int32_t ClassBoardBaseDialog___c___GetOpenSkillListLocal_b__28_1(
        ClassBoardBaseDialog___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
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
    sub_1C372B4(this);
  ClassBoardBaseDialog__CloseItemInfoListWindow((ClassBoardBaseDialog_o *)this, this->fields.closedAction, method);
}