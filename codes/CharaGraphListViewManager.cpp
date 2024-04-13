void __fastcall CharaGraphListViewManager___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Array_o *v10; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_RuntimeFieldHandle_o v18; // 0:w1.4

  if ( (byte_42E96AB & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewManager_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&ListViewSort_ScaleType___TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D,
      v7,
      v8,
      v9);
    byte_42E96AB = 1;
  }
  v10 = (System_Array_o *)sub_B5D5DC(ListViewSort_ScaleType___TypeInfo, 3LL);
  v18.fields.value = Field__PrivateImplementationDetails__4636993D3E1DA4E9D6B8F87B79E8F7C6D018580D52661950EABC3845C5897A4D;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v10, v18, 0LL);
  static_fields = (BattleServantConfConponent_o *)CharaGraphListViewManager_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v10;
  sub_B5D560(static_fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CharaGraphListViewManager_c *v8; // x0
  int32_t v9; // w0
  ListViewSort_o *scrollBar; // x0
  const MethodInfo *v11; // x1
  struct ListViewSort_ScaleType_array *IconScaleTypeRotation; // x8
  il2cpp_array_size_t max_length; // w10
  int v14; // w9
  struct ListViewSort_o *sort; // x8
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  __int64 v18; // x0

  if ( (byte_42E96A9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_IndexOf_ListViewSort_ScaleType___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CharaGraphListViewManager_TypeInfo, v5, v6, v7);
    byte_42E96A9 = 1;
  }
  v8 = CharaGraphListViewManager_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager_TypeInfo);
    v8 = CharaGraphListViewManager_TypeInfo;
  }
  v9 = System_Array__IndexOf_USFGOActorChangePosition_PosSetType_(
         (WellFired_USFGOActorChangePosition_PosSetType_array *)v8->static_fields->IconScaleTypeRotation,
         this->fields.scaleType,
         (const MethodInfo_1FC17DC *)Method_System_Array_IndexOf_ListViewSort_ScaleType___);
  scrollBar = (ListViewSort_o *)UnityEngine_Mathf__Max_41629432(0, v9, 0LL);
  IconScaleTypeRotation = CharaGraphListViewManager_TypeInfo->static_fields->IconScaleTypeRotation;
  if ( !IconScaleTypeRotation )
    goto LABEL_13;
  max_length = IconScaleTypeRotation->max_length;
  v14 = ((int)scrollBar + 1) % (int)max_length;
  if ( v14 >= max_length )
  {
    v18 = sub_B5D6C8(scrollBar);
    sub_B5D668(v18, 0LL);
  }
  this->fields.scaleType = IconScaleTypeRotation->m_Items[v14 + 1];
  CharaGraphListViewManager__SelectSeedByScaleType(this, v11);
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_13;
  sort->fields.iconScaleKind = this->fields.scaleType;
  scrollBar = this->fields.sort;
  if ( !scrollBar
    || (ListViewSort__Save(scrollBar, 0LL),
        CharaGraphListViewManager__ModifyList(this, 1, 1, v16),
        this->fields.initMode = 2,
        ListViewManager__set_IsInput((ListViewManager_o *)this, 1, 0LL),
        CharaGraphListViewManager__RequestListObject(this, 2, v17),
        (scrollBar = (ListViewSort_o *)this->fields.scrollBar) == 0LL)
    || (scrollBar = (ListViewSort_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)scrollBar, 0LL)) == 0LL )
  {
LABEL_13:
    sub_B5D69C(scrollBar, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollBar, 1, 0LL);
}


