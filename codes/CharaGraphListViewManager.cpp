void CharaGraphListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct ListViewSort_ScaleType_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB55C9 & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListViewManager_TypeInfo);
    sub_1C6BA08(&ListViewSort_ScaleType___TypeInfo);
    sub_1C6BA08(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    byte_4CB55C9 = 1;
  }
  v1 = (System_Array_o *)sub_1C6BAB0(ListViewSort_ScaleType___TypeInfo, 3);
  v2.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v3 = (struct ListViewSort_ScaleType_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64666016(v1, v2, 0);
  CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation = v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)CharaGraphListViewManager_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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

  if ( (byte_4CB55C7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    sub_1C6BA08(&CharaGraphListViewManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB55C7 = 1;
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
                               (const MethodInfo_3243204 *)Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    IconScaleTypeRotation = CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation;
    if ( !IconScaleTypeRotation )
      goto LABEL_16;
    max_length = IconScaleTypeRotation->max_length;
    v8 = (int)(((unsigned int)sort & ~((int)sort >> 31)) + 1) % (int)max_length;
    if ( v8 >= max_length )
      sub_1C6BC68(sort);
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
    sub_1C6BC60(sort, v5);
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
  const MethodInfo *v7; // x1
  ListViewSort_o *ListViewPattern_k__BackingField; // x0
  struct ListViewSort_o *v9; // x0
  struct ListViewSort_o **p_sort; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4CB55B7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    byte_4CB55B7 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields._ListViewPattern_k__BackingField = listViewPattern;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._ListViewPattern_k__BackingField, (int32_t)listViewPattern, v5, v6);
  ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_9;
  v9 = (struct ListViewSort_o *)((__int64 (__fastcall *)(ListViewSort_o *, _QWORD))ListViewPattern_k__BackingField->klass[1]._1.byval_arg.data)(
                                  ListViewPattern_k__BackingField,
                                  *(_QWORD *)&ListViewPattern_k__BackingField->klass[1]._1.byval_arg.bits);
  this->fields.sort = v9;
  p_sort = &this->fields.sort;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v9, v11, v12);
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
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        !*p_sort) )
  {
LABEL_9:
    sub_1C6BC60(ListViewPattern_k__BackingField, v7);
  }
  this->fields.scaleType = (*p_sort)->fields.iconScaleKind;
  CharaGraphListViewManager__SelectSeedByScaleType(this, v7);
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
  __int64 v12; // x1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  CharaGraphListViewManager___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_object__long__o *_9__45_0; // x24
  Il2CppObject *v20; // x25
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int64_array *v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Func_object__bool__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  CharaGraphListViewManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_object__long__o *_9__45_2; // x21
  Il2CppObject *v33; // x22
  struct CharaGraphListViewManager___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Int64_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  if ( (byte_4CB55BC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1C6BA08(&System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    sub_1C6BA08(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__);
    sub_1C6BA08(&CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo);
    sub_1C6BA08(&CharaGraphListViewManager___c_TypeInfo);
    byte_4CB55BC = 1;
  }
  v10 = sub_1C6BC54(CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    sub_1C6BC60(v11, v12);
  *(_QWORD *)(v10 + 16) = cond;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v10 + 16), (int32_t)cond, v13, v14);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemEnumerable,
                                                               (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v16 = System_Linq_Enumerable__Where_object_(
          v15,
          *(System_Func_TSource__bool__o **)(v10 + 16),
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v17 = CharaGraphListViewManager___c_TypeInfo;
  v18 = v16;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v17 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_0 = (System_Func_object__long__o *)v17->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = CharaGraphListViewManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__45_0 = (System_Func_object__long__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_0,
      v20,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__,
      0);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__45_0,
                                                               (const MethodInfo_317181C *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v25 = System_Linq_Enumerable__ToArray_long_(
          v24,
          (const MethodInfo_317B1C0 *)Method_System_Linq_Enumerable_ToArray_long___);
  *trueDataArray = v25;
  sub_1C6B9AC((CGThumbnailListItem_o *)trueDataArray, (int32_t)v25, v26, v27);
  v28 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v10,
    Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__,
    0);
  v29 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v30 = CharaGraphListViewManager___c_TypeInfo;
  v31 = v29;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v30 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_2 = (System_Func_object__long__o *)v30->static_fields->__9__45_2;
  if ( !_9__45_2 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = CharaGraphListViewManager___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__45_2 = (System_Func_object__long__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_2,
      v33,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__,
      0);
    v34 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v34->__9__45_2 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v34->__9__45_2, (int32_t)_9__45_2, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v31,
                                                               (System_Func_TSource__TResult__o *)_9__45_2,
                                                               (const MethodInfo_317181C *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v38 = System_Linq_Enumerable__ToArray_long_(
          v37,
          (const MethodInfo_317B1C0 *)Method_System_Linq_Enumerable_ToArray_long___);
  *falseDataArray = v38;
  sub_1C6B9AC((CGThumbnailListItem_o *)falseDataArray, (int32_t)v38, v39, v40);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *CharaGraphListViewManager__EnumerateItems(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CB55B3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
    byte_4CB55B3 = 1;
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                   (const MethodInfo_316A620 *)Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
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

  if ( (byte_4CB55B4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
    sub_1C6BA08(&System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__);
    sub_1C6BA08(&CharaGraphListViewManager___c_TypeInfo);
    byte_4CB55B4 = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_3124D84 *)Method_BasicHelper_ExcludeNull_GameObject___);
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
    _9__30_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__30_0,
      v7,
      Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__,
      0);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_GameObject__CharaGraphListViewObject__o *)_9__30_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v9, v10);
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 v5,
                                                                                 (System_Func_TSource__TResult__o *)_9__30_0,
                                                                                 (const MethodInfo_3171B10 *)Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
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

  if ( (byte_4CB55C5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItemBase___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItemBase___);
    sub_1C6BA08(&System_Func_CharaGraphServantListViewItemBase__bool__TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DisplayClass63_0__GetAmountSortValue_b__0__);
    sub_1C6BA08(&CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo);
    byte_4CB55C5 = 1;
  }
  v5 = sub_1C6BC54(CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              v8,
                                                              (const MethodInfo_316A620 *)Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItemBase___);
  v10 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphServantListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass63_0__GetAmountSortValue_b__0__,
    0);
  return System_Linq_Enumerable__Count_object__51761312(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_315D0A0 *)Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItemBase___);
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

  if ( (byte_4CB55C6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
    sub_1C6BA08(&System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DisplayClass64_0__GetCommandCodeAmountSortValue_b__0__);
    sub_1C6BA08(&CharaGraphListViewManager___c__DisplayClass64_0_TypeInfo);
    byte_4CB55C6 = 1;
  }
  v5 = sub_1C6BC54(CharaGraphListViewManager___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  *(_DWORD *)(v5 + 16) = commandCodeId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              v8,
                                                              (const MethodInfo_316A620 *)Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
  v10 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass64_0__GetCommandCodeAmountSortValue_b__0__,
    0);
  return System_Linq_Enumerable__Count_object__51761312(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_315D0A0 *)Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
}


bool CharaGraphListViewManager__GetFocusItemIndex(
        CharaGraphListViewManager_o *this,
        int32_t *index,
        System_Collections_Generic_List_ListViewItem__o *list,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t *v7; // x21
  CharaGraphListViewManager_o *v8; // x22
  int32_t v9; // w26
  bool v10; // w24
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10

  v7 = index;
  v8 = this;
  if ( (byte_4CB55BF & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListViewItemBase_TypeInfo);
    this = (CharaGraphListViewManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_4CB55BF = 1;
  }
  *v7 = -1;
  if ( sum >= 1 )
  {
    *v7 = 0;
    if ( list )
    {
      v9 = 1;
      v10 = 1;
      while ( 1 )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)list,
                 v9 - 1,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( Item
          && (naturalAligment = CharaGraphListViewItemBase_TypeInfo->_2.naturalAligment,
              Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
        {
          index = (CharaGraphListViewItemBase_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] == CharaGraphListViewItemBase_TypeInfo
                ? (int32_t *)Item
                : 0LL;
        }
        else
        {
          index = 0;
        }
        this = (CharaGraphListViewManager_o *)v8->fields._ListViewPattern_k__BackingField;
        if ( !this )
          break;
        if ( (((__int64 (__fastcall *)(CharaGraphListViewManager_o *, int32_t *, const MethodInfo *))this->klass->vtable._14_CreateList.methodPtr)(
                this,
                index,
                this->klass->vtable._14_CreateList.method)
            & 1) != 0 )
          return v10;
        v10 = v9 < sum;
        if ( sum == v9 )
          return v10;
        ++v9;
        ++*v7;
      }
    }
    sub_1C6BC60(this, index);
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

  if ( (byte_4CB55B9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_IndexValue_ListViewItem___);
    sub_1C6BA08(&CharaGraphListViewItemBase_TypeInfo);
    byte_4CB55B9 = 1;
  }
  result = (CharaGraphListViewItemBase_o *)BasicHelper__IndexValue_object__51549620(
                                             (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                             index,
                                             0,
                                             (const MethodInfo_31295B4 *)Method_BasicHelper_IndexValue_ListViewItem___);
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
    sub_1C6BC60(0, method);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  CharaGraphListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v19; // x22
  System_Func_object__bool__o *_9__44_1; // x23
  Il2CppObject *v21; // x24
  struct CharaGraphListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4CB55BB & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1C6BA08(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__);
    sub_1C6BA08(&CharaGraphListViewManager___c_TypeInfo);
    byte_4CB55BB = 1;
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
    _9__44_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_0,
      v11,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__,
      0);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v13, v14);
  }
  v15 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v9,
                                         (System_Func_TSource__bool__o *)_9__44_0,
                                         (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v18 = CharaGraphListViewManager___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v15;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v18 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__44_1 = (System_Func_object__bool__o *)v18->static_fields->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = CharaGraphListViewManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__44_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_1,
      v21,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__,
      0);
    v22 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v22->__9__44_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v22->__9__44_1, (int32_t)_9__44_1, v23, v24);
  }
  if ( !this )
    sub_1C6BC60(v15, v16);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v15,
    unChoiceArray,
    choiceArray,
    v19,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1,
    v17);
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
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  CharaGraphListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v19; // x22
  System_Func_object__bool__o *_9__43_1; // x23
  Il2CppObject *v21; // x24
  struct CharaGraphListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3

  if ( (byte_4CB55BA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1C6BA08(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__);
    sub_1C6BA08(&CharaGraphListViewManager___c_TypeInfo);
    byte_4CB55BA = 1;
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
    _9__43_0 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_0, v11, Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__, 0);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v13, v14);
  }
  v15 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v9,
                                         (System_Func_TSource__bool__o *)_9__43_0,
                                         (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v18 = CharaGraphListViewManager___c_TypeInfo;
  v19 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v15;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v18 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__43_1 = (System_Func_object__bool__o *)v18->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      v18 = CharaGraphListViewManager___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v18->static_fields->__9;
    _9__43_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_1, v21, Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__, 0);
    v22 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v22->__9__43_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v22->__9__43_1, (int32_t)_9__43_1, v23, v24);
  }
  if ( !this )
    sub_1C6BC60(v15, v16);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v15,
    unlockArray,
    lockArray,
    v19,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1,
    v17);
}


