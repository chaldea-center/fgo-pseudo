void __fastcall CharaGraphListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Array_o *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_RuntimeFieldHandle_o v12; // 0:w1.4

  if ( (byte_42141F5 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListViewManager_TypeInfo, v1);
    sub_B0D8A4(&ListViewSort_ScaleType___TypeInfo, v2);
    sub_B0D8A4(
      &Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
      v3);
    byte_42141F5 = 1;
  }
  v4 = (System_Array_o *)sub_B0D8BC(ListViewSort_ScaleType___TypeInfo, 3LL);
  v12.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42880004(v4, v12, 0LL);
  static_fields = (BattleServantConfConponent_o *)CharaGraphListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B0D840(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
  __int64 v3; // x1
  CharaGraphListViewManager_c *v4; // x0
  int32_t v5; // w0
  ListViewSort_o *scrollBar; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_ScaleType_array *IconScaleTypeRotation; // x8
  il2cpp_array_size_t max_length; // w10
  int v10; // w9
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  __int64 v14; // x0

  if ( (byte_42141F3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_IndexOf_ListViewSort_ScaleType___, method);
    sub_B0D8A4(&CharaGraphListViewManager_TypeInfo, v3);
    byte_42141F3 = 1;
  }
  v4 = CharaGraphListViewManager_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager_TypeInfo);
    v4 = CharaGraphListViewManager_TypeInfo;
  }
  v5 = System_Array__IndexOf_USFGOActorChangePosition_PosSetType_(
         (WellFired_USFGOActorChangePosition_PosSetType_array *)v4->static_fields->IconScaleTypeRotation,
         this->fields.scaleType,
         (const MethodInfo_1F69B90 *)Method_System_Array_IndexOf_ListViewSort_ScaleType___);
  scrollBar = (ListViewSort_o *)UnityEngine_Mathf__Max_40819140(0, v5, 0LL);
  IconScaleTypeRotation = CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation;
  if ( !IconScaleTypeRotation )
    goto LABEL_13;
  max_length = IconScaleTypeRotation->max_length;
  v10 = ((int)scrollBar + 1) % (int)max_length;
  if ( v10 >= max_length )
  {
    v14 = sub_B0D9A8(scrollBar);
    sub_B0D948(v14, 0LL);
  }
  this->fields.scaleType = IconScaleTypeRotation->m_Items[v10 + 1];
  CharaGraphListViewManager__SelectSeedByScaleType(this, v7);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_13;
  sort->fields.iconScaleKind = this->fields.scaleType;
  scrollBar = this->fields.sort;
  if ( !scrollBar
    || (ListViewSort__Save(scrollBar, 0LL),
        CharaGraphListViewManager__ModifyList(this, 1, 1, v12),
        this->fields.initMode = 2,
        ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL),
        CharaGraphListViewManager__RequestListObject(this, 2, v13),
        (scrollBar = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (scrollBar = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B0D97C(scrollBar);
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
  ListViewSort_o *ListViewPattern_k__BackingField; // x0
  struct ListViewSort_o *v12; // x0
  struct ListViewSort_o **p_sort; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *itemList; // x21
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1

  if ( (byte_42141E4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__AddRange__, listViewPattern);
    byte_42141E4 = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields._ListViewPattern_k__BackingField = listViewPattern;
  sub_B0D840(
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
  v12 = (struct ListViewSort_o *)(*(__int64 (__fastcall **)(ListViewSort_o *, void *))&ListViewPattern_k__BackingField->klass[1]._1.byval_arg.bits)(
                                   ListViewPattern_k__BackingField,
                                   ListViewPattern_k__BackingField->klass[1]._1.this_arg.data);
  this->fields.sort = v12;
  p_sort = &this->fields.sort;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
          (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        !*p_sort) )
  {
LABEL_9:
    sub_B0D97C(ListViewPattern_k__BackingField);
  }
  this->fields.scaleType = (*p_sort)->fields.iconScaleKind;
  CharaGraphListViewManager__SelectSeedByScaleType(this, v21);
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
  __int64 v22; // x21
  __int64 v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x23
  CharaGraphListViewManager___c_c *v34; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__49_0; // x24
  Il2CppObject *v37; // x25
  struct CharaGraphListViewManager___c_StaticFields *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_Int64_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  __int64 v53; // x1
  __int64 v54; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v55; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x0
  __int64 v57; // x1
  __int64 v58; // x2
  CharaGraphListViewManager___c_c *v59; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x20
  struct CharaGraphListViewManager___c_StaticFields *v61; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__49_2; // x21
  Il2CppObject *v63; // x22
  struct CharaGraphListViewManager___c_StaticFields *v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  System_Int64_array *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7

  if ( (byte_42141E9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___, trueDataArray);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_long___, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, v12);
    sub_B0D8A4(&Method_System_Func_CharaGraphListViewItemBase__long___ctor__, v13);
    sub_B0D8A4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v14);
    sub_B0D8A4(&System_Func_CharaGraphListViewItemBase__long__TypeInfo, v15);
    sub_B0D8A4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v16);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_0__, v17);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_2__, v18);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__DisplayClass49_0__DistributeObjectIdByMatchCondOrNot_b__1__, v19);
    sub_B0D8A4(&CharaGraphListViewManager___c__DisplayClass49_0_TypeInfo, v20);
    sub_B0D8A4(&CharaGraphListViewManager___c_TypeInfo, v21);
    byte_42141E9 = 1;
  }
  v22 = sub_B0D974(CharaGraphListViewManager___c__DisplayClass49_0_TypeInfo, trueDataArray, falseDataArray);
  CharaGraphListViewManager___c__DisplayClass49_0___ctor((CharaGraphListViewManager___c__DisplayClass49_0_o *)v22, 0LL);
  if ( !v22 )
    sub_B0D97C(v23);
  *(_QWORD *)(v22 + 16) = cond;
  sub_B0D840((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)cond, v24, v25, v26, v27, v28, v29);
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemEnumerable,
                                                               (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v33 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v30,
          *(System_Func_TSource__bool__o **)(v22 + 16),
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v34 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v34 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v34->static_fields;
  _9__49_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v34->vtable._0_Equals.methodPtr) & 4) != 0 && !v34->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v34);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v37 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B0D974(
                                                                               System_Func_CharaGraphListViewItemBase__long__TypeInfo,
                                                                               v31,
                                                                               v32);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__49_0,
      v37,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_0__,
      (const MethodInfo_2619D24 *)Method_System_Func_CharaGraphListViewItemBase__long___ctor__);
    v38 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v38->__9__49_0 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__49_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v38->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v39,
      v40,
      v41,
      v42,
      v43,
      v44);
  }
  v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v33,
                                                               (System_Func_TSource__TResult__o *)_9__49_0,
                                                               (const MethodInfo_1B51D60 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v46 = System_Linq_Enumerable__ToArray_long_(
          v45,
          (const MethodInfo_1B56208 *)Method_System_Linq_Enumerable_ToArray_long___);
  *trueDataArray = v46;
  sub_B0D840((BattleServantConfConponent_o *)trueDataArray, (System_Int32_array **)v46, v47, v48, v49, v50, v51, v52);
  v55 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                                             v53,
                                                                             v54);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v55,
    (Il2CppObject *)v22,
    Method_CharaGraphListViewManager___c__DisplayClass49_0__DistributeObjectIdByMatchCondOrNot_b__1__,
    (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
  v56 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v30,
          (System_Func_TSource__bool__o *)v55,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v59 = CharaGraphListViewManager___c_TypeInfo;
  v60 = v56;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v59 = CharaGraphListViewManager___c_TypeInfo;
  }
  v61 = v59->static_fields;
  _9__49_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v61->__9__49_2;
  if ( !_9__49_2 )
  {
    if ( (BYTE3(v59->vtable._0_Equals.methodPtr) & 4) != 0 && !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v61 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v63 = (Il2CppObject *)v61->__9;
    _9__49_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B0D974(
                                                                               System_Func_CharaGraphListViewItemBase__long__TypeInfo,
                                                                               v57,
                                                                               v58);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__49_2,
      v63,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_2__,
      (const MethodInfo_2619D24 *)Method_System_Func_CharaGraphListViewItemBase__long___ctor__);
    v64 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v64->__9__49_2 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__49_2;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v64->__9__49_2,
      (System_Int32_array **)_9__49_2,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
  }
  v71 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v60,
                                                               (System_Func_TSource__TResult__o *)_9__49_2,
                                                               (const MethodInfo_1B51D60 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v72 = System_Linq_Enumerable__ToArray_long_(
          v71,
          (const MethodInfo_1B56208 *)Method_System_Linq_Enumerable_ToArray_long___);
  *falseDataArray = v72;
  sub_B0D840((BattleServantConfConponent_o *)falseDataArray, (System_Int32_array **)v72, v73, v74, v75, v76, v77, v78);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewManager__EnumerateItems(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  if ( (byte_42141E0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___, method);
    byte_42141E0 = 1;
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                   (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *__fastcall CharaGraphListViewManager__EnumerateObjects(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  System_Collections_Generic_IEnumerable_T__o *v10; // x19
  CharaGraphListViewManager___c_c *v11; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__34_0; // x20
  Il2CppObject *v14; // x21
  struct CharaGraphListViewManager___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_42141E1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_GameObject___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___, v3);
    sub_B0D8A4(&Method_System_Func_GameObject__CharaGraphListViewObject___ctor__, v4);
    sub_B0D8A4(&System_Func_GameObject__CharaGraphListViewObject__TypeInfo, v5);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__EnumerateObjects_b__34_0__, v6);
    sub_B0D8A4(&CharaGraphListViewManager___c_TypeInfo, v7);
    byte_42141E1 = 1;
  }
  v10 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
          (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_GameObject___);
  v11 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v11 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__34_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                 System_Func_GameObject__CharaGraphListViewObject__TypeInfo,
                                                                                                 v8,
                                                                                                 v9);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__34_0,
      v14,
      Method_CharaGraphListViewManager___c__EnumerateObjects_b__34_0__,
      (const MethodInfo_261A104 *)Method_System_Func_GameObject__CharaGraphListViewObject___ctor__);
    v15 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v15->__9__34_0 = (struct System_Func_GameObject__CharaGraphListViewObject__o *)_9__34_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v15->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v10,
                                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                                 (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
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
  __int64 v9; // x1
  CharaGraphListViewManager___c__DisplayClass66_0_o *v10; // x21
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_IEnumerable_o *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_42141F1 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___, *(_QWORD *)&svtId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___, v5);
    sub_B0D8A4(&Method_System_Func_CharaGraphServantListViewItem__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_CharaGraphServantListViewItem__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__DisplayClass66_0__GetAmountSortValue_b__0__, v8);
    sub_B0D8A4(&CharaGraphListViewManager___c__DisplayClass66_0_TypeInfo, v9);
    byte_42141F1 = 1;
  }
  v10 = (CharaGraphListViewManager___c__DisplayClass66_0_o *)sub_B0D974(
                                                               CharaGraphListViewManager___c__DisplayClass66_0_TypeInfo,
                                                               *(_QWORD *)&svtId,
                                                               method);
  CharaGraphListViewManager___c__DisplayClass66_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.svtId = svtId;
  v13 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v12);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               v13,
                                                               (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_CharaGraphServantListViewItem__bool__TypeInfo,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_CharaGraphListViewManager___c__DisplayClass66_0__GetAmountSortValue_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphServantListViewItem__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           v14,
           (System_Func_TSource__bool__o *)v17,
           (const MethodInfo_1B48614 *)Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___);
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
  __int64 v9; // x1
  CharaGraphListViewManager___c__DisplayClass67_0_o *v10; // x21
  __int64 v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_IEnumerable_o *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  __int64 v15; // x1
  __int64 v16; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v17; // x20

  if ( (byte_42141F2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___, *(_QWORD *)&commandCodeId);
    sub_B0D8A4(&Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___, v5);
    sub_B0D8A4(&Method_System_Func_CharaGraphCommandCodeListViewItem__bool___ctor__, v6);
    sub_B0D8A4(&System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo, v7);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__DisplayClass67_0__GetCommandCodeAmountSortValue_b__0__, v8);
    sub_B0D8A4(&CharaGraphListViewManager___c__DisplayClass67_0_TypeInfo, v9);
    byte_42141F2 = 1;
  }
  v10 = (CharaGraphListViewManager___c__DisplayClass67_0_o *)sub_B0D974(
                                                               CharaGraphListViewManager___c__DisplayClass67_0_TypeInfo,
                                                               *(_QWORD *)&commandCodeId,
                                                               method);
  CharaGraphListViewManager___c__DisplayClass67_0___ctor(v10, 0LL);
  if ( !v10 )
    sub_B0D97C(v11);
  v10->fields.commandCodeId = commandCodeId;
  v13 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v12);
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_WarBoardPartySkillEntity_(
                                                               v13,
                                                               (const MethodInfo_1B4E6FC *)Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
  v17 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo,
                                                                             v15,
                                                                             v16);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v17,
    (Il2CppObject *)v10,
    Method_CharaGraphListViewManager___c__DisplayClass67_0__GetCommandCodeAmountSortValue_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphCommandCodeListViewItem__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           v14,
           (System_Func_TSource__bool__o *)v17,
           (const MethodInfo_1B48614 *)Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
}


