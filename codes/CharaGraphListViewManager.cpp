void CharaGraphListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct ListViewSort_ScaleType_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C422C0 & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListViewManager_TypeInfo);
    sub_1C37058(&ListViewSort_ScaleType___TypeInfo);
    sub_1C37058(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    byte_4C422C0 = 1;
  }
  v1 = (System_Array_o *)sub_1C37100(ListViewSort_ScaleType___TypeInfo, 3);
  v2.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v3 = (struct ListViewSort_ScaleType_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64262432(v1, v2, 0);
  CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)CharaGraphListViewManager_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void CharaGraphListViewManager___ctor(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void CharaGraphListViewManager__AssertionForSerializeField(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  ;
}


void CharaGraphListViewManager__Awake(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(CharaGraphListViewManager_o *, const MethodInfo *))this->klass->vtable._13_AssertionForSerializeField.methodPtr)(
    this,
    this->klass->vtable._13_AssertionForSerializeField.method);
}


void CharaGraphListViewManager__ChangeIconScale(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  CharaGraphListViewManager_c *v3; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v5; // x1
  struct ListViewSort_ScaleType_array *IconScaleTypeRotation; // x8
  unsigned int max_length; // w9
  int v8; // w24
  UnityEngine_Object_o *seed; // x20
  bool v10; // w0
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C422BE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    sub_1C37058(&CharaGraphListViewManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C422BE = 1;
  }
  do
  {
    v3 = CharaGraphListViewManager_TypeInfo;
    if ( !CharaGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager_TypeInfo);
      v3 = CharaGraphListViewManager_TypeInfo;
    }
    sort = (ListViewSort_o *)System_Array__IndexOf_Int32Enum_(
                               (System_Int32Enum_array *)v3->static_fields->IconScaleTypeRotation,
                               this->fields.scaleType,
                               (const MethodInfo_31EED60 *)Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    IconScaleTypeRotation = CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation;
    if ( !IconScaleTypeRotation )
      goto LABEL_16;
    max_length = IconScaleTypeRotation->max_length;
    v8 = (int)(((unsigned int)sort & ~((int)sort >> 31)) + 1) % (int)max_length;
    if ( v8 >= max_length )
      sub_1C372BC(sort);
    this->fields.scaleType = IconScaleTypeRotation->m_Items[v8];
    CharaGraphListViewManager__SelectSeedByScaleType(this, v5);
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Equality(seed, 0, 0);
  }
  while ( v8 && v10 );
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_16;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  CharaGraphListViewManager__ModifyList(this, 1, 1, v11);
  this->fields.initMode = 2;
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0);
  CharaGraphListViewManager__RequestListObject(this, 2, v12);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
LABEL_16:
    sub_1C372B4(sort);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void CharaGraphListViewManager__CreateList(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *listViewPattern,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  ListViewSort_o *ListViewPattern_k__BackingField; // x0
  struct ListViewSort_o *v8; // x0
  struct ListViewSort_o **p_sort; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4C422AE & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    byte_4C422AE = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields._ListViewPattern_k__BackingField = listViewPattern;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._ListViewPattern_k__BackingField, (int32_t)listViewPattern, v5, v6);
  ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_9;
  v8 = (struct ListViewSort_o *)((__int64 (__fastcall *)(ListViewSort_o *, _QWORD))ListViewPattern_k__BackingField->klass[1]._1.byval_arg.data)(
                                  ListViewPattern_k__BackingField,
                                  *(_QWORD *)&ListViewPattern_k__BackingField->klass[1]._1.byval_arg.bits);
  this->fields.sort = v8;
  p_sort = &this->fields.sort;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v8, v10, v11);
  ListViewPattern_k__BackingField = this->fields.sort;
  if ( !ListViewPattern_k__BackingField
    || (ListViewSort__Load(ListViewPattern_k__BackingField, 0),
        (ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField) == 0)
    || (itemList = this->fields.itemList,
        ListViewPattern_k__BackingField = (ListViewSort_o *)((__int64 (__fastcall *)(ListViewSort_o *, void *))ListViewPattern_k__BackingField->klass[1]._1.image)(
                                                              ListViewPattern_k__BackingField,
                                                              ListViewPattern_k__BackingField->klass[1]._1.gc_desc),
        !itemList)
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)itemList,
          (System_Collections_Generic_IEnumerable_T__o *)ListViewPattern_k__BackingField,
          (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        !*p_sort) )
  {
LABEL_9:
    sub_1C372B4(ListViewPattern_k__BackingField);
  }
  this->fields.scaleType = (*p_sort)->fields.iconScaleKind;
  CharaGraphListViewManager__SelectSeedByScaleType(this, v13);
  CharaGraphListViewManager__SetBonusFilterIds(this, v14);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  CharaGraphListViewManager__SetupEmptyMessage(this, v15);
}


void CharaGraphListViewManager__DestroyList(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CharaGraphSortOwnerBase_o *SortOwner_k__BackingField; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( ListViewPattern_k__BackingField )
  {
    SortOwner_k__BackingField = ListViewPattern_k__BackingField->fields._SortOwner_k__BackingField;
    if ( SortOwner_k__BackingField )
      CharaGraphSortOwnerBase__Save(SortOwner_k__BackingField, v3);
  }
}


void CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
        CharaGraphListViewManager_o *this,
        System_Int64_array **trueDataArray,
        System_Int64_array **falseDataArray,
        System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *itemEnumerable,
        System_Func_CharaGraphListViewItemBase__bool__o *cond,
        const MethodInfo *method)
{
  __int64 v10; // x21
  __int64 v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  CharaGraphListViewManager___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__long__o *_9__45_0; // x24
  Il2CppObject *v19; // x25
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Int64_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Func_object__bool__o *v27; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  CharaGraphListViewManager___c_c *v29; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x20
  System_Func_object__long__o *_9__45_2; // x21
  Il2CppObject *v32; // x22
  struct CharaGraphListViewManager___c_StaticFields *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int64_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3

  if ( (byte_4C422B3 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1C37058(&System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    sub_1C37058(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__);
    sub_1C37058(&CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo);
    sub_1C37058(&CharaGraphListViewManager___c_TypeInfo);
    byte_4C422B3 = 1;
  }
  v10 = sub_1C372A4(CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    sub_1C372B4(v11);
  *(_QWORD *)(v10 + 16) = cond;
  sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)cond, v12, v13);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemEnumerable,
                                                               (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v15 = System_Linq_Enumerable__Where_object_(
          v14,
          *(System_Func_TSource__bool__o **)(v10 + 16),
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v16 = CharaGraphListViewManager___c_TypeInfo;
  v17 = v15;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v16 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_0 = (System_Func_object__long__o *)v16->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = CharaGraphListViewManager___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__45_0 = (System_Func_object__long__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_0,
      v19,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__,
      0);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v17,
                                                               (System_Func_TSource__TResult__o *)_9__45_0,
                                                               (const MethodInfo_311E030 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v24 = System_Linq_Enumerable__ToArray_long_(
          v23,
          (const MethodInfo_312726C *)Method_System_Linq_Enumerable_ToArray_long___);
  *trueDataArray = v24;
  sub_1C36FFC((CGThumbnailListItem_o *)trueDataArray, (int32_t)v24, v25, v26);
  v27 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v27,
    (Il2CppObject *)v10,
    Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__,
    0);
  v28 = System_Linq_Enumerable__Where_object_(
          v14,
          (System_Func_TSource__bool__o *)v27,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v29 = CharaGraphListViewManager___c_TypeInfo;
  v30 = v28;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v29 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_2 = (System_Func_object__long__o *)v29->static_fields->__9__45_2;
  if ( !_9__45_2 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = CharaGraphListViewManager___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__45_2 = (System_Func_object__long__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_2,
      v32,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__,
      0);
    v33 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v33->__9__45_2 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&v33->__9__45_2, (int32_t)_9__45_2, v34, v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v30,
                                                               (System_Func_TSource__TResult__o *)_9__45_2,
                                                               (const MethodInfo_311E030 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v37 = System_Linq_Enumerable__ToArray_long_(
          v36,
          (const MethodInfo_312726C *)Method_System_Linq_Enumerable_ToArray_long___);
  *falseDataArray = v37;
  sub_1C36FFC((CGThumbnailListItem_o *)falseDataArray, (int32_t)v37, v38, v39);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *CharaGraphListViewManager__EnumerateItems(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C422AA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
    byte_4C422AA = 1;
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                   (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *CharaGraphListViewManager__EnumerateObjects(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x0
  CharaGraphListViewManager___c_c *v4; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  System_Func_object__object__o *_9__30_0; // x20
  Il2CppObject *v7; // x21
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C422AB & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
    sub_1C37058(&System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__);
    sub_1C37058(&CharaGraphListViewManager___c_TypeInfo);
    byte_4C422AB = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_30D194C *)Method_BasicHelper_ExcludeNull_GameObject___);
  v4 = CharaGraphListViewManager___c_TypeInfo;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v4 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__object__o *)v4->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = CharaGraphListViewManager___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__30_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__30_0,
      v7,
      Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__,
      0);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_GameObject__CharaGraphListViewObject__o *)_9__30_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v9, v10);
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 v5,
                                                                                 (System_Func_TSource__TResult__o *)_9__30_0,
                                                                                 (const MethodInfo_311E324 *)Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
}


int64_t CharaGraphListViewManager__GetAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_IEnumerable_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C422BC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItemBase___);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItemBase___);
    sub_1C37058(&System_Func_CharaGraphServantListViewItemBase__bool__TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DisplayClass63_0__GetAmountSortValue_b__0__);
    sub_1C37058(&CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo);
    byte_4C422BC = 1;
  }
  v5 = sub_1C372A4(CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              v8,
                                                              (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItemBase___);
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphServantListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass63_0__GetAmountSortValue_b__0__,
    0);
  return System_Linq_Enumerable__Count_object__51419316(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_31098B4 *)Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItemBase___);
}


int64_t CharaGraphListViewManager__GetCommandCodeAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_IEnumerable_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__bool__o *v10; // x20

  if ( (byte_4C422BD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
    sub_1C37058(&System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DisplayClass64_0__GetCommandCodeAmountSortValue_b__0__);
    sub_1C37058(&CharaGraphListViewManager___c__DisplayClass64_0_TypeInfo);
    byte_4C422BD = 1;
  }
  v5 = sub_1C372A4(CharaGraphListViewManager___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_DWORD *)(v5 + 16) = commandCodeId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              v8,
                                                              (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
  v10 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass64_0__GetCommandCodeAmountSortValue_b__0__,
    0);
  return System_Linq_Enumerable__Count_object__51419316(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_31098B4 *)Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
}


