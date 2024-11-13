void __fastcall CharaGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  System_Array_o *v7; // x0
  struct ListViewSort_ScaleType_array *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_RuntimeFieldHandle_o v15; // 0:w1.4

  if ( (byte_4B155A0 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&ListViewSort_ScaleType___TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
      v5,
      v6);
    byte_4B155A0 = 1;
  }
  v7 = (System_Array_o *)sub_1BCA888(ListViewSort_ScaleType___TypeInfo, 3LL);
  v15.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v8 = (struct ListViewSort_ScaleType_array *)v7;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v7, v15, 0LL);
  CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CharaGraphListViewManager_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall CharaGraphListViewManager___ctor(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CharaGraphListViewManager__AssertionForSerializeField(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListViewManager__Awake(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._13_AssertionForSerializeField.method)(
    this,
    this->klass->vtable._14_CreateList.methodPtr);
}


void __fastcall CharaGraphListViewManager__ChangeIconScale(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  CharaGraphListViewManager_c *v8; // x0
  ListViewSort_o *sort; // x0
  struct ListViewSort_ScaleType_array *IconScaleTypeRotation; // x8
  il2cpp_array_size_t max_length; // w9
  int v12; // w24
  __int64 v13; // x1
  UnityEngine_Object_o *seed; // x20
  bool v15; // w0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4B1559E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_IndexOf_ListViewSort_ScaleType___, method, v2);
    sub_1BCA7E0(&CharaGraphListViewManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B1559E = 1;
  }
  do
  {
    v8 = CharaGraphListViewManager_TypeInfo;
    if ( !CharaGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager_TypeInfo, method);
      v8 = CharaGraphListViewManager_TypeInfo;
    }
    sort = (ListViewSort_o *)System_Array__IndexOf_Int32Enum_(
                               (System_Int32Enum_array *)v8->static_fields->IconScaleTypeRotation,
                               this->fields.scaleType,
                               (const MethodInfo_300EA28 *)Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    IconScaleTypeRotation = CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation;
    if ( !IconScaleTypeRotation )
      goto LABEL_16;
    max_length = IconScaleTypeRotation->max_length;
    v12 = (int)(((unsigned int)sort & ~((int)sort >> 31)) + 1) % (int)max_length;
    if ( v12 >= max_length )
      sub_1BCAA44(sort, method);
    this->fields.scaleType = IconScaleTypeRotation->m_Items[v12 + 1];
    CharaGraphListViewManager__SelectSeedByScaleType(this, method);
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
    v15 = UnityEngine_Object__op_Equality(seed, 0LL, 0LL);
  }
  while ( v12 && v15 );
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_16;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  CharaGraphListViewManager__ModifyList(this, 1, 1, v16);
  this->fields.initMode = 2;
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
  CharaGraphListViewManager__RequestListObject(this, 2, v17);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1BCAA3C(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall CharaGraphListViewManager__CreateList(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *listViewPattern,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1
  ListViewSort_o *ListViewPattern_k__BackingField; // x0
  struct ListViewSort_o *v13; // x0
  struct ListViewSort_o **p_sort; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_4B1558F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__AddRange__, listViewPattern, method);
    byte_4B1558F = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields._ListViewPattern_k__BackingField = listViewPattern;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ListViewPattern_k__BackingField,
    (int64_t)listViewPattern,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_9;
  v13 = (struct ListViewSort_o *)(*(__int64 (__fastcall **)(ListViewSort_o *, void *))&ListViewPattern_k__BackingField->klass[1]._1.byval_arg.bits)(
                                   ListViewPattern_k__BackingField,
                                   ListViewPattern_k__BackingField->klass[1]._1.this_arg.data);
  this->fields.sort = v13;
  p_sort = &this->fields.sort;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sort, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  ListViewPattern_k__BackingField = this->fields.sort;
  if ( !ListViewPattern_k__BackingField
    || (ListViewSort__Load(ListViewPattern_k__BackingField, 0LL),
        (ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField) == 0LL)
    || (itemList = this->fields.itemList,
        ListViewPattern_k__BackingField = (ListViewSort_o *)((__int64 (__fastcall *)(ListViewSort_o *, const char *))ListViewPattern_k__BackingField->klass[1]._1.gc_desc)(
                                                              ListViewPattern_k__BackingField,
                                                              ListViewPattern_k__BackingField->klass[1]._1.name),
        !itemList)
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Collections_Generic_IEnumerable_T__o *)ListViewPattern_k__BackingField,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        !*p_sort) )
  {
LABEL_9:
    sub_1BCAA3C(ListViewPattern_k__BackingField, v11);
  }
  this->fields.scaleType = (*p_sort)->fields.iconScaleKind;
  CharaGraphListViewManager__SelectSeedByScaleType(this, v11);
  CharaGraphListViewManager__SetBonusFilterIds(this, v22);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  CharaGraphListViewManager__SetupEmptyMessage(this, v23);
}


void __fastcall CharaGraphListViewManager__DestroyList(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( ListViewPattern_k__BackingField )
  {
    SortOwner_k__BackingField = ListViewPattern_k__BackingField->fields._SortOwner_k__BackingField;
    if ( SortOwner_k__BackingField )
      CharaGraphSortOwnerBase__Save(SortOwner_k__BackingField, v3);
  }
}