void __fastcall CharaGraphListViewManager__CreateList(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewPatternBase_o *listViewPattern,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x1
  ListViewSort_o *ListViewPattern_k__BackingField; // x0
  struct ListViewSort_o *v14; // x0
  struct ListViewSort_o **p_sort; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *itemList; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  if ( (byte_42E969A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_ListViewItem__AddRange__,
      (_DWORD)listViewPattern,
      (_DWORD)method,
      v3);
    byte_42E969A = 1;
  }
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  this->fields._ListViewPattern_k__BackingField = listViewPattern;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._ListViewPattern_k__BackingField,
    (System_Int32_array **)listViewPattern,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  ListViewPattern_k__BackingField = (ListViewSort_o *)this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField )
    goto LABEL_9;
  v14 = (struct ListViewSort_o *)(*(__int64 (__fastcall **)(ListViewSort_o *, void *))&ListViewPattern_k__BackingField->klass[1]._1.byval_arg.bits)(
                                   ListViewPattern_k__BackingField,
                                   ListViewPattern_k__BackingField->klass[1]._1.this_arg.data);
  this->fields.sort = v14;
  p_sort = &this->fields.sort;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
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
          (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_ListViewItem__AddRange__),
        !*p_sort) )
  {
LABEL_9:
    sub_B5D69C(ListViewPattern_k__BackingField, v12);
  }
  this->fields.scaleType = (*p_sort)->fields.iconScaleKind;
  CharaGraphListViewManager__SelectSeedByScaleType(this, v12);
  CharaGraphListViewManager__SetBonusFilterIds(this, v23);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  ListViewManager__CheckScroll((ListViewManager_o *)this, this->fields.scaleType, 0LL);
  CharaGraphListViewManager__SetupEmptyMessage(this, v24);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  __int64 v46; // x21
  __int64 v47; // x0
  __int64 v48; // x1
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x23
  CharaGraphListViewManager___c_c *v57; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__49_0; // x24
  Il2CppObject *v60; // x25
  struct CharaGraphListViewManager___c_StaticFields *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x0
  System_Int64_array *v69; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v76; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x0
  CharaGraphListViewManager___c_c *v78; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v79; // x20
  struct CharaGraphListViewManager___c_StaticFields *v80; // x9
  System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *_9__49_2; // x21
  Il2CppObject *v82; // x22
  struct CharaGraphListViewManager___c_StaticFields *v83; // x0
  System_String_array **v84; // x2
  System_String_array **v85; // x3
  System_Boolean_array **v86; // x4
  System_Int32_array **v87; // x5
  System_Int32_array *v88; // x6
  System_Int32_array *v89; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  System_Int64_array *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7

  if ( (byte_42E969F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___,
      (_DWORD)trueDataArray,
      (_DWORD)falseDataArray,
      itemEnumerable);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_long___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_CharaGraphListViewItemBase__long___ctor__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Func_CharaGraphListViewItemBase__long__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_0__, v31, v32, v33);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_2__, v34, v35, v36);
    sub_B5D5C4(
      &Method_CharaGraphListViewManager___c__DisplayClass49_0__DistributeObjectIdByMatchCondOrNot_b__1__,
      v37,
      v38,
      v39);
    sub_B5D5C4(&CharaGraphListViewManager___c__DisplayClass49_0_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&CharaGraphListViewManager___c_TypeInfo, v43, v44, v45);
    byte_42E969F = 1;
  }
  v46 = sub_B5D694(CharaGraphListViewManager___c__DisplayClass49_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass49_0___ctor((CharaGraphListViewManager___c__DisplayClass49_0_o *)v46, 0LL);
  if ( !v46 )
    sub_B5D69C(v47, v48);
  *(_QWORD *)(v46 + 16) = cond;
  sub_B5D560((BattleServantConfConponent_o *)(v46 + 16), (System_Int32_array **)cond, v49, v50, v51, v52, v53, v54);
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)itemEnumerable,
                                                               (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v56 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v55,
          *(System_Func_TSource__bool__o **)(v46 + 16),
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v57 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v57 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v57->static_fields;
  _9__49_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)static_fields->__9__49_0;
  if ( !_9__49_0 )
  {
    if ( (BYTE3(v57->vtable._0_Equals.methodPtr) & 4) != 0 && !v57->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v57);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v60 = (Il2CppObject *)static_fields->__9;
    _9__49_0 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__49_0,
      v60,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_0__,
      (const MethodInfo_2C3003C *)Method_System_Func_CharaGraphListViewItemBase__long___ctor__);
    v61 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v61->__9__49_0 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__49_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v61->__9__49_0,
      (System_Int32_array **)_9__49_0,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
  }
  v68 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v56,
                                                               (System_Func_TSource__TResult__o *)_9__49_0,
                                                               (const MethodInfo_1CB32A0 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v69 = System_Linq_Enumerable__ToArray_long_(
          v68,
          (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
  *trueDataArray = v69;
  sub_B5D560((BattleServantConfConponent_o *)trueDataArray, (System_Int32_array **)v69, v70, v71, v72, v73, v74, v75);
  v76 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v76,
    (Il2CppObject *)v46,
    Method_CharaGraphListViewManager___c__DisplayClass49_0__DistributeObjectIdByMatchCondOrNot_b__1__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
  v77 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v55,
          (System_Func_TSource__bool__o *)v76,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v78 = CharaGraphListViewManager___c_TypeInfo;
  v79 = v77;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v78 = CharaGraphListViewManager___c_TypeInfo;
  }
  v80 = v78->static_fields;
  _9__49_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)v80->__9__49_2;
  if ( !_9__49_2 )
  {
    if ( (BYTE3(v78->vtable._0_Equals.methodPtr) & 4) != 0 && !v78->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v78);
      v80 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v82 = (Il2CppObject *)v80->__9;
    _9__49_2 = (System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long__o *)sub_B5D694(System_Func_CharaGraphListViewItemBase__long__TypeInfo);
    System_Func_ItemDroppedSkillShiftInfo_ServantInfo__long____ctor(
      _9__49_2,
      v82,
      Method_CharaGraphListViewManager___c__DistributeObjectIdByMatchCondOrNot_b__49_2__,
      (const MethodInfo_2C3003C *)Method_System_Func_CharaGraphListViewItemBase__long___ctor__);
    v83 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v83->__9__49_2 = (struct System_Func_CharaGraphListViewItemBase__long__o *)_9__49_2;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v83->__9__49_2,
      (System_Int32_array **)_9__49_2,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_ItemDroppedSkillShiftInfo_ServantInfo__long_(
                                                               v79,
                                                               (System_Func_TSource__TResult__o *)_9__49_2,
                                                               (const MethodInfo_1CB32A0 *)Method_System_Linq_Enumerable_Select_CharaGraphListViewItemBase__long___);
  v91 = System_Linq_Enumerable__ToArray_long_(
          v90,
          (const MethodInfo_1CB77D4 *)Method_System_Linq_Enumerable_ToArray_long___);
  *falseDataArray = v91;
  sub_B5D560((BattleServantConfConponent_o *)falseDataArray, (System_Int32_array **)v91, v92, v93, v94, v95, v96, v97);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *__fastcall CharaGraphListViewManager__EnumerateItems(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E9696 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___, (_DWORD)method, v2, v3);
    byte_42E9696 = 1;
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                                                   (System_Collections_IEnumerable_o *)this->fields.itemList,
                                                                                   (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_CharaGraphListViewItemBase___);
}


System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *__fastcall CharaGraphListViewManager__EnumerateObjects(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  System_Collections_Generic_IEnumerable_T__o *v20; // x19
  CharaGraphListViewManager___c_c *v21; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__34_0; // x20
  Il2CppObject *v24; // x21
  struct CharaGraphListViewManager___c_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7

  if ( (byte_42E9697 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_GameObject___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Func_GameObject__CharaGraphListViewObject___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Func_GameObject__CharaGraphListViewObject__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__EnumerateObjects_b__34_0__, v14, v15, v16);
    sub_B5D5C4(&CharaGraphListViewManager___c_TypeInfo, v17, v18, v19);
    byte_42E9697 = 1;
  }
  v20 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
          (System_Collections_Generic_IEnumerable_T__o *)this->fields.objectList,
          (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_GameObject___);
  v21 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v21 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v21->static_fields;
  _9__34_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__34_0;
  if ( !_9__34_0 )
  {
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__34_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_GameObject__CharaGraphListViewObject__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
      _9__34_0,
      v24,
      Method_CharaGraphListViewManager___c__EnumerateObjects_b__34_0__,
      (const MethodInfo_2C3041C *)Method_System_Func_GameObject__CharaGraphListViewObject___ctor__);
    v25 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v25->__9__34_0 = (struct System_Func_GameObject__CharaGraphListViewObject__o *)_9__34_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v25->__9__34_0,
      (System_Int32_array **)_9__34_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  return (System_Collections_Generic_IEnumerable_CharaGraphListViewObject__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v20,
                                                                                 (System_Func_TSource__TResult__o *)_9__34_0,
                                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_GameObject__CharaGraphListViewObject___);
}


int64_t __fastcall CharaGraphListViewManager__GetAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  CharaGraphListViewManager___c__DisplayClass66_0_o *v21; // x21
  __int64 v22; // x0
  const MethodInfo *v23; // x1
  System_Collections_IEnumerable_o *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20

  if ( (byte_42E96A7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___, svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_CharaGraphServantListViewItem__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_CharaGraphServantListViewItem__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__DisplayClass66_0__GetAmountSortValue_b__0__, v15, v16, v17);
    sub_B5D5C4(&CharaGraphListViewManager___c__DisplayClass66_0_TypeInfo, v18, v19, v20);
    byte_42E96A7 = 1;
  }
  v21 = (CharaGraphListViewManager___c__DisplayClass66_0_o *)sub_B5D694(CharaGraphListViewManager___c__DisplayClass66_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass66_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.svtId = svtId;
  v24 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v23);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               v24,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_CharaGraphServantListViewItem___);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphServantListViewItem__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_CharaGraphListViewManager___c__DisplayClass66_0__GetAmountSortValue_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphServantListViewItem__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           v25,
           (System_Func_TSource__bool__o *)v26,
           (const MethodInfo_1CA8A5C *)Method_System_Linq_Enumerable_Count_CharaGraphServantListViewItem___);
}


