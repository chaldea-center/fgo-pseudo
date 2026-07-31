void CharaGraphListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct ListViewSort_ScaleType_array *v3; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593795C & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewManager_TypeInfo);
    sub_21FFC50(&ListViewSort_ScaleType___TypeInfo);
    sub_21FFC50(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    byte_593795C = 1;
  }
  v1 = (System_Array_o *)sub_21FFD10(ListViewSort_ScaleType___TypeInfo, 3);
  v2.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  v3 = (struct ListViewSort_ScaleType_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76127424(v1, v2, 0);
  CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation = v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CharaGraphListViewManager_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
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
  __int64 v2; // x2
  CharaGraphListViewManager_c *v4; // x0
  ListViewSort_o *sort; // x0
  struct ListViewSort_ScaleType_array *IconScaleTypeRotation; // x8
  unsigned int max_length; // w10
  int v8; // w24
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *seed; // x20
  bool v12; // w0
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_593795A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    sub_21FFC50(&CharaGraphListViewManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593795A = 1;
  }
  do
  {
    v4 = CharaGraphListViewManager_TypeInfo;
    if ( !*(&CharaGraphListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager_TypeInfo, method, v2);
      v4 = CharaGraphListViewManager_TypeInfo;
    }
    sort = (ListViewSort_o *)System_Array__IndexOf_Int32Enum_(
                               (System_Int32Enum_array *)v4->static_fields->IconScaleTypeRotation,
                               this->fields.scaleType,
                               (const MethodInfo_39FB04C *)Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    IconScaleTypeRotation = CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation;
    if ( !IconScaleTypeRotation )
      goto LABEL_15;
    max_length = IconScaleTypeRotation->max_length;
    v8 = (int)(((unsigned int)sort & ~((int)sort >> 31)) + 1) % (int)max_length;
    if ( v8 >= max_length )
      sub_21FFED4(sort);
    this->fields.scaleType = IconScaleTypeRotation->m_Items[v8];
    CharaGraphListViewManager__SelectSeedByScaleType(this, method);
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    v12 = UnityEngine_Object__op_Equality(seed, 0, 0);
  }
  while ( v8 && v12 );
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_15;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ListViewSort__Save(sort, 0);
  CharaGraphListViewManager__ModifyList(this, 1, 1, v13);
  this->fields.initMode = 2;
  ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0);
  CharaGraphListViewManager__RequestListObject(this, 2, v14);
  sort = (ListViewSort_o *)this->fields.scrollBar;
  if ( !sort
    || (sort = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0)) == 0 )
  {
LABEL_15:
    sub_21FFECC(sort, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0);
}


