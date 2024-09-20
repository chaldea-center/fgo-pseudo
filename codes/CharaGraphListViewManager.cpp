void __fastcall CharaGraphListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  struct ListViewSort_ScaleType_array *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_RuntimeFieldHandle_o v5; // 0:w1.4

  if ( (byte_4A5A534 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListViewManager_TypeInfo);
    sub_1B885B0(&ListViewSort_ScaleType___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    byte_4A5A534 = 1;
  }
  v1 = (System_Array_o *)sub_1B88658(ListViewSort_ScaleType___TypeInfo, 3LL);
  v5.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v2 = (struct ListViewSort_ScaleType_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v1, v5, 0LL);
  CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation = v2;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CharaGraphListViewManager_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
  CharaGraphListViewManager_c *v3; // x0
  ListViewSort_o *sort; // x0
  const MethodInfo *v5; // x1
  struct ListViewSort_ScaleType_array *IconScaleTypeRotation; // x8
  il2cpp_array_size_t max_length; // w9
  int v8; // w24
  UnityEngine_Object_o *seed; // x20
  bool v10; // w0
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4A5A532 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    sub_1B885B0(&CharaGraphListViewManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A532 = 1;
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
                               (const MethodInfo_2F7A460 *)Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    IconScaleTypeRotation = CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation;
    if ( !IconScaleTypeRotation )
      goto LABEL_16;
    max_length = IconScaleTypeRotation->max_length;
    v8 = (int)(((unsigned int)sort & ~((int)sort >> 31)) + 1) % (int)max_length;
    if ( v8 >= max_length )
      sub_1B88814(sort, v5);
    this->fields.scaleType = IconScaleTypeRotation->m_Items[v8 + 1];
    CharaGraphListViewManager__SelectSeedByScaleType(this, v5);
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v10 = UnityEngine_Object__op_Equality(seed, 0LL, 0LL);
  }
  while ( v8 && v10 );
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_16;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0LL);
  CharaGraphListViewManager__ModifyList(this, 1, 1, v11);
  this->fields.initMode = 2;
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL);
  CharaGraphListViewManager__RequestListObject(this, 2, v12);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL)) == 0LL )
  {
LABEL_16:
    sub_1B8880C(sort, v5);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
}