// local variable allocation has failed, the output may be wrong!
CharaGraphListViewItemBase_o *__fastcall CharaGraphListViewManager__GetItem(
        CharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  CharaGraphListViewItemBase_o *result; // x0
  __int64 v7; // x10

  if ( (byte_42141E6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_IndexValue_ListViewItem___, *(_QWORD *)&index);
    sub_B0D8A4(&CharaGraphListViewItemBase_TypeInfo, v5);
    byte_42141E6 = 1;
  }
  result = (CharaGraphListViewItemBase_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                             (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                             index,
                                             0LL,
                                             (const MethodInfo_1709420 *)Method_BasicHelper_IndexValue_ListViewItem___);
  if ( result )
  {
    v7 = *(&CharaGraphListViewItemBase_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
    {
      if ( (CharaGraphListViewItemBase_c *)result->klass->_2.typeHierarchy[v7 - 1] != CharaGraphListViewItemBase_TypeInfo )
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
    sub_B0D97C(0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x22
  CharaGraphListViewManager___c_c *v15; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__48_0; // x23
  Il2CppObject *v18; // x24
  struct CharaGraphListViewManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CharaGraphListViewManager_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x5
  CharaGraphListViewManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v31; // x22
  struct CharaGraphListViewManager___c_StaticFields *v32; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__48_1; // x23
  Il2CppObject *v34; // x24
  struct CharaGraphListViewManager___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42141E8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, choiceArray);
    sub_B0D8A4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_0__, v9);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_1__, v10);
    sub_B0D8A4(&CharaGraphListViewManager___c_TypeInfo, v11);
    byte_42141E8 = 1;
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(
                                                               this,
                                                               (const MethodInfo *)choiceArray);
  v15 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v15 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__48_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                                                    v12,
                                                                                    v13);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__48_0,
      v18,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v19 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v19->__9__48_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__48_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v19->__9__48_0,
      (System_Int32_array **)_9__48_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                         v14,
                                         (System_Func_TSource__bool__o *)_9__48_0,
                                         (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v30 = CharaGraphListViewManager___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v26;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v30 = CharaGraphListViewManager___c_TypeInfo;
  }
  v32 = v30->static_fields;
  _9__48_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v32->__9__48_1;
  if ( !_9__48_1 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v32 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__48_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                                                    v27,
                                                                                    v28);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__48_1,
      v34,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v35 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v35->__9__48_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__48_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v35->__9__48_1,
      (System_Int32_array **)_9__48_1,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !this )
    sub_B0D97C(v26);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v26,
    unChoiceArray,
    choiceArray,
    v31,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__48_1,
    v29);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x22
  CharaGraphListViewManager___c_c *v15; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__47_0; // x23
  Il2CppObject *v18; // x24
  struct CharaGraphListViewManager___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CharaGraphListViewManager_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  const MethodInfo *v29; // x5
  CharaGraphListViewManager___c_c *v30; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v31; // x22
  struct CharaGraphListViewManager___c_StaticFields *v32; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__47_1; // x23
  Il2CppObject *v34; // x24
  struct CharaGraphListViewManager___c_StaticFields *v35; // x0
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7

  if ( (byte_42141E7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, lockArray);
    sub_B0D8A4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v7);
    sub_B0D8A4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v8);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_0__, v9);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_1__, v10);
    sub_B0D8A4(&CharaGraphListViewManager___c_TypeInfo, v11);
    byte_42141E7 = 1;
  }
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(
                                                               this,
                                                               (const MethodInfo *)lockArray);
  v15 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v15 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                                                    v12,
                                                                                    v13);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__47_0,
      v18,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_0__,
      (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v19 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v19->__9__47_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__47_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v19->__9__47_0,
      (System_Int32_array **)_9__47_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                         v14,
                                         (System_Func_TSource__bool__o *)_9__47_0,
                                         (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v30 = CharaGraphListViewManager___c_TypeInfo;
  v31 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v26;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v30 = CharaGraphListViewManager___c_TypeInfo;
  }
  v32 = v30->static_fields;
  _9__47_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v32->__9__47_1;
  if ( !_9__47_1 )
  {
    if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v30);
      v32 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v34 = (Il2CppObject *)v32->__9;
    _9__47_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                    System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                                                    v27,
                                                                                    v28);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__47_1,
      v34,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v35 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v35->__9__47_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__47_1;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v35->__9__47_1,
      (System_Int32_array **)_9__47_1,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
  }
  if ( !this )
    sub_B0D97C(v26);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v26,
    unlockArray,
    lockArray,
    v31,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__47_1,
    v29);
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
  int32_t Index; // w2

  FuncOnClick = this->fields.FuncOnClick;
  this->fields.FuncOnClick = 0LL;
  sub_B0D840(
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
      sub_B0D97C(v11);
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
    sub_B0D97C(this);
  return !item->fields.isTermination || ListViewManager__ClippingItem_23719204((ListViewManager_o *)this, item, 0LL);
}


