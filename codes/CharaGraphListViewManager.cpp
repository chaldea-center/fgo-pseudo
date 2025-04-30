void __fastcall CharaGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x0
  struct ListViewSort_ScaleType_array *v5; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_RuntimeFieldHandle_o v8; // 0:w1.4

  if ( (byte_4A4D828 & 1) == 0 )
  {
    sub_1B863B8(&CharaGraphListViewManager_TypeInfo, v1);
    sub_1B863B8(&ListViewSort_ScaleType___TypeInfo, v2);
    sub_1B863B8(
      &Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
      v3);
    byte_4A4D828 = 1;
  }
  v4 = (System_Array_o *)sub_1B86460(ListViewSort_ScaleType___TypeInfo, 3LL);
  v8.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v5 = (struct ListViewSort_ScaleType_array *)v4;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62345492(v4, v8, 0LL);
  CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation = v5;
  sub_1B8635C((CGThumbnailListItem_o *)CharaGraphListViewManager_TypeInfo->static_fields, (int32_t)v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  CharaGraphListViewManager_c *v5; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_ScaleType_array *IconScaleTypeRotation; // x8
  il2cpp_array_size_t max_length; // w9
  int v10; // w24
  UnityEngine_Object_o *seed; // x20
  bool v12; // w0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4A4D826 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_IndexOf_ListViewSort_ScaleType___, method);
    sub_1B863B8(&CharaGraphListViewManager_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    byte_4A4D826 = 1;
  }
  do
  {
    v5 = CharaGraphListViewManager_TypeInfo;
    if ( !CharaGraphListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager_TypeInfo);
      v5 = CharaGraphListViewManager_TypeInfo;
    }
    sort = (ListViewSort_o *)System_Array__IndexOf_Int32Enum_(
                               (System_Int32Enum_array *)v5->static_fields->IconScaleTypeRotation,
                               this->fields.scaleType,
                               (const MethodInfo_30698F8 *)Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    IconScaleTypeRotation = CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation;
    if ( !IconScaleTypeRotation )
      goto LABEL_16;
    max_length = IconScaleTypeRotation->max_length;
    v10 = (int)(((unsigned int)sort & ~((int)sort >> 31)) + 1) % (int)max_length;
    if ( v10 >= max_length )
      sub_1B8661C(sort, v7);
    this->fields.scaleType = IconScaleTypeRotation->m_Items[v10 + 1];
    CharaGraphListViewManager__SelectSeedByScaleType(this, v7);
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__op_Equality(seed, 0LL, 0LL);
  }
  while ( v10 && v12 );
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_16;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  CharaGraphListViewManager__ModifyList(this, 1, 1, v13);
  this->fields.initMode = 2;
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
  CharaGraphListViewManager__RequestListObject(this, 2, v14);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B86614(sort, v7);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall CharaGraphListViewManager__CreateList(
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

  if ( (byte_4A4D817 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__AddRange__, listViewPattern);
    byte_4A4D817 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields._ListViewPattern_k__BackingField = listViewPattern;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._ListViewPattern_k__BackingField, (int32_t)listViewPattern, v5, v6);
  ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_9;
  v9 = (struct ListViewSort_o *)(*(__int64 (__fastcall **)(ListViewSort_o *, void *))&ListViewPattern_k__BackingField->klass[1]._1.byval_arg.bits)(
                                  ListViewPattern_k__BackingField,
                                  ListViewPattern_k__BackingField->klass[1]._1.this_arg.data);
  this->fields.sort = v9;
  p_sort = &this->fields.sort;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.sort, (int32_t)v9, v11, v12);
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
          (const MethodInfo_35FCB64 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        !*p_sort) )
  {
LABEL_9:
    sub_1B86614(ListViewPattern_k__BackingField, v7);
  }
  this->fields.scaleType = (*p_sort)->fields.iconScaleKind;
  CharaGraphListViewManager__SelectSeedByScaleType(this, v7);
  CharaGraphListViewManager__SetBonusFilterIds(this, v14);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  CharaGraphListViewManager__SetupEmptyMessage(this, v15);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  CharaGraphListViewManager___c_c *v27; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x20
  System_Func_T__TResult__o *_9__45_0; // x24
  Il2CppObject *v30; // x25
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  System_Int64_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Func_object__bool__o *v38; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x0
  CharaGraphListViewManager___c_c *v40; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x20
  System_Func_T__TResult__o *_9__45_2; // x21
  Il2CppObject *v43; // x22
  struct CharaGraphListViewManager___c_StaticFields *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x0
  System_Int64_array *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3

  if ( (byte_4A4D81C & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___, trueDataArray);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___, v10);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_long___, v11);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, v12);
    sub_1B863B8(&System_Func_CharaGraphListViewItemBase__long__TypeInfo, v13);
    sub_1B863B8(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v14);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__, v15);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__, v16);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__, v17);
    sub_1B863B8(&CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo, v18);
    sub_1B863B8(&CharaGraphListViewManager___c_TypeInfo, v19);
    byte_4A4D81C = 1;
  }
  v20 = sub_1B86604(CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    sub_1B86614(v21, v22);
  *(_QWORD *)(v20 + 16) = cond;
  sub_1B8635C((CGThumbnailListItem_o *)(v20 + 16), (int32_t)cond, v23, v24);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemEnumerable,
                                                               (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v26 = System_Linq_Enumerable__Where_object_(
          v25,
          *(System_Func_TSource__bool__o **)(v20 + 16),
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v27 = CharaGraphListViewManager___c_TypeInfo;
  v28 = v26;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v27 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_0 = (System_Func_T__TResult__o *)v27->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = CharaGraphListViewManager___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__45_0 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_0,
      v30,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v32, v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v28,
                                                               (System_Func_TSource__TResult__o *)_9__45_0,
                                                               (const MethodInfo_2FA0F80 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v35 = System_Linq_Enumerable__ToArray_long_(
          v34,
          (const MethodInfo_2FA9850 *)Method_System_Linq_Enumerable_ToArray_long___);
  *trueDataArray = v35;
  sub_1B8635C((CGThumbnailListItem_o *)trueDataArray, (int32_t)v35, v36, v37);
  v38 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v38,
    (Il2CppObject *)v20,
    Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__,
    0LL);
  v39 = System_Linq_Enumerable__Where_object_(
          v25,
          (System_Func_TSource__bool__o *)v38,
          (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v40 = CharaGraphListViewManager___c_TypeInfo;
  v41 = v39;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v40 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_2 = (System_Func_T__TResult__o *)v40->static_fields->__9__45_2;
  if ( !_9__45_2 )
  {
    if ( !v40->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v40);
      v40 = CharaGraphListViewManager___c_TypeInfo;
    }
    v43 = (Il2CppObject *)v40->static_fields->__9;
    _9__45_2 = (System_Func_T__TResult__o *)sub_1B86604(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_2,
      v43,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__,
      0LL);
    v44 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v44->__9__45_2 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_2;
    sub_1B8635C((CGThumbnailListItem_o *)&v44->__9__45_2, (int32_t)_9__45_2, v45, v46);
  }
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v41,
                                                               (System_Func_TSource__TResult__o *)_9__45_2,
                                                               (const MethodInfo_2FA0F80 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v48 = System_Linq_Enumerable__ToArray_long_(
          v47,
          (const MethodInfo_2FA9850 *)Method_System_Linq_Enumerable_ToArray_long___);
  *falseDataArray = v48;
  sub_1B8635C((CGThumbnailListItem_o *)falseDataArray, (int32_t)v48, v49, v50);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewManager__EnumerateItems(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4D813 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___, method);
    byte_4A4D813 = 1;
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                   (const MethodInfo_2F9A6B0 *)Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *__fastcall CharaGraphListViewManager__EnumerateObjects(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  CharaGraphListViewManager___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__object__o *_9__30_0; // x20
  Il2CppObject *v11; // x21
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4A4D814 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_ExcludeNull_GameObject___, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___, v3);
    sub_1B863B8(&System_Func_GameObject__CharaGraphListViewObject__TypeInfo, v4);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__, v5);
    sub_1B863B8(&CharaGraphListViewManager___c_TypeInfo, v6);
    byte_4A4D814 = 1;
  }
  v7 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_2F58608 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v8 = CharaGraphListViewManager___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v8 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__30_0 = (System_Func_object__object__o *)v8->static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = CharaGraphListViewManager___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__30_0 = (System_Func_object__object__o *)sub_1B86604(System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__30_0,
      v11,
      Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_GameObject__CharaGraphListViewObject__o *)_9__30_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v13, v14);
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 v9,
                                                                                 (System_Func_TSource__TResult__o *)_9__30_0,
                                                                                 (const MethodInfo_2FA1274 *)Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CharaGraphListViewManager__GetAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_IEnumerable_o *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4A4D824 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___, *(_QWORD *)&svtId);
    sub_1B863B8(&Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___, v5);
    sub_1B863B8(&System_Func_CharaGraphServantListViewItem__bool__TypeInfo, v6);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__DisplayClass62_0__GetAmountSortValue_b__0__, v7);
    sub_1B863B8(&CharaGraphListViewManager___c__DisplayClass62_0_TypeInfo, v8);
    byte_4A4D824 = 1;
  }
  v9 = sub_1B86604(CharaGraphListViewManager___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B86614(v10, v11);
  *(_DWORD *)(v9 + 16) = svtId;
  v12 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v11);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v12,
                                                               (const MethodInfo_2F9A6B0 *)Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___);
  v14 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphServantListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_CharaGraphListViewManager___c__DisplayClass62_0__GetAmountSortValue_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__49860048(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2F8CDD0 *)Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___);
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CharaGraphListViewManager__GetCommandCodeAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_IEnumerable_o *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x19
  System_Func_object__bool__o *v14; // x20

  if ( (byte_4A4D825 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___, *(_QWORD *)&commandCodeId);
    sub_1B863B8(&Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___, v5);
    sub_1B863B8(&System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo, v6);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__DisplayClass63_0__GetCommandCodeAmountSortValue_b__0__, v7);
    sub_1B863B8(&CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo, v8);
    byte_4A4D825 = 1;
  }
  v9 = sub_1B86604(CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    sub_1B86614(v10, v11);
  *(_DWORD *)(v9 + 16) = commandCodeId;
  v12 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v11);
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               v12,
                                                               (const MethodInfo_2F9A6B0 *)Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
  v14 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_CharaGraphListViewManager___c__DisplayClass63_0__GetCommandCodeAmountSortValue_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__49860048(
           v13,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2F8CDD0 *)Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphListViewItemBase_o *__fastcall CharaGraphListViewManager__GetItem(
        CharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CharaGraphListViewItemBase_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A4D819 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_IndexValue_ListViewItem___, *(_QWORD *)&index);
    sub_1B863B8(&CharaGraphListViewItemBase_TypeInfo, v5);
    byte_4A4D819 = 1;
  }
  result = (CharaGraphListViewItemBase_o *)BasicHelper__IndexValue_object__49661204(
                                             (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                             index,
                                             0LL,
                                             (const MethodInfo_2F5C514 *)Method_BasicHelper_IndexValue_ListViewItem___);
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
    sub_1B86614(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall CharaGraphListViewManager__GetSwapChoiceArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **choiceArray,
        System_Int64_array **unChoiceArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v11; // x0
  CharaGraphListViewManager___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  System_Func_object__bool__o *_9__44_0; // x23
  Il2CppObject *v15; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CharaGraphListViewManager_o *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x5
  CharaGraphListViewManager___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v23; // x22
  System_Func_object__bool__o *_9__44_1; // x23
  Il2CppObject *v25; // x24
  struct CharaGraphListViewManager___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4A4D81B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, choiceArray);
    sub_1B863B8(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v7);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__, v8);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__, v9);
    sub_1B863B8(&CharaGraphListViewManager___c_TypeInfo, v10);
    byte_4A4D81B = 1;
  }
  v11 = CharaGraphListViewManager__EnumerateItems(this, (const MethodInfo *)choiceArray);
  v12 = CharaGraphListViewManager___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v11;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v12 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__44_0 = (System_Func_object__bool__o *)v12->static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = CharaGraphListViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__44_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_0,
      v15,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v17, v18);
  }
  v19 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v13,
                                         (System_Func_TSource__bool__o *)_9__44_0,
                                         (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v22 = CharaGraphListViewManager___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v19;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v22 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__44_1 = (System_Func_object__bool__o *)v22->static_fields->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = CharaGraphListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__44_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_1,
      v25,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__,
      0LL);
    v26 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v26->__9__44_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v26->__9__44_1, (int32_t)_9__44_1, v27, v28);
  }
  if ( !this )
    sub_1B86614(v19, v20);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v19,
    unChoiceArray,
    choiceArray,
    v23,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1,
    v21);
}