void __fastcall CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
        CharaGraphListViewManager_o *this,
        System_Int64_array **trueDataArray,
        System_Int64_array **falseDataArray,
        System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *itemEnumerable,
        System_Func_CharaGraphListViewItemBase__bool__o *cond,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x21
  __int64 v31; // x0
  __int64 v32; // x1
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  CharaGraphListViewManager___c_c *v44; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x20
  System_Func_T__TResult__o *_9__45_0; // x24
  Il2CppObject *v47; // x25
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Int64_array *v56; // x0
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x3
  System_Func_object__bool__o *v66; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v67; // x0
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  CharaGraphListViewManager___c_c *v71; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x20
  System_Func_T__TResult__o *_9__45_2; // x21
  Il2CppObject *v74; // x22
  struct CharaGraphListViewManager___c_StaticFields *v75; // x0
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  System_Int64_array *v83; // x1
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7

  if ( (byte_4B15594 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___,
      trueDataArray,
      falseDataArray);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_long___, v12, v13);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, v14, v15);
    sub_1BCA7E0(&System_Func_CharaGraphListViewItemBase__long__TypeInfo, v16, v17);
    sub_1BCA7E0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__, v20, v21);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__, v22, v23);
    sub_1BCA7E0(
      &Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__,
      v24,
      v25);
    sub_1BCA7E0(&CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&CharaGraphListViewManager___c_TypeInfo, v28, v29);
    byte_4B15594 = 1;
  }
  v30 = sub_1BCAA2C(
          CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo,
          trueDataArray,
          falseDataArray,
          itemEnumerable);
  System_Object___ctor((Il2CppObject *)v30, 0LL);
  if ( !v30 )
    sub_1BCAA3C(v31, v32);
  *(_QWORD *)(v30 + 16) = cond;
  sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 16), (int64_t)cond, v33, v34, v35, v36, v37, v38);
  v39 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemEnumerable,
                                                               (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v40 = System_Linq_Enumerable__Where_object_(
          v39,
          *(System_Func_TSource__bool__o **)(v30 + 16),
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v44 = CharaGraphListViewManager___c_TypeInfo;
  v45 = v40;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v41);
    v44 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_0 = (System_Func_T__TResult__o *)v44->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v44->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v44, v41);
      v44 = CharaGraphListViewManager___c_TypeInfo;
    }
    v47 = (Il2CppObject *)v44->static_fields->__9;
    _9__45_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_CharaGraphListViewItemBase__long__TypeInfo,
                                              v41,
                                              v42,
                                              v43);
    System_Func_object__long____ctor(
      _9__45_0,
      v47,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__45_0,
      (int64_t)_9__45_0,
      v49,
      v50,
      v51,
      v52,
      v53,
      v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v45,
                                                               (System_Func_TSource__TResult__o *)_9__45_0,
                                                               (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v56 = System_Linq_Enumerable__ToArray_long_(
          v55,
          (const MethodInfo_2F4B980 *)Method_System_Linq_Enumerable_ToArray_long___);
  *trueDataArray = v56;
  sub_1BCA784((PartyOrganizationUtility_o *)trueDataArray, (int64_t)v56, v57, v58, v59, v60, v61, v62);
  v66 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                         v63,
                                         v64,
                                         v65);
  System_Func_object__bool____ctor(
    v66,
    (Il2CppObject *)v30,
    Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__,
    0LL);
  v67 = System_Linq_Enumerable__Where_object_(
          v39,
          (System_Func_TSource__bool__o *)v66,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v71 = CharaGraphListViewManager___c_TypeInfo;
  v72 = v67;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v68);
    v71 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_2 = (System_Func_T__TResult__o *)v71->static_fields->__9__45_2;
  if ( !_9__45_2 )
  {
    if ( !v71->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v71, v68);
      v71 = CharaGraphListViewManager___c_TypeInfo;
    }
    v74 = (Il2CppObject *)v71->static_fields->__9;
    _9__45_2 = (System_Func_T__TResult__o *)sub_1BCAA2C(
                                              System_Func_CharaGraphListViewItemBase__long__TypeInfo,
                                              v68,
                                              v69,
                                              v70);
    System_Func_object__long____ctor(
      _9__45_2,
      v74,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__,
      0LL);
    v75 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v75->__9__45_2 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_2;
    sub_1BCA784((PartyOrganizationUtility_o *)&v75->__9__45_2, (int64_t)_9__45_2, v76, v77, v78, v79, v80, v81);
  }
  v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v72,
                                                               (System_Func_TSource__TResult__o *)_9__45_2,
                                                               (const MethodInfo_2F4377C *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v83 = System_Linq_Enumerable__ToArray_long_(
          v82,
          (const MethodInfo_2F4B980 *)Method_System_Linq_Enumerable_ToArray_long___);
  *falseDataArray = v83;
  sub_1BCA784((PartyOrganizationUtility_o *)falseDataArray, (int64_t)v83, v84, v85, v86, v87, v88, v89);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewManager__EnumerateItems(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1558B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___, method, v2);
    byte_4B1558B = 1;
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                   (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *__fastcall CharaGraphListViewManager__EnumerateObjects(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  CharaGraphListViewManager___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  System_Func_object__object__o *_9__30_0; // x20
  Il2CppObject *v19; // x21
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4B1558C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_GameObject___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___, v4, v5);
    sub_1BCA7E0(&System_Func_GameObject__CharaGraphListViewObject__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__, v8, v9);
    sub_1BCA7E0(&CharaGraphListViewManager___c_TypeInfo, v10, v11);
    byte_4B1558C = 1;
  }
  v12 = BasicHelper__ExcludeNull_object_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
          (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v16 = CharaGraphListViewManager___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)v12;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v13);
    v16 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__object__o *)v16->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v13);
      v16 = CharaGraphListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__30_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                  System_Func_GameObject__CharaGraphListViewObject__TypeInfo,
                                                  v13,
                                                  v14,
                                                  v15);
    System_Func_object__object____ctor(
      _9__30_0,
      v19,
      Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_GameObject__CharaGraphListViewObject__o *)_9__30_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__30_0,
      (int64_t)_9__30_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 v17,
                                                                                 (System_Func_TSource__TResult__o *)_9__30_0,
                                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CharaGraphListViewManager__GetAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_IEnumerable_o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Func_object__bool__o *v22; // x20

  if ( (byte_4B1559C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___, *(_QWORD *)&svtId, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___, v6, v7);
    sub_1BCA7E0(&System_Func_CharaGraphServantListViewItem__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__DisplayClass62_0__GetAmountSortValue_b__0__, v10, v11);
    sub_1BCA7E0(&CharaGraphListViewManager___c__DisplayClass62_0_TypeInfo, v12, v13);
    byte_4B1559C = 1;
  }
  v14 = sub_1BCAA2C(CharaGraphListViewManager___c__DisplayClass62_0_TypeInfo, *(_QWORD *)&svtId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_DWORD *)(v14 + 16) = svtId;
  v17 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v16);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v17,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___);
  v22 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_CharaGraphServantListViewItem__bool__TypeInfo,
                                         v19,
                                         v20,
                                         v21);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_CharaGraphListViewManager___c__DisplayClass62_0__GetAmountSortValue_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__49476864(
           v18,
           (System_Func_TSource__bool__o *)v22,
           (const MethodInfo_2F2F500 *)Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CharaGraphListViewManager__GetCommandCodeAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  __int64 v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_IEnumerable_o *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Func_object__bool__o *v22; // x20

  if ( (byte_4B1559D & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___,
      *(_QWORD *)&commandCodeId,
      method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___, v6, v7);
    sub_1BCA7E0(&System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__DisplayClass63_0__GetCommandCodeAmountSortValue_b__0__, v10, v11);
    sub_1BCA7E0(&CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo, v12, v13);
    byte_4B1559D = 1;
  }
  v14 = sub_1BCAA2C(CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo, *(_QWORD *)&commandCodeId, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    sub_1BCAA3C(v15, v16);
  *(_DWORD *)(v14 + 16) = commandCodeId;
  v17 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v16);
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v17,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
  v22 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo,
                                         v19,
                                         v20,
                                         v21);
  System_Func_object__bool____ctor(
    v22,
    (Il2CppObject *)v14,
    Method_CharaGraphListViewManager___c__DisplayClass63_0__GetCommandCodeAmountSortValue_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__49476864(
           v18,
           (System_Func_TSource__bool__o *)v22,
           (const MethodInfo_2F2F500 *)Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphListViewItemBase_o *__fastcall CharaGraphListViewManager__GetItem(
        CharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  CharaGraphListViewItemBase_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4B15591 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_IndexValue_ListViewItem___, *(_QWORD *)&index, method);
    sub_1BCA7E0(&CharaGraphListViewItemBase_TypeInfo, v5, v6);
    byte_4B15591 = 1;
  }
  result = (CharaGraphListViewItemBase_o *)BasicHelper__IndexValue_object__49289180(
                                             (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                             index,
                                             0LL,
                                             (const MethodInfo_2F017DC *)Method_BasicHelper_IndexValue_ListViewItem___);
  if ( result )
  {
    methodPtr_low = LOBYTE(CharaGraphListViewItemBase_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(result->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (CharaGraphListViewItemBase_c *)result->klass->_2.typeHierarchy[methodPtr_low - 1] != CharaGraphListViewItemBase_TypeInfo )
        return 0LL;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall CharaGraphListViewManager__GetScaleButtonSpriteName(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall CharaGraphListViewManager__GetSwapChoiceArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **choiceArray,
        System_Int64_array **unChoiceArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  CharaGraphListViewManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  System_Func_object__bool__o *_9__44_0; // x23
  Il2CppObject *v22; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  CharaGraphListViewManager_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  const MethodInfo *v34; // x5
  CharaGraphListViewManager___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v36; // x22
  System_Func_object__bool__o *_9__44_1; // x23
  Il2CppObject *v38; // x24
  struct CharaGraphListViewManager___c_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B15593 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, choiceArray, unChoiceArray);
    sub_1BCA7E0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__, v9, v10);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__, v11, v12);
    sub_1BCA7E0(&CharaGraphListViewManager___c_TypeInfo, v13, v14);
    byte_4B15593 = 1;
  }
  v15 = CharaGraphListViewManager__EnumerateItems(this, (const MethodInfo *)choiceArray);
  v19 = CharaGraphListViewManager___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v16);
    v19 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__44_0 = (System_Func_object__bool__o *)v19->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, v16);
      v19 = CharaGraphListViewManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__44_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                v16,
                                                v17,
                                                v18);
    System_Func_object__bool____ctor(
      _9__44_0,
      v22,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__44_0,
      (int64_t)_9__44_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v20,
                                         (System_Func_TSource__bool__o *)_9__44_0,
                                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v35 = CharaGraphListViewManager___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v30;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v31);
    v35 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__44_1 = (System_Func_object__bool__o *)v35->static_fields->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, v31);
      v35 = CharaGraphListViewManager___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__44_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                v31,
                                                v32,
                                                v33);
    System_Func_object__bool____ctor(
      _9__44_1,
      v38,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__,
      0LL);
    v39 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v39->__9__44_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v39->__9__44_1, (int64_t)_9__44_1, v40, v41, v42, v43, v44, v45);
  }
  if ( !this )
    sub_1BCAA3C(v30, v31);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v30,
    unChoiceArray,
    choiceArray,
    v36,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1,
    v34);
}


