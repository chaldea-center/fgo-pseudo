void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  ClassBoardEffectListDialogSkillListComponent_c *v2; // x8
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x9

  if ( (byte_4B1FDD9 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v1);
    byte_4B1FDD9 = 1;
  }
  v2 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EXTRA1_CLASS_BASE_ID = 0x900000008LL;
  *(_OWORD *)&static_fields->classIconOneDispFixPosY = xmmword_BE2D90;
  static_fields->DISABLED_COLOR.fields.a = 1.0;
  *(_QWORD *)&v2->static_fields->ExtraClassIconListObjHeight = 0x4282000042200000LL;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___ctor(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  this->fields.classIconSpaceOffsetY = 20.0;
  this->fields.grandSkillDataFirstIndex = -1;
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
        sub_1BCB25C(this, a, b);
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
    sub_1BCB254(this, a);
  }
  v7 = 0;
  v6 = 0;
  return v7 - v6;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t id,
        System_Collections_Generic_List_ClassBoardClassEntity__o *entityList,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v18; // x21
  ClassBoardEffectListDialogSkillListComponent_c *v19; // x0
  __int64 v20; // x1
  _BOOL8 v21; // x0
  __int64 v22; // x1
  __int64 klass_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  BalanceConfig_c *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Extra2SortOrderClassIds; // x0
  BalanceConfig_c *v30; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  struct System_Int32_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B1FDD0 & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, *(_QWORD *)&id);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v7);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Union_int___, v9);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v10);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v11);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v12);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__Add__, v13);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v14);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int__ToArray__, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1BCAFF8(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_4B1FDD0 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  v18 = (System_Collections_Generic_List_int__o *)sub_1BCB244(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_369C358 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v36 = v35;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v21 )
      break;
    if ( !v36.fields._current )
      sub_1BCB254(v21, v22);
    if ( !v18 )
      sub_1BCB254(v21, v22);
    klass_high = HIDWORD(v36.fields._current[1].klass);
    items = v18->fields._items;
    v25 = Method_System_Collections_Generic_List_int__Add__;
    ++v18->fields._version;
    if ( !items )
      sub_1BCB254(v21, klass_high);
    size = v18->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v18,
        klass_high,
        *(const MethodInfo_369CBAC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v18->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
  v19 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v19 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  static_fields = v19->static_fields;
  if ( static_fields->EXTRA1_CLASS_BASE_ID != id )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
    }
    if ( static_fields->EXTRA2_CLASS_BASE_ID == id )
    {
      v30 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v30 = BalanceConfig_TypeInfo;
      }
      Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v30->static_fields->Extra2SortOrderClassIds;
      goto LABEL_24;
    }
    if ( v18 )
    {
      v32 = System_Collections_Generic_List_int___ToArray(
              v18,
              (const MethodInfo_369E664 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_27;
    }
LABEL_31:
    sub_1BCB254(v19, v20);
  }
  v28 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v28 = BalanceConfig_TypeInfo;
  }
  Extra2SortOrderClassIds = (System_Collections_Generic_IEnumerable_TSource__o *)v28->static_fields->Extra1SortOrderClassIds;