int64_t __fastcall CharaGraphListViewManager__GetCommandCodeAmountSortValue(
        CharaGraphListViewManager_o *this,
        int32_t commandCodeId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  CharaGraphListViewManager___c__DisplayClass67_0_o *v21; // x21
  __int64 v22; // x0
  const MethodInfo *v23; // x1
  System_Collections_IEnumerable_o *v24; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x20

  if ( (byte_42E96A8 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___,
      commandCodeId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Func_CharaGraphCommandCodeListViewItem__bool___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(
      &Method_CharaGraphListViewManager___c__DisplayClass67_0__GetCommandCodeAmountSortValue_b__0__,
      v15,
      v16,
      v17);
    sub_B5D5C4(&CharaGraphListViewManager___c__DisplayClass67_0_TypeInfo, v18, v19, v20);
    byte_42E96A8 = 1;
  }
  v21 = (CharaGraphListViewManager___c__DisplayClass67_0_o *)sub_B5D694(CharaGraphListViewManager___c__DisplayClass67_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass67_0___ctor(v21, 0LL);
  if ( !v21 )
    sub_B5D69C(v22, v23);
  v21->fields.commandCodeId = commandCodeId;
  v24 = (System_Collections_IEnumerable_o *)CharaGraphListViewManager__EnumerateItems(this, v23);
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_BattleActionData_MasterBuffData_(
                                                               v24,
                                                               (const MethodInfo_1CAEFE0 *)Method_System_Linq_Enumerable_OfType_CharaGraphCommandCodeListViewItem___);
  v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphCommandCodeListViewItem__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v26,
    (Il2CppObject *)v21,
    Method_CharaGraphListViewManager___c__DisplayClass67_0__GetCommandCodeAmountSortValue_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphCommandCodeListViewItem__bool___ctor__);
  return System_Linq_Enumerable__Count_WarBoardAIRoute_RouteData_(
           v25,
           (System_Func_TSource__bool__o *)v26,
           (const MethodInfo_1CA8A5C *)Method_System_Linq_Enumerable_Count_CharaGraphCommandCodeListViewItem___);
}


CharaGraphListViewItemBase_o *__fastcall CharaGraphListViewManager__GetItem(
        CharaGraphListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  CharaGraphListViewItemBase_o *result; // x0
  __int64 v10; // x10

  if ( (byte_42E969C & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_IndexValue_ListViewItem___, index, (_DWORD)method, v3);
    sub_B5D5C4(&CharaGraphListViewItemBase_TypeInfo, v6, v7, v8);
    byte_42E969C = 1;
  }
  result = (CharaGraphListViewItemBase_o *)BasicHelper__IndexValue_WarBoardAIRoute_RouteData_(
                                             (System_Collections_Generic_List_T__o *)this->fields.itemList,
                                             index,
                                             0LL,
                                             (const MethodInfo_1AD901C *)Method_BasicHelper_IndexValue_ListViewItem___);
  if ( result )
  {
    v10 = *(&CharaGraphListViewItemBase_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) >= (unsigned int)v10 )
    {
      if ( (CharaGraphListViewItemBase_c *)result->klass->_2.typeHierarchy[v10 - 1] != CharaGraphListViewItemBase_TypeInfo )
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
    sub_B5D69C(0LL, method);
  return ListViewSort__GetScaleKindSpriteName(sort, this->fields.scaleType, 0LL);
}


void __fastcall CharaGraphListViewManager__GetSwapChoiceArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **choiceArray,
        System_Int64_array **unChoiceArray,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x22
  CharaGraphListViewManager___c_c *v23; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__48_0; // x23
  Il2CppObject *v26; // x24
  struct CharaGraphListViewManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CharaGraphListViewManager_o *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x5
  CharaGraphListViewManager___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v38; // x22
  struct CharaGraphListViewManager___c_StaticFields *v39; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__48_1; // x23
  Il2CppObject *v41; // x24
  struct CharaGraphListViewManager___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_42E969E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___,
      (_DWORD)choiceArray,
      (_DWORD)unChoiceArray,
      method);
    sub_B5D5C4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_0__, v13, v14, v15);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_1__, v16, v17, v18);
    sub_B5D5C4(&CharaGraphListViewManager___c_TypeInfo, v19, v20, v21);
    byte_42E969E = 1;
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(
                                                               this,
                                                               (const MethodInfo *)choiceArray);
  v23 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v23 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__48_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__48_0,
      v26,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v27 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v27->__9__48_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__48_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v27->__9__48_0,
      (System_Int32_array **)_9__48_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                         v22,
                                         (System_Func_TSource__bool__o *)_9__48_0,
                                         (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v37 = CharaGraphListViewManager___c_TypeInfo;
  v38 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v34;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v37 = CharaGraphListViewManager___c_TypeInfo;
  }
  v39 = v37->static_fields;
  _9__48_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v39->__9__48_1;
  if ( !_9__48_1 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v39 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)v39->__9;
    _9__48_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__48_1,
      v41,
      Method_CharaGraphListViewManager___c__GetSwapChoiceArray_b__48_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v42 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v42->__9__48_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__48_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v42->__9__48_1,
      (System_Int32_array **)_9__48_1,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !this )
    sub_B5D69C(v34, v35);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v34,
    unChoiceArray,
    choiceArray,
    v38,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__48_1,
    v36);
}