void CharaGraphListViewManager__CreateList(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *listViewPattern,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1
  ListViewSort_o *ListViewPattern_k__BackingField; // x0
  struct ListViewSort_o *v13; // x0
  struct ListViewSort_o **p_sort; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_593794A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    byte_593794A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  this->fields._ListViewPattern_k__BackingField = listViewPattern;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ListViewPattern_k__BackingField,
    (int32_t)listViewPattern,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_9;
  v13 = (struct ListViewSort_o *)((__int64 (__fastcall *)(ListViewSort_o *, _QWORD))ListViewPattern_k__BackingField->klass[1]._1.byval_arg.data)(
                                   ListViewPattern_k__BackingField,
                                   *(_QWORD *)&ListViewPattern_k__BackingField->klass[1]._1.byval_arg.bits);
  this->fields.sort = v13;
  p_sort = &this->fields.sort;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sort, (int32_t)v13, v15, v16, v17, v18, v19, v20);
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
          (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        !*p_sort) )
  {
LABEL_9:
    sub_21FFECC(ListViewPattern_k__BackingField, v11);
  }
  this->fields.scaleType = (*p_sort)->fields.iconScaleKind;
  CharaGraphListViewManager__SelectSeedByScaleType(this, v11);
  CharaGraphListViewManager__SetBonusFilterIds(this, v22);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0);
  CharaGraphListViewManager__SetupEmptyMessage(this, v23);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  CharaGraphListViewManager___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x23
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__long__o *_9__45_0; // x24
  Il2CppObject *v27; // x25
  struct CharaGraphListViewManager___c_StaticFields *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  System_Int64_array *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  System_Func_object__bool__o *v43; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  CharaGraphListViewManager___c_c *v47; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v48; // x20
  struct CharaGraphListViewManager___c_StaticFields *v49; // x9
  System_Func_object__long__o *_9__45_2; // x21
  Il2CppObject *v51; // x22
  struct CharaGraphListViewManager___c_StaticFields *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  System_Int64_array *v60; // x0
  System_String_o *v61; // x2
  System_String_o *v62; // x3
  int32_t v63; // w4
  int32_t v64; // w5
  bool v65; // w6
  bool v66; // w7

  if ( (byte_593794F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_21FFC50(&System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    sub_21FFC50(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__);
    sub_21FFC50(&CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo);
    sub_21FFC50(&CharaGraphListViewManager___c_TypeInfo);
    byte_593794F = 1;
  }
  v10 = sub_21FFEBC(CharaGraphListViewManager___c__DisplayClass45_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  if ( !v10 )
    sub_21FFECC(v11, v12);
  *(_QWORD *)(v10 + 16) = cond;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v10 + 16), (int32_t)cond, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemEnumerable,
                                                               (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v20 = System_Linq_Enumerable__Where_object_(
          v19,
          *(System_Func_TSource__bool__o **)(v10 + 16),
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v23 = CharaGraphListViewManager___c_TypeInfo;
  v24 = v20;
  if ( !*(&CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v21, v22);
    v23 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__45_0 = (System_Func_object__long__o *)static_fields->__9__45_0;
  if ( !_9__45_0 )
  {
    if ( !*(&v23->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v23, v21, v22);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)static_fields->__9;
    _9__45_0 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_0,
      v27,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_0__,
      0);
    v28 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v28->__9__45_0 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v28->__9__45_0, (int32_t)_9__45_0, v29, v30, v31, v32, v33, v34);
  }
  v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__45_0,
                                                               (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v36 = System_Linq_Enumerable__ToArray_long_(
          v35,
          (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
  *trueDataArray = v36;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)trueDataArray, (int32_t)v36, v37, v38, v39, v40, v41, v42);
  v43 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v43,
    (Il2CppObject *)v10,
    Method_CharaGraphListViewManager___c__DisplayClass45_0__DistributeObjectIdByMatchCondOrNot_b__1__,
    0);
  v44 = System_Linq_Enumerable__Where_object_(
          v19,
          (System_Func_TSource__bool__o *)v43,
          (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v47 = CharaGraphListViewManager___c_TypeInfo;
  v48 = v44;
  if ( !*(&CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v45, v46);
    v47 = CharaGraphListViewManager___c_TypeInfo;
  }
  v49 = v47->static_fields;
  _9__45_2 = (System_Func_object__long__o *)v49->__9__45_2;
  if ( !_9__45_2 )
  {
    if ( !*(&v47->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v47, v45, v46);
      v49 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v51 = (Il2CppObject *)v49->__9;
    _9__45_2 = (System_Func_object__long__o *)sub_21FFEBC(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_object__long____ctor(
      _9__45_2,
      v51,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__45_2__,
      0);
    v52 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v52->__9__45_2 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__45_2;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v52->__9__45_2, (int32_t)_9__45_2, v53, v54, v55, v56, v57, v58);
  }
  v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__long_(
                                                               v48,
                                                               (System_Func_TSource__TResult__o *)_9__45_2,
                                                               (const MethodInfo_385D9DC *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v60 = System_Linq_Enumerable__ToArray_long_(
          v59,
          (const MethodInfo_38685DC *)Method_System_Linq_Enumerable_ToArray_long___);
  *falseDataArray = v60;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)falseDataArray, (int32_t)v60, v61, v62, v63, v64, v65, v66);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *CharaGraphListViewManager__EnumerateItems(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_5937946 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
    byte_5937946 = 1;
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__OfType_object_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                   (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *CharaGraphListViewManager__EnumerateObjects(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  CharaGraphListViewManager___c_c *v6; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__30_0; // x20
  Il2CppObject *v10; // x21
  struct CharaGraphListViewManager___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5937947 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
    sub_21FFC50(&System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__);
    sub_21FFC50(&CharaGraphListViewManager___c_TypeInfo);
    byte_5937947 = 1;
  }
  v3 = BasicHelper__ExcludeNull_object_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_GameObject___);
  v6 = CharaGraphListViewManager___c_TypeInfo;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)v3;
  if ( !*(&CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v4, v5);
    v6 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v6->static_fields;
  _9__30_0 = (System_Func_object__object__o *)static_fields->__9__30_0;
  if ( !_9__30_0 )
  {
    if ( !*(&v6->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v6, v4, v5);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__30_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    System_Func_object__object____ctor(
      _9__30_0,
      v10,
      Method_CharaGraphListViewManager___c__EnumerateObjects_b__30_0__,
      0);
    v11 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v11->__9__30_0 = (struct System_Func_GameObject__CharaGraphListViewObject__o *)_9__30_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->__9__30_0, (int32_t)_9__30_0, v12, v13, v14, v15, v16, v17);
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 v7,
                                                                                 (System_Func_TSource__TResult__o *)_9__30_0,
                                                                                 (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
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

  if ( (byte_5937958 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItemBase___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItemBase___);
    sub_21FFC50(&System_Func_CharaGraphServantListViewItemBase__bool__TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DisplayClass63_0__GetAmountSortValue_b__0__);
    sub_21FFC50(&CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo);
    byte_5937958 = 1;
  }
  v5 = sub_21FFEBC(CharaGraphListViewManager___c__DisplayClass63_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_DWORD *)(v5 + 16) = svtId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              v8,
                                                              (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItemBase___);
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphServantListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass63_0__GetAmountSortValue_b__0__,
    0);
  return System_Linq_Enumerable__Count_object__59013780(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_3847A94 *)Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItemBase___);
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

  if ( (byte_5937959 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
    sub_21FFC50(&System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DisplayClass64_0__GetCommandCodeAmountSortValue_b__0__);
    sub_21FFC50(&CharaGraphListViewManager___c__DisplayClass64_0_TypeInfo);
    byte_5937959 = 1;
  }
  v5 = sub_21FFEBC(CharaGraphListViewManager___c__DisplayClass64_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_DWORD *)(v5 + 16) = commandCodeId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                              v8,
                                                              (const MethodInfo_3855054 *)Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
  v10 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass64_0__GetCommandCodeAmountSortValue_b__0__,
    0);
  return System_Linq_Enumerable__Count_object__59013780(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_3847A94 *)Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
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
  int32_t v9; // w23
  bool v10; // w26
  Il2CppObject *Item; // x0
  __int64 naturalAligment; // x10

  v7 = index;
  v8 = this;
  if ( (byte_5937952 & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewItemBase_TypeInfo);
    this = (CharaGraphListViewManager_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_5937952 = 1;
  }
  *v7 = -1;
  if ( sum < 1 )
  {
    return 0;
  }
  else
  {
    v9 = 0;
    v10 = 1;
    do
    {
      ++*v7;
      if ( !list
        || ((Item = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)list,
                      v9,
                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ListViewItem__get_Item__)) != 0
         && (naturalAligment = CharaGraphListViewItemBase_TypeInfo->_2.naturalAligment,
             Item->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
          ? ((CharaGraphListViewItemBase_c *)Item->klass->_2.typeHierarchy[naturalAligment - 1] != CharaGraphListViewItemBase_TypeInfo
           ? (index = 0)
           : (index = (int32_t *)Item))
          : (index = 0),
            (this = (CharaGraphListViewManager_o *)v8->fields._ListViewPattern_k__BackingField) == 0) )
      {
        sub_21FFECC(this, index);
      }
      this = (CharaGraphListViewManager_o *)((__int64 (__fastcall *)(CharaGraphListViewManager_o *, int32_t *, const MethodInfo *))this->klass->vtable._14_CreateList.methodPtr)(
                                              this,
                                              index,
                                              this->klass->vtable._14_CreateList.method);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      v10 = ++v9 < sum;
    }
    while ( sum != v9 );
  }
  return v10;
}


CharaGraphListViewItemBase_o *CharaGraphListViewManager__GetItem(
        CharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CharaGraphListViewItemBase_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_593794C & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_IndexValue_ListViewItem___);
    sub_21FFC50(&CharaGraphListViewItemBase_TypeInfo);
    byte_593794C = 1;
  }
  result = (CharaGraphListViewItemBase_o *)BasicHelper__IndexValue_object__58595452(
                                             (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                             index,
                                             0,
                                             (const MethodInfo_37E187C *)Method_BasicHelper_IndexValue_ListViewItem___);
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
    sub_21FFECC(0, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0);
}


void CharaGraphListViewManager__GetSwapChoiceArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **choiceArray,
        System_Int64_array **unChoiceArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CharaGraphListViewManager___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x22
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__44_0; // x23
  Il2CppObject *v14; // x24
  struct CharaGraphListViewManager___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  CharaGraphListViewManager_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x5
  CharaGraphListViewManager___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v27; // x22
  struct CharaGraphListViewManager___c_StaticFields *v28; // x9
  System_Func_object__bool__o *_9__44_1; // x23
  Il2CppObject *v30; // x24
  struct CharaGraphListViewManager___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_593794E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_21FFC50(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__);
    sub_21FFC50(&CharaGraphListViewManager___c_TypeInfo);
    byte_593794E = 1;
  }
  v7 = CharaGraphListViewManager__EnumerateItems(this, (const MethodInfo *)choiceArray);
  v10 = CharaGraphListViewManager___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !*(&CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v8, v9);
    v10 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__44_0 = (System_Func_object__bool__o *)static_fields->__9__44_0;
  if ( !_9__44_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8, v9);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__44_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_0,
      v14,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_0__,
      0);
    v15 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v15->__9__44_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__44_0, (int32_t)_9__44_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v11,
                                         (System_Func_TSource__bool__o *)_9__44_0,
                                         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v26 = CharaGraphListViewManager___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v22;
  if ( !*(&CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v23, v24);
    v26 = CharaGraphListViewManager___c_TypeInfo;
  }
  v28 = v26->static_fields;
  _9__44_1 = (System_Func_object__bool__o *)v28->__9__44_1;
  if ( !_9__44_1 )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v23, v24);
      v28 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v28->__9;
    _9__44_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__44_1,
      v30,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__44_1__,
      0);
    v31 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v31->__9__44_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v31->__9__44_1, (int32_t)_9__44_1, v32, v33, v34, v35, v36, v37);
  }
  if ( !this )
    sub_21FFECC(v22, v23);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v22,
    unChoiceArray,
    choiceArray,
    v27,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__44_1,
    v25);
}


