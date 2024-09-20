void __fastcall ClassBoardEffectListDialogSkillListComponent___cctor(const MethodInfo *method)
{
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *static_fields; // x8

  if ( (byte_4A5E58E & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    byte_4A5E58E = 1;
  }
  static_fields = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->EXTRA1_CLASS_BASE_ID = 0x900000008LL;
  *(_OWORD *)&static_fields->classIconOneDispFixPosY = xmmword_BB53B0;
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
        sub_1B88814(this, a);
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
    sub_1B8880C(this, a);
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
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5E587 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Union_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A5E587 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v7 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v7,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !entityList )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)entityList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v25 = v24;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    if ( !v10 )
      break;
    if ( !v25.fields._current )
      sub_1B8880C(v10, v11);
    if ( !v7 )
      sub_1B8880C(v10, v11);
    klass_high = HIDWORD(v25.fields._current[1].klass);
    items = v7->fields._items;
    v14 = Method_System_Collections_Generic_List_int__Add__;
    ++v7->fields._version;
    if ( !items )
      sub_1B8880C(v10, klass_high);
    size = v7->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v7,
        klass_high,
        *(const MethodInfo_34E0810 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = size + 1;
      items->m_Items[size + 1] = klass_high;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
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
              (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      goto LABEL_27;
    }
LABEL_31:
    sub_1B8880C(v8, v9);
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
          (const MethodInfo_2EBC408 *)Method_System_Linq_Enumerable_Union_int___);
  v21 = System_Linq_Enumerable__ToArray_int_(
          v20,
          (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_27:
  this->fields.arrayForSort = v21;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.arrayForSort, (int32_t)v21, v22, v23);
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
  if ( (byte_4A5E589 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4A5E589 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___),
        (skillDispDataList = (System_Collections_Generic_List_object__o *)v6->fields.skillDispDataList) == 0LL)
    || (v8 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                    skillDispDataList,
                                                                    index,
                                                                    (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL)
    || !v8 )
  {
    sub_1B8880C(this, obj);
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
  int32_t v13; // w2
  int32_t v14; // w3
  System_Func_T__TResult__o *v15; // x22
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  ClassBoardSquareEntity_array *OpenedSquareEntityArray; // x0
  const MethodInfo *v19; // x3
  ClassBoardSquareEntity_array *v20; // x21

  if ( (byte_4A5E58B & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardSquareMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
    sub_1B885B0(&System_Func_int__ClassBoardSquareEntity__TypeInfo);
    sub_1B885B0(&Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo);
    byte_4A5E58B = 1;
  }
  v9 = sub_1B887FC(ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_DWORD *)(v9 + 24) = baseId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardSquareMaster___);
  *(_QWORD *)(v9 + 16) = Master_object;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)Master_object, v13, v14);
  if ( openedSquareIdArray )
  {
    v15 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__ClassBoardSquareEntity__TypeInfo);
    System_Func_int__object____ctor(
      v15,
      (Il2CppObject *)v9,
      Method_ClassBoardEffectListDialogSkillListComponent___c__DisplayClass31_0__GetOpenSkillList_b__0__,
      0LL);
    v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)openedSquareIdArray,
                                                           (System_Func_TSource__TResult__o *)v15,
                                                           (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__ClassBoardSquareEntity___);
    v17 = BasicHelper__ExcludeNull_object_(
            v16,
            (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_ClassBoardSquareEntity___);
    OpenedSquareEntityArray = (ClassBoardSquareEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                                                (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                                (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_ClassBoardSquareEntity___);
  }
  else
  {
    OpenedSquareEntityArray = UserClassBoardSquareMaster__GetOpenedSquareEntityArray(*(_DWORD *)(v9 + 24), 0LL);
  }
  v20 = OpenedSquareEntityArray;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  return ClassBoardEffectListDialogSkillListComponent__GetOpenSkillListLocal(
           v20,
           dispType,
           ignoreTurnOrCountPassive,
           v19);
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
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_List_object__o *v29; // x29
  _BOOL8 v30; // x0
  __int64 v31; // x1
  Il2CppObject *current; // x26
  Il2CppObject *v33; // x0
  __int64 v34; // x1
  Il2CppObject *v35; // x22
  __int64 v36; // x1
  System_Collections_Generic_List_object__o *v37; // x19
  Il2CppObject *Item; // x0
  FuncDispEntity_o *v39; // x19
  System_Collections_Generic_List_object__o *v40; // x23
  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *v41; // x20
  const MethodInfo *v42; // x5
  __int64 v43; // x0
  __int64 v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  __int64 v51; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *klass; // x20
  System_String_o *monitor; // x23
  int32_t priority; // w26
  int32_t id; // w19
  int32_t iconId; // w24
  int32_t skillType; // w25
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v61; // x22
  const MethodInfo *v62; // x7
  __int64 v63; // x0
  __int64 v64; // x1
  int32_t v65; // w2
  int32_t v66; // w3
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  System_String_o *v75; // x22
  System_String_o *EffectExplanation; // x0
  int32_t v77; // w19
  int32_t v78; // w23
  int32_t v79; // w24
  int32_t v80; // w25
  System_String_o *v81; // x26
  const MethodInfo *v82; // x7
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  __int64 v86; // x8
  System_Collections_Generic_List_object__o *v87; // x0
  _BOOL8 v88; // x0
  __int64 v89; // x1
  Il2CppObject *value; // x22
  System_String_o *Name; // x23
  Il2CppObject *v92; // x0
  __int64 v93; // x1
  Il2CppObject *v94; // x0
  __int64 v95; // x1
  _DWORD *v96; // x8
  __int64 v97; // x1
  Il2CppObject *v98; // x0
  __int64 v99; // x1
  Il2CppObject *v100; // x0
  __int64 v101; // x1
  Il2CppClass *v102; // x8
  __int64 v103; // x25
  int32_t v104; // w24
  Il2CppObject *v105; // x19
  __int64 v106; // x0
  __int64 v107; // x1
  _DWORD *v108; // x9
  ClassBoardCommandSpellEntity_o *DispValFromSkill; // x0
  __int64 v110; // x8
  __int64 v111; // x10
  unsigned __int64 v112; // x9
  __int64 v113; // x10
  unsigned __int64 v114; // x12
  int v115; // w13
  _DWORD *v116; // x8
  int32_t v117; // w8
  Il2CppObject *v118; // x0
  __int64 v119; // x1
  const MethodInfo *v120; // x2
  Il2CppClass *v121; // x8
  System_String_o *data; // x19
  System_String_o *v123; // x25
  Il2CppObject *v124; // x0
  __int64 v125; // x1
  _DWORD *v126; // x8
  int32_t v127; // w26
  Il2CppObject *v128; // x0
  __int64 v129; // x1
  _DWORD *v130; // x8
  int32_t v131; // w20
  Il2CppObject *v132; // x0
  __int64 v133; // x1
  _DWORD *v134; // x8
  int32_t v135; // w19
  ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *v136; // x22
  const MethodInfo *v137; // x7
  __int64 v138; // x0
  __int64 v139; // x1
  int32_t v140; // w2
  int32_t v141; // w3
  struct System_Object_array *v142; // x8
  _QWORD *v143; // x9
  __int64 v144; // x10
  Il2CppClass **v145; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v146; // x0
  System_Func_object__int__o *_9__32_0; // x20
  Il2CppObject *v148; // x19
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  System_Linq_IOrderedEnumerable_TSource__o *v152; // x0
  ClassBoardEffectListDialogSkillListComponent___c_c *v153; // x8
  System_Linq_IOrderedEnumerable_TSource__o *v154; // x19
  System_Func_object__int__o *_9__32_1; // x20
  Il2CppObject *v156; // x21
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *v157; // x0
  int32_t v158; // w2
  int32_t v159; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v160; // x0
  int32_t v163; // [xsp+14h] [xbp-14Ch]
  ClassBoardCommandSpellMaster_o *v164; // [xsp+18h] [xbp-148h]
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // [xsp+20h] [xbp-140h]
  ClassBoardSquareEntity_array *v166; // [xsp+28h] [xbp-138h]
  System_Collections_Generic_Dictionary_object__object__o *v167; // [xsp+30h] [xbp-130h]
  System_Collections_Generic_List_object__o *v168; // [xsp+38h] [xbp-128h]
  FuncDispMaster_o *v169; // [xsp+40h] [xbp-120h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v170; // [xsp+48h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v171; // [xsp+70h] [xbp-F0h] BYREF
  Il2CppObject *v172; // [xsp+88h] [xbp-D8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v173; // [xsp+90h] [xbp-D0h] BYREF
  FuncDispEntity_o *v174; // [xsp+B8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v175; // [xsp+C0h] [xbp-A0h] BYREF
  FuncDispEntity_o *v176; // [xsp+E0h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+E8h] [xbp-78h] BYREF
  SkillLvEntity_o *v178; // [xsp+F0h] [xbp-70h] BYREF
  Il2CppObject *entity; // [xsp+F8h] [xbp-68h] BYREF

  if ( (byte_4A5E58C & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_FuncDispMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_FunctionMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Current__);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
    sub_1B885B0(&System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
    sub_1B885B0(&Method_System_String_Join_int___);
    sub_1B885B0(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__);
    sub_1B885B0(&Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_868/*","*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5E58C = 1;
  }
  v178 = 0LL;
  entity = 0LL;
  v176 = 0LL;
  entitys = 0LL;
  memset(&v175, 0, sizeof(v175));
  v174 = 0LL;
  v172 = 0LL;
  memset(&v173, 0, sizeof(v173));
  memset(&v171, 0, sizeof(v171));
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor__);
  if ( !openedSquareArray )
    goto LABEL_159;
  if ( !*(_QWORD *)&openedSquareArray->max_length )
    return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)v6;
  v168 = v6;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
  v9 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
  v164 = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  v10 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FuncDispMaster___);
  v167 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v167,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData____ctor__);
  max_length = openedSquareArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    v169 = (FuncDispMaster_o *)v10;
    v163 = dispType;
    v166 = openedSquareArray;
    do
    {
      if ( v12 >= (unsigned int)max_length )
        sub_1B88814(IsPassive, v8);
      v13 = openedSquareArray->m_Items[v12];
      v14 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardCommandSpellEntity__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v14,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity___ctor__);
      entitys = (System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *)v14;
      if ( !v13 )
        goto LABEL_159;
      IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsPassive(v13, 0LL);
      if ( ((unsigned __int8)IsPassive & 1) == 0 )
      {
        IsPassive = (Il2CppObject *)ClassBoardSquareEntity__get_IsCommandSpell(v13, 0LL);
        if ( dispType != 1 && ((unsigned __int8)IsPassive & 1) != 0 )
        {
          IsPassive = (Il2CppObject *)v164;
          if ( !v164 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                        v164,
                                        &entitys,
                                        v13->fields.targetId,
                                        v13->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            v29 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v29,
              (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
            IsPassive = (Il2CppObject *)entitys;
            if ( !entitys )
              goto LABEL_159;
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v170,
              (System_Collections_Generic_List_object__o *)entitys,
              (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
            *(_OWORD *)&v175.fields._list = *(_OWORD *)&v170.fields._dictionary;
            v175.fields._current = v170.fields._current.fields.key;
            while ( 1 )
            {
              v30 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v175,
                      (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
              v10 = (Il2CppObject *)v169;
              if ( !v30 )
                break;
              current = v175.fields._current;
              if ( !v175.fields._current )
                sub_1B8880C(v30, v31);
              if ( !v169 )
                sub_1B8880C(v30, v31);
              if ( FuncDispMaster__IsContainFuncIds(
                     v169,
                     &v174,
                     (System_Int32_array *)v175.fields._current[3].klass,
                     0LL) )
              {
                v33 = (Il2CppObject *)System_String__Join_int_(
                                        (System_String_o *)StringLiteral_868/*","*/,
                                        (System_Collections_Generic_IEnumerable_T__o *)current[3].klass,
                                        (const MethodInfo_2F21A08 *)Method_System_String_Join_int___);
                if ( !v29 )
                  sub_1B8880C(v33, v34);
                v35 = v33;
                if ( !System_Collections_Generic_List_object___Contains(
                        v29,
                        v33,
                        (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__) )
                {
                  if ( !v167 )
                    sub_1B8880C(0LL, v36);
                  if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                          v167,
                          v35,
                          (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                  {
                    v37 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                    System_Collections_Generic_List_object____ctor(
                      v37,
                      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                    System_Collections_Generic_Dictionary_object__object___set_Item(
                      v167,
                      v35,
                      (Il2CppObject *)v37,
                      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                  }
                  Item = System_Collections_Generic_Dictionary_object__object___get_Item(
                           v167,
                           v35,
                           (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                  v39 = v174;
                  v40 = (System_Collections_Generic_List_object__o *)Item;
                  v41 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                  ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(
                    v41,
                    v39,
                    0LL,
                    (ClassBoardCommandSpellEntity_o *)current,
                    v13,
                    v42);
                  if ( !v40 )
                    sub_1B8880C(v43, v44);
                  items = v40->fields._items;
                  v48 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                  ++v40->fields._version;
                  if ( !items )
                    sub_1B8880C(v43, v44);
                  size = v40->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v40,
                      (Il2CppObject *)v41,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v50 = &items->obj.klass + size;
                    v40->fields._size = size + 1;
                    v50[4] = (Il2CppClass *)v41;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v41, v45, v46);
                  }
                  v71 = v29->fields._items;
                  v72 = Method_System_Collections_Generic_List_string__Add__;
                  ++v29->fields._version;
                  if ( !v71 )
                    sub_1B8880C(v51, v52);
                  v73 = v29->fields._size;
                  if ( (unsigned int)v73 >= v71->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v29,
                      v35,
                      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v74 = &v71->obj.klass + v73;
                    v29->fields._size = v73 + 1;
                    v74[4] = (Il2CppClass *)v35;
                    sub_1B88554((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v35, v53, v54);
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
                v61 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  v61,
                  klass,
                  monitor,
                  id,
                  priority,
                  iconId,
                  skillType,
                  v62);
                if ( !v168 )
                  sub_1B8880C(v63, v64);
                v67 = v168->fields._items;
                v68 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v168->fields._version;
                if ( !v67 )
                  sub_1B8880C(v63, v64);
                v69 = v168->fields._size;
                if ( (unsigned int)v69 >= v67->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v168,
                    (Il2CppObject *)v61,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
                }
                else
                {
                  v70 = &v67->obj.klass + v69;
                  v168->fields._size = v69 + 1;
                  v70[4] = (Il2CppClass *)v61;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)v61, v65, v66);
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v175,
              (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
            dispType = v163;
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
                                      (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)IsPassive & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_159;
          IsPassive = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                                        (SkillLvMaster_o *)v9,
                                        &v178,
                                        v13->fields.targetId,
                                        v13->fields.upSkillLv,
                                        0LL);
          if ( ((unsigned __int8)IsPassive & 1) != 0 )
          {
            if ( !ignoreTurnOrCountPassive )
              goto LABEL_21;
            IsPassive = (Il2CppObject *)v178;
            if ( !v178 )
              goto LABEL_159;
            IsPassive = (Il2CppObject *)SkillLvEntity__IsContainsTurnOrCountBuff(v178, 0LL);
            if ( ((unsigned __int8)IsPassive & 1) == 0 )
            {
LABEL_21:
              if ( !v178 || !v10 )
                goto LABEL_159;
              IsPassive = (Il2CppObject *)FuncDispMaster__IsContainFuncIds(
                                            (FuncDispMaster_o *)v10,
                                            &v176,
                                            v178->fields.funcId,
                                            0LL);
              if ( ((unsigned __int8)IsPassive & 1) != 0 )
              {
                if ( !v178 )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)System_String__Join_int_(
                                              (System_String_o *)StringLiteral_868/*","*/,
                                              (System_Collections_Generic_IEnumerable_T__o *)v178->fields.funcId,
                                              (const MethodInfo_2F21A08 *)Method_System_String_Join_int___);
                if ( !v167 )
                  goto LABEL_159;
                v15 = IsPassive;
                if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
                        v167,
                        IsPassive,
                        (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ContainsKey__) )
                {
                  v16 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__TypeInfo);
                  System_Collections_Generic_List_object____ctor(
                    v16,
                    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor__);
                  System_Collections_Generic_Dictionary_object__object___set_Item(
                    v167,
                    v15,
                    (Il2CppObject *)v16,
                    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___set_Item__);
                }
                v17 = System_Collections_Generic_Dictionary_object__object___get_Item(
                        v167,
                        v15,
                        (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___get_Item__);
                v18 = v176;
                v19 = v178;
                v20 = (System_Collections_Generic_List_object__o *)v17;
                v21 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___ctor(v21, v18, v19, 0LL, v13, v22);
                if ( !v20 )
                  goto LABEL_159;
                v25 = v20->fields._items;
                v26 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Add__;
                ++v20->fields._version;
                if ( !v25 )
                  goto LABEL_159;
                v27 = v20->fields._size;
                if ( (unsigned int)v27 >= v25->max_length )
                {
                  v86 = v26[4];
                  v87 = v20;
LABEL_72:
                  System_Collections_Generic_List_object___AddWithResize(
                    v87,
                    (Il2CppObject *)v21,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v86 + 192) + 112LL));
                  goto LABEL_61;
                }
                v28 = &v25->obj.klass + v27;
                v20->fields._size = v27 + 1;
              }
              else
              {
                IsPassive = entity;
                if ( !entity )
                  goto LABEL_159;
                IsPassive = (Il2CppObject *)SkillEntity__getName((SkillEntity_o *)entity, 0LL);
                if ( !entity )
                  goto LABEL_159;
                v75 = (System_String_o *)IsPassive;
                EffectExplanation = SkillEntity__getEffectExplanation((SkillEntity_o *)entity, 0, 0LL);
                v77 = v13->fields.priority;
                v78 = v13->fields.id;
                v79 = v13->fields.iconId;
                v80 = v13->fields.skillType;
                v81 = EffectExplanation;
                v21 = (ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
                ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
                  (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)v21,
                  v75,
                  v81,
                  v78,
                  v77,
                  v79,
                  v80,
                  v82);
                if ( !v168 )
                  goto LABEL_159;
                v83 = v168->fields._items;
                v84 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
                ++v168->fields._version;
                if ( !v83 )
                  goto LABEL_159;
                v85 = v168->fields._size;
                v10 = (Il2CppObject *)v169;
                if ( (unsigned int)v85 >= v83->max_length )
                {
                  v86 = v84[4];
                  v87 = v168;
                  goto LABEL_72;
                }
                v28 = &v83->obj.klass + v85;
                v168->fields._size = v85 + 1;
              }
              v28[4] = (Il2CppClass *)v21;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)v21, v23, v24);
            }
          }
        }
      }
LABEL_61:
      openedSquareArray = v166;
      ++v12;
      max_length = v166->max_length;
    }
    while ( v12 < max_length );
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_FunctionMaster___);
  IsPassive = (Il2CppObject *)v167;
  if ( !v167 )