void __fastcall CharaGraphListViewManager__GetSwapLockArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **lockArray,
        System_Int64_array **unlockArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  CharaGraphListViewManager___c_c *v19; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x22
  System_Func_object__bool__o *_9__43_0; // x23
  Il2CppObject *v22; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  CharaGraphListViewManager_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  const MethodInfo *v34; // x5
  CharaGraphListViewManager___c_c *v35; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v36; // x22
  System_Func_object__bool__o *_9__43_1; // x23
  Il2CppObject *v38; // x24
  struct CharaGraphListViewManager___c_StaticFields *v39; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7

  if ( (byte_4B15592 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, lockArray, unlockArray);
    sub_1BCA7E0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__, v9, v10);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__, v11, v12);
    sub_1BCA7E0(&CharaGraphListViewManager___c_TypeInfo, v13, v14);
    byte_4B15592 = 1;
  }
  v15 = CharaGraphListViewManager__EnumerateItems(this, (const MethodInfo *)lockArray);
  v19 = CharaGraphListViewManager___c_TypeInfo;
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)v15;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v16);
    v19 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__43_0 = (System_Func_object__bool__o *)v19->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, v16);
      v19 = CharaGraphListViewManager___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v19->static_fields->__9;
    _9__43_0 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                v16,
                                                v17,
                                                v18);
    System_Func_object__bool____ctor(
      _9__43_0,
      v22,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__43_0,
      (int64_t)_9__43_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v20,
                                         (System_Func_TSource__bool__o *)_9__43_0,
                                         (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v35 = CharaGraphListViewManager___c_TypeInfo;
  v36 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v30;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v31);
    v35 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__43_1 = (System_Func_object__bool__o *)v35->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v35->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v35, v31);
      v35 = CharaGraphListViewManager___c_TypeInfo;
    }
    v38 = (Il2CppObject *)v35->static_fields->__9;
    _9__43_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                v31,
                                                v32,
                                                v33);
    System_Func_object__bool____ctor(
      _9__43_1,
      v38,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__,
      0LL);
    v39 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v39->__9__43_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v39->__9__43_1, (int64_t)_9__43_1, v40, v41, v42, v43, v44, v45);
  }
  if ( !this )
    sub_1BCAA3C(v30, v31);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v30,
    unlockArray,
    lockArray,
    v36,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1,
    v34);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager__InvokeOnClick(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct CharaGraphListViewManager_CallbackFunc_o *FuncOnClick; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int Index; // w0

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FuncOnClick,
    0LL,
    *(int64_t *)&resultKind,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1BCAA3C(v11, v12);
    Index = ListViewObject__get_Index(obj, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))FuncOnClick->fields.m_target)(
      FuncOnClick->fields.original_method_info,
      (unsigned int)resultKind,
      Index,
      *(_QWORD *)&FuncOnClick->fields.extra_arg);
  }
}