void __fastcall CharaGraphListViewManager__GetSwapLockArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **lockArray,
        System_Int64_array **unlockArray,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v11; // x0
  CharaGraphListViewManager___c_c *v12; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v13; // x22
  System_Func_object__bool__o *_9__43_0; // x23
  Il2CppObject *v15; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  CharaGraphListViewManager_o *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x5
  CharaGraphListViewManager___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v23; // x22
  System_Func_object__bool__o *_9__43_1; // x23
  Il2CppObject *v25; // x24
  struct CharaGraphListViewManager___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  if ( (byte_4A4D81A & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, lockArray);
    sub_1B863B8(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v7);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__, v8);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__, v9);
    sub_1B863B8(&CharaGraphListViewManager___c_TypeInfo, v10);
    byte_4A4D81A = 1;
  }
  v11 = CharaGraphListViewManager__EnumerateItems(this, (const MethodInfo *)lockArray);
  v12 = CharaGraphListViewManager___c_TypeInfo;
  v13 = (System_Collections_Generic_IEnumerable_TSource__o *)v11;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v12 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__43_0 = (System_Func_object__bool__o *)v12->static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = CharaGraphListViewManager___c_TypeInfo;
    }
    v15 = (Il2CppObject *)v12->static_fields->__9;
    _9__43_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__43_0,
      v15,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v17, v18);
  }
  v19 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v13,
                                         (System_Func_TSource__bool__o *)_9__43_0,
                                         (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v22 = CharaGraphListViewManager___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v19;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v22 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__43_1 = (System_Func_object__bool__o *)v22->static_fields->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = CharaGraphListViewManager___c_TypeInfo;
    }
    v25 = (Il2CppObject *)v22->static_fields->__9;
    _9__43_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__43_1,
      v25,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__,
      0LL);
    v26 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v26->__9__43_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v26->__9__43_1, (int32_t)_9__43_1, v27, v28);
  }
  if ( !this )
    sub_1B86614(v19, v20);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v19,
    unlockArray,
    lockArray,
    v23,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1,
    v21);
}