void __fastcall CharaGraphListViewManager__GetSwapLockArray(
        CharaGraphListViewManager_o *this,
        System_Int64_array **lockArray,
        System_Int64_array **unlockArray,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x22
  CharaGraphListViewManager___c_c *v23; // x8
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__47_0; // x23
  Il2CppObject *v26; // x24
  struct CharaGraphListViewManager___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  CharaGraphListViewManager_o *v34; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x5
  CharaGraphListViewManager___c_c *v37; // x8
  System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *v38; // x22
  struct CharaGraphListViewManager___c_StaticFields *v39; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__47_1; // x23
  Il2CppObject *v41; // x24
  struct CharaGraphListViewManager___c_StaticFields *v42; // x0
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7

  if ( (byte_42E969D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___,
      (_DWORD)lockArray,
      (_DWORD)unlockArray,
      method);
    sub_B5D5C4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v7, v8, v9);
    sub_B5D5C4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_0__, v13, v14, v15);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_1__, v16, v17, v18);
    sub_B5D5C4(&CharaGraphListViewManager___c_TypeInfo, v19, v20, v21);
    byte_42E969D = 1;
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(
                                                               this,
                                                               (const MethodInfo *)lockArray);
  v23 = CharaGraphListViewManager___c_TypeInfo;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v23 = CharaGraphListViewManager___c_TypeInfo;
  }
  static_fields = v23->static_fields;
  _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__47_0;
  if ( !_9__47_0 )
  {
    if ( (BYTE3(v23->vtable._0_Equals.methodPtr) & 4) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v26 = (Il2CppObject *)static_fields->__9;
    _9__47_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__47_0,
      v26,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_0__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v27 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v27->__9__47_0 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__47_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v27->__9__47_0,
      (System_Int32_array **)_9__47_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (CharaGraphListViewManager_o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                         v22,
                                         (System_Func_TSource__bool__o *)_9__47_0,
                                         (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
  v37 = CharaGraphListViewManager___c_TypeInfo;
  v38 = (System_Collections_Generic_IEnumerable_CharaGraphListViewItemBase__o *)v34;
  if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
    v37 = CharaGraphListViewManager___c_TypeInfo;
  }
  v39 = v37->static_fields;
  _9__47_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)v39->__9__47_1;
  if ( !_9__47_1 )
  {
    if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v39 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)v39->__9;
    _9__47_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      _9__47_1,
      v41,
      Method_CharaGraphListViewManager___c__GetSwapLockArray_b__47_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
    v42 = CharaGraphListViewManager___c_TypeInfo->static_fields;
    v42->__9__47_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__47_1;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v42->__9__47_1,
      (System_Int32_array **)_9__47_1,
      v43,
      v44,
      v45,
      v46,
      v47,
      v48);
  }
  if ( !this )
    sub_B5D69C(v34, v35);
  CharaGraphListViewManager__DistributeObjectIdByMatchCondOrNot(
    v34,
    unlockArray,
    lockArray,
    v38,
    (System_Func_CharaGraphListViewItemBase__bool__o *)_9__47_1,
    v36);
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
  sub_B5D560(
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
      sub_B5D69C(v11, v12);
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
    sub_B5D69C(this, 0LL);
  return !item->fields.isTermination || ListViewManager__ClippingItem_23920288((ListViewManager_o *)this, item, 0LL);
}