bool __fastcall CharaGraphListViewManager__IsClippingOrNoTermination(
        CharaGraphListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1BCAA3C(this, 0LL);
  return !item->fields.isTermination || ListViewManager__ClippingItem_41463120((ListViewManager_o *)this, item, 0LL);
}


void __fastcall CharaGraphListViewManager__JumpItemUserId(
        CharaGraphListViewManager_o *this,
        int64_t targetObjectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *v12; // x21
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Func_object__bool__o *v19; // x22
  Il2CppObject *v20; // x0

  if ( (byte_4B15597 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___, targetObjectId, method);
    sub_1BCA7E0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__DisplayClass56_0__JumpItemUserId_b__0__, v8, v9);
    sub_1BCA7E0(&CharaGraphListViewManager___c__DisplayClass56_0_TypeInfo, v10, v11);
    byte_4B15597 = 1;
  }
  v12 = (Il2CppObject *)sub_1BCAA2C(
                          CharaGraphListViewManager___c__DisplayClass56_0_TypeInfo,
                          targetObjectId,
                          method,
                          v3);
  System_Object___ctor(v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  v12[1].klass = (Il2CppClass *)targetObjectId;
  v15 = CharaGraphListViewManager__EnumerateItems(this, v14);
  v19 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                         v16,
                                         v17,
                                         v18);
  System_Func_object__bool____ctor(
    v19,
    v12,
    Method_CharaGraphListViewManager___c__DisplayClass56_0__JumpItemUserId_b__0__,
    0LL);
  v20 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
          (System_Collections_Generic_IEnumerable_TSource__o *)v15,
          (System_Func_TSource__bool__o *)v19,
          (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v20 )
    ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v20[1].klass), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager__ModifyList(
        CharaGraphListViewManager_o *this,
        bool isIconSizeChange,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x21
  __int64 v28; // x0
  __int64 v29; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  const MethodInfo *v36; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v37; // x0
  System_Collections_Generic_IEnumerable_T__o *v38; // x22
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  char v42; // w28
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v43; // x24
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x3
  System_Action_object__o *v53; // x23
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x3
  CharaGraphListViewManager___c_c *v57; // x0
  System_Func_object__bool__o *_9__39_1; // x23
  Il2CppObject *v59; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int64_t v61; // x2
  int32_t v62; // w3
  System_String_o *v63; // x4
  BattleSetupInfo_o *v64; // x5
  FollowerInfo_o *v65; // x6
  PartyListViewItem_o *v66; // x7
  System_Collections_Generic_IEnumerable_T__o *v67; // x22
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  System_Action_object__o *v71; // x23

  if ( (byte_4B15590 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_CharaGraphListViewItemBase__TypeInfo, isIconSizeChange, isNeedSort);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_CharaGraphListViewItemBase___, v7, v8);
    sub_1BCA7E0(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, v13, v14);
    sub_1BCA7E0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__ModifyList_b__39_1__, v17, v18);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__, v19, v20);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__, v21, v22);
    sub_1BCA7E0(&CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&CharaGraphListViewManager___c_TypeInfo, v25, v26);
    byte_4B15590 = 1;
  }
  v27 = sub_1BCAA2C(CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo, isIconSizeChange, isNeedSort, method);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    sub_1BCAA3C(v28, v29);
  *(_QWORD *)(v27 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 24), (int64_t)this, v30, v31, v32, v33, v34, v35);
  v37 = CharaGraphListViewManager__EnumerateItems(this, v36);
  v38 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                                         (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v42 = ~isIconSizeChange;
  v43 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_1BCAA2C(
                                                             CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo,
                                                             v39,
                                                             v40,
                                                             v41);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v43, !isIconSizeChange, 0LL);
  *(_QWORD *)(v27 + 16) = v43;
  sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 16), (int64_t)v43, v44, v45, v46, v47, v48, v49);
  v53 = (System_Action_object__o *)sub_1BCAA2C(System_Action_CharaGraphListViewItemBase__TypeInfo, v50, v51, v52);
  System_Action_object____ctor(
    v53,
    (Il2CppObject *)v27,
    Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v38,
    (System_Action_T__o *)v53,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  if ( (v42 & 1) == 0 )
  {
    v57 = CharaGraphListViewManager___c_TypeInfo;
    if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v54);
      v57 = CharaGraphListViewManager___c_TypeInfo;
    }
    _9__39_1 = (System_Func_object__bool__o *)v57->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !v57->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v57, v54);
        v57 = CharaGraphListViewManager___c_TypeInfo;
      }
      v59 = (Il2CppObject *)v57->static_fields->__9;
      _9__39_1 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                                  System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                  v54,
                                                  v55,
                                                  v56);
      System_Func_object__bool____ctor(_9__39_1, v59, Method_CharaGraphListViewManager___c__ModifyList_b__39_1__, 0LL);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__39_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__39_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__39_1,
        (int64_t)_9__39_1,
        v61,
        v62,
        v63,
        v64,
        v65,
        v66);
    }
    v67 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                                           (System_Func_TSource__bool__o *)_9__39_1,
                                                           (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    v71 = (System_Action_object__o *)sub_1BCAA2C(System_Action_CharaGraphListViewItemBase__TypeInfo, v68, v69, v70);
    System_Action_object____ctor(
      v71,
      (Il2CppObject *)v27,
      Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__,
      0LL);
    BasicHelper__ForEach_object_(
      v67,
      (System_Action_T__o *)v71,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  }
  if ( isNeedSort )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickBonusFilterKind(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4B1559B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__, method, v2);
    byte_4B1559B = 1;
  }
  v4 = Method_CharaGraphListViewManager_OnClickBonusFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(0LL, v6);
  ListViewSort__IncrementBonusFilter(sort, this->fields._AlignedBonusFilterInfos_k__BackingField, 0, 0LL, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickFilterKind(
        CharaGraphListViewManager_o *this,
        System_Action_bool__o *endSelectCallback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x20
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
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
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v32; // x21
  int32_t v33; // w0
  ListViewSort_o *sort; // x19
  int32_t v35; // w22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  ServantFilterSelectMenu_CallbackFunc_o *v39; // x23

  if ( (byte_4B15598 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, endSelectCallback, method);
    sub_1BCA7E0(&Method_CharaGraphListViewManager_OnClickFilterKind__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    sub_1BCA7E0(
      &Method_CharaGraphListViewManager___c__DisplayClass57_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
      v10,
      v11);
    sub_1BCA7E0(&CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo, v12, v13);
    byte_4B15598 = 1;
  }
  v14 = sub_1BCAA2C(CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo, endSelectCallback, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_9;
  *(_QWORD *)(v14 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 16), (int64_t)this, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v14 + 24) = endSelectCallback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v14 + 24), (int64_t)endSelectCallback, v23, v24, v25, v26, v27, v28);
  v29 = Method_CharaGraphListViewManager_OnClickFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
    v29 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListViewManager_OnClickFilterKind__);
  v30 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v29, v29[4]);
  OverwriteAssetSoundName__PlaySystemSe(v30, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v32 = (CommonUI_o *)Instance,
        v33 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.methodPtr),
        sort = this->fields.sort,
        v35 = v33,
        v39 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v36,
                                                          v37,
                                                          v38),
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v39,
          (Il2CppObject *)v14,
          Method_CharaGraphListViewManager___c__DisplayClass57_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
          0LL),
        !v32) )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v16);
  }
  CommonUI__OpenServantFilterSelectMenu(v32, v35, sort, v39, -1, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickListView(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall CharaGraphListViewManager__OnClickSelectListView(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CharaGraphListViewManager__InvokeOnClick(this, obj, 0, v3);
}


void __fastcall CharaGraphListViewManager__OnClickSortAscendingOrder(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4B1559A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, method, v2);
    byte_4B1559A = 1;
  }
  v4 = Method_CharaGraphListViewManager_OnClickSortAscendingOrder__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
  v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1BCAA3C(v6, v7);
  sort->fields.isAscendingOrder ^= 1u;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickSortKind(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  _QWORD *v10; // x0
  System_Reflection_MethodBase_o *v11; // x0
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v15; // x20
  int32_t v16; // w0
  ListViewSort_o *sort; // x21
  int32_t v18; // w22
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  ServantSortSelectMenu_CallbackFunc_o *v22; // x23

  if ( (byte_4B15599 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_CharaGraphListViewManager_OnClickSortKind__, v4, v5);
    sub_1BCA7E0(&Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_58_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B15599 = 1;
  }
  v10 = Method_CharaGraphListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1BCA7F8(Method_CharaGraphListViewManager_OnClickSortKind__);
  v11 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v15 = (CommonUI_o *)Instance,
        v16 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._9_GetItemDrawPattern.methodPtr),
        sort = this->fields.sort,
        v18 = v16,
        v22 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                        ServantSortSelectMenu_CallbackFunc_TypeInfo,
                                                        v19,
                                                        v20,
                                                        v21),
        ServantSortSelectMenu_CallbackFunc___ctor(
          v22,
          (Il2CppObject *)this,
          Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_58_0__,
          0LL),
        !v15) )
  {
    sub_1BCAA3C(Instance, v13);
  }
  CommonUI__OpenServantSortSelectMenu(v15, v18, sort, 0, v22, 0LL);
}