void __fastcall CharaGraphListViewManager__JumpItemUserId(
        CharaGraphListViewManager_o *this,
        int64_t targetObjectId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CharaGraphListViewManager___c__DisplayClass60_0_o *v9; // x21
  __int64 v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v15; // x22
  WarBoardData_SquareRangeSearch_o *v16; // x0

  if ( (byte_42141EC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___, targetObjectId);
    sub_B0D8A4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v6);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__DisplayClass60_0__JumpItemUserId_b__0__, v7);
    sub_B0D8A4(&CharaGraphListViewManager___c__DisplayClass60_0_TypeInfo, v8);
    byte_42141EC = 1;
  }
  v9 = (CharaGraphListViewManager___c__DisplayClass60_0_o *)sub_B0D974(
                                                              CharaGraphListViewManager___c__DisplayClass60_0_TypeInfo,
                                                              targetObjectId,
                                                              method);
  CharaGraphListViewManager___c__DisplayClass60_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_B0D97C(v10);
  v9->fields.targetObjectId = targetObjectId;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(this, v11);
  v15 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                                             v13,
                                                                             v14);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_CharaGraphListViewManager___c__DisplayClass60_0__JumpItemUserId_b__0__,
    (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
  v16 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          v12,
          (System_Func_TSource__bool__o *)v15,
          (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v16 )
    ListViewManager__JumpItem((ListViewManager_o *)this, v16->fields.range, 0LL);
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x21
  __int64 v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Collections_Generic_IEnumerable_T__o *v29; // x22
  __int64 v30; // x1
  __int64 v31; // x2
  char v32; // w28
  CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *v33; // x25
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v42; // x23
  __int64 v43; // x1
  __int64 v44; // x2
  CharaGraphListViewManager___c_c *v45; // x0
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__43_1; // x23
  Il2CppObject *v48; // x24
  struct CharaGraphListViewManager___c_StaticFields *v49; // x0
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_Collections_Generic_IEnumerable_T__o *v56; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v59; // x23

  if ( (byte_42141E5 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_CharaGraphListViewItemBase___ctor__, isIconSizeChange);
    sub_B0D8A4(&System_Action_CharaGraphListViewItemBase__TypeInfo, v7);
    sub_B0D8A4(&Method_BasicHelper_ForEach_CharaGraphListViewItemBase___, v8);
    sub_B0D8A4(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___, v10);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, v11);
    sub_B0D8A4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v12);
    sub_B0D8A4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v13);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__ModifyList_b__43_1__, v14);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__0__, v15);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__2__, v16);
    sub_B0D8A4(&CharaGraphListViewManager___c__DisplayClass43_0_TypeInfo, v17);
    sub_B0D8A4(&CharaGraphListViewManager___c_TypeInfo, v18);
    byte_42141E5 = 1;
  }
  v19 = sub_B0D974(CharaGraphListViewManager___c__DisplayClass43_0_TypeInfo, isIconSizeChange, isNeedSort);
  CharaGraphListViewManager___c__DisplayClass43_0___ctor((CharaGraphListViewManager___c__DisplayClass43_0_o *)v19, 0LL);
  if ( !v19 )
    sub_B0D97C(v20);
  *(_QWORD *)(v19 + 24) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 24), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(this, v27);
  v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                         v28,
                                                         (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v32 = ~isIconSizeChange;
  v33 = (CharaGraphDefine_CharaGraphItemBulkModifyArgs_o *)sub_B0D974(
                                                             CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo,
                                                             v30,
                                                             v31);
  CharaGraphDefine_CharaGraphItemBulkModifyArgs___ctor(v33, !isIconSizeChange, 0LL);
  *(_QWORD *)(v19 + 16) = v33;
  sub_B0D840((BattleServantConfConponent_o *)(v19 + 16), (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
  v42 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_CharaGraphListViewItemBase__TypeInfo,
                                                                               v40,
                                                                               v41);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v42,
    (Il2CppObject *)v19,
    Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_CharaGraphListViewItemBase___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v29,
    (System_Action_T__o *)v42,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  if ( (v32 & 1) == 0 )
  {
    v45 = CharaGraphListViewManager___c_TypeInfo;
    if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
      v45 = CharaGraphListViewManager___c_TypeInfo;
    }
    static_fields = v45->static_fields;
    _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( (BYTE3(v45->vtable._0_Equals.methodPtr) & 4) != 0 && !v45->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v45);
        static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
      }
      v48 = (Il2CppObject *)static_fields->__9;
      _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                      System_Func_CharaGraphListViewItemBase__bool__TypeInfo,
                                                                                      v43,
                                                                                      v44);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__43_1,
        v48,
        Method_CharaGraphListViewManager___c__ModifyList_b__43_1__,
        (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
      v49 = CharaGraphListViewManager___c_TypeInfo->static_fields;
      v49->__9__43_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1;
      sub_B0D840(
        (BattleServantConfConponent_o *)&v49->__9__43_1,
        (System_Int32_array **)_9__43_1,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v56 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                           (System_Func_TSource__bool__o *)_9__43_1,
                                                           (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    v59 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                                 System_Action_CharaGraphListViewItemBase__TypeInfo,
                                                                                 v57,
                                                                                 v58);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v59,
      (Il2CppObject *)v19,
      Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__2__,
      (const MethodInfo_246EA3C *)Method_System_Action_CharaGraphListViewItemBase___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v56,
      (System_Action_T__o *)v59,
      (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
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
  ListViewSort_o *sort; // x0

  if ( (byte_42141F0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__, method);
    byte_42141F0 = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickBonusFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickBonusFilterKind__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  WebViewManager_o *Instance; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  _QWORD *v23; // x0
  System_Reflection_MethodBase_o *v24; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v26; // x21
  int32_t v27; // w0
  ListViewSort_o *sort; // x19
  int32_t v29; // w22
  __int64 v30; // x1
  __int64 v31; // x2
  ServantFilterSelectMenu_CallbackFunc_o *v32; // x23

  if ( (byte_42141ED & 1) == 0 )
  {
    sub_B0D8A4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, endSelectCallback);
    sub_B0D8A4(&Method_CharaGraphListViewManager_OnClickFilterKind__, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_B0D8A4(
      &Method_CharaGraphListViewManager___c__DisplayClass61_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
      v7);
    sub_B0D8A4(&CharaGraphListViewManager___c__DisplayClass61_0_TypeInfo, v8);
    byte_42141ED = 1;
  }
  v9 = sub_B0D974(CharaGraphListViewManager___c__DisplayClass61_0_TypeInfo, endSelectCallback, method);
  CharaGraphListViewManager___c__DisplayClass61_0___ctor((CharaGraphListViewManager___c__DisplayClass61_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v9 + 24) = endSelectCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v9 + 24),
    (System_Int32_array **)endSelectCallback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = Method_CharaGraphListViewManager_OnClickFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickFilterKind__ + 75) & 2) != 0 )
    v23 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListViewManager_OnClickFilterKind__);
  v24 = (System_Reflection_MethodBase_o *)sub_B0D888(v23, v23[3]);
  OverwriteAssetSoundName__PlaySystemSe(v24, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v26 = (CommonUI_o *)Instance,
        v27 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.methodPtr),
        sort = this->fields.sort,
        v29 = v27,
        v32 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B0D974(
                                                          ServantFilterSelectMenu_CallbackFunc_TypeInfo,
                                                          v30,
                                                          v31),
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v32,
          (Il2CppObject *)v9,
          Method_CharaGraphListViewManager___c__DisplayClass61_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
          0LL),
        !v26) )
  {
LABEL_9:
    sub_B0D97C(Instance);
  }
  CommonUI__OpenServantFilterSelectMenu(v26, v29, sort, v32, -1, 0LL);
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
  struct ListViewSort_o *sort; // x8

  if ( (byte_42141EF & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, method);
    byte_42141EF = 1;
  }
  v3 = Method_CharaGraphListViewManager_OnClickSortAscendingOrder__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__ + 75) & 2) != 0 )
    v3 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
  v4 = (System_Reflection_MethodBase_o *)sub_B0D888(v3, v3[3]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B0D97C(v5);
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
  WebViewManager_o *Instance; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v10; // x20
  int32_t v11; // w0
  ListViewSort_o *sort; // x21
  int32_t v13; // w22
  __int64 v14; // x1
  __int64 v15; // x2
  ServantSortSelectMenu_CallbackFunc_o *v16; // x23

  if ( (byte_42141EE & 1) == 0 )
  {
    sub_B0D8A4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_CharaGraphListViewManager_OnClickSortKind__, v3);
    sub_B0D8A4(&Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_62_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_42141EE = 1;
  }
  v6 = Method_CharaGraphListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortKind__ + 75) & 2) != 0 )
    v6 = (_QWORD *)sub_B0D8AC(Method_CharaGraphListViewManager_OnClickSortKind__);
  v7 = (System_Reflection_MethodBase_o *)sub_B0D888(v6, v6[3]);
  OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v10 = (CommonUI_o *)Instance,
        v11 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._9_GetItemDrawPattern.methodPtr),
        sort = this->fields.sort,
        v13 = v11,
        v16 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B0D974(ServantSortSelectMenu_CallbackFunc_TypeInfo, v14, v15),
        ServantSortSelectMenu_CallbackFunc___ctor(
          v16,
          (Il2CppObject *)this,
          Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_62_0__,
          0LL),
        !v10) )
  {
    sub_B0D97C(Instance);
  }
  CommonUI__OpenServantSortSelectMenu(v10, v13, sort, 0, v16, 0LL);
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
  __int64 v9; // x1
  CharaGraphListViewManager___c__DisplayClass54_0_o *v10; // x21
  UIScrollView_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Collections_Generic_IEnumerable_T__o *v13; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v16; // x22
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_42141EB & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_CharaGraphListViewObject___ctor__, *(_QWORD *)&mode);
    sub_B0D8A4(&System_Action_CharaGraphListViewObject__TypeInfo, v5);
    sub_B0D8A4(&Method_BasicHelper_ForEach_CharaGraphListViewObject___, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(&Method_CharaGraphListViewManager___c__DisplayClass54_0__RequestListObject_b__0__, v8);
    sub_B0D8A4(&CharaGraphListViewManager___c__DisplayClass54_0_TypeInfo, v9);
    byte_42141EB = 1;
  }
  v10 = (CharaGraphListViewManager___c__DisplayClass54_0_o *)sub_B0D974(
                                                               CharaGraphListViewManager___c__DisplayClass54_0_TypeInfo,
                                                               *(_QWORD *)&mode,
                                                               method);
  CharaGraphListViewManager___c__DisplayClass54_0___ctor(v10, 0LL);
  if ( !v10 )
    goto LABEL_14;
  v10->fields.mode = mode;
  v13 = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphListViewManager__EnumerateObjects(this, v12);
  v16 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B0D974(
                                                                               System_Action_CharaGraphListViewObject__TypeInfo,
                                                                               v14,
                                                                               v15);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v16,
    (Il2CppObject *)v10,
    Method_CharaGraphListViewManager___c__DisplayClass54_0__RequestListObject_b__0__,
    (const MethodInfo_246EA3C *)Method_System_Action_CharaGraphListViewObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v13,
    (System_Action_T__o *)v16,
    (const MethodInfo_17086DC *)Method_BasicHelper_ForEach_CharaGraphListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v11 = this->fields.scrollView;
    if ( !v11 )
      goto LABEL_14;
    ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._8_UpdateScrollbars.method)(
      v11,
      1LL,
      v11->klass->vtable._9_SetDragAmount.methodPtr);
    v11 = this->fields.scrollView;
    if ( !v11 )
      goto LABEL_14;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v11->klass->vtable._6_get_shouldMoveVertically.method)(
            v11,
            v11->klass->vtable._7_get_shouldMove.methodPtr) & 1) != 0 )
    {
      v11 = this->fields.scrollView;
      if ( v11 )
      {
        UIScrollView__UpdatePosition(v11, 0LL);
        goto LABEL_13;
      }
LABEL_14:
      sub_B0D97C(v11);
    }
  }