void __fastcall CharaGraphListViewManager__CreateList(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *listViewPattern,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1
  ListViewSort_o *ListViewPattern_k__BackingField; // x0
  struct ListViewSort_o *v9; // x0
  struct ListViewSort_o **p_sort; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4A5A523 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    byte_4A5A523 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields._ListViewPattern_k__BackingField = listViewPattern;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ListViewPattern_k__BackingField,
    (int32_t)listViewPattern,
    v5,
    v6);
  ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_9;
  v9 = (struct ListViewSort_o *)(*(__int64 (__fastcall **)(ListViewSort_o *, void *))&ListViewPattern_k__BackingField->klass[1]._1.byval_arg.bits)(
                                  ListViewPattern_k__BackingField,
                                  ListViewPattern_k__BackingField->klass[1]._1.this_arg.data);
  this->fields.sort = v9;
  p_sort = &this->fields.sort;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sort, (int32_t)v9, v11, v12);
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
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        !*p_sort) )
  {
LABEL_9:
    sub_1B8880C(ListViewPattern_k__BackingField, v7);
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
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  CharaGraphListViewManager___c_c *v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x20
  System_Func_T__TResult__o *_9__45_0; // x24
  Il2CppObject *v20; // x25
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Int64_array *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Func_object__bool__o *v28; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  CharaGraphListViewManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x20
  System_Func_T__TResult__o *_9__45_2; // x21
  Il2CppObject *v33; // x22
  struct CharaGraphListViewManager___c_StaticFields *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_Int64_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3

  if ( (byte_4A5A528 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1B885B0(&System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    sub_1B885B0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__);
    sub_1B885B0(&CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo);
    sub_1B885B0(&CharaGraphListViewManager___c_TypeInfo);
    byte_4A5A528 = 1;
  }
  v10 = sub_1B887FC(CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    sub_1B8880C(v11, v12);
  *(_QWORD *)(v10 + 16) = cond;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)cond, v13, v14);
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemEnumerable,
                                                               (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v16 = System_Linq_Enumerable__Where_object_(
          v15,
          *(System_Func_TSource__bool__o **)(v10 + 16),
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v17 = CharaGraphListViewManager___c_TypeInfo;
  v18 = v16;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v17 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_0 = (System_Func_T__TResult__o *)v17->static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = CharaGraphListViewManager___c_TypeInfo;
    }
    v20 = (Il2CppObject *)v17->static_fields->__9;
    _9__45_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_0,
      v20,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__45_0 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__45_0, (int32_t)_9__45_0, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v18,
                                                               (System_Func_TSource__TResult__o *)_9__45_0,
                                                               (const MethodInfo_2EB0118 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v25 = System_Linq_Enumerable__ToArray_long_(
          v24,
          (const MethodInfo_2EB865C *)Method_System_Linq_Enumerable_ToArray_long___);
  *trueDataArray = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)trueDataArray, (int32_t)v25, v26, v27);
  v28 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v28,
    (Il2CppObject *)v10,
    Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__,
    0LL);
  v29 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v28,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v30 = CharaGraphListViewManager___c_TypeInfo;
  v31 = v29;
  if ( !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v30 = CharaGraphListViewManager___c_TypeInfo;
  }
  _9__45_2 = (System_Func_T__TResult__o *)v30->static_fields->__9__45_2;
  if ( !_9__45_2 )
  {
    if ( !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v30 = CharaGraphListViewManager___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v30->static_fields->__9;
    _9__45_2 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_2,
      v33,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__,
      0LL);
    v34 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v34->__9__45_2 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v34->__9__45_2, (int32_t)_9__45_2, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v31,
                                                               (System_Func_TSource__TResult__o *)_9__45_2,
                                                               (const MethodInfo_2EB0118 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v38 = System_Linq_Enumerable__ToArray_long_(
          v37,
          (const MethodInfo_2EB865C *)Method_System_Linq_Enumerable_ToArray_long___);
  *falseDataArray = v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)falseDataArray, (int32_t)v38, v39, v40);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewManager__EnumerateItems(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5A51F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
    byte_4A5A51F = 1;
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                   (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *__fastcall CharaGraphListViewManager__EnumerateObjects(
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
  int32_t v10; // w3

  if ( (byte_4A5A520 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
    sub_1B885B0(&System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__);
    sub_1B885B0(&CharaGraphListViewManager___c_TypeInfo);
    byte_4A5A520 = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_GameObject___);
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
    _9__30_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__30_0,
      v7,
      Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__30_0 = (struct System_Func_GameObject__CharaGraphListViewObject__o *)_9__30_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__30_0, (int32_t)_9__30_0, v9, v10);
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 v5,
                                                                                 (System_Func_TSource__TResult__o *)_9__30_0,
                                                                                 (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
}


int64_t __fastcall CharaGraphListViewManager__GetAmountSortValue(
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

  if ( (byte_4A5A530 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___);
    sub_1B885B0(&System_Func_CharaGraphServantListViewItem__bool__TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DisplayClass62_0__GetAmountSortValue_b__0__);
    sub_1B885B0(&CharaGraphListViewManager___c__DisplayClass62_0_TypeInfo);
    byte_4A5A530 = 1;
  }
  v5 = sub_1B887FC(CharaGraphListViewManager___c__DisplayClass62_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              v8,
                                                              (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___);
  v10 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphServantListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass62_0__GetAmountSortValue_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__48881560(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_2E9DF98 *)Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___);
}


int64_t __fastcall CharaGraphListViewManager__GetCommandCodeAmountSortValue(
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

  if ( (byte_4A5A531 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
    sub_1B885B0(&Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
    sub_1B885B0(&System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DisplayClass63_0__GetCommandCodeAmountSortValue_b__0__);
    sub_1B885B0(&CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo);
    byte_4A5A531 = 1;
  }
  v5 = sub_1B887FC(CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_DWORD *)(v5 + 16) = commandCodeId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              v8,
                                                              (const MethodInfo_2EA998C *)Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
  v10 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass63_0__GetCommandCodeAmountSortValue_b__0__,
    0LL);
  return System_Linq_Enumerable__Count_object__48881560(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_2E9DF98 *)Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
}


CharaGraphListViewItemBase_o *__fastcall CharaGraphListViewManager__GetItem(
        CharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CharaGraphListViewItemBase_o *result; // x0
  __int64 methodPtr_low; // x10

  if ( (byte_4A5A525 & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_ListViewItem___);
    sub_1B885B0(&CharaGraphListViewItemBase_TypeInfo);
    byte_4A5A525 = 1;
  }
  result = (CharaGraphListViewItemBase_o *)BasicHelper__IndexValue_object__48686808(
                                             (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                             index,
                                             0LL,
                                             (const MethodInfo_2E6E6D8 *)Method_BasicHelper_IndexValue_ListViewItem___);
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
    sub_1B8880C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall CharaGraphListViewManager__GetSwapChoiceArray(
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
  int32_t v14; // w3
  CharaGraphListViewManager_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  CharaGraphListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v19; // x22
  System_Func_object__bool__o *_9__44_1; // x23
  Il2CppObject *v21; // x24
  struct CharaGraphListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5A527 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1B885B0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__);
    sub_1B885B0(&CharaGraphListViewManager___c_TypeInfo);
    byte_4A5A527 = 1;
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
    _9__44_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_0,
      v11,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__44_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__44_0, (int32_t)_9__44_0, v13, v14);
  }
  v15 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v9,
                                         (System_Func_TSource__bool__o *)_9__44_0,
                                         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
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
    _9__44_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_1,
      v21,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__,
      0LL);
    v22 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v22->__9__44_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->__9__44_1, (int32_t)_9__44_1, v23, v24);
  }
  if ( !this )
    sub_1B8880C(v15, v16);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v15,
    unChoiceArray,
    choiceArray,
    v19,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1,
    v17);
}