void __fastcall CharaGraphListViewManager__OnLongPushListView(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CharaGraphListViewManager__InvokeOnClick(this, obj, 1, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager__RequestListObject(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x21
  UIScrollView_o *v15; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_T__o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_Action_object__o *v21; // x22
  __int64 v22; // x1
  UnityEngine_Object_o *scrollView; // x20
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_4B15596 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_CharaGraphListViewObject__TypeInfo, *(_QWORD *)&mode, method);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_CharaGraphListViewObject___, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v10, v11);
    sub_1BCA7E0(&CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo, v12, v13);
    byte_4B15596 = 1;
  }
  v14 = sub_1BCAA2C(CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo, *(_QWORD *)&mode, method, v3);
  System_Object___ctor((Il2CppObject *)v14, 0LL);
  if ( !v14 )
    goto LABEL_13;
  *(_DWORD *)(v14 + 16) = mode;
  v17 = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphListViewManager__EnumerateObjects(this, v16);
  v21 = (System_Action_object__o *)sub_1BCAA2C(System_Action_CharaGraphListViewObject__TypeInfo, v18, v19, v20);
  System_Action_object____ctor(
    v21,
    (Il2CppObject *)v14,
    Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v17,
    (System_Action_T__o *)v21,
    (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_CharaGraphListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v15 = this->fields.scrollView;
    if ( !v15 )
      goto LABEL_13;
    ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v15->klass->vtable._8_UpdateScrollbars.method)(
      v15,
      1LL,
      v15->klass->vtable._9_SetDragAmount.methodPtr);
    v15 = this->fields.scrollView;
    if ( !v15 )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v15->klass->vtable._6_get_shouldMoveVertically.method)(
            v15,
            v15->klass->vtable._7_get_shouldMove.methodPtr) & 1) != 0 )
    {
      v15 = this->fields.scrollView;
      if ( v15 )
      {
        UIScrollView__UpdatePosition(v15, 0LL);
        goto LABEL_12;
      }
LABEL_13:
      sub_1BCAA3C(v15, v16);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.FuncOnMoveEnd, 0LL, v24, v25, v26, v27, v28, v29);
  ActionExtensions__Call(FuncOnMoveEnd, 0LL);
}