LABEL_159:
    sub_1B8880C(IsPassive, v8);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v170,
    v167,
    (const MethodInfo_31C75F8 *)Method_System_Collections_Generic_Dictionary_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___GetEnumerator__);
  v173 = v170;
  while ( 1 )
  {
    v88 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v173,
            (const MethodInfo_32C3FD0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___MoveNext__);
    if ( !v88 )
      break;
    value = v173.fields._current.fields.value;
    if ( !v173.fields._current.fields.value )
      sub_1B8880C(v88, v89);
    if ( SLODWORD(v173.fields._current.fields.value[1].monitor) >= 1 )
    {
      Name = (System_String_o *)StringLiteral_1/*""*/;
      v92 = System_Collections_Generic_List_object___get_Item(
              (System_Collections_Generic_List_object__o *)v173.fields._current.fields.value,
              0,
              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
      if ( !v92 )
        sub_1B8880C(0LL, v93);
      if ( v92[1].monitor )
      {
        v94 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)value,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v94 )
          sub_1B8880C(0LL, v95);
        v96 = v94[1].monitor;
        if ( !v96 )
          sub_1B8880C(v94, v95);
        if ( !Master_object )
          sub_1B8880C(0LL, v95);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               Master_object,
               &v172,
               v96[4],
               (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
        {
          if ( !v172 )
            sub_1B8880C(0LL, v97);
          Name = SkillEntity__getName((SkillEntity_o *)v172, 0LL);
        }
      }
      else
      {
        v98 = System_Collections_Generic_List_object___get_Item(
                (System_Collections_Generic_List_object__o *)value,
                0,
                (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v98 )
          sub_1B8880C(0LL, v99);
        if ( v98[2].klass )
        {
          v100 = System_Collections_Generic_List_object___get_Item(
                   (System_Collections_Generic_List_object__o *)value,
                   0,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
          if ( !v100 )
            sub_1B8880C(0LL, v101);
          v102 = v100[2].klass;
          if ( !v102 )
            sub_1B8880C(v100, v101);
          Name = (System_String_o *)v102->_1.byval_arg.data;
        }
      }
      v103 = sub_1B88658(int___TypeInfo, 0LL);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v170,
        (System_Collections_Generic_List_object__o *)value,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__GetEnumerator__);
      v104 = 0;
      *(_OWORD *)&v171.fields._list = *(_OWORD *)&v170.fields._dictionary;
      v171.fields._current = v170.fields._current.fields.key;
LABEL_103:
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v171,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__MoveNext__) )
      {
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v171,
          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__Dispose__);
        v118 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v118 )
          sub_1B8880C(0LL, v119);
        v121 = v118[1].klass;
        if ( !v121 )
          sub_1B8880C(v118, v119);
        data = (System_String_o *)v121->_1.byval_arg.data;
        if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
        v123 = ClassBoardEffectListDialogSkillListComponent__ReplaceFractionFormat(
                 data,
                 (System_Int32_array *)v103,
                 v120);
        v124 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v124 )
          sub_1B8880C(0LL, v125);
        v126 = v124[2].monitor;
        if ( !v126 )
          sub_1B8880C(v124, v125);
        v127 = v126[5];
        v128 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v128 )
          sub_1B8880C(0LL, v129);
        v130 = v128[2].monitor;
        if ( !v130 )
          sub_1B8880C(v128, v129);
        v131 = v130[6];
        v132 = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)value,
                 0,
                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData__get_Item__);
        if ( !v132 )
          sub_1B8880C(0LL, v133);
        v134 = v132[2].monitor;
        if ( !v134 )
          sub_1B8880C(v132, v133);
        v135 = v134[14];
        v136 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent_SkillDispData_TypeInfo);
        ClassBoardEffectListDialogSkillListComponent_SkillDispData___ctor(
          v136,
          Name,
          v123,
          v127,
          v104,
          v131,
          v135,
          v137);
        if ( !v168 )
          sub_1B8880C(v138, v139);
        v142 = v168->fields._items;
        v143 = Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Add__;
        ++v168->fields._version;
        if ( !v142 )
          sub_1B8880C(v138, v139);
        v144 = v168->fields._size;
        if ( (unsigned int)v144 >= v142->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v168,
            (Il2CppObject *)v136,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v143[4] + 192LL) + 112LL));
        }
        else
        {
          v145 = &v142->obj.klass + v144;
          v168->fields._size = v144 + 1;
          v145[4] = (Il2CppClass *)v136;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v145 + 4), (int32_t)v136, v140, v141);
        }
        continue;
      }
      v105 = v171.fields._current;
      v106 = sub_1B88658(int___TypeInfo, 0LL);
      if ( !v105 )
        sub_1B8880C(v106, v107);
      v108 = v105[1].monitor;
      if ( v108 )
      {
        if ( !v9 )
          sub_1B8880C(v106, v107);
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)SkillLvMaster__GetDispValFromSkill(
                                                               (SkillLvMaster_o *)v9,
                                                               v108[4],
                                                               v108[5],
                                                               0LL);