LABEL_24:
  v31 = System_Linq_Enumerable__Union_int_(
          Extra2SortOrderClassIds,
          (System_Collections_Generic_IEnumerable_TSource__o *)v18,
          (const MethodInfo_305C014 *)Method_System_Linq_Enumerable_Union_int___);
  v32 = System_Linq_Enumerable__ToArray_int_(
          v31,
          (const MethodInfo_305712C *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_27:
  this->fields.arrayForSort = v32;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.arrayForSort, (int32_t)v32, v33, v34);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__ExecuteCallback(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.loadEndCallback, 0LL);
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
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *skillDispDataList; // x8
  ClassBoardEffectListDialogSkillDetailComponent_o *v9; // x20
  const MethodInfo *v10; // x2

  v6 = this;
  if ( (byte_4B1FDD3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1BCAFF8(
                                                               &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
                                                               v7);
    byte_4B1FDD3 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0LL)
    || (v9 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL)
    || !v9 )
  {
    sub_1BCB254(this, obj);
  }
  return ClassBoardEffectListDialogSkillDetailComponent__SetDetailTextAndGetContentHeight(
           v9,
           (System_String_o *)this->fields.m_CancellationTokenSource,
           v10);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
        int32_t baseId,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        System_Int32_array *openedSquareIdArray,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x24
  __int64 v20; // x0
  __int64 v21; // x1
  Il2CppObject *Master_object; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Func_T__TResult__o *v25; // x23
  System_Collections_Generic_IEnumerable_T__o *v26; // x0
  System_Collections_Generic_IEnumerable_T__o *v27; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v29; // x4
  ClassBoardSquareEntity_array *v30; // x22

  if ( (byte_4B1FDD5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___, *(_QWORD *)&dispType);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardSquareMaster___, v12);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___, v14);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___, v15);
    sub_1BCAFF8(&System_Func_int__ClassBoardSquareEntity__TypeInfo, v16);
    sub_1BCAFF8(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass49_0__GetOpenSkillList_b__0__,
      v17);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass49_0_TypeInfo, v18);
    byte_4B1FDD5 = 1;
  }
  v19 = sub_1BCB244(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass49_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1BCB254(v20, v21);
  *(_DWORD *)(v19 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v19 + 16) = Master_object;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v19 + 16), (int32_t)Master_object, v23, v24);
  if ( openedSquareIdArray )
  {
    v25 = (System_Func_T__TResult__o *)sub_1BCB244(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    System_Func_int__object____ctor(
      v25,
      (Il2CppObject *)v19,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass49_0__GetOpenSkillList_b__0__,
      0LL);
    v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v25,
                                                           (const MethodInfo_304C604 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v27 = BasicHelper__ExcludeNull_object_(
            v26,
            (const MethodInfo_3004870 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v27,
                                                                (const MethodInfo_30572C4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v19 + 24), 0LL);
  }
  v30 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v30,
           dispType,
           ignoreTurnOrCountPassive,
           classStatisticsInfos,
           v29);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *__fastcall ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
        ClassBoardSquareEntity_array *openedSquareArray,
        int32_t dispType,
        bool ignoreTurnOrCountPassive,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v59; // x19
  Il2CppObject *IsPassive; // x0
  __int64 v61; // x1
  Il2CppObject *v62; // x22
  Il2CppObject *v63; // x27
  __int64 v64; // x2
  int32_t v65; // w20
  signed int max_length; // w8
  unsigned int v67; // w28
  ClassBoardSquareEntity_o *v68; // x29
  System_Collections_Generic_List_object__o *v69; // x19
  Il2CppObject *v70; // x21
  System_Collections_Generic_List_object__o *v71; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v73; // x19
  SkillLvEntity_o *v74; // x20
  System_Collections_Generic_List_object__o *v75; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v76; // x21
  const MethodInfo *v77; // x5
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  struct System_Object_array *items; // x8
  _QWORD *v81; // x9
  __int64 size; // x10
  Il2CppClass **v83; // x0
  System_Collections_Generic_List_object__o *v84; // x23
  _BOOL8 v85; // x0
  __int64 v86; // x1
  Il2CppObject *current; // x24
  Il2CppObject *v88; // x0
  __int64 v89; // x1
  Il2CppObject *v90; // x27
  __int64 v91; // x1
  System_Collections_Generic_List_object__o *v92; // x19
  Il2CppObject *v93; // x0
  FuncDispEntity_o *v94; // x19
  System_Collections_Generic_List_object__o *v95; // x21
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v96; // x25
  const MethodInfo *v97; // x5
  __int64 v98; // x0
  __int64 v99; // x1
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass **v105; // x0
  __int64 v106; // x0
  __int64 v107; // x1
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  System_String_o *klass; // x21
  System_String_o *monitor; // x25
  int32_t v112; // w27
  int32_t v113; // w20
  int32_t v114; // w26
  int32_t v115; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v116; // x24
  const MethodInfo *v117; // x7
  __int64 v118; // x0
  __int64 v119; // x1
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  struct System_Object_array *v122; // x8
  _QWORD *v123; // x9
  __int64 v124; // x10
  Il2CppClass **v125; // x0
  struct System_Object_array *v126; // x8
  _QWORD *v127; // x9
  __int64 v128; // x10
  Il2CppClass **v129; // x0
  System_String_o *v130; // x23
  System_String_o *EffectExplanation; // x0
  int32_t priority; // w19
  int32_t id; // w20
  int32_t iconId; // w24
  int32_t skillType; // w25
  System_String_o *v136; // x26
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v137; // x21
  const MethodInfo *v138; // x7
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  _BOOL8 v145; // x0
  __int64 v146; // x1
  Il2CppObject *value; // x23
  System_String_o *Name; // x24
  Il2CppObject *v149; // x0
  __int64 v150; // x1
  Il2CppObject *v151; // x0
  __int64 v152; // x1
  _DWORD *v153; // x8
  __int64 v154; // x1
  Il2CppObject *v155; // x0
  __int64 v156; // x1
  Il2CppObject *v157; // x0
  __int64 v158; // x1
  Il2CppClass *v159; // x8
  __int64 v160; // x26
  int32_t v161; // w25
  Il2CppObject *v162; // x19
  __int64 v163; // x0
  __int64 v164; // x1
  __int64 v165; // x2
  _DWORD *v166; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v168; // x8
  __int64 v169; // x10
  unsigned __int64 v170; // x9
  __int64 v171; // x10
  unsigned __int64 v172; // x12
  int v173; // w13
  _DWORD *v174; // x8
  int32_t v175; // w8
  Il2CppObject *v176; // x0
  __int64 v177; // x1
  const MethodInfo *v178; // x2
  Il2CppClass *v179; // x8
  System_String_o *data; // x19
  System_String_o *v181; // x26
  Il2CppObject *v182; // x0
  __int64 v183; // x1
  _DWORD *v184; // x8
  int32_t v185; // w27
  Il2CppObject *v186; // x0
  __int64 v187; // x1
  _DWORD *v188; // x8
  int32_t v189; // w28
  Il2CppObject *v190; // x0
  __int64 v191; // x1
  _DWORD *v192; // x8
  int32_t v193; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v194; // x21
  const MethodInfo *v195; // x7
  __int64 v196; // x0
  __int64 v197; // x1
  int32_t v198; // w2
  const MethodInfo *v199; // x3
  struct System_Object_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  Il2CppClass **v203; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v204; // x0
  System_Func_object__int__o *_9__50_0; // x20
  Il2CppObject *v206; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v208; // w2
  const MethodInfo *v209; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v210; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v211; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v212; // x19
  System_Func_object__int__o *_9__50_1; // x20
  Il2CppObject *v214; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v215; // x0
  int32_t v216; // w2
  const MethodInfo *v217; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v218; // x0
  ClassBoardSquareEntity_array *v221; // [xsp+18h] [xbp-158h]
  int32_t v222; // [xsp+24h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v223; // [xsp+28h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+30h] [xbp-140h]
  System_Collections_Generic_Dictionary_object__object__o *v225; // [xsp+38h] [xbp-138h]
  System_Collections_Generic_List_object__o *v226; // [xsp+40h] [xbp-130h]
  FuncDispMaster_o *v227; // [xsp+48h] [xbp-128h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v229; // [xsp+58h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v230; // [xsp+80h] [xbp-F0h] BYREF
  Il2CppObject *v231; // [xsp+98h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v232; // [xsp+A0h] [xbp-D0h] BYREF
  FuncDispEntity_o *v233; // [xsp+C8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v234; // [xsp+D0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v235; // [xsp+F0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+F8h] [xbp-78h] BYREF
  SkillLvEntity_o *v237; // [xsp+100h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+108h] [xbp-68h] BYREF

  if ( (byte_4B1FDD6 & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, *(_QWORD *)&dispType);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v7);
    sub_1BCAFF8(&Method_DataManager_GetMaster_FuncDispMaster___, v8);
    sub_1BCAFF8(&Method_DataManager_GetMaster_FunctionMaster___, v9);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillLvMaster___, v10);
    sub_1BCAFF8(&Method_DataManager_GetMaster_SkillMaster___, v11);
    sub_1BCAFF8(&DataManager_TypeInfo, v12);
    sub_1BCAFF8(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__, v13);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__,
      v14);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__,
      v15);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__,
      v16);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__,
      v17);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__,
      v18);
    sub_1BCAFF8(
      &System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo,
      v19);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v20);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___,
      v21);
    sub_1BCAFF8(
      &Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___,
      v22);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__,
      v23);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__,
      v24);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v25);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__,
      v26);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v27);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__,
      v28);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__,
      v29);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v30);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__,
      v31);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo, v32);
    sub_1BCAFF8(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo, v33);
    sub_1BCAFF8(&int___TypeInfo, v34);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__,
      v35);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__,
      v36);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__,
      v37);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v38);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Contains__, v39);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v40);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__,
      v41);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__,
      v42);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__,
      v43);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__, v44);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v45);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__,
      v46);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__,
      v47);
    sub_1BCAFF8(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo,
      v48);
    sub_1BCAFF8(
      &System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo,
      v49);
    sub_1BCAFF8(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo, v50);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v51);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo, v52);
    sub_1BCAFF8(&Method_System_String_Join_int___, v53);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__50_0__, v54);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__50_1__, v55);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v56);
    sub_1BCAFF8(&StringLiteral_806/*","*/, v57);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v58);
    byte_4B1FDD6 = 1;
  }
  v237 = 0LL;
  entity = 0LL;
  v235 = 0LL;
  entitys = 0LL;
  memset(&v234, 0, sizeof(v234));
  v233 = 0LL;
  v231 = 0LL;
  memset(&v232, 0, sizeof(v232));
  memset(&v230, 0, sizeof(v230));
  v59 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v59,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_158;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v59;
  v221 = openedSquareArray;
  v222 = dispType;
  v226 = v59;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillMaster___);
  v62 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v223 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v63 = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v225 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v225,
    (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  v65 = v222;
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v67 = 0;
    v227 = (FuncDispMaster_o *)v63;
    while ( 1 )
    {
      if ( v67 >= max_length )
        sub_1BCB25C(IsPassive, v61, v64);
      v68 = openedSquareArray->m_Items[v67];
      v69 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v69,
        (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v69;
      if ( !v68 )
        goto LABEL_158;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v68, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        break;
      if ( v65 == 2 )
        goto LABEL_62;
      IsPassive = (Il2CppObject *)Master_object;
      if ( !Master_object )
        goto LABEL_158;
      IsPassive = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    Master_object,
                                    &entity,
                                    v68->fields.targetId,
                                    (const MethodInfo_32C7E4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( !v62 )
        goto LABEL_158;
      IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                    (SkillLvMaster_o *)v62,
                                    &v237,
                                    v68->fields.targetId,
                                    v68->fields.upSkillLv,
                                    0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
        goto LABEL_62;
      if ( ignoreTurnOrCountPassive )
      {
        IsPassive = (Il2CppObject *)v237;
        if ( !v237 )
          goto LABEL_158;
        IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v237, 0LL);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
          goto LABEL_62;
      }
      if ( !v237 || !v63 )
        goto LABEL_158;
      IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                    (FuncDispMaster_o *)v63,
                                    &v235,
                                    v237->fields.funcId,
                                    0LL);
      if ( ((unsigned __int8)IsPassive & 1) != 0 )
      {
        if ( !v237 )
          goto LABEL_158;
        IsPassive = (Il2CppObject *)System_String__Join_int_(
                                      (System_String_o *)StringLiteral_806/*","*/,
                                      (System_Collections_Generic_IEnumerable_T__o *)v237->fields.funcId,
                                      (const MethodInfo_30C23B4 *)Method_System_String_Join_int___);
        if ( !v225 )
          goto LABEL_158;
        v70 = IsPassive;
        if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                v225,
                IsPassive,
                (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
        {
          v71 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v71,
            (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
          System_Collections_Generic_Dictionary_object__object___set_Item(
            v225,
            v70,
            (Il2CppObject *)v71,
            (const MethodInfo_3385D64 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
        }
        Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                 v225,
                 v70,
                 (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
        v73 = v235;
        v74 = v237;
        v75 = (System_Collections_Generic_List_object__o *)Item;
        v76 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BCB244(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v76, v73, v74, 0LL, v68, v77);
        if ( !v75 )
          goto LABEL_158;
        items = v75->fields._items;
        v81 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
        ++v75->fields._version;
        if ( !items )
          goto LABEL_158;
        size = v75->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v75,
            (Il2CppObject *)v76,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v81[4] + 192LL) + 112LL));
        }
        else
        {
          v83 = &items->obj.klass + size;
          v75->fields._size = size + 1;
          v83[4] = (Il2CppClass *)v76;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v83 + 4), (int32_t)v76, v78, v79);
        }
LABEL_61:
        v65 = v222;
        openedSquareArray = v221;
        goto LABEL_62;
      }
      IsPassive = entity;
      if ( !entity )
        goto LABEL_158;
      IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
      if ( !entity )
        goto LABEL_158;
      v130 = (System_String_o *)IsPassive;
      EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
      priority = v68->fields.priority;
      id = v68->fields.id;
      iconId = v68->fields.iconId;
      skillType = v68->fields.skillType;
      v136 = EffectExplanation;
      v137 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BCB244(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
      ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
        v137,
        v130,
        v136,
        id,
        priority,
        iconId,
        skillType,
        v138);
      if ( !v226 )
        goto LABEL_158;
      v141 = v226->fields._items;
      v65 = v222;
      openedSquareArray = v221;
      v142 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
      ++v226->fields._version;
      if ( !v141 )
        goto LABEL_158;
      v143 = v226->fields._size;
      if ( (unsigned int)v143 >= v141->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v226,
          (Il2CppObject *)v137,
          *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
      }
      else
      {
        v144 = &v141->obj.klass + v143;
        v226->fields._size = v143 + 1;
        v144[4] = (Il2CppClass *)v137;
        sub_1BCAF9C((CGThumbnailListItem_o *)(v144 + 4), (int32_t)v137, v139, v140);
      }
LABEL_62:
      max_length = openedSquareArray->max_length;
      if ( (int)++v67 >= max_length )
        goto LABEL_81;
    }
    IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v68, 0LL);
    if ( v65 == 1 || ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    IsPassive = (Il2CppObject *)v223;
    if ( !v223 )
      goto LABEL_158;
    IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                  v223,
                                  &entitys,
                                  v68->fields.targetId,
                                  v68->fields.upSkillLv,
                                  0LL);
    if ( ((unsigned __int8)IsPassive & 1) == 0 )
      goto LABEL_62;
    v84 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v84,
      (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
    IsPassive = (Il2CppObject *)entitys;
    if ( !entitys )
      goto LABEL_158;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v229,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    *(_OWORD *)&v234.fields._list = *(_OWORD *)&v229.fields._dictionary;
    v234.fields._current = v229.fields._current.fields.key;
    while ( 1 )
    {
      v85 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v234,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
      v63 = (Il2CppObject *)v227;
      if ( !v85 )
        break;
      current = v234.fields._current;
      if ( !v234.fields._current )
        sub_1BCB254(v85, v86);
      if ( !v227 )
        sub_1BCB254(v85, v86);
      if ( FuncDispMaster__IsContainFuncIds(v227, &v233, (System_Int32_array *)v234.fields._current[3].klass, 0LL) )
      {
        v88 = (Il2CppObject *)System_String__Join_int_(
                                (System_String_o *)StringLiteral_806/*","*/,
                                (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                (const MethodInfo_30C23B4 *)Method_System_String_Join_int___);
        if ( !v84 )
          sub_1BCB254(v88, v89);
        v90 = v88;
        if ( !System_Collections_Generic_List_object___Contains(
                v84,
                v88,
                (const MethodInfo_36B9F60 *)Method_System_Collections_Generic_List_string__Contains__) )
        {
          if ( !v225 )
            sub_1BCB254(0LL, v91);
          if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v225,
                  v90,
                  (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
          {
            v92 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v92,
              (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
            System_Collections_Generic_Dictionary_object__object___set_Item(
              v225,
              v90,
              (Il2CppObject *)v92,
              (const MethodInfo_3385D64 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
          }
          v93 = System_Collections_Generic_Dictionary_object__object___get_Item(
                  v225,
                  v90,
                  (const MethodInfo_3385CF8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
          v94 = v233;
          v95 = (System_Collections_Generic_List_object__o *)v93;
          v96 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1BCB244(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
          ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
            v96,
            v94,
            0LL,
            (ClassBoardCommandSpellEntity_o *)current,
            v68,
            v97);
          if ( !v95 )
            sub_1BCB254(v98, v99);
          v102 = v95->fields._items;
          v103 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
          ++v95->fields._version;
          if ( !v102 )
            sub_1BCB254(v98, v99);
          v104 = v95->fields._size;
          if ( (unsigned int)v104 >= v102->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v95,
              (Il2CppObject *)v96,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
          }
          else
          {
            v105 = &v102->obj.klass + v104;
            v95->fields._size = v104 + 1;
            v105[4] = (Il2CppClass *)v96;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v105 + 4), (int32_t)v96, v100, v101);
          }
          v126 = v84->fields._items;
          v127 = Method_System_Collections_Generic_List_string__Add__;
          ++v84->fields._version;
          if ( !v126 )
            sub_1BCB254(v106, v107);
          v128 = v84->fields._size;
          if ( (unsigned int)v128 >= v126->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v84,
              v90,
              *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
          }
          else
          {
            v129 = &v126->obj.klass + v128;
            v84->fields._size = v128 + 1;
            v129[4] = (Il2CppClass *)v90;
            sub_1BCAF9C((CGThumbnailListItem_o *)(v129 + 4), (int32_t)v90, v108, v109);
          }
        }
      }
      else
      {
        klass = (System_String_o *)current[2].klass;
        monitor = (System_String_o *)current[2].monitor;
        v112 = v68->fields.priority;
        v113 = v68->fields.id;
        v114 = v68->fields.iconId;
        v115 = v68->fields.skillType;
        v116 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BCB244(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v116,
          klass,
          monitor,
          v113,
          v112,
          v114,
          v115,
          v117);
        if ( !v226 )
          sub_1BCB254(v118, v119);
        v122 = v226->fields._items;
        v123 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v226->fields._version;
        if ( !v122 )
          sub_1BCB254(v118, v119);
        v124 = v226->fields._size;
        if ( (unsigned int)v124 >= v122->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v226,
            (Il2CppObject *)v116,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
        }
        else
        {
          v125 = &v122->obj.klass + v124;
          v226->fields._size = v124 + 1;
          v125[4] = (Il2CppClass *)v116;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v125 + 4), (int32_t)v116, v120, v121);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v234,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    goto LABEL_61;
  }
LABEL_81:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v225;
  if ( !v225 )
LABEL_158:
    sub_1BCB254(IsPassive, v61);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v229,
    v225,
    (const MethodInfo_33861A8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v232 = v229;
  while ( 1 )
  {
    v145 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
             &v232,
             (const MethodInfo_348120C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v145 )
      break;
    value = v232.fields._current.fields.value;
    if ( !v232.fields._current.fields.value )
      sub_1BCB254(v145, v146);
    if ( SLODWORD(v232.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v149 = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)v232.fields._current.fields.value,
               0,
               (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v149 )
        sub_1BCB254(0LL, v150);
      if ( v149[1].monitor )
      {
        v151 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v151 )
          sub_1BCB254(0LL, v152);
        v153 = v151[1].monitor;
        if ( !v153 )
          sub_1BCB254(v151, v152);
        if ( !Master_object )
          sub_1BCB254(0LL, v152);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v231,
               v153[4],
               (const MethodInfo_32C7E4C *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v231 )
            sub_1BCB254(0LL, v154);
          Name = SkillEntity__getName((SkillEntity_o *)v231, 0LL);
        }
      }
      else
      {
        v155 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v155 )
          sub_1BCB254(0LL, v156);
        if ( v155[2].klass )
        {
          v157 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v157 )
            sub_1BCB254(0LL, v158);
          v159 = v157[2].klass;
          if ( !v159 )
            sub_1BCB254(v157, v158);
          Name = (System_String_o *)v159->_1.byval_arg.data;
        }
      }
      v160 = sub_1BCB0A0(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v229,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v161 = 0;
      *(_OWORD *)&v230.fields._list = *(_OWORD *)&v229.fields._dictionary;
      v230.fields._current = v229.fields._current.fields.key;
LABEL_102:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v230,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v230,
          (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v176 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v176 )
          sub_1BCB254(0LL, v177);
        v179 = v176[1].klass;
        if ( !v179 )
          sub_1BCB254(v176, v177);
        data = (System_String_o *)v179->_1.byval_arg.data;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v181 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 data,
                 (System_Int32_array *)v160,
                 v178);
        v182 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v182 )
          sub_1BCB254(0LL, v183);
        v184 = v182[2].monitor;
        if ( !v184 )
          sub_1BCB254(v182, v183);
        v185 = v184[5];
        v186 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v186 )
          sub_1BCB254(0LL, v187);
        v188 = v186[2].monitor;
        if ( !v188 )
          sub_1BCB254(v186, v187);
        v189 = v188[6];
        v190 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v190 )
          sub_1BCB254(0LL, v191);
        v192 = v190[2].monitor;
        if ( !v192 )
          sub_1BCB254(v190, v191);
        v193 = v192[14];
        v194 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1BCB244(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v194,
          Name,
          v181,
          v185,
          v161,
          v189,
          v193,
          v195);
        if ( !v226 )
          sub_1BCB254(v196, v197);
        v200 = v226->fields._items;
        v201 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v226->fields._version;
        if ( !v200 )
          sub_1BCB254(v196, v197);
        v202 = v226->fields._size;
        if ( (unsigned int)v202 >= v200->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v226,
            (Il2CppObject *)v194,
            *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
        }
        else
        {
          v203 = &v200->obj.klass + v202;
          v226->fields._size = v202 + 1;
          v203[4] = (Il2CppClass *)v194;
          sub_1BCAF9C((CGThumbnailListItem_o *)(v203 + 4), (int32_t)v194, v198, v199);
        }
        continue;
      }
      v162 = v230.fields._current;
      v163 = sub_1BCB0A0(int___TypeInfo, 0LL);
      if ( !v162 )
        sub_1BCB254(v163, v164);
      v166 = v162[1].monitor;
      if ( v166 )
      {
        if ( !v62 )
          sub_1BCB254(v163, v164);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v62,
                                                               v166[4],
                                                               v166[5],
                                                               classStatisticsInfos,
                                                               0LL);
LABEL_109:
        v168 = (__int64)DispValFromSkill;
      }
      else
      {
        v168 = v163;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v162[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL,
                                                                 0LL);
          goto LABEL_109;
        }
      }
      if ( !v160 )
        sub_1BCB254(DispValFromSkill, v164);
      v169 = *(_QWORD *)(v160 + 24);
      if ( v169 )
      {
        if ( (int)v169 >= 1 )
        {
          v170 = 0LL;
          v171 = (unsigned int)*(_QWORD *)(v160 + 24);
          do
          {
            if ( !v168 )
              sub_1BCB254(DispValFromSkill, v164);
            if ( v170 >= *(unsigned int *)(v168 + 24) )
              sub_1BCB25C(DispValFromSkill, v164, v165);
            v172 = v160 + 4 * v170;
            v173 = *(_DWORD *)(v168 + 32 + 4 * v170++);
            *(_DWORD *)(v172 + 32) += v173;
          }
          while ( v171 != v170 );
        }
      }
      else
      {
        v160 = v168;
      }
      v174 = v162[2].monitor;
      if ( !v174 )
        sub_1BCB254(DispValFromSkill, v164);
      v175 = v174[20];
      if ( v175 > v161 )
        v161 = v175;
      goto LABEL_102;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v232,
    (const MethodInfo_348132C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v204 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v204 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__50_0 = (System_Func_object__int__o *)v204->static_fields->__9__50_0;
  if ( !_9__50_0 )
  {
    if ( !v204->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v204);
      v204 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v206 = (Il2CppObject *)v204->static_fields->__9;
    _9__50_0 = (System_Func_object__int__o *)sub_1BCB244(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__50_0,
      v206,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__50_0__,
      0LL);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__50_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__50_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__50_0, (int32_t)_9__50_0, v208, v209);
  }
  v210 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v226,
           (System_Func_TSource__TKey__o *)_9__50_0,
           (const MethodInfo_30466C8 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v211 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v212 = v210;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v211 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__50_1 = (System_Func_object__int__o *)v211->static_fields->__9__50_1;
  if ( !_9__50_1 )
  {
    if ( !v211->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v211);
      v211 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v214 = (Il2CppObject *)v211->static_fields->__9;
    _9__50_1 = (System_Func_object__int__o *)sub_1BCB244(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__50_1,
      v214,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__50_1__,
      0LL);
    v215 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v215->__9__50_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__50_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v215->__9__50_1, (int32_t)_9__50_1, v216, v217);
  }
  v218 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v212,
                                                                (System_Func_TSource__TKey__o *)_9__50_1,
                                                                (const MethodInfo_305668C *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v218, (const MethodInfo_305BB58 *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.dialog, (int32_t)dialog, (int32_t)method, v3);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 12);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_1BCB254(gameObject, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall ClassBoardEffectListDialogSkillListComponent__IsAllOpenClassTabClassScore(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t baseId,
        int32_t grandClassId,
        ClassBoardInfo_o *supportClassBoard,
        ClassBoardInfo_o *supportGrandClassBoard,
        const MethodInfo *method)
{
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
  __int64 v22; // x19
  Il2CppObject *Master_object; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_List_ClassBoardClassEntity__o *v31; // x20
  System_Func_object__bool__o *v32; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x20
  ClassBoardEffectListDialogSkillListComponent___c_c *v34; // x8
  System_Func_bool__bool__o *_9__56_1; // x21
  Il2CppObject *v36; // x22
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  System_Collections_Generic_List_ClassBoardClassEntity__o *v42; // x20
  System_Func_object__bool__o *v43; // x21
  System_Collections_Generic_IEnumerable_TResult__o *v44; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v45; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x19
  System_Func_bool__bool__o *_9__56_3; // x20
  Il2CppObject *v48; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  System_Collections_Generic_List_ClassBoardClassEntity__o *v52; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1FDD8 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, *(_QWORD *)&baseId);
    sub_1BCAFF8(&DataManager_TypeInfo, v11);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_bool____76954608, v12);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Select_ClassBoardClassEntity__bool___, v13);
    sub_1BCAFF8(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v14);
    sub_1BCAFF8(&System_Func_bool__bool__TypeInfo, v15);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent___c__IsAllOpenClassTabClassScore_b__56_1__, v16);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent___c__IsAllOpenClassTabClassScore_b__56_3__, v17);
    sub_1BCAFF8(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0__IsAllOpenClassTabClassScore_b__0__,
      v18);
    sub_1BCAFF8(
      &Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0__IsAllOpenClassTabClassScore_b__2__,
      v19);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_TypeInfo, v20);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v21);
    byte_4B1FDD8 = 1;
  }
  entitys = 0LL;
  v52 = 0LL;
  v22 = sub_1BCB244(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_28;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 16), (int32_t)this, v25, v26);
  *(_QWORD *)(v22 + 24) = supportClassBoard;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 24), (int32_t)supportClassBoard, v27, v28);
  *(_QWORD *)(v22 + 32) = supportGrandClassBoard;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 32), (int32_t)supportGrandClassBoard, v29, v30);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_28;
  if ( !ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &entitys, baseId, 0LL) )
    return 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
