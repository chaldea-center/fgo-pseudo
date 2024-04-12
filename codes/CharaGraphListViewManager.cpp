void __fastcall CharaGraphListViewManager___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_RuntimeFieldHandle_o v9; // 0:w1.4

  if ( (byte_42AFD9E & 1) == 0 )
  {
    sub_B52984(&CharaGraphListViewManager_TypeInfo);
    sub_B52984(&ListViewSort_ScaleType___TypeInfo);
    sub_B52984(&Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D);
    byte_42AFD9E = 1;
  }
  v1 = (System_Array_o *)sub_B5299C(ListViewSort_ScaleType___TypeInfo, 3LL);
  v9.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43814272(v1, v9, 0LL);
  static_fields = (BattleServantConfConponent_o *)CharaGraphListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B52920(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  ((void (__fastcall *)(CharaGraphListViewManager_o *, Il2CppMethodPointer))this->klass->vtable._12_AssertionForSerializeField.method)(
    this,
    this->klass->vtable._13_CreateList.methodPtr);
}


void __fastcall CharaGraphListViewManager__ChangeIconScale(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  CharaGraphListViewManager_c *v3; // x0
  int32_t v4; // w0
  ListViewSort_o *scrollBar; // x0
  const MethodInfo *v6; // x1
  struct ListViewSort_ScaleType_array *IconScaleTypeRotation; // x8
  il2cpp_array_size_t max_length; // w10
  int v9; // w9
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  __int64 v13; // x0

  if ( (byte_42AFD9C & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_IndexOf_ListViewSort_ScaleType___);
    sub_B52984(&CharaGraphListViewManager_TypeInfo);
    byte_42AFD9C = 1;
  }
  v3 = CharaGraphListViewManager_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager_TypeInfo);
    v3 = CharaGraphListViewManager_TypeInfo;
  }
  v4 = System_Array__IndexOf_USFGOActorChangePosition_PosSetType_(
         (WellFired_USFGOActorChangePosition_PosSetType_array *)v3->static_fields->IconScaleTypeRotation,
         this->fields.scaleType,
         (const MethodInfo_201BC38 *)Method_System_Array_IndexOf_ListViewSort_ScaleType___);
  scrollBar = (ListViewSort_o *)UnityEngine_Mathf__Max_41525284(0, v4, 0LL);
  IconScaleTypeRotation = CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation;
  if ( !IconScaleTypeRotation )
    goto LABEL_13;
  max_length = IconScaleTypeRotation->max_length;
  v9 = ((int)scrollBar + 1) % (int)max_length;
  if ( v9 >= max_length )
  {
    v13 = sub_B52A88(scrollBar);
    sub_B52A28(v13, 0LL);
  }
  this->fields.scaleType = IconScaleTypeRotation->m_Items[v9 + 1];
  CharaGraphListViewManager__SelectSeedByScaleType(this, v6);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_13;
  sort->fields.iconScaleKind = this->fields.scaleType;
  scrollBar = this->fields.sort;
  if ( !scrollBar
    || (ListViewSort__Save(scrollBar, 0LL),
        CharaGraphListViewManager__ModifyList(this, 1, 1, v11),
        this->fields.initMode = 2,
        ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL),
        CharaGraphListViewManager__RequestListObject(this, 2, v12),
        (scrollBar = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (scrollBar = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B52A5C(scrollBar, v6);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 1, 0LL);
}


void __fastcall CharaGraphListViewManager__CreateList(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *listViewPattern,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1
  ListViewSort_o *ListViewPattern_k__BackingField; // x0
  struct ListViewSort_o *v13; // x0
  struct ListViewSort_o **p_sort; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *itemList; // x21
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_42AFD8D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__AddRange__);
    byte_42AFD8D = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields._ListViewPattern_k__BackingField = listViewPattern;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ListViewPattern_k__BackingField,
    (System_Int32_array **)listViewPattern,
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
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v13,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  ListViewPattern_k__BackingField = this->fields.sort;
  if ( !ListViewPattern_k__BackingField
    || (ListViewSort__Load(ListViewPattern_k__BackingField, 0LL),
        (ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField) == 0LL)
    || (itemList = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this->fields.itemList,
        ListViewPattern_k__BackingField = (ListViewSort_o *)((__int64 (__fastcall *)(ListViewSort_o *, const char *))ListViewPattern_k__BackingField->klass[1]._1.gc_desc)(
                                                              ListViewPattern_k__BackingField,
                                                              ListViewPattern_k__BackingField->klass[1]._1.name),
        !itemList)
    || (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
          itemList,
          (System_Collections_Generic_IEnumerable_T__o *)ListViewPattern_k__BackingField,
          (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        !*p_sort) )
  {
LABEL_9:
    sub_B52A5C(ListViewPattern_k__BackingField, v11);
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
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x23
  CharaGraphListViewManager___c_c *v21; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__49_0; // x24
  Il2CppObject *v24; // x25
  struct CharaGraphListViewManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  CharaGraphListViewManager___c_c *v42; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x20
  struct CharaGraphListViewManager___c_StaticFields *v44; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__49_2; // x21
  Il2CppObject *v46; // x22
  struct CharaGraphListViewManager___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Int64_array *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7

  if ( (byte_42AFD92 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_long___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_B52984(&Method_System_Func_CharaGraphListViewItemBase__long___ctor__);
    sub_B52984(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    sub_B52984(&System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    sub_B52984(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_0__);
    sub_B52984(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_2__);
    sub_B52984(&Method_CharaGraphListViewManager___c__DisplayClass49_0__DistributeObjectIdByMatchCondOrNot_b__1__);
    sub_B52984(&CharaGraphListViewManager___c__DisplayClass49_0_TypeInfo);
    sub_B52984(&CharaGraphListViewManager___c_TypeInfo);
    byte_42AFD92 = 1;
  }
  v10 = sub_B52A54(CharaGraphListViewManager___c__DisplayClass49_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass49_0___ctor((CharaGraphListViewManager___c__DisplayClass49_0_o *)v10, 0LL);
  if ( !v10 )
    sub_B52A5C(v11, v12);
  *(_QWORD *)(v10 + 16) = cond;
  sub_B52920((BattleServantConfConponent_o *)(v10 + 16), (System_Int32_array **)cond, v13, v14, v15, v16, v17, v18);
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemEnumerable,
                                                               (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v20 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v19,
          *(System_Func_TSource__bool__o **)(v10 + 16),
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v21 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v21 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__49_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B52A54(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__49_0,
      v24,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_0__,
      (const MethodInfo_2BCA428 *)Method_System_Func_CharaGraphListViewItemBase__long___ctor__);
    v25 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v25->__9__49_0 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__49_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v25->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v20,
                                                               (System_Func_TSource__TResult__o *)_9__49_0,
                                                               (const MethodInfo_1B6A050 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v33 = System_Linq_Enumerable__ToArray_long_(
          v32,
          (const MethodInfo_1B6E584 *)Method_System_Linq_Enumerable_ToArray_long___);
  *trueDataArray = v33;
  sub_B52920((BattleServantConfConponent_o *)trueDataArray, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v40,
    (Il2CppObject *)v10,
    Method_CharaGraphListViewManager___c__DisplayClass49_0__DistributeObjectIdByMatchCondOrNot_b__1__,
    (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
  v41 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v19,
          (System_Func_TSource__bool__o *)v40,
          (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v42 = CharaGraphListViewManager___c_TypeInfo;
  v43 = v41;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v42 = CharaGraphListViewManager___c_TypeInfo;
  }
  v44 = v42->static_fields;
  _9__49_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v44->__9__49_2;
  if ( !_9__49_2 )
  {
    if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v42);
      v44 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)v44->__9;
    _9__49_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B52A54(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__49_2,
      v46,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_2__,
      (const MethodInfo_2BCA428 *)Method_System_Func_CharaGraphListViewItemBase__long___ctor__);
    v47 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v47->__9__49_2 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__49_2;
    sub_B52920(
      (BattleServantConfConponent_o *)&v47->__9__49_2,
      (System_Int32_array **)_9__49_2,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  v54 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v43,
                                                               (System_Func_TSource__TResult__o *)_9__49_2,
                                                               (const MethodInfo_1B6A050 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v55 = System_Linq_Enumerable__ToArray_long_(
          v54,
          (const MethodInfo_1B6E584 *)Method_System_Linq_Enumerable_ToArray_long___);
  *falseDataArray = v55;
  sub_B52920((BattleServantConfConponent_o *)falseDataArray, (System_Int32_array **)v55, v56, v57, v58, v59, v60, v61);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewManager__EnumerateItems(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AFD89 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
    byte_42AFD89 = 1;
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                   (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *__fastcall CharaGraphListViewManager__EnumerateObjects(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_T__o *v3; // x19
  CharaGraphListViewManager___c_c *v4; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__34_0; // x20
  Il2CppObject *v7; // x21
  struct CharaGraphListViewManager___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42AFD8A & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_ExcludeNull_GameObject___);
    sub_B52984(&Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
    sub_B52984(&Method_System_Func_GameObject__CharaGraphListViewObject___ctor__);
    sub_B52984(&System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager___c__EnumerateObjects_b__34_0__);
    sub_B52984(&CharaGraphListViewManager___c_TypeInfo);
    byte_42AFD8A = 1;
  }
  v3 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
         (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
         (const MethodInfo_1A42004 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v4 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v4 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__34_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B52A54(System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__34_0,
      v7,
      Method_CharaGraphListViewManager___c__EnumerateObjects_b__34_0__,
      (const MethodInfo_2BCA808 *)Method_System_Func_GameObject__CharaGraphListViewObject___ctor__);
    v8 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v8->__9__34_0 = (struct System_Func_GameObject__CharaGraphListViewObject__o *)_9__34_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v8->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v3,
                                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                                 (const MethodInfo_1B6A2FC *)Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
}


int64_t __fastcall CharaGraphListViewManager__GetAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  CharaGraphListViewManager___c__DisplayClass66_0_o *v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_IEnumerable_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x20

  if ( (byte_42AFD9A & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___);
    sub_B52984(&Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___);
    sub_B52984(&Method_System_Func_CharaGraphServantListViewItem__bool___ctor__);
    sub_B52984(&System_Func_CharaGraphServantListViewItem__bool__TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager___c__DisplayClass66_0__GetAmountSortValue_b__0__);
    sub_B52984(&CharaGraphListViewManager___c__DisplayClass66_0_TypeInfo);
    byte_42AFD9A = 1;
  }
  v5 = (CharaGraphListViewManager___c__DisplayClass66_0_o *)sub_B52A54(CharaGraphListViewManager___c__DisplayClass66_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass66_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.svtId = svtId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                              v8,
                                                              (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___);
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphServantListViewItem__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass66_0__GetAmountSortValue_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphServantListViewItem__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_1B5FB84 *)Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___);
}


int64_t __fastcall CharaGraphListViewManager__GetCommandCodeAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  CharaGraphListViewManager___c__DisplayClass67_0_o *v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_IEnumerable_o *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x20

  if ( (byte_42AFD9B & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
    sub_B52984(&Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
    sub_B52984(&Method_System_Func_CharaGraphCommandCodeListViewItem__bool___ctor__);
    sub_B52984(&System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager___c__DisplayClass67_0__GetCommandCodeAmountSortValue_b__0__);
    sub_B52984(&CharaGraphListViewManager___c__DisplayClass67_0_TypeInfo);
    byte_42AFD9B = 1;
  }
  v5 = (CharaGraphListViewManager___c__DisplayClass67_0_o *)sub_B52A54(CharaGraphListViewManager___c__DisplayClass67_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass67_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.commandCodeId = commandCodeId;
  v8 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                              v8,
                                                              (const MethodInfo_1B66108 *)Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass67_0__GetCommandCodeAmountSortValue_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphCommandCodeListViewItem__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           v9,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_1B5FB84 *)Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
}


CharaGraphListViewItemBase_o *__fastcall CharaGraphListViewManager__GetItem(
        CharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CharaGraphListViewItemBase_o *result; // x0
  __int64 v6; // x10

  if ( (byte_42AFD8F & 1) == 0 )
  {
    sub_B52984(&Method_BasicHelper_IndexValue_ListViewItem___);
    sub_B52984(&CharaGraphListViewItemBase_TypeInfo);
    byte_42AFD8F = 1;
  }
  result = (CharaGraphListViewItemBase_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                             (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                             index,
                                             0LL,
                                             (const MethodInfo_1A43F54 *)Method_BasicHelper_IndexValue_ListViewItem___);
  if ( result )
  {
    v6 = *(&CharaGraphListViewItemBase_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      if ( (CharaGraphListViewItemBase_c *)result->klass->_2.typeHierarchy[v6 - 1] != CharaGraphListViewItemBase_TypeInfo )
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
    sub_B52A5C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall CharaGraphListViewManager__GetSwapChoiceArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **choiceArray,
        System_Int64_array **unChoiceArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x22
  CharaGraphListViewManager___c_c *v8; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__48_0; // x23
  Il2CppObject *v11; // x24
  struct CharaGraphListViewManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CharaGraphListViewManager_o *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x5
  CharaGraphListViewManager___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v23; // x22
  struct CharaGraphListViewManager___c_StaticFields *v24; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__48_1; // x23
  Il2CppObject *v26; // x24
  struct CharaGraphListViewManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42AFD91 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_B52984(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    sub_B52984(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_0__);
    sub_B52984(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_1__);
    sub_B52984(&CharaGraphListViewManager___c_TypeInfo);
    byte_42AFD91 = 1;
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(
                                                              this,
                                                              (const MethodInfo *)choiceArray);
  v8 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v8 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__48_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__48_0,
      v11,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v12 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v12->__9__48_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__48_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->__9__48_0,
      (System_Int32_array **)_9__48_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                         v7,
                                         (System_Func_TSource__bool__o *)_9__48_0,
                                         (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v22 = CharaGraphListViewManager___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v19;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v22 = CharaGraphListViewManager___c_TypeInfo;
  }
  v24 = v22->static_fields;
  _9__48_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v24->__9__48_1;
  if ( !_9__48_1 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v24 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__48_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__48_1,
      v26,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v27 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v27->__9__48_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__48_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v27->__9__48_1,
      (System_Int32_array **)_9__48_1,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !this )
    sub_B52A5C(v19, v20);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v19,
    unChoiceArray,
    choiceArray,
    v23,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__48_1,
    v21);
}


void __fastcall CharaGraphListViewManager__GetSwapLockArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **lockArray,
        System_Int64_array **unlockArray,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x22
  CharaGraphListViewManager___c_c *v8; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__47_0; // x23
  Il2CppObject *v11; // x24
  struct CharaGraphListViewManager___c_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CharaGraphListViewManager_o *v19; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x5
  CharaGraphListViewManager___c_c *v22; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v23; // x22
  struct CharaGraphListViewManager___c_StaticFields *v24; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__47_1; // x23
  Il2CppObject *v26; // x24
  struct CharaGraphListViewManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42AFD90 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_B52984(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    sub_B52984(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_0__);
    sub_B52984(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_1__);
    sub_B52984(&CharaGraphListViewManager___c_TypeInfo);
    byte_42AFD90 = 1;
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(
                                                              this,
                                                              (const MethodInfo *)lockArray);
  v8 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v8 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( (BYTE3(v8->vtable._0_Equals.methodPtr) & 4) != 0 && !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__47_0,
      v11,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_0__,
      (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v12 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v12->__9__47_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__47_0;
    sub_B52920(
      (BattleServantConfConponent_o *)&v12->__9__47_0,
      (System_Int32_array **)_9__47_0,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  v19 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                         v7,
                                         (System_Func_TSource__bool__o *)_9__47_0,
                                         (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v22 = CharaGraphListViewManager___c_TypeInfo;
  v23 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v19;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v22 = CharaGraphListViewManager___c_TypeInfo;
  }
  v24 = v22->static_fields;
  _9__47_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v24->__9__47_1;
  if ( !_9__47_1 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v24 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)v24->__9;
    _9__47_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__47_1,
      v26,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_1__,
      (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v27 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v27->__9__47_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__47_1;
    sub_B52920(
      (BattleServantConfConponent_o *)&v27->__9__47_1,
      (System_Int32_array **)_9__47_1,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  if ( !this )
    sub_B52A5C(v19, v20);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v19,
    unlockArray,
    lockArray,
    v23,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__47_1,
    v21);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager__InvokeOnClick(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        int32_t resultKind,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CharaGraphListViewManager_CallbackFunc_o *FuncOnClick; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  int32_t Index; // w2

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0LL;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.FuncOnClick,
    0LL,
    *(System_String_array ***)&resultKind,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( FuncOnClick )
  {
    if ( !obj )
      sub_B52A5C(v11, v12);
    Index = ListViewObject__get_Index(obj, 0LL);
    CharaGraphListViewManager_CallbackFunc__Invoke(FuncOnClick, resultKind, Index, 0LL);
  }
}


bool __fastcall CharaGraphListViewManager__IsClippingOrNoTermination(
        CharaGraphListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  if ( !item )
    sub_B52A5C(this, 0LL);
  return !item->fields.isTermination || ListViewManager__ClippingItem_23551160((ListViewManager_o *)this, item, 0LL);
}


void __fastcall CharaGraphListViewManager__JumpItemUserId(
        CharaGraphListViewManager_o *this,
        int64_t targetObjectId,
        const MethodInfo *method)
{
  CharaGraphListViewManager___c__DisplayClass60_0_o *v5; // x21
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x22
  WarBoardData_SquareRangeSearch_o *v10; // x0

  if ( (byte_42AFD95 & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
    sub_B52984(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    sub_B52984(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager___c__DisplayClass60_0__JumpItemUserId_b__0__);
    sub_B52984(&CharaGraphListViewManager___c__DisplayClass60_0_TypeInfo);
    byte_42AFD95 = 1;
  }
  v5 = (CharaGraphListViewManager___c__DisplayClass60_0_o *)sub_B52A54(CharaGraphListViewManager___c__DisplayClass60_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass60_0___ctor(v5, 0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  v5->fields.targetObjectId = targetObjectId;
  v8 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(this, v7);
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass60_0__JumpItemUserId_b__0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
  v10 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          v8,
          (System_Func_TSource__bool__o *)v9,
          (const MethodInfo_1B63978 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v10 )
    ListViewManager__JumpItem((ListViewManager_o *)this, v10->fields.range, 0LL);
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  System_Collections_Generic_IEnumerable_T__o *v18; // x22
  char v19; // w28
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v20; // x25
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v27; // x23
  CharaGraphListViewManager___c_c *v28; // x0
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__43_1; // x23
  Il2CppObject *v31; // x24
  struct CharaGraphListViewManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Collections_Generic_IEnumerable_T__o *v39; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v40; // x23

  if ( (byte_42AFD8E & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_CharaGraphListViewItemBase___ctor__);
    sub_B52984(&System_Action_CharaGraphListViewItemBase__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
    sub_B52984(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
    sub_B52984(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    sub_B52984(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    sub_B52984(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager___c__ModifyList_b__43_1__);
    sub_B52984(&Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__0__);
    sub_B52984(&Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__2__);
    sub_B52984(&CharaGraphListViewManager___c__DisplayClass43_0_TypeInfo);
    sub_B52984(&CharaGraphListViewManager___c_TypeInfo);
    byte_42AFD8E = 1;
  }
  v7 = sub_B52A54(CharaGraphListViewManager___c__DisplayClass43_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass43_0___ctor((CharaGraphListViewManager___c__DisplayClass43_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  *(_QWORD *)(v7 + 24) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(this, v16);
  v18 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                         v17,
                                                         (const MethodInfo_1B6E610 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v19 = ~isIconSizeChange;
  v20 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_B52A54(CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v20, !isIconSizeChange, 0LL);
  *(_QWORD *)(v7 + 16) = v20;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
  v27 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_CharaGraphListViewItemBase__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v27,
    (Il2CppObject *)v7,
    Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_CharaGraphListViewItemBase___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v18,
    (System_Action_T__o *)v27,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  if ( (v19 & 1) == 0 )
  {
    v28 = CharaGraphListViewManager___c_TypeInfo;
    if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
      v28 = CharaGraphListViewManager___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__43_1,
        v31,
        Method_CharaGraphListViewManager___c__ModifyList_b__43_1__,
        (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
      v32 = CharaGraphListViewManager___c_TypeInfo->static_fields;
      v32->__9__43_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1;
      sub_B52920(
        (BattleServantConfConponent_o *)&v32->__9__43_1,
        (System_Int32_array **)_9__43_1,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v18,
                                                           (System_Func_TSource__bool__o *)_9__43_1,
                                                           (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    v40 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_CharaGraphListViewItemBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v40,
      (Il2CppObject *)v7,
      Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__2__,
      (const MethodInfo_2627780 *)Method_System_Action_CharaGraphListViewItemBase___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v39,
      (System_Action_T__o *)v40,
      (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
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

  if ( (byte_42AFD99 & 1) == 0 )
  {
    sub_B52984(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
    byte_42AFD99 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickBonusFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickBonusFilterKind__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B52A5C(0LL, v5);
  ListViewSort__IncBonusKind2(
    sort,
    this->fields._BonusEventIds_k__BackingField,
    this->fields._ServantFilterIds_k__BackingField,
    0LL,
    0LL,
    0LL,
    0LL);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickFilterKind(
        CharaGraphListViewManager_o *this,
        System_Action_bool__o *endSelectCallback,
        const MethodInfo *method)
{
  __int64 v5; // x20
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v23; // x21
  int32_t v24; // w0
  ListViewSort_o *sort; // x19
  int32_t v26; // w22
  ServantFilterSelectMenu_CallbackFunc_o *v27; // x23

  if ( (byte_42AFD96 & 1) == 0 )
  {
    sub_B52984(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager_OnClickFilterKind__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_CharaGraphListViewManager___c__DisplayClass61_0__OnClickFilterKind_g__EndSelectFilterKind_0__);
    sub_B52984(&CharaGraphListViewManager___c__DisplayClass61_0_TypeInfo);
    byte_42AFD96 = 1;
  }
  v5 = sub_B52A54(CharaGraphListViewManager___c__DisplayClass61_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass61_0___ctor((CharaGraphListViewManager___c__DisplayClass61_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = endSelectCallback;
  sub_B52920(
    (BattleServantConfConponent_o *)(v5 + 24),
    (System_Int32_array **)endSelectCallback,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = Method_CharaGraphListViewManager_OnClickFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickFilterKind__ + 75) & 2) != 0 )
    v20 = (_QWORD *)sub_B5298C(Method_CharaGraphListViewManager_OnClickFilterKind__);
  v21 = (System_Reflection_MethodBase_o *)sub_B52968(v20, v20[3]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v23 = (CommonUI_o *)Instance,
        v24 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.methodPtr),
        sort = this->fields.sort,
        v26 = v24,
        v27 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B52A54(ServantFilterSelectMenu_CallbackFunc_TypeInfo),
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v27,
          (Il2CppObject *)v5,
          Method_CharaGraphListViewManager___c__DisplayClass61_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
          0LL),
        !v23) )
  {
LABEL_9:
    sub_B52A5C(Instance, v7);
  }
  CommonUI__OpenServantFilterSelectMenu(v23, v26, sort, v27, -1, 0LL);
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

  if ( (byte_42AFD98 & 1) == 0 )
  {
    sub_B52984(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
    byte_42AFD98 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortAscendingOrder__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B52A5C(v5, v6);
  sort->fields.isAscendingOrder ^= 1u;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickSortKind(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  WebViewManager_o *Instance; // x0
  __int64 v6; // x1
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v8; // x20
  int32_t v9; // w0
  ListViewSort_o *sort; // x21
  int32_t v11; // w22
  ServantSortSelectMenu_CallbackFunc_o *v12; // x23

  if ( (byte_42AFD97 & 1) == 0 )
  {
    sub_B52984(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager_OnClickSortKind__);
    sub_B52984(&Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_62_0__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFD97 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortKind__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B5298C(Method_CharaGraphListViewManager_OnClickSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v8 = (CommonUI_o *)Instance,
        v9 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.method)(
               this->fields._ListViewPattern_k__BackingField,
               ListViewPattern_k__BackingField->klass->vtable._9_GetItemDrawPattern.methodPtr),
        sort = this->fields.sort,
        v11 = v9,
        v12 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B52A54(ServantSortSelectMenu_CallbackFunc_TypeInfo),
        ServantSortSelectMenu_CallbackFunc___ctor(
          v12,
          (Il2CppObject *)this,
          Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_62_0__,
          0LL),
        !v8) )
  {
    sub_B52A5C(Instance, v6);
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
  CharaGraphListViewManager___c__DisplayClass54_0_o *v5; // x21
  UIScrollView_o *v6; // x0
  const MethodInfo *v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v9; // x22
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_42AFD94 & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_CharaGraphListViewObject___ctor__);
    sub_B52984(&System_Action_CharaGraphListViewObject__TypeInfo);
    sub_B52984(&Method_BasicHelper_ForEach_CharaGraphListViewObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_CharaGraphListViewManager___c__DisplayClass54_0__RequestListObject_b__0__);
    sub_B52984(&CharaGraphListViewManager___c__DisplayClass54_0_TypeInfo);
    byte_42AFD94 = 1;
  }
  v5 = (CharaGraphListViewManager___c__DisplayClass54_0_o *)sub_B52A54(CharaGraphListViewManager___c__DisplayClass54_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass54_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_14;
  v5->fields.mode = mode;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphListViewManager__EnumerateObjects(this, v7);
  v9 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B52A54(System_Action_CharaGraphListViewObject__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v9,
    (Il2CppObject *)v5,
    Method_CharaGraphListViewManager___c__DisplayClass54_0__RequestListObject_b__0__,
    (const MethodInfo_2627780 *)Method_System_Action_CharaGraphListViewObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v8,
    (System_Action_T__o *)v9,
    (const MethodInfo_1A43210 *)Method_BasicHelper_ForEach_CharaGraphListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_14;
    ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v6->klass->vtable._8_UpdateScrollbars.method)(
      v6,
      1LL,
      v6->klass->vtable._9_SetDragAmount.methodPtr);
    v6 = this->fields.scrollView;
    if ( !v6 )
      goto LABEL_14;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v6->klass->vtable._6_get_shouldMoveVertically.method)(
            v6,
            v6->klass->vtable._7_get_shouldMove.methodPtr) & 1) != 0 )
    {
      v6 = this->fields.scrollView;
      if ( v6 )
      {
        UIScrollView__UpdatePosition(v6, 0LL);
        goto LABEL_13;
      }
LABEL_14:
      sub_B52A5C(v6, v7);
    }
  }
LABEL_13:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.FuncOnMoveEnd, 0LL, v11, v12, v13, v14, v15, v16);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.seed, (System_Int32_array **)v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall CharaGraphListViewManager__SetBonusFilterIds(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *ListViewPattern_k__BackingField; // x0
  struct System_Int32_array *v4; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_Int32_array *v11; // x0
  System_Collections_ICollection_o **p_ServantFilterIds_k__BackingField; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct ListViewSort_o *sort; // x22
  bool v20; // w8

  ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v4 = (struct System_Int32_array *)((__int64 (__fastcall *)(ListViewSort_o *, void *))ListViewPattern_k__BackingField->klass[1]._1.klass)(
                                            ListViewPattern_k__BackingField,
                                            ListViewPattern_k__BackingField->klass[1]._1.fields),
        this->fields._BonusEventIds_k__BackingField = v4,
        sub_B52920(
          (BattleServantConfConponent_o *)&this->fields._BonusEventIds_k__BackingField,
          (System_Int32_array **)v4,
          v5,
          v6,
          v7,
          v8,
          v9,
          v10),
        (ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(ListViewPattern_k__BackingField, method);
  }
  v11 = (struct System_Int32_array *)((__int64 (__fastcall *)(ListViewSort_o *, void *))ListViewPattern_k__BackingField->klass[1]._1.events)(
                                       ListViewPattern_k__BackingField,
                                       ListViewPattern_k__BackingField->klass[1]._1.properties);
  p_ServantFilterIds_k__BackingField = (System_Collections_ICollection_o **)&this->fields._ServantFilterIds_k__BackingField;
  this->fields._ServantFilterIds_k__BackingField = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ServantFilterIds_k__BackingField,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  sort = this->fields.sort;
  ListViewPattern_k__BackingField = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                                                        (System_Collections_ICollection_o *)this->fields._BonusEventIds_k__BackingField,
                                                        0LL);
  if ( ((unsigned __int8)ListViewPattern_k__BackingField & 1) != 0 )
  {
    ListViewPattern_k__BackingField = (ListViewSort_o *)BasicHelper__IsNullOrEmpty(
                                                          *p_ServantFilterIds_k__BackingField,
                                                          0LL);
    v20 = ((unsigned __int8)ListViewPattern_k__BackingField & 1) == 0;
    if ( !sort )
      goto LABEL_11;
  }
  else
  {
    v20 = 1;
    if ( !sort )
      goto LABEL_11;
  }
  sort->fields.isBonusKind = v20;
  ListViewPattern_k__BackingField = this->fields.sort;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_11;
  if ( ListViewPattern_k__BackingField->fields.isBonusKind )
    ListViewSort__AlignBonusKind2(
      ListViewPattern_k__BackingField,
      this->fields._BonusEventIds_k__BackingField,
      (System_Int32_array *)*p_ServantFilterIds_k__BackingField,
      0LL,
      0LL,
      0LL,
      0LL);
}


void __fastcall CharaGraphListViewManager__SetFuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.FuncOnClick = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.FuncOnClick,
    (System_Int32_array **)callback,
    (System_String_array **)method,
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w21
  const MethodInfo *v11; // x2
  int32_t v12; // w1

  this->fields.FuncOnClick = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.FuncOnClick,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.initMode = mode;
  if ( mode == 2 )
    v10 = 2;
  else
    v10 = 1;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 3 )
    v12 = 3;
  else
    v12 = v10;
  CharaGraphListViewManager__RequestListObject(this, v12, v11);
}


void __fastcall CharaGraphListViewManager__SetMode_24876236(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  bool v4; // w1
  int v6; // w21
  const MethodInfo *v7; // x2
  int32_t v8; // w1

  this->fields.initMode = mode;
  v4 = mode == 2;
  if ( v4 )
    v6 = 2;
  else
    v6 = 1;
  ListViewManager__set_IsInput((ListViewManager_o *)this, v4, 0LL);
  if ( mode == 3 )
    v8 = 3;
  else
    v8 = v6;
  CharaGraphListViewManager__RequestListObject(this, v8, v7);
}


void __fastcall CharaGraphListViewManager__SetMode_24894920(
        CharaGraphListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w21
  const MethodInfo *v11; // x2
  int32_t v12; // w1

  this->fields.FuncOnMoveEnd = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.FuncOnMoveEnd,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.initMode = mode;
  if ( mode == 2 )
    v10 = 2;
  else
    v10 = 1;
  ListViewManager__set_IsInput((ListViewManager_o *)this, mode == 2, 0LL);
  if ( mode == 3 )
    v12 = 3;
  else
    v12 = v10;
  CharaGraphListViewManager__RequestListObject(this, v12, v11);
}


void __fastcall CharaGraphListViewManager__SetObjectItem(
        CharaGraphListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v6; // x10
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  if ( (byte_42AFD93 & 1) == 0 )
  {
    sub_B52984(&CharaGraphListViewObject_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFD93 = 1;
  }
  if ( obj )
  {
    v6 = *(&CharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&obj->klass->_2.bitflags2 + 1) >= (unsigned int)v6 )
    {
      if ( (CharaGraphListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CharaGraphListViewObject_TypeInfo )
        obj = 0LL;
    }
    else
    {
      obj = 0LL;
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !obj )
      sub_B52A5C(v7, v8);
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
    sub_B52A5C(0LL, value);
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

  if ( (byte_42AFD9D & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/);
    byte_42AFD9D = 1;
  }
  ListViewPattern_k__BackingField = (System_String_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_18;
  ListViewPattern_k__BackingField = (System_String_o *)((__int64 (__fastcall *)(System_String_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._5_Clone.method)(
                                                         ListViewPattern_k__BackingField,
                                                         ListViewPattern_k__BackingField->klass->vtable._6_GetTypeCode.methodPtr);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_18;
  emptyMessageLabel = (UnityEngine_Object_o *)this->fields.emptyMessageLabel;
  if ( itemList->fields._size >= 1 )
    v6 = (System_String_o *)StringLiteral_11968/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v6 = ListViewPattern_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v7 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ListViewPattern_k__BackingField = LocalizationManager__Get(v6, 0LL);
    if ( v7 )
    {
      UILabel__set_text(v7, ListViewPattern_k__BackingField, 0LL);
      return;
    }
LABEL_18:
    sub_B52A5C(ListViewPattern_k__BackingField, method);
  }
}


void __fastcall CharaGraphListViewManager___OnClickSortKind_g__EndSelectSortKind_62_0(
        CharaGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42AFD9F & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AFD9F = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v6);
  CommonUI__CloseServantSortSelectMenu(Instance, 0LL, 0LL);
}


bool __fastcall CharaGraphListViewManager___get_ClippingObjectList_b__38_0(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewObject_o *x,
        const MethodInfo *method)
{
  ListViewItem_o *Item; // x1
  const MethodInfo *v5; // x2

  if ( !x )
    sub_B52A5C(this, 0LL);
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

  if ( (byte_42AFD85 & 1) == 0 )
  {
    sub_B52984(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_42AFD85 = 1;
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
    v8 = sub_B4739C(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListViewManager_o *)sub_B52D50(v7);
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

  if ( (byte_42AFD87 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AFD87 = 1;
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
    v8 = sub_B4739C(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListViewManager_o *)sub_B52D50(v7);
  CharaGraphListViewManager__remove_FuncOnMoveEnd(v10, v11, v12);
}


System_Int32_array *__fastcall CharaGraphListViewManager__get_BonusEventIds(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._BonusEventIds_k__BackingField;
}


System_Collections_Generic_List_CharaGraphListViewObject__o *__fastcall CharaGraphListViewManager__get_ClippingObjectList(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v4; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_42AFD8C & 1) == 0 )
  {
    sub_B52984(&Method_CharaGraphListViewManager__get_ClippingObjectList_b__38_0__);
    sub_B52984(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    sub_B52984(&Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
    sub_B52984(&Method_System_Func_CharaGraphListViewObject__bool___ctor__);
    sub_B52984(&System_Func_CharaGraphListViewObject__bool__TypeInfo);
    byte_42AFD8C = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateObjects(this, method);
  v4 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B52A54(System_Func_CharaGraphListViewObject__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v4,
    (Il2CppObject *)this,
    Method_CharaGraphListViewManager__get_ClippingObjectList_b__38_0__,
    (const MethodInfo_2BC90BC *)Method_System_Func_CharaGraphListViewObject__bool___ctor__);
  v5 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
         v3,
         (System_Func_TSource__bool__o *)v4,
         (const MethodInfo_1B72CC0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v5,
                                                                          (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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
  System_Collections_Generic_IEnumerable_TSource__o *v3; // x0

  if ( (byte_42AFD8B & 1) == 0 )
  {
    sub_B52984(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
    byte_42AFD8B = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v3,
                                                                          (const MethodInfo_1B714E4 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
}


System_Action_o *__fastcall CharaGraphListViewManager__get_OnSetSortButtonImage(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._OnSetSortButtonImage_k__BackingField;
}


System_Int32_array *__fastcall CharaGraphListViewManager__get_ServantFilterIds(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields._ServantFilterIds_k__BackingField;
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

  if ( (byte_42AFD86 & 1) == 0 )
  {
    sub_B52984(&CharaGraphListViewManager_CallbackFunc_TypeInfo);
    byte_42AFD86 = 1;
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
    v8 = sub_B4739C(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListViewManager_o *)sub_B52D50(v7);
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

  if ( (byte_42AFD88 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    byte_42AFD88 = 1;
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
    v8 = sub_B4739C(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListViewManager_o *)sub_B52D50(v7);
  CharaGraphListViewManager__get_BonusEventIds(v10, v11);
}


void __fastcall CharaGraphListViewManager__set_BonusEventIds(
        CharaGraphListViewManager_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._BonusEventIds_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._BonusEventIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ListViewPattern_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ListViewPattern_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnSetSortButtonImage_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._OnSetSortButtonImage_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CharaGraphListViewManager__set_ServantFilterIds(
        CharaGraphListViewManager_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._ServantFilterIds_k__BackingField = value;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._ServantFilterIds_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall CharaGraphListViewManager_CallbackFunc__BeginInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v11; // [xsp+18h] [xbp-28h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = result;
  v12 = kind;
  if ( (byte_42AD6A0 & 1) == 0 )
  {
    sub_B52984(&int_TypeInfo);
    sub_B52984(&CharaGraphListViewManager_ResultKind_TypeInfo);
    byte_42AD6A0 = 1;
  }
  v10[2] = 0LL;
  v10[0] = j_il2cpp_value_box_0(CharaGraphListViewManager_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_B52928(this, v10, callback, object);
}


void __fastcall CharaGraphListViewManager_CallbackFunc__EndInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager_CallbackFunc__Invoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  CharaGraphListViewManager_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  CharaGraphListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  CharaGraphListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CharaGraphListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B529B4(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)result, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)result, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B529AC(v23);
      v26 = sub_B52DB0(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AEB880(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B52A34(v18, v23);
        (*v20)(v22, v28, (unsigned int)result, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AEB880(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)result,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)result,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)result, v23);
    goto LABEL_38;
  }
}


void __fastcall CharaGraphListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42AD69B & 1) == 0 )
  {
    sub_B52984(&CharaGraphListViewManager___c_TypeInfo);
    byte_42AD69B = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(CharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CharaGraphListViewManager___c_o *)v1;
  sub_B52920(static_fields);
}


void __fastcall CharaGraphListViewManager___c___ctor(CharaGraphListViewManager___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int64_t __fastcall CharaGraphListViewManager___c___DistributeObjectIdByMatchCondOrNot_b__49_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr);
}


int64_t __fastcall CharaGraphListViewManager___c___DistributeObjectIdByMatchCondOrNot_b__49_2(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr);
}


CharaGraphListViewObject_o *__fastcall CharaGraphListViewManager___c___EnumerateObjects_b__34_0(
        CharaGraphListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_42AD69C & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_B52984(&Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
    byte_42AD69C = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  return (CharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         x,
                                         (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__48_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__48_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields._IsChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__47_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields._IsSwapLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__47_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields._IsLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___ModifyList_b__43_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x19

  if ( (byte_42AD69D & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD69D = 1;
  }
  if ( !x )
    sub_B52A5C(this, x);
  viewObject = (UnityEngine_Object_o *)x->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass43_0___ctor(
        CharaGraphListViewManager___c__DisplayClass43_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass43_0___ModifyList_b__0(
        CharaGraphListViewManager___c__DisplayClass43_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  CharaGraphListViewItemBase__Modify(x, this->fields.args, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass43_0___ModifyList_b__2(
        CharaGraphListViewManager___c__DisplayClass43_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  struct CharaGraphListViewManager_o *_4__this; // x8

  if ( !x
    || (_4__this = this->fields.__4__this) == 0LL
    || (this = (CharaGraphListViewManager___c__DisplayClass43_0_o *)x->fields.viewObject) == 0LL )
  {
    sub_B52A5C(this, x);
  }
  ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)x, _4__this->fields.seed, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass49_0___ctor(
        CharaGraphListViewManager___c__DisplayClass49_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphListViewManager___c__DisplayClass49_0___DistributeObjectIdByMatchCondOrNot_b__1(
        CharaGraphListViewManager___c__DisplayClass49_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  struct System_Func_CharaGraphListViewItemBase__bool__o *cond; // x0

  if ( (byte_42AD69E & 1) == 0 )
  {
    sub_B52984(&Method_System_Func_CharaGraphListViewItemBase__bool__Invoke__);
    byte_42AD69E = 1;
  }
  cond = this->fields.cond;
  if ( !cond )
    sub_B52A5C(0LL, x);
  return !System_Func_BattleBuffData_BuffData__bool___Invoke(
            (System_Func_BattleBuffData_BuffData__bool__o *)cond,
            (BattleBuffData_BuffData_o *)x,
            (const MethodInfo_2BC90D0 *)Method_System_Func_CharaGraphListViewItemBase__bool__Invoke__);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass54_0___ctor(
        CharaGraphListViewManager___c__DisplayClass54_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass54_0___RequestListObject_b__0(
        CharaGraphListViewManager___c__DisplayClass54_0_o *this,
        CharaGraphListViewObject_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  CharaGraphListViewObject__Init(x, this->fields.mode, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass60_0___ctor(
        CharaGraphListViewManager___c__DisplayClass60_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphListViewManager___c__DisplayClass60_0___JumpItemUserId_b__0(
        CharaGraphListViewManager___c__DisplayClass60_0_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer, const MethodInfo *))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr,
           method) == this->fields.targetObjectId;
}


void __fastcall CharaGraphListViewManager___c__DisplayClass61_0___ctor(
        CharaGraphListViewManager___c__DisplayClass61_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager___c__DisplayClass61_0___OnClickFilterKind_g__EndSelectFilterKind_0(
        CharaGraphListViewManager___c__DisplayClass61_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  void *_4__this; // x0

  if ( (byte_42AD69F & 1) == 0 )
  {
    sub_B52984(&Method_ActionExtensions_Call_bool___);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42AD69F = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL),
          (_4__this = this->fields.__4__this) == 0LL) )
    {
LABEL_9:
      sub_B52A5C(_4__this, isDecide);
    }
    ListViewManager__CheckScroll((ListViewManager_o *)_4__this, *((_DWORD *)_4__this + 86), 0LL);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.endSelectCallback,
    isDecide,
    (const MethodInfo_2D61628 *)Method_ActionExtensions_Call_bool___);
  _4__this = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !_4__this )
    goto LABEL_9;
  CommonUI__CloseServantFilterSelectMenu((CommonUI_o *)_4__this, 0LL, 0LL);
}


void __fastcall CharaGraphListViewManager___c__DisplayClass66_0___ctor(
        CharaGraphListViewManager___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphListViewManager___c__DisplayClass66_0___GetAmountSortValue_b__0(
        CharaGraphListViewManager___c__DisplayClass66_0_o *this,
        CharaGraphServantListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields._SvtId_k__BackingField == this->fields.svtId;
}


void __fastcall CharaGraphListViewManager___c__DisplayClass67_0___ctor(
        CharaGraphListViewManager___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CharaGraphListViewManager___c__DisplayClass67_0___GetCommandCodeAmountSortValue_b__0(
        CharaGraphListViewManager___c__DisplayClass67_0_o *this,
        CharaGraphCommandCodeListViewItem_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B52A5C(this, 0LL);
  return x->fields._CommandCodeId_k__BackingField == this->fields.commandCodeId;
}