LABEL_110:
        v110 = (__int64)DispValFromSkill;
      }
      else
      {
        v110 = v106;
        DispValFromSkill = (ClassBoardCommandSpellEntity_o *)v105[2].klass;
        if ( DispValFromSkill )
        {
          DispValFromSkill = (ClassBoardCommandSpellEntity_o *)ClassBoardCommandSpellEntity__GetDispValFromClassBoardCommandSpell(
                                                                 DispValFromSkill,
                                                                 0LL);
          goto LABEL_110;
        }
      }
      if ( !v103 )
        sub_1B8880C(DispValFromSkill, v107);
      v111 = *(_QWORD *)(v103 + 24);
      if ( v111 )
      {
        if ( (int)v111 >= 1 )
        {
          v112 = 0LL;
          v113 = (unsigned int)*(_QWORD *)(v103 + 24);
          do
          {
            if ( !v110 )
              sub_1B8880C(DispValFromSkill, v107);
            if ( v112 >= *(unsigned int *)(v110 + 24) )
              sub_1B88814(DispValFromSkill, v107);
            v114 = v103 + 4 * v112;
            v115 = *(_DWORD *)(v110 + 32 + 4 * v112++);
            *(_DWORD *)(v114 + 32) += v115;
          }
          while ( v113 != v112 );
        }
      }
      else
      {
        v103 = v110;
      }
      v116 = v105[2].monitor;
      if ( !v116 )
        sub_1B8880C(DispValFromSkill, v107);
      v117 = v116[20];
      if ( v117 > v104 )
        v104 = v117;
      goto LABEL_103;
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v173,
    (const MethodInfo_32C40F0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_ClassBoardEffectListDialogSkillListComponent_FuncDictionaryData___Dispose__);
  v146 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v146 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_0 = (System_Func_object__int__o *)v146->static_fields->__9__32_0;
  if ( !_9__32_0 )
  {
    if ( !v146->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v146);
      v146 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v148 = (Il2CppObject *)v146->static_fields->__9;
    _9__32_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_0,
      v148,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_0__,
      0LL);
    static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    static_fields->__9__32_0 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__32_0, (int32_t)_9__32_0, v150, v151);
  }
  v152 = System_Linq_Enumerable__OrderByDescending_object__int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v168,
           (System_Func_TSource__TKey__o *)_9__32_0,
           (const MethodInfo_2EAA2F0 *)Method_System_Linq_Enumerable_OrderByDescending_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  v153 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  v154 = v152;
  if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    v153 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
  }
  _9__32_1 = (System_Func_object__int__o *)v153->static_fields->__9__32_1;
  if ( !_9__32_1 )
  {
    if ( !v153->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v153);
      v153 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    v156 = (Il2CppObject *)v153->static_fields->__9;
    _9__32_1 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__32_1,
      v156,
      Method_ClassBoardEffectListDialogSkillListComponent___c__GetOpenSkillListLocal_b__32_1__,
      0LL);
    v157 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
    v157->__9__32_1 = (struct System_Func_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int__o *)_9__32_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v157->__9__32_1, (int32_t)_9__32_1, v158, v159);
  }
  v160 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ThenBy_object__int_(
                                                                v154,
                                                                (System_Func_TSource__TKey__o *)_9__32_1,
                                                                (const MethodInfo_2EB7B78 *)Method_System_Linq_Enumerable_ThenBy_ClassBoardEffectListDialogSkillListComponent_SkillDispData__int___);
  return (System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *)System_Linq_Enumerable__ToList_object_(v160, (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_ClassBoardEffectListDialogSkillListComponent_SkillDispData___);
}