LABEL_28:
    sub_1BCB254(Master_object, v24);
  if ( !ClassBoardClassMaster__TryGetEntityList((ClassBoardClassMaster_o *)Master_object, &v52, grandClassId, 0LL) )
    return 0;
  v31 = entitys;
  v32 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ClassBoardClassEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v22,
    Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0__IsAllOpenClassTabClassScore_b__0__,
    0LL);
  v33 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__bool_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                               (System_Func_TSource__TResult__o *)v32,
                                                               (const MethodInfo_304E108 *)Method_System_Linq_Enumerable_Select_ClassBoardClassEntity__bool___);
  v34 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v34 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__56_1 = v34->static_fields->__9__56_1;
  if ( !_9__56_1 )
  {
    if ( !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      v34 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v36 = (Il2CppObject *)v34->static_fields->__9;
    _9__56_1 = (System_Func_bool__bool__o *)sub_1BCB244(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(
      _9__56_1,
      v36,
      Method_ClassBoardEffectListDialogSkillListComponent___c__IsAllOpenClassTabClassScore_b__56_1__,
      0LL);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__56_1 = _9__56_1;
    sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__56_1, (int32_t)_9__56_1, v38, v39);
  }
  if ( System_Linq_Enumerable__Any_bool__50494300(
         v33,
         (System_Func_TSource__bool__o *)_9__56_1,
         (const MethodInfo_3027B5C *)Method_System_Linq_Enumerable_Any_bool____76954608) )
  {
    return 0;
  }
  v42 = v52;
  v43 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ClassBoardClassEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v43,
    (Il2CppObject *)v22,
    Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0__IsAllOpenClassTabClassScore_b__2__,
    0LL);
  v44 = System_Linq_Enumerable__Select_object__bool_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v42,
          (System_Func_TSource__TResult__o *)v43,
          (const MethodInfo_304E108 *)Method_System_Linq_Enumerable_Select_ClassBoardClassEntity__bool___);
  v45 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v46 = (System_Collections_Generic_IEnumerable_TSource__o *)v44;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v45 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__56_3 = v45->static_fields->__9__56_3;
  if ( !_9__56_3 )
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v45 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v48 = (Il2CppObject *)v45->static_fields->__9;
    _9__56_3 = (System_Func_bool__bool__o *)sub_1BCB244(System_Func_bool__bool__TypeInfo);
    System_Func_bool__bool____ctor(
      _9__56_3,
      v48,
      Method_ClassBoardEffectListDialogSkillListComponent___c__IsAllOpenClassTabClassScore_b__56_3__,
      0LL);
    v49 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v49->__9__56_3 = _9__56_3;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v49->__9__56_3, (int32_t)_9__56_3, v50, v51);
  }
  return !System_Linq_Enumerable__Any_bool__50494300(
            v46,
            (System_Func_TSource__bool__o *)_9__56_3,
            (const MethodInfo_3027B5C *)Method_System_Linq_Enumerable_Any_bool____76954608);
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent__IsSupport(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.isSupport;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__LoadEnd(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float targetFrameRate; // s0

  if ( (byte_4B1FDCE & 1) == 0 )
  {
    sub_1BCAFF8(&UnityEngine_Application_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_6248/*"ExecuteCallback"*/, v3);
    byte_4B1FDCE = 1;
  }
  if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
  targetFrameRate = (float)UnityEngine_Application__get_targetFrameRate(0LL);
  UnityEngine_MonoBehaviour__Invoke(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_6248/*"ExecuteCallback"*/,
    1.0 / targetFrameRate,
    0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  AtlasManagerUnit_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x21
  System_Action_object__o *v18; // x20
  ChainableActionBase_o *v19; // x0
  __int64 v20; // x1
  __int64 v21; // x2
  const MethodInfo *v22; // x3
  ChainableActionParallel_o *v23; // x20
  __int64 v24; // x21
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3

  if ( (byte_4B1FDCD & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action___TypeInfo, callback);
    sub_1BCAFF8(&System_Action_Action____TypeInfo, v6);
    sub_1BCAFF8(&System_Action_Action__TypeInfo, v7);
    sub_1BCAFF8(&System_Action_TypeInfo, v8);
    sub_1BCAFF8(&AtlasManagerUnit_TypeInfo, v9);
    sub_1BCAFF8(&ChainableActionParallel_TypeInfo, v10);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__, v11);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset_b__39_0__, v12);
    sub_1BCAFF8(&StringLiteral_7086/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, v13);
    byte_4B1FDCD = 1;
  }
  this->fields.loadEndCallback = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.loadEndCallback, (int32_t)callback, (int32_t)method, v3);
  v14 = (AtlasManagerUnit_o *)sub_1BCB244(AtlasManagerUnit_TypeInfo);
  AtlasManagerUnit___ctor(v14, (System_String_o *)StringLiteral_7086/*"GrandGraphSystem/DownloadGrandGraphSystemAtlas"*/, 0LL, 0LL);
  this->fields.boardUiAtlasManagerUnit = v14;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.boardUiAtlasManagerUnit, (int32_t)v14, v15, v16);
  v17 = sub_1BCB0A0(System_Action_Action____TypeInfo, 1LL);
  v18 = (System_Action_object__o *)sub_1BCB244(System_Action_Action__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)this,
    Method_ClassBoardEffectListDialogSkillListComponent__LoadSystemAsset_b__39_0__,
    0LL);
  if ( !v17 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_11;
  *(_QWORD *)(v17 + 32) = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)v18, v21, v22);
  v23 = (ChainableActionParallel_o *)sub_1BCB244(ChainableActionParallel_TypeInfo);
  ChainableActionParallel___ctor_48236352(v23, (System_Action_Action__array *)v17, 0LL);
  v24 = sub_1BCB0A0(System_Action___TypeInfo, 1LL);
  v25 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ClassBoardEffectListDialogSkillListComponent_LoadEnd__, 0LL);
  if ( !v24 )
    goto LABEL_10;
  if ( !*(_DWORD *)(v24 + 24) )