void __fastcall CharaGraphListViewManager__JumpItemUserId(
        CharaGraphListViewManager_o *this,
        int64_t targetObjectId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CharaGraphListViewManager___c__DisplayClass60_0_o *v18; // x21
  __int64 v19; // x0
  const MethodInfo *v20; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v22; // x22
  WarBoardData_SquareRangeSearch_o *v23; // x0

  if ( (byte_42E96A2 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___,
      targetObjectId,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__DisplayClass60_0__JumpItemUserId_b__0__, v12, v13, v14);
    sub_B5D5C4(&CharaGraphListViewManager___c__DisplayClass60_0_TypeInfo, v15, v16, v17);
    byte_42E96A2 = 1;
  }
  v18 = (CharaGraphListViewManager___c__DisplayClass60_0_o *)sub_B5D694(CharaGraphListViewManager___c__DisplayClass60_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass60_0___ctor(v18, 0LL);
  if ( !v18 )
    sub_B5D69C(v19, v20);
  v18->fields.targetObjectId = targetObjectId;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(this, v20);
  v22 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v22,
    (Il2CppObject *)v18,
    Method_CharaGraphListViewManager___c__DisplayClass60_0__JumpItemUserId_b__0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
  v23 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
          v21,
          (System_Func_TSource__bool__o *)v22,
          (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_CharaGraphListViewItemBase___);
  if ( v23 )
    ListViewManager__JumpItem((ListViewManager_o *)this, v23->fields.range, 0LL);
}


void __fastcall CharaGraphListViewManager__ModifyList(
        CharaGraphListViewManager_o *this,
        bool isIconSizeChange,
        bool isNeedSort,
        const MethodInfo *method)
{
  char v7; // w1
  char v8; // w2
  __int64 v9; // x3
  char v10; // w1
  char v11; // w2
  __int64 v12; // x3
  char v13; // w1
  char v14; // w2
  __int64 v15; // x3
  char v16; // w1
  char v17; // w2
  __int64 v18; // x3
  char v19; // w1
  char v20; // w2
  __int64 v21; // x3
  char v22; // w1
  char v23; // w2
  __int64 v24; // x3
  char v25; // w1
  char v26; // w2
  __int64 v27; // x3
  char v28; // w1
  char v29; // w2
  __int64 v30; // x3
  char v31; // w1
  char v32; // w2
  __int64 v33; // x3
  char v34; // w1
  char v35; // w2
  __int64 v36; // x3
  char v37; // w1
  char v38; // w2
  __int64 v39; // x3
  char v40; // w1
  char v41; // w2
  __int64 v42; // x3
  __int64 v43; // x21
  __int64 v44; // x0
  __int64 v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  const MethodInfo *v52; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  System_Collections_Generic_IEnumerable_T__o *v54; // x22
  __int64 v55; // x25
  char v56; // w28
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v63; // x23
  CharaGraphListViewManager___c_c *v64; // x0
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x8
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *_9__43_1; // x23
  Il2CppObject *v67; // x24
  struct CharaGraphListViewManager___c_StaticFields *v68; // x0
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Collections_Generic_IEnumerable_T__o *v75; // x22
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v76; // x23

  if ( (byte_42E969B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_CharaGraphListViewItemBase___ctor__, isIconSizeChange, isNeedSort, method);
    sub_B5D5C4(&System_Action_CharaGraphListViewItemBase__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_BasicHelper_ForEach_CharaGraphListViewItemBase___, v10, v11, v12);
    sub_B5D5C4(&CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___, v19, v20, v21);
    sub_B5D5C4(&Method_System_Func_CharaGraphListViewItemBase__bool___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Func_CharaGraphListViewItemBase__bool__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__ModifyList_b__43_1__, v28, v29, v30);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__0__, v31, v32, v33);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__2__, v34, v35, v36);
    sub_B5D5C4(&CharaGraphListViewManager___c__DisplayClass43_0_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&CharaGraphListViewManager___c_TypeInfo, v40, v41, v42);
    byte_42E969B = 1;
  }
  v43 = sub_B5D694(CharaGraphListViewManager___c__DisplayClass43_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass43_0___ctor((CharaGraphListViewManager___c__DisplayClass43_0_o *)v43, 0LL);
  if ( !v43 )
    sub_B5D69C(v44, v45);
  *(_QWORD *)(v43 + 24) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v43 + 24), (System_Int32_array **)this, v46, v47, v48, v49, v50, v51);
  v53 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateItems(this, v52);
  v54 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
                                                         v53,
                                                         (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_CharaGraphListViewItemBase___);
  v55 = sub_B5D694(CharaGraphDefine_CharaGraphItemBulkModifyArgs_TypeInfo);
  v56 = ~isIconSizeChange;
  System_Object___ctor((Il2CppObject *)v55, 0LL);
  *(_BYTE *)(v55 + 16) = !isIconSizeChange;
  *(_QWORD *)(v43 + 16) = v55;
  sub_B5D560((BattleServantConfConponent_o *)(v43 + 16), (System_Int32_array **)v55, v57, v58, v59, v60, v61, v62);
  v63 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CharaGraphListViewItemBase__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v63,
    (Il2CppObject *)v43,
    Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_CharaGraphListViewItemBase___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v54,
    (System_Action_T__o *)v63,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  if ( (v56 & 1) == 0 )
  {
    v64 = CharaGraphListViewManager___c_TypeInfo;
    if ( (BYTE3(CharaGraphListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CharaGraphListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CharaGraphListViewManager___c_TypeInfo);
      v64 = CharaGraphListViewManager___c_TypeInfo;
    }
    static_fields = v64->static_fields;
    _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)static_fields->__9__43_1;
    if ( !_9__43_1 )
    {
      if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
      }
      v67 = (Il2CppObject *)static_fields->__9;
      _9__43_1 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphListViewItemBase__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        _9__43_1,
        v67,
        Method_CharaGraphListViewManager___c__ModifyList_b__43_1__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphListViewItemBase__bool___ctor__);
      v68 = CharaGraphListViewManager___c_TypeInfo->static_fields;
      v68->__9__43_1 = (struct System_Func_CharaGraphListViewItemBase__bool__o *)_9__43_1;
      sub_B5D560(
        (BattleServantConfConponent_o *)&v68->__9__43_1,
        (System_Int32_array **)_9__43_1,
        v69,
        v70,
        v71,
        v72,
        v73,
        v74);
    }
    v75 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)v54,
                                                           (System_Func_TSource__bool__o *)_9__43_1,
                                                           (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewItemBase___);
    v76 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CharaGraphListViewItemBase__TypeInfo);
    System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
      v76,
      (Il2CppObject *)v43,
      Method_CharaGraphListViewManager___c__DisplayClass43_0__ModifyList_b__2__,
      (const MethodInfo_258B320 *)Method_System_Action_CharaGraphListViewItemBase___ctor__);
    BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
      v75,
      (System_Action_T__o *)v76,
      (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_CharaGraphListViewItemBase___);
  }
  if ( isNeedSort )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickBonusFilterKind(
        CharaGraphListViewManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_42E96A6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListViewManager_OnClickBonusFilterKind__, (_DWORD)method, v2, v3);
    byte_42E96A6 = 1;
  }
  v5 = Method_CharaGraphListViewManager_OnClickBonusFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickBonusFilterKind__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListViewManager_OnClickBonusFilterKind__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(0LL, v7);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x20
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v36; // x21
  int32_t v37; // w0
  ListViewSort_o *sort; // x19
  int32_t v39; // w22
  ServantFilterSelectMenu_CallbackFunc_o *v40; // x23

  if ( (byte_42E96A3 & 1) == 0 )
  {
    sub_B5D5C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, (_DWORD)endSelectCallback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_CharaGraphListViewManager_OnClickFilterKind__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    sub_B5D5C4(
      &Method_CharaGraphListViewManager___c__DisplayClass61_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
      v12,
      v13,
      v14);
    sub_B5D5C4(&CharaGraphListViewManager___c__DisplayClass61_0_TypeInfo, v15, v16, v17);
    byte_42E96A3 = 1;
  }
  v18 = sub_B5D694(CharaGraphListViewManager___c__DisplayClass61_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass61_0___ctor((CharaGraphListViewManager___c__DisplayClass61_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_9;
  *(_QWORD *)(v18 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)this, v21, v22, v23, v24, v25, v26);
  *(_QWORD *)(v18 + 24) = endSelectCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v18 + 24),
    (System_Int32_array **)endSelectCallback,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = Method_CharaGraphListViewManager_OnClickFilterKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickFilterKind__ + 75) & 2) != 0 )
    v33 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListViewManager_OnClickFilterKind__);
  v34 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v33, v33[3]);
  OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v36 = (CommonUI_o *)Instance,
        v37 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._7_get_FilterKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.methodPtr),
        sort = this->fields.sort,
        v39 = v37,
        v40 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B5D694(ServantFilterSelectMenu_CallbackFunc_TypeInfo),
        ServantFilterSelectMenu_CallbackFunc___ctor(
          v40,
          (Il2CppObject *)v18,
          Method_CharaGraphListViewManager___c__DisplayClass61_0__OnClickFilterKind_g__EndSelectFilterKind_0__,
          0LL),
        !v36) )
  {
LABEL_9:
    sub_B5D69C(Instance, v20);
  }
  CommonUI__OpenServantFilterSelectMenu(v36, v39, sort, v40, -1, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  __int64 v8; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_42E96A5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListViewManager_OnClickSortAscendingOrder__, (_DWORD)method, v2, v3);
    byte_42E96A5 = 1;
  }
  v5 = Method_CharaGraphListViewManager_OnClickSortAscendingOrder__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortAscendingOrder__ + 75) & 2) != 0 )
    v5 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListViewManager_OnClickSortAscendingOrder__);
  v6 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v5, v5[3]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B5D69C(v7, v8);
  sort->fields.isAscendingOrder ^= 1u;
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
}