void __fastcall ClassBoardEffectListDialogSkillListComponent__Init(
        ClassBoardEffectListDialogSkillListComponent_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct ClassBoardEffectListDialog_o **p_dialog; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *gameObject; // x0

  this->fields.dialog = dialog;
  p_dialog = &this->fields.dialog;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dialog, (int32_t)dialog, (int32_t)method, v3);
  gameObject = (UnityEngine_Component_o *)*(p_dialog - 8);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL),
        (gameObject = (UnityEngine_Component_o *)this->fields.allClosedLabel) == 0LL)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL)) == 0LL )
  {
    sub_1B8880C(gameObject, v6);
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

  if ( (byte_4A5E58D & 1) == 0 )
  {
    sub_1B885B0(&SkillDetailParamFormatResolver_TypeInfo);
    sub_1B885B0(&StringLiteral_25129/*"{x"*/);
    sub_1B885B0(&StringLiteral_24914/*"{"*/);
    sub_1B885B0(&StringLiteral_24845/*"xx}"*/);
    sub_1B885B0(&StringLiteral_24844/*"xxx}"*/);
    sub_1B885B0(&StringLiteral_25154/*"}"*/);
    sub_1B885B0(&StringLiteral_25132/*"{xxxx"*/);
    sub_1B885B0(&StringLiteral_25130/*"{xx"*/);
    sub_1B885B0(&StringLiteral_24843/*"xxxx}"*/);
    sub_1B885B0(&StringLiteral_24846/*"x}"*/);
    sub_1B885B0(&StringLiteral_25131/*"{xxx"*/);
    byte_4A5E58D = 1;
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
          v7 = System_String__Concat_61718292(
                 (System_String_o *)StringLiteral_24914/*"{"*/,
                 v6,
                 (System_String_o *)StringLiteral_24843/*"xxxx}"*/,
                 0LL);
          v8 = System_Int32__ToString((int32_t)&v42, 0LL);
          v9 = System_String__Concat_61718292(
                 (System_String_o *)StringLiteral_24914/*"{"*/,
                 v8,
                 (System_String_o *)StringLiteral_24844/*"xxx}"*/,
                 0LL);
          v10 = System_Int32__ToString((int32_t)&v42, 0LL);
          v11 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_24914/*"{"*/,
                  v10,
                  (System_String_o *)StringLiteral_24845/*"xx}"*/,
                  0LL);
          v12 = System_Int32__ToString((int32_t)&v42, 0LL);
          v13 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_24914/*"{"*/,
                  v12,
                  (System_String_o *)StringLiteral_24846/*"x}"*/,
                  0LL);
          v14 = System_Int32__ToString((int32_t)&v42, 0LL);
          v15 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_24914/*"{"*/,
                  v14,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          v16 = System_Int32__ToString((int32_t)&v42, 0LL);
          v17 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_25129/*"{x"*/,
                  v16,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          v18 = System_Int32__ToString((int32_t)&v42, 0LL);
          v19 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_25130/*"{xx"*/,
                  v18,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          v20 = System_Int32__ToString((int32_t)&v42, 0LL);
          v21 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_25131/*"{xxx"*/,
                  v20,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          v22 = System_Int32__ToString((int32_t)&v42, 0LL);
          v23 = System_String__Concat_61718292(
                  (System_String_o *)StringLiteral_25132/*"{xxxx"*/,
                  v22,
                  (System_String_o *)StringLiteral_25154/*"}"*/,
                  0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v25 = v23;
          v41 = 10000 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !text )
            goto LABEL_30;
          v23 = System_String__Replace_61726660(text, v7, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v28 = v23;
          v41 = 1000 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v28 )
            goto LABEL_30;
          v23 = System_String__Replace_61726660(v28, v9, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v29 = v23;
          v41 = 100 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v29 )
            goto LABEL_30;
          v23 = System_String__Replace_61726660(v29, v11, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v30 = v23;
          v41 = 10 * funcVals->m_Items[v42 + 1];
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v30 )
            goto LABEL_30;
          v23 = System_String__Replace_61726660(v30, v13, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v31 = v23;
          v26 = System_Int32__ToString((unsigned int)funcVals + 4 * v42 + 32, 0LL);
          if ( !v31 )
            goto LABEL_30;
          v23 = System_String__Replace_61726660(v31, v15, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v32 = v23;
          v33 = 1717986919LL * funcVals->m_Items[v42 + 1];
          v41 = (v33 >> 63) + (SHIDWORD(v33) >> 2);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v32 )
            goto LABEL_30;
          v23 = System_String__Replace_61726660(v32, v17, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v34 = v23;
          v35 = 1374389535LL * funcVals->m_Items[v42 + 1];
          v41 = (v35 >> 63) + (SHIDWORD(v35) >> 5);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v34 )
            goto LABEL_30;
          v23 = System_String__Replace_61726660(v34, v19, v26, 0LL);
          if ( v42 >= funcVals->max_length )
            goto LABEL_29;
          v36 = v23;
          v37 = 274877907LL * funcVals->m_Items[v42 + 1];
          v41 = (v37 >> 63) + (SHIDWORD(v37) >> 6);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v36 )
            goto LABEL_30;
          v23 = System_String__Replace_61726660(v36, v21, v26, 0LL);
          if ( v42 >= funcVals->max_length )