void CharaGraphListViewManager__GetSwapLockArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **lockArray,
        System_Int64_array **unlockArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  CharaGraphListViewManager___c_c *v10; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x22
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__43_0; // x23
  Il2CppObject *v14; // x24
  struct CharaGraphListViewManager___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  CharaGraphListViewManager_o *v22; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  const MethodInfo *v25; // x5
  CharaGraphListViewManager___c_c *v26; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v27; // x22
  struct CharaGraphListViewManager___c_StaticFields *v28; // x9
  System_Func_object__bool__o *_9__43_1; // x23
  Il2CppObject *v30; // x24
  struct CharaGraphListViewManager___c_StaticFields *v31; // x0
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_593794D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_21FFC50(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__);
    sub_21FFC50(&CharaGraphListViewManager___c_TypeInfo);
    byte_593794D = 1;
  }
  v7 = CharaGraphListViewManager__EnumerateItems(this, (const MethodInfo *)lockArray);
  v10 = CharaGraphListViewManager___c_TypeInfo;
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !*(&CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v8, v9);
    v10 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__43_0 = (System_Func_object__bool__o *)static_fields->__9__43_0;
  if ( !_9__43_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8, v9);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__43_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_0, v14, Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_0__, 0);
    v15 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v15->__9__43_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->__9__43_0, (int32_t)_9__43_0, v16, v17, v18, v19, v20, v21);
  }
  v22 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_object_(
                                         v11,
                                         (System_Func_TSource__bool__o *)_9__43_0,
                                         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v26 = CharaGraphListViewManager___c_TypeInfo;
  v27 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v22;
  if ( !*(&CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v23, v24);
    v26 = CharaGraphListViewManager___c_TypeInfo;
  }
  v28 = v26->static_fields;
  _9__43_1 = (System_Func_object__bool__o *)v28->__9__43_1;
  if ( !_9__43_1 )
  {
    if ( !*(&v26->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v26, v23, v24);
      v28 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v30 = (Il2CppObject *)v28->__9;
    _9__43_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__43_1, v30, Method_CharaGraphListViewManager___c__GetSwapLockArray_b__43_1__, 0);
    v31 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v31->__9__43_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v31->__9__43_1, (int32_t)_9__43_1, v32, v33, v34, v35, v36, v37);
  }
  if ( !this )
    sub_21FFECC(v22, v23);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v22,
    unlockArray,
    lockArray,
    v27,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1,
    v25);
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListViewManager__InvokeOnClick(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct CharaGraphListViewManager_CallbackFunc_o *FuncOnClick; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  unsigned int Index; // w0

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnClick,
    0,
    *(System_String_o **)&resultKind,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_21FFECC(v11, v12);
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
    sub_21FFECC(this, 0);
  return !item->fields.isTermination || ListViewManager__ClippingItem_50765052((ListViewManager_o *)this, item, 0);
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

  if ( (byte_5937953 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_21FFC50(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DisplayClass57_0__JumpItemUserId_b__0__);
    sub_21FFC50(&CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo);
    byte_5937953 = 1;
  }
  v5 = (Il2CppObject *)sub_21FFEBC(CharaGraphListViewManager___c__DisplayClass57_0_TypeInfo);
  System_Object___ctor(v5, 0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  v5[1].klass = (Il2CppClass *)targetObjectId;
  v8 = CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v9,
    v5,
    Method_CharaGraphListViewManager___c__DisplayClass57_0__JumpItemUserId_b__0__,
    0);
  v10 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
          (System_Collections_Generic_IEnumerable_TSource__o *)v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x22
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v19; // x24
  char v20; // w28
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Action_object__o *v27; // x23
  __int64 v28; // x1
  __int64 v29; // x2
  CharaGraphListViewManager___c_c *v30; // x0
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__39_1; // x23
  Il2CppObject *v33; // x24
  struct CharaGraphListViewManager___c_StaticFields *v34; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  System_Collections_Generic_IEnumerable_T__o *v41; // x22
  System_Action_object__o *v42; // x23

  if ( (byte_593794B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_CharaGraphListViewItemBase__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
    sub_21FFC50(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_21FFC50(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__ModifyList_b__39_1__);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__);
    sub_21FFC50(&CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo);
    sub_21FFC50(&CharaGraphListViewManager___c_TypeInfo);
    byte_593794B = 1;
  }
  v7 = sub_21FFEBC(CharaGraphListViewManager___c__DisplayClass39_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_21FFECC(v8, v9);
  *(_QWORD *)(v7 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v10, v11, v12, v13, v14, v15);
  v17 = CharaGraphListViewManager__EnumerateItems(this, v16);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                         (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v19 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_21FFEBC(CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
  v20 = ~isIconSizeChange;
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v19, !isIconSizeChange, 0);
  *(_QWORD *)(v7 + 16) = v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)v19, v21, v22, v23, v24, v25, v26);
  v27 = (System_Action_object__o *)sub_21FFEBC(System_Action_CharaGraphListViewItemBase__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v7,
    Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v18,
    (System_Action_T__o *)v27,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  if ( (v20 & 1) == 0 )
  {
    v30 = CharaGraphListViewManager___c_TypeInfo;
    if ( !*(&CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo, v28, v29);
      v30 = CharaGraphListViewManager___c_TypeInfo;
    }
    static_fields = v30->static_fields;
    _9__39_1 = (System_Func_object__bool__o *)static_fields->__9__39_1;
    if ( !_9__39_1 )
    {
      if ( !*(&v30->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v30, v28, v29);
        static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
      }
      v33 = (Il2CppObject *)static_fields->__9;
      _9__39_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__39_1, v33, Method_CharaGraphListViewManager___c__ModifyList_b__39_1__, 0);
      v34 = CharaGraphListViewManager___c_TypeInfo->static_fields;
      v34->__9__39_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__39_1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v34->__9__39_1, (int32_t)_9__39_1, v35, v36, v37, v38, v39, v40);
    }
    v41 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                           (System_Func_TSource__bool__o *)_9__39_1,
                                                           (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    v42 = (System_Action_object__o *)sub_21FFEBC(System_Action_CharaGraphListViewItemBase__TypeInfo);
    System_Action_object____ctor(
      v42,
      (Il2CppObject *)v7,
      Method_CharaGraphListViewManager___c__DisplayClass39_0__ModifyList_b__2__,
      0);
    BasicHelper__ForEach_object_(
      v41,
      (System_Action_T__o *)v42,
      (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
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

  if ( (byte_5937957 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
    byte_5937957 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickBonusFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickBonusFilterKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(0, v5);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v23; // x21
  unsigned int v24; // w0
  ListViewSort_o *sort; // x19
  int32_t v26; // w22
  ServantFilterSelectMenu_CallbackFunc_o *v27; // x23

  if ( (byte_5937954 & 1) == 0 )
  {
    sub_21FFC50(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager_OnClickFilterKind__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DisplayClass58_0__OnClickFilterKind_g__EndSelectFilterKind_0__);
    sub_21FFC50(&CharaGraphListViewManager___c__DisplayClass58_0_TypeInfo);
    byte_5937954 = 1;
  }
  v5 = sub_21FFEBC(CharaGraphListViewManager___c__DisplayClass58_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endSelectCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)endSelectCallback, v14, v15, v16, v17, v18, v19);
  v20 = Method_CharaGraphListViewManager_OnClickFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickFilterKind__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_21FFC68(Method_CharaGraphListViewManager_OnClickFilterKind__);
  v21 = (System_Reflection_MethodBase_o *)sub_21FFC34(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v23 = (CommonUI_o *)Instance,
        v24 = (unsigned int)((_QWORD *(__fastcall *)(struct CharaGraphListViewPatternBase_o *__return_ptr, struct CharaGraphListViewPatternBase_o *, const MethodInfo *))ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.methodPtr)(
                              ListViewPattern_k__BackingField,
                              this->fields._ListViewPattern_k__BackingField,
                              ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.method),
        sort = this->fields.sort,
        v26 = v24,
        v27 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantFilterSelectMenu_CallbackFunc_TypeInfo),
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v27,
          (Il2CppObject *)v5,
          Method_CharaGraphListViewManager___c__DisplayClass58_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
          0),
        !v23) )
  {
LABEL_9:
    sub_21FFECC(Instance, v7);
  }
  CommonUI__OpenServantFilterSelectMenu(v23, v26, sort, v27, -1, 0);
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

  if ( (byte_5937956 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
    byte_5937956 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortAscendingOrder__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  sort = this->fields.sort;
  if ( !sort )
    sub_21FFECC(v5, v6);
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
  unsigned int v9; // w0
  ListViewSort_o *sort; // x21
  int32_t v11; // w22
  ServantSortSelectMenu_CallbackFunc_o *v12; // x23

  if ( (byte_5937955 & 1) == 0 )
  {
    sub_21FFC50(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager_OnClickSortKind__);
    sub_21FFC50(&Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_59_0__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937955 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_CharaGraphListViewManager_OnClickSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v8 = (CommonUI_o *)Instance,
        v9 = (unsigned int)((_QWORD *(__fastcall *)(struct CharaGraphListViewPatternBase_o *__return_ptr, struct CharaGraphListViewPatternBase_o *, const MethodInfo *))ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.methodPtr)(
                             ListViewPattern_k__BackingField,
                             this->fields._ListViewPattern_k__BackingField,
                             ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.method),
        sort = this->fields.sort,
        v11 = v9,
        v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_21FFEBC(ServantSortSelectMenu_CallbackFunc_TypeInfo),
        ServantSortSelectMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_59_0__,
          0),
        !v8) )
  {
    sub_21FFECC(Instance, v6);
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
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_Object_o *scrollView; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_5937951 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_CharaGraphListViewObject__TypeInfo);
    sub_21FFC50(&Method_BasicHelper_ForEach_CharaGraphListViewObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__);
    sub_21FFC50(&CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo);
    byte_5937951 = 1;
  }
  v5 = sub_21FFEBC(CharaGraphListViewManager___c__DisplayClass50_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_DWORD *)(v5 + 16) = mode;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphListViewManager__EnumerateObjects(this, v7);
  v9 = (System_Action_object__o *)sub_21FFEBC(System_Action_CharaGraphListViewObject__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass50_0__RequestListObject_b__0__,
    0);
  BasicHelper__ForEach_object_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_37DF47C *)Method_BasicHelper_ForEach_CharaGraphListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
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
      sub_21FFECC(v6, v7);
    }
  }
LABEL_12:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnMoveEnd, 0, v13, v14, v15, v16, v17, v18);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t scaleType; // w8
  struct ListViewItemSeed_o **p_normalSizeSeed; // x9
  struct ListViewItemSeed_o **p_extremelySmallSizeSeed; // x8
  struct ListViewItemSeed_o *v11; // x1

  scaleType = this->fields.scaleType;
  p_normalSizeSeed = &this->fields.normalSizeSeed;
  if ( scaleType == 2 )
    p_normalSizeSeed = &this->fields.smallSizeSeed;
  if ( scaleType == 3 )
    p_extremelySmallSizeSeed = &this->fields.extremelySmallSizeSeed;
  else
    p_extremelySmallSizeSeed = p_normalSizeSeed;
  v11 = *p_extremelySmallSizeSeed;
  this->fields.seed = *p_extremelySmallSizeSeed;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.seed, (int32_t)v11, v2, v3, v4, v5, v6, v7);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct ListViewSort_o *v16; // x20

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
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
          (int32_t)AlignedBonusFilter,
          v10,
          v11,
          v12,
          v13,
          v14,
          v15),
        v16 = this->fields.sort,
        ListViewPattern_k__BackingField = (struct CharaGraphListViewPatternBase_o *)BasicHelper__IsNullOrEmpty(
                                                                                      (System_Collections_ICollection_o *)this->fields._AlignedBonusFilterInfos_k__BackingField,
                                                                                      0),
        !v16) )
  {
LABEL_7:
    sub_21FFECC(ListViewPattern_k__BackingField, method);
  }
  v16->fields.isBonusKind = ((unsigned __int8)ListViewPattern_k__BackingField & 1) == 0;
}