void __fastcall CharaGraphListViewManager__OnClickSortKind(CharaGraphListViewManager_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  _QWORD *v14; // x0
  System_Reflection_MethodBase_o *v15; // x0
  WebViewManager_o *Instance; // x0
  __int64 v17; // x1
  struct CharaGraphListViewPatternBase_o *ListViewPattern_k__BackingField; // x8
  CommonUI_o *v19; // x20
  int32_t v20; // w0
  ListViewSort_o *sort; // x21
  int32_t v22; // w22
  ServantSortSelectMenu_CallbackFunc_o *v23; // x23

  if ( (byte_42E96A4 & 1) == 0 )
  {
    sub_B5D5C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_CharaGraphListViewManager_OnClickSortKind__, v5, v6, v7);
    sub_B5D5C4(&Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_62_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42E96A4 = 1;
  }
  v14 = Method_CharaGraphListViewManager_OnClickSortKind__;
  if ( (*((_BYTE *)Method_CharaGraphListViewManager_OnClickSortKind__ + 75) & 2) != 0 )
    v14 = (_QWORD *)sub_B5D5CC(Method_CharaGraphListViewManager_OnClickSortKind__);
  v15 = (System_Reflection_MethodBase_o *)sub_B5D5A8(v14, v14[3]);
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  ListViewPattern_k__BackingField = this->fields._ListViewPattern_k__BackingField;
  if ( !ListViewPattern_k__BackingField
    || (v19 = (CommonUI_o *)Instance,
        v20 = ((__int64 (__fastcall *)(struct CharaGraphListViewPatternBase_o *, Il2CppMethodPointer))ListViewPattern_k__BackingField->klass->vtable._8_get_SortKind.method)(
                this->fields._ListViewPattern_k__BackingField,
                ListViewPattern_k__BackingField->klass->vtable._9_GetItemDrawPattern.methodPtr),
        sort = this->fields.sort,
        v22 = v20,
        v23 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B5D694(ServantSortSelectMenu_CallbackFunc_TypeInfo),
        ServantSortSelectMenu_CallbackFunc___ctor(
          v23,
          (Il2CppObject *)this,
          Method_CharaGraphListViewManager__OnClickSortKind_g__EndSelectSortKind_62_0__,
          0LL),
        !v19) )
  {
    sub_B5D69C(Instance, v17);
  }
  CommonUI__OpenServantSortSelectMenu(v19, v22, sort, 0, v23, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  CharaGraphListViewManager___c__DisplayClass54_0_o *v21; // x21
  UIScrollView_o *v22; // x0
  const MethodInfo *v23; // x1
  System_Collections_Generic_IEnumerable_T__o *v24; // x20
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v25; // x22
  UnityEngine_Object_o *scrollView; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_o *FuncOnMoveEnd; // x20

  if ( (byte_42E96A1 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_CharaGraphListViewObject___ctor__, mode, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_CharaGraphListViewObject__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_BasicHelper_ForEach_CharaGraphListViewObject___, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_CharaGraphListViewManager___c__DisplayClass54_0__RequestListObject_b__0__, v15, v16, v17);
    sub_B5D5C4(&CharaGraphListViewManager___c__DisplayClass54_0_TypeInfo, v18, v19, v20);
    byte_42E96A1 = 1;
  }
  v21 = (CharaGraphListViewManager___c__DisplayClass54_0_o *)sub_B5D694(CharaGraphListViewManager___c__DisplayClass54_0_TypeInfo);
  CharaGraphListViewManager___c__DisplayClass54_0___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_14;
  v21->fields.mode = mode;
  v24 = (System_Collections_Generic_IEnumerable_T__o *)CharaGraphListViewManager__EnumerateObjects(this, v23);
  v25 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_CharaGraphListViewObject__TypeInfo);
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
    v25,
    (Il2CppObject *)v21,
    Method_CharaGraphListViewManager___c__DisplayClass54_0__RequestListObject_b__0__,
    (const MethodInfo_258B320 *)Method_System_Action_CharaGraphListViewObject___ctor__);
  BasicHelper__ForEach_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
    v24,
    (System_Action_T__o *)v25,
    (const MethodInfo_1AD82D8 *)Method_BasicHelper_ForEach_CharaGraphListViewObject___);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    v22 = this->fields.scrollView;
    if ( !v22 )
      goto LABEL_14;
    ((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v22->klass->vtable._8_UpdateScrollbars.method)(
      v22,
      1LL,
      v22->klass->vtable._9_SetDragAmount.methodPtr);
    v22 = this->fields.scrollView;
    if ( !v22 )
      goto LABEL_14;
    if ( (((__int64 (__fastcall *)(UIScrollView_o *, Il2CppMethodPointer))v22->klass->vtable._6_get_shouldMoveVertically.method)(
            v22,
            v22->klass->vtable._7_get_shouldMove.methodPtr) & 1) != 0 )
    {
      v22 = this->fields.scrollView;
      if ( v22 )
      {
        UIScrollView__UpdatePosition(v22, 0LL);
        goto LABEL_13;
      }
LABEL_14:
      sub_B5D69C(v22, v23);
    }
  }
