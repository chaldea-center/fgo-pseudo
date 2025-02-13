void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8

  if ( (byte_4BDFB10 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    byte_4BDFB10 = 1;
  }
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EXTRA1_CLASS_BASE_ID = 0x900000008LL;
  *(_OWORD *)&static_fields->classIconOneDispFixPosY = xmmword_BFEEC0;
  static_fields->DISABLED_COLOR.fields.a = 1.0;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___ctor(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  this->fields.classIconSpaceOffsetY = 20.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent__CompareClassId(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardClassEntity_o *a,
        ClassBoardClassEntity_o *b,
        const MethodInfo *method)
{
  struct System_Int32_array *arrayForSort; // x13
  unsigned __int64 max_length; // x9
  int v6; // w10
  int v7; // w8
  unsigned __int64 v8; // x11
  int32_t *v9; // x13
  int32_t v10; // w14

  arrayForSort = this->fields.arrayForSort;
  if ( !arrayForSort )
    goto LABEL_15;
  max_length = arrayForSort->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v6 = 0;
    v7 = 0;
    v8 = 0LL;
    v9 = &arrayForSort->m_Items[1];
    while ( a )
    {
      if ( v8 >= max_length )
        sub_1C2209C(this, a);
      if ( !b )
        break;
      v10 = v9[v8];
      if ( a->fields.classId == v10 )
        v7 = v8;
      if ( b->fields.classId == v10 )
        v6 = v8;
      if ( (__int64)++v8 >= (int)max_length )
        return v7 - v6;
    }
LABEL_15:
    sub_1C22094(this, a);
  }
  v7 = 0;
  v6 = 0;
  return v7 - v6;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t id,
        System_Collections_Generic_List_ClassBoardClassEntity__o *entityList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v7; // x21
  ClassBoardEffectListDialogSkillListComponent_c *v8; // x0
  __int64 v9; // x1
  _BOOL8 v10; // x0
  __int64 v11; // x1
  __int64 klass_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v19; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct System_Int32_array *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BDFB09 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Union_int___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_int__TypeInfo);
    byte_4BDFB09 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v7 = (System_Collections_Generic_List_int__o *)sub_1C22084(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_363183C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v29 = v28;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v29.fields._current )
      sub_1C22094(v10, v11);
    if ( !v7 )
      sub_1C22094(v10, v11);
    klass_high = HIDWORD(v29.fields._current[1].klass);
    items = v7->fields._items;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v7->fields._version;
    if ( !items )
      sub_1C22094(v10, klass_high);
    size = v7->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        klass_high,
        *(const MethodInfo_3632090 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v8 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v8 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v8->static_fields;
  if ( static_fields->EXTRA1_CLASS_BASE_ID != id )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
    }
    if ( static_fields->EXTRA2_CLASS_BASE_ID == id )
    {
      v19 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v19 = BalanceConfig_TypeInfo;
      }
      Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v19->static_fields->Extra2SortOrderClassIds;
      goto LABEL_24;
    }
    if ( v7 )
    {
      v21 = System_Collections_Generic_List_int___ToArray(
              v7,
              (const MethodInfo_3633B48 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_27;
    }
LABEL_31:
    sub_1C22094(v8, v9);
  }
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v17 = BalanceConfig_TypeInfo;
  }
  Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v17->static_fields->Extra1SortOrderClassIds;
LABEL_24:
  v20 = System_Linq_Enumerable__Union_int_(
          Extra2SortOrderClassIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)v7,
          (const MethodInfo_2FEDA84 *)Method_System_Linq_Enumerable_Union_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_2FE964C *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_27:
  this->fields.arrayForSort = v21;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.arrayForSort, (int64_t)v21, v22, v23, v24, v25, v26, v27);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent__GetBaseId(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.baseId;
}


float __fastcall ClassBoardEffectListDialogSkillListComponent__GetListItemHeight(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x20
  System_Collections_Generic_List_object__o *skillDispDataList; // x8
  ClassBoardEffectListDialogSkillDetailComponent_o *v8; // x20
  const MethodInfo *v9; // x2

  v6 = this;
  if ( (byte_4BDFB0B & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4BDFB0B = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0LL)
    || (v8 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL)
    || !v8 )
  {
    sub_1C22094(this, obj);
  }
  return ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
           v8,
           (System_String_o *)this->fields.m_CancellationTokenSource,
           v9);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
        int32_t baseId,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        System_Int32_array *openedSquareIdArray,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Func_T__TResult__o *v19; // x22
  System_Collections_Generic_IEnumerable_T__o *v20; // x0
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v23; // x3
  ClassBoardSquareEntity_array *v24; // x21

  if ( (byte_4BDFB0D & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_1C21E38(&System_Func_int__ClassBoardSquareEntity__TypeInfo);
    sub_1C21E38(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo);
    byte_4BDFB0D = 1;
  }
  v9 = sub_1C22084(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_DWORD *)(v9 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v9 + 16) = Master_object;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 16), (int64_t)Master_object, v13, v14, v15, v16, v17, v18);
  if ( openedSquareIdArray )
  {
    v19 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    System_Func_int__object____ctor(
      v19,
      (Il2CppObject *)v9,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      0LL);
    v20 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v19,
                                                           (const MethodInfo_2FDEEE4 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v21 = BasicHelper__ExcludeNull_object_(
            v20,
            (const MethodInfo_2F9B6C4 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v21,
                                                                (const MethodInfo_2FE97E4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v9 + 24), 0LL);
  }
  v24 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v24,
           dispType,
           ignoreTurnOrCountPassive,
           v23);
}