bool CharaGraphListViewManager__GetFocusItemIndex(
        CharaGraphListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  CharaGraphListViewManager_o *v8; // x22
  int32_t v9; // w26
  bool v10; // w24
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10
  Il2CppObject *v13; // x1

  v8 = this;
  if ( (byte_4C422B6 & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListViewItemBase_TypeInfo);
    this = (CharaGraphListViewManager_o *)sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4C422B6 = 1;
  }
  *index = -1;
  if ( sum >= 1 )
  {
    *index = 0;
    if ( list )
    {
      v9 = 1;
      v10 = 1;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)list,
                 v9 - 1,
                 (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item
          && (naturalAligment = CharaGraphListViewItemBase_TypeInfo->_2.naturalAligment,
              Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          v13 = (CharaGraphListViewItemBase_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphListViewItemBase_TypeInfo
              ? Item
              : 0LL;
        }
        else
        {
          v13 = 0;
        }
        this = (CharaGraphListViewManager_o *)v8->fields._ListViewPattern_k__BackingField;
        if ( !this )
          break;
        if ( (((__int64 (__fastcall *)(CharaGraphListViewManager_o *, Il2CppObject *, const MethodInfo *))this->klass->vtable._14_CreateList.methodPtr)(
                this,
                v13,
                this->klass->vtable._14_CreateList.method)
            & 1) != 0 )
          return v10;
        v10 = v9 < sum;
        if ( sum == v9 )
          return v10;
        ++v9;
        ++*index;
      }
    }
    sub_1C372B4(this);
  }
  return 0;
}


CharaGraphListViewItemBase_o *CharaGraphListViewManager__GetItem(
        CharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CharaGraphListViewItemBase_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_4C422B0 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_IndexValue_ListViewItem___);
    sub_1C37058(&CharaGraphListViewItemBase_TypeInfo);
    byte_4C422B0 = 1;
  }
  result = (CharaGraphListViewItemBase_o *)BasicHelper__IndexValue_object__51208572(
                                             (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                             index,
                                             0,
                                             (const MethodInfo_30D617C *)Method_BasicHelper_IndexValue_ListViewItem___);
  if ( result )
  {
    naturalAligment = CharaGraphListViewItemBase_TypeInfo->_2.naturalAligment;
    if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (CharaGraphListViewItemBase_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != CharaGraphListViewItemBase_TypeInfo )
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_String_o *CharaGraphListViewManager__GetScaleButtonSpriteName(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0

  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


void CharaGraphListViewManager__GetSwapChoiceArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **choiceArray,
        System_Int64_array **unChoiceArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v7; // x0
  CharaGraphListViewManager___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x22
  System_Func_object__bool__o *_9__44_0; // x23
  Il2CppObject *v11; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CharaGraphListViewManager_o *v15; // x0
  const MethodInfo *v16; // x5
  CharaGraphListViewManager___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v18; // x22
  System_Func_object__bool__o *_9__44_1; // x23
  Il2CppObject *v20; // x24
  struct CharaGraphListViewManager___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C422B2 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1C37058(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__);
    sub_1C37058(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__);
    sub_1C37058(&CharaGraphListViewManager___c_TypeInfo);
    byte_4C422B2 = 1;
  }
  v7 = CharaGraphListViewManager__EnumerateItems(this, (const MethodInfo *)choiceArray);
  v8 = CharaGraphListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v8 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__44_0 = (System_Func_object__bool__o *)v8->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = CharaGraphListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__44_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_0,
      v11,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__,
      0);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v13, v14);
  }
  v15 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v9,
                                         (System_Func_TSource__bool__o *)_9__44_0,
                                         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v17 = CharaGraphListViewManager___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v15;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v17 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__44_1 = (System_Func_object__bool__o *)v17->static_fields->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = CharaGraphListViewManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__44_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_1,
      v20,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__,
      0);
    v21 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v21->__9__44_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v21->__9__44_1, (int32_t)_9__44_1, v22, v23);
  }
  if ( !this )
    sub_1C372B4(v15);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v15,
    unChoiceArray,
    choiceArray,
    v18,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1,
    v16);
}


void CharaGraphListViewManager__GetSwapLockArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **lockArray,
        System_Int64_array **unlockArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v7; // x0
  CharaGraphListViewManager___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x22
  System_Func_object__bool__o *_9__43_0; // x23
  Il2CppObject *v11; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CharaGraphListViewManager_o *v15; // x0
  const MethodInfo *v16; // x5
  CharaGraphListViewManager___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v18; // x22
  System_Func_object__bool__o *_9__43_1; // x23
  Il2CppObject *v20; // x24
  struct CharaGraphListViewManager___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  if ( (byte_4C422B1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1C37058(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__);
    sub_1C37058(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__);
    sub_1C37058(&CharaGraphListViewManager___c_TypeInfo);
    byte_4C422B1 = 1;
  }
  v7 = CharaGraphListViewManager__EnumerateItems(this, (const MethodInfo *)lockArray);
  v8 = CharaGraphListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v8 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__43_0 = (System_Func_object__bool__o *)v8->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = CharaGraphListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__43_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_0, v11, Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__, 0);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v13, v14);
  }
  v15 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v9,
                                         (System_Func_TSource__bool__o *)_9__43_0,
                                         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v17 = CharaGraphListViewManager___c_TypeInfo;
  v18 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v15;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v17 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__43_1 = (System_Func_object__bool__o *)v17->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = CharaGraphListViewManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__43_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_1, v20, Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__, 0);
    v21 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v21->__9__43_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v21->__9__43_1, (int32_t)_9__43_1, v22, v23);
  }
  if ( !this )
    sub_1C372B4(v15);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v15,
    unlockArray,
    lockArray,
    v18,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1,
    v16);
}