void __fastcall CharaGraphListViewManager__InvokeOnClick(
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
  this->fields.FuncOnClick = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.FuncOnClick, 0, resultKind, method);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1B86614(v7, v8);
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
    sub_1B86614(this, 0LL);
  return !item->fields.isTermination || ListViewManager__ClippingItem_41791656((ListViewManager_o *)this, item, 0LL);
}


void __fastcall CharaGraphListViewManager__JumpItemUserId(
        CharaGraphListViewManager_o *this,
        int64_t targetObjectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x21
  __int64 v9; // x0
  const MethodInfo *v10; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v11; // x20
  System_Func_object__bool__o *v12; // x22
  Il2CppObject *v13; // x0

  if ( (byte_4A4D81F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___, targetObjectId);
    sub_1B863B8(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v5);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__DisplayClass56_0__JumpItemUserId_b__0__, v6);
    sub_1B863B8(&CharaGraphListViewManager___c__DisplayClass56_0_TypeInfo, v7);
    byte_4A4D81F = 1;
  }
  v8 = (Il2CppObject *)sub_1B86604(CharaGraphListViewManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    sub_1B86614(v9, v10);
  v8[1].klass = (Il2CppClass *)targetObjectId;
  v11 = CharaGraphListViewManager__EnumerateItems(this, v10);
  v12 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    v8,
    Method_CharaGraphListViewManager___c__DisplayClass56_0__JumpItemUserId_b__0__,
    0LL);
  v13 = System_Linq_Enumerable__FirstOrDefault_object__49893388(
          (System_Collections_Generic_IEnumerable_TSource__o *)v11,
          (System_Func_TSource__bool__o *)v12,
          (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v13 )
    ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v13[1].klass), 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager__ModifyList(
        CharaGraphListViewManager_o *this,
        bool isIconSizeChange,
        bool isNeedSort,
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
  __int64 v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v23; // x0
  System_Collections_Generic_IEnumerable_T__o *v24; // x22
  char v25; // w28
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Action_object__o *v29; // x23
  CharaGraphListViewManager___c_c *v30; // x0
  System_Func_object__bool__o *_9__39_1; // x23
  Il2CppObject *v32; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_T__o *v36; // x22
  System_Action_object__o *v37; // x23

  if ( (byte_4A4D818 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_CharaGraphListViewItemBase__TypeInfo, isIconSizeChange);
    sub_1B863B8(&Method_BasicHelper_ForEach_CharaGraphListViewItemBase___, v7);
    sub_1B863B8(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo, v8);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, v10);
    sub_1B863B8(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v11);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__ModifyList_b__39_1__, v12);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__, v13);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__, v14);
    sub_1B863B8(&CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo, v15);
    sub_1B863B8(&CharaGraphListViewManager___c_TypeInfo, v16);
    byte_4A4D818 = 1;
  }
  v17 = sub_1B86604(CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1B86614(v18, v19);
  *(_QWORD *)(v17 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)this, v20, v21);
  v23 = CharaGraphListViewManager__EnumerateItems(this, v22);
  v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v23,
                                                         (const MethodInfo_2FA98D8 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v25 = ~isIconSizeChange;
  v26 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_1B86604(CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v26, !isIconSizeChange, 0LL);
  *(_QWORD *)(v17 + 16) = v26;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)v26, v27, v28);
  v29 = (System_Action_object__o *)sub_1B86604(System_Action_CharaGraphListViewItemBase__TypeInfo);
  System_Action_object____ctor(
    v29,
    (Il2CppObject *)v17,
    Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v24,
    (System_Action_T__o *)v29,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  if ( (v25 & 1) == 0 )
  {
    v30 = CharaGraphListViewManager___c_TypeInfo;
    if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
      v30 = CharaGraphListViewManager___c_TypeInfo;
    }
    _9__39_1 = (System_Func_object__bool__o *)v30->static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = CharaGraphListViewManager___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__39_1 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__39_1, v32, Method_CharaGraphListViewManager___c__ModifyList_b__39_1__, 0LL);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__39_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__39_1;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__39_1, (int32_t)_9__39_1, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v24,
                                                           (System_Func_TSource__bool__o *)_9__39_1,
                                                           (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    v37 = (System_Action_object__o *)sub_1B86604(System_Action_CharaGraphListViewItemBase__TypeInfo);
    System_Action_object____ctor(
      v37,
      (Il2CppObject *)v17,
      Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__,
      0LL);
    BasicHelper__ForEach_object_(
      v36,
      (System_Action_T__o *)v37,
      (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  }
  if ( isNeedSort )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickBonusFilterKind(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_4A4D823 & 1) == 0 )
  {
    sub_1B863B8(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__, method);
    byte_4A4D823 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickBonusFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B86614(0LL, v5);
  ListViewSort__IncrementBonusFilter(sort, this->fields._AlignedBonusFilterInfos_k__BackingField, 0, 0LL, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickFilterKind(
        CharaGraphListViewManager_o *this,
        System_Action_bool__o *endSelectCallback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v19; // x21
  int32_t v20; // w0
  ListViewSort_o *sort; // x19
  int32_t v22; // w22
  ServantFilterSelectMenu_CallbackFunc_o *v23; // x23

  if ( (byte_4A4D820 & 1) == 0 )
  {
    sub_1B863B8(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, endSelectCallback);
    sub_1B863B8(&Method_CharaGraphListViewManager_OnClickFilterKind__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(
      &Method_CharaGraphListViewManager___c__DisplayClass57_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
      v7);
    sub_1B863B8(&CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo, v8);
    byte_4A4D820 = 1;
  }
  v9 = sub_1B86604(CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = endSelectCallback;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)endSelectCallback, v14, v15);
  v16 = Method_CharaGraphListViewManager_OnClickFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1B863D0(Method_CharaGraphListViewManager_OnClickFilterKind__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B8639C(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v19 = (CommonUI_o *)Instance,
        v20 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.methodPtr),
        sort = this->fields.sort,
        v22 = v20,
        v23 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B86604(ServantFilterSelectMenu_CallbackFunc_TypeInfo),
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v23,
          (Il2CppObject *)v9,
          Method_CharaGraphListViewManager___c__DisplayClass57_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
          0LL),
        !v19) )
  {
LABEL_9:
    sub_1B86614(Instance, v11);
  }
  CommonUI__OpenServantFilterSelectMenu(v19, v22, sort, v23, -1, 0LL);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x0
  __int64 v6; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_4A4D822 & 1) == 0 )
  {
    sub_1B863B8(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, method);
    byte_4A4D822 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortAscendingOrder__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B86614(v5, v6);
  sort->fields.isAscendingOrder ^= 1u;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickSortKind(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v11; // x20
  int32_t v12; // w0
  ListViewSort_o *sort; // x21
  int32_t v14; // w22
  ServantSortSelectMenu_CallbackFunc_o *v15; // x23

  if ( (byte_4A4D821 & 1) == 0 )
  {
    sub_1B863B8(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_1B863B8(&Method_CharaGraphListViewManager_OnClickSortKind__, v3);
    sub_1B863B8(&Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_58_0__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A4D821 = 1;
  }
  v6 = Method_CharaGraphListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
    v6 = (_QWORD *)sub_1B863D0(Method_CharaGraphListViewManager_OnClickSortKind__);
  v7 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v11 = (CommonUI_o *)Instance,
        v12 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._9_GetItemDrawPattern.methodPtr),
        sort = this->fields.sort,
        v14 = v12,
        v15 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B86604(ServantSortSelectMenu_CallbackFunc_TypeInfo),
        ServantSortSelectMenu_CallbackFunc___ctor(
          v15,
          (Il2CppObject *)this,
          Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_58_0__,
          0LL),
        !v11) )
  {
    sub_1B86614(Instance, v9);
  }
  CommonUI__OpenServantSortSelectMenu(v11, v14, sort, 0, v15, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  UIScrollView_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_T__o *v12; // x20
  System_Action_object__o *v13; // x22
  UnityEngine_Object_o *scrollView; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_4A4D81E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_CharaGraphListViewObject__TypeInfo, *(_QWORD *)&mode);
    sub_1B863B8(&Method_BasicHelper_ForEach_CharaGraphListViewObject___, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    sub_1B863B8(&Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__, v7);
    sub_1B863B8(&CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo, v8);
    byte_4A4D81E = 1;
  }
  v9 = sub_1B86604(CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_DWORD *)(v9 + 16) = mode;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphListViewManager__EnumerateObjects(this, v11);
  v13 = (System_Action_object__o *)sub_1B86604(System_Action_CharaGraphListViewObject__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v9,
    Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v12,
    (System_Action_T__o *)v13,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_CharaGraphListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v10 = this->fields.scrollView;
    if ( !v10 )
      goto LABEL_13;
    ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v10->klass->vtable._8_UpdateScrollbars.method)(
      v10,
      1LL,
      v10->klass->vtable._9_SetDragAmount.methodPtr);
    v10 = this->fields.scrollView;
    if ( !v10 )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v10->klass->vtable._6_get_shouldMoveVertically.method)(
            v10,
            v10->klass->vtable._7_get_shouldMove.methodPtr) & 1) != 0 )
    {
      v10 = this->fields.scrollView;
      if ( v10 )
      {
        UIScrollView__UpdatePosition(v10, 0LL);
        goto LABEL_12;
      }
LABEL_13:
      sub_1B86614(v10, v11);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.FuncOnMoveEnd, 0, v15, v16);
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
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.seed, (int32_t)v6, v2, v3);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct ListViewSort_o *v12; // x20

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
        sub_1B8635C(
          (CGThumbnailListItem_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
          (int32_t)AlignedBonusFilter,
          v10,
          v11),
        v12 = this->fields.sort,
        ListViewPattern_k__BackingField = BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)this->fields._AlignedBonusFilterInfos_k__BackingField,
                                            0LL),
        !v12) )
  {
LABEL_7:
    sub_1B86614(ListViewPattern_k__BackingField, method);
  }
  v12->fields.isBonusKind = (ListViewPattern_k__BackingField & 1) == 0;
}