System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v6; // x19
  Il2CppObject *IsPassive; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  Il2CppObject *v10; // x24
  signed int max_length; // w8
  signed int v12; // w27
  ClassBoardSquareEntity_o *v13; // x28
  System_Collections_Generic_List_object__o *v14; // x19
  Il2CppObject *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x19
  Il2CppObject *v17; // x0
  FuncDispEntity_o *v18; // x19
  SkillLvEntity_o *v19; // x23
  System_Collections_Generic_List_object__o *v20; // x22
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v21; // x20
  const MethodInfo *v22; // x5
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  System_Collections_Generic_List_object__o *v33; // x29
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  Il2CppObject *v39; // x22
  __int64 v40; // x1
  System_Collections_Generic_List_object__o *v41; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v43; // x19
  System_Collections_Generic_List_object__o *v44; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v45; // x20
  const MethodInfo *v46; // x5
  __int64 v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x0
  __int64 v59; // x0
  __int64 v60; // x1
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v73; // x22
  const MethodInfo *v74; // x7
  __int64 v75; // x0
  __int64 v76; // x1
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  Il2CppClass **v90; // x0
  System_String_o *v91; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v93; // w19
  int32_t v94; // w23
  int32_t v95; // w24
  int32_t v96; // w25
  System_String_o *v97; // x26
  const MethodInfo *v98; // x7
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x8
  System_Collections_Generic_List_object__o *v103; // x0
  _BOOL8 v104; // x0
  __int64 v105; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v108; // x0
  __int64 v109; // x1
  Il2CppObject *v110; // x0
  __int64 v111; // x1
  _DWORD *v112; // x8
  __int64 v113; // x1
  Il2CppObject *v114; // x0
  __int64 v115; // x1
  Il2CppObject *v116; // x0
  __int64 v117; // x1
  Il2CppClass *v118; // x8
  __int64 v119; // x25
  int32_t v120; // w24
  Il2CppObject *v121; // x19
  __int64 v122; // x0
  __int64 v123; // x1
  _DWORD *v124; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v126; // x8
  __int64 v127; // x10
  unsigned __int64 v128; // x9
  __int64 v129; // x10
  unsigned __int64 v130; // x12
  int v131; // w13
  _DWORD *v132; // x8
  int32_t v133; // w8
  Il2CppObject *v134; // x0
  __int64 v135; // x1
  const MethodInfo *v136; // x2
  Il2CppClass *v137; // x8
  System_String_o *data; // x19
  System_String_o *v139; // x25
  Il2CppObject *v140; // x0
  __int64 v141; // x1
  _DWORD *v142; // x8
  int32_t v143; // w26
  Il2CppObject *v144; // x0
  __int64 v145; // x1
  _DWORD *v146; // x8
  int32_t v147; // w20
  Il2CppObject *v148; // x0
  __int64 v149; // x1
  _DWORD *v150; // x8
  int32_t v151; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v152; // x22
  const MethodInfo *v153; // x7
  __int64 v154; // x0
  __int64 v155; // x1
  int64_t v156; // x2
  int32_t v157; // w3
  System_String_o *v158; // x4
  BattleSetupInfo_o *v159; // x5
  FollowerInfo_o *v160; // x6
  PartyListViewItem_o *v161; // x7
  struct System_Object_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  Il2CppClass **v165; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v166; // x0
  System_Func_object__int__o *_9__32_0; // x20
  Il2CppObject *v168; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v176; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v177; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v178; // x19
  System_Func_object__int__o *_9__32_1; // x20
  Il2CppObject *v180; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v181; // x0
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v188; // x0
  int32_t v191; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v192; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v194; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v195; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v196; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v197; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v198; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v199; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v200; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v201; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v202; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v203; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v204; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v206; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  if ( (byte_4BDFB0E & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1C21E38(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1C21E38(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1C21E38(&int___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1C21E38(&Method_System_String_Join_int___);
    sub_1C21E38(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__);
    sub_1C21E38(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_866/*","*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDFB0E = 1;
  }
  v206 = 0LL;
  entity = 0LL;
  v204 = 0LL;
  entitys = 0LL;
  memset(&v203, 0, sizeof(v203));
  v202 = 0LL;
  v200 = 0LL;
  memset(&v201, 0, sizeof(v201));
  memset(&v199, 0, sizeof(v199));
  v6 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_159;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v6;
  v196 = v6;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v192 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v195 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C22084(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v195,
    (const MethodInfo_3315CD0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v197 = (FuncDispMaster_o *)v10;
    v191 = dispType;
    v194 = openedSquareArray;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1C2209C(IsPassive, v8);
      v13 = openedSquareArray->m_Items[v12];
      v14 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v14,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v14;
      if ( !v13 )
        goto LABEL_159;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v13, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v13, 0LL);
        if ( dispType != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v192;
          if ( !v192 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v192,
                                        &entitys,
                                        v13->fields.targetId,
                                        v13->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v33 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v33,
              (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v198,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v203.fields._list = *(_OWORD *)&v198.fields._dictionary;
            v203.fields._current = v198.fields._current.fields.key;
            while ( 1 )
            {
              v34 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v203,
                      (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v10 = (Il2CppObject *)v197;
              if ( !v34 )
                break;
              current = v203.fields._current;
              if ( !v203.fields._current )
                sub_1C22094(v34, v35);
              if ( !v197 )
                sub_1C22094(v34, v35);
              if ( FuncDispMaster__IsContainFuncIds(
                     v197,
                     &v202,
                     (System_Int32_array *)v203.fields._current[3].klass,
                     0LL) )
              {
                v37 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_866/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_3054074 *)Method_System_String_Join_int___);
                if ( !v33 )
                  sub_1C22094(v37, v38);
                v39 = v37;
                if ( !System_Collections_Generic_List_object___Contains(
                        v33,
                        v37,
                        (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v195 )
                    sub_1C22094(0LL, v40);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v195,
                          v39,
                          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v41 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v41,
                      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v195,
                      v39,
                      (Il2CppObject *)v41,
                      (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v195,
                           v39,
                           (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v43 = v202;
                  v44 = (System_Collections_Generic_List_object__o *)Item;
                  v45 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v45,
                    v43,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v13,
                    v46);
                  if ( !v44 )
                    sub_1C22094(v47, v48);
                  items = v44->fields._items;
                  v56 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v44->fields._version;
                  if ( !items )
                    sub_1C22094(v47, v48);
                  size = v44->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v44,
                      (Il2CppObject *)v45,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v58 = &items->obj.klass + size;
                    v44->fields._size = size + 1;
                    v58[4] = (Il2CppClass *)v45;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v58 + 4), (int64_t)v45, v49, v50, v51, v52, v53, v54);
                  }
                  v87 = v33->fields._items;
                  v88 = Method_System_Collections_Generic_List_string__Add__;
                  ++v33->fields._version;
                  if ( !v87 )
                    sub_1C22094(v59, v60);
                  v89 = v33->fields._size;
                  if ( (unsigned int)v89 >= v87->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v33,
                      v39,
                      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v90 = &v87->obj.klass + v89;
                    v33->fields._size = v89 + 1;
                    v90[4] = (Il2CppClass *)v39;
                    sub_1C21DDC((PartyOrganizationUtility_o *)(v90 + 4), (int64_t)v39, v61, v62, v63, v64, v65, v66);
                  }
                }
              }
              else
              {
                klass = (System_String_o *)current[2].klass;
                monitor = (System_String_o *)current[2].monitor;
                priority = v13->fields.priority;
                id = v13->fields.id;
                iconId = v13->fields.iconId;
                skillType = v13->fields.skillType;
                v73 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v73,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  v74);
                if ( !v196 )
                  sub_1C22094(v75, v76);
                v83 = v196->fields._items;
                v84 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v196->fields._version;
                if ( !v83 )
                  sub_1C22094(v75, v76);
                v85 = v196->fields._size;
                if ( (unsigned int)v85 >= v83->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v196,
                    (Il2CppObject *)v73,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                }
                else
                {
                  v86 = &v83->obj.klass + v85;
                  v196->fields._size = v85 + 1;
                  v86[4] = (Il2CppClass *)v73;
                  sub_1C21DDC((PartyOrganizationUtility_o *)(v86 + 4), (int64_t)v73, v77, v78, v79, v80, v81, v82);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v203,
              (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            dispType = v191;
          }
        }
        goto LABEL_61;
      }
      if ( dispType != 2 )
      {
        IsPassive = (Il2CppObject *)Master_object;
        if ( !Master_object )
          goto LABEL_159;
        IsPassive = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                      Master_object,
                                      &entity,
                                      v13->fields.targetId,
                                      (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v9,
                                        &v206,
                                        v13->fields.targetId,
                                        v13->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v206;
            if ( !v206 )
              goto LABEL_159;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v206, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v206 || !v10 )
                goto LABEL_159;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v10,
                                            &v204,
                                            v206->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v206 )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_866/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v206->fields.funcId,
                                              (const MethodInfo_3054074 *)Method_System_String_Join_int___);
                if ( !v195 )
                  goto LABEL_159;
                v15 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v195,
                        IsPassive,
                        (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v16,
                    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v195,
                    v15,
                    (Il2CppObject *)v16,
                    (const MethodInfo_331666C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v17 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v195,
                        v15,
                        (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v18 = v204;
                v19 = v206;
                v20 = (System_Collections_Generic_List_object__o *)v17;
                v21 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v21, v18, v19, 0LL, v13, v22);
                if ( !v20 )
                  goto LABEL_159;
                v29 = v20->fields._items;
                v30 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v20->fields._version;
                if ( !v29 )
                  goto LABEL_159;
                v31 = v20->fields._size;
                if ( (unsigned int)v31 >= v29->max_length )
                {
                  v102 = v30[4];
                  v103 = v20;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v103,
                    (Il2CppObject *)v21,
                    *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v102 + 192) + 112LL));
                  goto LABEL_61;
                }
                v32 = &v29->obj.klass + v31;
                v20->fields._size = v31 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_159;
                v91 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v93 = v13->fields.priority;
                v94 = v13->fields.id;
                v95 = v13->fields.iconId;
                v96 = v13->fields.skillType;
                v97 = EffectExplanation;
                v21 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v21,
                  v91,
                  v97,
                  v94,
                  v93,
                  v95,
                  v96,
                  v98);
                if ( !v196 )
                  goto LABEL_159;
                v99 = v196->fields._items;
                v100 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v196->fields._version;
                if ( !v99 )
                  goto LABEL_159;
                v101 = v196->fields._size;
                v10 = (Il2CppObject *)v197;
                if ( (unsigned int)v101 >= v99->max_length )
                {
                  v102 = v100[4];
                  v103 = v196;
                  goto LABEL_72;
                }
                v32 = &v99->obj.klass + v101;
                v196->fields._size = v101 + 1;
              }
              v32[4] = (Il2CppClass *)v21;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v32 + 4), (int64_t)v21, v23, v24, v25, v26, v27, v28);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v194;
      ++v12;
      max_length = v194->max_length;
    }
    while ( v12 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v195;
  if ( !v195 )
LABEL_159:
    sub_1C22094(IsPassive, v8);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v198,
    v195,
    (const MethodInfo_3316AB0 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v201 = v198;
  while ( 1 )
  {
    v104 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v201,
             (const MethodInfo_34124A4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v104 )
      break;
    value = v201.fields._current.fields.value;
    if ( !v201.fields._current.fields.value )
      sub_1C22094(v104, v105);
    if ( SLODWORD(v201.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v108 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v201.fields._current.fields.value,
               0,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v108 )
        sub_1C22094(0LL, v109);
      if ( v108[1].monitor )
      {
        v110 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v110 )
          sub_1C22094(0LL, v111);
        v112 = v110[1].monitor;
        if ( !v112 )
          sub_1C22094(v110, v111);
        if ( !Master_object )
          sub_1C22094(0LL, v111);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v200,
               v112[4],
               (const MethodInfo_325BE14 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v200 )
            sub_1C22094(0LL, v113);
          Name = SkillEntity__getName((SkillEntity_o *)v200, 0LL);
        }
      }
      else
      {
        v114 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v114 )
          sub_1C22094(0LL, v115);
        if ( v114[2].klass )
        {
          v116 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v116 )
            sub_1C22094(0LL, v117);
          v118 = v116[2].klass;
          if ( !v118 )
            sub_1C22094(v116, v117);
          Name = (System_String_o *)v118->_1.byval_arg.data;
        }
      }
      v119 = sub_1C21EE0(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v198,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v120 = 0;
      *(_OWORD *)&v199.fields._list = *(_OWORD *)&v198.fields._dictionary;
      v199.fields._current = v198.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v199,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v199,
          (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v134 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v134 )
          sub_1C22094(0LL, v135);
        v137 = v134[1].klass;
        if ( !v137 )
          sub_1C22094(v134, v135);
        data = (System_String_o *)v137->_1.byval_arg.data;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v139 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 data,
                 (System_Int32_array *)v119,
                 v136);
        v140 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v140 )
          sub_1C22094(0LL, v141);
        v142 = v140[2].monitor;
        if ( !v142 )
          sub_1C22094(v140, v141);
        v143 = v142[5];
        v144 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v144 )
          sub_1C22094(0LL, v145);
        v146 = v144[2].monitor;
        if ( !v146 )
          sub_1C22094(v144, v145);
        v147 = v146[6];
        v148 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v148 )
          sub_1C22094(0LL, v149);
        v150 = v148[2].monitor;
        if ( !v150 )
          sub_1C22094(v148, v149);
        v151 = v150[14];
        v152 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v152,
          Name,
          v139,
          v143,
          v120,
          v147,
          v151,
          v153);
        if ( !v196 )
          sub_1C22094(v154, v155);
        v162 = v196->fields._items;
        v163 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v196->fields._version;
        if ( !v162 )
          sub_1C22094(v154, v155);
        v164 = v196->fields._size;
        if ( (unsigned int)v164 >= v162->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v196,
            (Il2CppObject *)v152,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
        }
        else
        {
          v165 = &v162->obj.klass + v164;
          v196->fields._size = v164 + 1;
          v165[4] = (Il2CppClass *)v152;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v165 + 4), (int64_t)v152, v156, v157, v158, v159, v160, v161);
        }
        continue;
      }
      v121 = v199.fields._current;
      v122 = sub_1C21EE0(int___TypeInfo, 0LL);
      if ( !v121 )
        sub_1C22094(v122, v123);
      v124 = v121[1].monitor;
      if ( v124 )
      {
        if ( !v9 )
          sub_1C22094(v122, v123);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v9,
                                                               v124[4],
                                                               v124[5],
                                                               0LL);
LABEL_110:
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
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v119 )
        sub_1C22094(DispValFromSkill, v123);
      v127 = *(_QWORD *)(v119 + 24);
      if ( v127 )
      {
        if ( (int)v127 >= 1 )
        {
          v128 = 0LL;
          v129 = (unsigned int)*(_QWORD *)(v119 + 24);
          do
          {
            if ( !v126 )
              sub_1C22094(DispValFromSkill, v123);
            if ( v128 >= *(unsigned int *)(v126 + 24) )
              sub_1C2209C(DispValFromSkill, v123);
            v130 = v119 + 4 * v128;
            v131 = *(_DWORD *)(v126 + 32 + 4 * v128++);
            *(_DWORD *)(v130 + 32) += v131;
          }
          while ( v129 != v128 );
        }
      }
      else
      {
        v119 = v126;
      }
      v132 = v121[2].monitor;
      if ( !v132 )
        sub_1C22094(DispValFromSkill, v123);
      v133 = v132[20];
      if ( v133 > v120 )
        v120 = v133;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v201,
    (const MethodInfo_34125C4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v166 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v166 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__int__o *)v166->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v166->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v166);
      v166 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v168 = (Il2CppObject *)v166->static_fields->__9;
    _9__32_0 = (System_Func_object__int__o *)sub_1C22084(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_0,
      v168,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__,
      0LL);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_0;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&static_fields->__9__32_0,
      (int64_t)_9__32_0,
      v170,
      v171,
      v172,
      v173,
      v174,
      v175);
  }
  v176 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v196,
           (System_Func_TSource__TKey__o *)_9__32_0,
           (const MethodInfo_2FD940C *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v177 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v178 = v176;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v177 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__int__o *)v177->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v177->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v177);
      v177 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v180 = (Il2CppObject *)v177->static_fields->__9;
    _9__32_1 = (System_Func_object__int__o *)sub_1C22084(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_1,
      v180,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__,
      0LL);
    v181 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v181->__9__32_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_1;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v181->__9__32_1, (int64_t)_9__32_1, v182, v183, v184, v185, v186, v187);
  }
  v188 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v178,
                                                                (System_Func_TSource__TKey__o *)_9__32_1,
                                                                (const MethodInfo_2FE8C78 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v188, (const MethodInfo_2FED5C8 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  __int64 v10; // x1
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.dialog, (int64_t)dialog, (int64_t)method, v3, v4, v5, v6, v7);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 8);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_1C22094(gameObject, v10);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent__IsSupport(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isSupport;
}


System_String_o *__fastcall ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  __int64 v5; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x29
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
  System_String_o *v21; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  __int64 v24; // x1
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  __int64 v27; // x1
  System_String_o *v28; // x20
  System_String_o *v29; // x20
  System_String_o *v30; // x20
  System_String_o *v31; // x20
  System_String_o *v32; // x20
  unsigned __int64 v33; // x8
  System_String_o *v34; // x20
  unsigned __int64 v35; // x8
  System_String_o *v36; // x20
  unsigned __int64 v37; // x8
  System_String_o *v38; // x20
  unsigned __int64 v39; // x8
  int v41; // [xsp+8h] [xbp-68h] BYREF
  il2cpp_array_size_t v42; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4BDFB0F & 1) == 0 )
  {
    sub_1C21E38(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1C21E38(&StringLiteral_25576/*"{x"*/);
    sub_1C21E38(&StringLiteral_25357/*"{"*/);
    sub_1C21E38(&StringLiteral_25287/*"xx}"*/);
    sub_1C21E38(&StringLiteral_25286/*"xxx}"*/);
    sub_1C21E38(&StringLiteral_25603/*"}"*/);
    sub_1C21E38(&StringLiteral_25579/*"{xxxx"*/);
    sub_1C21E38(&StringLiteral_25577/*"{xx"*/);
    sub_1C21E38(&StringLiteral_25285/*"xxxx}"*/);
    sub_1C21E38(&StringLiteral_25288/*"x}"*/);
    sub_1C21E38(&StringLiteral_25578/*"{xxx"*/);
    byte_4BDFB0F = 1;
  }
  v41 = 0;
  if ( funcVals )
  {
    v5 = *(_QWORD *)&funcVals->max_length;
    if ( v5 )
    {
      v42 = 0;
      if ( (int)v5 >= 1 )
      {
        do
        {
          v6 = System_Int32__ToString((int32_t)&v42, 0LL);
          v7 = System_String__Concat_63126736(
                 (System_String_o *)StringLiteral_25357/*"{"*/,
                 v6,
                 (System_String_o *)StringLiteral_25285/*"xxxx}"*/,
                 0LL);
          v8 = System_Int32__ToString((int32_t)&v42, 0LL);
          v9 = System_String__Concat_63126736(
                 (System_String_o *)StringLiteral_25357/*"{"*/,
                 v8,
                 (System_String_o *)StringLiteral_25286/*"xxx}"*/,
                 0LL);
          v10 = System_Int32__ToString((int32_t)&v42, 0LL);
          v11 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25357/*"{"*/,
                  v10,
                  (System_String_o *)StringLiteral_25287/*"xx}"*/,
                  0LL);
          v12 = System_Int32__ToString((int32_t)&v42, 0LL);
          v13 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25357/*"{"*/,
                  v12,
                  (System_String_o *)StringLiteral_25288/*"x}"*/,
                  0LL);
          v14 = System_Int32__ToString((int32_t)&v42, 0LL);
          v15 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25357/*"{"*/,
                  v14,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          v16 = System_Int32__ToString((int32_t)&v42, 0LL);
          v17 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25576/*"{x"*/,
                  v16,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v42, 0LL);
          v19 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25577/*"{xx"*/,
                  v18,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v42, 0LL);
          v21 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25578/*"{xxx"*/,
                  v20,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v42, 0LL);
          v23 = System_String__Concat_63126736(
                  (System_String_o *)StringLiteral_25579/*"{xxxx"*/,
                  v22,
                  (System_String_o *)StringLiteral_25603/*"}"*/,
                  0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v25 = v23;
          v41 = 10000 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !text )
            goto LABEL_30;
          v23 = System_String__Replace_63135104(text, v7, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v28 = v23;
          v41 = 1000 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v28 )
            goto LABEL_30;
          v23 = System_String__Replace_63135104(v28, v9, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v29 = v23;
          v41 = 100 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v29 )
            goto LABEL_30;
          v23 = System_String__Replace_63135104(v29, v11, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v30 = v23;
          v41 = 10 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v30 )
            goto LABEL_30;
          v23 = System_String__Replace_63135104(v30, v13, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v31 = v23;
          v26 = System_Int32__ToString((unsigned int)funcVals + 4 * v42 + 32, 0LL);
          if ( !v31 )
            goto LABEL_30;
          v23 = System_String__Replace_63135104(v31, v15, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v32 = v23;
          v33 = 1717986919LL * funcVals->m_Items[v42 + 1];
          v41 = (v33 >> 63) + (SHIDWORD(v33) >> 2);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v32 )
            goto LABEL_30;
          v23 = System_String__Replace_63135104(v32, v17, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v34 = v23;
          v35 = 1374389535LL * funcVals->m_Items[v42 + 1];
          v41 = (v35 >> 63) + (SHIDWORD(v35) >> 5);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v34 )
            goto LABEL_30;
          v23 = System_String__Replace_63135104(v34, v19, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v36 = v23;
          v37 = 274877907LL * funcVals->m_Items[v42 + 1];
          v41 = (v37 >> 63) + (SHIDWORD(v37) >> 6);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v36 )
            goto LABEL_30;
          v23 = System_String__Replace_63135104(v36, v21, v26, 0LL);
          if ( v42 >= funcVals->max_length )
LABEL_29:
            sub_1C2209C(v23, v24);
          v38 = v23;
          v39 = 1759218605LL * funcVals->m_Items[v42 + 1];
          v41 = (v39 >> 63) + (SHIDWORD(v39) >> 12);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v38 )
LABEL_30:
            sub_1C22094(v26, v27);
          text = System_String__Replace_63135104(v38, v25, v26, 0LL);
          ++v42;
        }
        while ( (signed int)v42 < (signed int)funcVals->max_length );
      }
      if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
      return SkillDetailParamFormatResolver__ApplyGivenValues(text, funcVals, 0LL);
    }
  }
  return text;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardBaseEntity_o *classBoardBaseEntity,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v13; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v15; // w23
  System_Collections_Generic_List_object__o *v16; // x22
  System_Comparison_T__o *v17; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v19; // x22
  float v20; // s8
  __int64 v21; // x1
  BalanceConfig_c *v22; // x0
  ClassBoardClassEntity_o *current; // x23
  BalanceConfig_c *v24; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v26; // x1
  UnityEngine_GameObject_o *v27; // x22
  Il2CppObject *Component_object; // x24
  _BOOL8 v29; // x0
  __int64 v30; // x1
  bool IsOpen; // w0
  ClassBoardEffectListDialogSkillListComponent_c *v32; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  struct UIGrid_o *v37; // x8
  UnityEngine_Object_o *v38; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float v40; // s8
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v43; // x8
  UnityEngine_GameObject_o *v44; // x20
  UnityEngine_GameObject_o *v45; // x0
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BDFB08 & 1) == 0 )
  {
    sub_1C21E38(&BalanceConfig_TypeInfo);
    sub_1C21E38(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C21E38(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C21E38(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3545/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/);
    byte_4BDFB08 = 1;
  }
  entitys = 0LL;
  memset(&v47, 0, sizeof(v47));
  if ( !classBoardBaseEntity || !supportClassBoard && isAll && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_69;
  if ( !ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, classBoardBaseEntity->fields.id, 0LL) )
    return;
  id = classBoardBaseEntity->fields.id;
  v13 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v13 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( id == static_fields->EXTRA1_CLASS_BASE_ID )
    goto LABEL_17;
  v15 = classBoardBaseEntity->fields.id;
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v15 == static_fields->EXTRA2_CLASS_BASE_ID )
  {
LABEL_17:
    ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
      this,
      classBoardBaseEntity->fields.id,
      entitys,
      v11);
    v16 = (System_Collections_Generic_List_object__o *)entitys;
    v17 = (System_Comparison_T__o *)sub_1C22084(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_object____ctor(
      v17,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      0LL);
    if ( !v16 )
      goto LABEL_69;
    System_Collections_Generic_List_object___Sort_56953720(
      v16,
      v17,
      (const MethodInfo_3650B78 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v19 = this->fields.subjectClassLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3545/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0LL);
    if ( !v19 )
      goto LABEL_69;
    UILabel__set_text(v19, (System_String_o *)Master_object, 0LL);
  }
  Master_object = (ClassBoardClassMaster_o *)entitys;
  if ( !entitys )
    goto LABEL_69;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v46,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v20 = 0.0;
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v22 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v47.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1C22094(v22, v21);
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
           current->fields.classId,
           (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___) )
    {
      v24 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v24 = BalanceConfig_TypeInfo;
      }
      if ( v24->static_fields->PlayableBeastBaseClassId != current->fields.classId )
        continue;
    }
    Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
    v27 = Object;
    if ( !Object )
      sub_1C22094(0LL, v26);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v29 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v29 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v47,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      return;
    }
    if ( !Component_object )
      sub_1C22094(v29, v30);
    ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_object, current->fields.classId, 0LL);
    if ( !supportClassBoard )
    {
      IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
LABEL_45:
      if ( IsOpen )
        goto LABEL_49;
      goto LABEL_46;
    }
    if ( !BasicHelper__IsNullOrEmpty(
            (System_Collections_ICollection_o *)supportClassBoard->fields.releasedClassIds,
            0LL) )
    {
      IsOpen = System_Linq_Enumerable__Contains_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)supportClassBoard->fields.releasedClassIds,
                 current->fields.classId,
                 (const MethodInfo_2FC7E00 *)Method_System_Linq_Enumerable_Contains_int___);
      goto LABEL_45;
    }