void CharaGraphListViewManager__InvokeOnClick(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  struct CharaGraphListViewManager_CallbackFunc_o *FuncOnClick; // x21
  __int64 v7; // x0
  unsigned int Index; // w0

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.FuncOnClick, 0, resultKind, method);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1C372B4(v7);
    Index = ListViewObject__get_Index(obj, 0);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))FuncOnClick->fields.invoke_impl)(
      FuncOnClick->fields.method_code,
      (unsigned int)resultKind,
      Index,
      FuncOnClick->fields.method);
  }
}


bool CharaGraphListViewManager__IsClippingOrNoTermination(
        CharaGraphListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_1C372B4(this);
  return !item->fields.isTermination || ListViewManager__ClippingItem_43820548((ListViewManager_o *)this, item, 0);
}


void CharaGraphListViewManager__JumpItemUserId(
        CharaGraphListViewManager_o *this,
        int64_t targetObjectId,
        const MethodInfo *method)
{
  Il2CppObject *v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v8; // x20
  System_Func_object__bool__o *v9; // x22
  Il2CppObject *v10; // x0

  if ( (byte_4C422B7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_1C37058(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DisplayClass57_0__JumpItemUserId_b__0__);
    sub_1C37058(&CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo);
    byte_4C422B7 = 1;
  }
  v5 = (Il2CppObject *)sub_1C372A4(CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  v5[1].klass = (Il2CppClass *)targetObjectId;
  v8 = CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    v5,
    Method_CharaGraphListViewManager___c__DisplayClass57_0__JumpItemUserId_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v10 )
    ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v10[1].klass), 0);
}


void CharaGraphListViewManager__ModifyList(
        CharaGraphListViewManager_o *this,
        bool isIconSizeChange,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v12; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x22
  char v14; // w28
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Action_object__o *v18; // x23
  CharaGraphListViewManager___c_c *v19; // x0
  System_Func_object__bool__o *_9__39_1; // x23
  Il2CppObject *v21; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_T__o *v25; // x22
  System_Action_object__o *v26; // x23

  if ( (byte_4C422AF & 1) == 0 )
  {
    sub_1C37058(&System_Action_CharaGraphListViewItemBase__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
    sub_1C37058(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1C37058(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager___c__ModifyList_b__39_1__);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__);
    sub_1C37058(&CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo);
    sub_1C37058(&CharaGraphListViewManager___c_TypeInfo);
    byte_4C422AF = 1;
  }
  v7 = sub_1C372A4(CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  v12 = CharaGraphListViewManager__EnumerateItems(this, v11);
  v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v12,
                                                         (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v14 = ~isIconSizeChange;
  v15 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_1C372A4(CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v15, !isIconSizeChange, 0);
  *(_QWORD *)(v7 + 16) = v15;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v15, v16, v17);
  v18 = (System_Action_object__o *)sub_1C372A4(System_Action_CharaGraphListViewItemBase__TypeInfo);
  System_Action_object____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v13,
    (System_Action_T__o *)v18,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  if ( (v14 & 1) == 0 )
  {
    v19 = CharaGraphListViewManager___c_TypeInfo;
    if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
      v19 = CharaGraphListViewManager___c_TypeInfo;
    }
    _9__39_1 = (System_Func_object__bool__o *)v19->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = CharaGraphListViewManager___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__39_1 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__39_1, v21, Method_CharaGraphListViewManager___c__ModifyList_b__39_1__, 0);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__39_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__39_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__39_1, (int32_t)_9__39_1, v23, v24);
    }
    v25 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                           (System_Func_TSource__bool__o *)_9__39_1,
                                                           (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    v26 = (System_Action_object__o *)sub_1C372A4(System_Action_CharaGraphListViewItemBase__TypeInfo);
    System_Action_object____ctor(
      v26,
      (Il2CppObject *)v7,
      Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__,
      0);
    BasicHelper__ForEach_object_(
      v25,
      (System_Action_T__o *)v26,
      (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  }
  if ( isNeedSort )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void CharaGraphListViewManager__OnClickBonusFilterKind(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  ListViewSort_o *sort; // x0

  if ( (byte_4C422BB & 1) == 0 )
  {
    sub_1C37058(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
    byte_4C422BB = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickBonusFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(0);
  ListViewSort__IncrementBonusFilter(sort, this->fields._AlignedBonusFilterInfos_k__BackingField, 0, 0, 0);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
}


void CharaGraphListViewManager__OnClickFilterKind(
        CharaGraphListViewManager_o *this,
        System_Action_bool__o *endSelectCallback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v14; // x21
  int32_t v15; // w0
  ListViewSort_o *sort; // x19
  int32_t v17; // w22
  ServantFilterSelectMenu_CallbackFunc_o *v18; // x23

  if ( (byte_4C422B8 & 1) == 0 )
  {
    sub_1C37058(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager_OnClickFilterKind__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DisplayClass58_0__OnClickFilterKind_g__EndSelectFilterKind_0__);
    sub_1C37058(&CharaGraphListViewManager___c__DisplayClass58_0_TypeInfo);
    byte_4C422B8 = 1;
  }
  v5 = sub_1C372A4(CharaGraphListViewManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = endSelectCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endSelectCallback, v9, v10);
  v11 = Method_CharaGraphListViewManager_OnClickFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C37070(Method_CharaGraphListViewManager_OnClickFilterKind__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C3703C(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v14 = (CommonUI_o *)Instance,
        v15 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, const MethodInfo *))ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.methodPtr)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.method),
        sort = this->fields.sort,
        v17 = v15,
        v18 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantFilterSelectMenu_CallbackFunc_TypeInfo),
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v18,
          (Il2CppObject *)v5,
          Method_CharaGraphListViewManager___c__DisplayClass58_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
          0),
        !v14) )
  {
LABEL_9:
    sub_1C372B4(Instance);
  }
  CommonUI__OpenServantFilterSelectMenu(v14, v17, sort, v18, -1, 0);
}