void __fastcall CharaGraphListViewManager__GetSwapLockArray(
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
  int32_t v14; // w3
  CharaGraphListViewManager_o *v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x5
  CharaGraphListViewManager___c_c *v18; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v19; // x22
  System_Func_object__bool__o *_9__43_1; // x23
  Il2CppObject *v21; // x24
  struct CharaGraphListViewManager___c_StaticFields *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5A526 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1B885B0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__);
    sub_1B885B0(&CharaGraphListViewManager___c_TypeInfo);
    byte_4A5A526 = 1;
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
    _9__43_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__43_0,
      v11,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__,
      0LL);
    static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    static_fields->__9__43_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__43_0, (int32_t)_9__43_0, v13, v14);
  }
  v15 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v9,
                                         (System_Func_TSource__bool__o *)_9__43_0,
                                         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
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
    _9__43_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__43_1,
      v21,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__,
      0LL);
    v22 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v22->__9__43_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v22->__9__43_1, (int32_t)_9__43_1, v23, v24);
  }
  if ( !this )
    sub_1B8880C(v15, v16);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v15,
    unlockArray,
    lockArray,
    v19,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1,
    v17);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick, 0, resultKind, (int32_t)method);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_1B8880C(v7, v8);
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
    sub_1B8880C(this, 0LL);
  return !item->fields.isTermination || ListViewManager__ClippingItem_40722428((ListViewManager_o *)this, item, 0LL);
}


void __fastcall CharaGraphListViewManager__JumpItemUserId(
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

  if ( (byte_4A5A52B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_1B885B0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DisplayClass56_0__JumpItemUserId_b__0__);
    sub_1B885B0(&CharaGraphListViewManager___c__DisplayClass56_0_TypeInfo);
    byte_4A5A52B = 1;
  }
  v5 = (Il2CppObject *)sub_1B887FC(CharaGraphListViewManager___c__DisplayClass56_0_TypeInfo);
  System_Object___ctor(v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  v5[1].klass = (Il2CppClass *)targetObjectId;
  v8 = CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    v5,
    Method_CharaGraphListViewManager___c__DisplayClass56_0__JumpItemUserId_b__0__,
    0LL);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v10 )
    ListViewManager__JumpItem((ListViewManager_o *)this, HIDWORD(v10[1].klass), 0LL);
}