void CharaGraphListViewManager__InvokeOnClick(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  struct CharaGraphListViewManager_CallbackFunc_o *FuncOnClick; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  unsigned int Index; // w0

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.FuncOnClick, 0, resultKind, method);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1C6BC60(v7, v8);
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
    sub_1C6BC60(this, 0);
  return !item->fields.isTermination || ListViewManager__ClippingItem_44066648((ListViewManager_o *)this, item, 0);
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

  if ( (byte_4CB55C0 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_1C6BA08(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DisplayClass57_0__JumpItemUserId_b__0__);
    sub_1C6BA08(&CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo);
    byte_4CB55C0 = 1;
  }
  v5 = (Il2CppObject *)sub_1C6BC54(CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_1C6BC60(v6, v7);
  v5[1].klass = (Il2CppClass *)targetObjectId;
  v8 = CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    v5,
    Method_CharaGraphListViewManager___c__DisplayClass57_0__JumpItemUserId_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x22
  char v15; // w28
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v16; // x24
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_object__o *v19; // x23
  CharaGraphListViewManager___c_c *v20; // x0
  System_Func_object__bool__o *_9__39_1; // x23
  Il2CppObject *v22; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_T__o *v26; // x22
  System_Action_object__o *v27; // x23

  if ( (byte_4CB55B8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_CharaGraphListViewItemBase__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
    sub_1C6BA08(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1C6BA08(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__ModifyList_b__39_1__);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__);
    sub_1C6BA08(&CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo);
    sub_1C6BA08(&CharaGraphListViewManager___c_TypeInfo);
    byte_4CB55B8 = 1;
  }
  v7 = sub_1C6BC54(CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C6BC60(v8, v9);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  v13 = CharaGraphListViewManager__EnumerateItems(this, v12);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                         (const MethodInfo_317B248 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v15 = ~isIconSizeChange;
  v16 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_1C6BC54(CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v16, !isIconSizeChange, 0);
  *(_QWORD *)(v7 + 16) = v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)v16, v17, v18);
  v19 = (System_Action_object__o *)sub_1C6BC54(System_Action_CharaGraphListViewItemBase__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)v7,
    Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)v19,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  if ( (v15 & 1) == 0 )
  {
    v20 = CharaGraphListViewManager___c_TypeInfo;
    if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
      v20 = CharaGraphListViewManager___c_TypeInfo;
    }
    _9__39_1 = (System_Func_object__bool__o *)v20->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = CharaGraphListViewManager___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__39_1 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__39_1, v22, Method_CharaGraphListViewManager___c__ModifyList_b__39_1__, 0);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__39_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__39_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__39_1, (int32_t)_9__39_1, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                           (System_Func_TSource__bool__o *)_9__39_1,
                                                           (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    v27 = (System_Action_object__o *)sub_1C6BC54(System_Action_CharaGraphListViewItemBase__TypeInfo);
    System_Action_object____ctor(
      v27,
      (Il2CppObject *)v7,
      Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__,
      0);
    BasicHelper__ForEach_object_(
      v26,
      (System_Action_T__o *)v27,
      (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  }
  if ( isNeedSort )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void CharaGraphListViewManager__OnClickBonusFilterKind(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4CB55C4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
    byte_4CB55C4 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickBonusFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C6BC60(0, v5);
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
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v15; // x21
  int32_t v16; // w0
  ListViewSort_o *sort; // x19
  int32_t v18; // w22
  ServantFilterSelectMenu_CallbackFunc_o *v19; // x23

  if ( (byte_4CB55C1 & 1) == 0 )
  {
    sub_1C6BA08(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager_OnClickFilterKind__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DisplayClass58_0__OnClickFilterKind_g__EndSelectFilterKind_0__);
    sub_1C6BA08(&CharaGraphListViewManager___c__DisplayClass58_0_TypeInfo);
    byte_4CB55C1 = 1;
  }
  v5 = sub_1C6BC54(CharaGraphListViewManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endSelectCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)endSelectCallback, v10, v11);
  v12 = Method_CharaGraphListViewManager_OnClickFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListViewManager_OnClickFilterKind__);
  v13 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v15 = (CommonUI_o *)Instance,
        v16 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, const MethodInfo *))ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.methodPtr)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.method),
        sort = this->fields.sort,
        v18 = v16,
        v19 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantFilterSelectMenu_CallbackFunc_TypeInfo),
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)v5,
          Method_CharaGraphListViewManager___c__DisplayClass58_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
          0),
        !v15) )
  {
LABEL_9:
    sub_1C6BC60(Instance, v7);
  }
  CommonUI__OpenServantFilterSelectMenu(v15, v18, sort, v19, -1, 0);
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
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4CB55C3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
    byte_4CB55C3 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortAscendingOrder__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_1C6BC60(v5, v6);
  sort->fields.isAscendingOrder ^= 1u;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void CharaGraphListViewManager__OnClickSortKind(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v8; // x20
  int32_t v9; // w0
  ListViewSort_o *sort; // x21
  int32_t v11; // w22
  ServantSortSelectMenu_CallbackFunc_o *v12; // x23

  if ( (byte_4CB55C2 & 1) == 0 )
  {
    sub_1C6BA08(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager_OnClickSortKind__);
    sub_1C6BA08(&Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_59_0__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB55C2 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C6BA20(Method_CharaGraphListViewManager_OnClickSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v8 = (CommonUI_o *)Instance,
        v9 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, const MethodInfo *))ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.methodPtr)(
               this->fields._ListViewPattern_k__BackingField,
               ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.method),
        sort = this->fields.sort,
        v11 = v9,
        v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1C6BC54(ServantSortSelectMenu_CallbackFunc_TypeInfo),
        ServantSortSelectMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_59_0__,
          0),
        !v8) )
  {
    sub_1C6BC60(Instance, v6);
  }
  CommonUI__OpenServantSortSelectMenu(v8, v11, sort, 0, v12, 0);
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

  if ( (byte_4CB55BE & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_CharaGraphListViewObject__TypeInfo);
    sub_1C6BA08(&Method_BasicHelper_ForEach_CharaGraphListViewObject___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__);
    sub_1C6BA08(&CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_4CB55BE = 1;
  }
  v5 = sub_1C6BC54(CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = mode;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphListViewManager__EnumerateObjects(this, v7);
  v9 = (System_Action_object__o *)sub_1C6BC54(System_Action_CharaGraphListViewObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_3127050 *)Method_BasicHelper_ForEach_CharaGraphListViewObject___);
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
      sub_1C6BC60(v6, v7);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.FuncOnMoveEnd, 0, v11, v12);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)v6, v2, v3);
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
        sub_1C6B9AC(
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
    sub_1C6BC60(ListViewPattern_k__BackingField, method);
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)method, v3);
}