void CharaGraphListViewManager__OnClickListView(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void CharaGraphListViewManager__OnClickSelectListView(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CharaGraphListViewManager__InvokeOnClick(this, obj, 0, v3);
}


void CharaGraphListViewManager__OnClickSortAscendingOrder(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  struct ListViewSort_o *sort; // x8

  if ( (byte_4C422BA & 1) == 0 )
  {
    sub_1C37058(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
    byte_4C422BA = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortAscendingOrder__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C372B4(v5);
  sort->fields.isAscendingOrder ^= 1u;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void CharaGraphListViewManager__OnClickSortKind(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v7; // x20
  int32_t v8; // w0
  ListViewSort_o *sort; // x21
  int32_t v10; // w22
  ServantSortSelectMenu_CallbackFunc_o *v11; // x23

  if ( (byte_4C422B9 & 1) == 0 )
  {
    sub_1C37058(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager_OnClickSortKind__);
    sub_1C37058(&Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_59_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C422B9 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_CharaGraphListViewManager_OnClickSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v7 = (CommonUI_o *)Instance,
        v8 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, const MethodInfo *))ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.methodPtr)(
               this->fields._ListViewPattern_k__BackingField,
               ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.method),
        sort = this->fields.sort,
        v10 = v8,
        v11 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C372A4(ServantSortSelectMenu_CallbackFunc_TypeInfo),
        ServantSortSelectMenu_CallbackFunc___ctor(
          v11,
          (Il2CppObject *)this,
          Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_59_0__,
          0),
        !v7) )
  {
    sub_1C372B4(Instance);
  }
  CommonUI__OpenServantSortSelectMenu(v7, v10, sort, 0, v11, 0);
}


void CharaGraphListViewManager__OnLongPushListView(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CharaGraphListViewManager__InvokeOnClick(this, obj, 1, v3);
}


void CharaGraphListViewManager__RequestListObject(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x21
  UIScrollView_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  System_Action_object__o *v9; // x22
  UnityEngine_Object_o *scrollView; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_4C422B5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_CharaGraphListViewObject__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_CharaGraphListViewObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__);
    sub_1C37058(&CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_4C422B5 = 1;
  }
  v5 = sub_1C372A4(CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = mode;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphListViewManager__EnumerateObjects(this, v7);
  v9 = (System_Action_object__o *)sub_1C372A4(System_Action_CharaGraphListViewObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_CharaGraphListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_13;
    ((void (__fastcall *)(UIScrollView_o *, __int64, const MethodInfo *))v6->klass->vtable._8_UpdateScrollbars.methodPtr)(
      v6,
      1,
      v6->klass->vtable._8_UpdateScrollbars.method);
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, const MethodInfo *))v6->klass->vtable._6_get_shouldMoveVertically.methodPtr)(
            v6,
            v6->klass->vtable._6_get_shouldMoveVertically.method)
        & 1) != 0 )
    {
      v6 = this->fields.scrollView;
      if ( v6 )
      {
        UIScrollView__UpdatePosition(v6, 0);
        goto LABEL_12;
      }
LABEL_13:
      sub_1C372B4(v6);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.FuncOnMoveEnd, 0, v11, v12);
  ActionExtensions__Call(FuncOnMoveEnd, 0);
}


void CharaGraphListViewManager__SaveSortInfo(CharaGraphListViewManager_o *this, const MethodInfo *method)
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


void CharaGraphListViewManager__SelectSeedByScaleType(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t scaleType; // w8
  struct ListViewItemSeed_o **p_extremelySmallSizeSeed; // x8
  struct ListViewItemSeed_o *v6; // x1

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
  v6 = *p_extremelySmallSizeSeed;
  this->fields.seed = *p_extremelySmallSizeSeed;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)v6, v2, v3);
}