void __fastcall CharaGraphListViewManager__SaveSortInfo(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0

  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( ListViewPattern_k__BackingField )
  {
    SortOwner_k__BackingField = ListViewPattern_k__BackingField->fields._SortOwner_k__BackingField;
    if ( SortOwner_k__BackingField )
      CharaGraphSortOwnerBase__Save(SortOwner_k__BackingField, method);
  }
}


void __fastcall CharaGraphListViewManager__SelectSeedByScaleType(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int32_t scaleType; // w8
  struct ListViewItemSeed_o **p_extremelySmallSizeSeed; // x8
  struct ListViewItemSeed_o *v10; // x1

  scaleType = this->fields.scaleType;
  if ( scaleType == 3 )
  {
    p_extremelySmallSizeSeed = &this->fields.extremelySmallSizeSeed;
  }
  else if ( scaleType == 2 )
  {
    p_extremelySmallSizeSeed = &this->fields.smallSizeSeed;
  }
  else
  {
    p_extremelySmallSizeSeed = &this->fields.normalSizeSeed;
  }
  v10 = *p_extremelySmallSizeSeed;
  this->fields.seed = *p_extremelySmallSizeSeed;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.seed, (int64_t)v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall CharaGraphListViewManager__SetBonusFilterIds(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 ListViewPattern_k__BackingField; // x0
  ListViewSort_o *sort; // x20
  struct CharaGraphListViewPatternBase_o *v5; // x8
  System_Int32_array *v6; // x21
  struct CharaGraphListViewPatternBase_o *v7; // x8
  System_Int32_array *v8; // x22
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct ListViewSort_o *v16; // x20

  ListViewPattern_k__BackingField = (__int64)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_7;
  sort = this->fields.sort;
  ListViewPattern_k__BackingField = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)ListViewPattern_k__BackingField
                                                                               + 520LL))(
                                      ListViewPattern_k__BackingField,
                                      *(_QWORD *)(*(_QWORD *)ListViewPattern_k__BackingField + 528LL));
  v5 = this->fields._ListViewPattern_k__BackingField;
  if ( !v5 )
    goto LABEL_7;
  v6 = (System_Int32_array *)ListViewPattern_k__BackingField;
  ListViewPattern_k__BackingField = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))v5->klass->vtable._11_GetBonusEventIds.method)(
                                      this->fields._ListViewPattern_k__BackingField,
                                      v5->klass->vtable._12_GetServantFilterIds.methodPtr);
  v7 = this->fields._ListViewPattern_k__BackingField;
  if ( !v7
    || (v8 = (System_Int32_array *)ListViewPattern_k__BackingField,
        ListViewPattern_k__BackingField = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))v7->klass->vtable._12_GetServantFilterIds.method)(
                                            this->fields._ListViewPattern_k__BackingField,
                                            v7->klass->vtable._13_GetBonusEventCampaignIds.methodPtr),
        !sort)
    || (AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                               sort,
                               0LL,
                               v6,
                               v8,
                               0LL,
                               (System_Int32_array *)ListViewPattern_k__BackingField,
                               0,
                               0LL),
        this->fields._AlignedBonusFilterInfos_k__BackingField = AlignedBonusFilter,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
          (int64_t)AlignedBonusFilter,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        v16 = this->fields.sort,
        ListViewPattern_k__BackingField = BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)this->fields._AlignedBonusFilterInfos_k__BackingField,
                                            0LL),
        !v16) )
  {
LABEL_7:
    sub_1BCAA3C(ListViewPattern_k__BackingField, method);
  }
  v16->fields.isBonusKind = (ListViewPattern_k__BackingField & 1) == 0;
}


void __fastcall CharaGraphListViewManager__SetFuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.FuncOnClick = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FuncOnClick,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphListViewManager__SetMode(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.FuncOnClick = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FuncOnClick,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CharaGraphListViewManager__SetMode_38730128(this, mode, v10);
}


void __fastcall CharaGraphListViewManager__SetMode_38730128(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int v6; // w9
  int32_t v7; // w1

  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 2 )
    v6 = 2;
  else
    v6 = 1;
  if ( mode == 3 )
    v7 = 3;
  else
    v7 = v6;
  CharaGraphListViewManager__RequestListObject(this, v7, v5);
}


void __fastcall CharaGraphListViewManager__SetMode_38751836(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.FuncOnMoveEnd,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  CharaGraphListViewManager__SetMode_38730128(this, mode, v10);
}