void CharaGraphListViewManager__SetFuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.FuncOnClick = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphListViewManager__SetMode(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.FuncOnClick = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnClick,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  CharaGraphListViewManager__SetMode_47721208(this, mode, v10);
}


void CharaGraphListViewManager__SetMode_47721208(
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


void CharaGraphListViewManager__SetMode_47745916(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v10; // x2

  this->fields.FuncOnMoveEnd = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.FuncOnMoveEnd,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  CharaGraphListViewManager__SetMode_47721208(this, mode, v10);
}


void CharaGraphListViewManager__SetObjectItem(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  UnityEngine_Object_o *v4; // x20
  __int64 naturalAligment; // x11
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_5937950 & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937950 = 1;
  }
  if ( v4 )
  {
    naturalAligment = CharaGraphListViewObject_TypeInfo->_2.naturalAligment;
    if ( v4->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
    {
      if ( (CharaGraphListViewObject_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != CharaGraphListViewObject_TypeInfo )
        v4 = 0;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, item);
  v7 = UnityEngine_Object__op_Equality(v4, 0, 0);
  if ( !v7 )
  {
    if ( !v4 )
      sub_21FFECC(v7, v8);
    if ( this->fields.initMode == 2 )
      v10 = 2;
    else
      v10 = 1;
    CharaGraphListViewObject__Init((CharaGraphListViewObject_o *)v4, v10, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void CharaGraphListViewManager__SetScrollViewEnabled(
        CharaGraphListViewManager_o *this,
        bool value,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *scrollView; // x0

  scrollView = (UnityEngine_Behaviour_o *)this->fields.scrollView;
  if ( !scrollView )
    sub_21FFECC(0, value);
  UnityEngine_Behaviour__set_enabled(scrollView, value, 0);
}


void CharaGraphListViewManager__SetSortButtonImage(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  ActionExtensions__Call(this->fields._OnSetSortButtonImage_k__BackingField, 0);
}


void CharaGraphListViewManager__SetupEmptyMessage(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *ListViewPattern_k__BackingField; // x0
  __int64 v4; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  UnityEngine_Object_o *emptyMessageLabel; // x21
  System_String_o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UILabel_o *v10; // x19

  if ( (byte_593795B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_593795B = 1;
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
    v7 = (System_String_o *)StringLiteral_12296/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v7 = ListViewPattern_k__BackingField;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v4);
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0, 0) )
  {
    v10 = this->fields.emptyMessageLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v8, v9);
    ListViewPattern_k__BackingField = LocalizationManager__Get(v7, 0);
    if ( v10 )
    {
      UILabel__set_text(v10, ListViewPattern_k__BackingField, 0);
      return;
    }
LABEL_16:
    sub_21FFECC(ListViewPattern_k__BackingField, method);
  }
}


void CharaGraphListViewManager___OnClickSortKind_g__EndSelectSortKind_59_0(
        CharaGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_593795D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593795D = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v6);
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
    sub_21FFECC(this, 0);
  Item = (ListViewItem_o *)CharaGraphListViewObject__GetItem(x, (const MethodInfo *)x);
  return CharaGraphListViewManager__IsClippingOrNoTermination(this, Item, v5);
}


void CharaGraphListViewManager__add_FuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnClick; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListViewManager_o *v11; // x0
  CharaGraphListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5937942 & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_5937942 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(FuncOnClick, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CharaGraphListViewManager_CallbackFunc_c *)v6->klass != CharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.FuncOnClick, v6, FuncOnClick);
    v10 = v9 == (_QWORD)FuncOnClick;
    FuncOnClick = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, CharaGraphListViewManager_CallbackFunc_TypeInfo, v7, v8);
  CharaGraphListViewManager__remove_FuncOnClick(v11, v12, v13);
}