LABEL_29:
            sub_1B88814(v23, v24);
          v38 = v23;
          v39 = 1759218605LL * funcVals->m_Items[v42 + 1];
          v41 = (v39 >> 63) + (SHIDWORD(v39) >> 12);
          v26 = System_Int32__ToString((int32_t)&v41, 0LL);
          if ( !v38 )
LABEL_30:
            sub_1B8880C(v26, v27);
          text = System_String__Replace_61726660(v38, v25, v26, 0LL);
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

  if ( (byte_4A5E586 & 1) == 0 )
  {
    sub_1B885B0(&BalanceConfig_TypeInfo);
    sub_1B885B0(&Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1B885B0(&System_Comparison_ClassBoardClassEntity__TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3495/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/);
    byte_4A5E586 = 1;
  }
  entitys = 0LL;
  memset(&v47, 0, sizeof(v47));
  if ( !classBoardBaseEntity || !supportClassBoard && isAll && !ClassBoardBaseEntity__IsOpen(classBoardBaseEntity, 0LL) )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
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
    v17 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_ClassBoardClassEntity__TypeInfo);
    System_Comparison_object____ctor(
      v17,
      (Il2CppObject *)this,
      Method_ClassBoardEffectListDialogSkillListComponent_CompareClassId__,
      0LL);
    if ( !v16 )
      goto LABEL_69;
    System_Collections_Generic_List_object___Sort_55571192(
      v16,
      v17,
      (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_ClassBoardClassEntity__Sort__);
  }
  subjectClassLabel = (UnityEngine_Object_o *)this->fields.subjectClassLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(subjectClassLabel, 0LL, 0LL) )
  {
    v19 = this->fields.subjectClassLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3495/*"CLASS_BOARD_EFFECT_LIST_SUBJECT_CLASS"*/, 0LL);
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
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardClassEntity__GetEnumerator__);
  v20 = 0.0;
  v47 = v46;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v47,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__MoveNext__) )
  {
    v22 = BalanceConfig_TypeInfo;
    current = (ClassBoardClassEntity_o *)v47.fields._current;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    if ( !current )
      sub_1B8880C(v22, v21);
    if ( System_Linq_Enumerable__Contains_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BalanceConfig_TypeInfo->static_fields->PlayableBeastClassIds,
           current->fields.classId,
           (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___) )
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
      sub_1B8880C(0LL, v26);
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         Object,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ServantClassIconComponent___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v29 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
    if ( v29 )
    {
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v47,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
      return;
    }
    if ( !Component_object )
      sub_1B8880C(v29, v30);
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
                 (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
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
      sub_1B8880C(transform, transform);
    UIGrid__AddChild(classIconGrid, transform, 0LL);
    LocalScale = GameObjectExtensions__GetLocalScale(this->fields.classIconObj, 0LL);
    GameObjectExtensions__SetLocalScale(v27, LocalScale, 0LL);
    UnityEngine_GameObject__SetActive(v27, 1, 0LL);
    v37 = this->fields.classIconGrid;
    if ( !v37 )
      sub_1B8880C(v35, v36);
    v20 = v20 + (float)(v37->fields.cellWidth * 0.5);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v47,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardClassEntity__Dispose__);
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
           (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_ClassBoardClassEntity___) >= 2 )
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
      sub_1B8880C(Master_object, v10);
    }
  }