LABEL_46:
    v32 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      v32 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    ServantClassIconComponent__SetColor(
      (ServantClassIconComponent_o *)Component_object,
      v32->static_fields->DISABLED_COLOR,
      0LL);
LABEL_49:
    classIconGrid = this->fields.classIconGrid;
    transform = UnityEngine_GameObject__get_transform(v27, 0LL);
    if ( !classIconGrid )
      sub_1C22094(transform, transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v27, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v27, 1, 0LL);
    v37 = this->fields.classIconGrid;
    if ( !v37 )
      sub_1C22094(v35, v36);
    v20 = v20 + (float)(v37->fields.cellWidth * 0.5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v38 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v38, 0LL, 0LL) )
  {
    Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
    if ( !Master_object )
      goto LABEL_69;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    v40 = -v20;
    GameObjectExtensions__AddLocalPositionX(gameObject, v40, 0LL);
    Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
    if ( !Master_object )
      goto LABEL_69;
    v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
    GameObjectExtensions__AddLocalPositionX(v41, v40, 0LL);
    if ( !isAll
      && System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
           (const MethodInfo_2FCAE0C *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
    {
      Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
      if ( Master_object )
      {
        v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
        v43 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        v44 = v42;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v43 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        GameObjectExtensions__AddLocalPositionX(v44, v43->static_fields->classIconOneDispFixPosY, 0LL);
        Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
        if ( Master_object )
        {
          v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
          GameObjectExtensions__AddLocalPositionX(
            v45,
            ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
            0LL);
          goto LABEL_64;
        }
      }
LABEL_69:
      sub_1C22094(Master_object, v10);
    }
  }
LABEL_64:
  Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
  if ( !Master_object )
    goto LABEL_69;
  ((void (__fastcall *)(ClassBoardClassMaster_o *, Il2CppMethodPointer))Master_object->klass->vtable._8_ReplacedForThread.method)(
    Master_object,
    Master_object->klass->vtable._9_Updated.methodPtr);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetDisp(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C22094(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isDisp, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetIcon(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  ClassBoardEffectListDialog_o *dialog; // x0

  dialog = this->fields.dialog;
  if ( !dialog )
    sub_1C22094(0LL, sprite);
  ClassBoardEffectListDialog__SetIcon(dialog, sprite, name, method);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t baseId,
        int32_t dispType,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        const MethodInfo *method)
{
  _BOOL4 v7; // w20
  int32_t v9; // w23
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  long double inited; // q0
  System_Collections_Generic_List_ClassBoardClassEntity__o *v15; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v16; // x0
  System_Func_object__bool__o *_9__30_0; // x24
  Il2CppObject *v18; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  bool v26; // w0
  int v27; // w25
  ClassBoardEffectListDialogSkillListComponent_c *v28; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v29; // x8
  int32_t v30; // w23
  int v31; // w27
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD *v34; // x22
  __int64 v35; // x8
  __int64 v36; // x0
  __int64 v37; // x0
  int32_t v38; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v49; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Object_o *recycler; // x23
  struct ScrollItemRecycler_o *v52; // x8
  System_Func_T1__T2__TResult__o *v53; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v54; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v57; // x22
  System_Action_T1__T2__o *v58; // x24
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v60; // x21
  float v61; // s9
  Il2CppObject *current; // x28
  UnityEngine_GameObject_o *Object; // x0
  __int64 v64; // x1
  UnityEngine_GameObject_o *v65; // x22
  Il2CppObject *v66; // x0
  __int64 v67; // x1
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v74; // x23
  __int64 v75; // x0
  __int64 v76; // x1
  const MethodInfo *v77; // x6
  float v78; // s8
  System_String_o *v79; // x0
  System_String_o *v80; // x22
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  int32_t baseIda; // [xsp+5Ch] [xbp-54h] BYREF

  baseIda = baseId;
  v7 = isAll;
  v9 = baseId;
  if ( (byte_4BDFB0C & 1) == 0 )
  {
    sub_1C21E38(&System_Action_GameObject__int__TypeInfo);
    sub_1C21E38(&Method_System_Array_Empty_int___);
    sub_1C21E38(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__);
    sub_1C21E38(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1C21E38(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1C21E38(&System_Func_ClassBoardClassEntity__bool__TypeInfo);
    sub_1C21E38(&System_Func_GameObject__int__float__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1C21E38(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__);
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1C21E38(&StringLiteral_3544/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/);
    sub_1C21E38(&StringLiteral_3543/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/);
    byte_4BDFB0C = 1;
  }
  entitys = 0LL;
  memset(&v82, 0, sizeof(v82));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_98;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, v9, 0LL) )
  {
    v15 = entitys;
    v16 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v16 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    _9__30_0 = (System_Func_object__bool__o *)v16->static_fields->__9__30_0;
    if ( !_9__30_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__30_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__30_0,
        v18,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__,
        0LL);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__30_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__30_0,
        (int64_t)_9__30_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    v26 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v15,
            (System_Func_TSource__bool__o *)_9__30_0,
            (const MethodInfo_2FB9E74 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v27 = v26;
  }
  else
  {
    v27 = 1;
  }
  v28 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v28 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v29 = v28->static_fields;
  if ( v9 == v29->EXTRA1_CLASS_BASE_ID )
    goto LABEL_21;
  v30 = baseIda;
  if ( !v28->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(v28);
    v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v30 == v29->EXTRA2_CLASS_BASE_ID )
  {
LABEL_21:
    v31 = 1;
  }
  else
  {
    classInfoObject = (UnityEngine_Object_o *)this->fields.classInfoObject;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(classInfoObject, 0LL, 0LL) )
    {
      Master_object = (ClassBoardClassMaster_o *)this->fields.classInfoObject;
      if ( !Master_object )
        goto LABEL_98;
      Master_object = (ClassBoardClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                                   (UnityEngine_GameObject_o *)Master_object,
                                                   0LL);
      if ( !Master_object )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    v31 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v34 = Method_System_Array_Empty_int___;
      v35 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v35 )
      {
        sub_1C73D70(Method_System_Array_Empty_int___);
        v35 = v34[7];
      }
      v36 = *(_QWORD *)(v35 + 16);
      if ( (*(_BYTE *)(v36 + 309) & 1) == 0 )
        v36 = sub_1C73D14(inited);
      if ( !*(_DWORD *)(v36 + 224) )
        inited = j_il2cpp_runtime_class_init_0(v36);
      v37 = *(_QWORD *)(v34[7] + 16LL);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1C73D14(inited);
      squareIds = **(System_Int32_array ***)(v37 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v38 = baseIda;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v38, dispType, 0, squareIds, v13);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillDispDataList,
    (int64_t)OpenSkillList,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( !this->fields.skillDispDataList )
LABEL_98:
    sub_1C22094(Master_object, v12);
  if ( this->fields.skillDispDataList->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3543/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0LL);
      if ( !allClosedLabel )
        goto LABEL_98;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
      v60 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v60, 0LL, 0LL) )
      {
        Master_object = (ClassBoardClassMaster_o *)this->fields.classInfoObject;
        if ( !Master_object )
          goto LABEL_98;
        Master_object = (ClassBoardClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)Master_object,
                                                     0LL);
        if ( !Master_object )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      }
    }
    else
    {
      if ( (v31 & v27) != 0 )
      {
        v79 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v80 = System_String__Concat_63115476((System_String_o *)StringLiteral_3544/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v79, 0LL);
      }
      else
      {
        v80 = (System_String_o *)StringLiteral_3543/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get(v80, 0LL);
      if ( !allClosedLabel )
        goto LABEL_98;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
    }
    Master_object = (ClassBoardClassMaster_o *)this->fields.allClosedLabel;
    if ( !Master_object )
      goto LABEL_98;
    Master_object = (ClassBoardClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)Master_object,
                                                 0LL);
    if ( !Master_object )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
    if ( !v7 )
    {
      Master_object = (ClassBoardClassMaster_o *)this->fields.scrollView;
      if ( !Master_object )
        goto LABEL_98;
      UIScrollView__UpdatePosition((UIScrollView_o *)Master_object, 0LL);
    }
  }
  else
  {
    if ( !v7 )
      goto LABEL_50;
    p_skillDetailObjForAll = &this->fields.skillDetailObjForAll;
    skillDetailObjForAll = (UnityEngine_Object_o *)this->fields.skillDetailObjForAll;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(skillDetailObjForAll, 0LL, 0LL);
    if ( ((unsigned __int8)Master_object & 1) == 0 )
LABEL_50:
      p_skillDetailObjForAll = &this->fields.skillDetailObj;
    v49 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_98;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         *p_skillDetailObjForAll,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      recycler = (UnityEngine_Object_o *)this->fields.recycler;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(recycler, 0LL, 0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        if ( (v7 & v31) != 0 )
        {
          v52 = this->fields.recycler;
          if ( !v52 )
            goto LABEL_98;
          v52->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v53 = (System_Func_T1__T2__TResult__o *)sub_1C22084(System_Func_GameObject__int__float__TypeInfo);
        System_Func_object__int__float____ctor(
          v53,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          0LL);
        v54 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1C22084(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v54, (System_Func_GameObject__int__float__o *)v53, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v57 = this->fields.recycler;
          v58 = (System_Action_T1__T2__o *)sub_1C22084(System_Action_GameObject__int__TypeInfo);
          System_Action_object__int____ctor(
            v58,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            0LL);
          if ( v57 )
          {
            ScrollItemRecycler__Init(
              v57,
              size,
              v49,
              (System_Action_GameObject__int__o *)v58,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v54,
              0LL);
            Master_object = (ClassBoardClassMaster_o *)this->fields.recycler;
            if ( Master_object )
            {
              ScrollItemRecycler__UpdateDisplay((ScrollItemRecycler_o *)Master_object, 0LL);
              return;
            }
          }
        }
        goto LABEL_98;
      }
      Master_object = (ClassBoardClassMaster_o *)*p_skillDispDataList;
      if ( !*p_skillDispDataList )
        goto LABEL_98;
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v81,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v61 = 0.0;
      v82 = v81;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v82,
                (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v82.fields._current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v49, 0LL, 0LL, 0LL);
        v65 = Object;
        if ( !Object )
          sub_1C22094(0LL, v64);
        v66 = UnityEngine_GameObject__GetComponent_object_(
                Object,
                (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v74 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v66;
        if ( !v66 )
          sub_1C22094(0LL, v67);
        v66[5].klass = (Il2CppClass *)this;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v66[5], (int64_t)this, v68, v69, v70, v71, v72, v73);
        if ( !current )
          sub_1C22094(v75, v76);
        v78 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                v74,
                (System_String_o *)current[1].klass,
                (System_String_o *)current[1].monitor,
                (int32_t)current[2].monitor,
                HIDWORD(current[2].monitor),
                0,
                v77);
        GameObjectExtensions__SetParent_34803496(v65, this->fields.skillListParent, 0LL);
        if ( !byte_4BD6BB6 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        GameObjectExtensions__SetLocalScale(v65, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        GameObjectExtensions__SetLocalPosition_34797772(v65, 0.0, -v61, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v65, 1, 0LL);
        v61 = v61 + v78;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v82,
        (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    }
  }
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetupListItem(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  ClassBoardEffectListDialogSkillDetailComponent_o *v13; // x21
  const MethodInfo *v14; // x6

  v6 = this;
  if ( (byte_4BDFB0A & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1C21E38(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4BDFB0A = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___)) == 0LL
    || (v13 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        this->fields.recycler = (struct ScrollItemRecycler_o *)v6,
        sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.recycler, (int64_t)v6, v7, v8, v9, v10, v11, v12),
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList) == 0LL)
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   index,
                                                                   (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL )
  {
    sub_1C22094(this, obj);
  }
  ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
    v13,
    *(System_String_o **)&this->fields.m_CachedPtr,
    (System_String_o *)this->fields.m_CancellationTokenSource,
    (int32_t)this->fields.classIconGrid,
    HIDWORD(this->fields.classIconGrid),
    0,
    v14);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *this,
        FuncDispEntity_o *funcDispEntity,
        SkillLvEntity_o *skillLvEntity,
        ClassBoardCommandSpellEntity_o *commandSpellEntity,
        ClassBoardSquareEntity_o *classBoardSquareEntity,
        const MethodInfo *method)
{
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.funcDispEntity = funcDispEntity;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)funcDispEntity, v11, v12, v13, v14, v15, v16);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.skillLvEntity,
    (int64_t)skillLvEntity,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.commandSpellEntity,
    (int64_t)commandSpellEntity,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.classBoardSquareEntity,
    (int64_t)classBoardSquareEntity,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *this,
        System_String_o *name,
        System_String_o *detail,
        int32_t squareId,
        int32_t priority,
        int32_t iconId,
        int32_t skillType,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v14; // x25
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields.name = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v14->fields, (int64_t)name, v15, v16, v17, v18, v19, v20);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1C21DDC((PartyOrganizationUtility_o *)v14, (int64_t)detail, v21, v22, v23, v24, v25, v26);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDFB11 & 1) == 0 )
  {
    sub_1C21E38(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    byte_4BDFB11 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___ctor(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__32_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__32_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__30_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C22094(this, 0LL);
  return !ClassBoardClassEntity__IsOpen(entity, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0___ctor(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardSquareEntity_o *__fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0___GetOpenSkillList_b__0(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *squareMaster; // x0

  squareMaster = this->fields.squareMaster;
  if ( !squareMaster )
    sub_1C22094(0LL, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}