LABEL_11:
    sub_1BCB25C(v19, v20, v21);
  *(_QWORD *)(v24 + 32) = v25;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v24 + 32), (int32_t)v25, v21, v26);
  if ( !v23 || (v19 = ChainableActionBase__Final((ChainableActionBase_o *)v23, (System_Action_array *)v24, 0LL)) == 0LL )
LABEL_10:
    sub_1BCB254(v19, v20);
  ChainableActionBase__Execute(v19, 0LL);
}


System_String_o *__fastcall ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
        System_String_o *text,
        System_Int32_array *funcVals,
        const MethodInfo *method)
{
  System_String_o *v5; // x20

  if ( (byte_4B1FDD7 & 1) == 0 )
  {
    sub_1BCAFF8(&SkillDetailParamFormatResolver_TypeInfo, funcVals);
    byte_4B1FDD7 = 1;
  }
  v5 = FuncDispMaster__ReplaceFractionFormat(text, funcVals, 0LL);
  if ( !SkillDetailParamFormatResolver_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SkillDetailParamFormatResolver_TypeInfo);
  return SkillDetailParamFormatResolver__ApplyGivenValues(v5, funcVals, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardBaseEntity_o *classBoardBaseEntity,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  ClassBoardClassMaster_o *Master_object; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  int32_t id; // w23
  ClassBoardEffectListDialogSkillListComponent_c *v29; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8
  int32_t v31; // w23
  System_Collections_Generic_List_object__o *v32; // x22
  System_Comparison_T__o *v33; // x23
  UnityEngine_Object_o *subjectClassLabel; // x22
  UILabel_o *v35; // x22
  float v36; // s8
  __int64 v37; // x1
  BalanceConfig_c *v38; // x0
  ClassBoardClassEntity_o *current; // x23
  BalanceConfig_c *v40; // x0
  UnityEngine_GameObject_o *Object; // x0
  __int64 v42; // x1
  UnityEngine_GameObject_o *v43; // x22
  Il2CppObject *Component_object; // x24
  _BOOL8 v45; // x0
  __int64 v46; // x1
  bool IsOpen; // w0
  UnityEngine_GameObject_o *v48; // x0
  __int64 v49; // x1
  ClassBoardEffectListDialogSkillListComponent_c *v50; // x0
  UIGrid_o *classIconGrid; // x23
  UnityEngine_Transform_o *transform; // x0
  __int64 v53; // x0
  __int64 v54; // x1
  struct UIGrid_o *v55; // x8
  UnityEngine_Object_o *v56; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  float v58; // s8
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  ClassBoardEffectListDialogSkillListComponent_c *v61; // x8
  UnityEngine_GameObject_o *v62; // x20
  UnityEngine_GameObject_o *v63; // x0
  System_Collections_Generic_List_Enumerator_object__o v64; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  UnityEngine_Vector3_o LocalScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1FDCF & 1) == 0 )
  {
    sub_1BCAFF8(&BalanceConfig_TypeInfo, classBoardBaseEntity);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__, v9);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v10);
    sub_1BCAFF8(&System_Comparison_ClassBoardClassEntity__TypeInfo, v11);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v12);
    sub_1BCAFF8(&DataManager_TypeInfo, v13);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Contains_int___, v14);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___, v15);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__, v16);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__, v17);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__, v18);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___, v19);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__, v20);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__, v21);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v22);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v23);
    sub_1BCAFF8(&StringLiteral_3361/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, v24);
    byte_4B1FDCF = 1;
  }
  entitys = 0LL;
  memset(&v65, 0, sizeof(v65));
  if ( classBoardBaseEntity && (supportClassBoard || !isAll || ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL)) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
    if ( !Master_object )
      goto LABEL_75;
    if ( !ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, classBoardBaseEntity->fields.id, 0LL) )
      return;
    id = classBoardBaseEntity->fields.id;
    v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      v29 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
    }
    static_fields = v29->static_fields;
    if ( id == static_fields->EXTRA1_CLASS_BASE_ID )
      goto LABEL_17;
    v31 = classBoardBaseEntity->fields.id;
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
    }
    if ( v31 == static_fields->EXTRA2_CLASS_BASE_ID )
    {
LABEL_17:
      ClassBoardEffectListDialogSkillListComponent__CreateArrayForSort(
        this,
        classBoardBaseEntity->fields.id,
        entitys,
        v27);
      v32 = (System_Collections_Generic_List_object__o *)entitys;
      v33 = (System_Comparison_T__o *)sub_1BCB244(System_Comparison_ClassBoardClassEntity__TypeInfo);
      System_Comparison_object____ctor(
        v33,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
        0LL);
      if ( !v32 )
        goto LABEL_75;
      System_Collections_Generic_List_object___Sort_57390740(
        v32,
        v33,
        (const MethodInfo_36BB694 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    }
    subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
    {
      v35 = this->fields.subjectClassLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3361/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0LL);
      if ( !v35 )
        goto LABEL_75;
      UILabel__set_text(v35, (System_String_o *)Master_object, 0LL);
    }
    Master_object = (ClassBoardClassMaster_o *)entitys;
    if ( !entitys )
      goto LABEL_75;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v64,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    v36 = 0.0;
    v65 = v64;
    while ( 1 )
    {
      do
      {
        if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v65,
                (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v65,
            (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
          v56 = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( !UnityEngine_Object__op_Inequality(v56, 0LL, 0LL) )
            goto LABEL_67;
          Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
          if ( Master_object )
          {
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
            v58 = -v36;
            GameObjectExtensions__AddLocalPositionX(gameObject, v58, 0LL);
            Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
            if ( Master_object )
            {
              v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
              GameObjectExtensions__AddLocalPositionX(v59, v58, 0LL);
              if ( isAll
                || System_Linq_Enumerable__Count_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)entitys,
                     (const MethodInfo_3036E54 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) < 2 )
              {
                goto LABEL_67;
              }
              Master_object = (ClassBoardClassMaster_o *)this->fields.subjectClassLabel;
              if ( Master_object )
              {
                v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                v61 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
                v62 = v60;
                if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
                  v61 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
                }
                GameObjectExtensions__AddLocalPositionX(v62, v61->static_fields->classIconOneDispFixPosY, 0LL);
                Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
                if ( Master_object )
                {
                  v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                  GameObjectExtensions__AddLocalPositionX(
                    v63,
                    ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->classIconOneDispFixPosY,
                    0LL);
LABEL_67:
                  Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
                  if ( Master_object )
                  {
                    ((void (__fastcall *)(ClassBoardClassMaster_o *, Il2CppMethodPointer))Master_object->klass->vtable._8_ReplacedForThread.method)(
                      Master_object,
                      Master_object->klass->vtable._9_Updated.methodPtr);
                    return;
                  }
                }
              }
            }
          }
LABEL_75:
          sub_1BCB254(Master_object, v26);
        }
        v38 = BalanceConfig_TypeInfo;
        current = (ClassBoardClassEntity_o *)v65.fields._current;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        if ( !current )
          sub_1BCB254(v38, v37);
        if ( !System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
                current->fields.classId,
                (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___) )
          break;
        v40 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v40 = BalanceConfig_TypeInfo;
        }
      }
      while ( v40->static_fields->PlayableBeastBaseClassId != current->fields.classId );
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, this->fields.classIconObj, 0LL, 0LL, 0LL);
      v43 = Object;
      if ( !Object )
        sub_1BCB254(0LL, v42);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           Object,
                           (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v45 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v45 )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v65,
          (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
        return;
      }
      if ( !Component_object )
        sub_1BCB254(v45, v46);
      ServantClassIconComponent__Set((ServantClassIconComponent_o *)Component_object, current->fields.classId, 0, 0LL);
      if ( !supportClassBoard )
        break;
      if ( !BasicHelper__IsNullOrEmpty(
              (System_Collections_ICollection_o *)supportClassBoard->fields.releasedClassIds,
              0LL) )
      {
        IsOpen = System_Linq_Enumerable__Contains_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)supportClassBoard->fields.releasedClassIds,
                   current->fields.classId,
                   (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
        goto LABEL_45;
      }