LABEL_13:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.FuncOnMoveEnd, 0LL, v18, v19, v20, v21, v22, v23);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.seed, (System_Int32_array **)v10, v2, v3, v4, v5, v6, v7);
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
        sub_B0D840(
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
    sub_B0D97C(ListViewPattern_k__BackingField);
  }
  v11 = (struct System_Int32_array *)((__int64 (__fastcall *)(ListViewSort_o *, void *))ListViewPattern_k__BackingField->klass[1]._1.events)(
                                       ListViewPattern_k__BackingField,
                                       ListViewPattern_k__BackingField->klass[1]._1.properties);
  p_ServantFilterIds_k__BackingField = (System_Collections_ICollection_o **)&this->fields._ServantFilterIds_k__BackingField;
  this->fields._ServantFilterIds_k__BackingField = v11;
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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


void __fastcall CharaGraphListViewManager__SetMode_24008280(
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


void __fastcall CharaGraphListViewManager__SetMode_24026964(
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
  sub_B0D840(
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
  UnityEngine_Object_o *v4; // x20
  __int64 v6; // x1
  __int64 v7; // x10
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x2
  int32_t v10; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_42141EA & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListViewObject_TypeInfo, obj);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_42141EA = 1;
  }
  if ( v4 )
  {
    v7 = *(&CharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v4->klass->_2.bitflags2 + 1) >= (unsigned int)v7 )
    {
      if ( (CharaGraphListViewObject_c *)v4->klass->_2.typeHierarchy[v7 - 1] != CharaGraphListViewObject_TypeInfo )
        v4 = 0LL;
    }
    else
    {
      v4 = 0LL;
    }
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !v4 )
      sub_B0D97C(v8);
    if ( this->fields.initMode == 2 )
      v10 = 2;
    else
      v10 = 1;
    CharaGraphListViewObject__Init((CharaGraphListViewObject_o *)v4, v10, v9);
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
    sub_B0D97C(0LL);
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

  if ( (byte_42141F4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, method);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v5);
    byte_42141F4 = 1;
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
    v9 = (System_String_o *)StringLiteral_11913/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v9 = ListViewPattern_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v10 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ListViewPattern_k__BackingField = LocalizationManager__Get(v9, 0LL);
    if ( v10 )
    {
      UILabel__set_text(v10, ListViewPattern_k__BackingField, 0LL);
      return;
    }