LABEL_13:
  FuncOnMoveEnd = this->fields.FuncOnMoveEnd;
  this->fields.FuncOnMoveEnd = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.FuncOnMoveEnd, 0LL, v27, v28, v29, v30, v31, v32);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.seed, (System_Int32_array **)v10, v2, v3, v4, v5, v6, v7);
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
        sub_B5D560(
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
    sub_B5D69C(ListViewPattern_k__BackingField, method);
  }
  v11 = (struct System_Int32_array *)((__int64 (__fastcall *)(ListViewSort_o *, void *))ListViewPattern_k__BackingField->klass[1]._1.events)(
                                       ListViewPattern_k__BackingField,
                                       ListViewPattern_k__BackingField->klass[1]._1.properties);
  p_ServantFilterIds_k__BackingField = (System_Collections_ICollection_o **)&this->fields._ServantFilterIds_k__BackingField;
  this->fields._ServantFilterIds_k__BackingField = v11;
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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


void __fastcall CharaGraphListViewManager__SetMode_26687784(
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


void __fastcall CharaGraphListViewManager__SetMode_26706252(
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
  sub_B5D560(
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x10
  _BOOL8 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  int32_t v13; // w1

  v4 = (UnityEngine_Object_o *)obj;
  if ( (byte_42E96A0 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewObject_TypeInfo, (_DWORD)obj, (_DWORD)item, method);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E96A0 = 1;
  }
  if ( v4 )
  {
    v9 = *(&CharaGraphListViewObject_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v4->klass->_2.bitflags2 + 1) >= (unsigned int)v9 )
    {
      if ( (CharaGraphListViewObject_c *)v4->klass->_2.typeHierarchy[v9 - 1] != CharaGraphListViewObject_TypeInfo )
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
  v10 = UnityEngine_Object__op_Equality(v4, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !v4 )
      sub_B5D69C(v10, v11);
    if ( this->fields.initMode == 2 )
      v13 = 2;
    else
      v13 = 1;
    CharaGraphListViewObject__Init((CharaGraphListViewObject_o *)v4, v13, v12);
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
    sub_B5D69C(0LL, value);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  System_String_o *ListViewPattern_k__BackingField; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x9
  UnityEngine_Object_o *emptyMessageLabel; // x21
  System_String_o *v17; // x20
  UILabel_o *v18; // x19

  if ( (byte_42E96AA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/, v11, v12, v13);
    byte_42E96AA = 1;
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
    v17 = (System_String_o *)StringLiteral_12025/*"SERVANT_SORT_FILTER_RESULT_EMPTY"*/;
  else
    v17 = ListViewPattern_k__BackingField;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(emptyMessageLabel, 0LL, 0LL) )
  {
    v18 = this->fields.emptyMessageLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    ListViewPattern_k__BackingField = LocalizationManager__Get(v17, 0LL);
    if ( v18 )
    {
      UILabel__set_text(v18, ListViewPattern_k__BackingField, 0LL);
      return;
    }
LABEL_18:
    sub_B5D69C(ListViewPattern_k__BackingField, method);
  }
}


void __fastcall CharaGraphListViewManager___OnClickSortKind_g__EndSelectSortKind_62_0(
        CharaGraphListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_42E96AC & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E96AC = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v7);
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
    sub_B5D69C(this, 0LL);
  Item = (ListViewItem_o *)CharaGraphListViewObject__GetItem(x, (const MethodInfo *)x);
  return CharaGraphListViewManager__IsClippingOrNoTermination(this, Item, v5);
}


void __fastcall CharaGraphListViewManager__add_FuncOnClick(
        CharaGraphListViewManager_o *this,
        CharaGraphListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *FuncOnClick; // x21
  struct CharaGraphListViewManager_CallbackFunc_o **p_FuncOnClick; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListViewManager_o *v11; // x0
  CharaGraphListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E9692 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9692 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(FuncOnClick, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CharaGraphListViewManager_CallbackFunc_c *)v8->klass != CharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_FuncOnClick, v8, FuncOnClick);
    v10 = FuncOnClick == (System_Delegate_o *)v9;
    FuncOnClick = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListViewManager_o *)sub_B5D990(v8);
  CharaGraphListViewManager__remove_FuncOnClick(v11, v12, v13);
}


void __fastcall CharaGraphListViewManager__add_FuncOnMoveEnd(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *FuncOnMoveEnd; // x21
  struct System_Action_o **p_FuncOnMoveEnd; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E9694 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9694 = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(FuncOnMoveEnd, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_FuncOnMoveEnd, v8, FuncOnMoveEnd);
    v10 = FuncOnMoveEnd == (System_Delegate_o *)v9;
    FuncOnMoveEnd = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListViewManager_o *)sub_B5D990(v8);
  CharaGraphListViewManager__remove_FuncOnMoveEnd(v11, v12, v13);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_42E9699 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CharaGraphListViewManager__get_ClippingObjectList_b__38_0__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_CharaGraphListViewObject__bool___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_CharaGraphListViewObject__bool__TypeInfo, v14, v15, v16);
    byte_42E9699 = 1;
  }
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateObjects(this, method);
  v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_CharaGraphListViewObject__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v18,
    (Il2CppObject *)this,
    Method_CharaGraphListViewManager__get_ClippingObjectList_b__38_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_CharaGraphListViewObject__bool___ctor__);
  v19 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
          v17,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_CharaGraphListViewObject___);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v19,
                                                                          (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x0

  if ( (byte_42E9698 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___, (_DWORD)method, v2, v3);
    byte_42E9698 = 1;
  }
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)CharaGraphListViewManager__EnumerateObjects(this, method);
  return (System_Collections_Generic_List_CharaGraphListViewObject__o *)System_Linq_Enumerable__ToList_WarBoardManager_WarBoardOnboardSkillTarget_(
                                                                          v5,
                                                                          (const MethodInfo_1CBA734 *)Method_System_Linq_Enumerable_ToList_CharaGraphListViewObject___);
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
  __int64 v3; // x3
  System_Delegate_o *FuncOnClick; // x21
  struct CharaGraphListViewManager_CallbackFunc_o **p_FuncOnClick; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListViewManager_o *v11; // x0
  System_Action_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42E9693 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9693 = 1;
  }
  FuncOnClick = (System_Delegate_o *)this->fields.FuncOnClick;
  p_FuncOnClick = &this->fields.FuncOnClick;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(FuncOnClick, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CharaGraphListViewManager_CallbackFunc_c *)v8->klass != CharaGraphListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_FuncOnClick, v8, FuncOnClick);
    v10 = FuncOnClick == (System_Delegate_o *)v9;
    FuncOnClick = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListViewManager_o *)sub_B5D990(v8);
  CharaGraphListViewManager__add_FuncOnMoveEnd(v11, v12, v13);
}