LABEL_46:
      if ( ClassBoardClassEntity__HasFlag(current, 1LL, 0LL) )
      {
        v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Component_object, 0LL);
        if ( !v48 )
          sub_1BCB254(0LL, v49);
        UnityEngine_GameObject__SetActive(v48, 0, 0LL);
      }
      else
      {
        v50 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v50 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        ServantClassIconComponent__SetColor(
          (ServantClassIconComponent_o *)Component_object,
          v50->static_fields->DISABLED_COLOR,
          0LL);
LABEL_52:
        classIconGrid = this->fields.classIconGrid;
        transform = UnityEngine_GameObject__get_transform(v43, 0LL);
        if ( !classIconGrid )
          sub_1BCB254(transform, transform);
        UIGrid__AddChild(classIconGrid, transform, 0LL);
        LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
        GameObjectExtensions__SetLocalScale(v43, LocalScale, 0LL);
        UnityEngine_GameObject__SetActive(v43, 1, 0LL);
        v55 = this->fields.classIconGrid;
        if ( !v55 )
          sub_1BCB254(v53, v54);
        v36 = v36 + (float)(v55->fields.cellWidth * 0.5);
      }
    }
    IsOpen = ClassBoardClassEntity__IsOpen(current, 0LL);
LABEL_45:
    if ( IsOpen )
      goto LABEL_52;
    goto LABEL_46;
  }
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
    sub_1BCB254(0LL, v5);
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
    sub_1BCB254(0LL, sprite);
  ClassBoardEffectListDialog__SetIcon(dialog, sprite, name, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectListDialogSkillListComponent__SetList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        int32_t baseId,
        int32_t inputGrandClassId,
        int32_t dispType,
        bool isAll,
        ClassBoardInfo_o *supportClassBoard,
        ClassBoardInfo_o *supportGrandClassBoard,
        bool isDispGrandScore,
        ClassStatisticsInfo_array *classStatisticsInfos,
        const MethodInfo *method)
{
  _BOOL4 v13; // w20
  int32_t v16; // w24
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
  int32_t v46; // w8
  int32_t classBoardBaseId; // w8
  ClassBoardClassMaster_o *Master_object; // x0
  System_Collections_Generic_IEnumerable_T__o *v49; // x1
  const MethodInfo *v50; // x5
  long double inited; // q0
  System_Collections_Generic_List_ClassBoardClassEntity__o *v52; // x24
  ClassBoardEffectListDialogSkillListComponent___c_c *v53; // x0
  System_Func_object__bool__o *_9__48_0; // x25
  Il2CppObject *v55; // x26
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  bool v59; // w0
  int v60; // w28
  ClassBoardEffectListDialogSkillListComponent_c *v61; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v62; // x8
  int32_t v63; // w24
  UnityEngine_Object_o *classInfoObject; // x24
  System_Int32_array *squareIds; // x25
  _QWORD *v66; // x25
  __int64 v67; // x8
  __int64 v68; // x0
  __int64 v69; // x0
  System_Int32_array *v70; // x26
  _QWORD *v71; // x26
  __int64 v72; // x8
  __int64 v73; // x0
  __int64 v74; // x0
  int32_t v75; // w27
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x25
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  const MethodInfo *v80; // x5
  int grandClassId; // w27
  UnityEngine_Object_o *skillDetailObjForAll; // x23
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x24
  UnityEngine_GameObject_o *v84; // x23
  Il2CppObject *Component_object; // x24
  UnityEngine_Object_o *recycler; // x24
  float v87; // s8
  UnityEngine_Object_o *normalScoreTitleLabel; // x24
  UILabel_o *v89; // x24
  ScrollItemRecycler_o *v90; // x24
  struct ScrollItemRecycler_o *v91; // x8
  int v92; // w27
  struct ScrollItemRecycler_o *v93; // x8
  System_Func_T1__T2__TResult__o *v94; // x24
  ScrollItemRecycler_HeightCalculatorVarious_o *v95; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w25
  ScrollItemRecycler_o *v98; // x24
  System_Action_T1__T2__o *v99; // x26
  const MethodInfo *v100; // x5
  float v101; // s8
  int32_t grandSkillDataFirstIndex; // w8
  int32_t v103; // w23
  float v104; // s8
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v106; // x21
  float v107; // s9
  Il2CppObject *current; // x28
  UnityEngine_GameObject_o *Object; // x0
  __int64 v110; // x1
  UnityEngine_GameObject_o *v111; // x21
  Il2CppObject *v112; // x0
  __int64 v113; // x1
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  ClassBoardEffectListDialogSkillDetailComponent_o *v116; // x22
  __int64 v117; // x0
  __int64 v118; // x1
  const MethodInfo *v119; // x6
  float v120; // s8
  __int64 v121; // x1
  System_String_o *v122; // x0
  System_String_o *v123; // x22
  ClassBoardEffectListDialogSkillListComponent_c *v124; // x0
  ScrollItemRecycler_o *v125; // x21
  UnityEngine_GameObject_o *grandClassInfoPrefab; // x20
  float ExtraClassIconListObjHeight; // s9
  System_Action_object__o *v128; // x22
  UnityEngine_Object_o *grandScoreTitleLabel; // x20
  UnityEngine_Object_o *grandScoreTitleTopLine; // x20
  UILabel_o *v131; // x20
  ScrollItemRecycler_o *v132; // x20
  int32_t v133; // w22
  UnityEngine_GameObject_o *v134; // x21
  int v135; // [xsp+4h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v136; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v137; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+40h] [xbp-80h] BYREF
  int32_t baseIda; // [xsp+4Ch] [xbp-74h] BYREF

  v13 = isAll;
  v16 = baseId;
  baseIda = baseId;
  if ( (byte_4B1FDD4 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_GameObject__TypeInfo, *(_QWORD *)&baseId);
    sub_1BCAFF8(&System_Action_GameObject__int__TypeInfo, v18);
    sub_1BCAFF8(&Method_System_Array_Empty_int___, v19);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__, v20);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent_SetupExtraClassIconList__, v21);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__, v22);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent_TypeInfo, v23);
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardClassMaster___, v24);
    sub_1BCAFF8(&DataManager_TypeInfo, v25);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___, v26);
    sub_1BCAFF8(&Method_System_Linq_Enumerable_Any_int___, v27);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__,
      v28);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__,
      v29);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__,
      v30);
    sub_1BCAFF8(&System_Func_ClassBoardClassEntity__bool__TypeInfo, v31);
    sub_1BCAFF8(&System_Func_GameObject__int__float__TypeInfo, v32);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, v33);
    sub_1BCAFF8(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo, v34);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__,
      v35);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__,
      v36);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__,
      v37);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v38);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v39);
    sub_1BCAFF8(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__48_0__, v40);
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v41);
    sub_1BCAFF8(&StringLiteral_3360/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v42);
    sub_1BCAFF8(&StringLiteral_3359/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, v43);
    sub_1BCAFF8(&StringLiteral_3366/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/, v44);
    sub_1BCAFF8(&StringLiteral_3367/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/, v45);
    byte_4B1FDD4 = 1;
  }
  entitys = 0LL;
  memset(&v137, 0, sizeof(v137));
  this->fields.supportClassBoardInfo = supportClassBoard;
  this->fields.baseId = v16;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)&this->fields.supportClassBoardInfo,
    (int32_t)supportClassBoard,
    inputGrandClassId,
    *(const MethodInfo **)&dispType);
  if ( isDispGrandScore )
    v46 = inputGrandClassId;
  else
    v46 = -1;
  this->fields.grandClassId = v46;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( supportGrandClassBoard && supportClassBoard && isDispGrandScore )
  {
    if ( System_Linq_Enumerable__Any_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)supportGrandClassBoard->fields.squareIds,
           (const MethodInfo_30260EC *)Method_System_Linq_Enumerable_Any_int___) )
    {
      classBoardBaseId = supportGrandClassBoard->fields.classBoardBaseId;
    }
    else
    {
      classBoardBaseId = -1;
    }
    this->fields.grandClassId = classBoardBaseId;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_181;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, v16, 0LL) )
  {
    v52 = entitys;
    v53 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v53 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    _9__48_0 = (System_Func_object__bool__o *)v53->static_fields->__9__48_0;
    if ( !_9__48_0 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__48_0 = (System_Func_object__bool__o *)sub_1BCB244(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__48_0,
        v55,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__48_0__,
        0LL);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__48_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__48_0;
      sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->__9__48_0, (int32_t)_9__48_0, v57, v58);
    }
    v59 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v52,
            (System_Func_TSource__bool__o *)_9__48_0,
            (const MethodInfo_3024F54 *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v16 = baseIda;
    v60 = v59;
  }
  else
  {
    v60 = 1;
  }
  v61 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v61 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v62 = v61->static_fields;
  if ( v16 == v62->EXTRA1_CLASS_BASE_ID )
    goto LABEL_31;
  v63 = baseIda;
  if ( !v61->_2.cctor_finished )
  {
    inited = j_il2cpp_runtime_class_init_0(v61);
    v62 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v63 == v62->EXTRA2_CLASS_BASE_ID )
  {
LABEL_31:
    v135 = 1;
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
        goto LABEL_181;
      Master_object = (ClassBoardClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                                   (UnityEngine_GameObject_o *)Master_object,
                                                   0LL);
      if ( !Master_object )
        goto LABEL_181;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    v135 = 0;
  }
  if ( !this->fields.isSupport )
  {
    squareIds = 0LL;
LABEL_63:
    v70 = 0LL;
    goto LABEL_64;
  }
  if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
  {
    v66 = Method_System_Array_Empty_int___;
    v67 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v67 )
    {
      sub_1C1B4B8(Method_System_Array_Empty_int___);
      v67 = v66[7];
    }
    v68 = *(_QWORD *)(v67 + 16);
    if ( (*(_BYTE *)(v68 + 309) & 1) == 0 )
      v68 = sub_1C1B45C(inited);
    if ( !*(_DWORD *)(v68 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v68);
    v69 = *(_QWORD *)(v66[7] + 16LL);
    if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
      v69 = sub_1C1B45C(inited);
    squareIds = **(System_Int32_array ***)(v69 + 184);
    if ( !this->fields.isSupport )
      goto LABEL_63;
  }
  if ( !supportGrandClassBoard || (v70 = supportGrandClassBoard->fields.squareIds) == 0LL )
  {
    v71 = Method_System_Array_Empty_int___;
    v72 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
    if ( !v72 )
    {
      sub_1C1B4B8(Method_System_Array_Empty_int___);
      v72 = v71[7];
    }
    v73 = *(_QWORD *)(v72 + 16);
    if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
      v73 = sub_1C1B45C(inited);
    if ( !*(_DWORD *)(v73 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v73);
    v74 = *(_QWORD *)(v71[7] + 16LL);
    if ( (*(_BYTE *)(v74 + 309) & 1) == 0 )
      v74 = sub_1C1B45C(inited);
    v70 = **(System_Int32_array ***)(v74 + 184);
  }
LABEL_64:
  v75 = baseIda;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                    v75,
                    dispType,
                    0,
                    squareIds,
                    classStatisticsInfos,
                    v50);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillDispDataList, (int32_t)OpenSkillList, v78, v79);
  if ( v13 )
  {
    grandClassId = this->fields.grandClassId;
    if ( grandClassId >= 1 )
    {
      if ( !*p_skillDispDataList )
        goto LABEL_181;
      this->fields.grandSkillDataFirstIndex = (*p_skillDispDataList)->fields._size;
      if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(
                                                   grandClassId,
                                                   dispType,
                                                   0,
                                                   v70,
                                                   classStatisticsInfos,
                                                   v80);
      if ( !Master_object )
        goto LABEL_181;
      v49 = (System_Collections_Generic_IEnumerable_T__o *)Master_object;
      if ( SLODWORD(Master_object->fields._MasterName_k__BackingField) < 1 )
      {
        this->fields.grandSkillDataFirstIndex = -1;
      }
      else
      {
        Master_object = (ClassBoardClassMaster_o *)*p_skillDispDataList;
        if ( !*p_skillDispDataList )
          goto LABEL_181;
        System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)Master_object,
          v49,
          (const MethodInfo_36B9DDC *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__AddRange__);
      }
    }
  }
  if ( !*p_skillDispDataList )
    goto LABEL_181;
  if ( (*p_skillDispDataList)->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3359/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0LL);
      if ( !allClosedLabel )
        goto LABEL_181;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
      v106 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v106, 0LL, 0LL) )
      {
        Master_object = (ClassBoardClassMaster_o *)this->fields.classInfoObject;
        if ( !Master_object )
          goto LABEL_181;
        Master_object = (ClassBoardClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                                     (UnityEngine_GameObject_o *)Master_object,
                                                     0LL);
        if ( !Master_object )
          goto LABEL_181;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
      }
    }
    else
    {
      if ( (v135 & v60) != 0 )
      {
        v122 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v123 = System_String__Concat_62450424((System_String_o *)StringLiteral_3360/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v122, 0LL);
      }
      else
      {
        v123 = (System_String_o *)StringLiteral_3359/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get(v123, 0LL);
      if ( !allClosedLabel )
        goto LABEL_181;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
    }
    Master_object = (ClassBoardClassMaster_o *)this->fields.allClosedLabel;
    if ( Master_object )
    {
      Master_object = (ClassBoardClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)Master_object,
                                                   0LL);
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        if ( v13 )
          return;
        Master_object = (ClassBoardClassMaster_o *)this->fields.scrollView;
        if ( Master_object )
        {
          UIScrollView__UpdatePosition((UIScrollView_o *)Master_object, 0LL);
          return;
        }
      }
    }
    goto LABEL_181;
  }
  if ( !v13 )
    goto LABEL_82;
  p_skillDetailObjForAll = &this->fields.skillDetailObjForAll;
  skillDetailObjForAll = (UnityEngine_Object_o *)this->fields.skillDetailObjForAll;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(skillDetailObjForAll, 0LL, 0LL);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