void CharaGraphListViewManager__SetBonusFilterIds(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x0
  ListViewSort_o *sort; // x20
  struct CharaGraphListViewPatternBase_o *v5; // x8
  System_Int32_array *v6; // x21
  struct CharaGraphListViewPatternBase_o *v7; // x8
  System_Int32_array *v8; // x22
  struct ListViewSort_BonusFilterInfo_array *AlignedBonusFilter; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ListViewSort_o *v12; // x20

  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_7;
  sort = this->fields.sort;
  ListViewPattern_k__BackingField = (struct CharaGraphListViewPatternBase_o *)((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, const MethodInfo *))ListViewPattern_k__BackingField->klass->vtable._13_GetBonusEventCampaignIds.methodPtr)(
                                                                                ListViewPattern_k__BackingField,
                                                                                ListViewPattern_k__BackingField->klass->vtable._13_GetBonusEventCampaignIds.method);
  v5 = this->fields._ListViewPattern_k__BackingField;
  if ( !v5 )
    goto LABEL_7;
  v6 = (System_Int32_array *)ListViewPattern_k__BackingField;
  ListViewPattern_k__BackingField = (struct CharaGraphListViewPatternBase_o *)((struct CharaGraphListViewPatternBase_o *(__fastcall *)(struct CharaGraphListViewPatternBase_o *__return_ptr, struct CharaGraphListViewPatternBase_o *, const MethodInfo *))v5->klass->vtable._11_GetBonusEventIds.methodPtr)(
                                                                                v5,
                                                                                this->fields._ListViewPattern_k__BackingField,
                                                                                v5->klass->vtable._11_GetBonusEventIds.method);
  v7 = this->fields._ListViewPattern_k__BackingField;
  if ( !v7
    || (v8 = (System_Int32_array *)ListViewPattern_k__BackingField,
        ListViewPattern_k__BackingField = (struct CharaGraphListViewPatternBase_o *)((struct CharaGraphListViewPatternBase_o *(__fastcall *)(struct CharaGraphListViewPatternBase_o *__return_ptr, struct CharaGraphListViewPatternBase_o *, const MethodInfo *))v7->klass->vtable._12_GetServantFilterIds.methodPtr)(
                                                                                      v7,
                                                                                      this->fields._ListViewPattern_k__BackingField,
                                                                                      v7->klass->vtable._12_GetServantFilterIds.method),
        !sort)
    || (AlignedBonusFilter = ListViewSort__GetAlignedBonusFilter(
                               sort,
                               0,
                               v6,
                               v8,
                               0,
                               (System_Int32_array *)ListViewPattern_k__BackingField,
                               0,
                               0),
        this->fields._AlignedBonusFilterInfos_k__BackingField = AlignedBonusFilter,
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
          (int32_t)AlignedBonusFilter,
          v10,
          v11),
        v12 = this->fields.sort,
        ListViewPattern_k__BackingField = (struct CharaGraphListViewPatternBase_o *)BasicHelper__IsNullOrEmpty(
                                                                                      (System_Collections_ICollection_o *)this->fields._AlignedBonusFilterInfos_k__BackingField,
                                                                                      0),
        !v12) )
  {
LABEL_7:
    sub_1C372B4(ListViewPattern_k__BackingField);
  }
  v12->fields.isBonusKind = ((unsigned __int8)ListViewPattern_k__BackingField & 1) == 0;
}


void CharaGraphListViewManager__SetFuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.FuncOnClick = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)method, v3);
}


void CharaGraphListViewManager__SetMode(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnClick = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)callback, method);
  CharaGraphListViewManager__SetMode_40786996(this, mode, v6);
}


void CharaGraphListViewManager__SetMode_40786996(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  int v6; // w9
  int32_t v7; // w1

  this->fields.initMode = mode;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0);
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


void CharaGraphListViewManager__SetMode_40812004(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.FuncOnMoveEnd, (int32_t)callback, (int32_t)callback, method);
  CharaGraphListViewManager__SetMode_40786996(this, mode, v6);
}


void CharaGraphListViewManager__SetObjectItem(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x2
  int32_t v9; // w1

  if ( (byte_4C422B4 & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListViewObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C422B4 = 1;
  }
  if ( obj )
  {
    naturalAligment = CharaGraphListViewObject_TypeInfo->_2.naturalAligment;
    if ( obj->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (CharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != CharaGraphListViewObject_TypeInfo )
        obj = 0;
    }
    else
    {
      obj = 0;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0);
  if ( !v7 )
  {
    if ( !obj )
      sub_1C372B4(v7);
    if ( this->fields.initMode == 2 )
      v9 = 2;
    else
      v9 = 1;
    CharaGraphListViewObject__Init((CharaGraphListViewObject_o *)obj, v9, v8);
  }
}


void CharaGraphListViewManager__SetScrollViewEnabled(
        CharaGraphListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1C372B4(0);
  UnityEngine_Behaviour__set_enabled(scrollView, value, 0);
}


void CharaGraphListViewManager__SetSortButtonImage(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnSetSortButtonImage_k__BackingField, 0);
}


void CharaGraphListViewManager__SetupEmptyMessage(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *ListViewPattern_k__BackingField; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  UnityEngine_Object_o *emptyMessageLabel; // x21
  System_String_o *v6; // x20
  UILabel_o *v7; // x19

  if ( (byte_4C422BF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_11808/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4C422BF = 1;
  }
  ListViewPattern_k__BackingField = (System_String_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_16;
  ListViewPattern_k__BackingField = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, const MethodInfo *))ListViewPattern_k__BackingField->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
                                                         ListViewPattern_k__BackingField,
                                                         ListViewPattern_k__BackingField->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_16;
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( itemList->fields._size >= 1 )
    v6 = (System_String_o *)StringLiteral_11808/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v6 = ListViewPattern_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0) )
  {
    v7 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ListViewPattern_k__BackingField = LocalizationManager__Get(v6, 0);
    if ( v7 )
    {
      UILabel__set_text(v7, ListViewPattern_k__BackingField, 0);
      return;
    }
LABEL_16:
    sub_1C372B4(ListViewPattern_k__BackingField);
  }
}