LABEL_64:
  Master_object = (ClassBoardClassMaster_o *)this->fields.classIconGrid;
  if ( !Master_object )
    goto LABEL_69;
  ((void (__fastcall *)(ClassBoardClassMaster_o *, void *))Master_object->klass->vtable._8_OnListChangedImplementation.method)(
    Master_object,
    Master_object->klass[1]._1.image);
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
    sub_1B8880C(0LL, v5);
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
    sub_1B8880C(0LL, sprite);
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
  System_Collections_Generic_List_ClassBoardClassEntity__o *v14; // x23
  ClassBoardEffectListDialogSkillListComponent___c_c *v15; // x0
  System_Func_object__bool__o *_9__30_0; // x24
  Il2CppObject *v17; // x25
  struct ClassBoardEffectListDialogSkillListComponent___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  bool v21; // w0
  int v22; // w25
  ClassBoardEffectListDialogSkillListComponent_c *v23; // x0
  struct ClassBoardEffectListDialogSkillListComponent_StaticFields *v24; // x8
  int32_t v25; // w23
  int v26; // w27
  UnityEngine_Object_o *classInfoObject; // x23
  System_Int32_array *squareIds; // x22
  _QWORD *v29; // x22
  __int64 v30; // x8
  __int64 v31; // x0
  __int64 v32; // x0
  int32_t v33; // w23
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *OpenSkillList; // x0
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o **p_skillDispDataList; // x22
  int32_t v36; // w2
  int32_t v37; // w3
  UnityEngine_Object_o *skillDetailObjForAll; // x21
  UnityEngine_GameObject_o **p_skillDetailObjForAll; // x23
  UnityEngine_GameObject_o *v40; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Object_o *recycler; // x23
  struct ScrollItemRecycler_o *v43; // x8
  System_Func_T1__T2__TResult__o *v44; // x22
  ScrollItemRecycler_HeightCalculatorVarious_o *v45; // x20
  struct System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__o *skillDispDataList; // x8
  int32_t size; // w23
  ScrollItemRecycler_o *v48; // x22
  System_Action_T1__T2__o *v49; // x24
  UILabel_o *allClosedLabel; // x21
  UnityEngine_Object_o *v51; // x21
  float v52; // s9
  Il2CppObject *current; // x28
  UnityEngine_GameObject_o *Object; // x0
  __int64 v55; // x1
  UnityEngine_GameObject_o *v56; // x22
  Il2CppObject *v57; // x0
  __int64 v58; // x1
  int32_t v59; // w2
  int32_t v60; // w3
  ClassBoardEffectListDialogSkillDetailComponent_o *v61; // x23
  __int64 v62; // x0
  __int64 v63; // x1
  const MethodInfo *v64; // x6
  float v65; // s8
  System_String_o *v66; // x0
  System_String_o *v67; // x22
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-90h] BYREF
  System_Collections_Generic_List_ClassBoardClassEntity__o *entitys; // [xsp+38h] [xbp-78h] BYREF
  int32_t baseIda; // [xsp+5Ch] [xbp-54h] BYREF

  baseIda = baseId;
  v7 = isAll;
  v9 = baseId;
  if ( (byte_4A5E58A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_GameObject__int__TypeInfo);
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__);
    sub_1B885B0(&Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_ClassBoardClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Current__);
    sub_1B885B0(&System_Func_ClassBoardClassEntity__bool__TypeInfo);
    sub_1B885B0(&System_Func_GameObject__int__float__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    sub_1B885B0(&ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__);
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_3494/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/);
    sub_1B885B0(&StringLiteral_3493/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/);
    byte_4A5E58A = 1;
  }
  entitys = 0LL;
  memset(&v69, 0, sizeof(v69));
  this->fields.baseId = v9;
  this->fields.isSupport = supportClassBoard != 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (ClassBoardClassMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ClassBoardClassMaster___);
  if ( !Master_object )
    goto LABEL_98;
  if ( ClassBoardClassMaster__TryGetEntityList(Master_object, &entitys, v9, 0LL) )
  {
    v14 = entitys;
    v15 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    if ( !ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
      v15 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
    }
    _9__30_0 = (System_Func_object__bool__o *)v15->static_fields->__9__30_0;
    if ( !_9__30_0 )
    {
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo;
      }
      v17 = (Il2CppObject *)v15->static_fields->__9;
      _9__30_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_ClassBoardClassEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__30_0,
        v17,
        Method_ClassBoardEffectListDialogSkillListComponent___c__SetList_b__30_0__,
        0LL);
      static_fields = ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields;
      static_fields->__9__30_0 = (struct System_Func_ClassBoardClassEntity__bool__o *)_9__30_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v19, v20);
    }
    v21 = System_Linq_Enumerable__All_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v14,
            (System_Func_TSource__bool__o *)_9__30_0,
            (const MethodInfo_2E8BEAC *)Method_System_Linq_Enumerable_All_ClassBoardClassEntity___);
    v9 = baseIda;
    v22 = v21;
  }
  else
  {
    v22 = 1;
  }
  v23 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
    v23 = ClassBoardEffectListDialogSkillListComponent_TypeInfo;
  }
  v24 = v23->static_fields;
  if ( v9 == v24->EXTRA1_CLASS_BASE_ID )
    goto LABEL_21;
  v25 = baseIda;
  if ( !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v24 = ClassBoardEffectListDialogSkillListComponent_TypeInfo->static_fields;
  }
  if ( v25 == v24->EXTRA2_CLASS_BASE_ID )
  {
LABEL_21:
    v26 = 1;
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
    v26 = 0;
  }
  if ( this->fields.isSupport )
  {
    if ( !supportClassBoard || (squareIds = supportClassBoard->fields.squareIds) == 0LL )
    {
      v29 = Method_System_Array_Empty_int___;
      v30 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v30 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v30 = v29[7];
      }
      v31 = *(_QWORD *)(v30 + 16);
      if ( (*(_BYTE *)(v31 + 309) & 1) == 0 )
        v31 = sub_1BDA48C(v31);
      if ( !*(_DWORD *)(v31 + 224) )
        j_il2cpp_runtime_class_init_0(v31);
      v32 = *(_QWORD *)(v29[7] + 16LL);
      if ( (*(_BYTE *)(v32 + 309) & 1) == 0 )
        v32 = sub_1BDA48C(v32);
      squareIds = **(System_Int32_array ***)(v32 + 184);
    }
  }
  else
  {
    squareIds = 0LL;
  }
  v33 = baseIda;
  if ( !ClassBoardEffectListDialogSkillListComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ClassBoardEffectListDialogSkillListComponent_TypeInfo);
  OpenSkillList = ClassBoardEffectListDialogSkillListComponent__GetOpenSkillList(v33, dispType, 0, squareIds, v13);
  this->fields.skillDispDataList = OpenSkillList;
  p_skillDispDataList = &this->fields.skillDispDataList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillDispDataList, (int32_t)OpenSkillList, v36, v37);
  if ( !this->fields.skillDispDataList )