void __fastcall CharaGraphListViewManager__remove_FuncOnMoveEnd(
        CharaGraphListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Delegate_o *FuncOnMoveEnd; // x21
  struct System_Action_o **p_FuncOnMoveEnd; // x20
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CharaGraphListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42E9695 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E9695 = 1;
  }
  FuncOnMoveEnd = (System_Delegate_o *)this->fields.FuncOnMoveEnd;
  p_FuncOnMoveEnd = &this->fields.FuncOnMoveEnd;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(FuncOnMoveEnd, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_c *)v8->klass != System_Action_TypeInfo )
        break;
    }
    v9 = sub_B51FDC(p_FuncOnMoveEnd, v8, FuncOnMoveEnd);
    v10 = FuncOnMoveEnd == (System_Delegate_o *)v9;
    FuncOnMoveEnd = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CharaGraphListViewManager_o *)sub_B5D990(v8);
  CharaGraphListViewManager__get_BonusEventIds(v11, v12);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall CharaGraphListViewManager_CallbackFunc__BeginInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        int32_t kind,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v13[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v14; // [xsp+18h] [xbp-28h] BYREF
  int32_t v15; // [xsp+1Ch] [xbp-24h] BYREF

  v14 = result;
  v15 = kind;
  if ( (byte_42E5E57 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, kind, result, callback);
    sub_B5D5C4(&CharaGraphListViewManager_ResultKind_TypeInfo, v9, v10, v11);
    byte_42E5E57 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(CharaGraphListViewManager_ResultKind_TypeInfo, &v15);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  return (System_IAsyncResult_o *)sub_B5D568(this, v13, callback, object);
}


void __fastcall CharaGraphListViewManager_CallbackFunc__EndInvoke(
        CharaGraphListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, *(_QWORD *)&result);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct CharaGraphListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_42E5E52 & 1) == 0 )
  {
    sub_B5D5C4(&CharaGraphListViewManager___c_TypeInfo, v1, v2, v3);
    byte_42E5E52 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(CharaGraphListViewManager___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = CharaGraphListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CharaGraphListViewManager___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return ((__int64 (__fastcall *)(CharaGraphListViewItemBase_o *, Il2CppMethodPointer))x->klass->vtable._6_unknown.method)(
           x,
           x->klass->vtable._7_get_IsCanNotSelect.methodPtr);
}


CharaGraphListViewObject_o *__fastcall CharaGraphListViewManager___c___EnumerateObjects_b__34_0(
        CharaGraphListViewManager___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42E5E53 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_B5D5C4(
                                                &Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___,
                                                (_DWORD)x,
                                                (_DWORD)method,
                                                v3);
    byte_42E5E53 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
  return (CharaGraphListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                         x,
                                         (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_CharaGraphListViewObject___);
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__48_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._IsSwapChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapChoiceArray_b__48_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._IsChoice_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__47_0(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._IsSwapLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___GetSwapLockArray_b__47_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields._IsLock_k__BackingField;
}


bool __fastcall CharaGraphListViewManager___c___ModifyList_b__43_1(
        CharaGraphListViewManager___c_o *this,
        CharaGraphListViewItemBase_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *viewObject; // x19

  if ( (byte_42E5E54 & 1) == 0 )
  {
    this = (CharaGraphListViewManager___c_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5E54 = 1;
  }
  if ( !x )
    sub_B5D69C(this, x);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, x);
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
  __int64 v3; // x3
  struct System_Func_CharaGraphListViewItemBase__bool__o *cond; // x0

  if ( (byte_42E5E55 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_CharaGraphListViewItemBase__bool__Invoke__, (_DWORD)x, (_DWORD)method, v3);
    byte_42E5E55 = 1;
  }
  cond = this->fields.cond;
  if ( !cond )
    sub_B5D69C(0LL, x);
  return !System_Func_BattleBuffData_BuffData__bool___Invoke(
            (System_Func_BattleBuffData_BuffData__bool__o *)cond,
            (BattleBuffData_BuffData_o *)x,
            (const MethodInfo_2C2ECE4 *)Method_System_Func_CharaGraphListViewItemBase__bool__Invoke__);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  void *_4__this; // x0

  if ( (byte_42E5E56 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ActionExtensions_Call_bool___, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    byte_42E5E56 = 1;
  }
  if ( isDecide )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this
      || (ListViewManager__SortItem((ListViewManager_o *)_4__this, -1, 0, -1, 0LL),
          (_4__this = this->fields.__4__this) == 0LL) )
    {
LABEL_9:
      sub_B5D69C(_4__this, isDecide);
    }
    ListViewManager__CheckScroll((ListViewManager_o *)_4__this, *((_DWORD *)_4__this + 86), 0LL);
  }
  ActionExtensions__Call_bool_(
    (System_Action_T__o *)this->fields.endSelectCallback,
    isDecide,
    (const MethodInfo_2CECD0C *)Method_ActionExtensions_Call_bool___);
  _4__this = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields._CommandCodeId_k__BackingField == this->fields.commandCodeId;
}