void CharaGraphListViewManager___OnClickSortKind_g__EndSelectSortKind_59_0(
        CharaGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C422C1 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C422C1 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)Instance, 0, 0);
}


bool CharaGraphListViewManager___get_ClippingObjectList_b__34_0(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewObject_o *x,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x1
  const MethodInfo *v5; // x2

  if ( !x )
    sub_1C372B4(this);
  Item = (ListViewItem_o *)CharaGraphListViewObject__GetItem(x, (const MethodInfo *)x);
  return CharaGraphListViewManager__IsClippingOrNoTermination(this, Item, v5);
}


void CharaGraphListViewManager__add_FuncOnClick(
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

  if ( (byte_4C422A6 & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4C422A6 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(FuncOnClick, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CharaGraphListViewManager_CallbackFunc_c *)v7->klass != CharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  CharaGraphListViewManager__remove_FuncOnClick(v10, v11, v12);
}


void CharaGraphListViewManager__add_FuncOnMoveEnd(
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

  if ( (byte_4C422A8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C422A8 = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(FuncOnMoveEnd, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  CharaGraphListViewManager__remove_FuncOnMoveEnd(v10, v11, v12);
}


ListViewSort_BonusFilterInfo_array *CharaGraphListViewManager__get_AlignedBonusFilterInfos(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._AlignedBonusFilterInfos_k__BackingField;
}


System_Collections_Generic_List_CharaGraphListViewObject__o *CharaGraphListViewManager__get_ClippingObjectList(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *v3; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4C422AD & 1) == 0 )
  {
    sub_1C37058(&Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
    sub_1C37058(&System_Func_CharaGraphListViewObject__bool__TypeInfo);
    byte_4C422AD = 1;
  }
  v3 = CharaGraphListViewManager__EnumerateObjects(this, method);
  v4 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_CharaGraphListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__,
    0);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          v5,
                                                                          (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
}


CharaGraphListViewPatternBase_o *CharaGraphListViewManager__get_ListViewPattern(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ListViewPattern_k__BackingField;
}


System_Collections_Generic_List_CharaGraphListViewObject__o *CharaGraphListViewManager__get_ObjectList(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *v3; // x0

  if ( (byte_4C422AC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    byte_4C422AC = 1;
  }
  v3 = CharaGraphListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                          (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
}


System_Action_o *CharaGraphListViewManager__get_OnSetSortButtonImage(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._OnSetSortButtonImage_k__BackingField;
}


ListViewSort_o *CharaGraphListViewManager__get_Sort(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  return this->fields.sort;
}


void CharaGraphListViewManager__remove_FuncOnClick(
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

  if ( (byte_4C422A7 & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4C422A7 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(FuncOnClick, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (CharaGraphListViewManager_CallbackFunc_c *)v7->klass != CharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  CharaGraphListViewManager__add_FuncOnMoveEnd(v10, v11, v12);
}


void CharaGraphListViewManager__remove_FuncOnMoveEnd(
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

  if ( (byte_4C422A9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    byte_4C422A9 = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(FuncOnMoveEnd, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_1C712B0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C37574(v7);
  CharaGraphListViewManager__get_AlignedBonusFilterInfos(v10, v11);
}


void CharaGraphListViewManager__set_AlignedBonusFilterInfos(
        CharaGraphListViewManager_o *this,
        ListViewSort_BonusFilterInfo_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AlignedBonusFilterInfos_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphListViewManager__set_ListViewPattern(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ListViewPattern_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._ListViewPattern_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphListViewManager__set_OnSetSortButtonImage(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnSetSortButtonImage_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._OnSetSortButtonImage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void CharaGraphListViewManager_CallbackFunc___ctor(
        CharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7B7E4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7B78C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *CharaGraphListViewManager_CallbackFunc__BeginInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  _QWORD v18[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v19; // [xsp+28h] [xbp-38h] BYREF
  int32_t v20; // [xsp+2Ch] [xbp-34h] BYREF

  v19 = result;
  v20 = kind;
  if ( (byte_4C422C2 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&CharaGraphListViewManager_ResultKind_TypeInfo);
    byte_4C422C2 = 1;
  }
  v18[2] = 0;
  v18[0] = j_il2cpp_value_box_0(
             CharaGraphListViewManager_ResultKind_TypeInfo,
             &v20,
             *(_QWORD *)&result,
             callback,
             object,
             method,
             v6,
             v7);
  v18[1] = j_il2cpp_value_box_0(int_TypeInfo, &v19, v11, v12, v13, v14, v15, v16);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v18, callback, object);
}


void CharaGraphListViewManager_CallbackFunc__EndInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void CharaGraphListViewManager_CallbackFunc__Invoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    kind,
    result,
    this->fields.method);
}


void CharaGraphListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C422C3 & 1) == 0 )
  {
    sub_1C37058(&CharaGraphListViewManager___c_TypeInfo);
    byte_4C422C3 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(CharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct CharaGraphListViewManager___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)CharaGraphListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CharaGraphListViewManager___c___ctor(CharaGraphListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int64_t CharaGraphListViewManager___c___DistributeObjectIdByMatchCondOrNot_b__45_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *))x->klass->vtable._6_unknown.methodPtr)(
           x,
           x->klass->vtable._6_unknown.method);
}


int64_t CharaGraphListViewManager___c___DistributeObjectIdByMatchCondOrNot_b__45_2(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *))x->klass->vtable._6_unknown.methodPtr)(
           x,
           x->klass->vtable._6_unknown.method);
}


CharaGraphListViewObject_o *CharaGraphListViewManager___c___EnumerateObjects_b__30_0(
        CharaGraphListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4C422C4 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
    byte_4C422C4 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  return (CharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         x,
                                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
}


bool CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._IsSwapChoice_k__BackingField;
}


bool CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._IsChoice_k__BackingField;
}


bool CharaGraphListViewManager___c___GetSwapLockArray_b__43_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._IsSwapLock_k__BackingField;
}


bool CharaGraphListViewManager___c___GetSwapLockArray_b__43_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._IsLock_k__BackingField;
}


bool CharaGraphListViewManager___c___ModifyList_b__39_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x19

  if ( (byte_4C422C5 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C422C5 = 1;
  }
  if ( !x )
    sub_1C372B4(this);
  viewObject = (UnityEngine_Object_o *)x->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Inequality(viewObject, 0, 0);
}


void CharaGraphListViewManager___c__DisplayClass39_0___ctor(
        CharaGraphListViewManager___c__DisplayClass39_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphListViewManager___c__DisplayClass39_0___ModifyList_b__0(
        CharaGraphListViewManager___c__DisplayClass39_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  CharaGraphListViewItemBase__Modify(x, this->fields.args, method);
}


void CharaGraphListViewManager___c__DisplayClass39_0___ModifyList_b__2(
        CharaGraphListViewManager___c__DisplayClass39_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  struct CharaGraphListViewManager_o *_4__this; // x8

  if ( !x
    || (_4__this = this->fields.__4__this) == 0
    || (this = (CharaGraphListViewManager___c__DisplayClass39_0_o *)x->fields.viewObject) == 0 )
  {
    sub_1C372B4(this);
  }
  ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)x, _4__this->fields.seed, 0);
}


void CharaGraphListViewManager___c__DisplayClass45_0___ctor(
        CharaGraphListViewManager___c__DisplayClass45_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CharaGraphListViewManager___c__DisplayClass45_0___DistributeObjectIdByMatchCondOrNot_b__1(
        CharaGraphListViewManager___c__DisplayClass45_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  struct System_Func_CharaGraphListViewItemBase__bool__o *cond; // x8

  cond = this->fields.cond;
  if ( !cond )
    sub_1C372B4(this);
  return (((__int64 (__fastcall *)(intptr_t, CharaGraphListViewItemBase_o *, intptr_t))cond->fields.invoke_impl)(
            cond->fields.method_code,
            x,
            cond->fields.method)
        & 1) == 0;
}


void CharaGraphListViewManager___c__DisplayClass50_0___ctor(
        CharaGraphListViewManager___c__DisplayClass50_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphListViewManager___c__DisplayClass50_0___RequestListObject_b__0(
        CharaGraphListViewManager___c__DisplayClass50_0_o *this,
        CharaGraphListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  CharaGraphListViewObject__Init(x, this->fields.mode, method);
}


void CharaGraphListViewManager___c__DisplayClass57_0___ctor(
        CharaGraphListViewManager___c__DisplayClass57_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CharaGraphListViewManager___c__DisplayClass57_0___JumpItemUserId_b__0(
        CharaGraphListViewManager___c__DisplayClass57_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *, const MethodInfo *))x->klass->vtable._6_unknown.methodPtr)(
           x,
           x->klass->vtable._6_unknown.method,
           method) == this->fields.targetObjectId;
}


void CharaGraphListViewManager___c__DisplayClass58_0___ctor(
        CharaGraphListViewManager___c__DisplayClass58_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void CharaGraphListViewManager___c__DisplayClass58_0___OnClickFilterKind_g__EndSelectFilterKind_0(
        CharaGraphListViewManager___c__DisplayClass58_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  void *_4__this; // x0

  if ( (byte_4C422C6 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_bool___);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C422C6 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0),
          (_4__this = this->fields.__4__this) == 0) )
    {
LABEL_9:
      sub_1C372B4(_4__this);
    }
    ListViewManager__CheckScroll((ListViewManager_o *)_4__this, *((_DWORD *)_4__this + 88), 0);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.endSelectCallback,
    isDecide,
    (const MethodInfo_3034458 *)Method_ActionExtensions_Call_bool___);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_9;
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)_4__this, 0, 0);
}


void CharaGraphListViewManager___c__DisplayClass63_0___ctor(
        CharaGraphListViewManager___c__DisplayClass63_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CharaGraphListViewManager___c__DisplayClass63_0___GetAmountSortValue_b__0(
        CharaGraphListViewManager___c__DisplayClass63_0_o *this,
        CharaGraphServantListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._SvtId_k__BackingField == this->fields.svtId;
}


void CharaGraphListViewManager___c__DisplayClass64_0___ctor(
        CharaGraphListViewManager___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CharaGraphListViewManager___c__DisplayClass64_0___GetCommandCodeAmountSortValue_b__0(
        CharaGraphListViewManager___c__DisplayClass64_0_o *this,
        CharaGraphCommandCodeListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields._CommandCodeId_k__BackingField == this->fields.commandCodeId;
}