LABEL_82:
    p_skillDetailObjForAll = &this->fields.skillDetailObj;
  v84 = *p_skillDetailObjForAll;
  if ( !*p_skillDetailObjForAll )
    goto LABEL_181;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       *p_skillDetailObjForAll,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
      v87 = 0.0;
      if ( this->fields.grandSkillDataFirstIndex >= 1 )
      {
        normalScoreTitleLabel = (UnityEngine_Object_o *)this->fields.normalScoreTitleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Master_object = (ClassBoardClassMaster_o *)UnityEngine_Object__op_Inequality(normalScoreTitleLabel, 0LL, 0LL);
        if ( ((unsigned __int8)Master_object & 1) != 0 )
        {
          Master_object = (ClassBoardClassMaster_o *)this->fields.normalScoreTitleLabel;
          if ( !Master_object )
            goto LABEL_181;
          Master_object = (ClassBoardClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)Master_object,
                                                       0LL);
          if ( !Master_object )
            goto LABEL_181;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
          v89 = this->fields.normalScoreTitleLabel;
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_3367/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_NORMAL"*/,
                                                       0LL);
          if ( !v89 )
            goto LABEL_181;
          UILabel__set_text(v89, (System_String_o *)Master_object, 0LL);
          Master_object = (ClassBoardClassMaster_o *)this->fields.normalScoreTitleLabel;
          if ( !Master_object )
            goto LABEL_181;
          v90 = this->fields.recycler;
          Master_object = (ClassBoardClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)Master_object,
                                                       0LL);
          if ( !v90 )
            goto LABEL_181;
          ScrollItemRecycler__AddListDifferentObject(
            v90,
            0,
            (UnityEngine_GameObject_o *)Master_object,
            0LL,
            0.0,
            0.0,
            0LL,
            0LL);
          v91 = this->fields.recycler;
          if ( !v91 )
            goto LABEL_181;
          v87 = 20.0;
          v91->fields.paddingTop = 20.0;
        }
      }
      v92 = v13 & v135;
      if ( (v13 & v135) != 0 )
      {
        if ( (this->fields.grandSkillDataFirstIndex & 0x80000000) == 0 )
        {
          GameObjectExtensions__SetLocalPositionY(this->fields.classInfoObject, -40.0, 0LL);
          v87 = v87 + 20.0;
        }
        v93 = this->fields.recycler;
        if ( !v93 )
          goto LABEL_181;
        v93->fields.paddingTop = v87 + this->fields.classIconSpaceOffsetY;
      }
      v94 = (System_Func_T1__T2__TResult__o *)sub_1BCB244(System_Func_GameObject__int__float__TypeInfo);
      System_Func_object__int__float____ctor(
        v94,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
        0LL);
      v95 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1BCB244(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
      ScrollItemRecycler_HeightCalculatorVarious___ctor(v95, (System_Func_GameObject__int__float__o *)v94, 0LL);
      skillDispDataList = this->fields.skillDispDataList;
      if ( !skillDispDataList )
        goto LABEL_181;
      size = skillDispDataList->fields._size;
      v98 = this->fields.recycler;
      v99 = (System_Action_T1__T2__o *)sub_1BCB244(System_Action_GameObject__int__TypeInfo);
      System_Action_object__int____ctor(
        v99,
        (Il2CppObject *)this,
        Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
        0LL);
      if ( !v98 )
        goto LABEL_181;
      ScrollItemRecycler__Init(
        v98,
        size,
        v84,
        (System_Action_GameObject__int__o *)v99,
        (ScrollItemRecycler_HeightCalculatorBase_o *)v95,
        0LL);
      v101 = 21.0;
      if ( v92 )
      {
        grandSkillDataFirstIndex = this->fields.grandSkillDataFirstIndex;
        if ( (grandSkillDataFirstIndex & 0x80000000) != 0 )
          goto LABEL_177;
        if ( !grandSkillDataFirstIndex )
          goto LABEL_148;
        if ( ClassBoardEffectListDialogSkillListComponent__IsAllOpenClassTabClassScore(
               this,
               baseIda,
               this->fields.grandClassId,
               supportClassBoard,
               supportGrandClassBoard,
               v100) )
        {
          goto LABEL_157;
        }
        v103 = this->fields.grandSkillDataFirstIndex;
        if ( v103 )
        {
          v104 = -40.0;
        }
        else
        {
LABEL_148:
          Master_object = (ClassBoardClassMaster_o *)this->fields.classInfoObject;
          if ( !Master_object )
            goto LABEL_181;
          Master_object = (ClassBoardClassMaster_o *)UnityEngine_GameObject__get_gameObject(
                                                       (UnityEngine_GameObject_o *)Master_object,
                                                       0LL);
          if ( !Master_object )
            goto LABEL_181;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
          Master_object = (ClassBoardClassMaster_o *)this->fields.normalScoreTitleLabel;
          if ( !Master_object )
            goto LABEL_181;
          Master_object = (ClassBoardClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)Master_object,
                                                       0LL);
          if ( !Master_object )
            goto LABEL_181;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
          v103 = this->fields.grandSkillDataFirstIndex;
          v104 = 30.0;
        }
        v124 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        v125 = this->fields.recycler;
        grandClassInfoPrefab = this->fields.grandClassInfoPrefab;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
          v124 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
        }
        ExtraClassIconListObjHeight = v124->static_fields->ExtraClassIconListObjHeight;
        v128 = (System_Action_object__o *)sub_1BCB244(System_Action_GameObject__TypeInfo);
        System_Action_object____ctor(
          v128,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_SetupExtraClassIconList__,
          0LL);
        if ( !v125 )
          goto LABEL_181;
        ScrollItemRecycler__AddListDifferentObject(
          v125,
          v103 - 1,
          0LL,
          grandClassInfoPrefab,
          ExtraClassIconListObjHeight,
          v104,
          (System_Action_GameObject__o *)v128,
          0LL);
        v101 = 60.0;
      }