void __fastcall CharaGraphListViewManager__ModifyList(
        CharaGraphListViewManager_o *this,
        bool isIconSizeChange,
        bool isNeedSort,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v13; // x0
  System_Collections_Generic_IEnumerable_T__o *v14; // x22
  char v15; // w28
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  System_Action_object__o *v19; // x23
  CharaGraphListViewManager___c_c *v20; // x0
  System_Func_object__bool__o *_9__39_1; // x23
  Il2CppObject *v22; // x24
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_T__o *v26; // x22
  System_Action_object__o *v27; // x23

  if ( (byte_4A5A524 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_CharaGraphListViewItemBase__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
    sub_1B885B0(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_1B885B0(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__ModifyList_b__39_1__);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__);
    sub_1B885B0(&CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo);
    sub_1B885B0(&CharaGraphListViewManager___c_TypeInfo);
    byte_4A5A524 = 1;
  }
  v7 = sub_1B887FC(CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v10, v11);
  v13 = CharaGraphListViewManager__EnumerateItems(this, v12);
  v14 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                         (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v15 = ~isIconSizeChange;
  v16 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_1B887FC(CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v16, !isIconSizeChange, 0LL);
  *(_QWORD *)(v7 + 16) = v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)v16, v17, v18);
  v19 = (System_Action_object__o *)sub_1B887FC(System_Action_CharaGraphListViewItemBase__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)v7,
    Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v14,
    (System_Action_T__o *)v19,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
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
      _9__39_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__39_1, v22, Method_CharaGraphListViewManager___c__ModifyList_b__39_1__, 0LL);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
      static_fields->__9__39_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__39_1;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__39_1, (int32_t)_9__39_1, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v14,
                                                           (System_Func_TSource__bool__o *)_9__39_1,
                                                           (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    v27 = (System_Action_object__o *)sub_1B887FC(System_Action_CharaGraphListViewItemBase__TypeInfo);
    System_Action_object____ctor(
      v27,
      (Il2CppObject *)v7,
      Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__,
      0LL);
    BasicHelper__ForEach_object_(
      v26,
      (System_Action_T__o *)v27,
      (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
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

  if ( (byte_4A5A52F & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
    byte_4A5A52F = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickBonusFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(0LL, v5);
  ListViewSort__IncrementBonusFilter(sort, this->fields._AlignedBonusFilterInfos_k__BackingField, 0, 0LL, 0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickFilterKind(
        CharaGraphListViewManager_o *this,
        System_Action_bool__o *endSelectCallback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v15; // x21
  int32_t v16; // w0
  ListViewSort_o *sort; // x19
  int32_t v18; // w22
  ServantFilterSelectMenu_CallbackFunc_o *v19; // x23

  if ( (byte_4A5A52C & 1) == 0 )
  {
    sub_1B885B0(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager_OnClickFilterKind__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DisplayClass57_0__OnClickFilterKind_g__EndSelectFilterKind_0__);
    sub_1B885B0(&CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo);
    byte_4A5A52C = 1;
  }
  v5 = sub_1B887FC(CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = endSelectCallback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)endSelectCallback, v10, v11);
  v12 = Method_CharaGraphListViewManager_OnClickFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B885C8(Method_CharaGraphListViewManager_OnClickFilterKind__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B88594(v12, v12[4]);
  OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v15 = (CommonUI_o *)Instance,
        v16 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.methodPtr),
        sort = this->fields.sort,
        v18 = v16,
        v19 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantFilterSelectMenu_CallbackFunc_TypeInfo),
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)v5,
          Method_CharaGraphListViewManager___c__DisplayClass57_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
          0LL),
        !v15) )
  {
LABEL_9:
    sub_1B8880C(Instance, v7);
  }
  CommonUI__OpenServantFilterSelectMenu(v15, v18, sort, v19, -1, 0LL);
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

  if ( (byte_4A5A52E & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
    byte_4A5A52E = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortAscendingOrder__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_1B8880C(v5, v6);
  sort->fields.isAscendingOrder ^= 1u;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickSortKind(CharaGraphListViewManager_o *this, const MethodInfo *method)
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

  if ( (byte_4A5A52D & 1) == 0 )
  {
    sub_1B885B0(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager_OnClickSortKind__);
    sub_1B885B0(&Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_58_0__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A52D = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B885C8(Method_CharaGraphListViewManager_OnClickSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v8 = (CommonUI_o *)Instance,
        v9 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.method)(
               this->fields._ListViewPattern_k__BackingField,
               ListViewPattern_k__BackingField->klass->vtable._9_GetItemDrawPattern.methodPtr),
        sort = this->fields.sort,
        v11 = v9,
        v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_1B887FC(ServantSortSelectMenu_CallbackFunc_TypeInfo),
        ServantSortSelectMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_58_0__,
          0LL),
        !v8) )
  {
    sub_1B8880C(Instance, v6);
  }
  CommonUI__OpenServantSortSelectMenu(v8, v11, sort, 0, v12, 0LL);
}


void __fastcall CharaGraphListViewManager__OnLongPushListView(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  CharaGraphListViewManager__InvokeOnClick(this, obj, 1, v3);
}


void __fastcall CharaGraphListViewManager__RequestListObject(
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
  int32_t v12; // w3
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_4A5A52A & 1) == 0 )
  {
    sub_1B885B0(&System_Action_CharaGraphListViewObject__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_CharaGraphListViewObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__);
    sub_1B885B0(&CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_4A5A52A = 1;
  }
  v5 = sub_1B887FC(CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = mode;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphListViewManager__EnumerateObjects(this, v7);
  v9 = (System_Action_object__o *)sub_1B887FC(System_Action_CharaGraphListViewObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_CharaGraphListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_13;
    ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._8_UpdateScrollbars.method)(
      v6,
      1LL,
      v6->klass->vtable._9_SetDragAmount.methodPtr);
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_13;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v6->klass->vtable._6_get_shouldMoveVertically.method)(
            v6,
            v6->klass->vtable._7_get_shouldMove.methodPtr) & 1) != 0 )
    {
      v6 = this->fields.scrollView;
      if ( v6 )
      {
        UIScrollView__UpdatePosition(v6, 0LL);
        goto LABEL_12;
      }
LABEL_13:
      sub_1B8880C(v6, v7);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnMoveEnd, 0, v11, v12);
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
  int32_t v3; // w3
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.seed, (int32_t)v6, v2, v3);
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
  int32_t v11; // w3
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
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
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
    sub_1B8880C(ListViewPattern_k__BackingField, method);
  }
  v12->fields.isBonusKind = (ListViewPattern_k__BackingField & 1) == 0;
}