void CharaGraphListViewManager__SetMode(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnClick = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)callback, method);
  CharaGraphListViewManager__SetMode_41018732(this, mode, v6);
}


void CharaGraphListViewManager__SetMode_41018732(
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


void CharaGraphListViewManager__SetMode_41043740(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.FuncOnMoveEnd, (int32_t)callback, (int32_t)callback, method);
  CharaGraphListViewManager__SetMode_41018732(this, mode, v6);
}


void CharaGraphListViewManager__SetObjectItem(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_4CB55BD & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListViewObject_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB55BD = 1;
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
      sub_1C6BC60(v7, v8);
    if ( this->fields.initMode == 2 )
      v10 = 2;
    else
      v10 = 1;
    CharaGraphListViewObject__Init((CharaGraphListViewObject_o *)obj, v10, v9);
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
    sub_1C6BC60(0, value);
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

  if ( (byte_4CB55C8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4CB55C8 = 1;
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
    v6 = (System_String_o *)StringLiteral_11807/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
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
    sub_1C6BC60(ListViewPattern_k__BackingField, method);
  }
}


void CharaGraphListViewManager___OnClickSortKind_g__EndSelectSortKind_59_0(
        CharaGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4CB55CA & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB55CA = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v6);
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
    sub_1C6BC60(this, 0);
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

  if ( (byte_4CB55AF & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4CB55AF = 1;
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
    v8 = sub_1CC77DC(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
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

  if ( (byte_4CB55B1 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB55B1 = 1;
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
    v8 = sub_1CC77DC(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
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

  if ( (byte_4CB55B6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
    sub_1C6BA08(&System_Func_CharaGraphListViewObject__bool__TypeInfo);
    byte_4CB55B6 = 1;
  }
  v3 = CharaGraphListViewManager__EnumerateObjects(this, method);
  v4 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_CharaGraphListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__,
    0);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          v5,
                                                                          (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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

  if ( (byte_4CB55B5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    byte_4CB55B5 = 1;
  }
  v3 = CharaGraphListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                          (const MethodInfo_317FEE4 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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

  if ( (byte_4CB55B0 & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4CB55B0 = 1;
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
    v8 = sub_1CC77DC(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
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

  if ( (byte_4CB55B2 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    byte_4CB55B2 = 1;
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
    v8 = sub_1CC77DC(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  CharaGraphListViewManager__get_AlignedBonusFilterInfos(v10, v11);
}


void CharaGraphListViewManager__set_AlignedBonusFilterInfos(
        CharaGraphListViewManager_o *this,
        ListViewSort_BonusFilterInfo_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AlignedBonusFilterInfos_k__BackingField = value;
  sub_1C6B9AC(
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
  sub_1C6B9AC(
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
  sub_1C6B9AC(
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
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA1B14;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA1ABC;
}


System_IAsyncResult_o *CharaGraphListViewManager_CallbackFunc__BeginInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_4CB55CB & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&CharaGraphListViewManager_ResultKind_TypeInfo);
    byte_4CB55CB = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(CharaGraphListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, v10, callback, object);
}


void CharaGraphListViewManager_CallbackFunc__EndInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
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

  if ( (byte_4CB55CC & 1) == 0 )
  {
    sub_1C6BA08(&CharaGraphListViewManager___c_TypeInfo);
    byte_4CB55CC = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(CharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct CharaGraphListViewManager___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)CharaGraphListViewManager___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *))x->klass->vtable._6_unknown.methodPtr)(
           x,
           x->klass->vtable._6_unknown.method);
}


CharaGraphListViewObject_o *CharaGraphListViewManager___c___EnumerateObjects_b__30_0(
        CharaGraphListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4CB55CD & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
    byte_4CB55CD = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
  return (CharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         x,
                                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
}


bool CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._IsSwapChoice_k__BackingField;
}


bool CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._IsChoice_k__BackingField;
}


bool CharaGraphListViewManager___c___GetSwapLockArray_b__43_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._IsSwapLock_k__BackingField;
}


bool CharaGraphListViewManager___c___GetSwapLockArray_b__43_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  return x->fields._IsLock_k__BackingField;
}


bool CharaGraphListViewManager___c___ModifyList_b__39_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x19

  if ( (byte_4CB55CE & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    byte_4CB55CE = 1;
  }
  if ( !x )
    sub_1C6BC60(this, x);
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
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, x);
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
    sub_1C6BC60(this, x);
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
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
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


// local variable allocation has failed, the output may be wrong!
void CharaGraphListViewManager___c__DisplayClass58_0___OnClickFilterKind_g__EndSelectFilterKind_0(
        CharaGraphListViewManager___c__DisplayClass58_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  void *_4__this; // x0

  if ( (byte_4CB55CF & 1) == 0 )
  {
    sub_1C6BA08(&Method_ActionExtensions_Call_bool___);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CB55CF = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0),
          (_4__this = this->fields.__4__this) == 0) )
    {
LABEL_9:
      sub_1C6BC60(_4__this, isDecide);
    }
    ListViewManager__CheckScroll((ListViewManager_o *)_4__this, *((_DWORD *)_4__this + 88), 0);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.endSelectCallback,
    isDecide,
    (const MethodInfo_3085E74 *)Method_ActionExtensions_Call_bool___);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1C6BC60(this, 0);
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
    sub_1C6BC60(this, 0);
  return x->fields._CommandCodeId_k__BackingField == this->fields.commandCodeId;
}