LABEL_157:
      if ( (this->fields.grandSkillDataFirstIndex & 0x80000000) == 0 )
      {
        grandScoreTitleLabel = (UnityEngine_Object_o *)this->fields.grandScoreTitleLabel;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality(grandScoreTitleLabel, 0LL, 0LL) )
        {
          if ( !this->fields.grandSkillDataFirstIndex )
          {
            grandScoreTitleTopLine = (UnityEngine_Object_o *)this->fields.grandScoreTitleTopLine;
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality(grandScoreTitleTopLine, 0LL, 0LL) )
            {
              Master_object = (ClassBoardClassMaster_o *)this->fields.grandScoreTitleTopLine;
              if ( !Master_object )
                goto LABEL_181;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
              v101 = 20.0;
            }
          }
          Master_object = (ClassBoardClassMaster_o *)this->fields.grandScoreTitleLabel;
          if ( Master_object )
          {
            Master_object = (ClassBoardClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                         (UnityEngine_Component_o *)Master_object,
                                                         0LL);
            if ( Master_object )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
              v131 = this->fields.grandScoreTitleLabel;
              if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
              Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_3366/*"CLASS_BOARD_EFFECT_LIST_VIEW_TITLE_GRAND"*/,
                                                           0LL);
              if ( v131 )
              {
                UILabel__set_text(v131, (System_String_o *)Master_object, 0LL);
                Master_object = (ClassBoardClassMaster_o *)this->fields.grandScoreTitleLabel;
                if ( Master_object )
                {
                  v132 = this->fields.recycler;
                  v133 = this->fields.grandSkillDataFirstIndex;
                  Master_object = (ClassBoardClassMaster_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)Master_object,
                                                               0LL);
                  v134 = (UnityEngine_GameObject_o *)Master_object;
                  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
                  if ( v132 )
                  {
                    ScrollItemRecycler__AddListDifferentObject(
                      v132,
                      v133 - 1,
                      v134,
                      0LL,
                      ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields->ExtraClassTabGrandScoreTitleHeight,
                      v101,
                      0LL,
                      0LL);
                    goto LABEL_177;
                  }
                }
              }
            }
          }
LABEL_181:
          sub_1BCB254(Master_object, v49);
        }
      }