void __fastcall CharaGraphListViewManager__SetFuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.FuncOnClick = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall CharaGraphListViewManager__SetMode(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnClick = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)callback, method);
  CharaGraphListViewManager__SetMode_38974136(this, mode, v6);
}


void __fastcall CharaGraphListViewManager__SetMode_38974136(
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


void __fastcall CharaGraphListViewManager__SetMode_38995900(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.FuncOnMoveEnd, (int32_t)callback, (int32_t)callback, method);
  CharaGraphListViewManager__SetMode_38974136(this, mode, v6);
}


void __fastcall CharaGraphListViewManager__SetObjectItem(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 methodPtr_low; // x11
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int32_t v11; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_4A4D81D & 1) == 0 )
  {
    sub_1B863B8(&CharaGraphListViewObject_TypeInfo, obj);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A4D81D = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !v4 )
      sub_1B86614(v8, v9);
    if ( this->fields.initMode == 2 )
      v11 = 2;
    else
      v11 = 1;
    CharaGraphListViewObject__Init((CharaGraphListViewObject_o *)v4, v11, v10);
  }
}


void __fastcall CharaGraphListViewManager__SetScrollViewEnabled(
        CharaGraphListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_1B86614(0LL, value);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *ListViewPattern_k__BackingField; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  UnityEngine_Object_o *emptyMessageLabel; // x21
  System_String_o *v9; // x20
  UILabel_o *v10; // x19

  if ( (byte_4A4D827 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_1B863B8(&LocalizationManager_TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_11603/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v5);
    byte_4A4D827 = 1;
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
    v9 = (System_String_o *)StringLiteral_11603/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v9 = ListViewPattern_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v10 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ListViewPattern_k__BackingField = LocalizationManager__Get(v9, 0LL);
    if ( v10 )
    {
      UILabel__set_text(v10, ListViewPattern_k__BackingField, 0LL);
      return;
    }
LABEL_16:
    sub_1B86614(ListViewPattern_k__BackingField, method);
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

  if ( (byte_4A4D829 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_4A4D829 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v6);
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
    sub_1B86614(this, 0LL);
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

  if ( (byte_4A4D80F & 1) == 0 )
  {
    sub_1B863B8(&CharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A4D80F = 1;
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
    v8 = sub_1BC0674(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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

  if ( (byte_4A4D811 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4D811 = 1;
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
    v8 = sub_1BC0674(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *v6; // x20
  System_Func_object__bool__o *v7; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_4A4D816 & 1) == 0 )
  {
    sub_1B863B8(&Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__, method);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___, v4);
    sub_1B863B8(&System_Func_CharaGraphListViewObject__bool__TypeInfo, v5);
    byte_4A4D816 = 1;
  }
  v6 = CharaGraphListViewManager__EnumerateObjects(this, method);
  v7 = (System_Func_object__bool__o *)sub_1B86604(System_Func_CharaGraphListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__,
    0LL);
  v8 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v6,
         (System_Func_TSource__bool__o *)v7,
         (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          v8,
                                                                          (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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
  System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *v3; // x0

  if ( (byte_4A4D815 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___, method);
    byte_4A4D815 = 1;
  }
  v3 = CharaGraphListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                          (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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

  if ( (byte_4A4D810 & 1) == 0 )
  {
    sub_1B863B8(&CharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_4A4D810 = 1;
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
    v8 = sub_1BC0674(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
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

  if ( (byte_4A4D812 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, value);
    byte_4A4D812 = 1;
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
    v8 = sub_1BC0674(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B868D4(v7);
  CharaGraphListViewManager__get_AlignedBonusFilterInfos(v10, v11);
}


void __fastcall CharaGraphListViewManager__set_AlignedBonusFilterInfos(
        CharaGraphListViewManager_o *this,
        ListViewSort_BonusFilterInfo_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._AlignedBonusFilterInfos_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphListViewManager__set_ListViewPattern(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._ListViewPattern_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._ListViewPattern_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphListViewManager__set_OnSetSortButtonImage(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._OnSetSortButtonImage_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._OnSetSortButtonImage_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager_CallbackFunc___ctor(
        CharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B86478(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B86630(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B864E0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19D2A3C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D29E4;
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
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = result;
  v16 = kind;
  if ( (byte_4A4D82A & 1) == 0 )
  {
    sub_1B863B8(&int_TypeInfo, *(_QWORD *)&kind);
    sub_1B863B8(&CharaGraphListViewManager_ResultKind_TypeInfo, v9);
    byte_4A4D82A = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(
             CharaGraphListViewManager_ResultKind_TypeInfo,
             &v16,
             *(_QWORD *)&result,
             callback,
             object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1B8636C(this, v14, callback, object);
}


void __fastcall CharaGraphListViewManager_CallbackFunc__EndInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B86370(result, 0LL, method);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4D82B & 1) == 0 )
  {
    sub_1B863B8(&CharaGraphListViewManager___c_TypeInfo, v1);
    byte_4A4D82B = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(CharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  CharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct CharaGraphListViewManager___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)CharaGraphListViewManager___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr);
}


CharaGraphListViewObject_o *__fastcall CharaGraphListViewManager___c___EnumerateObjects_b__30_0(
        CharaGraphListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4A4D82C & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1B863B8(
                                                &Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___,
                                                x);
    byte_4A4D82C = 1;
  }
  if ( !x )
    sub_1B86614(this, x);
  return (CharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         x,
                                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields._IsChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__43_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields._IsSwapLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__43_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields._IsLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___ModifyList_b__39_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x19

  if ( (byte_4A4D82D & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, x);
    byte_4A4D82D = 1;
  }
  if ( !x )
    sub_1B86614(this, x);
  viewObject = (UnityEngine_Object_o *)x->fields.viewObject;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, x);
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
    sub_1B86614(this, x);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
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
  void *_4__this; // x0

  if ( (byte_4A4D82E & 1) == 0 )
  {
    sub_1B863B8(&Method_ActionExtensions_Call_bool___, isDecide);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A4D82E = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL),
          (_4__this = this->fields.__4__this) == 0LL) )
    {
LABEL_9:
      sub_1B86614(_4__this, isDecide);
    }
    ListViewManager__CheckScroll((ListViewManager_o *)_4__this, *((_DWORD *)_4__this + 88), 0LL);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.endSelectCallback,
    isDecide,
    (const MethodInfo_2EBFAF4 *)Method_ActionExtensions_Call_bool___);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
  return x->fields._CommandCodeId_k__BackingField == this->fields.commandCodeId;
}