void __fastcall CharaGraphListViewManager__SetObjectItem(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 methodPtr_low; // x11
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  int32_t v12; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_4B15595 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewObject_TypeInfo, obj, item);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B15595 = 1;
  }
  if ( v4 )
  {
    methodPtr_low = LOBYTE(CharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v4->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (CharaGraphListViewObject_c *)v4->klass->_2.typeHierarchy[methodPtr_low - 1] != CharaGraphListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  v9 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !v4 )
      sub_1BCAA3C(v9, v10);
    if ( this->fields.initMode == 2 )
      v12 = 2;
    else
      v12 = 1;
    CharaGraphListViewObject__Init((CharaGraphListViewObject_o *)v4, v12, v11);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager__SetScrollViewEnabled(
        CharaGraphListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1BCAA3C(0LL, value);
  UnityEngine_Behaviour__set_enabled(scrollView, value, 0LL);
}


void __fastcall CharaGraphListViewManager__SetSortButtonImage(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnSetSortButtonImage_k__BackingField, 0LL);
}


void __fastcall CharaGraphListViewManager__SetupEmptyMessage(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *ListViewPattern_k__BackingField; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  UnityEngine_Object_o *emptyMessageLabel; // x21
  System_String_o *v13; // x20
  __int64 v14; // x1
  UILabel_o *v15; // x19

  if ( (byte_4B1559F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method, v2);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v8, v9);
    byte_4B1559F = 1;
  }
  ListViewPattern_k__BackingField = (System_String_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_16;
  ListViewPattern_k__BackingField = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
                                                         ListViewPattern_k__BackingField,
                                                         ListViewPattern_k__BackingField->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( itemList->fields._size >= 1 )
    v13 = (System_String_o *)StringLiteral_11910/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v13 = ListViewPattern_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v15 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14);
    ListViewPattern_k__BackingField = LocalizationManager__Get(v13, 0LL);
    if ( v15 )
    {
      UILabel__set_text(v15, ListViewPattern_k__BackingField, 0LL);
      return;
    }
LABEL_16:
    sub_1BCAA3C(ListViewPattern_k__BackingField, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager___OnClickSortKind_g__EndSelectSortKind_58_0(
        CharaGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4B155A1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, method);
    byte_4B155A1 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0LL, 0LL);
}


bool __fastcall CharaGraphListViewManager___get_ClippingObjectList_b__34_0(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewObject_o *x,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x1
  const MethodInfo *v5; // x2

  if ( !x )
    sub_1BCAA3C(this, 0LL);
  Item = (ListViewItem_o *)CharaGraphListViewObject__GetItem(x, (const MethodInfo *)x);
  return CharaGraphListViewManager__IsClippingOrNoTermination(this, Item, v5);
}


void __fastcall CharaGraphListViewManager__add_FuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnClick; // x21
  struct CharaGraphListViewManager_CallbackFunc_o **p_FuncOnClick; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CharaGraphListViewManager_o *v10; // x0
  CharaGraphListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B15587 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B15587 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(FuncOnClick, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CharaGraphListViewManager_CallbackFunc_c *)v7->klass != CharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CharaGraphListViewManager__remove_FuncOnClick(v10, v11, v12);
}


void __fastcall CharaGraphListViewManager__add_FuncOnMoveEnd(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnMoveEnd; // x21
  struct System_Action_o **p_FuncOnMoveEnd; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CharaGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B15589 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B15589 = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(FuncOnMoveEnd, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CharaGraphListViewManager__remove_FuncOnMoveEnd(v10, v11, v12);
}


ListViewSort_BonusFilterInfo_array *__fastcall CharaGraphListViewManager__get_AlignedBonusFilterInfos(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._AlignedBonusFilterInfos_k__BackingField;
}


System_Collections_Generic_List_CharaGraphListViewObject__o *__fastcall CharaGraphListViewManager__get_ClippingObjectList(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  System_Func_object__bool__o *v14; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_4B1558E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___, v6, v7);
    sub_1BCA7E0(&System_Func_CharaGraphListViewObject__bool__TypeInfo, v8, v9);
    byte_4B1558E = 1;
  }
  v10 = CharaGraphListViewManager__EnumerateObjects(this, method);
  v14 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_CharaGraphListViewObject__bool__TypeInfo, v11, v12, v13);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__,
    0LL);
  v15 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v10,
          (System_Func_TSource__bool__o *)v14,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          v15,
                                                                          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
}


CharaGraphListViewPatternBase_o *__fastcall CharaGraphListViewManager__get_ListViewPattern(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ListViewPattern_k__BackingField;
}


System_Collections_Generic_List_CharaGraphListViewObject__o *__fastcall CharaGraphListViewManager__get_ObjectList(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *v4; // x0

  if ( (byte_4B1558D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___, method, v2);
    byte_4B1558D = 1;
  }
  v4 = CharaGraphListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v4,
                                                                          (const MethodInfo_2F4F764 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
}


System_Action_o *__fastcall CharaGraphListViewManager__get_OnSetSortButtonImage(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._OnSetSortButtonImage_k__BackingField;
}


ListViewSort_o *__fastcall CharaGraphListViewManager__get_Sort(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.sort;
}


void __fastcall CharaGraphListViewManager__remove_FuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnClick; // x21
  struct CharaGraphListViewManager_CallbackFunc_o **p_FuncOnClick; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CharaGraphListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4B15588 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewManager_CallbackFunc_TypeInfo, value, method);
    byte_4B15588 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(FuncOnClick, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CharaGraphListViewManager_CallbackFunc_c *)v7->klass != CharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CharaGraphListViewManager__add_FuncOnMoveEnd(v10, v11, v12);
}


void __fastcall CharaGraphListViewManager__remove_FuncOnMoveEnd(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnMoveEnd; // x21
  struct System_Action_o **p_FuncOnMoveEnd; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CharaGraphListViewManager_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4B1558A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, value, method);
    byte_4B1558A = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(FuncOnMoveEnd, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C05CD0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1BCACFC(v7);
  CharaGraphListViewManager__get_AlignedBonusFilterInfos(v10, v11);
}