LABEL_18:
    sub_B0D97C(ListViewPattern_k__BackingField);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CharaGraphListViewManager___OnClickSortKind_g__EndSelectSortKind_62_0(
        CharaGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_42141F6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_42141F6 = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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

  if ( (byte_42141DC & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_42141DC = 1;
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
    v8 = sub_B022BC(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_42141DE & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_42141DE = 1;
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
    v8 = sub_B022BC(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListViewManager_o *)sub_B0DC70(v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v10; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_42141E3 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CharaGraphListViewManager__get_ClippingObjectList_b__38_0__, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___, v4);
    sub_B0D8A4(&Method_System_Func_CharaGraphListViewObject__bool___ctor__, v5);
    sub_B0D8A4(&System_Func_CharaGraphListViewObject__bool__TypeInfo, v6);
    byte_42141E3 = 1;
  }
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateObjects(this, method);
  v10 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_CharaGraphListViewObject__bool__TypeInfo,
                                                                             v8,
                                                                             v9);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v10,
    (Il2CppObject *)this,
    Method_CharaGraphListViewManager__get_ClippingObjectList_b__38_0__,
    (const MethodInfo_26189B8 *)Method_System_Func_CharaGraphListViewObject__bool___ctor__);
  v11 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v7,
          (System_Func_TSource__bool__o *)v10,
          (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v11,
                                                                          (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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

  if ( (byte_42141E2 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___, method);
    byte_42141E2 = 1;
  }
  v3 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v3,
                                                                          (const MethodInfo_1B59168 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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

  if ( (byte_42141DD & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListViewManager_CallbackFunc_TypeInfo, value);
    byte_42141DD = 1;
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
    v8 = sub_B022BC(p_FuncOnClick, v7, FuncOnClick);
    v9 = FuncOnClick == (System_Delegate_o *)v8;
    FuncOnClick = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListViewManager_o *)sub_B0DC70(v7);
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

  if ( (byte_42141DF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, value);
    byte_42141DF = 1;
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
    v8 = sub_B022BC(p_FuncOnMoveEnd, v7, FuncOnMoveEnd);
    v9 = FuncOnMoveEnd == (System_Delegate_o *)v8;
    FuncOnMoveEnd = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  v10 = (CharaGraphListViewManager_o *)sub_B0DC70(v7);
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(p_method, object);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = result;
  v13 = kind;
  if ( (byte_4211DFE & 1) == 0 )
  {
    sub_B0D8A4(&int_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&CharaGraphListViewManager_ResultKind_TypeInfo, v9);
    byte_4211DFE = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CharaGraphListViewManager_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B0D848(this, v11, callback, object);
}


void __fastcall CharaGraphListViewManager_CallbackFunc__EndInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
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
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  CharaGraphListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, _QWORD, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  CharaGraphListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = kind;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
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
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result, method);
      if ( (sub_B0D8D4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, (unsigned int)result, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, (unsigned int)result, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B0D8CC(v22);
      v25 = sub_B0DCD0(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AA67A0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B0D954(v17, v22);
        (*v19)(v21, v26, (unsigned int)result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AA67A0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v16)(
            v21,
            v13,
            (unsigned int)result,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v32,
            (unsigned int)result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v23)(v21, v32, (unsigned int)result, v22);
    goto LABEL_38;
  }
}


void __fastcall CharaGraphListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4211DF9 & 1) == 0 )
  {
    sub_B0D8A4(&CharaGraphListViewManager___c_TypeInfo, v1);
    byte_4211DF9 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(CharaGraphListViewManager___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CharaGraphListViewManager___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr);
}


CharaGraphListViewObject_o *__fastcall CharaGraphListViewManager___c___EnumerateObjects_b__34_0(
        CharaGraphListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4211DFA & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_B0D8A4(
                                                &Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___,
                                                x);
    byte_4211DFA = 1;
  }
  if ( !x )
    sub_B0D97C(this);
  return (CharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         x,
                                         (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__48_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__48_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields._IsChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__47_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields._IsSwapLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__47_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields._IsLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___ModifyList_b__43_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *viewObject; // x19

  if ( (byte_4211DFB & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4211DFB = 1;
  }
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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

  if ( (byte_4211DFC & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_CharaGraphListViewItemBase__bool__Invoke__, x);
    byte_4211DFC = 1;
  }
  cond = this->fields.cond;
  if ( !cond )
    sub_B0D97C(0LL);
  return !System_Func_BattleBuffData_BuffData__bool___Invoke(
            (System_Func_BattleBuffData_BuffData__bool__o *)cond,
            (BattleBuffData_BuffData_o *)x,
            (const MethodInfo_26189CC *)Method_System_Func_CharaGraphListViewItemBase__bool__Invoke__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v5; // x1
  void *_4__this; // x0

  if ( (byte_4211DFD & 1) == 0 )
  {
    sub_B0D8A4(&Method_ActionExtensions_Call_bool___, isDecide);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4211DFD = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL),
          (_4__this = this->fields.__4__this) == 0LL) )
    {
LABEL_9:
      sub_B0D97C(_4__this);
    }
    ListViewManager__CheckScroll((ListViewManager_o *)_4__this, *((_DWORD *)_4__this + 86), 0LL);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.endSelectCallback,
    isDecide,
    (const MethodInfo_2D96664 *)Method_ActionExtensions_Call_bool___);
  _4__this = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields._CommandCodeId_k__BackingField == this->fields.commandCodeId;
}