void __fastcall CharaGraphListViewManager__SetFuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.FuncOnClick = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall CharaGraphListViewManager__SetMode(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnClick = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  CharaGraphListViewManager__SetMode_38014224(this, mode, v6);
}


void __fastcall CharaGraphListViewManager__SetMode_38014224(
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


void __fastcall CharaGraphListViewManager__SetMode_38035932(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.FuncOnMoveEnd,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  CharaGraphListViewManager__SetMode_38014224(this, mode, v6);
}


void __fastcall CharaGraphListViewManager__SetObjectItem(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 methodPtr_low; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_4A5A529 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListViewObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A529 = 1;
  }
  if ( obj )
  {
    methodPtr_low = LOBYTE(CharaGraphListViewObject_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(obj->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    {
      if ( (CharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[methodPtr_low - 1] != CharaGraphListViewObject_TypeInfo )
        obj = 0LL;
    }
    else
    {
      obj = 0LL;
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !obj )
      sub_1B8880C(v7, v8);
    if ( this->fields.initMode == 2 )
      v10 = 2;
    else
      v10 = 1;
    CharaGraphListViewObject__Init((CharaGraphListViewObject_o *)obj, v10, v9);
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
    sub_1B8880C(0LL, value);
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
  System_String_o *ListViewPattern_k__BackingField; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  UnityEngine_Object_o *emptyMessageLabel; // x21
  System_String_o *v6; // x20
  UILabel_o *v7; // x19

  if ( (byte_4A5A533 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_4A5A533 = 1;
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
    v6 = (System_String_o *)StringLiteral_11772/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v6 = ListViewPattern_k__BackingField;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v7 = this->fields.emptyMessageLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    ListViewPattern_k__BackingField = LocalizationManager__Get(v6, 0LL);
    if ( v7 )
    {
      UILabel__set_text(v7, ListViewPattern_k__BackingField, 0LL);
      return;
    }
LABEL_16:
    sub_1B8880C(ListViewPattern_k__BackingField, method);
  }
}


void __fastcall CharaGraphListViewManager___OnClickSortKind_g__EndSelectSortKind_58_0(
        CharaGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A5A535 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A535 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v6);
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
    sub_1B8880C(this, 0LL);
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

  if ( (byte_4A5A51B & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4A5A51B = 1;
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
    v8 = sub_1BC3AA0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5A51D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5A51D = 1;
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
    v8 = sub_1BC3AA0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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
  System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *v3; // x20
  System_Func_object__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_4A5A522 & 1) == 0 )
  {
    sub_1B885B0(&Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
    sub_1B885B0(&System_Func_CharaGraphListViewObject__bool__TypeInfo);
    byte_4A5A522 = 1;
  }
  v3 = CharaGraphListViewManager__EnumerateObjects(this, method);
  v4 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_CharaGraphListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__,
    0LL);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          v5,
                                                                          (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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

  if ( (byte_4A5A521 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    byte_4A5A521 = 1;
  }
  v3 = CharaGraphListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                          (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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

  if ( (byte_4A5A51C & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_4A5A51C = 1;
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
    v8 = sub_1BC3AA0(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
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

  if ( (byte_4A5A51E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    byte_4A5A51E = 1;
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
    v8 = sub_1BC3AA0(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B88ACC(v7);
  CharaGraphListViewManager__get_AlignedBonusFilterInfos(v10, v11);
}


void __fastcall CharaGraphListViewManager__set_AlignedBonusFilterInfos(
        CharaGraphListViewManager_o *this,
        ListViewSort_BonusFilterInfo_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._AlignedBonusFilterInfos_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphListViewManager__set_ListViewPattern(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._ListViewPattern_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._ListViewPattern_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall CharaGraphListViewManager__set_OnSetSortButtonImage(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._OnSetSortButtonImage_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._OnSetSortButtonImage_k__BackingField,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CE800;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CE7A8;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_4A5A536 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&CharaGraphListViewManager_ResultKind_TypeInfo);
    byte_4A5A536 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(
             CharaGraphListViewManager_ResultKind_TypeInfo,
             &v15,
             *(_QWORD *)&result,
             callback,
             object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall CharaGraphListViewManager_CallbackFunc__EndInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A537 & 1) == 0 )
  {
    sub_1B885B0(&CharaGraphListViewManager___c_TypeInfo);
    byte_4A5A537 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(CharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  CharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct CharaGraphListViewManager___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)CharaGraphListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr);
}


CharaGraphListViewObject_o *__fastcall CharaGraphListViewManager___c___EnumerateObjects_b__30_0(
        CharaGraphListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4A5A538 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
    byte_4A5A538 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  return (CharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         x,
                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields._IsChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__43_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields._IsSwapLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__43_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields._IsLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___ModifyList_b__39_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x19

  if ( (byte_4A5A539 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A539 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, x);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
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
  void *_4__this; // x0

  if ( (byte_4A5A53A & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call_bool___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5A53A = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL),
          (_4__this = this->fields.__4__this) == 0LL) )
    {
LABEL_9:
      sub_1B8880C(_4__this, isDecide);
    }
    ListViewManager__CheckScroll((ListViewManager_o *)_4__this, *((_DWORD *)_4__this + 88), 0LL);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.endSelectCallback,
    isDecide,
    (const MethodInfo_2DD5768 *)Method_ActionExtensions_Call_bool___);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return x->fields._CommandCodeId_k__BackingField == this->fields.commandCodeId;
}