LABEL_177:
      Master_object = (ClassBoardClassMaster_o *)this->fields.recycler;
      if ( Master_object )
      {
        ScrollItemRecycler__UpdateDisplay((ScrollItemRecycler_o *)Master_object, 0LL);
        Master_object = (ClassBoardClassMaster_o *)this->fields.recycler;
        if ( Master_object )
        {
          ScrollItemRecycler__ResetScrollPos((ScrollItemRecycler_o *)Master_object, 0LL);
          return;
        }
      }
      goto LABEL_181;
    }
    Master_object = (ClassBoardClassMaster_o *)*p_skillDispDataList;
    if ( !*p_skillDispDataList )
      goto LABEL_181;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v136,
      (System_Collections_Generic_List_object__o *)Master_object,
      (const MethodInfo_36BA6C8 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    v107 = 0.0;
    v137 = v136;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v137,
              (const MethodInfo_344F51C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
    {
      current = v137.fields._current;
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v84, 0LL, 0LL, 0LL);
      v111 = Object;
      if ( !Object )
        sub_1BCB254(0LL, v110);
      v112 = UnityEngine_GameObject__GetComponent_object_(
               Object,
               (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
      v116 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v112;
      if ( !v112 )
        sub_1BCB254(0LL, v113);
      v112[5].monitor = this;
      sub_1BCAF9C((CGThumbnailListItem_o *)&v112[5].monitor, (int32_t)this, v114, v115);
      if ( !current )
        sub_1BCB254(v117, v118);
      v120 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
               v116,
               (System_String_o *)current[1].klass,
               (System_String_o *)current[1].monitor,
               (int32_t)current[2].monitor,
               HIDWORD(current[2].monitor),
               0,
               v119);
      GameObjectExtensions__SetParent_35362564(v111, this->fields.skillListParent, 0LL);
      if ( !byte_4B16196 )
      {
        sub_1BCAFF8(&UnityEngine_Vector3_TypeInfo, v121);
        byte_4B16196 = 1;
      }
      GameObjectExtensions__SetLocalScale(v111, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      GameObjectExtensions__SetLocalPosition_35356952(v111, 0.0, -v107, 0.0, 0LL);
      UnityEngine_GameObject__SetActive(v111, 1, 0LL);
      v107 = v107 + v120;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v137,
      (const MethodInfo_344F518 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
  }
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetupExtraClassIconList(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4B1FDD2 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_DataManager_GetMaster_ClassBoardBaseMaster___, obj);
    sub_1BCAFF8(&DataManager_TypeInfo, v5);
    sub_1BCAFF8(&Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__, v6);
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___, v7);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    byte_4B1FDD2 = 1;
  }
  entity = 0LL;
  if ( !obj )
    goto LABEL_13;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardClassIconListComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)DataManager__GetMaster_object_((const MethodInfo_301AA50 *)Method_DataManager_GetMaster_ClassBoardBaseMaster___);
    if ( this )
    {
      this = (ClassBoardEffectListDialogSkillListComponent_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                 (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                 &entity,
                                                                 v4->fields.grandClassId,
                                                                 (const MethodInfo_32C7E4C *)Method_DataMasterBase_ClassBoardBaseMaster__ClassBoardBaseEntity__int__TryGetEntity__);
      if ( Component_object )
      {
        ClassBoardClassIconListComponent__SetClassIconList(
          (ClassBoardClassIconListComponent_o *)Component_object,
          (ClassBoardBaseEntity_o *)entity,
          1,
          v4->fields.supportClassBoardInfo,
          1,
          0LL);
        return;
      }
    }
LABEL_13:
    sub_1BCB254(this, obj);
  }
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__SetupListItem(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t index,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  Il2CppObject *Component_object; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *Item; // x21
  UISprite_o *classIconObj; // x24
  const MethodInfo *v18; // x6
  ClassBoardEffectListDialogSkillListComponent_o *v19; // x8
  int32_t grandSkillDataFirstIndex; // w9
  UnityEngine_Object_o *subjectClassLabel; // x23

  v6 = this;
  if ( (byte_4B1FDD1 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___, obj);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__,
      v7);
    sub_1BCAFF8(&UnityEngine_Object_TypeInfo, v8);
    sub_1BCAFF8(&StringLiteral_19404/*"formation_copy_bg2"*/, v9);
    sub_1BCAFF8(&StringLiteral_21059/*"line_yellow"*/, v10);
    sub_1BCAFF8(&StringLiteral_21049/*"line"*/, v11);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1BCAFF8(&StringLiteral_20364/*"img_score_list_grand_board"*/, v12);
    byte_4B1FDD1 = 1;
  }
  if ( !obj )
    goto LABEL_27;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       obj,
                       (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_Object__op_Equality(
                                                             (UnityEngine_Object_o *)Component_object,
                                                             0LL,
                                                             0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( Component_object )
    {
      Component_object[5].monitor = v6;
      sub_1BCAF9C((CGThumbnailListItem_o *)&Component_object[5].monitor, (int32_t)v6, v14, v15);
      this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList;
      if ( this )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)this,
                 index,
                 (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
        this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        if ( this )
        {
          classIconObj = (UISprite_o *)this->fields.classIconObj;
          this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                     obj,
                                                                     (const MethodInfo_306E710 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
          if ( this )
          {
            v19 = this;
            this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.boardUiAtlasManagerUnit;
            if ( this )
            {
              grandSkillDataFirstIndex = v6->fields.grandSkillDataFirstIndex;
              subjectClassLabel = (UnityEngine_Object_o *)v19->fields.subjectClassLabel;
              if ( (grandSkillDataFirstIndex & 0x80000000) != 0 || grandSkillDataFirstIndex > index )
              {
                if ( !classIconObj )
                  goto LABEL_27;
                UISprite__set_atlas(classIconObj, v6->fields.defaultAtlas, 0LL);
                UISprite__set_spriteName(classIconObj, (System_String_o *)StringLiteral_19404/*"formation_copy_bg2"*/, 0LL);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_Object__op_Inequality(
                                                                           subjectClassLabel,
                                                                           0LL,
                                                                           0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  if ( !subjectClassLabel )
                    goto LABEL_27;
                  UISprite__set_atlas((UISprite_o *)subjectClassLabel, v6->fields.defaultAtlas, 0LL);
                  UISprite__set_spriteName((UISprite_o *)subjectClassLabel, (System_String_o *)StringLiteral_21049/*"line"*/, 0LL);
                }
              }
              else
              {
                AtlasManagerUnit__SetUI(
                  (AtlasManagerUnit_o *)this,
                  classIconObj,
                  (System_String_o *)StringLiteral_20364/*"img_score_list_grand_board"*/,
                  0LL);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_Object__op_Inequality(
                                                                           subjectClassLabel,
                                                                           0LL,
                                                                           0LL);
                if ( ((unsigned __int8)this & 1) != 0 )
                {
                  this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.boardUiAtlasManagerUnit;
                  if ( !this )
                    goto LABEL_27;
                  this = (ClassBoardEffectListDialogSkillListComponent_o *)AtlasManagerUnit__SetUI(
                                                                             (AtlasManagerUnit_o *)this,
                                                                             (UISprite_o *)subjectClassLabel,
                                                                             (System_String_o *)StringLiteral_21059/*"line_yellow"*/,
                                                                             0LL);
                }
              }
            }
            if ( Item )
            {
              ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                (ClassBoardEffectListDialogSkillDetailComponent_o *)Component_object,
                (System_String_o *)Item[1].klass,
                (System_String_o *)Item[1].monitor,
                (int32_t)Item[2].monitor,
                HIDWORD(Item[2].monitor),
                0,
                v18);
              return;
            }
          }
        }
      }
    }
LABEL_27:
    sub_1BCB254(this, obj);
  }
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___LoadSystemAsset_b__39_0(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        System_Action_o *f,
        const MethodInfo *method)
{
  AtlasManagerUnit_o *boardUiAtlasManagerUnit; // x0

  boardUiAtlasManagerUnit = this->fields.boardUiAtlasManagerUnit;
  if ( !boardUiAtlasManagerUnit )
    sub_1BCB254(0LL, f);
  AtlasManagerUnit__Load(boardUiAtlasManagerUnit, f, 3, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
        ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *this,
        FuncDispEntity_o *funcDispEntity,
        SkillLvEntity_o *skillLvEntity,
        ClassBoardCommandSpellEntity_o *commandSpellEntity,
        ClassBoardSquareEntity_o *classBoardSquareEntity,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.funcDispEntity = funcDispEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.skillLvEntity, (int32_t)skillLvEntity, v13, v14);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.commandSpellEntity, (int32_t)commandSpellEntity, v15, v16);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.classBoardSquareEntity, (int32_t)classBoardSquareEntity, v17, v18);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields.name = name;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v14->fields, (int32_t)name, v15, v16);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1BCAF9C((CGThumbnailListItem_o *)v14, (int32_t)detail, v17, v18);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B1FDDA & 1) == 0 )
  {
    sub_1BCAFF8(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo, v1);
    byte_4B1FDDA = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v2;
  sub_1BCAF9C(
    (CGThumbnailListItem_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___ctor(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__50_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__50_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCB254(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___IsAllOpenClassTabClassScore_b__56_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        bool isNotOpen,
        const MethodInfo *method)
{
  return isNotOpen;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___IsAllOpenClassTabClassScore_b__56_3(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        bool isNotOpen,
        const MethodInfo *method)
{
  return isNotOpen;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__48_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCB254(this, 0LL);
  return !ClassBoardClassEntity__IsOpen(entity, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass49_0___ctor(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


ClassBoardSquareEntity_o *__fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass49_0___GetOpenSkillList_b__0(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass49_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  ClassBoardSquareMaster_o *squareMaster; // x0

  squareMaster = this->fields.squareMaster;
  if ( !squareMaster )
    sub_1BCB254(0LL, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0___ctor(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0___IsAllOpenClassTabClassScore_b__0(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *v4; // x20
  struct ClassBoardEffectListDialogSkillListComponent_o *_4__this; // x8
  struct ClassBoardInfo_o *supportClassBoard; // x8
  struct ClassBoardInfo_o *v7; // x8

  v4 = this;
  if ( (byte_4B1FDDB & 1) == 0 )
  {
    this = (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *)sub_1BCAFF8(
                                                                                     &Method_System_Linq_Enumerable_Contains_int___,
                                                                                     entity);
    byte_4B1FDDB = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( _4__this->fields.isSupport )
  {
    supportClassBoard = v4->fields.supportClassBoard;
    if ( !supportClassBoard )
      goto LABEL_17;
    this = (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *)BasicHelper__IsNullOrEmpty(
                                                                                     (System_Collections_ICollection_o *)supportClassBoard->fields.releasedClassIds,
                                                                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    v7 = v4->fields.supportClassBoard;
    if ( !v7 || !entity )
      goto LABEL_17;
    this = (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *)System_Linq_Enumerable__Contains_int_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v7->fields.releasedClassIds,
                                                                                     entity->fields.classId,
                                                                                     (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 1;
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_17;
  }
  if ( !_4__this->fields.isSupport )
  {
    if ( entity )
      return !ClassBoardClassEntity__IsOpen(entity, 0LL);
LABEL_17:
    sub_1BCB254(this, entity);
  }
  return 0;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0___IsAllOpenClassTabClassScore_b__2(
        ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *this,
        ClassBoardClassEntity_o *grandEntity,
        const MethodInfo *method)
{
  ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *v4; // x20
  struct ClassBoardEffectListDialogSkillListComponent_o *_4__this; // x8
  struct ClassBoardInfo_o *supportGrandClassBoard; // x8
  struct ClassBoardInfo_o *v7; // x8

  v4 = this;
  if ( (byte_4B1FDDC & 1) == 0 )
  {
    this = (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *)sub_1BCAFF8(
                                                                                     &Method_System_Linq_Enumerable_Contains_int___,
                                                                                     grandEntity);
    byte_4B1FDDC = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  if ( _4__this->fields.isSupport )
  {
    supportGrandClassBoard = v4->fields.supportGrandClassBoard;
    if ( !supportGrandClassBoard )
      goto LABEL_17;
    this = (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *)BasicHelper__IsNullOrEmpty(
                                                                                     (System_Collections_ICollection_o *)supportGrandClassBoard->fields.releasedClassIds,
                                                                                     0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      return 1;
    v7 = v4->fields.supportGrandClassBoard;
    if ( !v7 || !grandEntity )
      goto LABEL_17;
    this = (ClassBoardEffectListDialogSkillListComponent___c__DisplayClass56_0_o *)System_Linq_Enumerable__Contains_int_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)v7->fields.releasedClassIds,
                                                                                     grandEntity->fields.classId,
                                                                                     (const MethodInfo_3033A7C *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)this & 1) == 0 )
      return 1;
    _4__this = v4->fields.__4__this;
    if ( !_4__this )
      goto LABEL_17;
  }
  if ( !_4__this->fields.isSupport )
  {
    if ( grandEntity )
      return !ClassBoardClassEntity__IsOpen(grandEntity, 0LL);
LABEL_17:
    sub_1BCB254(this, grandEntity);
  }
  return 0;
}