void CharaGraphListViewManager__add_FuncOnMoveEnd(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnMoveEnd; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5937944 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5937944 = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(FuncOnMoveEnd, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.FuncOnMoveEnd, v6, FuncOnMoveEnd);
    v10 = v9 == (_QWORD)FuncOnMoveEnd;
    FuncOnMoveEnd = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  CharaGraphListViewManager__remove_FuncOnMoveEnd(v11, v12, v13);
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

  if ( (byte_5937949 & 1) == 0 )
  {
    sub_21FFC50(&Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
    sub_21FFC50(&System_Func_CharaGraphListViewObject__bool__TypeInfo);
    byte_5937949 = 1;
  }
  v3 = CharaGraphListViewManager__EnumerateObjects(this, method);
  v4 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_CharaGraphListViewObject__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListViewManager__get_ClippingObjectList_b__34_0__,
    0);
  v5 = System_Linq_Enumerable__Where_object_(
         (System_Collections_Generic_IEnumerable_TSource__o *)v3,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          v5,
                                                                          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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

  if ( (byte_5937948 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    byte_5937948 = 1;
  }
  v3 = CharaGraphListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_object_(
                                                                          (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                          (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_5937943 & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_5937943 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(FuncOnClick, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (CharaGraphListViewManager_CallbackFunc_c *)v6->klass != CharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.FuncOnClick, v6, FuncOnClick);
    v10 = v9 == (_QWORD)FuncOnClick;
    FuncOnClick = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, CharaGraphListViewManager_CallbackFunc_TypeInfo, v7, v8);
  CharaGraphListViewManager__add_FuncOnMoveEnd(v11, v12, v13);
}


void CharaGraphListViewManager__remove_FuncOnMoveEnd(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *FuncOnMoveEnd; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_5937945 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    byte_5937945 = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(FuncOnMoveEnd, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (System_Action_c *)v6->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_223767C(&this->fields.FuncOnMoveEnd, v6, FuncOnMoveEnd);
    v10 = v9 == (_QWORD)FuncOnMoveEnd;
    FuncOnMoveEnd = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_220024C(v6, System_Action_TypeInfo, v7, v8);
  CharaGraphListViewManager__get_AlignedBonusFilterInfos(v11, v12);
}


void CharaGraphListViewManager__set_AlignedBonusFilterInfos(
        CharaGraphListViewManager_o *this,
        ListViewSort_BonusFilterInfo_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._AlignedBonusFilterInfos_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._AlignedBonusFilterInfos_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphListViewManager__set_ListViewPattern(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._ListViewPattern_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._ListViewPattern_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphListViewManager__set_OnSetSortButtonImage(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnSetSortButtonImage_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnSetSortButtonImage_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void CharaGraphListViewManager_CallbackFunc___ctor(
        CharaGraphListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF9FE0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF9F88;
}


System_IAsyncResult_o *CharaGraphListViewManager_CallbackFunc__BeginInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = kind;
  v11 = result;
  if ( (byte_593795E & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewManager_ResultKind_TypeInfo);
    byte_593795E = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(CharaGraphListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_594C070, &v11);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v10, callback, object);
}


void CharaGraphListViewManager_CallbackFunc__EndInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593795F & 1) == 0 )
  {
    sub_21FFC50(&CharaGraphListViewManager___c_TypeInfo);
    byte_593795F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(CharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CharaGraphListViewManager___c_TypeInfo->static_fields->__9 = (struct CharaGraphListViewManager___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)CharaGraphListViewManager___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, const MethodInfo *))x->klass->vtable._6_unknown.methodPtr)(
           x,
           x->klass->vtable._6_unknown.method);
}


CharaGraphListViewObject_o *CharaGraphListViewManager___c___EnumerateObjects_b__30_0(
        CharaGraphListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_5937960 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
    byte_5937960 = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  return (CharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                         x,
                                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
}


bool CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._IsSwapChoice_k__BackingField;
}


bool CharaGraphListViewManager___c___GetSwapChoiceArray_b__44_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._IsChoice_k__BackingField;
}


bool CharaGraphListViewManager___c___GetSwapLockArray_b__43_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._IsSwapLock_k__BackingField;
}


bool CharaGraphListViewManager___c___GetSwapLockArray_b__43_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields._IsLock_k__BackingField;
}


bool CharaGraphListViewManager___c___ModifyList_b__39_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x19

  if ( (byte_5937961 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937961 = 1;
  }
  if ( !x )
    sub_21FFECC(this, x);
  viewObject = (UnityEngine_Object_o *)x->fields.viewObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, x);
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
    sub_21FFECC(this, x);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
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

  if ( (byte_5937962 & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_bool___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5937962 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0),
          (_4__this = this->fields.__4__this) == 0) )
    {
LABEL_9:
      sub_21FFECC(_4__this, isDecide);
    }
    ListViewManager__CheckScroll((ListViewManager_o *)_4__this, *((_DWORD *)_4__this + 88), 0);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.endSelectCallback,
    isDecide,
    (const MethodInfo_36CDE1C *)Method_ActionExtensions_Call_bool___);
  _4__this = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return x->fields._CommandCodeId_k__BackingField == this->fields.commandCodeId;
}