LABEL_98:
    sub_1B8880C(Master_object, v12);
  if ( this->fields.skillDispDataList->fields._size <= 0 )
  {
    allClosedLabel = this->fields.allClosedLabel;
    if ( this->fields.isSupport )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3493/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/, 0LL);
      if ( !allClosedLabel )
        goto LABEL_98;
      UILabel__set_text(allClosedLabel, (System_String_o *)Master_object, 0LL);
      v51 = (UnityEngine_Object_o *)this->fields.classInfoObject;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(v51, 0LL, 0LL) )
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
      if ( (v26 & v22) != 0 )
      {
        v66 = System_Int32__ToString((int32_t)&baseIda, 0LL);
        v67 = System_String__Concat_61707032((System_String_o *)StringLiteral_3494/*"CLASS_BOARD_EFFECT_LIST_NOT_OPEN_"*/, v66, 0LL);
      }
      else
      {
        v67 = (System_String_o *)StringLiteral_3493/*"CLASS_BOARD_EFFECT_LIST_ALL_CLOSED"*/;
      }
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (ClassBoardClassMaster_o *)LocalizationManager__Get(v67, 0LL);
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
    v40 = *p_skillDetailObjForAll;
    if ( !*p_skillDetailObjForAll )
      goto LABEL_98;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         *p_skillDetailObjForAll,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
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
        if ( (v7 & v26) != 0 )
        {
          v43 = this->fields.recycler;
          if ( !v43 )
            goto LABEL_98;
          v43->fields.paddingTop = this->fields.classIconSpaceOffsetY;
        }
        v44 = (System_Func_T1__T2__TResult__o *)sub_1B887FC(System_Func_GameObject__int__float__TypeInfo);
        System_Func_object__int__float____ctor(
          v44,
          (Il2CppObject *)this,
          Method_ClassBoardEffectListDialogSkillListComponent_GetListItemHeight__,
          0LL);
        v45 = (ScrollItemRecycler_HeightCalculatorVarious_o *)sub_1B887FC(ScrollItemRecycler_HeightCalculatorVarious_TypeInfo);
        ScrollItemRecycler_HeightCalculatorVarious___ctor(v45, (System_Func_GameObject__int__float__o *)v44, 0LL);
        skillDispDataList = this->fields.skillDispDataList;
        if ( skillDispDataList )
        {
          size = skillDispDataList->fields._size;
          v48 = this->fields.recycler;
          v49 = (System_Action_T1__T2__o *)sub_1B887FC(System_Action_GameObject__int__TypeInfo);
          System_Action_object__int____ctor(
            v49,
            (Il2CppObject *)this,
            Method_ClassBoardEffectListDialogSkillListComponent_SetupListItem__,
            0LL);
          if ( v48 )
          {
            ScrollItemRecycler__Init(
              v48,
              size,
              v40,
              (System_Action_GameObject__int__o *)v49,
              (ScrollItemRecycler_HeightCalculatorBase_o *)v45,
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v68,
        (System_Collections_Generic_List_object__o *)Master_object,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__GetEnumerator__);
      v52 = 0.0;
      v69 = v68;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v69,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__MoveNext__) )
      {
        current = v69.fields._current;
        Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, v40, 0LL, 0LL, 0LL);
        v56 = Object;
        if ( !Object )
          sub_1B8880C(0LL, v55);
        v57 = UnityEngine_GameObject__GetComponent_object_(
                Object,
                (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
        v61 = (ClassBoardEffectListDialogSkillDetailComponent_o *)v57;
        if ( !v57 )
          sub_1B8880C(0LL, v58);
        v57[5].monitor = this;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v57[5].monitor, (int32_t)this, v59, v60);
        if ( !current )
          sub_1B8880C(v62, v63);
        v65 = ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
                v61,
                (System_String_o *)current[1].klass,
                (System_String_o *)current[1].monitor,
                (int32_t)current[2].monitor,
                HIDWORD(current[2].monitor),
                0,
                v64);
        GameObjectExtensions__SetParent_33729948(v56, this->fields.skillListParent, 0LL);
        if ( !byte_4A55CE6 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        GameObjectExtensions__SetLocalScale(v56, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
        GameObjectExtensions__SetLocalPosition_33724224(v56, 0.0, -v52, 0.0, 0LL);
        UnityEngine_GameObject__SetActive(v56, 1, 0LL);
        v52 = v52 + v65;
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v69,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectListDialogSkillListComponent_SkillDispData__Dispose__);
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
  int32_t v7; // w2
  int32_t v8; // w3
  ClassBoardEffectListDialogSkillDetailComponent_o *v9; // x21
  const MethodInfo *v10; // x6

  v6 = this;
  if ( (byte_4A5E588 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___);
    this = (ClassBoardEffectListDialogSkillListComponent_o *)sub_1B885B0(&Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__);
    byte_4A5E588 = 1;
  }
  if ( !obj
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                   obj,
                                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_ClassBoardEffectListDialogSkillDetailComponent___)) == 0LL
    || (v9 = (ClassBoardEffectListDialogSkillDetailComponent_o *)this,
        this->fields.skillListParent = (struct UnityEngine_GameObject_o *)v6,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillListParent, (int32_t)v6, v7, v8),
        (this = (ClassBoardEffectListDialogSkillListComponent_o *)v6->fields.skillDispDataList) == 0LL)
    || (this = (ClassBoardEffectListDialogSkillListComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)this,
                                                                   index,
                                                                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_ClassBoardEffectListDialogSkillListComponent_SkillDispData__get_Item__)) == 0LL )
  {
    sub_1B8880C(this, obj);
  }
  ClassBoardEffectListDialogSkillDetailComponent__SetDetail(
    v9,
    *(System_String_o **)&this->fields.m_CachedPtr,
    (System_String_o *)this->fields.m_CancellationTokenSource,
    (int32_t)this->fields.classIconGrid,
    HIDWORD(this->fields.classIconGrid),
    0,
    v10);
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
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.funcDispEntity = funcDispEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)funcDispEntity, v11, v12);
  this->fields.skillLvEntity = skillLvEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.skillLvEntity, (int32_t)skillLvEntity, v13, v14);
  this->fields.commandSpellEntity = commandSpellEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.commandSpellEntity,
    (int32_t)commandSpellEntity,
    v15,
    v16);
  this->fields.classBoardSquareEntity = classBoardSquareEntity;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.classBoardSquareEntity,
    (int32_t)classBoardSquareEntity,
    v17,
    v18);
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
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields.name = name;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v14->fields, (int32_t)name, v15, v16);
  v14->fields.detail = detail;
  v14 = (ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *)((char *)v14 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v14, (int32_t)detail, v17, v18);
  LODWORD(v14->monitor) = squareId;
  HIDWORD(v14->monitor) = priority;
  LODWORD(v14->fields.name) = iconId;
  HIDWORD(v14->fields.name) = skillType;
}


void __fastcall ClassBoardEffectListDialogSkillListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5E58F & 1) == 0 )
  {
    sub_1B885B0(&ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
    byte_4A5E58F = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(ClassBoardEffectListDialogSkillListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectListDialogSkillListComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectListDialogSkillListComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.priority;
}


int32_t __fastcall ClassBoardEffectListDialogSkillListComponent___c___GetOpenSkillListLocal_b__32_1(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardEffectListDialogSkillListComponent_SkillDispData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.squareId;
}


bool __fastcall ClassBoardEffectListDialogSkillListComponent___c___SetList_b__30_0(
        ClassBoardEffectListDialogSkillListComponent___c_o *this,
        ClassBoardClassEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(0LL, id);
  return ClassBoardSquareMaster__GetEntity(squareMaster, this->fields.baseId, id, 0LL);
}