void __fastcall CharaGraphListViewManager__set_AlignedBonusFilterInfos(
        CharaGraphListViewManager_o *this,
        ListViewSort_BonusFilterInfo_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._AlignedBonusFilterInfos_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphListViewManager__set_ListViewPattern(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._ListViewPattern_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._ListViewPattern_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphListViewManager__set_OnSetSortButtonImage(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnSetSortButtonImage_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._OnSetSortButtonImage_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager_CallbackFunc___ctor(
        CharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0CD68;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0CD10;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall CharaGraphListViewManager_CallbackFunc__BeginInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v12[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v13; // [xsp+28h] [xbp-38h] BYREF
  int32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v13 = result;
  v14 = kind;
  if ( (byte_4B155A2 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&result);
    sub_1BCA7E0(&CharaGraphListViewManager_ResultKind_TypeInfo, v9, v10);
    byte_4B155A2 = 1;
  }
  v12[2] = 0LL;
  v12[0] = j_il2cpp_value_box_0(CharaGraphListViewManager_ResultKind_TypeInfo, &v14);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v12, callback, object);
}


void __fastcall CharaGraphListViewManager_CallbackFunc__EndInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CharaGraphListViewManager_CallbackFunc__Invoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    kind,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall CharaGraphListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B155A3 & 1) == 0 )
  {
    sub_1BCA7E0(&CharaGraphListViewManager___c_TypeInfo, v1, v2);
    byte_4B155A3 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(CharaGraphListViewManager___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  CharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct CharaGraphListViewManager___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)CharaGraphListViewManager___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall CharaGraphListViewManager___c___ctor(CharaGraphListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall CharaGraphListViewManager___c___DistributeObjectIdByMatchCondOrNot_b__45_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr);
}


int64_t __fastcall CharaGraphListViewManager___c___DistributeObjectIdByMatchCondOrNot_b__45_2(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr);
}


CharaGraphListViewObject_o *__fastcall CharaGraphListViewManager___c___EnumerateObjects_b__30_0(
        CharaGraphListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B155A4 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1BCA7E0(
                                                &Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___,
                                                x,
                                                method);
    byte_4B155A4 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  return (CharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         x,
                                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._IsChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__43_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._IsSwapLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__43_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._IsLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___ModifyList_b__39_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x19

  if ( (byte_4B155A5 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B155A5 = 1;
  }
  if ( !x )
    sub_1BCAA3C(this, x);
  viewObject = (UnityEngine_Object_o *)x->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  return UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass39_0___ctor(
        CharaGraphListViewManager___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass39_0___ModifyList_b__0(
        CharaGraphListViewManager___c__DisplayClass39_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  CharaGraphListViewItemBase__Modify(x, this->fields.args, method);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass39_0___ModifyList_b__2(
        CharaGraphListViewManager___c__DisplayClass39_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  struct CharaGraphListViewManager_o *_4__this; // x8

  if ( !x
    || (_4__this = this->fields.__4__this) == 0LL
    || (this = (CharaGraphListViewManager___c__DisplayClass39_0_o *)x->fields.viewObject) == 0LL )
  {
    sub_1BCAA3C(this, x);
  }
  ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)x, _4__this->fields.seed, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass45_0___ctor(
        CharaGraphListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphListViewManager___c__DisplayClass45_0___DistributeObjectIdByMatchCondOrNot_b__1(
        CharaGraphListViewManager___c__DisplayClass45_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  struct System_Func_CharaGraphListViewItemBase__bool__o *cond; // x8

  cond = this->fields.cond;
  if ( !cond )
    sub_1BCAA3C(this, x);
  return (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, CharaGraphListViewItemBase_o *, _QWORD))cond->fields.m_target)(
            cond->fields.original_method_info,
            x,
            *(_QWORD *)&cond->fields.extra_arg) & 1) == 0;
}


void __fastcall CharaGraphListViewManager___c__DisplayClass50_0___ctor(
        CharaGraphListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass50_0___RequestListObject_b__0(
        CharaGraphListViewManager___c__DisplayClass50_0_o *this,
        CharaGraphListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  CharaGraphListViewObject__Init(x, this->fields.mode, method);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass56_0___ctor(
        CharaGraphListViewManager___c__DisplayClass56_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphListViewManager___c__DisplayClass56_0___JumpItemUserId_b__0(
        CharaGraphListViewManager___c__DisplayClass56_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr,
           method) == this->fields.targetObjectId;
}


void __fastcall CharaGraphListViewManager___c__DisplayClass57_0___ctor(
        CharaGraphListViewManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager___c__DisplayClass57_0___OnClickFilterKind_g__EndSelectFilterKind_0(
        CharaGraphListViewManager___c__DisplayClass57_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  void *_4__this; // x0

  if ( (byte_4B155A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ActionExtensions_Call_bool___, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6);
    byte_4B155A6 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL),
          (_4__this = this->fields.__4__this) == 0LL) )
    {
LABEL_9:
      sub_1BCAA3C(_4__this, isDecide);
    }
    ListViewManager__CheckScroll((ListViewManager_o *)_4__this, *((_DWORD *)_4__this + 88), 0LL);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.endSelectCallback,
    isDecide,
    (const MethodInfo_2E65498 *)Method_ActionExtensions_Call_bool___);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_9;
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)_4__this, 0LL, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass62_0___ctor(
        CharaGraphListViewManager___c__DisplayClass62_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphListViewManager___c__DisplayClass62_0___GetAmountSortValue_b__0(
        CharaGraphListViewManager___c__DisplayClass62_0_o *this,
        CharaGraphServantListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._SvtId_k__BackingField == this->fields.svtId;
}


void __fastcall CharaGraphListViewManager___c__DisplayClass63_0___ctor(
        CharaGraphListViewManager___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphListViewManager___c__DisplayClass63_0___GetCommandCodeAmountSortValue_b__0(
        CharaGraphListViewManager___c__DisplayClass63_0_o *this,
        CharaGraphCommandCodeListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields._CommandCodeId_k__BackingField == this->fields.commandCodeId;
}