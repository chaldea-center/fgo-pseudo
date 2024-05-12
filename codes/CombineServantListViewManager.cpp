// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager___cctor(const MethodInfo *method)
{
  int v1; // s3
  float v2; // s4
  float v3; // s5
  float v4; // s6
  CombineServantListViewManager_c *v5; // x8
  int v6; // s2
  int v7; // s0
  int v8; // s1
  CombineServantListViewManager_c *v9; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct UnityEngine_Color_o v18; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_438E780 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&StringLiteral_4288/*"CombineServant"*/);
    byte_438E780 = 1;
  }
  CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL = 0.375;
  CombineServantListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  v5 = CombineServantListViewManager_TypeInfo;
  CombineServantListViewManager_TypeInfo->static_fields->LIMIT_UP_FILTER2_MAX_KIND_NUM = 2;
  v5->static_fields->BASE_SVT_NAME_MAX_WIDTH = 132;
  v6 = 1050790593;
  v5->static_fields->RES_LVUP_ARROW_SPACING = 13;
  v7 = 1065185444;
  v8 = 1064430469;
  v18 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v1 - 3), v2, v3, v4, (const MethodInfo *)&v18);
  v9 = CombineServantListViewManager_TypeInfo;
  CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR = v18;
  v9->static_fields->SCROLL_TO_ITEM_OFFSET = 4.5;
  static_fields = v9->static_fields;
  v11 = (System_Int32_array **)StringLiteral_4288/*"CombineServant"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4288/*"CombineServant"*/;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v11, v12, v13, v14, v15, v16, v17);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  CheckCombineResStatus_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_List_long__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_438E77F & 1) == 0 )
  {
    sub_B775C4(&CheckCombineResStatus_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    byte_438E77F = 1;
  }
  this->fields.selectMax = 20;
  v3 = (CheckCombineResStatus_o *)sub_B77694(CheckCombineResStatus_TypeInfo);
  CheckCombineResStatus___ctor(v3, 0LL);
  this->fields.combineResStatus = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v10,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.tempMaterialUserServantIdList,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CombineServantListViewManager__AfterCheckMaterial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  const MethodInfo *v10; // x1
  int64_t tempMaterialUserServantIdList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  System_Collections_Generic_List_long__o *v13; // x0
  System_Collections_Generic_List_long__o *v14; // x22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  __int64 v18; // x9
  _BOOL8 IsSelect; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x1
  int64_t UserSvtId; // x0
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__176_0; // x23
  Il2CppObject *v25; // x24
  struct CombineServantListViewManager___c_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_List_long__o *v33; // x23
  int size; // w24
  int v35; // w28
  __int64 v36; // x26
  unsigned int v37; // w8
  unsigned int v38; // w21
  __int128 v39; // q0
  __int64 v40; // x8
  struct System_Int64_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  const MethodInfo *v48; // x2
  const MethodInfo *v49; // x2
  const MethodInfo *v50; // x2
  int v51; // w8
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v55; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_438E748 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Comparison_CombineServantListViewItem___ctor__);
    sub_B775C4(&System_Comparison_CombineServantListViewItem__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__176_0__);
    sub_B775C4(&CombineServantListViewManager___c_TypeInfo);
    byte_438E748 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v3 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v3,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.selectedMaterialUserServantIdList = v3;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  tempMaterialUserServantIdList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v13 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v14 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  tempMaterialUserServantIdList = (int64_t)this->fields.itemList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v54,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tempMaterialUserServantIdList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v55.fields.current = (Il2CppObject *)v54.fields.fakeValue;
  *(_OWORD *)&v55.fields.list = *(_OWORD *)&v54.fields.currentCryptoKey;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v55,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v15 )
      break;
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v55.fields.current;
    if ( !v55.fields.current )
      goto LABEL_56;
    v18 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v55.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v18
      || (CombineServantListViewItem_c *)v55.fields.current->klass->_2.typeHierarchy[v18 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B77990(v55.fields.current);
LABEL_56:
      sub_B7769C(v15, v16);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v55.fields.current, 0LL);
    if ( IsSelect )
    {
      if ( !v12 )
        sub_B7769C(IsSelect, v20);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v12,
        current,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      if ( current[3].fields.eventId >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v21);
        if ( !v14 )
          sub_B7769C(UserSvtId, UserSvtId);
        System_Collections_Generic_List_long___Add(
          v14,
          UserSvtId,
          (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v55,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  tempMaterialUserServantIdList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
    tempMaterialUserServantIdList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  static_fields = *(struct CombineServantListViewManager___c_StaticFields **)(tempMaterialUserServantIdList + 184);
  _9__176_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__176_0;
  if ( !_9__176_0 )
  {
    if ( (*(_BYTE *)(tempMaterialUserServantIdList + 307) & 4) != 0 && !*(_DWORD *)(tempMaterialUserServantIdList + 224) )
    {
      j_il2cpp_runtime_class_init_0(tempMaterialUserServantIdList);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__176_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B77694(System_Comparison_CombineServantListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__176_0,
      v25,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__176_0__,
      (const MethodInfo_2B42C0C *)Method_System_Comparison_CombineServantListViewItem___ctor__);
    v26 = CombineServantListViewManager___c_TypeInfo->static_fields;
    v26->__9__176_0 = (struct System_Comparison_CombineServantListViewItem__o *)_9__176_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v26->__9__176_0,
      (System_Int32_array **)_9__176_0,
      v27,
      v28,
      v29,
      v30,
      v31,
      v32);
  }
  if ( !v12 )
LABEL_54:
    sub_B7769C(tempMaterialUserServantIdList, v10);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v12,
    (System_Comparison_T__o *)_9__176_0,
    (const MethodInfo_3055374 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v33 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v33,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  size = v12->fields._size;
  if ( size >= 1 )
  {
    v35 = 0;
    v36 = 4LL;
    v37 = v12->fields._size;
    while ( 1 )
    {
      v38 = v36 - 4;
      if ( v37 <= (int)v36 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      tempMaterialUserServantIdList = *((_QWORD *)&v12->fields._items->obj.klass + v36);
      if ( !tempMaterialUserServantIdList )
        goto LABEL_54;
      tempMaterialUserServantIdList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                                                 (CombineServantListViewItem_o *)tempMaterialUserServantIdList,
                                                 v10);
      if ( !tempMaterialUserServantIdList )
        goto LABEL_54;
      v39 = *(_OWORD *)(tempMaterialUserServantIdList + 32);
      *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)(tempMaterialUserServantIdList + 16);
      *(_OWORD *)&v54.fields.fakeValue = v39;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v53 = v54;
      tempMaterialUserServantIdList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v53, 0LL);
      if ( !v33 )
        goto LABEL_54;
      System_Collections_Generic_List_long___Add(
        v33,
        tempMaterialUserServantIdList,
        (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v12->fields._size <= v38 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v40 = *((_QWORD *)&v12->fields._items->obj.klass + v36);
      if ( !v40 )
        goto LABEL_54;
      if ( *(_DWORD *)(v40 + 148) > v35 )
      {
        if ( v12->fields._size <= v38 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v35 = *(_DWORD *)(v40 + 148);
        if ( v12->fields._size <= v38 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        this->fields.lastSelectIndex = *(_DWORD *)(v40 + 24);
      }
      if ( (int)v36 - 3 >= size )
        break;
      v37 = v12->fields._size;
      ++v36;
    }
  }
  tempMaterialUserServantIdList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)v33,
    (const MethodInfo_30EBFEC *)Method_System_Collections_Generic_List_long__AddRange__);
  tempMaterialUserServantIdList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)v33,
    (const MethodInfo_30EBFEC *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v14 )
    goto LABEL_54;
  v41 = System_Collections_Generic_List_long___ToArray(
          v14,
          (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v41;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.highRarityList,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v12,
    v48);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v49);
  CombineServantListViewManager__SetStatusKind(this, 0, v50);
  tempMaterialUserServantIdList = (int64_t)this->fields.combineRootComponent;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  v51 = *(_DWORD *)(tempMaterialUserServantIdList + 428);
  if ( v51 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)tempMaterialUserServantIdList, 0LL);
  }
  else if ( v51 == 3 )
  {
    CombineRootComponent__SelectMaterialSvt((CombineRootComponent_o *)tempMaterialUserServantIdList, 0LL);
  }
}


void __fastcall CombineServantListViewManager__CancelDragEnd(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        CombineServantListViewManager__CancelDragSelect(this, dragStartIndex++, v2);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        CombineServantListViewManager__CancelDragSelect(this, dragEndIndex++, v2);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  CombineServantListViewManager__RefrashListDisp(this, method);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_331EE00;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  __int64 v6; // x9
  CombineServantListViewManager_o *v7; // x0
  const MethodInfo *v8; // x1

  v4 = this;
  if ( (byte_438E772 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438E772 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  this = (CombineServantListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B7769C(this, *(_QWORD *)&index);
  v6 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v6
    && (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[v6 - 1] == CombineServantListViewItem_TypeInfo )
  {
    HIDWORD(this->fields.combineRootComponent) = -1;
  }
  else
  {
    sub_B77990(this);
    CombineServantListViewManager__GetEventCampaignFinishedAt(v7, v8);
  }
}


bool __fastcall CombineServantListViewManager__CheckIsMaterialSelectSvt(
        CombineServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  char v6; // w19
  int v7; // w20
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_438E758 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    byte_438E758 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
  {
    if ( selectedMaterialUserServantIdList->fields._size < 1 )
    {
      LOBYTE(selectedMaterialUserServantIdList) = 0;
    }
    else
    {
      System_Collections_Generic_List_long___GetEnumerator(
        &v9,
        selectedMaterialUserServantIdList,
        (const MethodInfo_30ECBDC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v10 = v9;
      while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                &v10,
                (const MethodInfo_225AF74 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
      {
        if ( v10.fields.current == (Il2CppObject *)userSvtId )
        {
          v6 = 1;
          v7 = 5;
          goto LABEL_10;
        }
      }
      v6 = 0;
      v7 = 3;
LABEL_10:
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v10,
        (const MethodInfo_225AF70 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      LOBYTE(selectedMaterialUserServantIdList) = (v7 == 5) & v6;
    }
  }
  return (char)selectedMaterialUserServantIdList;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__CreateList(
        CombineServantListViewManager_o *this,
        int32_t type,
        int32_t modeKind,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v8; // x20
  const MethodInfo *v9; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  struct UIScrollView_o *scrollView; // x8
  int v14; // s0
  float v17; // s4
  float v18; // s5
  float v19; // s6
  float v20; // s7
  struct UIScrollView_o *v21; // x8
  UIPanel_o *v22; // x23
  int v23; // s2
  UnityEngine_GameObject_o *v24; // x0
  struct UIScrollView_o *v25; // x8
  struct UIScrollView_o *v26; // x8
  CombineServantListViewManager_c *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct ListViewSort_array *sortStatusList; // x8
  System_Int32_array **v35; // x1
  struct ListViewSort_o **p_sort; // x23
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  bool v44; // w25
  struct System_Int32_array *servantFilterIdList; // x8
  bool v46; // w26
  _BOOL8 v47; // x0
  __int64 v48; // x1
  char v49; // w24
  System_Int32_array **v50; // x1
  System_Int32_array **v51; // x1
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **eventCampaignIdList; // x1
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **eventCampaignServantIdList; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  bool isBonusKind; // w1
  const MethodInfo *v73; // x2
  const MethodInfo *v74; // x2
  const MethodInfo *v75; // x1
  const MethodInfo *v76; // x3
  UILabel_o *getExpInfoLabel; // x21
  __int64 *v78; // x8
  struct ListViewSort_o *sort; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *v83; // x26
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x1
  const MethodInfo *v87; // x2
  const MethodInfo *v88; // x1
  const MethodInfo *v89; // x3
  UILabel_o *spendQpInfoLabel; // x21
  __int64 v91; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector2_o v93; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v94; // 0:s0.4,4:s1.4
  UnityEngine_Vector4_o v95; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_438E730 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__);
    sub_B775C4(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager_OnClickChangeExpInfo__);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_int____GetEnumerator__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_7012/*"GET_EXP_INFO"*/);
    this = (CombineServantListViewManager_o *)sub_B775C4(&StringLiteral_9440/*"NEED_QP_INFO"*/);
    byte_438E730 = 1;
  }
  memset(&methoda.klass, 0, 24);
  if ( !setupInfo )
    goto LABEL_117;
  EventUpValSetupInfo__AnalyzeInfoCampaign(setupInfo, 0LL);
  CombineServantListViewManager__SetEventCamapignEntity(v8, type, v9);
  this = (CombineServantListViewManager_o *)v8->fields.bgTxtSprite;
  if ( !this )
    goto LABEL_117;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (CombineServantListViewManager_o *)BgTxtManager__IsActiveBgTxt(0LL);
  if ( !gameObject )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)this & 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.scrollBar;
  if ( !this )
    goto LABEL_117;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( type == 11 )
  {
    GameObjectExtensions__SetLocalPositionX(v11, 492.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_117;
    v12 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v93.fields.y = -70.0;
    v93.fields.x = -11.0;
    GameObjectExtensions__SetLocalPosition_32807552(v12, v93, 0LL);
    scrollView = v8->fields.scrollView;
    if ( !scrollView )
      goto LABEL_117;
    this = *(CombineServantListViewManager_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
    if ( !this )
      goto LABEL_117;
    *(UnityEngine_Vector4_o *)&v14 = UIPanel__get_clipRange((UIPanel_o *)this, 0LL);
    v21 = v8->fields.scrollView;
    if ( !v21 )
      goto LABEL_117;
    v22 = *(UIPanel_o **)&v21->fields.mPlane.fields.m_Normal.fields.x;
    v23 = 1148026880;
  }
  else
  {
    GameObjectExtensions__SetLocalPositionX(v11, 399.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_117;
    v24 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v94.fields.x = -101.0;
    v94.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_32807552(v24, v94, 0LL);
    v25 = v8->fields.scrollView;
    if ( !v25 )
      goto LABEL_117;
    this = *(CombineServantListViewManager_o **)&v25->fields.mPlane.fields.m_Normal.fields.x;
    if ( !this )
      goto LABEL_117;
    *(UnityEngine_Vector4_o *)&v14 = UIPanel__get_clipRange((UIPanel_o *)this, 0LL);
    v26 = v8->fields.scrollView;
    if ( !v26 )
      goto LABEL_117;
    v22 = *(UIPanel_o **)&v26->fields.mPlane.fields.m_Normal.fields.x;
    v23 = 1145077760;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(*(UnityEngine_Vector4_o *)&v14, v17, v18, v19, v20, &methoda);
  if ( !v22 )
    goto LABEL_117;
  *(_QWORD *)&v95.fields.x = methoda.methodPointer;
  *(_QWORD *)&v95.fields.z = methoda.invoker_method;
  UIPanel__set_clipRange(v22, v95, 0LL);
  v8->fields.currentType = type;
  v27 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v27);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_117;
  if ( sortStatusList->max_length <= type )
  {
    v91 = sub_B776C8(this);
    sub_B77668(v91, 0LL);
  }
  v35 = (System_Int32_array **)sortStatusList->m_Items[type];
  v8->fields.sort = (struct ListViewSort_o *)v35;
  p_sort = &v8->fields.sort;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.sort, v35, v28, v29, v30, v31, v32, v33);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_117;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_331EE00;
  this = (CombineServantListViewManager_o *)v8->fields.combineSvtInfoLabel;
  v8->fields.isDragSelect = 1;
  if ( !this )
    goto LABEL_117;
  UILabel__set_text((UILabel_o *)this, 0LL, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineSvtInfoIcon;
  if ( !this )
    goto LABEL_117;
  UISprite__set_spriteName((UISprite_o *)this, 0LL, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.currentExpBar;
  if ( !this )
    goto LABEL_117;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  this = (CombineServantListViewManager_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  this = (CombineServantListViewManager_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  servantFilterEventIdList = setupInfo->fields.servantFilterEventIdList;
  v44 = servantFilterEventIdList && servantFilterEventIdList->max_length != 0;
  servantFilterIdList = setupInfo->fields.servantFilterIdList;
  v46 = servantFilterIdList && servantFilterIdList->max_length != 0;
  this = (CombineServantListViewManager_o *)setupInfo->fields.eventCampaignServantIdList;
  if ( this )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    methoda.parameters = methoda.name;
    *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
    while ( 1 )
    {
      v47 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v47 )
        break;
      if ( !methoda.parameters )
        sub_B7769C(v47, v48);
      if ( *((_QWORD *)methoda.parameters + 3) )
      {
        v49 = 1;
        goto LABEL_47;
      }
    }
    v49 = 0;
LABEL_47:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v49 = 0;
  }
  if ( !*p_sort )
    goto LABEL_117;
  (*p_sort)->fields.isBonusKind = (v46 || v44) | v49 & (setupInfo->fields.eventCampaignServantIdList != 0LL);
  v50 = (System_Int32_array **)setupInfo->fields.servantFilterEventIdList;
  v8->fields.bonusEventIdList = (struct System_Int32_array *)v50;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.bonusEventIdList, v50, v37, v38, v39, v40, v41, v42);
  v51 = (System_Int32_array **)setupInfo->fields.servantFilterIdList;
  v8->fields.servantFilterIdList = (struct System_Int32_array *)v51;
  sub_B77560((BattleServantConfConponent_o *)&v8->fields.servantFilterIdList, v51, v52, v53, v54, v55, v56, v57);
  eventCampaignIdList = (System_Int32_array **)setupInfo->fields.eventCampaignIdList;
  v8->fields.eventCampaignIdList = (struct System_Int32_array *)eventCampaignIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&v8->fields.eventCampaignIdList,
    eventCampaignIdList,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  eventCampaignServantIdList = (System_Int32_array **)setupInfo->fields.eventCampaignServantIdList;
  v8->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)eventCampaignServantIdList;
  sub_B77560(
    (BattleServantConfConponent_o *)&v8->fields.eventCampaignServantIdList,
    eventCampaignServantIdList,
    v66,
    v67,
    v68,
    v69,
    v70,
    v71);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
LABEL_117:
    sub_B7769C(this, *(_QWORD *)&type);
  if ( BYTE5(this->fields.sortKindLabel) )
    ListViewSort__AlignBonusKind2(
      (ListViewSort_o *)this,
      v8->fields.bonusEventIdList,
      v8->fields.servantFilterIdList,
      v8->fields.eventCampaignIdList,
      v8->fields.eventCampaignServantIdList,
      0LL,
      0LL);
  if ( (type | 4) == 5 )
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_117;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_117;
    isBonusKind = 0;
  }
  else
  {
    this = (CombineServantListViewManager_o *)v8->fields.bonusFilterKindButton;
    if ( !this )
      goto LABEL_117;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !*p_sort || !this )
      goto LABEL_117;
    isBonusKind = (*p_sort)->fields.isBonusKind;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isBonusKind, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.scaleChangeButton;
  if ( !this )
    goto LABEL_117;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
  if ( !this )
    goto LABEL_117;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  if ( !type )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.decideButton;
    if ( !this )
      goto LABEL_117;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
    if ( !this )
      goto LABEL_117;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    sort = v8->fields.sort;
    if ( !sort )
      goto LABEL_117;
    expUpDispKind = sort->fields.expUpDispKind;
    expUpDispType = sort->fields.expUpDispType;
    combineMaterialNumInfo = v8->fields.combineMaterialNumInfo;
    v83 = (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)sub_B77694(System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType____ctor(
      v83,
      (Il2CppObject *)v8,
      Method_CombineServantListViewManager_OnClickChangeExpInfo__,
      (const MethodInfo_26AD800 *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__);
    if ( !combineMaterialNumInfo )
      goto LABEL_117;
    if ( !CombineExpUpInfo__ExpUpInfoSet(combineMaterialNumInfo, expUpDispKind, expUpDispType, 1, v83, 0LL) )
    {
      this = (CombineServantListViewManager_o *)v8->fields.allReleaseButton;
      if ( !this )
        goto LABEL_117;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.decideButton;
      if ( !this )
        goto LABEL_117;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
      if ( !this )
        goto LABEL_117;
      this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                  (UnityEngine_Component_o *)this,
                                                  0LL);
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    goto LABEL_98;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.decideButton;
  if ( !this )
    goto LABEL_117;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (CombineServantListViewManager_o *)v8->fields.combineMaterialNumInfo;
  if ( !this )
    goto LABEL_117;
  this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_117;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( (unsigned int)type > 0xB )
    goto LABEL_105;
  if ( ((1 << type) & 0xFDC) != 0 )
  {
LABEL_98:
    CombineServantListViewManager__setDispActive(v8, 0, v73);
    CombineServantListViewManager__setBtnEnable(v8, 0, v84);
    CombineServantListViewManager__setServantList(v8, type, setupInfo, v85);
    this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
    if ( !this )
      goto LABEL_117;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    CombineServantListViewManager__ResetCombineViewInfoLayout(v8, v86);
    if ( type == 11 )
    {
      this = (CombineServantListViewManager_o *)v8->fields.combineViewInfo;
      if ( !this )
        goto LABEL_117;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    }
    goto LABEL_105;
  }
  if ( type == 1 )
  {
    CombineServantListViewManager__setDispActive(v8, 1, v73);
    CombineServantListViewManager__setBtnEnable(v8, 0, v87);
    CombineServantListViewManager__setCombineViewInfo(v8, v88);
    v8->fields.selectMax = 20;
    CombineServantListViewManager__setServantList(v8, 1, setupInfo, v89);
    this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
    if ( !this )
      goto LABEL_117;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    spendQpInfoLabel = v8->fields.spendQpInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9440/*"NEED_QP_INFO"*/, 0LL);
    if ( !spendQpInfoLabel )
      goto LABEL_117;
    UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0LL);
    getExpInfoLabel = v8->fields.getExpInfoLabel;
    v78 = &StringLiteral_7012/*"GET_EXP_INFO"*/;
    goto LABEL_115;
  }
  if ( type == 5 )
  {
    CombineServantListViewManager__setDispActive(v8, 1, v73);
    CombineServantListViewManager__setBtnEnable(v8, 0, v74);
    CombineServantListViewManager__setCombineViewInfo(v8, v75);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v76);
    this = (CombineServantListViewManager_o *)v8->fields.servantNumInfo;
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.cardNumInfo;
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.selectInfoLabel;
    if ( !this )
      goto LABEL_117;
    this = (CombineServantListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
    if ( !this )
      goto LABEL_117;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    getExpInfoLabel = v8->fields.spendQpInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v78 = &StringLiteral_9440/*"NEED_QP_INFO"*/;
LABEL_115:
    this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v78, 0LL);
    if ( getExpInfoLabel )
    {
      UILabel__set_text(getExpInfoLabel, (System_String_o *)this, 0LL);
      goto LABEL_105;
    }
    goto LABEL_117;
  }
LABEL_105:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v73);
}


void __fastcall CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  __int64 v2; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  CombineServantListViewManager_c *v9; // x8
  System_Int32_array **v10; // x19
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  CombineServantListViewManager_c *v12; // x0
  unsigned __int64 v13; // x22
  __int64 v14; // x23
  int v15; // w8
  struct CombineServantListViewManager_StaticFields *v16; // x8
  unsigned int *sortStatusList; // x25
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v19; // x0
  System_String_o *v20; // x20
  ListViewSort_o *v21; // x19
  __int64 v22; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  unsigned int v30; // w9
  __int64 v31; // x0
  __int64 v32; // x0
  int v33; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438E72A & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&ListViewSort___TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    byte_438E72A = 1;
  }
  v33 = 0;
  v1 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v1 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v1->static_fields->isInitSystem )
  {
    v2 = sub_B775DC(ListViewSort___TypeInfo, 12LL);
    v9 = CombineServantListViewManager_TypeInfo;
    v10 = (System_Int32_array **)v2;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v9 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v9->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v10;
    sub_B77560((BattleServantConfConponent_o *)&static_fields->sortStatusList, v10, v3, v4, v5, v6, v7, v8);
    v12 = CombineServantListViewManager_TypeInfo;
    v13 = -1LL;
    v14 = 8LL;
    v15 = (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v15 & 1) != 0 && !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = CombineServantListViewManager_TypeInfo;
      }
      v16 = v12->static_fields;
      sortStatusList = (unsigned int *)v16->sortStatusList;
      SORT_SAVE_KEY = v16->SORT_SAVE_KEY;
      v33 = v13 + 2;
      v19 = System_Int32__ToString((int32_t)&v33, 0LL);
      v20 = System_String__Concat_44901936(SORT_SAVE_KEY, v19, 0LL);
      v21 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
      ListViewSort___ctor_34308400(v21, v20, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_B7769C(v22, v23);
      if ( v21 )
      {
        v22 = sub_B77684(v21, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v22 )
        {
          v32 = sub_B776BC(0LL);
          sub_B77668(v32, 0LL);
        }
      }
      if ( v13 + 1 >= sortStatusList[6] )
      {
        v31 = sub_B776C8(v22);
        sub_B77668(v31, 0LL);
      }
      *(_QWORD *)&sortStatusList[v14] = v21;
      sub_B77560(
        (BattleServantConfConponent_o *)&sortStatusList[v14],
        (System_Int32_array **)v21,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      v12 = CombineServantListViewManager_TypeInfo;
      ++v13;
      v14 += 2LL;
      v30 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v15 = (v30 >> 10) & 1;
    }
    while ( v13 < 0xB );
    if ( (v30 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v12 = CombineServantListViewManager_TypeInfo;
    }
    v12->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__DecideDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v6; // x19
  __int64 v7; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  const MethodInfo *v10; // x3
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  const MethodInfo *v13; // x3
  int32_t klass; // w9
  _BOOL8 v15; // x0
  __int64 v16; // x1
  void *v17; // x0
  int v18; // w1
  __int64 v19; // x20
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_438E771 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    this = (CombineServantListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438E771 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v6 = itemSortList->fields._items->m_Items[index];
  if ( !v6 )
    goto LABEL_24;
  v7 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v6->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (CombineServantListViewItem_c *)v6->klass->_2.typeHierarchy[v7 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( SLODWORD(v6[2].fields.basePosition.fields.z) < 1 )
      goto LABEL_22;
    isDragSelect = v4->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v6, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = v4->fields.selectSum;
        if ( selectSum < v4->fields.selectMax )
        {
          v6->fields.selectNum = selectSum;
          ++v4->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v6, v10);
        }
      }
      goto LABEL_22;
    }
    if ( !IsSelect )
      goto LABEL_22;
    selectNum = v6->fields.selectNum;
    ListViewItem__set_IsSelect(v6, 0, 0LL);
    BYTE2(v6[1].fields.sortValue1) = 0;
    --v4->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(v4, 1, (CombineServantListViewItem_o *)v6, v13);
    this = (CombineServantListViewManager_o *)v4->fields.itemList;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v20,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v20,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v15 )
          break;
        if ( !v20.fields.current )
          sub_B7769C(v15, v16);
        klass = (int32_t)v20.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v20.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v20,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_22;
    }
LABEL_24:
    sub_B7769C(this, *(_QWORD *)&index);
  }
  sub_B77990(v6);
  if ( v18 != 1 )
    _Unwind_Resume(v17);
  v19 = *(_QWORD *)__cxa_begin_catch(v17);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v19 )
    sub_B77668(v19, 0LL);
LABEL_22:
  v6[2].fields.basePosition.fields.z = NAN;
}


void __fastcall CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  CombineServantListViewManager_c *v1; // x0
  __int64 v2; // x1
  __int64 v3; // x20
  ListViewSort_o *v4; // x0
  __int64 v5; // x8
  __int64 v6; // x0

  if ( (byte_438E72B & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    byte_438E72B = 1;
  }
  v1 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v1);
  v3 = 0LL;
  do
  {
    v4 = (ListViewSort_o *)CombineServantListViewManager_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v4 = (ListViewSort_o *)CombineServantListViewManager_TypeInfo;
    }
    v5 = *(_QWORD *)&v4[1].klass->_1.this_arg.bits;
    if ( !v5 )
      goto LABEL_15;
    if ( (unsigned int)v3 >= *(_DWORD *)(v5 + 24) )
    {
      v6 = sub_B776C8(v4);
      sub_B77668(v6, 0LL);
    }
    v4 = *(ListViewSort_o **)(v5 + 8 * v3 + 32);
    if ( !v4 )
LABEL_15:
      sub_B7769C(v4, v2);
    ListViewSort__DeleteContinueData(v4, 0LL);
    ++v3;
  }
  while ( (unsigned int)(v3 - 1) < 0xB );
}


void __fastcall CombineServantListViewManager__DestroyList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  ListViewManager__DestroyList((ListViewManager_o *)this, 0LL);
  sort = this->fields.sort;
  if ( !sort )
    sub_B7769C(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.servantFilterIdList = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v11, v12, v13, v14, v15, v16);
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Clear(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__EndCardFavoriteRequest(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_31559684(this, 2, v4);
}


void __fastcall CombineServantListViewManager__EndClickTabChoice(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  CombineServantListViewManager__SetStatusKind(this, 2, method);
  CombineServantListViewManager__ReleaseAll(this, v4);
  CombineServantListViewManager__ModifyList(this, 0, v5);
  CombineServantListViewManager__SetMode_31559684(this, 2, v6);
}


void __fastcall CombineServantListViewManager__EndClickTabLock(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  CombineServantListViewManager__SetStatusKind(this, 1, method);
  CombineServantListViewManager__ReleaseAll(this, v4);
  CombineServantListViewManager__ModifyList(this, 0, v5);
  CombineServantListViewManager__SetMode_31559684(this, 2, v6);
}


void __fastcall CombineServantListViewManager__EndClickTabPush(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineServantListViewManager__SetStatusKind(this, 3, method);
  CombineServantListViewManager__ModifyList(this, 0, v4);
  CombineServantListViewManager__SetMode_31559684(this, 2, v5);
}


void __fastcall CombineServantListViewManager__EndClickTabStatus(
        CombineServantListViewManager_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // x2

  CombineServantListViewManager__SetStatusKind(this, 0, method);
  CombineServantListViewManager__ModifyList(this, 0, v4);
  CombineServantListViewManager__SetMode_31559684(this, 2, v5);
}


void __fastcall CombineServantListViewManager__EndCloseSelectFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectFilterKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  const MethodInfo *v6; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v8; // x21

  if ( (byte_438E75A & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438E75A = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineServantListViewManager__SetFilterButtonImage(this, v6);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B7769C(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu(Instance, v8, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_438E75F & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438E75F = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0LL),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B7769C(noticeTween, isDecide);
  }
  CommonUI__CloseServantSortSelectMenu((CommonUI_o *)noticeTween, 0LL, 0LL);
}


void __fastcall CombineServantListViewManager__EndStatusSync(
        CombineServantListViewManager_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CombineServantListViewManager_RequestCallbackFunc_o *requestCallback; // x19
  BattleServantConfConponent_o *p_requestCallback; // x0

  requestCallback = this->fields.requestCallback;
  if ( requestCallback )
  {
    p_requestCallback = (BattleServantConfConponent_o *)&this->fields.requestCallback;
    p_requestCallback->klass = 0LL;
    sub_B77560(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CombineServantListViewManager_RequestCallbackFunc__Invoke(requestCallback, 1, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall CombineServantListViewManager__GetAmountSortValue(
        CombineServantListViewManager_o *this,
        int32_t svtId,
        const MethodInfo *method)
{
  int32_t v3; // w19
  CombineServantListViewManager_o *v4; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v7; // w23
  int64_t v8; // x21
  __int64 v9; // x9
  int64_t result; // x0
  CombineServantListViewItem_o *v11; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v12; // x1
  const MethodInfo *v13; // x2

  v3 = svtId;
  v4 = this;
  if ( (byte_438E764 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CombineServantListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438E764 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B7769C(this, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( itemList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      this = (CombineServantListViewManager_o *)itemList->fields._items->m_Items[v7];
      if ( !this )
        goto LABEL_15;
      *(_QWORD *)&svtId = CombineServantListViewItem_TypeInfo;
      v9 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v9
        || (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[v9 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v7;
      if ( LODWORD(this->fields.listDragPrefab) == v3 )
        ++v8;
      if ( v7 >= size )
        return v8;
      itemList = v4->fields.itemList;
      if ( !itemList )
        goto LABEL_15;
    }
    sub_B77990(this);
    CombineServantListViewItem__SetIsCombineExpCampaignTarget(v11, v12, v13);
  }
  return result;
}


int32_t __fastcall CombineServantListViewManager__GetBaseCollectionLimitCnt(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v6; // q1
  UserServantCollectionMaster_o *v7; // x20
  struct UserServantEntity_o *v8; // x8
  int64_t v9; // x19
  __int64 v10; // x21
  __int64 v11; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_438E73B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E73B = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v7 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v14, 0LL);
  v8 = this->fields.baseUsrSvtData;
  if ( !v8 )
    goto LABEL_17;
  v9 = Instance;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
  if ( !v7 )
LABEL_17:
    sub_B7769C(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v9, Instance, 0LL);
  if ( EntityDefinitely )
    return EntityDefinitely->fields.maxLimitCount;
  else
    return -1;
}


int32_t __fastcall CombineServantListViewManager__GetBaseCollectionLv(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v6; // q1
  UserServantCollectionMaster_o *v7; // x20
  struct UserServantEntity_o *v8; // x8
  int64_t v9; // x19
  __int64 v10; // x21
  __int64 v11; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_438E73C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E73C = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v7 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v15.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v14, 0LL);
  v8 = this->fields.baseUsrSvtData;
  if ( !v8 )
    goto LABEL_16;
  v9 = Instance;
  v11 = *(_QWORD *)&v8->fields.svtId.fields.currentCryptoKey;
  v10 = *(_QWORD *)&v8->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v16.fields.currentCryptoKey = v11;
  *(_QWORD *)&v16.fields.fakeValue = v10;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v16, 0LL);
  if ( !v7 )
LABEL_16:
    sub_B7769C(Instance, v4);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v7, v9, Instance, 0LL);
  if ( EntityDefinitely )
    LODWORD(EntityDefinitely) = EntityDefinitely->fields.maxLv;
  return (int)EntityDefinitely;
}


int32_t __fastcall CombineServantListViewManager__GetCombineInfoMsgLbFontSize(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t result; // w0
  int32_t currentType; // w8

  if ( (unsigned int)(this->fields.modeKind - 1) < 3 )
    return 14;
  currentType = this->fields.currentType;
  result = 20;
  if ( currentType )
  {
    if ( currentType == 7 )
      return 20;
    else
      return 14;
  }
  return result;
}


float __fastcall CombineServantListViewManager__GetCurrentScrollOffset(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  float VerticalScrollableSize; // s0
  UIProgressBar_o *scrollBar; // x0

  VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, method);
  scrollBar = (UIProgressBar_o *)this->fields.scrollBar;
  if ( !scrollBar )
    sub_B7769C(0LL, v3);
  return VerticalScrollableSize * UIProgressBar__get_value(scrollBar, 0LL);
}


bool __fastcall CombineServantListViewManager__GetDragSelect(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isDragSelect;
}


int64_t __fastcall CombineServantListViewManager__GetEventCampaignFinishedAt(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v6; // x21
  __int64 v7; // x22
  struct System_Single_array *coordinate; // x20
  int size; // w8
  EventCampaignEntity_o *v10; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438E775 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B775C4(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E775 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventCampaignEntities )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = this->fields.eventCampaignEntities) == 0LL) )
  {
LABEL_20:
    sub_B7769C(Instance, v4);
  }
  v6 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v7 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    size = eventCampaignEntities->fields._size;
    if ( (int)v7 >= size )
      return (int64_t)coordinate;
    if ( size <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v10 = eventCampaignEntities->fields._items->m_Items[v7];
    if ( v10 && v6 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v6,
                                    &entity,
                                    v10->fields.eventId,
                                    (const MethodInfo_21FB8F0 *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_20;
        if ( coordinate )
        {
          if ( (__int64)entity->fields.coordinate < (__int64)coordinate )
            coordinate = entity->fields.coordinate;
        }
        else
        {
          coordinate = entity->fields.coordinate;
        }
      }
      eventCampaignEntities = this->fields.eventCampaignEntities;
      ++v7;
      if ( eventCampaignEntities )
        continue;
    }
    goto LABEL_20;
  }
}


CombineServantListViewItem_o *__fastcall CombineServantListViewManager__GetItem(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  CombineServantListViewItem_o *result; // x0
  __int64 v7; // x9

  if ( (byte_438E73D & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438E73D = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  result = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[index];
  if ( result )
  {
    v7 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v7
      || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[v7 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B77990(result);
      return 0LL;
    }
  }
  return result;
}


UserServantEntity_o *__fastcall CombineServantListViewManager__GetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v6; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v7; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+20h] [xbp-30h]

  if ( (byte_438E73A & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E73A = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_13;
  v6 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v7 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v9 = v10;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v9, 0LL);
  if ( !v7 )
LABEL_13:
    sub_B7769C(Instance, v4);
  return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           v7,
           (int64_t)Instance,
           (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *__fastcall CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  _BOOL8 IsSelect; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v8; // w23
  ListViewItem_o *v9; // x21
  __int64 v10; // x9
  CombineServantListViewManager_o *v12; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v13; // x1
  System_Collections_Generic_List_long__o **v14; // x2
  const MethodInfo *v15; // x3

  if ( (byte_438E74A & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    byte_438E74A = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B7769C(IsSelect, v5);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
  v8 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = itemList->fields._items->m_Items[v8];
    if ( !v9 )
      goto LABEL_16;
    v10 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
      || (CombineServantListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    IsSelect = ListViewItem__get_IsSelect(v9, 0LL);
    if ( IsSelect )
    {
      if ( !v3 )
        goto LABEL_16;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    }
    if ( (int)++v8 >= size )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v3;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B77990(v9);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v12,
                                                                            v13,
                                                                            v14,
                                                                            v15);
}


int32_t __fastcall CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  CombineServantListViewManager_c *v3; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v5; // x8
  __int64 v7; // x0

  if ( (byte_438E72D & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    byte_438E72D = 1;
  }
  v3 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v3 = CombineServantListViewManager_TypeInfo;
  }
  sortStatusList = v3->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_10;
  if ( sortStatusList->max_length <= type )
  {
    v7 = sub_B776C8(v3);
    sub_B77668(v7, 0LL);
  }
  v5 = sortStatusList->m_Items[type];
  if ( !v5 )
LABEL_10:
    sub_B7769C(v3, method);
  return v5->fields.sortKind;
}


bool __fastcall CombineServantListViewManager__GetSwapChoiceList(
        CombineServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x23
  System_Collections_Generic_List_long__o *v6; // x22
  int64_t UserSvtEntity; // x0
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v17; // w26
  CombineServantListViewItem_o *v18; // x24
  __int64 v19; // x9
  _BOOL4 isChoice; // w20
  __int128 v21; // q0
  const MethodInfo_30EBD98 *v22; // x2
  int64_t v23; // x1
  System_Collections_Generic_List_long__o *v24; // x0
  __int128 v25; // q0
  System_Int64_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  bool result; // w0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  CombineServantListViewManager_o *v47; // x0
  const MethodInfo *v48; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+50h] [xbp-70h]

  if ( (byte_438E761 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438E761 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v5 && v6 )
    {
      if ( v6->fields._size + v5->fields._size < 1 )
      {
        *choiceList = 0LL;
        sub_B77560((BattleServantConfConponent_o *)choiceList, 0LL, v9, v10, v11, v12, v13, v14);
        *unchoiceList = 0LL;
        sub_B77560((BattleServantConfConponent_o *)unchoiceList, 0LL, v41, v42, v43, v44, v45, v46);
        return 0;
      }
      else
      {
        v26 = System_Collections_Generic_List_long___ToArray(
                v5,
                (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *choiceList = v26;
        sub_B77560((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
        v33 = System_Collections_Generic_List_long___ToArray(
                v6,
                (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unchoiceList = v33;
        sub_B77560(
          (BattleServantConfConponent_o *)unchoiceList,
          (System_Int32_array **)v33,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        return 1;
      }
    }
LABEL_34:
    sub_B7769C(UserSvtEntity, v8);
  }
  v17 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v17 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v18 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v17];
    if ( !v18 )
      goto LABEL_34;
    v19 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (CombineServantListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                               v18,
                               (const MethodInfo *)CombineServantListViewItem_TypeInfo);
    if ( UserSvtEntity && v18->fields.isSwapChoice )
    {
      isChoice = v18->fields.isChoice;
      UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v18, v8);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isChoice )
      {
        v21 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v53.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v52 = v53;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v52, 0LL);
        if ( !v6 )
          goto LABEL_34;
        v22 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
        v23 = UserSvtEntity;
        v24 = v6;
      }
      else
      {
        v25 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v53.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v51 = v53;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v51, 0LL);
        if ( !v5 )
          goto LABEL_34;
        v22 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
        v23 = UserSvtEntity;
        v24 = v5;
      }
      System_Collections_Generic_List_long___Add(v24, v23, v22);
    }
    if ( (int)++v17 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B77990(v18);
  CombineServantListViewManager__OnClickSortAscendingOrder(v47, v48);
  return result;
}


bool __fastcall CombineServantListViewManager__GetSwapLockList(
        CombineServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x23
  System_Collections_Generic_List_long__o *v6; // x22
  int64_t UserSvtEntity; // x0
  const MethodInfo *v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v17; // w26
  CombineServantListViewItem_o *v18; // x24
  __int64 v19; // x9
  _BOOL4 isLock; // w20
  __int128 v21; // q0
  const MethodInfo_30EBD98 *v22; // x2
  int64_t v23; // x1
  System_Collections_Generic_List_long__o *v24; // x0
  __int128 v25; // q0
  System_Int64_array *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int64_array *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  CombineServantListViewManager_o *v47; // x0
  System_Int64_array **v48; // x1
  System_Int64_array **v49; // x2
  const MethodInfo *v50; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+50h] [xbp-70h]

  if ( (byte_438E760 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438E760 = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  v6 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v6,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v5 && v6 )
    {
      if ( v6->fields._size + v5->fields._size < 1 )
      {
        *lockList = 0LL;
        sub_B77560((BattleServantConfConponent_o *)lockList, 0LL, v9, v10, v11, v12, v13, v14);
        *unlockList = 0LL;
        sub_B77560((BattleServantConfConponent_o *)unlockList, 0LL, v41, v42, v43, v44, v45, v46);
        return 0;
      }
      else
      {
        v26 = System_Collections_Generic_List_long___ToArray(
                v5,
                (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *lockList = v26;
        sub_B77560((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v26, v27, v28, v29, v30, v31, v32);
        v33 = System_Collections_Generic_List_long___ToArray(
                v6,
                (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unlockList = v33;
        sub_B77560((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
        return 1;
      }
    }
LABEL_34:
    sub_B7769C(UserSvtEntity, v8);
  }
  v17 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v17 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v18 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v17];
    if ( !v18 )
      goto LABEL_34;
    v19 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v18->klass->_2.bitflags2 + 1) < (unsigned int)v19
      || (CombineServantListViewItem_c *)v18->klass->_2.typeHierarchy[v19 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                               v18,
                               (const MethodInfo *)CombineServantListViewItem_TypeInfo);
    if ( UserSvtEntity && v18->fields.isSwapLock )
    {
      isLock = v18->fields.isLock;
      UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v18, v8);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isLock )
      {
        v21 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v55.fields.fakeValue = v21;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v54 = v55;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v54, 0LL);
        if ( !v6 )
          goto LABEL_34;
        v22 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
        v23 = UserSvtEntity;
        v24 = v6;
      }
      else
      {
        v25 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v55.fields.fakeValue = v25;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v53 = v55;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v53, 0LL);
        if ( !v5 )
          goto LABEL_34;
        v22 = (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__;
        v23 = UserSvtEntity;
        v24 = v5;
      }
      System_Collections_Generic_List_long___Add(v24, v23, v22);
    }
    if ( (int)++v17 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B77990(v18);
  return CombineServantListViewManager__GetSwapChoiceList(v47, v48, v49, v50);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CombineServantListViewManager__GetTutorialFoucsObj(
        CombineServantListViewManager_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  bool v5; // zf
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  __int64 v11; // x1
  CombineServantListViewObject_o *v12; // x19
  CombineServantListViewItem_o *Item; // x0
  __int64 v14; // x1
  CombineServantListViewItem_o *v15; // x0
  __int64 v16; // x1
  int v17; // w8
  _BOOL8 v18; // x0
  __int64 v19; // x1
  CombineServantListViewObject_o *v20; // x0
  __int64 v21; // x1
  CombineServantListViewItem_o *v22; // x0
  __int64 v23; // x1
  int v24; // w19
  int v25; // w19
  int v26; // w9
  System_Collections_Generic_List_Enumerator_T__o v28; // [xsp+0h] [xbp-80h] BYREF
  int v29[4]; // [xsp+18h] [xbp-68h]
  int v30; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_438E77D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_438E77D = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v30 = 0;
  if ( progress != 2 )
  {
    v5 = progress == 4;
    current = 0LL;
    if ( !v5 )
      return (UnityEngine_GameObject_o *)current;
    objectList = this->fields.objectList;
    if ( objectList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v28,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v31 = v28;
      while ( 1 )
      {
        v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
               &v31,
               (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v8 )
          break;
        current = v31.fields.current;
        if ( !v31.fields.current )
          sub_B7769C(v8, v9);
        Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)v31.fields.current,
                                                                      (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v12 = Component_srcLineSprite;
        if ( !Component_srcLineSprite )
          sub_B7769C(0LL, v11);
        Item = CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
        if ( !Item )
          sub_B7769C(0LL, v14);
        if ( Item->fields.rarity == 4 )
        {
          v15 = CombineServantListViewObject__GetItem(v12, 0LL);
          if ( !v15 )
            sub_B7769C(0LL, v16);
          if ( v15->fields.svtId == 9770400 )
          {
            v17 = 183;
            goto LABEL_25;
          }
        }
      }
      current = 0LL;
      v17 = 181;
LABEL_25:
      v29[0] = v17;
      v25 = ++v30;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v31,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( !v25 )
        return 0LL;
      v26 = v29[v25 - 1];
      if ( v26 == 181 )
      {
        current = 0LL;
      }
      else if ( v26 != 183 )
      {
        return 0LL;
      }
      v30 = v25 - 1;
      return (UnityEngine_GameObject_o *)current;
    }
LABEL_43:
    sub_B7769C(objectList, *(_QWORD *)&progress);
  }
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v28,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v31 = v28;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v31,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v18 )
      break;
    current = v31.fields.current;
    if ( !v31.fields.current )
      sub_B7769C(v18, v19);
    v20 = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v31.fields.current,
                                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v20 )
      sub_B7769C(0LL, v21);
    v22 = CombineServantListViewObject__GetItem(v20, 0LL);
    if ( !v22 )
      sub_B7769C(0LL, v23);
    if ( v22->fields.rarity == 4 )
    {
      v24 = 183;
      goto LABEL_30;
    }
  }
  current = 0LL;
  v24 = 181;
LABEL_30:
  v29[0] = v24;
  v30 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v31,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v30 = 0;
  if ( !(((v24 & 3u) + 1) >> 2) )
    return 0LL;
  return (UnityEngine_GameObject_o *)current;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall CombineServantListViewManager__GetVerticalScrollableSize(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  struct UIScrollView_o *scrollView; // x0
  float v4; // s0
  float v5; // s1
  float v6; // s8
  float v7; // s1
  struct UIScrollView_o *v8; // x8
  __int64 v9; // x19
  float v10; // s9
  int32_t v11; // w0
  float v12; // s10
  double v13; // d0
  double v14; // d0
  float v15; // s1
  __int64 v16; // x8
  float v17; // s0
  float v18; // s1
  UnityEngine_Bounds_o iptr; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Bounds_o v21; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector4_o finalClipRegion; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  memset(&v21, 0, sizeof(v21));
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_19;
  ((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
    scrollView,
    scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_19;
  ((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer))scrollView->klass->vtable._4_get_bounds.method)(
    scrollView,
    scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr);
  v21 = iptr;
  *(UnityEngine_Vector3_o *)&v4 = UnityEngine_Bounds__get_max(&v21, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (v6 = v5,
        ((void (__fastcall *)(struct UIScrollView_o *, Il2CppMethodPointer, float))scrollView->klass->vtable._4_get_bounds.method)(
          scrollView,
          scrollView->klass->vtable._5_get_shouldMoveHorizontally.methodPtr,
          v4),
        v21 = iptr,
        *(UnityEngine_Vector3_o *)(&v7 - 1) = UnityEngine_Bounds__get_min(&v21, 0LL),
        (v8 = this->fields.scrollView) == 0LL)
    || (v9 = *(_QWORD *)&v8->fields.mPlane.fields.m_Normal.fields.x) == 0 )
  {
LABEL_19:
    sub_B7769C(scrollView, method);
  }
  v10 = v7;
  finalClipRegion = UIPanel__get_finalClipRegion(
                      (UIPanel_o *)*(_QWORD *)&v8->fields.mPlane.fields.m_Normal.fields.x,
                      0LL);
  v11 = UnityEngine_Mathf__RoundToInt(finalClipRegion.fields.w, 0LL);
  v12 = (float)(v11 - (v11 & 1)) * 0.5;
  v13 = modf(v12, (double *)&iptr.fields.m_Center.fields.x);
  if ( v12 >= 0.0 )
  {
    if ( v13 != 0.5 )
    {
      v17 = floorf(v12 + 0.5);
      goto LABEL_16;
    }
    v14 = *(double *)&iptr.fields.m_Center.fields.x;
    v15 = 1.0;
  }
  else
  {
    if ( v13 != -0.5 )
    {
      v17 = ceilf(v12 + -0.5);
      goto LABEL_16;
    }
    v14 = *(double *)&iptr.fields.m_Center.fields.x;
    v15 = -1.0;
  }
  v16 = (__int64)v14;
  v17 = v14;
  v18 = v17 + v15;
  if ( (v16 & 1) != 0 )
    v17 = v18;
LABEL_16:
  if ( *(_DWORD *)(v9 + 284) == 3 )
    v17 = v17 - *(float *)(v9 + 308);
  return fmaxf((float)(v6 - v10) - (float)(v17 + v17), 0.0);
}


void __fastcall CombineServantListViewManager__InitBackListView(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v2);
  CombineServantListViewManager__SetStatusKind(this, 0, v4);
}


void __fastcall CombineServantListViewManager__InitLoad(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineServantListViewManager_c *v2; // x0
  __int64 i; // x20
  struct ListViewSort_array *sortStatusList; // x8
  __int64 v5; // x0

  if ( (byte_438E72C & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    byte_438E72C = 1;
  }
  v2 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v2 = CombineServantListViewManager_TypeInfo;
  }
  if ( v2->static_fields->isInitSystem )
  {
    for ( i = 0LL; ; ++i )
    {
      if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        v2 = CombineServantListViewManager_TypeInfo;
      }
      sortStatusList = v2->static_fields->sortStatusList;
      if ( !sortStatusList )
        goto LABEL_17;
      if ( (unsigned int)i >= sortStatusList->max_length )
      {
        v5 = sub_B776C8(v2);
        sub_B77668(v5, 0LL);
      }
      v2 = (CombineServantListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_17:
        sub_B7769C(v2, v1);
      ListViewSort__InitLoad((ListViewSort_o *)v2, 0LL);
      if ( (unsigned int)i > 0xA )
        break;
      v2 = CombineServantListViewManager_TypeInfo;
    }
  }
}


bool __fastcall CombineServantListViewManager__IsDragEnable(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  bool result; // w0
  const MethodInfo *v6; // x5
  bool IsSelectEnable; // w8

  if ( this->fields.modeKind
    || (this->fields.currentType | 4) != 5
    || !item
    || CombineServantListViewItem__get_IsCanNotSelect(item, (const MethodInfo *)item) )
  {
    return 0;
  }
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)item, 0LL) )
    return 1;
  IsSelectEnable = CombineServantListViewManager__IsSelectEnable(this, item, 0, 0, 0, v6);
  result = 0;
  if ( IsSelectEnable )
    return 1;
  return result;
}


bool __fastcall CombineServantListViewManager__IsDragStart(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.dragStartIndex >= 0;
}


bool __fastcall CombineServantListViewManager__IsExchangeSvtExist(
        CombineServantListViewManager_o *this,
        int32_t campaiginEventId,
        int64_t uniId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  EventCampaignMaster_o *v9; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x22
  _BOOL8 v14; // x0
  __int64 v15; // x1
  int v16; // w8
  _BOOL8 v17; // x0
  __int64 v18; // x1
  EventCampaignEntity_o *Data; // x0
  WebViewManager_o *v20; // x0
  __int64 v21; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v23; // x1
  UserServantEntity_o *Entity; // x0
  bool v25; // w19
  int v26; // w8
  int v27; // w9
  System_Collections_Generic_List_Enumerator_T__o v29[2]; // [xsp+8h] [xbp-C8h] BYREF
  int v30; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_438E76C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E76C = 1;
  }
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, sizeof(v31));
  v30 = 0;
  if ( !this->fields.eventCampaignServantIdList )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_50;
  v9 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( CombineEventCampaigns )
  {
    Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_30321720(v9, CombineEventCampaigns, 0LL);
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v29,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v32 = v29[0];
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v32,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
        if ( !v11 )
          break;
        current = v32.fields.current;
        if ( !v32.fields.current )
          sub_B7769C(v11, v12);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v29,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v32.fields.current,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v31 = v29[0];
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v31,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v14 )
            break;
          if ( !v31.fields.current )
            sub_B7769C(v14, v15);
          if ( LODWORD(v31.fields.current[1].klass) == campaiginEventId )
            goto LABEL_17;
        }
        current = 0LL;
LABEL_17:
        *((_DWORD *)&v29[1].fields.list + v30++) = 115;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v31,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        v16 = v30;
        if ( v30 && *((_DWORD *)&v29[0].fields.current + v30 + 1) == 115 )
          v16 = --v30;
        if ( current )
          goto LABEL_24;
      }
      v16 = v30;
      current = 0LL;
LABEL_24:
      *((_DWORD *)&v29[1].fields.list + v16) = 145;
      ++v30;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v32,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v30 && *((_DWORD *)&v29[0].fields.current + v30 + 1) == 145 )
        --v30;
      if ( current )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v29,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v31 = v29[0];
        while ( 1 )
        {
          v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v31,
                  (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v17 )
            break;
          if ( !v31.fields.current )
            sub_B7769C(v17, v18);
          Data = EventCampaignMaster__getData(v9, (int32_t)v31.fields.current[1].klass, 0LL);
          if ( Data && Data->fields.target == 27 )
          {
            v20 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v20 )
              sub_B7769C(0LL, v21);
            MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v20, (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B7769C(0LL, v23);
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       uniId,
                       (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Entity )
            {
              if ( UserServantEntity__IsExchangeSvt(Entity, 0LL) )
              {
                v25 = 1;
                v26 = 257;
                goto LABEL_39;
              }
            }
          }
        }
        v25 = 0;
        v26 = 255;
LABEL_39:
        *((_DWORD *)&v29[1].fields.list + v30++) = v26;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v31,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        if ( !v30 )
          return 0;
        v27 = *((_DWORD *)&v29[0].fields.current + v30 + 1);
        if ( v27 == 255 )
        {
          v25 = 0;
        }
        else if ( v27 != 257 )
        {
          return 0;
        }
        --v30;
        return v25;
      }
    }
LABEL_50:
    sub_B7769C(Instance, v8);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__IsLargeSuccessCampaignServantId(
        CombineServantListViewManager_o *this,
        int32_t campaiginEventId,
        int32_t svtId,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v6; // x21
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x22
  struct System_Int32_array *eventCampaignIdList; // x9
  int max_length; // w8
  __int64 v10; // x21
  int32_t *v11; // x9
  System_Int32_array *v12; // x20
  int v13; // w8
  __int64 v14; // x9
  int v15; // w9
  __int64 v16; // x10
  bool v17; // w8
  __int64 v19; // x0

  v6 = this;
  if ( (byte_438E76B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    this = (CombineServantListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_int____get_Item__);
    byte_438E76B = 1;
  }
  eventCampaignServantIdList = v6->fields.eventCampaignServantIdList;
  if ( !eventCampaignServantIdList )
    return 0;
  eventCampaignIdList = v6->fields.eventCampaignIdList;
  if ( !eventCampaignIdList )
LABEL_34:
    sub_B7769C(this, *(_QWORD *)&campaiginEventId);
  max_length = eventCampaignIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v10 = 0LL;
  v11 = &eventCampaignIdList->m_Items[1];
  while ( 1 )
  {
    if ( (unsigned int)v10 >= max_length )
      goto LABEL_33;
    if ( v11[v10] == campaiginEventId )
      break;
    if ( (int)++v10 >= max_length )
      return 0;
  }
  if ( eventCampaignServantIdList->fields._size <= (unsigned int)v10 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v12 = eventCampaignServantIdList->fields._items->m_Items[v10];
  if ( !v12 )
    return 0;
  v13 = v12->max_length;
  if ( v13 < 1 )
  {
LABEL_19:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (CombineServantListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
    if ( this )
    {
      this = (CombineServantListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  svtId,
                                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v15 = v12->max_length;
      if ( v15 >= 1 )
      {
        v16 = 0LL;
        while ( (unsigned int)v16 < v15 )
        {
          if ( !this )
            goto LABEL_34;
          if ( v12->m_Items[v16 + 1] == LODWORD(this->fields.scrollBar) )
            return 1;
          ++v16;
          v17 = 0;
          if ( (int)v16 >= v15 )
            return v17;
        }
LABEL_33:
        v19 = sub_B776C8(this);
        sub_B77668(v19, 0LL);
      }
      return 0;
    }
    goto LABEL_34;
  }
  v14 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v14 >= v13 )
      goto LABEL_33;
    if ( v12->m_Items[v14 + 1] == svtId )
      return 1;
    if ( (int)++v14 >= v13 )
      goto LABEL_19;
  }
}


bool __fastcall CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o **equipLastSvtList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v12; // x20
  void *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *targetId; // x1
  int32_t size; // w19
  __int64 v16; // x22
  unsigned int v17; // w8
  UserServantMaster_o *v18; // x19
  signed __int64 v19; // x19
  System_Collections_Generic_List_int__o *v20; // x22
  System_Collections_Generic_Dictionary_int__int__o *v21; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v22; // x25
  unsigned int v23; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v24; // x28
  __int64 v25; // x27
  int32_t v26; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v27; // x8
  _QWORD *v28; // x8
  __int64 v29; // x21
  __int64 v30; // x26
  __int64 v31; // x27
  __int64 v32; // x28
  __int64 v33; // x26
  __int64 v34; // x27
  __int64 v35; // x25
  unsigned __int64 v36; // x21
  bool v37; // w28
  EventMissionProgressRequest_Argument_ProgressData_o *v38; // x8
  int32_t v39; // w24
  unsigned __int64 v40; // x26
  int v41; // w27
  int32_t v42; // w8
  __int64 v44; // x0
  UserServantMaster_o *v45; // [xsp+0h] [xbp-70h]
  int v47; // [xsp+14h] [xbp-5Ch]
  _QWORD *v48; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v50; // 0:x0.16

  if ( (byte_438E74B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E74B = 1;
  }
  v5 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v5,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v5;
  sub_B77560((BattleServantConfConponent_o *)equipLastSvtList, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v12,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_77;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v16 = 0LL;
    v17 = selectMaterialItemList->fields._size;
    while ( 1 )
    {
      if ( v17 <= (unsigned int)v16 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      targetId = (EventMissionProgressRequest_Argument_ProgressData_o *)selectMaterialItemList->fields._items->m_Items[v16];
      if ( !targetId )
        break;
      if ( BYTE2(targetId[8].fields.eventId) || HIBYTE(targetId[8].fields.eventId) )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v12,
          targetId,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      }
      if ( (int)v16 + 1 >= size )
        goto LABEL_15;
      v17 = selectMaterialItemList->fields._size;
      ++v16;
    }
LABEL_77:
    sub_B7769C(Instance, targetId);
  }
LABEL_15:
  if ( !v12 )
    goto LABEL_77;
  if ( v12->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_77;
    v18 = (UserServantMaster_o *)Instance;
    Instance = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_77;
    v45 = v18;
    v48 = Instance;
    v19 = v12->fields._size;
    v47 = *((_DWORD *)Instance + 6);
    v20 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v20,
      (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
    v21 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B77694(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v21,
      (const MethodInfo_2FE81CC *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    v22 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( (int)v19 >= 1 )
    {
      v23 = 0;
      do
      {
        if ( v12->fields._size <= v23 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v24 = v12->fields._items->m_Items[v23];
        if ( !v24 || !v21 )
          goto LABEL_77;
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                             v21,
                             v24[3].fields.targetId,
                             (const MethodInfo_2FE8FD4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v25 = 0LL;
          v26 = 0;
          do
          {
            if ( v12->fields._size <= (unsigned int)v25 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v27 = v12->fields._items->m_Items[v25];
            if ( !v27 )
              goto LABEL_77;
            targetId = (EventMissionProgressRequest_Argument_ProgressData_o *)(unsigned int)v24[3].fields.targetId;
            ++v25;
            if ( (_DWORD)targetId == v27[3].fields.targetId )
              ++v26;
          }
          while ( (int)v25 < (int)v19 );
          System_Collections_Generic_Dictionary_int__int___Add(
            v21,
            (int32_t)targetId,
            v26,
            (const MethodInfo_2FE8D70 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( (int)++v23 < (int)v19 );
    }
    v28 = v48;
    if ( v47 >= 1 )
    {
      v29 = 0LL;
      do
      {
        if ( (unsigned int)v29 >= *((_DWORD *)v28 + 6) )
        {
          v44 = sub_B776C8(Instance);
          sub_B77668(v44, 0LL);
        }
        v30 = v48[v29 + 4];
        if ( !v30 )
          goto LABEL_77;
        v32 = *(_QWORD *)(v30 + 80);
        v31 = *(_QWORD *)(v30 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v49.fields.currentCryptoKey = v32;
        *(_QWORD *)&v49.fields.fakeValue = v31;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v49, 0LL);
        if ( !v22 )
          goto LABEL_77;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v22,
                     (int32_t)Instance,
                     (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_77;
        Instance = (void *)ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v30, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v34 = *(_QWORD *)(v30 + 80);
            v33 = *(_QWORD *)(v30 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v50.fields.currentCryptoKey = v34;
            *(_QWORD *)&v50.fields.fakeValue = v33;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v50, 0LL);
            if ( !v20 )
              goto LABEL_77;
            System_Collections_Generic_List_int___Add(
              v20,
              (int32_t)Instance,
              (const MethodInfo_30E5DE8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        ++v29;
        v28 = v48;
      }
      while ( (int)v29 < v47 );
    }
    if ( !v20 )
      goto LABEL_77;
    if ( (int)v19 >= 1 )
    {
      v35 = (unsigned int)v20->fields._size;
      v36 = 0LL;
      v37 = 0;
      while ( 1 )
      {
        if ( v36 >= (unsigned int)v12->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v38 = v12->fields._items->m_Items[v36];
        if ( !v38 )
          goto LABEL_77;
        v39 = v38[3].fields.targetId;
        if ( (int)v35 < 1 )
        {
          v41 = 0;
          if ( !v21 )
            goto LABEL_77;
        }
        else
        {
          v40 = 0LL;
          v41 = 0;
          do
          {
            if ( v40 >= (unsigned int)v20->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v42 = v20->fields._items->m_Items[++v40];
            if ( v39 == v42 )
              ++v41;
          }
          while ( v35 != v40 );
          if ( !v21 )
            goto LABEL_77;
        }
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                             v21,
                             v39,
                             (const MethodInfo_2FE8CB0 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( v41 == (_DWORD)Instance )
        {
          Instance = UserServantMaster__getSvtAllUserIdList(v45, v39, 0LL);
          if ( !*equipLastSvtList )
            goto LABEL_77;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_30EBFEC *)Method_System_Collections_Generic_List_long__AddRange__);
          v37 = 1;
        }
        if ( (__int64)++v36 >= v19 )
          return v37;
      }
    }
  }
  return 0;
}


bool __fastcall CombineServantListViewManager__IsSelectEnable(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *item,
        int32_t addSum,
        int32_t addServantSum,
        bool isDrag,
        const MethodInfo *method)
{
  int32_t itemType; // w8
  int32_t rarity; // w8
  System_Collections_Generic_List_long__o *v14; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  CombineServantListViewItem_o *current; // x24
  __int64 v19; // x9
  const MethodInfo *v20; // x1
  int64_t UserSvtId; // x0
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v23; // x0
  int32_t v24; // w23
  const MethodInfo *v25; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v27; // [xsp+20h] [xbp-90h] BYREF
  int32_t tdMaxLv[2]; // [xsp+40h] [xbp-70h] BYREF
  int32_t tmpTargetLv; // [xsp+48h] [xbp-68h] BYREF
  bool isMaxLvSelected; // [xsp+4Ch] [xbp-64h] BYREF
  bool isSecondAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isSecondHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpMax; // [xsp+5Ch] [xbp-54h] BYREF
  bool isAtkUpMax; // [xsp+68h] [xbp-48h] BYREF
  bool isHpUpMax; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_438E756 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    byte_438E756 = 1;
  }
  isHpUpMax = 0;
  isAtkUpMax = 0;
  isHpMax = 0;
  isAtkMax = 0;
  isSecondHpMax = 0;
  isSecondAtkMax = 0;
  isMaxLvSelected = 0;
  tmpTargetLv = 0;
  *(_QWORD *)tdMaxLv = 0LL;
  memset(&v27, 0, sizeof(v27));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v14 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v14,
        (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_47;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v26,
        itemList,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v27 = v26;
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v27,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v16 )
          break;
        current = (CombineServantListViewItem_o *)v27.fields.current;
        if ( !v27.fields.current )
          goto LABEL_45;
        v19 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v27.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v19
          || (CombineServantListViewItem_c *)v27.fields.current->klass->_2.typeHierarchy[v19 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B77990(v27.fields.current);
LABEL_45:
          sub_B7769C(v16, v17);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v27.fields.current, 0LL) || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, v20);
          if ( !v14 )
            sub_B7769C(UserSvtId, UserSvtId);
          System_Collections_Generic_List_long___Add(
            v14,
            UserSvtId,
            (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v27,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v14 )
        goto LABEL_47;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      v23 = System_Collections_Generic_List_long___ToArray(
              v14,
              (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NpCombineControl__GetNpLv(
                                                                                                  baseUsrSvtData,
                                                                                                  v23,
                                                                                                  &tmpTargetLv,
                                                                                                  0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_47;
      v24 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_21836884(this->fields.baseUsrSvtData, &tdMaxLv[1], tdMaxLv, 0LL);
      if ( tdMaxLv[0] <= v24 )
        return 0;
    }
    else
    {
      if ( itemType != 1 )
        goto LABEL_34;
      CombineServantListViewManager__checkDragMax(
        this,
        &isHpUpMax,
        &isAtkUpMax,
        &isHpMax,
        &isAtkMax,
        &isSecondHpMax,
        &isSecondAtkMax,
        &isMaxLvSelected,
        v25);
      if ( item->fields.isStatusUpSvt )
      {
        rarity = item->fields.rarity;
        if ( rarity == 4 )
        {
          if ( item->fields.hpBase >= 1 && (!isHpUpMax || isSecondHpMax)
            || item->fields.atkBase >= 1 && (!isAtkUpMax || isSecondAtkMax) )
          {
            return 0;
          }
        }
        else if ( rarity <= 3 && (item->fields.hpBase >= 1 && isHpMax || item->fields.atkBase >= 1 && isAtkMax) )
        {
          return 0;
        }
      }
      else if ( isMaxLvSelected )
      {
        return 0;
      }
    }
  }
  itemType = this->fields.itemType;
LABEL_34:
  if ( itemType != 1 )
    return this->fields.selectSum + addSum < this->fields.selectMax;
  itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)item->fields.servantEntity;
  if ( !itemList )
LABEL_47:
    sub_B7769C(itemList, item);
  if ( !ServantEntity__get_IsOrganization((ServantEntity_o *)itemList, 0LL)
    || this->fields.sellEnableRestCnt - addServantSum > this->fields.minimumKeep )
  {
    return this->fields.selectSum + addSum < this->fields.selectMax;
  }
  return 0;
}


bool __fastcall CombineServantListViewManager__IsSelectTransformServant(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *SelectBaseSvtData; // x0

  SelectBaseSvtData = CombineServantListViewManager__GetSelectBaseSvtData(this, method);
  if ( SelectBaseSvtData )
    LOBYTE(SelectBaseSvtData) = UserServantEntity__HasTransform(SelectBaseSvtData, 0LL);
  return (char)SelectBaseSvtData;
}


void __fastcall CombineServantListViewManager__ModifyItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  _BOOL8 v9; // x0
  CombineServantListViewItem_c *v10; // x1
  Il2CppObject *current; // x21
  __int64 v12; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v14; // x1
  __int128 v15; // q0
  int64_t v16; // x0
  __int128 v17; // q0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int klass; // w8
  int64_t UserSvtId; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  UnityEngine_Object_o *monitor; // x22
  __int64 v29; // x1
  void *v30; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v32; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_438E73E & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E73E = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_B7769C(Instance, v5);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v34.fields.current = (Il2CppObject *)v33.fields.fakeValue;
  *(_OWORD *)&v34.fields.list = *(_OWORD *)&v33.fields.currentCryptoKey;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v34,
           (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v9 )
      break;
    current = v34.fields.current;
    if ( v34.fields.current )
    {
      v10 = CombineServantListViewItem_TypeInfo;
      v12 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v34.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (CombineServantListViewItem_c *)v34.fields.current->klass->_2.typeHierarchy[v12 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B77990(v34.fields.current);
LABEL_37:
        sub_B7769C(UserSvtId, v26);
      }
    }
    if ( Entity )
    {
      if ( !v34.fields.current )
        sub_B7769C(v9, v10);
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v34.fields.current,
                        (const MethodInfo *)v10);
      if ( !UserSvtEntity )
        sub_B7769C(0LL, v14);
      v15 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v33.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v33.fields.fakeValue = v15;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v32 = v33;
      v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v32, 0LL);
      v17 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v31.fields.fakeValue = v17;
      if ( v16 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v31, 0LL) )
      {
        current[7].monitor = Entity;
        sub_B77560(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v18,
          v19,
          v20,
          v21,
          v22,
          v23);
        klass = (int)current[7].klass;
        if ( klass == 3 )
        {
          CombineServantListViewItem__SetSkillInfo((CombineServantListViewItem_o *)current, (const MethodInfo *)v10);
          klass = (int)current[7].klass;
        }
        if ( klass == 11 )
          CombineServantListViewItem__SetAppendSkillInfo(
            (CombineServantListViewItem_o *)current,
            (const MethodInfo *)v10);
      }
    }
    else if ( !v34.fields.current )
    {
      sub_B7769C(v9, v10);
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId(
                  (CombineServantListViewItem_o *)current,
                  (const MethodInfo *)v10);
    if ( !SelfUserGame )
      goto LABEL_37;
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      v27);
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v30 = current[6].monitor;
      if ( !v30 )
        sub_B7769C(0LL, v29);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v30 + 392LL))(
        v30,
        current,
        *(_QWORD *)(*(_QWORD *)v30 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v34,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyList(
        CombineServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x22
  int64_t sort; // x0
  UserServantEntity_o *v7; // x1
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
  __int64 v20; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v22; // x1
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  unsigned int v31; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v33; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x23
  int monitor; // w8
  __int64 v36; // x20
  __int64 v37; // x24
  __int128 v38; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v40; // q0
  int64_t v41; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v43; // x24
  int v44; // w26
  unsigned int v45; // w25
  __int64 v46; // x8
  __int128 v47; // q0
  int64_t v48; // x23
  __int64 v49; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v50; // x22
  CombineServantListViewItem_o *v51; // x22
  __int64 v52; // x9
  __int128 v53; // q0
  __int128 v54; // q0
  int64_t v55; // x0
  const MethodInfo *v56; // x5
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v57; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v58; // x24
  int size; // w8
  int32_t i; // w21
  WarBoardAIRoute_RouteData_o *v61; // x8
  __int128 v62; // q0
  struct UserServantEntity_o *v63; // x8
  __int128 v64; // q0
  int64_t v65; // x25
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  struct System_Collections_Generic_List_long__o *v67; // x9
  int v68; // w8
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v69; // x25
  unsigned int v70; // w28
  struct System_Collections_Generic_List_long__o *v71; // x20
  __int64 v72; // x27
  __int64 v73; // x26
  __int128 v74; // q1
  int64_t v75; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v76; // x26
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  __int64 v83; // x0
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v86; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v94; // [xsp+110h] [xbp-80h]

  if ( (byte_438E746 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__Remove__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_System_Predicate_UserServantEntity___ctor__);
    sub_B775C4(&System_Predicate_UserServantEntity__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_CombineServantListViewManager___c__DisplayClass174_0__ModifyList_b__0__);
    sub_B775C4(&CombineServantListViewManager___c__DisplayClass174_0_TypeInfo);
    byte_438E746 = 1;
  }
  v5 = sub_B77694(CombineServantListViewManager___c__DisplayClass174_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass174_0___ctor(
    (CombineServantListViewManager___c__DisplayClass174_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_120;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  sort = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v20 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v20 )
    goto LABEL_120;
  currentType = this->fields.currentType;
  isIconSizeChangea = isIconSizeChange;
  if ( (unsigned int)currentType >= *(_DWORD *)(v20 + 24) )
    goto LABEL_122;
  v22 = *(struct ListViewSort_o **)(v20 + 8 * currentType + 32);
  this->fields.sort = v22;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v22,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_120;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_120;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)sort,
                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = this->fields.currentType;
  if ( v31 > 0xB )
    goto LABEL_120;
  if ( ((1 << v31) & 0xFDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_120;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0LL);
    v33 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v33,
      OrganizationList,
      (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v34,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( !OrganizationList )
      goto LABEL_120;
    if ( !OrganizationList[1].monitor )
    {
      sort = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_120;
      sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_120;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
    if ( this->fields.baseUsrSvtData )
    {
      monitor = (int)OrganizationList[1].monitor;
      if ( monitor >= 1 )
      {
        v36 = 0LL;
        while ( (unsigned int)v36 < monitor )
        {
          v37 = *((_QWORD *)&OrganizationList[2].klass + v36);
          if ( !v37 )
            goto LABEL_120;
          v38 = *(_OWORD *)(v37 + 32);
          *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)(v37 + 16);
          *(_OWORD *)&v94.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v93 = v94;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v93, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_120;
          v40 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v41 = sort;
          *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v92.fields.fakeValue = v40;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v92, 0LL);
          if ( v41 == sort )
          {
            if ( !v34 )
              goto LABEL_120;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v34,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v37,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            if ( !v33 )
              goto LABEL_120;
            sort = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                     (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v33,
                     (WarBoardManager_TaskList_o *)v37,
                     (const MethodInfo_3054C44 *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v36 >= monitor )
            goto LABEL_33;
        }
        goto LABEL_122;
      }
LABEL_33:
      if ( !v34 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v34,
        (System_Collections_Generic_IEnumerable_T__o *)v33,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v34,
                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      goto LABEL_35;
    }
  }
  else
  {
    if ( v31 == 1 )
    {
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_120;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0LL);
      v57 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v57,
        OrganizationList,
        (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
      v58 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v58,
        (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v57 )
          goto LABEL_120;
        size = v57->fields._size;
        if ( size >= 1 )
        {
          for ( i = 0; i < size; ++i )
          {
            if ( size <= (unsigned int)i )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v61 = v57->fields._items->m_Items[i];
            if ( !v61 )
              goto LABEL_120;
            v62 = *(_OWORD *)&v61->fields.baseSquare;
            *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)&v61->fields.flagNow;
            *(_OWORD *)&v94.fields.fakeValue = v62;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v91 = v94;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v91, 0LL);
            v63 = this->fields.baseUsrSvtData;
            if ( !v63 )
              goto LABEL_120;
            v64 = *(_OWORD *)&v63->fields.id.fields.fakeValue;
            v65 = sort;
            *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&v63->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v90.fields.fakeValue = v64;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v90, 0LL);
            if ( v65 == sort )
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)v57,
                i,
                (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            size = v57->fields._size;
          }
        }
        sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v57,
                          (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
        OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      }
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      if ( !selectedMaterialUserServantIdList || selectedMaterialUserServantIdList->fields._size < 1 )
      {
LABEL_35:
        if ( !OrganizationList )
          goto LABEL_120;
        goto LABEL_36;
      }
      *(_DWORD *)(v5 + 24) = 0;
      v67 = this->fields.selectedMaterialUserServantIdList;
      if ( !v67 )
        goto LABEL_120;
      v68 = 0;
      v69 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v5 + 32);
      while ( v68 < v67->fields._size )
      {
        if ( !v57 )
          goto LABEL_120;
        if ( v57->fields._size >= 1 )
        {
          v70 = 0;
          while ( 1 )
          {
            if ( !OrganizationList )
              goto LABEL_120;
            if ( v70 >= LODWORD(OrganizationList[1].monitor) )
              break;
            v71 = this->fields.selectedMaterialUserServantIdList;
            if ( !v71 )
              goto LABEL_120;
            v72 = *(int *)(v5 + 24);
            v73 = *((_QWORD *)&OrganizationList[2].klass + (int)v70);
            if ( v71->fields._size <= (unsigned int)v72 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            if ( !v73 )
              goto LABEL_120;
            v74 = *(_OWORD *)(v73 + 32);
            v75 = v71->fields._items->m_Items[v72];
            *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)(v73 + 16);
            *(_OWORD *)&v94.fields.fakeValue = v74;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v89 = v94;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v89, 0LL);
            if ( v75 == sort )
            {
              if ( !v58 )
                goto LABEL_120;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v58,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v73,
                (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              v76 = *v69;
              if ( !*v69 )
              {
                v76 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B77694(System_Predicate_UserServantEntity__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v76,
                  (Il2CppObject *)v5,
                  Method_CombineServantListViewManager___c__DisplayClass174_0__ModifyList_b__0__,
                  (const MethodInfo_2C3248C *)Method_System_Predicate_UserServantEntity___ctor__);
                *(_QWORD *)(v5 + 32) = v76;
                sub_B77560(
                  (BattleServantConfConponent_o *)(v5 + 32),
                  (System_Int32_array **)v76,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81,
                  v82);
              }
              sort = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                       (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v57,
                       (System_Predicate_T__o *)v76,
                       (const MethodInfo_3054DE8 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
            }
            if ( (signed int)++v70 >= v57->fields._size )
              goto LABEL_108;
          }
LABEL_122:
          v83 = sub_B776C8(sort);
          sub_B77668(v83, 0LL);
        }
LABEL_108:
        v68 = *(_DWORD *)(v5 + 24) + 1;
        *(_DWORD *)(v5 + 24) = v68;
        v67 = this->fields.selectedMaterialUserServantIdList;
        if ( !v67 )
          goto LABEL_120;
      }
      if ( !v58 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v58,
        (System_Collections_Generic_IEnumerable_T__o *)v57,
        (const MethodInfo_30534E8 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v58,
                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      if ( !sort )
        goto LABEL_120;
    }
    else
    {
      v7 = this->fields.baseUsrSvtData;
      if ( !v7 )
        goto LABEL_120;
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_120;
      sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v7, 0LL);
      if ( !sort )
        goto LABEL_120;
    }
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
    if ( !*(_QWORD *)(sort + 24) )
    {
      sort = (int64_t)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_120;
      sort = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_120;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
  }
LABEL_36:
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_120;
  v43 = OrganizationList[1].monitor;
  if ( (int)v43 >= 1 )
  {
    v44 = itemList->fields._size;
    v45 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v46 = *((_QWORD *)&OrganizationList[2].klass + (int)v45);
      if ( !v46 )
        goto LABEL_120;
      v47 = *(_OWORD *)(v46 + 32);
      *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)(v46 + 16);
      *(_OWORD *)&v94.fields.fakeValue = v47;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v88 = v94;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v88, 0LL);
      if ( v44 >= 1 )
        break;
LABEL_64:
      if ( (int)++v45 >= (int)v43 )
        return;
      if ( v45 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_122;
    }
    v48 = sort;
    v49 = 0LL;
    while ( 1 )
    {
      v50 = this->fields.itemList;
      if ( !v50 )
        goto LABEL_120;
      if ( v50->fields._size <= (unsigned int)v49 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v51 = (CombineServantListViewItem_o *)v50->fields._items->m_Items[v49];
      if ( !v51 )
        goto LABEL_120;
      v52 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v51->klass->_2.bitflags2 + 1) < (unsigned int)v52
        || (CombineServantListViewItem_c *)v51->klass->_2.typeHierarchy[v52 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                        v51,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v51, (const MethodInfo *)v7);
        if ( !sort )
          goto LABEL_120;
        v53 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v94.fields.fakeValue = v53;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v87 = v94;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v87, 0LL);
        if ( sort == v48 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v51, (const MethodInfo *)v7);
          if ( sort )
          {
            v54 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v94.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v94.fields.fakeValue = v54;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v86 = v94;
            v55 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v86, 0LL);
            CombineServantListViewManager__ModifyLockItem_31558952(this, v51, v55, 1, isIconSizeChangeb, v56);
            goto LABEL_64;
          }
LABEL_120:
          sub_B7769C(sort, v7);
        }
      }
      if ( (int)++v49 >= v44 )
        goto LABEL_64;
    }
    sub_B77990(v51);
    goto LABEL_122;
  }
}


void __fastcall CombineServantListViewManager__ModifyLockItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v8; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v11; // w28
  int64_t v12; // x0
  CombineServantListViewItem_c *v13; // x1
  Il2CppObject *current; // x22
  __int64 v15; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v17; // x1
  __int128 v18; // q0
  int64_t v19; // x0
  __int128 v20; // q0
  int64_t v21; // x23
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  UnityEngine_Object_o *monitor; // x23
  __int64 v31; // x1
  void *v32; // x0
  __int64 v33; // x1
  ListViewObject_o *v34; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v37; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v38; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v39; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_438E73F & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E73F = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_44:
      sub_B7769C(Instance, v8);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v39.fields.current = (Il2CppObject *)v38.fields.fakeValue;
  *(_OWORD *)&v39.fields.list = *(_OWORD *)&v38.fields.currentCryptoKey;
  v11 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v39,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v12 & 1) == 0 )
      break;
    current = v39.fields.current;
    if ( v39.fields.current )
    {
      v13 = CombineServantListViewItem_TypeInfo;
      v15 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v39.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
        || (CombineServantListViewItem_c *)v39.fields.current->klass->_2.typeHierarchy[v15 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B77990(v39.fields.current);
LABEL_38:
        sub_B7769C(UserSvtEntity, v17);
      }
    }
    if ( Entity )
    {
      if ( !v39.fields.current )
        sub_B7769C(v12, v13);
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v39.fields.current,
                        (const MethodInfo *)v13);
      if ( !UserSvtEntity )
        goto LABEL_38;
      v18 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v38.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v38.fields.fakeValue = v18;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v37 = v38;
      v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v37, 0LL);
      v20 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      v21 = v19;
      *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v36.fields.fakeValue = v20;
      v12 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v36, 0LL);
      if ( v21 == v12 )
      {
        current[7].monitor = Entity;
        sub_B77560(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
    }
    if ( v11 )
    {
      if ( !current )
        sub_B7769C(v12, v13);
      CombineServantListViewItem__ModifyLockItem((CombineServantListViewItem_o *)current, (const MethodInfo *)v13);
      CombineServantListViewItem__ModifyChoiceItem((CombineServantListViewItem_o *)current, v28);
      CombineServantListViewItem__ModifyPushItem((CombineServantListViewItem_o *)current, v29);
    }
    else if ( !current )
    {
      sub_B7769C(v12, v13);
    }
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v32 = current[6].monitor;
      if ( !v32 )
        sub_B7769C(0LL, v31);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v32 + 392LL))(
        v32,
        current,
        *(_QWORD *)(*(_QWORD *)v32 + 400LL));
      if ( isIconSizeChange )
      {
        v34 = (ListViewObject_o *)current[6].monitor;
        if ( !v34 )
          sub_B7769C(0LL, v33);
        ListViewObject__SetItemSeed(v34, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v39,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyLockItem_31558952(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v10; // x20
  CombineServantListViewManager_o *v11; // x23
  __int128 v12; // q1
  int64_t v13; // x0
  __int128 v14; // q0
  CombineServantListViewManager_o *v15; // x24
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+40h] [xbp-50h]

  v10 = this;
  if ( (byte_438E740 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E740 = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (CombineServantListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_28;
      v11 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(
                                                  servantItem,
                                                  (const MethodInfo *)servantItem);
      if ( !this )
        goto LABEL_28;
      v12 = *(_OWORD *)&this->fields.indicator;
      *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&this->fields.m_CachedPtr;
      *(_OWORD *)&v27.fields.fakeValue = v12;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v26 = v27;
      v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v26, 0LL);
      v14 = *(_OWORD *)&v11->fields.indicator;
      v15 = (CombineServantListViewManager_o *)v13;
      *(_OWORD *)&v25.fields.currentCryptoKey = *(_OWORD *)&v11->fields.m_CachedPtr;
      *(_OWORD *)&v25.fields.fakeValue = v14;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                  &v25,
                                                  0LL);
      if ( v15 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v11;
        sub_B77560(
          (BattleServantConfConponent_o *)&servantItem->fields.userSvtEntity,
          (System_Int32_array **)v11,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
    }
  }
  if ( isIconSizeChange || !isInit )
  {
    if ( !servantItem )
      goto LABEL_28;
  }
  else
  {
    if ( !servantItem )
      goto LABEL_28;
    CombineServantListViewItem__ModifyLockItem(servantItem, (const MethodInfo *)servantItem);
    CombineServantListViewItem__ModifyChoiceItem(servantItem, v22);
    CombineServantListViewItem__ModifyPushItem(servantItem, v23);
  }
  viewObject = (UnityEngine_Object_o *)servantItem->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
  {
    this = (CombineServantListViewManager_o *)servantItem->fields.viewObject;
    if ( this )
    {
      ((void (__fastcall *)(CombineServantListViewManager_o *, CombineServantListViewItem_o *, Il2CppMethodPointer))this->klass->vtable._5_SetSortButtonImage.method)(
        this,
        servantItem,
        this->klass->vtable._6_GetDragRoot.methodPtr);
      if ( !isIconSizeChange )
        return;
      this = (CombineServantListViewManager_o *)servantItem->fields.viewObject;
      if ( this )
      {
        ListViewObject__SetItemSeed((ListViewObject_o *)this, (ListViewItem_o *)servantItem, v10->fields.seed, 0LL);
        return;
      }
    }
LABEL_28:
    sub_B7769C(this, servantItem);
  }
}


void __fastcall CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_438E75C & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E75C = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort
      || (ListViewSort__IncBonusKind2(
            sort,
            this->fields.bonusEventIdList,
            this->fields.servantFilterIdList,
            this->fields.eventCampaignIdList,
            this->fields.eventCampaignServantIdList,
            0LL,
            0LL,
            0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0LL),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
    {
      sub_B7769C(sort, v3);
    }
    CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)sort, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickChangeExpInfo(
        CombineServantListViewManager_o *this,
        int32_t dispKind,
        int32_t dispType,
        const MethodInfo *method)
{
  struct ListViewSort_o *sort; // x8
  struct ListViewSort_o *v5; // x8

  sort = this->fields.sort;
  if ( !sort || (sort->fields.expUpDispKind = dispKind, (v5 = this->fields.sort) == 0LL) )
    sub_B7769C(this, dispKind);
  v5->fields.expUpDispType = dispType;
}


void __fastcall CombineServantListViewManager__OnClickChoiceTab(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_438E767 & 1) == 0 )
  {
    sub_B775C4(&Method_CombineServantListViewManager_EndClickTabChoice__);
    sub_B775C4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E767 = 1;
  }
  if ( this->fields.modeKind != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v4 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B77694(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabChoice__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 2, v3);
      CombineServantListViewManager__ReleaseAll(this, v6);
      CombineServantListViewManager__ModifyList(this, 0, v7);
      CombineServantListViewManager__SetMode_31559684(this, 2, v8);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickCollectLock(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_438E766 & 1) == 0 )
  {
    sub_B775C4(&Method_CombineServantListViewManager_EndClickTabLock__);
    sub_B775C4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E766 = 1;
  }
  if ( this->fields.modeKind != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v4 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B77694(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabLock__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 1, v3);
      CombineServantListViewManager__ReleaseAll(this, v6);
      CombineServantListViewManager__ModifyList(this, 0, v7);
      CombineServantListViewManager__SetMode_31559684(this, 2, v8);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickDecide(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  System_Collections_Generic_List_long__o *v5; // x20
  struct CombineRootComponent_o *v6; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  struct CombineRootComponent_o *v8; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v10; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  struct CombineRootComponent_o *v13; // x8
  UnityEngine_Object_o *v14; // x20
  struct CombineRootComponent_o *v15; // x8
  struct CombineRootComponent_o *v16; // x8
  CheckMaterialSvtEquippedDialog_o *v17; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v18; // x0
  System_Collections_Generic_List_long__o *v19; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v20; // x22
  System_Action_int__o *v21; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E747 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_int___ctor__);
    sub_B775C4(&System_Action_int__TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager__OnClickDecide_b__175_0__);
    sub_B775C4(&Method_System_Linq_Enumerable_Distinct_long___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToList_long___);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E747 = 1;
  }
  equipLastSvtList = 0LL;
  if ( this->fields.isDecideFlg )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    combineRootComponent = this->fields.combineRootComponent;
    if ( !combineRootComponent )
      goto LABEL_33;
    CombineRootComponent__SetBackSelect(combineRootComponent, 1, 0LL);
    v5 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v5,
      (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v5;
    if ( this->fields.currentType == 1 )
    {
      v6 = this->fields.combineRootComponent;
      if ( !v6 )
        goto LABEL_33;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v6->fields.checkMaterialSvtEquipped;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(
                                                         checkMaterialSvtEquipped,
                                                         0LL,
                                                         0LL);
      if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
      {
        v8 = this->fields.combineRootComponent;
        if ( !v8 )
          goto LABEL_33;
        combineRootComponent = (CombineRootComponent_o *)v8->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_33;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
          (CheckMaterialSvtEquippedDialog_o *)combineRootComponent,
          0LL);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v3);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v10);
      v12 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_1D2E594 *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v12,
                                                         (const MethodInfo_1D40420 *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v13 = this->fields.combineRootComponent;
        if ( !v13 )
          goto LABEL_33;
        v14 = (UnityEngine_Object_o *)v13->fields.checkMaterialSvtEquipped;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v15 = this->fields.combineRootComponent;
          if ( v15 )
          {
            combineRootComponent = (CombineRootComponent_o *)v15->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0LL);
              v16 = this->fields.combineRootComponent;
              if ( v16 )
              {
                v17 = v16->fields.checkMaterialSvtEquipped;
                v18 = CombineServantListViewManager__GetSelectMaterialItemList(this, v3);
                v19 = equipLastSvtList;
                v20 = v18;
                v21 = (System_Action_int__o *)sub_B77694(System_Action_int__TypeInfo);
                System_Action_int____ctor(
                  v21,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__175_0__,
                  (const MethodInfo_269F2D8 *)Method_System_Action_int___ctor__);
                if ( v17 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v17, v20, v19, v21, 0LL);
                  return;
                }
              }
            }
          }
LABEL_33:
          sub_B7769C(combineRootComponent, v3);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v3);
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(2, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilter2Kind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t *p_LIMIT_UP_FILTER2_MAX_KIND_NUM; // x9
  int32_t v8; // w9

  if ( (byte_438E75D & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E75D = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( sort )
    {
      filter2Kind = sort->fields.filter2Kind;
      if ( this->fields.itemType == 2 )
      {
        if ( (WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
          sort = this->fields.sort;
          if ( !sort )
            goto LABEL_24;
        }
        p_LIMIT_UP_FILTER2_MAX_KIND_NUM = &CombineServantListViewManager_TypeInfo->static_fields->LIMIT_UP_FILTER2_MAX_KIND_NUM;
      }
      else
      {
        if ( (WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
          sort = this->fields.sort;
          if ( !sort )
            goto LABEL_24;
        }
        p_LIMIT_UP_FILTER2_MAX_KIND_NUM = &CombineServantListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM;
      }
      if ( filter2Kind + 1 <= *p_LIMIT_UP_FILTER2_MAX_KIND_NUM )
        v8 = filter2Kind + 1;
      else
        v8 = 0;
      sort->fields.filter2Kind = v8;
      noticeTween = this->fields.noticeTween;
      if ( noticeTween )
      {
        CombineServantListViewNoticeTween__Clear(noticeTween, 0LL);
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
        noticeTween = this->fields.noticeTween;
        if ( noticeTween )
        {
          CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
          return;
        }
      }
    }
LABEL_24:
    sub_B7769C(noticeTween, v4);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 itemType; // x8
  int32_t v4; // w20
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v7; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v8; // x23
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438E759 & 1) == 0 )
  {
    sub_B775C4(&ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager_EndSelectFilterKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E759 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    itemType = this->fields.itemType;
    v4 = 0;
    if ( (unsigned int)itemType <= 0xB )
      v4 = dword_332FD40[itemType];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v7 = (CommonUI_o *)Instance;
    v8 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B77694(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v7 )
      sub_B7769C(v9, v10);
    CommonUI__OpenServantFilterSelectMenu(v7, v4, sort, v8, -1, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickListView(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineServantListViewManager__OnClickLockModeItem(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 v5; // x9
  CombineServantListViewItem_o *Item; // x20
  __int128 v7; // q1
  int64_t v8; // x0
  const MethodInfo *v9; // x4
  const MethodInfo *v10; // x2
  CombineServantListViewManager_o *v11; // x0
  CombineServantListViewItem_o *v12; // x1
  const MethodInfo *v13; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v14; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v15; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_438E755 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewObject_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438E755 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v5 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B77990(obj);
    CombineServantListViewManager__IsDragEnable(v11, v12, v13);
    return;
  }
  Item = CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(11, 0LL);
  if ( !Item
    || (Item->fields.isSwapLock ^= 1u,
        (this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(
                                                     Item,
                                                     (const MethodInfo *)obj)) == 0LL) )
  {
LABEL_15:
    sub_B7769C(this, obj);
  }
  v7 = *(_OWORD *)&this->fields.indicator;
  *(_OWORD *)&v15.fields.currentCryptoKey = *(_OWORD *)&this->fields.m_CachedPtr;
  *(_OWORD *)&v15.fields.fakeValue = v7;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v14 = v15;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v14, 0LL);
  CombineServantListViewManager__ModifyLockItem(v4, v8, 0, 0, v9);
  CombineServantListViewManager__SetMode_31559684(v4, 3, v10);
}


void __fastcall CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438E765 & 1) == 0 )
  {
    sub_B775C4(&Method_CombineServantListViewManager_EndClickTabStatus__);
    sub_B775C4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E765 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B77694(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    CombineServantListViewManager_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndClickTabStatus__,
      0LL);
    CombineServantListViewManager__StatusRequest(this, v3, v4);
  }
}


void __fastcall CombineServantListViewManager__OnClickPush(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x2

  if ( (byte_438E768 & 1) == 0 )
  {
    sub_B775C4(&Method_CombineServantListViewManager_EndClickTabPush__);
    sub_B775C4(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E768 = 1;
  }
  if ( this->fields.modeKind != 3 )
  {
    EventTutorialMaster__CheckTutorial(-1, 68, 0LL, 0, 0, 0, 0, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( this->fields.modeKind )
    {
      v4 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B77694(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v4,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabPush__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v4, v5);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 3, v3);
      CombineServantListViewManager__ReleaseAll(this, v6);
      CombineServantListViewManager__ModifyList(this, 0, v7);
      CombineServantListViewManager__SetMode_31559684(this, 2, v8);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_438E74E & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E74E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  CombineServantListViewManager__ReleaseAll(this, v3);
}


void __fastcall CombineServantListViewManager__OnClickScaleChange(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *ScaleKindSpriteName; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  unsigned int scaleType; // w8
  int32_t v12; // w8
  __int64 v13; // x10
  bool v14; // zf
  __int64 v15; // x8
  int32_t currentType; // w8
  int32_t v17; // w8
  struct ListViewItemSeed_o *v18; // x1
  struct ListViewSort_o *sort; // x8
  UISprite_o *scaleChangeButtonSprite; // x20
  const MethodInfo *v21; // x2
  const MethodInfo *v22; // x2

  if ( (byte_438E76A & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E76A = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  scaleType = this->fields.scaleType;
  if ( scaleType < 2 )
  {
    currentType = this->fields.currentType;
    v13 = 816LL;
    this->fields.scaleType = 2;
    v14 = currentType == 11;
    v15 = 840LL;
  }
  else if ( scaleType == 2 )
  {
    v17 = this->fields.currentType;
    v13 = 824LL;
    this->fields.scaleType = 3;
    v14 = v17 == 11;
    v15 = 848LL;
  }
  else
  {
    if ( scaleType != 3 )
      goto LABEL_15;
    v12 = this->fields.currentType;
    v13 = 808LL;
    this->fields.scaleType = 1;
    v14 = v12 == 11;
    v15 = 832LL;
  }
  if ( !v14 )
    v15 = v13;
  v18 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v15);
  this->fields.seed = v18;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.seed, (System_Int32_array **)v18, v5, v6, v7, v8, v9, v10);
LABEL_15:
  sort = this->fields.sort;
  if ( !sort )
    goto LABEL_21;
  sort->fields.iconScaleKind = this->fields.scaleType;
  ScaleKindSpriteName = this->fields.sort;
  if ( !ScaleKindSpriteName )
    goto LABEL_21;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  ScaleKindSpriteName = (ListViewSort_o *)ListViewSort__GetScaleKindSpriteName(
                                            ScaleKindSpriteName,
                                            this->fields.scaleType,
                                            0LL);
  if ( !scaleChangeButtonSprite
    || (UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)ScaleKindSpriteName, 0LL),
        CombineServantListViewManager__ModifyList(this, 1, v21),
        CombineServantListViewManager__SetMode_31559684(this, 2, v22),
        (ScaleKindSpriteName = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)ScaleKindSpriteName, 0LL),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (ScaleKindSpriteName = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
  {
LABEL_21:
    sub_B7769C(ScaleKindSpriteName, v4);
  }
  CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)ScaleKindSpriteName, 0LL);
}


void __fastcall CombineServantListViewManager__OnClickSelectBase(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 v5; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v7; // x21
  __int128 v8; // q1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t v15; // w0
  const MethodInfo *v16; // x1
  System_Int32_array **UserSvtEntity; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  CombineServantListViewManager_o *v24; // x0
  ListViewObject_o *v25; // x1
  const MethodInfo *v26; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v28; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_438E751 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewObject_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (CombineServantListViewManager_o *)sub_B775C4(&SoundManager_TypeInfo);
    byte_438E751 = 1;
  }
  if ( !obj )
    goto LABEL_42;
  v5 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B77990(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v24, v25, v26);
    return;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v7 = (CombineServantListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v8 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v28.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v28.fields.fakeValue = v8;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v27 = v28;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                &v27,
                                                0LL);
    if ( !v7 )
      goto LABEL_42;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(
                                                      v7,
                                                      (const MethodInfo *)obj) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData, 0LL, v9, v10, v11, v12, v13, v14);
      this = (CombineServantListViewManager_o *)v4->fields.tempMaterialUserServantIdList;
      if ( this )
      {
        System_Collections_Generic_List_long___Clear(
          (System_Collections_Generic_List_long__o *)this,
          (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
        goto LABEL_28;
      }
LABEL_42:
      sub_B7769C(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_42;
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v7, (const MethodInfo *)obj) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v15 = 2;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v15 = 0;
  }
  SoundManager__playSystemSe(v15, 0LL);
  UserSvtEntity = (System_Int32_array **)CombineServantListViewItem__get_UserSvtEntity(v7, v16);
  v4->fields.baseUsrSvtData = (struct UserServantEntity_o *)UserSvtEntity;
  sub_B77560((BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData, UserSvtEntity, v18, v19, v20, v21, v22, v23);
LABEL_28:
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_42;
  CombineRootComponent__SetBackSelect((CombineRootComponent_o *)this, v4->fields.baseUsrSvtData != 0LL, 0LL);
  this = (CombineServantListViewManager_o *)v4->fields.combineRootComponent;
  if ( !this )
    goto LABEL_42;
  switch ( HIDWORD(this->fields.spendQpInfoLabel) )
  {
    case 3:
      CombineRootComponent__ShowSelectBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 5:
      CombineRootComponent__ShowSelectLimitUpBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 6:
      CombineRootComponent__ShowSelectLvExceedBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 7:
      CombineRootComponent__BackServantList((CombineRootComponent_o *)this, 0LL);
      break;
    case 9:
      CombineRootComponent__ShowCommandCardEquipmentSelectedBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xA:
      CombineRootComponent__SetSelectSvtSkill((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xB:
      CombineRootComponent__SetSelectSvtNp((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xC:
      CombineRootComponent__ShowSelectFriendshipExceedBaseSvt((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xD:
      CombineRootComponent__SelectBaseServantInCommandCardExceed((CombineRootComponent_o *)this, 0LL);
      break;
    case 0xE:
      CombineRootComponent__SetSelectSvtAppendSkill((CombineRootComponent_o *)this, 0LL);
      break;
    default:
      return;
  }
}


void __fastcall CombineServantListViewManager__OnClickSelectMaterial(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 v5; // x9
  ListViewItem_o *v6; // x20
  const MethodInfo *v7; // x5
  int32_t selectNum; // w21
  const MethodInfo *v9; // x3
  int32_t klass; // w9
  _BOOL8 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3
  __int64 v15; // x9
  __int64 v16; // x9
  CommonUI_o *v17; // x21
  CombineServantListViewManager___c_c *v18; // x8
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__189_0; // x22
  Il2CppObject *v21; // x23
  struct CombineServantListViewManager___c_StaticFields *v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x9
  __int64 v30; // x9
  void *v31; // x0
  int v32; // w1
  __int64 v33; // x20
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_438E752 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CombineRootComponent_TypeInfo);
    sub_B775C4(&CombineServantListViewObject_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__189_0__);
    this = (CombineServantListViewManager_o *)sub_B775C4(&CombineServantListViewManager___c_TypeInfo);
    byte_438E752 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( !obj )
    goto LABEL_48;
  v5 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v5
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v5 - 1] != CombineServantListViewObject_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)obj;
    goto LABEL_50;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  if ( !this )
    goto LABEL_48;
  v6 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v6->fields.selectNum;
    ListViewItem__set_IsSelect(v6, 0, 0LL);
    --v4->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(v4, 1, (CombineServantListViewItem_o *)v6, v9);
    this = (CombineServantListViewManager_o *)v4->fields.itemList;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v34,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v34,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v11 )
          break;
        if ( !v34.fields.current )
          sub_B7769C(v11, v12);
        klass = (int32_t)v34.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v34.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v34,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_45;
    }
LABEL_48:
    sub_B7769C(this, obj);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v6, 0, 0, 0, v7) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_48;
  v15 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v15 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_50:
    sub_B77990(this);
    if ( v32 != 1 )
      _Unwind_Resume(v31);
    v33 = *(_QWORD *)__cxa_begin_catch(v31);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v34,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v33 )
      sub_B77668(v33, 0LL);
    goto LABEL_45;
  }
  if ( HIDWORD(this->fields.currentLvLabel) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_48;
    v16 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v16
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v16 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v17 = (CommonUI_o *)this;
    v18 = CombineServantListViewManager___c_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v18 = CombineServantListViewManager___c_TypeInfo;
    }
    static_fields = v18->static_fields;
    _9__189_0 = static_fields->__9__189_0;
    if ( !_9__189_0 )
    {
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      }
      v21 = (Il2CppObject *)static_fields->__9;
      _9__189_0 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__189_0,
        v21,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__189_0__,
        0LL);
      v22 = CombineServantListViewManager___c_TypeInfo->static_fields;
      v22->__9__189_0 = _9__189_0;
      sub_B77560(
        (BattleServantConfConponent_o *)&v22->__9__189_0,
        (System_Int32_array **)_9__189_0,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
    }
    if ( !v17 )
      goto LABEL_48;
    CommonUI__CloseTutorialNotificationDialogArrow_18081340(v17, _9__189_0, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_48;
    v29 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v29
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v29 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    if ( HIDWORD(this->fields.currentLvLabel) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_48;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_48;
      v30 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v30
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v30 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__ShowTutorial((CombineRootComponent_o *)this, 0LL);
        goto LABEL_44;
      }
      goto LABEL_50;
    }
  }
LABEL_44:
  v6->fields.selectNum = v4->fields.selectSum++;
  CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v6, v14);
LABEL_45:
  CombineServantListViewManager__RefrashListDisp(v4, v13);
}


void __fastcall CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x19
  CombineServantListViewItem_o *SelfUserGame; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x9
  System_Int32_array **Item; // x0
  CombineServantListViewItem_o **v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2
  int64_t userSvtEntity; // x22
  __int128 v25; // q1
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x21
  __int64 v28; // x22
  __int64 v29; // x23
  ServantEntity_o *v30; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v32; // w22
  int32_t svtId; // w22
  int32_t v34; // w27
  int32_t v35; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v37; // x21
  System_String_o *v38; // x22
  System_Object_array *v39; // x24
  int32_t Rarity; // w26
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **v47; // x26
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Int32_array **v54; // x26
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  System_Int32_array **v61; // x25
  int32_t v62; // w0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x25
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x25
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x20
  System_String_o *v84; // x20
  System_String_o *v85; // x22
  System_String_o *v86; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v88; // x25
  __int64 v89; // x0
  __int64 v90; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v93; // 0:x0.16

  if ( (byte_438E753 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&CombineServantListViewObject_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&object___TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Rarity_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager___c__DisplayClass190_0__OnClickSelectPush_b__0__);
    sub_B775C4(&CombineServantListViewManager___c__DisplayClass190_0_TypeInfo);
    sub_B775C4(&StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/);
    sub_B775C4(&StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/);
    byte_438E753 = 1;
  }
  v5 = sub_B77694(CombineServantListViewManager___c__DisplayClass190_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass190_0___ctor(
    (CombineServantListViewManager___c__DisplayClass190_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_71;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  if ( !obj )
    goto LABEL_71;
  v14 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v14
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v14 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B77990(obj);
    goto LABEL_73;
  }
  Item = (System_Int32_array **)CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v5 + 24) = Item;
  v16 = (CombineServantListViewItem_o **)(v5 + 24);
  sub_B77560((BattleServantConfConponent_o *)(v5 + 24), Item, v17, v18, v19, v20, v21, v22);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame )
    goto LABEL_71;
  userSvtEntity = (int64_t)SelfUserGame->fields.userSvtEntity;
  if ( !userSvtEntity )
  {
LABEL_18:
    CombineServantListViewManager__PushRequest(this, *v16, v23);
    return;
  }
  SelfUserGame = *v16;
  if ( !*v16 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v7);
  if ( !SelfUserGame )
    goto LABEL_71;
  v25 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v92.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v92.fields.fakeValue = v25;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v91 = v92;
  if ( userSvtEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v91, 0LL) )
    goto LABEL_18;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_71;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
             userSvtEntity,
             (const MethodInfo_21FBABC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_71;
  v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
  v29 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v28 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v93.fields.currentCryptoKey = v29;
  *(_QWORD *)&v93.fields.fakeValue = v28;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                   v93,
                                                   0LL);
  if ( !v27 )
    goto LABEL_71;
  v30 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v27,
                             (int32_t)SelfUserGame,
                             (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(Entity->fields.svtId, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                   Entity->fields.limitCount,
                                                   0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   Master_WarQuestSelectionMaster,
                                                   v32,
                                                   (int32_t)SelfUserGame,
                                                   0LL);
  if ( !*v16 )
    goto LABEL_71;
  svtId = (*v16)->fields.svtId;
  v34 = (int)SelfUserGame;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v16, v7);
  if ( !SelfUserGame )
    goto LABEL_71;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.basePosition.fields.y,
          0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 svtId,
                                 v35,
                                 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v37 = LocalizationManager__Get((System_String_o *)StringLiteral_12232/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v38 = LocalizationManager__Get((System_String_o *)StringLiteral_12231/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v39 = (System_Object_array *)sub_B775DC(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v39 )
LABEL_71:
    sub_B7769C(SelfUserGame, v7);
  v47 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B77684(SelfUserGame, v39->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( !v39->max_length )
    goto LABEL_73;
  v39->m_Items[0] = (Il2CppObject *)v47;
  sub_B77560((BattleServantConfConponent_o *)v39->m_Items, v47, v41, v42, v43, v44, v45, v46);
  if ( !v30 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName(v30, 0LL);
  v54 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B77684(SelfUserGame, v39->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v39->max_length <= 1 )
    goto LABEL_73;
  v39->m_Items[1] = (Il2CppObject *)v54;
  sub_B77560((BattleServantConfConponent_o *)&v39->m_Items[1], v54, v48, v49, v50, v51, v52, v53);
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(v30, v34, -1, 0LL);
  v61 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B77684(SelfUserGame, v39->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v39->max_length <= 2 )
    goto LABEL_73;
  v39->m_Items[2] = (Il2CppObject *)v61;
  sub_B77560((BattleServantConfConponent_o *)&v39->m_Items[2], v61, v55, v56, v57, v58, v59, v60);
  SelfUserGame = *v16;
  if ( !*v16 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v7);
  if ( !SelfUserGame )
    goto LABEL_71;
  v62 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v62, 0LL);
  v69 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B77684(SelfUserGame, v39->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v39->max_length <= 3 )
    goto LABEL_73;
  v39->m_Items[3] = (Il2CppObject *)v69;
  sub_B77560((BattleServantConfConponent_o *)&v39->m_Items[3], v69, v63, v64, v65, v66, v67, v68);
  if ( !*v16 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)(*v16)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v76 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B77684(SelfUserGame, v39->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v39->max_length <= 4 )
    goto LABEL_73;
  v39->m_Items[4] = (Il2CppObject *)v76;
  sub_B77560((BattleServantConfConponent_o *)&v39->m_Items[4], v76, v70, v71, v72, v73, v74, v75);
  if ( !*v16 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)(*v16)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(
                                                   (ServantEntity_o *)SelfUserGame,
                                                   ServantLimitCountSealAfter,
                                                   -1,
                                                   0LL);
  v83 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B77684(SelfUserGame, v39->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_74:
      v90 = sub_B776BC(SelfUserGame);
      sub_B77668(v90, 0LL);
    }
  }
  if ( v39->max_length <= 5 )
  {
LABEL_73:
    v89 = sub_B776C8(SelfUserGame);
    sub_B77668(v89, 0LL);
  }
  v39->m_Items[5] = (Il2CppObject *)v83;
  sub_B77560((BattleServantConfConponent_o *)&v39->m_Items[5], v83, v77, v78, v79, v80, v81, v82);
  v84 = System_String__Format_44980660(v38, v39, 0LL);
  v85 = LocalizationManager__Get((System_String_o *)StringLiteral_12230/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v86 = LocalizationManager__Get((System_String_o *)StringLiteral_12229/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v88 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v88,
    (Il2CppObject *)v5,
    Method_CombineServantListViewManager___c__DisplayClass190_0__OnClickSelectPush_b__0__,
    0LL);
  SelfUserGame = (CombineServantListViewItem_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_71;
  CommonUI__OpenConfirmDialog_18055364(
    Instance,
    v37,
    v84,
    v85,
    v86,
    v88,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0LL);
}


void __fastcall CombineServantListViewManager__OnClickSortAscendingOrder(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct ListViewSort_o *sort; // x8

  if ( (byte_438E762 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E762 = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    sort = this->fields.sort;
    if ( !sort )
      sub_B7769C(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickSortKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t itemType; // w8
  int v4; // w9
  int32_t v5; // w20
  bool v6; // w21
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x22
  CommonUI_o *v9; // x23
  ServantSortSelectMenu_CallbackFunc_o *v10; // x24
  __int64 v11; // x0
  __int64 v12; // x1

  if ( (byte_438E75E & 1) == 0 )
  {
    sub_B775C4(&ServantSortSelectMenu_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager_EndSelectSortKind__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E75E = 1;
  }
  if ( this->fields.isInput )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    itemType = this->fields.itemType;
    if ( itemType == 5 )
      v4 = 3;
    else
      v4 = 1;
    if ( itemType )
      v5 = v4;
    else
      v5 = 0;
    v6 = (itemType | 4) == 5;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v9 = (CommonUI_o *)Instance;
    v10 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B77694(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v9 )
      sub_B7769C(v11, v12);
    CommonUI__OpenServantSortSelectMenu(v9, v5, sort, v6, v10, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnLongPushListView(
        CombineServantListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  __int64 v6; // x9
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  const MethodInfo *v12; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  void *v20; // x0
  int v21; // w1
  __int64 v22; // x21
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v24; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438E757 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438E757 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_29515752(102, 0LL) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( item
      && ((v6 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v6)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_B77990(item);
      if ( v21 != 1 )
        _Unwind_Resume(v20);
      v22 = *(_QWORD *)__cxa_begin_catch(v20);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v24,
        (const MethodInfo_225AF70 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v22 )
        sub_B77668(v22, 0LL);
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v23,
          selectedMaterialUserServantIdList,
          (const MethodInfo_30ECBDC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v24 = v23;
        while ( 1 )
        {
          v9 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                 &v24,
                 (const MethodInfo_225AF74 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v9 )
            break;
          if ( !item )
            sub_B7769C(v9, v10);
          current = v24.fields.current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            v10) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v24,
          (const MethodInfo_225AF70 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v5);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, v12),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEntity,
            (System_Int32_array **)UserSvtEntity,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19),
          (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
    {
      sub_B7769C(combineRootComponent, v12);
    }
    CombineRootComponent__SelectShowServant(combineRootComponent, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnMoveEnd(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  UnityEngine_Object_o *scrollView; // x20
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UIScrollView_o *v14; // x0
  System_Action_o *callbackFunc2; // x20

  if ( (byte_438E745 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E745 = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
      {
        v14 = this->fields.scrollView;
        if ( !v14
          || (((void (__fastcall *)(UIScrollView_o *, __int64, Il2CppMethodPointer))v14->klass->vtable._8_UpdateScrollbars.method)(
                v14,
                1LL,
                v14->klass->vtable._9_SetDragAmount.methodPtr),
              (v14 = this->fields.scrollView) == 0LL) )
        {
          sub_B7769C(v14, v7);
        }
        UIScrollView__UpdatePosition(v14, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B77560((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
      if ( callbackFunc2 )
        System_Action__Invoke(callbackFunc2, 0LL);
    }
  }
}


void __fastcall CombineServantListViewManager__PushRequest(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *selectItem,
        const MethodInfo *method)
{
  DataManager_o *limitCountSupport; // x0
  const MethodInfo *v6; // x1
  DataManager_o *v7; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  UserServantCollectionMaster_o *v9; // x21
  int64_t v10; // x22
  __int64 v11; // x24
  __int64 v12; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v14; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v16; // x8
  int64_t v17; // x0
  __int128 v18; // q0
  NetworkManager_ResultCallbackFunc_o *v19; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v21; // q0
  CardFavoriteRequest_o *v22; // x20
  int32_t v23; // w27
  int32_t v24; // w28
  int32_t v25; // w21
  bool IsLock; // w23
  char v27; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v31; // w0
  __int64 v32; // x8
  int32_t randomSettingSupport; // w19
  int32_t v34; // [xsp+50h] [xbp-110h]
  int32_t v35; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v37; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v39; // [xsp+70h] [xbp-F0h]
  __int64 v40; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16

  if ( (byte_438E754 & 1) == 0 )
  {
    sub_B775C4(&Method_CombineServantListViewManager_EndCardFavoriteRequest__);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_B775C4(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438E754 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  v7 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, v6);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v7 || !UserSvtEntity )
    goto LABEL_21;
  v9 = (UserServantCollectionMaster_o *)limitCountSupport;
  v10 = *(_QWORD *)&v7->fields.m_CachedPtr;
  v12 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v45.fields.currentCryptoKey = v12;
  *(_QWORD *)&v45.fields.fakeValue = v11;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v45, 0LL);
  if ( !v9 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v9, v10, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v14 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  p_fields = &UserSvtEntity->fields;
  v16 = *(_QWORD *)&v7->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v44.fields.fakeValue = v14;
  v40 = v16;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v43 = v44;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v43, 0LL);
  v18 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v7->fields.writeMasterDataThread;
  v39 = v17;
  *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v42.fields.fakeValue = v18;
  v37 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v42, 0LL);
  v19 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v19,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v19,
                                        (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v21 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v22 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v41.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v41.fields.fakeValue = v21;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v41, 0LL);
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(UserSvtEntity->fields.imageLimitCount, 0LL);
  v34 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(UserSvtEntity->fields.dispLimitCount, 0LL);
  v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          UserSvtEntity->fields.commandCardLimitCount,
          0LL);
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(UserSvtEntity->fields.iconLimitCount, 0LL);
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          UserSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v27 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                  UserSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                       UserSvtEntity->fields.randomLimitCount,
                       0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
          UserSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v32 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v46.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v31;
  *(_QWORD *)&v46.fields.currentCryptoKey = v32;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v46, 0LL);
  if ( !v22 )
LABEL_21:
    sub_B7769C(limitCountSupport, v6);
  CardFavoriteRequest__beginRequest(
    v22,
    targetUsrSVtId,
    v35,
    v34,
    v23,
    v24,
    v25,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v37,
    IsLock,
    v27 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v40 != v39,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RefrashListDisp(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_CombineServantListViewObject__o *ObjectList; // x0
  __int64 v4; // x1
  CombineRootComponent_c **v5; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  struct UserServantEntity_o *v11; // x8
  int32_t adjustAtk; // w22
  int v13; // w21
  char v14; // w23
  char v15; // w26
  char v16; // w24
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v18; // x21
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *current; // x22
  __int64 v22; // x9
  int64_t UserSvtId; // x0
  UserServantEntity_o *v24; // x22
  System_Int64_array *v25; // x0
  int32_t v26; // w21
  struct UserServantEntity_o *v27; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x8
  struct UserServantEntity_o *v29; // x8
  int32_t *p_getHpUpVal; // x22
  _BOOL8 v31; // x0
  __int64 v32; // x1
  Il2CppObject *v33; // x26
  __int64 v34; // x9
  int klass_high; // w23
  __int64 v36; // x1
  int klass; // w8
  int monitor_high; // w9
  int32_t v39; // w10
  int32_t v40; // w9
  UserServantEntity_o *v41; // x0
  int32_t v42; // w10
  int32_t v43; // w9
  char v44; // w25
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v46; // x22
  __int64 v47; // x2
  Il2CppObject *v48; // x23
  __int64 v49; // x2
  Il2CppObject *v50; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v53; // s0
  float v54; // s8
  float v55; // s9
  int32_t v56; // w0
  int32_t selectQp; // s0
  int32_t v58; // w0
  UILabel_o *spendQpLabel; // x21
  __int64 v60; // x2
  Il2CppObject *v61; // x0
  __int64 v62; // x2
  UIWidget_o *v63; // x21
  int v64; // s0
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v69; // x0
  const MethodInfo *v70; // x2
  char v71; // w24
  int32_t v72; // w8
  struct UserServantEntity_o *v73; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v74; // x21
  __int64 v75; // x22
  __int64 v76; // x23
  int32_t v77; // w8
  int32_t v78; // w21
  const MethodInfo *v79; // x4
  struct UserServantEntity_o *v80; // x8
  int32_t increLv; // w22
  int32_t lv; // w24
  int v83; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v85; // x22
  UnityEngine_Transform_o *v86; // x23
  CombineServantListViewManager_c *v87; // x8
  struct UILabel_o *v88; // x9
  struct System_String_o *mText; // x9
  float v90; // s0
  float v91; // s1
  struct UserServantEntity_o *v92; // x8
  int v93; // s0
  bool v97; // w22
  Il2CppObject *v98; // x21
  __int64 v99; // x9
  int v100; // w8
  bool v101; // w8
  bool v102; // w10
  _BOOL8 v103; // x0
  __int64 v104; // x1
  int v105; // w8
  System_Collections_Generic_List_long__o *v106; // x21
  _BOOL8 v107; // x0
  __int64 v108; // x1
  Il2CppObject *v109; // x22
  __int64 v110; // x9
  int64_t v111; // x0
  int64_t v112; // x1
  UserServantEntity_o *v113; // x22
  System_Int64_array *v114; // x0
  UILabel_o *v115; // x21
  bool v116; // w22
  __int64 v117; // x9
  _BOOL8 v118; // x0
  __int64 v119; // x1
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v121; // x3
  const MethodInfo *v122; // x3
  int32_t v123; // w8
  int v124; // w8
  __int64 v125; // x21
  __int64 v126; // x9
  const MethodInfo *v127; // x2
  __int64 v128; // x9
  void *v129; // x0
  int v130; // w1
  __int64 v131; // x21
  char v132; // [xsp+4h] [xbp-10Ch]
  int32_t v133; // [xsp+8h] [xbp-108h]
  char v134; // [xsp+Ch] [xbp-104h]
  int32_t adjustHp; // [xsp+10h] [xbp-100h]
  char v136; // [xsp+14h] [xbp-FCh]
  __int64 v137; // [xsp+18h] [xbp-F8h]
  char v138; // [xsp+20h] [xbp-F0h]
  int32_t selectMax; // [xsp+24h] [xbp-ECh] BYREF
  _BYTE v140[44]; // [xsp+28h] [xbp-E8h] BYREF
  int v141; // [xsp+54h] [xbp-BCh]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-B8h] BYREF
  int32_t v143[2]; // [xsp+60h] [xbp-B0h] BYREF
  __int64 lateExp; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v145; // [xsp+70h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-88h] BYREF
  int32_t tmpTargetLv; // [xsp+94h] [xbp-7Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+98h] [xbp-78h] BYREF
  int32_t maxAjustAtk[4]; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v150; // 0:x0.16
  UnityEngine_Vector3_o v151; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438E737 & 1) == 0 )
  {
    sub_B775C4(&CombineRootComponent_TypeInfo);
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_24013/*"{0:N0}"*/);
    sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_438E737 = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0LL;
  memset(&v145, 0, sizeof(v145));
  *(_QWORD *)v143 = 0LL;
  lateExp = 0LL;
  *(_QWORD *)tdMaxLv = 0LL;
  v141 = 0;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  v5 = (CombineRootComponent_c **)ObjectList;
  if ( this->fields.selectSum >= 1 )
  {
    resExpBar = (__int64)this->fields.resExpBar;
    if ( !resExpBar )
      goto LABEL_215;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_215;
    resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_215;
    resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_215;
    resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
    if ( !resExpBar )
      goto LABEL_215;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v7);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v8);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v18 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v18,
        (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_215;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v140,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v145 = *(System_Collections_Generic_List_Enumerator_T__o *)v140;
      while ( 1 )
      {
        v19 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v145,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v19 )
          break;
        current = v145.fields.current;
        if ( !v145.fields.current )
          goto LABEL_223;
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v145.fields.current, 0LL) )
        {
          v22 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v22
            || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v22 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B77990(current);
LABEL_225:
            sub_B7769C(v111, v112);
          }
          UserSvtId = CombineServantListViewItem__get_UserSvtId(
                        (CombineServantListViewItem_o *)current,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
          if ( !v18 )
            sub_B7769C(UserSvtId, UserSvtId);
          System_Collections_Generic_List_long___Add(
            v18,
            UserSvtId,
            (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      *(_DWORD *)&v140[4 * v141++ + 24] = 427;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v145,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v141 && *(_DWORD *)&v140[4 * v141 + 20] == 427 )
        --v141;
      if ( !v18 )
        goto LABEL_215;
      v24 = this->fields.baseUsrSvtData;
      v25 = System_Collections_Generic_List_long___ToArray(
              v18,
              (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
      resExpBar = NpCombineControl__GetNpLv(v24, v25, &tmpTargetLv, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v26 = resExpBar;
      resExpBar = UserServantEntity__getTreasureDeviceInfo(this->fields.baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
      if ( !tdInfo
        || (v27 = this->fields.baseUsrSvtData) == 0LL
        || (resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, v27->fields.treasureDeviceLv1, v26, 0LL),
            levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg,
            this->fields.selectQp = resExpBar,
            !levelUpInfoImg)
        || (resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL),
            (v29 = this->fields.baseUsrSvtData) == 0LL)
        || !resExpBar )
      {
LABEL_215:
        sub_B7769C(resExpBar, v4);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, v29->fields.treasureDeviceLv1 < v26, 0LL);
    }
    else if ( itemType == 1 )
    {
      resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0LL);
      v11 = this->fields.baseUsrSvtData;
      if ( !v11 )
        goto LABEL_215;
      adjustAtk = v11->fields.adjustAtk;
      v13 = resExpBar;
      adjustHp = v11->fields.adjustHp;
      UserServantEntity__GetAdjustMax(
        this->fields.baseUsrSvtData,
        &maxAjustAtk[1],
        maxAjustAtk,
        &secondMaxAdjustAtk[1],
        secondMaxAdjustAtk,
        0LL);
      resExpBar = (__int64)this->fields.baseUsrSvtData;
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = UserServantEntity__isAdjustHpMax((UserServantEntity_o *)resExpBar, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v14 = resExpBar;
      resExpBar = UserServantEntity__isAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v15 = resExpBar;
      resExpBar = UserServantEntity__isSecondAdjustHpMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v16 = resExpBar;
      isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      this->fields.isAllUpMax = v14 & v15 & 1;
      this->fields.isSecondAllUpMax = v16 & isSecondAdjustAtkMax & 1;
      goto LABEL_40;
    }
  }
  isSecondAdjustAtkMax = 0;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  adjustAtk = 0;
  v13 = 0;
  adjustHp = 0;
LABEL_40:
  v132 = v15;
  v133 = adjustAtk;
  resExpBar = (__int64)this->fields.itemList;
  v134 = v14;
  if ( !resExpBar )
    goto LABEL_215;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v140,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v136 = 0;
  v137 = 0LL;
  v138 = 0;
  v145 = *(System_Collections_Generic_List_Enumerator_T__o *)v140;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v145,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v31 )
      break;
    v33 = v145.fields.current;
    if ( !v145.fields.current )
      sub_B7769C(v31, v32);
    v34 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v145.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v34
      || (CombineServantListViewItem_c *)v145.fields.current->klass->_2.typeHierarchy[v34 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B77990(v145.fields.current);
      goto LABEL_215;
    }
    klass_high = HIDWORD(v145.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v145.fields.current, 0LL) )
    {
      if ( BYTE4(v33[14].klass) )
      {
        monitor_high = HIDWORD(v33[13].monitor);
        klass = (int)v33[14].klass;
        if ( klass_high == 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v16 & 1 | (monitor_high < 1)) )
            {
              v39 = *p_getHpUpVal + monitor_high;
              *p_getHpUpVal = v39;
              if ( v39 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                LOBYTE(v137) = 1;
              }
            }
            if ( klass >= 1 && !isSecondAdjustAtkMax )
            {
              v40 = LODWORD(v33[14].klass) + this->fields.getAtkUpVal;
              this->fields.getAtkUpVal = v40;
              if ( v40 + v133 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v133;
                v136 = 1;
              }
            }
          }
        }
        else if ( klass_high <= 3 && !this->fields.isAllUpMax )
        {
          if ( !(v134 & 1 | (monitor_high < 1)) )
          {
            v42 = *p_getHpUpVal + monitor_high;
            *p_getHpUpVal = v42;
            if ( v42 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              v138 = 1;
            }
          }
          if ( klass >= 1 && (v132 & 1) == 0 )
          {
            v43 = LODWORD(v33[14].klass) + this->fields.getAtkUpVal;
            this->fields.getAtkUpVal = v43;
            if ( v43 + v133 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v133;
              BYTE4(v137) = 1;
            }
          }
        }
      }
      v41 = this->fields.baseUsrSvtData;
      if ( !v41 )
        sub_B7769C(0LL, v36);
      if ( !UserServantEntity__isLevelMax(v41, 0LL) )
        this->fields.selectExp += LODWORD(v33[10].monitor);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v13;
    }
    else
    {
      BYTE4(v33[10].monitor) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  *(_DWORD *)&v140[4 * v141++ + 24] = 980;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v145,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  while ( 1 )
  {
    v44 = v137;
    if ( v141 && *(_DWORD *)&v140[4 * v141 + 20] == 980 )
      --v141;
    selectInfoLabel = this->fields.selectInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v46 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
    *(_DWORD *)v140 = this->fields.selectSum;
    v48 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v140, v47);
    selectMax = this->fields.selectMax;
    v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax, v49);
    resExpBar = (__int64)System_String__Format_44897472(v46, v48, v50, 0LL);
    if ( !selectInfoLabel )
      goto LABEL_215;
    UILabel__set_text(selectInfoLabel, (System_String_o *)resExpBar, 0LL);
    menuListCtr = this->fields.menuListCtr;
    if ( !menuListCtr )
      goto LABEL_215;
    if ( this->fields.itemType == 1 )
    {
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_215;
      combineEventList = menuListCtr->fields.combineEventList;
      v53 = CheckCombineResStatus__GetExpCampaignValue(
              (CheckCombineResStatus_o *)resExpBar,
              this->fields.baseUsrSvtData,
              combineEventList,
              0LL);
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_215;
      v54 = v53;
      v55 = CheckCombineResStatus__GetQpCampaignValue(
              (CheckCombineResStatus_o *)resExpBar,
              this->fields.baseUsrSvtData,
              combineEventList,
              0LL);
    }
    else
    {
      v55 = 1.0;
      v54 = 1.0;
    }
    v56 = UnityEngine_Mathf__CeilToInt(v54 * (float)this->fields.selectExp, 0LL);
    selectQp = this->fields.selectQp;
    this->fields.selectExp = v56;
    v58 = UnityEngine_Mathf__CeilToInt(v55 * (float)selectQp, 0LL);
    this->fields.selectQp = v58;
    spendQpLabel = this->fields.spendQpLabel;
    *(_DWORD *)v140 = v58;
    v61 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v140, v60);
    resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v61, 0LL);
    if ( !spendQpLabel )
      goto LABEL_215;
    UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0LL);
    if ( (this->fields.itemType | 4) == 5 )
    {
      v63 = (UIWidget_o *)this->fields.spendQpLabel;
      if ( this->fields.selectQp <= this->fields.userQP )
      {
        *(UnityEngine_Color_o *)&v64 = UnityEngine_Color__get_white(0LL);
        if ( !v63 )
          goto LABEL_215;
      }
      else
      {
        *(UnityEngine_Color_o *)&v64 = UnityEngine_Color__get_red(0LL);
        if ( !v63 )
          goto LABEL_215;
      }
      UIWidget__set_color(v63, *(UnityEngine_Color_o *)&v64, 0LL);
    }
    getExpLabel = this->fields.getExpLabel;
    *(_DWORD *)v140 = this->fields.selectExp;
    v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v140, v62);
    resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v69, 0LL);
    if ( !getExpLabel )
      goto LABEL_215;
    UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0LL);
    v71 = v136;
    if ( this->fields.baseUsrSvtData )
    {
      v72 = this->fields.itemType;
      if ( v72 == 1 )
      {
        resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !resExpBar )
          goto LABEL_215;
        resExpBar = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)resExpBar,
                               (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
        v73 = this->fields.baseUsrSvtData;
        if ( !v73 )
          goto LABEL_215;
        v74 = (DataMasterBase_WarMaster__WarEntity__int__o *)resExpBar;
        v76 = *(_QWORD *)&v73->fields.svtId.fields.currentCryptoKey;
        v75 = *(_QWORD *)&v73->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v150.fields.currentCryptoKey = v76;
        *(_QWORD *)&v150.fields.fakeValue = v75;
        resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v150, 0LL);
        if ( !v74 )
          goto LABEL_215;
        resExpBar = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v74,
                               resExpBar,
                               (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !resExpBar )
          goto LABEL_215;
        v77 = *(_DWORD *)(resExpBar + 132);
        resExpBar = (__int64)this->fields.baseUsrSvtData;
        this->fields.expType = v77;
        if ( !resExpBar )
          goto LABEL_215;
        this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
        this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
        resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0LL);
        if ( !this->fields.resCurrentExpBar )
          goto LABEL_215;
        v78 = resExpBar;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                               0LL);
        if ( !resExpBar )
          goto LABEL_215;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
        if ( this->fields.checkLv != v78 )
        {
          do
            resExpBar = CombineServantListViewManager__checkIncrementLv(
                          this,
                          &this->fields.checkLv,
                          &this->fields.increLv,
                          this->fields.totalExp,
                          v79);
          while ( (resExpBar & 1) == 0 );
          v80 = this->fields.baseUsrSvtData;
          if ( !v80 )
            goto LABEL_215;
          resExpBar = (__int64)this->fields.combineResStatus;
          if ( !resExpBar )
            goto LABEL_215;
          increLv = this->fields.increLv;
          lv = v80->fields.lv;
          CheckCombineResStatus__setSvtExp(
            (CheckCombineResStatus_o *)resExpBar,
            (float *)&lateExp + 1,
            (int32_t *)&lateExp,
            this->fields.totalExp,
            increLv,
            v78,
            this->fields.expType,
            0LL);
          resExpBar = (__int64)this->fields.resLvLabel;
          if ( !resExpBar )
            goto LABEL_215;
          v83 = increLv - lv;
          resExpBar = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)resExpBar,
                                 (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
          resLvLabel = this->fields.resLvLabel;
          v85 = (UIWidget_o *)resExpBar;
          if ( v83 < 1 )
          {
            v92 = this->fields.baseUsrSvtData;
            if ( !v92 )
              goto LABEL_215;
            resExpBar = (__int64)System_Int32__ToString((int)v92 + 256, 0LL);
            v44 = v137;
            if ( !resLvLabel )
              goto LABEL_215;
            UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
            resExpBar = (__int64)this->fields.levelUpInfoImg;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            v71 = v136;
            if ( !resExpBar )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
            *(UnityEngine_Color_o *)&v93 = UnityEngine_Color__get_white(0LL);
            if ( !v85 )
              goto LABEL_215;
            UIWidget__set_color(v85, *(UnityEngine_Color_o *)&v93, 0LL);
            resExpBar = (__int64)this->fields.resExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, *((float *)&lateExp + 1), 0LL);
            resExpBar = (__int64)this->fields.resNextExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 0.0, 0LL);
          }
          else
          {
            resExpBar = (__int64)System_Int32__ToString((int)this + 1096, 0LL);
            if ( !resLvLabel )
              goto LABEL_215;
            UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
            resExpBar = (__int64)this->fields.levelUpInfoImg;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            if ( !resExpBar )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
            resExpBar = (__int64)this->fields.levelUpInfoImg;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
            v86 = (UnityEngine_Transform_o *)resExpBar;
            v87 = CombineServantListViewManager_TypeInfo;
            if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
              v87 = CombineServantListViewManager_TypeInfo;
            }
            v88 = this->fields.resLvLabel;
            if ( !v88 )
              goto LABEL_215;
            mText = v88->fields.mText;
            if ( !mText )
              goto LABEL_215;
            if ( !v86 )
              goto LABEL_215;
            v151.fields.y = 0.0;
            v151.fields.z = 0.0;
            v151.fields.x = (float)(mText->fields.m_stringLength * v87->static_fields->RES_LVUP_ARROW_SPACING);
            UnityEngine_Transform__set_localPosition(v86, v151, 0LL);
            if ( !v85 )
              goto LABEL_215;
            UIWidget__set_color(v85, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0LL);
            resExpBar = (__int64)this->fields.resExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0LL);
            resExpBar = (__int64)this->fields.resNextExpBar;
            v71 = v136;
            if ( !resExpBar )
              goto LABEL_215;
            v90 = *((float *)&lateExp + 1);
            v91 = 0.0;
            if ( v83 != 1 )
              v91 = 1.0;
            if ( this->fields.increLv == v78 )
              v90 = v91;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v90, 0LL);
            resExpBar = (__int64)this->fields.resCurrentExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            v44 = v137;
            if ( !resExpBar )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
          }
        }
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        v97 = this->fields.increLv >= v78;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v140,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v145 = *(System_Collections_Generic_List_Enumerator_T__o *)v140;
        while ( 1 )
        {
          v103 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v145,
                   (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v103 )
            break;
          v98 = v145.fields.current;
          if ( !v145.fields.current )
            goto LABEL_219;
          v99 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v145.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v99
            || (CombineServantListViewItem_c *)v145.fields.current->klass->_2.typeHierarchy[v99 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B77990(v145.fields.current);
LABEL_218:
            sub_B77990(v98);
LABEL_219:
            sub_B7769C(v103, v104);
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v145.fields.current, 0LL) )
          {
            v100 = BYTE4(v98[14].klass);
            BYTE5(v98[17].monitor) = v97;
            if ( v100 )
            {
              v101 = SLODWORD(v98[14].klass) > 0;
              v102 = SHIDWORD(v98[13].monitor) > 0;
              BYTE5(v98[19].monitor) = BYTE4(v137) & v101;
              HIBYTE(v98[19].monitor) = v71 & v101;
              BYTE4(v98[19].monitor) = v138 & v102;
              BYTE6(v98[19].monitor) = v44 & v102;
            }
          }
        }
        *(_DWORD *)&v140[4 * v141++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v145,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v141 )
        {
          v105 = v141 - 1;
          if ( *(_DWORD *)&v140[4 * v141 + 20] == 2180 )
            goto LABEL_180;
        }
        v72 = this->fields.itemType;
      }
      if ( v72 == 5 )
      {
        v106 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v106,
          (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v140,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v145 = *(System_Collections_Generic_List_Enumerator_T__o *)v140;
        while ( 1 )
        {
          v107 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v145,
                   (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v107 )
            break;
          v109 = v145.fields.current;
          if ( !v145.fields.current )
            sub_B7769C(v107, v108);
          if ( ListViewItem__get_IsSelect((ListViewItem_o *)v145.fields.current, 0LL) )
          {
            v110 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v109->klass->_2.bitflags2 + 1) < (unsigned int)v110
              || (CombineServantListViewItem_c *)v109->klass->_2.typeHierarchy[v110 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B77990(v109);
LABEL_223:
              sub_B7769C(v19, v20);
            }
            v111 = CombineServantListViewItem__get_UserSvtId(
                     (CombineServantListViewItem_o *)v109,
                     (const MethodInfo *)CombineServantListViewItem_TypeInfo);
            v112 = v111;
            if ( !v106 )
              goto LABEL_225;
            System_Collections_Generic_List_long___Add(
              v106,
              v111,
              (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
          }
        }
        *(_DWORD *)&v140[4 * v141++ + 24] = 2032;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v145,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v141 && *(_DWORD *)&v140[4 * v141 + 20] == 2032 )
          --v141;
        if ( !v106 )
          goto LABEL_215;
        v113 = this->fields.baseUsrSvtData;
        v114 = System_Collections_Generic_List_long___ToArray(
                 v106,
                 (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
        v143[0] = NpCombineControl__GetNpLv(v113, v114, &v143[1], 0LL);
        v115 = this->fields.resLvLabel;
        resExpBar = (__int64)System_Int32__ToString((int32_t)v143, 0LL);
        if ( !v115 )
          goto LABEL_215;
        UILabel__set_text(v115, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.baseUsrSvtData;
        if ( !resExpBar )
          goto LABEL_215;
        UserServantEntity__getTreasureDeviceInfo_21836884((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0LL);
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        v116 = v143[0] >= tdMaxLv[0];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v140,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v145 = *(System_Collections_Generic_List_Enumerator_T__o *)v140;
        while ( 1 )
        {
          v118 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v145,
                   (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v118 )
            break;
          v98 = v145.fields.current;
          if ( !v145.fields.current )
            sub_B7769C(v118, v119);
          v117 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v145.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v117
            || (CombineServantListViewItem_c *)v145.fields.current->klass->_2.typeHierarchy[v117 - 1] != CombineServantListViewItem_TypeInfo )
          {
            goto LABEL_218;
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v145.fields.current, 0LL) && !BYTE1(v98[10].klass) )
            BYTE5(v98[17].monitor) = v116;
        }
        *(_DWORD *)&v140[4 * v141++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v145,
          (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v141 )
        {
          v105 = v141 - 1;
          if ( *(_DWORD *)&v140[4 * v141 + 20] == 2180 )
LABEL_180:
            v141 = v105;
        }
      }
    }
    if ( this->fields.selectSum < 1 )
    {
      tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
      if ( !tempMaterialUserServantIdList )
        goto LABEL_215;
      if ( tempMaterialUserServantIdList->fields._size <= 0 )
      {
        CombineServantListViewManager__setBtnEnable(this, 0, v70);
      }
      else
      {
        resExpBar = (__int64)this->fields.allReleaseButton;
        if ( !resExpBar )
          goto LABEL_215;
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
          resExpBar,
          3LL,
          1LL,
          *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
      }
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v121);
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v122);
      resExpBar = (__int64)this->fields.resExpBar;
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)resExpBar, 0LL);
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = (__int64)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)resExpBar, 0LL);
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
      if ( !resExpBar )
        goto LABEL_215;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
      if ( !v5 )
        goto LABEL_215;
    }
    else
    {
      CombineServantListViewManager__setBtnEnable(this, this->fields.selectQp <= this->fields.userQP, v70);
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                    resExpBar,
                    0LL,
                    1LL,
                    *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
      if ( !v5 )
        goto LABEL_215;
    }
    v123 = *((_DWORD *)v5 + 6);
    if ( v123 < 1 )
      return;
    this->fields.callbackCount = v123;
    v124 = *((_DWORD *)v5 + 6);
    if ( v124 >= 1 )
    {
      v125 = 0LL;
      do
      {
        if ( v124 <= (unsigned int)v125 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        resExpBar = *((_QWORD *)&v5[2]->_1.byval_arg.data + v125);
        if ( !resExpBar )
          goto LABEL_215;
        (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
          resExpBar,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
        v124 = *((_DWORD *)v5 + 6);
      }
      while ( (int)++v125 < v124 );
    }
    resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_215;
    resExpBar = *(_QWORD *)(resExpBar + 24);
    if ( !resExpBar )
      goto LABEL_215;
    v5 = &CombineRootComponent_TypeInfo;
    v126 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 300LL) >= (unsigned int)v126
      && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v126 - 8) == CombineRootComponent_TypeInfo )
    {
      if ( *(_DWORD *)(resExpBar + 612) != 5 )
        return;
      resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = *(_QWORD *)(resExpBar + 24);
      if ( !resExpBar )
        goto LABEL_215;
      v128 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 300LL) >= (unsigned int)v128
        && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v128 - 8) == CombineRootComponent_TypeInfo )
      {
        break;
      }
    }
    sub_B77990(resExpBar);
    if ( v130 != 1 )
      _Unwind_Resume(v129);
    v131 = *(_QWORD *)__cxa_begin_catch(v129);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v145,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v131 )
      sub_B77668(v131, 0LL);
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 612), v127);
}


void __fastcall CombineServantListViewManager__ReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v7; // x3
  __int64 v8; // x9
  const MethodInfo *v9; // x1
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_438E74F & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_438E74F = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      itemList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( 1 )
    {
      v4 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v10,
             (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v4 )
        break;
      current = v10.fields.current;
      if ( !v10.fields.current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v10.fields.current, 0, 0LL);
      v8 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v8
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B77990(current);
LABEL_18:
        sub_B7769C(v4, v5);
      }
      BYTE2(current[10].klass) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v7);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL)) == 0LL )
    {
LABEL_19:
      sub_B7769C(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    CombineServantListViewManager__RefrashListDisp(this, v9);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject(
        CombineServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438E743 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438E743 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v14,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v14.fields.current;
      v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v12, v13);
      CombineServantListViewObject__Init_30412892((CombineServantListViewObject_o *)current, mode, v11, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject_31560992(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_438E744 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager_OnMoveEnd__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438E744 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B7769C(0LL, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v12,
      ObjectList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v12,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v12.fields.current;
      v9 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B7769C(v10, v11);
      CombineServantListViewObject__Init_30412956((CombineServantListViewObject_o *)current, mode, v9, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v12,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


void __fastcall CombineServantListViewManager__ResetCombineEventCampaignListViewObjects(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  int64_t Instance; // x0
  const MethodInfo *v4; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  const MethodInfo *v12; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v14; // x21
  ListViewItem_o *v15; // x8
  __int64 v16; // x11
  __int64 v17; // x11
  CombineServantListViewItem_o *v18; // x0
  __int64 v19; // x21
  const MethodInfo *v20; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_438E774 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E774 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_31;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEntities,
    (System_Int32_array **)CombineEventCampaigns,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  v14 = 0LL;
  while ( (__int64)v14 < itemList->fields._size )
  {
    if ( v14 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v15 = itemList->fields._items->m_Items[v14];
    if ( v15 )
    {
      v16 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v16
        && (CombineServantListViewItem_c *)v15->klass->_2.typeHierarchy[v16 - 1] == CombineServantListViewItem_TypeInfo )
      {
        v17 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v15->klass->_2.bitflags2 + 1) >= (unsigned int)v17 )
          v18 = (CombineServantListViewItem_c *)v15->klass->_2.typeHierarchy[v17 - 1] == CombineServantListViewItem_TypeInfo
              ? (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v14]
              : 0LL;
        else
          v18 = 0LL;
        CombineServantListViewItem__SetIsCombineExpCampaignTarget(v18, this->fields.eventCampaignEntities, v12);
        itemList = this->fields.itemList;
        ++v14;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_31;
  }
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v4);
  if ( !Instance )
    goto LABEL_31;
  v19 = 0LL;
  while ( (int)v19 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v4);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v19 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v19 + 32);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0LL);
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v20);
        ++v19;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_31;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v4);
  if ( !timeOverChecker )
LABEL_31:
    sub_B7769C(Instance, v4);
  TimeOverChecker__Start(timeOverChecker, Instance, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__ResetCombineViewInfoLayout(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *getExpLabel; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v5; // x0
  UnityEngine_GameObject_o *v6; // x0
  UnityEngine_GameObject_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_GameObject_o *v14; // x0
  UnityEngine_GameObject_o *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_GameObject_o *v18; // x0
  UnityEngine_GameObject_o *v19; // x0
  UIWidget_o *resLvLabel; // x20
  int v21; // s0
  UnityEngine_GameObject_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0

  if ( (byte_438E778 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19909/*"img_list_lv"*/);
    byte_438E778 = 1;
  }
  getExpLabel = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)getExpLabel,
                                             0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getExpLabel, 1, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)getExpLabel,
                                             0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  gameObject = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(gameObject, -47.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 139, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.qpAndExpInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v5 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v5, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v6 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v6, 44.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v7 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v7, 44.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v8 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v8, 18.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v9 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v9, 18.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)getExpLabel,
                                             0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  getExpLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                             (UnityEngine_Transform_o *)getExpLabel,
                                             0LL);
  if ( !getExpLabel )
    goto LABEL_52;
  v10 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v10, -155.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoBg;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 88, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v11 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v11, 27.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !getExpLabel )
    goto LABEL_52;
  v12 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v12, -2.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoArrow;
  if ( !getExpLabel )
    goto LABEL_52;
  v13 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v13, -15.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.enhancementInfoDot;
  if ( !getExpLabel )
    goto LABEL_52;
  v14 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v14, 13.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_19909/*"img_list_lv"*/, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_width((UIWidget_o *)getExpLabel, 24, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 16, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v15 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalScale_32809816(v15, 1.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v16 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v16, 21.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v17 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v17, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v18 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v18, 50.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.resLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v19 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v19, 4.0, 0LL);
  resLvLabel = (UIWidget_o *)this->fields.resLvLabel;
  *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
  if ( !resLvLabel )
    goto LABEL_52;
  UIWidget__set_color(resLvLabel, *(UnityEngine_Color_o *)&v21, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_19909/*"img_list_lv"*/, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_width((UIWidget_o *)getExpLabel, 24, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  UIWidget__set_height((UIWidget_o *)getExpLabel, 16, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v25 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalScale_32809816(v25, 1.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v26 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v26, -68.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvImage;
  if ( !getExpLabel )
    goto LABEL_52;
  v27 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v27, 0.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v28 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v28, -36.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.currentLvLabel;
  if ( !getExpLabel )
    goto LABEL_52;
  v29 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionY(v29, 4.0, 0LL);
  getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg;
  if ( !getExpLabel
    || (getExpLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(getExpLabel, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)getExpLabel, 0, 0LL),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL)
    || (v30 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL),
        GameObjectExtensions__SetLocalPositionY(v30, 0.0, 0LL),
        (getExpLabel = (UnityEngine_Component_o *)this->fields.levelUpInfoImg) == 0LL) )
  {
LABEL_52:
    sub_B7769C(getExpLabel, method);
  }
  v31 = UnityEngine_Component__get_gameObject(getExpLabel, 0LL);
  GameObjectExtensions__SetLocalPositionX(v31, 39.0, 0LL);
}


void __fastcall CombineServantListViewManager__ResetInit(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v13; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_438E750 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    byte_438E750 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  this->fields.baseUsrSvtData = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  System_Collections_Generic_List_long___Clear(
    tempMaterialUserServantIdList,
    (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v15,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v15,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v15.fields.current )
        sub_B7769C(0LL, v13);
      ListViewItem__set_IsSelect((ListViewItem_o *)v15.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v15,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  }
  tempMaterialUserServantIdList = (System_Collections_Generic_List_long__o *)this->fields.levelUpInfoImg;
  this->fields.selectSum = 0;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  tempMaterialUserServantIdList = (System_Collections_Generic_List_long__o *)UnityEngine_Component__get_gameObject(
                                                                               (UnityEngine_Component_o *)tempMaterialUserServantIdList,
                                                                               0LL);
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)tempMaterialUserServantIdList, 0, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween )
    return;
  CombineServantListViewNoticeTween__Stop(noticeTween, 0LL);
  tempMaterialUserServantIdList = (System_Collections_Generic_List_long__o *)this->fields.noticeTween;
  if ( !tempMaterialUserServantIdList )
LABEL_19:
    sub_B7769C(tempMaterialUserServantIdList, v9);
  CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)tempMaterialUserServantIdList, 0LL);
}


void __fastcall CombineServantListViewManager__ScrollToObject(
        CombineServantListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *seed; // x21
  const MethodInfo *v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  float VerticalScrollableSize; // s0
  float v10; // s8
  float v11; // s9
  float v12; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_438E77E & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E77E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    seed = (UnityEngine_Object_o *)this->fields.seed;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality(seed, 0LL, 0LL) )
    {
      VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, v6);
      if ( !obj )
        goto LABEL_24;
      v10 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !transform )
        goto LABEL_24;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v11 = fabsf(localPosition.fields.y);
      if ( localPosition.fields.y != 0.0 )
      {
        transform = (UnityEngine_Transform_o *)CombineServantListViewManager_TypeInfo;
        if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
          transform = (UnityEngine_Transform_o *)CombineServantListViewManager_TypeInfo;
        }
        if ( !this->fields.seed )
          goto LABEL_24;
        v12 = *(float *)(*(_QWORD *)&transform[7].fields.m_CachedPtr + 36LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0LL);
        if ( !transform )
          goto LABEL_24;
        localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
        v11 = v11 + (float)(v12 * localScale.fields.y);
      }
      if ( v10 > 0.0 )
      {
        transform = (UnityEngine_Transform_o *)this->fields.scrollBar;
        if ( transform )
        {
          UIProgressBar__set_value((UIProgressBar_o *)transform, v11 / v10, 0LL);
          return;
        }
LABEL_24:
        sub_B7769C(transform, v8);
      }
    }
  }
}


void __fastcall CombineServantListViewManager__SetCombineSvtClassIcon(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t v4; // w21
  int32_t FrameType; // w20
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  WarEntity_o *v8; // x21
  UISprite_o *v9; // x19
  int32_t longName_high; // w21

  if ( (byte_438E776 & 1) == 0 )
  {
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E776 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_19;
  v4 = (int)baseUsrSvtData;
  FrameType = UserServantEntity__getFrameType(this->fields.baseUsrSvtData, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_19;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)baseUsrSvtData,
             v4,
             (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v8 = Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0LL, 0LL);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    v9 = this->fields.combineSvtInfoIcon;
    if ( v8 )
    {
      longName_high = HIDWORD(v8->fields.longName);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClassIcon(v9, longName_high, FrameType, 0LL);
      return;
    }
    if ( v9 )
    {
      UISprite__set_spriteName(v9, 0LL, 0LL);
      return;
    }
LABEL_19:
    sub_B7769C(baseUsrSvtData, method);
  }
}


void __fastcall CombineServantListViewManager__SetDragEnd(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x2
  int32_t dragStartIndex; // w20
  int32_t dragEndIndex; // w21

  if ( (byte_438E770 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E770 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  dragStartIndex = this->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) == 0 )
  {
    dragEndIndex = this->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
    {
      do
        CombineServantListViewManager__DecideDragSelect(this, dragStartIndex++, v4);
      while ( dragStartIndex <= this->fields.dragEndIndex );
    }
    else
    {
      do
        CombineServantListViewManager__DecideDragSelect(this, dragEndIndex++, v4);
      while ( dragEndIndex <= this->fields.dragStartIndex );
    }
  }
  CombineServantListViewManager__RefrashListDisp(this, v3);
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_331EE00;
  this->fields.isDragSelect = 1;
}


void __fastcall CombineServantListViewManager__SetDragMove(
        CombineServantListViewManager_o *this,
        int32_t moveIndex,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( this->fields.dragEndIndex != moveIndex )
    CombineServantListViewManager__SetDragSelectItem(this, this->fields.dragStartIndex, moveIndex, v3);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__SetDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        bool isDragSelect,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v6; // x20
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v8; // x19
  CombineServantListViewItem_c *v9; // x1
  __int64 v10; // x9
  float z; // w8
  bool v12; // w21
  _BOOL4 v13; // w21
  bool IsSelect; // w0
  const MethodInfo *v15; // x5
  int v16; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v18; // x9
  bool result; // w0
  CombineServantListViewManager_o *v20; // x0
  int32_t v21; // w1
  bool v22; // w2
  const MethodInfo *v23; // x3

  v6 = this;
  if ( (byte_438E76E & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewObject_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (CombineServantListViewManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E76E = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_42;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  v8 = itemSortList->fields._items->m_Items[index];
  if ( !v8 )
    goto LABEL_42;
  v9 = CombineServantListViewItem_TypeInfo;
  v10 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v8->klass->_2.bitflags2 + 1) < (unsigned int)v10
    || (CombineServantListViewItem_c *)v8->klass->_2.typeHierarchy[v10 - 1] != CombineServantListViewItem_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)v8;
    goto LABEL_44;
  }
  z = v8[2].fields.basePosition.fields.z;
  if ( !isDragSelect )
  {
    if ( (LODWORD(z) & 0x80000000) == 0 )
    {
      if ( !ListViewItem__get_IsSelect(v8, 0LL) && SLODWORD(v8[2].fields.basePosition.fields.z) >= 1 )
      {
        --v6->fields.dragSelectSum;
        this = *(CombineServantListViewManager_o **)&v8[1].fields.selectNum;
        if ( !this )
          goto LABEL_42;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL)
          && !BYTE4(v8[1].fields.sortValue1)
          && !HIBYTE(v8[1].fields.basePosition.fields.x) )
        {
          --v6->fields.dragServantSelectSum;
        }
      }
      v12 = 0;
      v16 = -1;
      goto LABEL_29;
    }
    goto LABEL_32;
  }
  if ( (LODWORD(z) & 0x80000000) == 0 )
    goto LABEL_32;
  v8[2].fields.basePosition.fields.z = 0.0;
  v12 = 0;
  if ( CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)v8, (const MethodInfo *)v9) )
    goto LABEL_33;
  v13 = v6->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect(v8, 0LL);
  if ( !v13 )
  {
    if ( IsSelect )
    {
LABEL_31:
      v12 = 0;
      v16 = 1;
LABEL_29:
      LODWORD(v8[2].fields.basePosition.fields.z) = v16;
      goto LABEL_33;
    }
LABEL_32:
    v12 = 0;
    goto LABEL_33;
  }
  if ( IsSelect )
    goto LABEL_32;
  v12 = 1;
  if ( CombineServantListViewManager__IsSelectEnable(
         v6,
         (CombineServantListViewItem_o *)v8,
         v6->fields.dragSelectSum,
         v6->fields.dragServantSelectSum,
         1,
         v15) )
  {
    ++v6->fields.dragSelectSum;
    this = *(CombineServantListViewManager_o **)&v8[1].fields.selectNum;
    if ( !this )
      goto LABEL_42;
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL)
      && !BYTE4(v8[1].fields.sortValue1)
      && !HIBYTE(v8[1].fields.basePosition.fields.x) )
    {
      ++v6->fields.dragServantSelectSum;
    }
    goto LABEL_31;
  }
LABEL_33:
  viewObject = (UnityEngine_Object_o *)v8->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v12;
  this = (CombineServantListViewManager_o *)v8->fields.viewObject;
  if ( !this )
LABEL_42:
    sub_B7769C(this, *(_QWORD *)&index);
  v18 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v18
    && (CombineServantListViewObject_c *)this->klass->_2.typeHierarchy[v18 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)this, 0LL);
    return v12;
  }
LABEL_44:
  sub_B77990(this);
  CombineServantListViewManager__SetDragStart(v20, v21, v22, v23);
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetDragSelectItem(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        int32_t endIndex,
        const MethodInfo *method)
{
  int32_t v5; // w21
  CombineServantListViewManager_o *v6; // x19
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v9; // w25
  int v10; // w26
  int32_t v11; // w23
  int32_t v12; // w24
  int32_t v13; // w22
  int v14; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  CombineServantListViewManager_o *v16; // x20
  __int64 v17; // x9
  UnityEngine_Object_o *clipRange; // x21
  __int64 v19; // x9
  CombineServantListViewManager_o *v20; // x0
  int32_t v21; // w1
  bool v22; // w2
  const MethodInfo *v23; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_438E76D & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewObject_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    this = (CombineServantListViewManager_o *)sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E76D = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v9 = -1;
    v10 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v9 = v6->fields.dragEndIndex;
    else
      v9 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v10 = v6->fields.dragStartIndex;
    else
      v10 = v6->fields.dragEndIndex;
  }
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v5 & 0x80000000) != 0 )
  {
    v11 = -1;
    v12 = -1;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( v5 <= endIndex )
      v11 = endIndex;
    else
      v11 = v5;
    if ( v5 <= endIndex )
      v12 = v5;
    else
      v12 = endIndex;
    if ( (v10 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  if ( v10 <= v9 )
  {
    v13 = v10;
    do
    {
      if ( v13 > v11 || (v12 & 0x80000000) != 0 || v13 < v12 )
        this = (CombineServantListViewManager_o *)CombineServantListViewManager__SetDragSelect(v6, v13, 0, method);
      ++v13;
    }
    while ( v13 <= v9 );
  }
LABEL_28:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
          this = (CombineServantListViewManager_o *)CombineServantListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v9 || (v10 & 0x80000000) != 0 || v5 < v10 )
          this = (CombineServantListViewManager_o *)CombineServantListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( v6->fields.isDragSelect && (v12 & 0x80000000) == 0 && v12 <= v11 )
    {
      v14 = v6->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = v6->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_62;
        if ( itemSortList->fields._size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        v16 = (CombineServantListViewManager_o *)itemSortList->fields._items->m_Items[v12];
        if ( !v16 )
LABEL_62:
          sub_B7769C(this, *(_QWORD *)&startIndex);
        *(_QWORD *)&startIndex = CombineServantListViewItem_TypeInfo;
        v17 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
          || (CombineServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( SHIDWORD(v16->fields.combineRootComponent) >= 1 )
        {
          HIDWORD(v16->fields.combineRootComponent) = v14;
          clipRange = (UnityEngine_Object_o *)v16->fields.clipRange;
          ++v14;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (CombineServantListViewManager_o *)UnityEngine_Object__op_Inequality(clipRange, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (CombineServantListViewManager_o *)v16->fields.clipRange;
            if ( !this )
              goto LABEL_62;
            v19 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v19
              || (CombineServantListViewObject_c *)this->klass->_2.typeHierarchy[v19 - 1] != CombineServantListViewObject_TypeInfo )
            {
              goto LABEL_64;
            }
            CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)this, 0LL);
          }
        }
        if ( ++v12 > v11 )
          return;
      }
      this = v16;
LABEL_64:
      sub_B77990(this);
      CombineServantListViewManager__SetDragSelect(v20, v21, v22, v23);
    }
  }
}


void __fastcall CombineServantListViewManager__SetDragStart(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  UIScrollView_o *_29515752; // x0
  CombineServantListViewItem_c *v8; // x1
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v12; // w22
  __int64 v13; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_438E76F & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438E76F = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _29515752 = (UIScrollView_o *)TutorialFlag__Get_29515752(102, 0LL);
  if ( ((unsigned __int8)_29515752 & 1) != 0 )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_331EE00;
    itemSortList = this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_26;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v12 = 0;
      while ( 1 )
      {
        if ( itemSortList->fields._size <= (unsigned int)v12 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
        _29515752 = (UIScrollView_o *)itemSortList->fields._items->m_Items[v12];
        if ( !_29515752 )
          goto LABEL_26;
        v8 = CombineServantListViewItem_TypeInfo;
        v13 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&_29515752->klass->_2.bitflags2 + 1) < (unsigned int)v13
          || (CombineServantListViewItem_c *)_29515752->klass->_2.typeHierarchy[v13 - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        ++v12;
        HIDWORD(_29515752[1].fields.onDragStarted) = -1;
        if ( v12 >= size )
          goto LABEL_18;
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_26;
      }
      sub_B77990(_29515752);
LABEL_26:
      sub_B7769C(_29515752, v8);
    }
LABEL_18:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v9);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      _29515752 = this->fields.scrollView;
      if ( !_29515752 )
        goto LABEL_26;
      UIScrollView__Press(_29515752, 0, 0LL);
    }
  }
}


void __fastcall CombineServantListViewManager__SetEventCamapignEntity(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x1
  int64_t EventCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v22; // x20
  System_Action_o *v23; // x22
  TimeOverChecker_o *v24; // x23
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_438E773 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__);
    sub_B775C4(&Method_DataManager_GetMasterData_EventCampaignMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&TimeOverChecker_TypeInfo);
    byte_438E773 = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0LL;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.eventCampaignEntities,
      0LL,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEntities,
    (System_Int32_array **)CombineEventCampaigns,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v19);
    timeOverChecker = this->fields.timeOverChecker;
    v22 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v23 = (System_Action_o *)sub_B77694(System_Action_TypeInfo),
          System_Action___ctor(
            v23,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0LL),
          v24 = (TimeOverChecker_o *)sub_B77694(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v24, v23, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v24,
          sub_B77560(
            (BattleServantConfConponent_o *)&this->fields.timeOverChecker,
            (System_Int32_array **)v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v22, 0LL);
      return;
    }
LABEL_12:
    sub_B7769C(Instance, v11);
  }
}


void __fastcall CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v5; // x8

  if ( (byte_438E75B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17332/*"btn_filter_on"*/);
    sub_B775C4(&StringLiteral_17331/*"btn_filter"*/);
    byte_438E75B = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B7769C(sort, method);
  }
  v5 = (System_String_o **)&StringLiteral_17331/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v5 = (System_String_o **)&StringLiteral_17332/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v5, 0LL);
}


void __fastcall CombineServantListViewManager__SetMaterialSvtInfo(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v5; // x20
  Il2CppObject *current; // x24
  __int64 v7; // x25
  int size; // w8
  CombineServantListViewItem_o *v9; // x20
  __int64 v10; // x9
  int64_t UserSvtId; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_438E736 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    this = (CombineServantListViewManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    byte_438E736 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_B7769C(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = v2->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v13,
          selectedMaterialUserServantIdList,
          (const MethodInfo_30ECBDC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v14 = v13;
LABEL_20:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v14,
                        (const MethodInfo_225AF74 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( (UserSvtId & 1) == 0 )
            break;
          v5 = v2->fields.itemList;
          if ( !v5 )
            goto LABEL_24;
          current = v14.fields.current;
          v7 = 0LL;
          while ( 1 )
          {
            size = v5->fields._size;
            if ( (int)v7 >= size )
              goto LABEL_20;
            if ( size <= (unsigned int)v7 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
            v9 = (CombineServantListViewItem_o *)v5->fields._items->m_Items[v7];
            if ( !v9 )
              sub_B7769C(UserSvtId, v12);
            v10 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v9->klass->_2.bitflags2 + 1) < (unsigned int)v10
              || (CombineServantListViewItem_c *)v9->klass->_2.typeHierarchy[v10 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B77990(v9);
LABEL_24:
              sub_B7769C(UserSvtId, v12);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId(
                          v9,
                          (const MethodInfo *)CombineServantListViewItem_TypeInfo);
            if ( (Il2CppObject *)UserSvtId == current )
              break;
            v5 = v2->fields.itemList;
            ++v7;
            if ( !v5 )
              goto LABEL_24;
          }
          v9->fields.isCanNotLock = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v14,
          (const MethodInfo_225AF70 *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
  }
}


void __fastcall CombineServantListViewManager__SetMode(
        CombineServantListViewManager_o *this,
        int32_t mode,
        CombineServantListViewManager_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_31559684(this, mode, v10);
}


void __fastcall CombineServantListViewManager__SetMode_31559684(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  UIScrollView_o *ObjectSum; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v8; // x2
  int32_t v9; // w1
  int v10; // w23
  char v11; // w24
  _BOOL8 v12; // x0
  __int64 v13; // x1
  ListViewItem_o *current; // x21
  __int64 v15; // x9
  const MethodInfo *v16; // x1
  int32_t selectNum; // w28
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int v24; // w28
  int v25; // w22
  const MethodInfo *v26; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  _BYTE v28[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v29; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_438E742 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E742 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  memset(&v30, 0, sizeof(v30));
  v29 = 0;
  this->fields.initMode = mode;
  ObjectSum = (UIScrollView_o *)ListViewManager__get_ObjectSum((ListViewManager_o *)this, 0LL);
  this->fields.callbackCount = (int)ObjectSum;
  if ( !this )
    goto LABEL_47;
  ListViewManager__set_IsInput((ListViewManager_o *)this, (mode | 1) == 3, 0LL);
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
  {
    ObjectSum = this->fields.scrollView;
    if ( !ObjectSum )
      goto LABEL_47;
    if ( !UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)ObjectSum, 0LL) )
    {
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v8);
      ObjectSum = this->fields.scrollView;
      if ( !ObjectSum )
        goto LABEL_47;
      UIScrollView__UpdatePosition(ObjectSum, 0LL);
    }
  }
  if ( (unsigned int)(mode - 1) < 2 )
  {
    ObjectSum = (UIScrollView_o *)this->fields.itemList;
    if ( ObjectSum )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v28,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectSum,
        (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v10 = 0;
      v11 = 0;
      v31 = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v31,
                (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v12 )
          break;
        current = (ListViewItem_o *)v31.fields.current;
        if ( !v31.fields.current )
          goto LABEL_46;
        v15 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v31.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v15
          || (CombineServantListViewItem_c *)v31.fields.current->klass->_2.typeHierarchy[v15 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B77990(v31.fields.current);
LABEL_46:
          sub_B7769C(v12, v13);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v31.fields.current, 0LL)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, v16) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v18);
          itemList = this->fields.itemList;
          if ( !itemList )
            sub_B7769C(0LL, v19);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v28,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
            (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v30 = *(System_Collections_Generic_List_Enumerator_T__o *)v28;
          while ( 1 )
          {
            v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v30,
                    (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v22 )
              break;
            if ( !v30.fields.current )
              sub_B7769C(v22, v23);
            klass = (int32_t)v30.fields.current[1].klass;
            if ( klass > selectNum )
              LODWORD(v30.fields.current[1].klass) = klass - 1;
          }
          *(_DWORD *)&v28[4 * v10 + 24] = 259;
          v24 = ++v29;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v30,
            (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v10 = 0;
          v11 = 1;
          if ( v24 )
          {
            v11 = 1;
            v10 = v24;
            if ( *(_DWORD *)&v28[4 * v24 + 20] == 259 )
            {
              v11 = 1;
              v10 = v24 - 1;
              v29 = v24 - 1;
            }
          }
        }
      }
      *(_DWORD *)&v28[4 * v10 + 24] = 287;
      v25 = ++v29;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v31,
        (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v25 && *(_DWORD *)&v28[4 * v25 + 20] == 287 )
        v29 = v25 - 1;
      if ( (v11 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v26);
      if ( mode == 2 )
        v9 = 3;
      else
        v9 = 2;
      goto LABEL_41;
    }
LABEL_47:
    sub_B7769C(ObjectSum, v6);
  }
  if ( mode != 3 )
    goto LABEL_42;
  v9 = 4;
LABEL_41:
  CombineServantListViewManager__RequestListObject_31560992(this, v9, v8);
LABEL_42:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__SetMode_31560772(
        CombineServantListViewManager_o *this,
        int32_t mode,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x2

  this->fields.callbackFunc2 = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_31559684(this, mode, v10);
}


void __fastcall CombineServantListViewManager__SetObjectItem(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v5; // x20
  __int64 v6; // x9
  int32_t v7; // w1

  v5 = this;
  if ( (byte_438E741 & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_B775C4(&CombineServantListViewObject_TypeInfo);
    byte_438E741 = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B7769C(this, obj);
  v6 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B77990(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_30410464((CombineServantListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  System_Collections_Generic_List_long__o *v7; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1

  if ( (byte_438E74C & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    byte_438E74C = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v7 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v7,
      (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_selectedMaterialUserServantIdList = v7;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
      (System_Int32_array **)v7,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    selectedMaterialUserServantIdList = *p_selectedMaterialUserServantIdList;
    if ( !*p_selectedMaterialUserServantIdList )
      goto LABEL_9;
  }
  System_Collections_Generic_List_long___Clear(
    selectedMaterialUserServantIdList,
    (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
  selectedMaterialUserServantIdList = *p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList
    || (System_Collections_Generic_List_long___AddRange(
          selectedMaterialUserServantIdList,
          (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
          (const MethodInfo_30EBFEC *)Method_System_Collections_Generic_List_long__AddRange__),
        (selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList) == 0LL)
    || (System_Collections_Generic_List_long___Clear(
          selectedMaterialUserServantIdList,
          (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__),
        (selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList) == 0LL) )
  {
LABEL_9:
    sub_B7769C(selectedMaterialUserServantIdList, v14);
  }
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_30EBFEC *)Method_System_Collections_Generic_List_long__AddRange__);
}


void __fastcall CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_438E77A & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E77A = 1;
  }
  scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality(scrollView, 0LL, 0LL) )
  {
    v7 = (UnityEngine_Behaviour_o *)this->fields.scrollView;
    if ( !v7 )
      sub_B7769C(0LL, v6);
    UnityEngine_Behaviour__set_enabled(v7, enabled, 0LL);
  }
}


void __fastcall CombineServantListViewManager__SetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        UserServantEntity_o *resData,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.baseUsrSvtData = resData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.baseUsrSvtData,
    (System_Int32_array **)resData,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall CombineServantListViewManager__SetSortButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v4; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v6; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v8; // x8
  int32_t sortKind; // w9
  System_String_o **v10; // x8
  struct ListViewSort_o *v11; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v13; // x9
  System_String_o **v14; // x10
  System_String_o **v15; // x8
  struct ListViewSort_o *v16; // x8
  System_String_o **v17; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v19; // x20

  if ( (byte_438E763 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&StringLiteral_17360/*"btn_sort_up"*/);
    sub_B775C4(&StringLiteral_17444/*"btn_txt_up"*/);
    sub_B775C4(&StringLiteral_17400/*"btn_txt_new"*/);
    sub_B775C4(&StringLiteral_17390/*"btn_txt_down"*/);
    sub_B775C4(&StringLiteral_17407/*"btn_txt_old"*/);
    sub_B775C4(&StringLiteral_17357/*"btn_sort_down"*/);
    byte_438E763 = 1;
  }
  sortKindLabel = (UnityEngine_Object_o *)this->fields.sortKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(sortKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_44;
    v6 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v6 )
      goto LABEL_44;
    UILabel__set_text(v6, (System_String_o *)sort, 0LL);
  }
  sortOrderSprite = (UnityEngine_Object_o *)this->fields.sortOrderSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  sort = (ListViewSort_o *)UnityEngine_Object__op_Inequality(sortOrderSprite, 0LL, 0LL);
  if ( ((unsigned __int8)sort & 1) != 0 )
  {
    v8 = this->fields.sort;
    if ( !v8 )
      goto LABEL_44;
    sortKind = v8->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v10 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17407/*"btn_txt_old"*/ : &StringLiteral_17400/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v10, 0LL);
      v11 = this->fields.sort;
      if ( !v11 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v11->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
      v14 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v15 = (System_String_o **)(v8->fields.isAscendingOrder ? &StringLiteral_17444/*"btn_txt_up"*/ : &StringLiteral_17390/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v15, 0LL);
      v16 = this->fields.sort;
      if ( !v16 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v16->fields.isAscendingOrder;
      v13 = (System_String_o **)&StringLiteral_17360/*"btn_sort_up"*/;
      v14 = (System_String_o **)&StringLiteral_17357/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v17 = v13;
    else
      v17 = v14;
    UISprite__set_spriteName((UISprite_o *)sort, *v17, 0LL);
  }
  bonusFilterKindLabel = (UnityEngine_Object_o *)this->fields.bonusFilterKindLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bonusFilterKindLabel, 0LL, 0LL) )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_44;
    if ( sort->fields.isBonusKind )
    {
      v19 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_34346624(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 this->fields.servantFilterIdList,
                                 this->fields.eventCampaignIdList,
                                 this->fields.eventCampaignServantIdList,
                                 0LL,
                                 0LL);
      if ( v19 )
      {
        UILabel__set_text(v19, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_44:
      sub_B7769C(sort, v4);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetStatusKind(
        CombineServantListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  UnityEngine_Behaviour_o *statusTabButton; // x0
  __int64 *v6; // x8
  UICommonButton_o *v7; // x21
  bool enabled; // w0
  __int64 *v9; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v11; // w0
  __int64 *v12; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v14; // w0
  __int64 *v15; // x8
  UICommonButton_o *pushTabButton; // x20
  bool v17; // w0
  const MethodInfo *v18; // x2

  if ( (byte_438E731 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_17477/*"button_push_reg"*/);
    sub_B775C4(&StringLiteral_17478/*"button_push_unreg"*/);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438E731 = 1;
  }
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  this->fields.modeKind = modeKind;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v6 = &StringLiteral_17479/*"button_select_reg"*/;
  if ( modeKind )
    v6 = &StringLiteral_17480/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v6, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v7 = this->fields.statusTabButton;
  if ( !v7 )
    goto LABEL_32;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v7, enabled, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 1, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v9 = &StringLiteral_17465/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v9 = &StringLiteral_17466/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v9, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  lockTabButton = this->fields.lockTabButton;
  if ( !lockTabButton )
    goto LABEL_32;
  v11 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v11, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 2, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v12 = &StringLiteral_17463/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v12 = &StringLiteral_17464/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v12, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  choiceTabButton = this->fields.choiceTabButton;
  if ( !choiceTabButton )
    goto LABEL_32;
  v14 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v14, 0, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_Behaviour_o *, __int64, void *))statusTabButton->klass[1]._1.namespaze)(
    statusTabButton,
    1LL,
    statusTabButton->klass[1]._1.byval_arg.data);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  UnityEngine_Behaviour__set_enabled(statusTabButton, modeKind != 3, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushSprite;
  if ( !statusTabButton )
    goto LABEL_32;
  v15 = &StringLiteral_17477/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v15 = &StringLiteral_17478/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, (System_String_o *)*v15, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.pushTabButton;
  if ( !statusTabButton
    || (statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                       statusTabButton,
                                                       0LL,
                                                       0LL,
                                                       statusTabButton->klass[1]._1.interfaceOffsets),
        (pushTabButton = this->fields.pushTabButton) == 0LL) )
  {
LABEL_32:
    sub_B7769C(statusTabButton, *(_QWORD *)&modeKind);
  }
  v17 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v17, 0, 0LL);
  CombineServantListViewManager__setHeaderMsg(this, this->fields.currentType, v18);
}


void __fastcall CombineServantListViewManager__StatusRequest(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v15; // x1
  System_Int64_array *v16; // x2
  System_Int64_array *v17; // x1
  bool v18; // w4
  bool v19; // w5
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  NetworkManager_ResultCallbackFunc_o *v26; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_438E769 & 1) == 0 )
  {
    sub_B775C4(&Method_CombineServantListViewManager_EndStatusSync__);
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438E769 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    if ( CombineServantListViewManager__GetSwapChoiceList(this, &choiceList, &unchoiceList, v3) )
    {
      this->fields.requestCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
      v26 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v26,
                                                                       (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v16 = unchoiceList;
        v17 = choiceList;
        v19 = 1;
        v18 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B7769C(Request_WarBoardWallAttackRequest, v15);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v13,
                                                                     (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v16 = unlockList;
      v17 = lockList;
      v18 = 1;
      v19 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v17, v16, 0, v18, v19, 0LL);
      return;
    }
    goto LABEL_21;
  }
  if ( callback )
    CombineServantListViewManager_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


void __fastcall CombineServantListViewManager__TutorialBlock(
        CombineServantListViewManager_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  void *transform; // x0
  __int64 v6; // x1
  int v7; // w8
  void *v8; // x21
  unsigned int v9; // w23
  int v10; // w8
  void *v11; // x21
  unsigned int v12; // w23
  int v13; // w8
  void *v14; // x21
  unsigned int v15; // w23
  struct UIScrollView_o *scrollView; // x8
  int v17; // w8
  void *v18; // x21
  unsigned int v19; // w23
  int v20; // w8
  void *v21; // x21
  unsigned int v22; // w22
  const MethodInfo *v23; // x2
  __int64 v24; // x0

  if ( (byte_438E77C & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_B775C4(&StringLiteral_12833/*"ScaleChangeButton"*/);
    sub_B775C4(&StringLiteral_9121/*"MarkObject"*/);
    sub_B775C4(&StringLiteral_13164/*"SortInfo"*/);
    byte_438E77C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_13164/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v7 = *((_DWORD *)transform + 6);
  v8 = transform;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( v9 < v7 )
    {
      transform = (void *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        goto LABEL_11;
    }
LABEL_53:
    v24 = sub_B776C8(transform);
    sub_B77668(v24, 0LL);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_9121/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v10 = *((_DWORD *)transform + 6);
  v11 = transform;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( v12 < v10 )
    {
      transform = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_19;
    }
    goto LABEL_53;
  }
LABEL_19:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12833/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v13 = *((_DWORD *)transform + 6);
  v14 = transform;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( v15 < v13 )
    {
      transform = (void *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
        goto LABEL_29;
    }
    goto LABEL_53;
  }
LABEL_29:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_52;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 0, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_52;
  transform = *(void **)&scrollView->fields.showScrollBars;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_52;
  v17 = *((_DWORD *)transform + 6);
  v18 = transform;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( v19 < v17 )
    {
      transform = (void *)*((_QWORD *)v18 + (int)v19 + 4);
      if ( !transform )
        goto LABEL_52;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0LL);
      v17 = *((_DWORD *)v18 + 6);
      if ( (int)++v19 >= v17 )
        goto LABEL_38;
    }
    goto LABEL_53;
  }
LABEL_38:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v20 = *((_DWORD *)transform + 6);
  v21 = transform;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( v22 < v20 )
    {
      transform = (void *)*((_QWORD *)v21 + (int)v22 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
        goto LABEL_45;
    }
    goto LABEL_53;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  if ( progress == 4 || progress == 2 )
  {
    transform = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v23);
    if ( transform )
    {
      transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
        return;
      }
    }
LABEL_52:
    sub_B7769C(transform, v6);
  }
}


void __fastcall CombineServantListViewManager__UnBlockTutorial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  void *transform; // x0
  __int64 v4; // x1
  int v5; // w8
  void *v6; // x20
  unsigned int v7; // w22
  int v8; // w8
  void *v9; // x20
  unsigned int v10; // w22
  int v11; // w8
  void *v12; // x20
  unsigned int v13; // w22
  struct UIScrollView_o *scrollView; // x8
  int v15; // w8
  void *v16; // x20
  unsigned int v17; // w22
  int v18; // w8
  void *v19; // x20
  unsigned int v20; // w21
  __int64 v21; // x0

  if ( (byte_438E77B & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UICommonButton___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
    sub_B775C4(&StringLiteral_12833/*"ScaleChangeButton"*/);
    sub_B775C4(&StringLiteral_9121/*"MarkObject"*/);
    sub_B775C4(&StringLiteral_13164/*"SortInfo"*/);
    byte_438E77B = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_13164/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v5 = *((_DWORD *)transform + 6);
  v6 = transform;
  if ( v5 >= 1 )
  {
    v7 = 0;
    while ( v7 < v5 )
    {
      transform = (void *)*((_QWORD *)v6 + (int)v7 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v5 = *((_DWORD *)v6 + 6);
      if ( (int)++v7 >= v5 )
        goto LABEL_11;
    }
LABEL_48:
    v21 = sub_B776C8(transform);
    sub_B77668(v21, 0LL);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_9121/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v8 = *((_DWORD *)transform + 6);
  v9 = transform;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( v10 < v8 )
    {
      transform = (void *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        goto LABEL_19;
    }
    goto LABEL_48;
  }
LABEL_19:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12833/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v11 = *((_DWORD *)transform + 6);
  v12 = transform;
  if ( v11 >= 1 )
  {
    v13 = 0;
    while ( v13 < v11 )
    {
      transform = (void *)*((_QWORD *)v12 + (int)v13 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v11 = *((_DWORD *)v12 + 6);
      if ( (int)++v13 >= v11 )
        goto LABEL_29;
    }
    goto LABEL_48;
  }
LABEL_29:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_47;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)transform, 1, 0LL);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_47;
  transform = *(void **)&scrollView->fields.showScrollBars;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_47;
  v15 = *((_DWORD *)transform + 6);
  v16 = transform;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( v17 < v15 )
    {
      transform = (void *)*((_QWORD *)v16 + (int)v17 + 4);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0LL);
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
        goto LABEL_38;
    }
    goto LABEL_48;
  }
LABEL_38:
  transform = this->fields.scrollView;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v18 = *((_DWORD *)transform + 6);
  v19 = transform;
  if ( v18 >= 1 )
  {
    v20 = 0;
    while ( v20 < v18 )
    {
      transform = (void *)*((_QWORD *)v19 + (int)v20 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v18 = *((_DWORD *)v19 + 6);
      if ( (int)++v20 >= v18 )
        goto LABEL_45;
    }
    goto LABEL_48;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
LABEL_47:
    sub_B7769C(transform, v4);
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
}


void __fastcall CombineServantListViewManager___OnClickDecide_b__175_0(
        CombineServantListViewManager_o *this,
        int32_t isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_31559684(this, 2, v5);
  if ( isDecide == 1 )
    CombineServantListViewManager__AfterCheckMaterial(this, v6);
}


void __fastcall CombineServantListViewManager__add_callbackFunc(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineServantListViewManager_o *v10; // x0
  CombineServantListViewManager_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438E726 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_438E726 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v7->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  CombineServantListViewManager__remove_callbackFunc(v10, v11, v12);
}


void __fastcall CombineServantListViewManager__add_callbackFunc2(
        CombineServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438E728 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438E728 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  CombineServantListViewManager__remove_callbackFunc2(v10, v11, v12);
}


void __fastcall CombineServantListViewManager__changeCombineEnableRestCnt(
        CombineServantListViewManager_o *this,
        bool isPlus,
        CombineServantListViewItem_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v5; // x19
  int32_t sellEnableRestCnt; // w8
  int32_t v8; // w8

  if ( this->fields.itemType == 1 )
  {
    if ( !item || (v5 = this, (this = (CombineServantListViewManager_o *)item->fields.servantEntity) == 0LL) )
      sub_B7769C(this, isPlus);
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL)
      && !item->fields.isHeroineSvt
      && !item->fields.isEventJoin )
    {
      sellEnableRestCnt = v5->fields.sellEnableRestCnt;
      if ( isPlus )
        v8 = sellEnableRestCnt + 1;
      else
        v8 = sellEnableRestCnt - 1;
      v5->fields.sellEnableRestCnt = v8;
    }
  }
}


void __fastcall CombineServantListViewManager__checkDragMax(
        CombineServantListViewManager_o *this,
        bool *isHpUpMax,
        bool *isAtkUpMax,
        bool *isHpMax,
        bool *isAtkMax,
        bool *isSecondHpMax,
        bool *isSecondAtkMax,
        bool *isMaxLvSelected,
        const MethodInfo *method)
{
  struct UserServantEntity_o *baseUsrSvtData; // x0
  int32_t adjustAtk; // w19
  UserServantEntity_o *isSecondAdjustHpMax; // x0
  char v19; // w27
  bool isSecondAdjustAtkMax; // w28
  int v21; // w21
  Il2CppObject *current; // x19
  __int64 v23; // x9
  int klass_high; // w22
  __int64 v25; // x1
  int klass; // w8
  int monitor_high; // w9
  int32_t v28; // w10
  int32_t v29; // w10
  int32_t v30; // w8
  int32_t v31; // w9
  bool *v32; // x9
  int32_t v33; // w10
  int32_t v34; // w9
  UserServantEntity_o *v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  struct MenuListControl_o *menuListCtr; // x8
  float v39; // s0
  int32_t v40; // w0
  int32_t v41; // w19
  struct UserServantEntity_o *v42; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v43; // x21
  __int64 v44; // x22
  __int64 v45; // x23
  int32_t hiddenValue; // w8
  int v47; // w23
  int32_t exp; // w22
  const MethodInfo *v49; // x4
  int32_t LevelMax; // w21
  int32_t v51; // w8
  int32_t v52; // w19
  bool *v53; // [xsp+10h] [xbp-D0h]
  int32_t v54; // [xsp+1Ch] [xbp-C4h]
  bool *v55; // [xsp+20h] [xbp-C0h]
  int32_t adjustHp; // [xsp+28h] [xbp-B8h]
  int v57; // [xsp+2Ch] [xbp-B4h]
  __int64 v58; // [xsp+30h] [xbp-B0h]
  int v60; // [xsp+44h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v61; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+60h] [xbp-80h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+78h] [xbp-68h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-60h] BYREF
  __int64 checkLv; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v66; // 0:x0.16

  if ( (byte_438E738 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E738 = 1;
  }
  memset(&v62, 0, sizeof(v62));
  *(_QWORD *)maxAjustAtk = 0LL;
  checkLv = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *isHpUpMax = 0;
  *isAtkUpMax = 0;
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData && this->fields.itemType == 1 )
  {
    adjustAtk = baseUsrSvtData->fields.adjustAtk;
    adjustHp = baseUsrSvtData->fields.adjustHp;
    UserServantEntity__GetAdjustMax(
      baseUsrSvtData,
      &maxAjustAtk[1],
      maxAjustAtk,
      &secondMaxAdjustAtk[1],
      secondMaxAdjustAtk,
      0LL);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_62;
    *isHpUpMax = UserServantEntity__isAdjustHpMax(isSecondAdjustHpMax, 0LL);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_62;
    *isAtkUpMax = UserServantEntity__isAdjustAtkMax(isSecondAdjustHpMax, 0LL);
    isSecondAdjustHpMax = this->fields.baseUsrSvtData;
    if ( !isSecondAdjustHpMax )
      goto LABEL_62;
    v54 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_62;
    v19 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
    LOBYTE(v58) = *isAtkUpMax && *isHpUpMax;
    BYTE4(v58) = v19 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v19 = 0;
    v54 = 0;
    adjustHp = 0;
    v58 = 0LL;
  }
  v53 = isSecondAtkMax;
  v55 = isMaxLvSelected;
  *isHpMax = *isHpUpMax;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v19 & 1;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v61,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)isSecondAdjustHpMax,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v57 = 0;
  v60 = 0;
  v21 = 0;
  v62 = v61;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v62,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v36 )
      break;
    current = v62.fields.current;
    if ( !v62.fields.current )
      goto LABEL_61;
    v23 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v62.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v23
      || (CombineServantListViewItem_c *)v62.fields.current->klass->_2.typeHierarchy[v23 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B77990(v62.fields.current);
LABEL_61:
      sub_B7769C(v36, v37);
    }
    klass_high = HIDWORD(v62.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v62.fields.current, 0LL) || SHIDWORD(current[20].klass) >= 1 )
    {
      if ( !BYTE4(current[14].klass) )
        goto LABEL_37;
      monitor_high = HIDWORD(current[13].monitor);
      klass = (int)current[14].klass;
      if ( klass_high == 4 )
      {
        if ( (v58 & 0x100000000LL) == 0 )
        {
          if ( !(v19 & 1 | (monitor_high < 1)) )
          {
            v21 += monitor_high;
            v28 = secondMaxAdjustAtk[1];
            if ( v21 + adjustHp >= secondMaxAdjustAtk[1] )
            {
              *isSecondHpMax = 1;
              v21 = v28 - adjustHp;
            }
          }
          if ( !isSecondAdjustAtkMax && klass >= 1 )
          {
            v29 = v54;
            v30 = secondMaxAdjustAtk[0];
            v31 = LODWORD(current[14].klass) + v57 + v54;
            v57 += LODWORD(current[14].klass);
            if ( v31 >= secondMaxAdjustAtk[0] )
            {
              v32 = v53;
LABEL_36:
              *v32 = 1;
              v57 = v30 - v29;
            }
          }
        }
      }
      else if ( !(v58 & 1 | (klass_high > 3)) )
      {
        if ( monitor_high >= 1 && !*isHpUpMax )
        {
          v21 += monitor_high;
          v33 = maxAjustAtk[1];
          if ( v21 + adjustHp >= maxAjustAtk[1] )
          {
            *isHpMax = 1;
            v21 = v33 - adjustHp;
          }
        }
        if ( klass >= 1 && !*isAtkUpMax )
        {
          v29 = v54;
          v30 = maxAjustAtk[0];
          v34 = LODWORD(current[14].klass) + v57 + v54;
          v57 += LODWORD(current[14].klass);
          if ( v34 >= maxAjustAtk[0] )
          {
            v32 = isAtkMax;
            goto LABEL_36;
          }
        }
      }
LABEL_37:
      v35 = this->fields.baseUsrSvtData;
      if ( !v35 )
        sub_B7769C(0LL, v25);
      if ( !UserServantEntity__isLevelMax(v35, 0LL) )
        v60 += LODWORD(current[10].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v62,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_62;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  v39 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)isSecondAdjustHpMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0LL);
  v40 = UnityEngine_Mathf__CeilToInt(v39 * (float)v60, 0LL);
  if ( !this->fields.baseUsrSvtData || this->fields.itemType != 1 )
    return;
  v41 = v40;
  isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)isSecondAdjustHpMax,
                                                 (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
  v42 = this->fields.baseUsrSvtData;
  if ( !v42 )
    goto LABEL_62;
  v43 = (DataMasterBase_WarMaster__WarEntity__int__o *)isSecondAdjustHpMax;
  v45 = *(_QWORD *)&v42->fields.svtId.fields.currentCryptoKey;
  v44 = *(_QWORD *)&v42->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v66.fields.currentCryptoKey = v45;
  *(_QWORD *)&v66.fields.fakeValue = v44;
  isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                 v66,
                                                 0LL);
  if ( !v43
    || (isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       v43,
                                                       (int32_t)isSecondAdjustHpMax,
                                                       (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL
    || (hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue,
        isSecondAdjustHpMax = this->fields.baseUsrSvtData,
        this->fields.expType = hiddenValue,
        !isSecondAdjustHpMax) )
  {
LABEL_62:
    sub_B7769C(isSecondAdjustHpMax, isHpUpMax);
  }
  exp = isSecondAdjustHpMax->fields.exp;
  LODWORD(checkLv) = isSecondAdjustHpMax->fields.lv;
  v47 = checkLv;
  LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0LL);
  if ( v47 == LevelMax )
  {
    v51 = 0;
  }
  else
  {
    v52 = exp + v41;
    while ( !CombineServantListViewManager__checkIncrementLv(
               this,
               (int32_t *)&checkLv,
               (int32_t *)&checkLv + 1,
               v52,
               v49) )
      ;
    v51 = HIDWORD(checkLv);
  }
  *v55 = v51 >= LevelMax;
}


bool __fastcall CombineServantListViewManager__checkIncrementLv(
        CombineServantListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v11; // w8
  int32_t v12; // w8
  bool result; // w0

  if ( (byte_438E739 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_ServantExpMaster___);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_438E739 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  LevelMax = UserServantEntity__getLevelMax((UserServantEntity_o *)baseUsrSvtData, 0LL);
  if ( *checkLv >= LevelMax )
  {
    *increLv = LevelMax;
    return 1;
  }
  baseUsrSvtData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_B7769C(baseUsrSvtData, checkLv);
  }
  v11 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v11 <= totalExp )
  {
    if ( v11 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v12 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v12 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v12;
  return 1;
}


bool __fastcall CombineServantListViewManager__checkIsSelectMaterial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.isSelectMaterial;
}


void __fastcall CombineServantListViewManager__clearSelectedSvtList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0

  if ( (byte_438E74D & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__Clear__);
    byte_438E74D = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_30EC1A4 *)Method_System_Collections_Generic_List_long__Clear__);
}


int32_t __fastcall CombineServantListViewManager__getItemType(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.itemType;
}


SetCombineData_o *__fastcall CombineServantListViewManager__getSelectCombineData(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.combineData;
}


UserServantEntity_o *__fastcall CombineServantListViewManager__getSelectUsrSvtEntity(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.selectUsrSvtEntity;
}


System_Collections_Generic_List_CombineServantListViewObject__o *__fastcall CombineServantListViewManager__get_ClippingObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  __int64 v10; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v11; // x21
  ListViewItem_o *Item; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_438E72F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E72F = 1;
  }
  memset(&v18, 0, sizeof(v18));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v17,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v18.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v11 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B7769C(0LL, v10);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B7769C(0LL, v13);
      if ( Item->fields.isTermination )
      {
        v14 = ListViewManager__ClippingItem_24185472((ListViewManager_o *)this, Item, 0LL);
        if ( v14 )
        {
          if ( !v3 )
            sub_B7769C(v14, v15);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v3 )
          sub_B7769C(Item, v13);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v3,
          v11,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v3;
}


System_Collections_Generic_List_CombineServantListViewObject__o *__fastcall CombineServantListViewManager__get_ObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v7; // x0
  __int64 v8; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438E72E & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
    sub_B775C4(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E72E = 1;
  }
  memset(&v12, 0, sizeof(v12));
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B7769C(0LL, v4);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v12 = v11;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v7 )
    {
      if ( !current )
        sub_B7769C(v7, v8);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      if ( !v3 )
        sub_B7769C(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v3,
        Component_srcLineSprite,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v3;
}


int32_t __fastcall CombineServantListViewManager__get_getModeKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  return this->fields.modeKind;
}


void __fastcall CombineServantListViewManager__remove_callbackFunc(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  struct CombineServantListViewManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CombineServantListViewManager_o *v10; // x0
  System_Action_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_438E727 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_CallbackFunc_TypeInfo);
    byte_438E727 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (CombineServantListViewManager_CallbackFunc_c *)v7->klass != CombineServantListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  CombineServantListViewManager__add_callbackFunc2(v10, v11, v12);
}


void __fastcall CombineServantListViewManager__remove_callbackFunc2(
        CombineServantListViewManager_o *this,
        System_Action_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  struct System_Action_o **p_callbackFunc2; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  const MethodInfo *v10; // x0

  if ( (byte_438E729 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    byte_438E729 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  p_callbackFunc2 = &this->fields.callbackFunc2;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (System_Action_c *)v7->klass != System_Action_TypeInfo )
        break;
    }
    v8 = sub_B6BFDC(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v7);
  CombineServantListViewManager__CreateSorteData(v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *decideBtnBg; // x0
  WebViewObject_o *Component_WebViewObject; // x21
  int v7; // s0
  __int64 v11; // x1

  if ( (byte_438E734 & 1) == 0 )
  {
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_438E734 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = isEnable;
  if ( !decideBtnBg )
LABEL_13:
    sub_B7769C(decideBtnBg, isEnable);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideBtnBg,
                              (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  if ( this->fields.isDecideFlg )
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_white(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_13;
  }
  else
  {
    *(UnityEngine_Color_o *)&v7 = UnityEngine_Color__get_gray(0LL);
    if ( !Component_WebViewObject )
      goto LABEL_13;
  }
  UIWidget__set_color((UIWidget_o *)Component_WebViewObject, *(UnityEngine_Color_o *)&v7, 0LL);
  decideBtnBg = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !decideBtnBg )
    goto LABEL_13;
  if ( isEnable )
    v11 = 0LL;
  else
    v11 = 3LL;
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))decideBtnBg->klass[1]._1.implementedInterfaces)(
    decideBtnBg,
    v11,
    1LL,
    decideBtnBg->klass[1]._1.interfaceOffsets);
}


void __fastcall CombineServantListViewManager__setCombineViewInfo(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *combineViewInfo; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v5; // x20
  __int64 v6; // x21
  __int64 v7; // x22
  ServantEntity_o *Entity; // x20
  struct UserServantEntity_o *v9; // x8
  ServantLimitImageMaster_o *v10; // x21
  struct UserServantEntity_o *v11; // x8
  int32_t v12; // w22
  UILabel_o *combineSvtInfoLabel; // x21
  UILabel_o *v14; // x20
  const MethodInfo *v15; // x1
  int32_t currentType; // w8
  struct UserServantEntity_o *v17; // x8
  UILabel_o *v18; // x20
  struct UserServantEntity_o *v19; // x8
  UILabel_o *v20; // x20
  const MethodInfo *v21; // x1
  struct UserServantEntity_o *v22; // x8
  UILabel_o *currentLvLabel; // x20
  struct UserServantEntity_o *v24; // x8
  UILabel_o *resLvLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_GameObject_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  UnityEngine_GameObject_o *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  UnityEngine_GameObject_o *v36; // x0
  UnityEngine_GameObject_o *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_GameObject_o *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_438E777 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_19936/*"img_nplv"*/);
    byte_438E777 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_105;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_105;
    v5 = (DataMasterBase_WarMaster__WarEntity__int__o *)combineViewInfo;
    v7 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v6 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v49.fields.currentCryptoKey = v7;
    *(_QWORD *)&v49.fields.fakeValue = v6;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                    v49,
                                                    0LL);
    if ( !v5 )
      goto LABEL_105;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v5,
                                  (int32_t)combineViewInfo,
                                  (const MethodInfo_21FB894 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v9 = this->fields.baseUsrSvtData;
    if ( !v9 )
      goto LABEL_105;
    v10 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                    v9->fields.svtId,
                                                    0LL);
    v11 = this->fields.baseUsrSvtData;
    if ( !v11 )
      goto LABEL_105;
    v12 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                    v11->fields.limitCount,
                                                    0LL);
    if ( !v10 )
      goto LABEL_105;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v10,
                                                    v12,
                                                    (int32_t)combineViewInfo,
                                                    0LL);
    if ( !Entity )
      goto LABEL_105;
    combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantEntity__getName(Entity, (int32_t)combineViewInfo, -1, 0LL);
    if ( !combineSvtInfoLabel )
      goto LABEL_105;
    UILabel__set_text(combineSvtInfoLabel, (System_String_o *)combineViewInfo, 0LL);
    v14 = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)CombineServantListViewManager_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    }
    if ( !v14 )
      goto LABEL_105;
    UILabel__SetCondensedScale(v14, CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH, 0LL);
    CombineServantListViewManager__SetCombineSvtClassIcon(this, v15);
    combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
    if ( !combineViewInfo )
      goto LABEL_105;
    combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
    if ( !combineViewInfo )
      goto LABEL_105;
    combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(combineViewInfo, 0LL);
    if ( !combineViewInfo )
      goto LABEL_105;
    combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                    (UnityEngine_Transform_o *)combineViewInfo,
                                                    0LL);
    if ( !combineViewInfo )
      goto LABEL_105;
    combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
    if ( !combineViewInfo )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    currentType = this->fields.currentType;
    if ( currentType == 5 )
    {
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      v22 = this->fields.baseUsrSvtData;
      if ( !v22 )
        goto LABEL_105;
      currentLvLabel = this->fields.currentLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v22 + 292, 0LL);
      if ( !currentLvLabel )
        goto LABEL_105;
      UILabel__set_text(currentLvLabel, (System_String_o *)combineViewInfo, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      v24 = this->fields.baseUsrSvtData;
      if ( !v24 )
        goto LABEL_105;
      resLvLabel = this->fields.resLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v24 + 292, 0LL);
      if ( !resLvLabel )
        goto LABEL_105;
      UILabel__set_text(resLvLabel, (System_String_o *)combineViewInfo, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.getExpLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      UnityEngine_GameObject__SetActive(combineViewInfo, 0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(gameObject, -45.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_105;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 60, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.qpAndExpInfoBg;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v27, 32.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v28, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v29, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v30, -13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v31, -13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(combineViewInfo, 0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                      (UnityEngine_Transform_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v32, -90.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_105;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v33, 27.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_105;
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v34, 0.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_105;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v35, -18.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
      if ( !combineViewInfo )
        goto LABEL_105;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v36, 11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_19936/*"img_nplv"*/, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v37, 33.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v38, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v39, 77.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v40, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_19936/*"img_nplv"*/, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UIWidget__set_width((UIWidget_o *)combineViewInfo, 48, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 15, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v41, -57.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v42, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v43, -11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v44, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v45, 64.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v46, 40.0, 0LL);
    }
    else if ( currentType == 1 )
    {
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.baseUsrSvtData;
      if ( combineViewInfo )
      {
        UserServantEntity__getExpInfo((UserServantEntity_o *)combineViewInfo, &lateExp[1], lateExp, &barExp, 0LL);
        combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
        if ( combineViewInfo )
        {
          combineViewInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
          if ( combineViewInfo )
          {
            UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
            combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentExpBar;
            if ( combineViewInfo )
            {
              UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, barExp, 0LL);
              v17 = this->fields.baseUsrSvtData;
              if ( v17 )
              {
                v18 = this->fields.currentLvLabel;
                combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v17 + 256, 0LL);
                if ( v18 )
                {
                  UILabel__set_text(v18, (System_String_o *)combineViewInfo, 0LL);
                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
                  if ( combineViewInfo )
                  {
                    combineViewInfo = UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)combineViewInfo,
                                        0LL);
                    if ( combineViewInfo )
                    {
                      UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
                      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
                      if ( combineViewInfo )
                      {
                        combineViewInfo = UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)combineViewInfo,
                                            0LL);
                        if ( combineViewInfo )
                        {
                          UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
                          combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
                          if ( combineViewInfo )
                          {
                            combineViewInfo = UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)combineViewInfo,
                                                0LL);
                            if ( combineViewInfo )
                            {
                              UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
                              combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resCurrentExpBar;
                              if ( combineViewInfo )
                              {
                                UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, barExp, 0LL);
                                combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resExpBar;
                                if ( combineViewInfo )
                                {
                                  UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, 0.0, 0LL);
                                  combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resNextExpBar;
                                  if ( combineViewInfo )
                                  {
                                    UIProgressBar__set_value((UIProgressBar_o *)combineViewInfo, 0.0, 0LL);
                                    v19 = this->fields.baseUsrSvtData;
                                    if ( v19 )
                                    {
                                      v20 = this->fields.resLvLabel;
                                      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                                      (int)v19 + 256,
                                                                                      0LL);
                                      if ( v20 )
                                      {
                                        UILabel__set_text(v20, (System_String_o *)combineViewInfo, 0LL);
                                        CombineServantListViewManager__ResetCombineViewInfoLayout(this, v21);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_105:
      sub_B7769C(combineViewInfo, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setDispActive(
        CombineServantListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  UnityEngine_Component_o *allReleaseButton; // x0
  int v6; // s3
  float v7; // s4
  float v8; // s5
  float v9; // s6
  CombineServantListViewManager_c *v10; // x0
  float COLOR_VAL; // s0
  float v12; // s1
  float v13; // s2
  UIWidget_o *v14; // x21
  int v15; // s0
  int v16; // s1
  int v17; // s2
  int v18; // s3
  UIWidget_o *v19; // x21
  int v20; // s0
  int v21; // s1
  int v22; // s2
  int v23; // s3
  UIWidget_o *v24; // x21
  int v25; // s0
  int v26; // s1
  int v27; // s2
  int v28; // s3
  UIWidget_o *v29; // x21
  int v30; // s0
  int v31; // s1
  int v32; // s2
  int v33; // s3
  UIWidget_o *v34; // x21
  int v35; // s0
  int v36; // s1
  int v37; // s2
  int v38; // s3
  UIWidget_o *v39; // x21
  int v40; // s0
  int v41; // s1
  int v42; // s2
  int v43; // s3
  UIWidget_o *v44; // x21
  int v45; // s0
  int v46; // s1
  int v47; // s2
  int v48; // s3
  UIWidget_o *v49; // x21
  int v50; // s0
  int v51; // s1
  int v52; // s2
  int v53; // s3
  UIWidget_o *v54; // x21
  int v55; // s0
  int v56; // s1
  int v57; // s2
  int v58; // s3
  UIWidget_o *v59; // x21
  int v60; // s0
  int v61; // s1
  int v62; // s2
  int v63; // s3
  UIWidget_o *v64; // x21
  int v65; // s0
  int v66; // s1
  int v67; // s2
  int v68; // s3
  UIWidget_o *v69; // x21
  int v70; // s0
  int v71; // s1
  int v72; // s2
  int v73; // s3
  bool v74; // w20
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  __int64 v78; // [xsp+0h] [xbp-30h] BYREF
  __int64 v79; // [xsp+8h] [xbp-28h]

  if ( (byte_438E733 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponent_UIWidget___);
    byte_438E733 = 1;
  }
  v78 = 0LL;
  v79 = 0LL;
  allReleaseButton = (UnityEngine_Component_o *)this->fields.allReleaseButton;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.decideButton;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(allReleaseButton, 0LL);
  if ( !allReleaseButton )
    goto LABEL_71;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)allReleaseButton, isShow, 0LL);
  v10 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v10 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v10->static_fields->COLOR_VAL;
  v12 = COLOR_VAL;
  v13 = COLOR_VAL;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v6 - 3), v7, v8, v9, (const MethodInfo *)&v78);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpBg;
  if ( !allReleaseButton )
LABEL_71:
    sub_B7769C(allReleaseButton, isShow);
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v14 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v15 = UnityEngine_Color__get_white(0LL);
    if ( !v14 )
      goto LABEL_71;
  }
  else
  {
    v16 = HIDWORD(v78);
    v15 = v78;
    v18 = HIDWORD(v79);
    v17 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v14, *(UnityEngine_Color_o *)&v15, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v19 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v20 = UnityEngine_Color__get_white(0LL);
    if ( !v19 )
      goto LABEL_71;
  }
  else
  {
    v21 = HIDWORD(v78);
    v20 = v78;
    v23 = HIDWORD(v79);
    v22 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v19, *(UnityEngine_Color_o *)&v20, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v24 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v25 = UnityEngine_Color__get_white(0LL);
    if ( !v24 )
      goto LABEL_71;
  }
  else
  {
    v26 = HIDWORD(v78);
    v25 = v78;
    v28 = HIDWORD(v79);
    v27 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v24, *(UnityEngine_Color_o *)&v25, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v29 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v30 = UnityEngine_Color__get_white(0LL);
    if ( !v29 )
      goto LABEL_71;
  }
  else
  {
    v31 = HIDWORD(v78);
    v30 = v78;
    v33 = HIDWORD(v79);
    v32 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v29, *(UnityEngine_Color_o *)&v30, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v34 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v35 = UnityEngine_Color__get_white(0LL);
    if ( !v34 )
      goto LABEL_71;
  }
  else
  {
    v36 = HIDWORD(v78);
    v35 = v78;
    v38 = HIDWORD(v79);
    v37 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v34, *(UnityEngine_Color_o *)&v35, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v39 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v40 = UnityEngine_Color__get_white(0LL);
    if ( !v39 )
      goto LABEL_71;
  }
  else
  {
    v41 = HIDWORD(v78);
    v40 = v78;
    v43 = HIDWORD(v79);
    v42 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v39, *(UnityEngine_Color_o *)&v40, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v44 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v45 = UnityEngine_Color__get_white(0LL);
    if ( !v44 )
      goto LABEL_71;
  }
  else
  {
    v46 = HIDWORD(v78);
    v45 = v78;
    v48 = HIDWORD(v79);
    v47 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v44, *(UnityEngine_Color_o *)&v45, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v49 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v50 = UnityEngine_Color__get_white(0LL);
    if ( !v49 )
      goto LABEL_71;
  }
  else
  {
    v51 = HIDWORD(v78);
    v50 = v78;
    v53 = HIDWORD(v79);
    v52 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v49, *(UnityEngine_Color_o *)&v50, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v54 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v55 = UnityEngine_Color__get_white(0LL);
    if ( !v54 )
      goto LABEL_71;
  }
  else
  {
    v56 = HIDWORD(v78);
    v55 = v78;
    v58 = HIDWORD(v79);
    v57 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v54, *(UnityEngine_Color_o *)&v55, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v59 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v60 = UnityEngine_Color__get_white(0LL);
    if ( !v59 )
      goto LABEL_71;
  }
  else
  {
    v61 = HIDWORD(v78);
    v60 = v78;
    v63 = HIDWORD(v79);
    v62 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v59, *(UnityEngine_Color_o *)&v60, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v64 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v65 = UnityEngine_Color__get_white(0LL);
    if ( !v64 )
      goto LABEL_71;
  }
  else
  {
    v66 = HIDWORD(v78);
    v65 = v78;
    v68 = HIDWORD(v79);
    v67 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v64, *(UnityEngine_Color_o *)&v65, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_1C6D6B0 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v69 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v70 = UnityEngine_Color__get_white(0LL);
    if ( !v69 )
      goto LABEL_71;
  }
  else
  {
    v71 = HIDWORD(v78);
    v70 = v78;
    v73 = HIDWORD(v79);
    v72 = v79;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v69, *(UnityEngine_Color_o *)&v70, 0LL);
  v74 = isShow;
  CombineServantListViewManager__setDispSprite(this, v74, this->fields.combineSvtInfoBg, v75);
  CombineServantListViewManager__setDispSprite(this, v74, this->fields.qpAndExpInfoBg, v76);
  CombineServantListViewManager__setDispSprite(this, v74, this->fields.enhancementInfoBg, v77);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setDispSprite(
        CombineServantListViewManager_o *this,
        bool isShow,
        UISprite_o *sprite,
        const MethodInfo *method)
{
  int v4; // s3
  float v5; // s4
  float v6; // s5
  float v7; // s6
  CombineServantListViewManager_c *v11; // x0
  float COLOR_VAL; // s0
  float v13; // s1
  float v14; // s2
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v16; // x1
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v18; // x22
  int i; // w24
  UIWidget_o *v20; // x23
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UnityEngine_Object_o *enhancementInfoBg; // x22
  UIWidget_o *resLvLabel; // x20
  int v27; // s0
  int v28; // s1
  int v29; // s2
  int v30; // s3
  __int64 v31; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_438E779 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69484016);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E779 = 1;
  }
  var40.methodPointer = 0LL;
  var40.invoker_method = 0LL;
  v11 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v11 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v11->static_fields->COLOR_VAL;
  v13 = COLOR_VAL;
  v14 = COLOR_VAL;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, &var40);
  if ( !sprite
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    (UnityEngine_Component_o *)sprite,
                                                                    1,
                                                                    (const MethodInfo_1C6DADC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____69484016)) == 0LL )
  {
LABEL_28:
    sub_B7769C(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v16);
  }
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v18 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v31 = sub_B776C8(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B77668(v31, 0LL);
      }
      v20 = (UIWidget_o *)v18->m_Items[i];
      if ( isShow )
      {
        *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
        if ( !v20 )
          goto LABEL_28;
      }
      else
      {
        methodPointer_high = HIDWORD(var40.methodPointer);
        methodPointer = (int)var40.methodPointer;
        invoker_method_high = HIDWORD(var40.invoker_method);
        invoker_method = (int)var40.invoker_method;
        if ( !v20 )
          goto LABEL_28;
      }
      UIWidget__set_color(v20, *(UnityEngine_Color_o *)&methodPointer, 0LL);
      max_length = v18->max_length;
    }
  }
  enhancementInfoBg = (UnityEngine_Object_o *)this->fields.enhancementInfoBg;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ComponentsInChildren_WarBoardControlPlayTalkUiComponent = (WarBoardControlPlayTalkUiComponent_array *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sprite, enhancementInfoBg, 0LL);
  if ( ((unsigned __int8)ComponentsInChildren_WarBoardControlPlayTalkUiComponent & 1) != 0
    && this->fields.currentType == 5 )
  {
    resLvLabel = (UIWidget_o *)this->fields.resLvLabel;
    if ( isShow )
    {
      *(UnityEngine_Color_o *)&v27 = UnityEngine_Color__get_yellow(0LL);
      if ( !resLvLabel )
        goto LABEL_28;
    }
    else
    {
      v28 = HIDWORD(var40.methodPointer);
      v27 = (int)var40.methodPointer;
      v30 = HIDWORD(var40.invoker_method);
      v29 = (int)var40.invoker_method;
      if ( !resLvLabel )
        goto LABEL_28;
    }
    UIWidget__set_color(resLvLabel, *(UnityEngine_Color_o *)&v27, 0LL);
  }
}


void __fastcall CombineServantListViewManager__setHeaderMsg(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 *v5; // x8
  System_String_o *v6; // x1
  int32_t modeKind; // w8
  __int64 *v8; // x8
  UILabel_o *combineInfoMsgLb; // x0
  int32_t currentType; // w8

  if ( (byte_438E732 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/);
    sub_B775C4(&StringLiteral_7190/*"HEADER_MSG_NPUP_BASE"*/);
    sub_B775C4(&StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_7429/*"INFO_MSG_COMBINE_MATERIAL"*/);
    sub_B775C4(&StringLiteral_7195/*"HEADER_MSG_SVTCOMBINE_BASE"*/);
    sub_B775C4(&StringLiteral_7185/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/);
    sub_B775C4(&StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_3344/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/);
    sub_B775C4(&StringLiteral_7187/*"HEADER_MSG_LVEXCEED"*/);
    sub_B775C4(&StringLiteral_1780/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/);
    sub_B775C4(&StringLiteral_7194/*"HEADER_MSG_SPECIAL_ASCENSION"*/);
    sub_B775C4(&StringLiteral_7183/*"HEADER_MSG_COMBINE_MATERIAL"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    sub_B775C4(&StringLiteral_3285/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/);
    sub_B775C4(&StringLiteral_7193/*"HEADER_MSG_SKILLUP"*/);
    sub_B775C4(&StringLiteral_7186/*"HEADER_MSG_LIMITUP"*/);
    byte_438E732 = 1;
  }
  switch ( type )
  {
    case 0:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_7195/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_52;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_7183/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_52;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_7186/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_52;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_7193/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_52;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_7190/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_52;
    case 5:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_7429/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_52;
    case 6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_7187/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_52;
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_3285/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_52;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_7185/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_52;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_7194/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_52;
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_3344/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_52;
    case 11:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v5 = &StringLiteral_1780/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
LABEL_52:
      v6 = LocalizationManager__Get((System_String_o *)*v5, 0LL);
      break;
    default:
      v6 = (System_String_o *)StringLiteral_1/*""*/;
      break;
  }
  modeKind = this->fields.modeKind;
  switch ( modeKind )
  {
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11964/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      break;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11962/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      break;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v8 = &StringLiteral_11963/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      break;
    default:
      goto LABEL_69;
  }
  v6 = LocalizationManager__Get((System_String_o *)*v8, 0LL);
LABEL_69:
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( !combineInfoMsgLb )
    goto LABEL_80;
  UILabel__set_text(combineInfoMsgLb, v6, 0LL);
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    currentType = this->fields.currentType;
    v6 = (System_String_o *)&dword_14;
    if ( currentType )
    {
      if ( currentType == 7 )
        v6 = (System_String_o *)&dword_14;
      else
        v6 = (System_String_o *)(byte_9 + 5);
    }
    if ( !combineInfoMsgLb )
LABEL_80:
      sub_B7769C(combineInfoMsgLb, v6);
  }
  else
  {
    v6 = (System_String_o *)(byte_9 + 5);
    if ( !combineInfoMsgLb )
      goto LABEL_80;
  }
  UILabel__set_fontSize(combineInfoMsgLb, (int32_t)v6, 0LL);
}


void __fastcall CombineServantListViewManager__setReleaseBtnEnable(
        CombineServantListViewManager_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_o *allReleaseButton; // x0
  __int64 v4; // x1

  allReleaseButton = this->fields.allReleaseButton;
  if ( !allReleaseButton )
    sub_B7769C(0LL, isEnable);
  if ( isEnable )
    v4 = 0LL;
  else
    v4 = 3LL;
  ((void (__fastcall *)(struct UICommonButton_o *, __int64, __int64, Il2CppMethodPointer))allReleaseButton->klass->vtable._14_SetState.method)(
    allReleaseButton,
    v4,
    1LL,
    allReleaseButton->klass->vtable._15_OnPress.methodPtr);
}


void __fastcall CombineServantListViewManager__setSelectMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectedItems,
        const MethodInfo *method)
{
  SetCombineData_o *v5; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  char *combineData; // x0
  System_Int32_array **baseUsrSvtData; // x1
  struct SetCombineData_o *v22; // x8
  struct SetCombineData_o *v23; // x8
  struct SetCombineData_o *v24; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v26; // x8
  struct SetCombineData_o *v27; // x8
  System_Collections_Generic_List_long__o *v28; // x21
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v32; // x1
  int64_t UserSvtId; // x0
  struct SetCombineData_o *v34; // x19
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Collections_Generic_List_Enumerator_T__o v41; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_438E749 & 1) == 0 )
  {
    sub_B775C4(&BalanceConfig_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_long___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&System_Collections_Generic_List_long__TypeInfo);
    sub_B775C4(&SetCombineData_TypeInfo);
    byte_438E749 = 1;
  }
  memset(&v42, 0, sizeof(v42));
  v5 = (SetCombineData_o *)sub_B77694(SetCombineData_TypeInfo);
  SetCombineData___ctor(v5, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v5;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.combineData,
    (System_Int32_array **)v5,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_28;
  baseUsrSvtData = (System_Int32_array **)this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_B77560((BattleServantConfConponent_o *)(combineData + 16), baseUsrSvtData, v14, v15, v16, v17, v18, v19);
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.selectSum = this->fields.selectSum;
  v22 = this->fields.combineData;
  if ( !v22 )
    goto LABEL_28;
  v22->fields.spendQp = this->fields.selectQp;
  v23 = this->fields.combineData;
  if ( !v23 )
    goto LABEL_28;
  v23->fields.getExp = this->fields.selectExp;
  v24 = this->fields.combineData;
  getHpUpVal = this->fields.getHpUpVal;
  combineData = (char *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineData = (char *)BalanceConfig_TypeInfo;
  }
  if ( !v24 )
    goto LABEL_28;
  v24->fields.getHpAdjustVal = *(_DWORD *)(*((_QWORD *)combineData + 23) + 304LL) * getHpUpVal;
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.getAtkAdjustVal = this->fields.getAtkUpVal
                                           * *(_DWORD *)(*((_QWORD *)combineData + 23) + 300LL);
  v26 = this->fields.combineData;
  if ( !v26 )
    goto LABEL_28;
  v26->fields.isAdjustMax = this->fields.isAllUpMax;
  v27 = this->fields.combineData;
  if ( !v27 )
    goto LABEL_28;
  v27->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v28 = (System_Collections_Generic_List_long__o *)sub_B77694(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v28,
    (const MethodInfo_30EB03C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_28;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v41,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)selectedItems,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v42 = v41;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v42,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v29 )
      break;
    current = v42.fields.current;
    if ( !v42.fields.current )
      sub_B7769C(v29, v30);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v42.fields.current, v30) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v32);
      if ( !v28 )
        sub_B7769C(UserSvtId, UserSvtId);
      System_Collections_Generic_List_long___Add(
        v28,
        UserSvtId,
        (const MethodInfo_30EBD98 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v42,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v28 )
    goto LABEL_28;
  if ( v28->fields._size < 1 )
    return;
  v34 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v28,
                          (const MethodInfo_30EDEA4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v34 )
LABEL_28:
    sub_B7769C(combineData, v13);
  v34->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_B77560(
    (BattleServantConfConponent_o *)&v34->fields.materialUsrSvtIdList,
    (System_Int32_array **)combineData,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
}


void __fastcall CombineServantListViewManager__setSelectedSvtList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x1

  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( tempMaterialUserServantIdList )
  {
    this->fields.selectedMaterialUserServantIdList = tempMaterialUserServantIdList;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
      (System_Int32_array **)tempMaterialUserServantIdList,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setServantList(
        CombineServantListViewManager_o *this,
        int32_t type,
        EventUpValSetupInfo_o *setupInfo,
        const MethodInfo *method)
{
  UserServantEntity_o *v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  __int64 sort; // x0
  __int64 v14; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CombineServantListViewManager_c *v21; // x8
  System_Int32_array **v22; // x21
  int32_t v23; // w27
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v25; // x23
  __int64 v26; // x24
  int v27; // w8
  __int64 v28; // x8
  unsigned int *v29; // x26
  System_String_o *v30; // x21
  System_String_o *v31; // x0
  System_String_o *v32; // x22
  ListViewSort_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  unsigned int v40; // w9
  __int64 v41; // x8
  struct ListViewSort_o *v42; // x1
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct ListViewSort_o *v49; // x8
  unsigned int iconScaleKind; // w8
  __int64 v51; // x9
  bool v52; // zf
  __int64 v53; // x8
  struct ListViewItemSeed_o *v54; // x1
  UISprite_o *scaleChangeButtonSprite; // x21
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x24
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  UserGameEntity_o *SelfUserGame; // x28
  UserDeckEntity_array *DeckList; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x21
  __int64 v68; // x2
  Il2CppObject *v69; // x0
  UILabel_o *nextExpLabel; // x21
  __int64 v71; // x2
  Il2CppObject *v72; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int v74; // s3
  float v75; // s4
  float v76; // s5
  float v77; // s6
  CombineServantListViewManager_c *v78; // x8
  UIWidget_o *v79; // x21
  float COLOR_VAL; // s0
  float v81; // s1
  float v82; // s2
  UIWidget_o *v83; // x21
  float v84; // s4
  float v85; // s5
  float v86; // s6
  UIWidget_o *v87; // x21
  float v88; // s4
  float v89; // s5
  float v90; // s6
  UIWidget_o *v91; // x21
  float v92; // s4
  float v93; // s5
  float v94; // s6
  __int64 v95; // x20
  UserServantEntity_o *v96; // x0
  UILabel_o *v97; // x21
  __int64 v98; // x2
  Il2CppObject *v99; // x0
  __int64 v100; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v101; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v102; // x0
  int size; // w8
  int32_t v104; // w25
  WarBoardAIRoute_RouteData_o *v105; // x8
  __int128 v106; // q0
  struct UserServantEntity_o *v107; // x8
  __int128 v108; // q0
  __int64 v109; // x21
  UILabel_o *v110; // x21
  __int64 v111; // x2
  Il2CppObject *v112; // x0
  int v113; // w8
  __int64 v114; // x26
  UserDeckEntity_array *v115; // x20
  CombineServantListViewNoticeTween_o *v116; // x22
  System_Int32_array **v117; // x1
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  int v124; // w8
  int v125; // w23
  __int64 v126; // x20
  __int64 v127; // x8
  UserServantEntity_o **v128; // x20
  __int64 v129; // t1
  __int128 v130; // q0
  int max_length; // w8
  __int64 v132; // x27
  unsigned int v133; // w9
  UserDeckEntity_o *v134; // x10
  struct DeckServant_o *deckInfo; // x10
  struct DeckServantData_array *svts; // x10
  unsigned int v137; // w11
  unsigned int i; // w12
  DeckServantData_o *v139; // x13
  char v140; // w10
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x22
  signed __int64 v142; // x9
  int v143; // w21
  int v144; // w24
  unsigned __int64 v145; // x23
  struct System_Int64_array *items; // x9
  int64_t v147; // x10
  __int64 v148; // x22
  UserServantEntity_o *v149; // x20
  UserGameEntity_o *v150; // x26
  int64_t favoriteUserSvtId; // x28
  __int64 v152; // x21
  const MethodInfo *v153; // x2
  System_Int32_array **noticeTween; // x1
  System_String_array **v155; // x2
  System_String_array **v156; // x3
  System_Boolean_array **v157; // x4
  System_Int32_array **v158; // x5
  System_Int32_array *v159; // x6
  System_Int32_array *v160; // x7
  struct System_Collections_Generic_List_long__o *v161; // x8
  const MethodInfo *v162; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v164; // x20
  __int64 v165; // x2
  Il2CppObject *v166; // x22
  __int64 v167; // x2
  Il2CppObject *v168; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v170; // x20
  __int64 v171; // x2
  Il2CppObject *v172; // x22
  __int64 v173; // x2
  Il2CppObject *v174; // x0
  const MethodInfo *v175; // x1
  UILabel_o *v176; // x20
  System_String_o *v177; // x21
  __int64 v178; // x2
  Il2CppObject *v179; // x22
  __int64 v180; // x2
  Il2CppObject *v181; // x0
  UILabel_o *v182; // x20
  System_String_o *v183; // x21
  __int64 v184; // x2
  Il2CppObject *v185; // x22
  __int64 v186; // x2
  Il2CppObject *v187; // x0
  const MethodInfo *v188; // x1
  __int64 v189; // x0
  __int64 v190; // x0
  const MethodInfo *v191; // [xsp+10h] [xbp-170h]
  int v192; // [xsp+24h] [xbp-15Ch]
  signed int v193; // [xsp+28h] [xbp-158h]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+30h] [xbp-150h]
  UserDeckEntity_array *v196; // [xsp+40h] [xbp-140h]
  UserServantEntity_o *baseUsrSvtData; // [xsp+48h] [xbp-138h]
  _BOOL4 v198; // [xsp+54h] [xbp-12Ch]
  bool v199; // [xsp+58h] [xbp-128h]
  unsigned int v200; // [xsp+5Ch] [xbp-124h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v201; // [xsp+60h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v202; // [xsp+80h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v203; // [xsp+A0h] [xbp-E0h] BYREF
  MethodInfo methoda; // [xsp+C0h] [xbp-C0h] BYREF
  int v205; // [xsp+110h] [xbp-70h] BYREF
  int32_t v206; // [xsp+114h] [xbp-6Ch] BYREF
  float barExp[2]; // [xsp+118h] [xbp-68h] BYREF
  int32_t lateExp[4]; // [xsp+120h] [xbp-60h] BYREF
  UnityEngine_Color_o v209; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v210; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v211; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v212; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v213; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438E735 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewItem_TypeInfo);
    sub_B775C4(&CombineServantListViewManager_TypeInfo);
    sub_B775C4(&CombineServantListViewNoticeTween_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMasterData_UserDeckMaster___);
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&ListViewSort___TypeInfo);
    sub_B775C4(&ListViewSort_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__);
    sub_B775C4(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_B775C4(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&StringLiteral_24013/*"{0:N0}"*/);
    sub_B775C4(&StringLiteral_12702/*"SUM_INFO"*/);
    byte_438E735 = 1;
  }
  *(_QWORD *)barExp = 0LL;
  *(_QWORD *)lateExp = 0LL;
  CombineServantListViewManager__setHeaderMsg(this, type, (const MethodInfo *)setupInfo);
  sort = (__int64)CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(sort + 184) + 48LL) )
  {
    v14 = sub_B775DC(ListViewSort___TypeInfo, 12LL);
    v21 = CombineServantListViewManager_TypeInfo;
    v22 = (System_Int32_array **)v14;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      v23 = type;
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v21 = CombineServantListViewManager_TypeInfo;
    }
    else
    {
      v23 = type;
    }
    static_fields = v21->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v22;
    sub_B77560((BattleServantConfConponent_o *)&static_fields->sortStatusList, v22, v15, v16, v17, v18, v19, v20);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
    v25 = -1LL;
    v26 = 8LL;
    v27 = (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v27 & 1) != 0 && !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort);
        sort = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v28 = *(_QWORD *)(sort + 184);
      v29 = *(unsigned int **)(v28 + 56);
      v30 = *(System_String_o **)(v28 + 40);
      LODWORD(barExp[0]) = v25 + 2;
      v31 = System_Int32__ToString((int32_t)barExp, 0LL);
      v32 = System_String__Concat_44901936(v30, v31, 0LL);
      v33 = (ListViewSort_o *)sub_B77694(ListViewSort_TypeInfo);
      ListViewSort___ctor_34308400(v33, v32, 3, 0, 0LL);
      if ( !v29 )
        goto LABEL_174;
      if ( v33 )
      {
        sort = sub_B77684(v33, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
        if ( !sort )
        {
          v190 = sub_B776BC(0LL);
          sub_B77668(v190, 0LL);
        }
      }
      if ( v25 + 1 >= v29[6] )
        goto LABEL_175;
      *(_QWORD *)&v29[v26] = v33;
      sub_B77560((BattleServantConfConponent_o *)&v29[v26], (System_Int32_array **)v33, v34, v35, v36, v37, v38, v39);
      sort = (__int64)CombineServantListViewManager_TypeInfo;
      ++v25;
      v26 += 2LL;
      v40 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v27 = (v40 >> 10) & 1;
    }
    while ( v25 < 0xB );
    type = v23;
    if ( (v40 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      sort = (__int64)CombineServantListViewManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(sort + 184) + 48LL) = 1;
  }
  if ( (*(_BYTE *)(sort + 307) & 4) != 0 && !*(_DWORD *)(sort + 224) )
  {
    j_il2cpp_runtime_class_init_0(sort);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
  }
  v41 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v41 )
    goto LABEL_174;
  if ( *(_DWORD *)(v41 + 24) <= (unsigned int)type )
    goto LABEL_175;
  v42 = *(struct ListViewSort_o **)(v41 + 8LL * type + 32);
  this->fields.sort = v42;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.sort, (System_Int32_array **)v42, v7, v8, v9, v10, v11, v12);
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_174;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (__int64)this->fields.emptyListNoticeLabel;
  if ( !sort )
    goto LABEL_174;
  sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
  if ( !sort )
    goto LABEL_174;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0LL);
  v49 = this->fields.sort;
  this->fields.itemType = type;
  if ( !v49 )
    goto LABEL_174;
  iconScaleKind = v49->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v51 = 808LL;
    v52 = this->fields.currentType == 11;
    v53 = 832LL;
  }
  else if ( iconScaleKind == 2 )
  {
    v51 = 816LL;
    v52 = this->fields.currentType == 11;
    v53 = 840LL;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_41;
    v51 = 824LL;
    v52 = this->fields.currentType == 11;
    v53 = 848LL;
  }
  if ( !v52 )
    v53 = v51;
  v54 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v53);
  this->fields.seed = v54;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)v54,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
LABEL_41:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_174;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_174;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_174;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)sort,
                                                                       (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_174;
  sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_174;
  if ( !sort )
    goto LABEL_174;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)sort, SelfUserGame->fields.userId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  v206 = qp;
  v69 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v206, v68);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v69, 0LL);
  if ( !haveQpLabel )
    goto LABEL_174;
  UILabel__set_text(haveQpLabel, (System_String_o *)sort, 0LL);
  *(_QWORD *)&this->fields.selectSum = 0LL;
  this->fields.selectExp = 0;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  v205 = 0;
  v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v205, v71);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v72, 0LL);
  if ( !nextExpLabel )
    goto LABEL_174;
  UILabel__set_text(nextExpLabel, (System_String_o *)sort, 0LL);
  sort = (__int64)this->fields.spendQpMask;
  if ( !sort )
    goto LABEL_174;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)sort,
                              (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v78 = CombineServantListViewManager_TypeInfo;
  v79 = (UIWidget_o *)Component_srcLineSprite;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v78 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v78->static_fields->COLOR_VAL;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v81 = COLOR_VAL;
  v82 = COLOR_VAL;
  UnityEngine_Color___ctor_41410832(*(UnityEngine_Color_o *)(&v74 - 3), v75, v76, v77, &methoda);
  if ( !v79 )
    goto LABEL_174;
  *(_QWORD *)&v209.fields.r = methoda.methodPointer;
  *(_QWORD *)&v209.fields.b = methoda.invoker_method;
  UIWidget__set_color(v79, v209, 0LL);
  sort = (__int64)this->fields.getExpMask;
  if ( !sort )
    goto LABEL_174;
  v83 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)sort,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v210.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  v210.fields.g = v210.fields.r;
  v210.fields.b = v210.fields.r;
  UnityEngine_Color___ctor_41410832(v210, v84, v85, v86, (const MethodInfo *)&methoda.token);
  if ( !v83 )
    goto LABEL_174;
  UIWidget__set_color(v83, *(UnityEngine_Color_o *)&methoda.token, 0LL);
  sort = (__int64)this->fields.haveQpMask;
  if ( !sort )
    goto LABEL_174;
  v87 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)sort,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v211.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v211.fields.g = v211.fields.r;
  v211.fields.b = v211.fields.r;
  UnityEngine_Color___ctor_41410832(v211, v88, v89, v90, (const MethodInfo *)&methoda.rgctx_data);
  if ( !v87 )
    goto LABEL_174;
  *(_QWORD *)&v212.fields.r = methoda.rgctx_data;
  *(_QWORD *)&v212.fields.b = methoda.genericMethod;
  UIWidget__set_color(v87, v212, 0LL);
  sort = (__int64)this->fields.nextExpMask;
  if ( !sort )
    goto LABEL_174;
  v91 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                        (UnityEngine_GameObject_o *)sort,
                        (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v213.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  v213.fields.g = v213.fields.r;
  v213.fields.b = v213.fields.r;
  UnityEngine_Color___ctor_41410832(v213, v92, v93, v94, (const MethodInfo *)&methoda.return_type);
  if ( !v91 )
    goto LABEL_174;
  UIWidget__set_color(v91, *(UnityEngine_Color_o *)&methoda.return_type, 0LL);
  if ( (unsigned int)type <= 0xB && ((1 << type) & 0xFDD) != 0 )
  {
    sort = (__int64)this->fields.levelUpInfoImg;
    if ( !sort )
      goto LABEL_174;
    sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
    if ( !sort )
      goto LABEL_174;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 0, 0LL);
    sort = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_174;
    sort = (__int64)UserServantMaster__getOrganizationList((UserServantMaster_o *)sort, 0LL);
    if ( !sort )
      goto LABEL_174;
    v95 = sort;
    v193 = *(_DWORD *)(sort + 24);
    if ( v193 <= 0 )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_174;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_174;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
    v96 = this->fields.baseUsrSvtData;
    if ( v96 )
    {
      UserServantEntity__getExpInfo(v96, &lateExp[1], lateExp, &barExp[1], 0LL);
      v97 = this->fields.nextExpLabel;
      LODWORD(methoda.methodPointer) = lateExp[0];
      v99 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda, v98);
      sort = (__int64)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v99, 0LL);
      if ( !v97 )
        goto LABEL_174;
      UILabel__set_text(v97, (System_String_o *)sort, 0LL);
    }
  }
  else
  {
    v193 = 0;
    v95 = 0LL;
  }
  v196 = DeckList;
  if ( type == 1 )
  {
    sort = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_174;
    sort = (__int64)UserServantMaster__getCombineMaterialList((UserServantMaster_o *)sort, 0LL);
    if ( !sort )
      goto LABEL_174;
    v100 = sort;
    v101 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v101,
      (System_Collections_Generic_IEnumerable_T__o *)v100,
      (const MethodInfo_30527CC *)Method_System_Collections_Generic_List_UserServantEntity___ctor___69411152);
    v102 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v102,
      (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( this->fields.baseUsrSvtData )
    {
      if ( !v101 )
        goto LABEL_174;
      size = v101->fields._size;
      if ( size >= 1 )
      {
        v104 = 0;
        do
        {
          if ( size <= (unsigned int)v104 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v105 = v101->fields._items->m_Items[v104];
          if ( !v105 )
            goto LABEL_174;
          v106 = *(_OWORD *)&v105->fields.baseSquare;
          *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&v105->fields.flagNow;
          *(_OWORD *)&methoda.name = v106;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          *(_OWORD *)&v203.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
          *(_OWORD *)&v203.fields.fakeValue = *(_OWORD *)&methoda.name;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v203, 0LL);
          v107 = this->fields.baseUsrSvtData;
          if ( !v107 )
            goto LABEL_174;
          v108 = *(_OWORD *)&v107->fields.id.fields.fakeValue;
          v109 = sort;
          *(_OWORD *)&v202.fields.currentCryptoKey = *(_OWORD *)&v107->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v202.fields.fakeValue = v108;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v202, 0LL);
          if ( v109 == sort )
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v101,
              v104,
              (const MethodInfo_3054F88 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          size = v101->fields._size;
        }
        while ( ++v104 < size );
      }
      sort = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v101,
                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      type = 1;
      v100 = sort;
      if ( !sort )
        goto LABEL_174;
    }
    v193 = *(_DWORD *)(v100 + 24);
    if ( v193 <= 0 )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_174;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_174;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
    sort = (__int64)this->fields.baseUsrSvtData;
    if ( !sort )
      goto LABEL_174;
    v95 = v100;
    UserServantEntity__getExpInfo((UserServantEntity_o *)sort, &lateExp[1], lateExp, &barExp[1], 0LL);
    v110 = this->fields.nextExpLabel;
    LODWORD(methoda.methodPointer) = lateExp[0];
    v112 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda, v111);
    sort = (__int64)System_String__Format((System_String_o *)StringLiteral_24013/*"{0:N0}"*/, v112, 0LL);
    if ( !v110 )
      goto LABEL_174;
    UILabel__set_text(v110, (System_String_o *)sort, 0LL);
  }
  if ( type == 5 )
  {
    v6 = this->fields.baseUsrSvtData;
    if ( v6 )
    {
      sort = (__int64)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_174;
      sort = (__int64)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v6, 0LL);
      if ( !sort )
        goto LABEL_174;
      v113 = *(_DWORD *)(sort + 24);
      v114 = sort;
      v192 = v113;
      if ( v113 <= 0 )
      {
        sort = (__int64)this->fields.emptyListNoticeLabel;
        if ( !sort )
          goto LABEL_174;
        sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
        if ( !sort )
          goto LABEL_174;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
        v113 = v192;
      }
      v193 = v113;
    }
    else
    {
      v114 = v95;
      v192 = 0;
    }
  }
  else
  {
    v192 = 0;
    v114 = v95;
  }
  if ( !this->fields.noticeTween )
  {
    v115 = DeckList;
    v116 = (CombineServantListViewNoticeTween_o *)sub_B77694(CombineServantListViewNoticeTween_TypeInfo);
    CombineServantListViewNoticeTween___ctor(v116, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    v117 = (System_Int32_array **)v116;
    this->fields.noticeTween = v116;
    DeckList = v115;
    sub_B77560((BattleServantConfConponent_o *)&this->fields.noticeTween, v117, v118, v119, v120, v121, v122, v123);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_B77694(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cachedUserServantNpLvDict,
    (const MethodInfo_2FF35C4 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v114 )
LABEL_174:
    sub_B7769C(sort, v6);
  v124 = *(_DWORD *)(v114 + 24);
  if ( v124 >= 1 )
  {
    v125 = 0;
    while ( 1 )
    {
      if ( v125 >= (unsigned int)v124 )
        goto LABEL_175;
      v126 = v114 + 8LL * v125;
      v129 = *(_QWORD *)(v126 + 32);
      v128 = (UserServantEntity_o **)(v126 + 32);
      v127 = v129;
      if ( !v129 )
        goto LABEL_174;
      v200 = v125;
      v130 = *(_OWORD *)(v127 + 32);
      *(_OWORD *)&methoda.methodPointer = *(_OWORD *)(v127 + 16);
      *(_OWORD *)&methoda.name = v130;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      *(_OWORD *)&v201.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
      *(_OWORD *)&v201.fields.fakeValue = *(_OWORD *)&methoda.name;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v201, 0LL);
      if ( !DeckList )
        goto LABEL_174;
      max_length = DeckList->max_length;
      v132 = sort;
      if ( max_length >= 1 )
        break;
LABEL_133:
      v140 = 0;
LABEL_135:
      v199 = v140;
      if ( (type | 4) == 5
        && (selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList) != 0LL
        && (LODWORD(v142) = selectedMaterialUserServantIdList->fields._size, (int)v142 >= 1) )
      {
        v143 = 0;
        v144 = 0;
        v145 = 0LL;
        do
        {
          if ( v145 >= (unsigned int)v142 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          items = selectedMaterialUserServantIdList->fields._items;
          selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
          v147 = items->m_Items[v145];
          v142 = selectedMaterialUserServantIdList->fields._size;
          if ( v147 == sort )
            v144 = v145;
          ++v145;
          if ( v147 == sort )
            v143 = 1;
        }
        while ( (__int64)v145 < v142 );
        v198 = v143;
      }
      else
      {
        v198 = 0;
        v144 = 0;
      }
      if ( v200 >= *(_DWORD *)(v114 + 24) )
        goto LABEL_175;
      v148 = v114;
      v149 = *v128;
      v150 = SelfUserGame;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v152 = sub_B77694(CombineServantListViewItem_TypeInfo);
      CombineServantListViewItem___ctor(
        (CombineServantListViewItem_o *)v152,
        type,
        v200,
        v149,
        v132 == favoriteUserSvtId,
        v199,
        baseUsrSvtData,
        v198,
        setupInfo,
        cachedUserServantNpLvDict,
        v191);
      if ( !v152 )
        goto LABEL_174;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        (CombineServantListViewItem_o *)v152,
        this->fields.eventCampaignEntities,
        v153);
      noticeTween = (System_Int32_array **)this->fields.noticeTween;
      *(_QWORD *)(v152 + 416) = noticeTween;
      sub_B77560((BattleServantConfConponent_o *)(v152 + 416), noticeTween, v155, v156, v157, v158, v159, v160);
      SelfUserGame = v150;
      v114 = v148;
      if ( (type | 4) == 5 && v198 )
      {
        *(_DWORD *)(v152 + 16) = v144;
        v161 = this->fields.selectedMaterialUserServantIdList;
        ++this->fields.selectSum;
        if ( !v161 )
          goto LABEL_174;
        if ( v144 == v161->fields._size - 1 )
          *(_BYTE *)(v152 + 163) = 1;
      }
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_174;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v152,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v125 = v200 + 1;
      sort = ListViewItem__get_IsSelect((ListViewItem_o *)v152, 0LL);
      DeckList = v196;
      if ( (sort & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)v152, v162);
      v124 = *(_DWORD *)(v114 + 24);
      if ( v125 >= v124 )
        goto LABEL_159;
    }
    v133 = 0;
    while ( v133 < max_length )
    {
      v134 = DeckList->m_Items[v133];
      if ( !v134 )
        goto LABEL_174;
      deckInfo = v134->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_174;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_174;
      v137 = svts->max_length;
      for ( i = 0; (int)i < (int)v137; ++i )
      {
        if ( i >= v137 )
          goto LABEL_175;
        v139 = svts->m_Items[i];
        if ( !v139 )
          goto LABEL_174;
        if ( v139->fields.userSvtId == sort )
        {
          v140 = 1;
          goto LABEL_135;
        }
      }
      if ( (int)++v133 >= max_length )
        goto LABEL_133;
    }
LABEL_175:
    v189 = sub_B776C8(sort);
    sub_B77668(v189, 0LL);
  }
LABEL_159:
  CombineServantListViewManager__RefrashListDisp(this, (const MethodInfo *)v6);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v164 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
  LODWORD(methoda.methodPointer) = v193;
  v166 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda, v165);
  methoda.token = SelfUserGame->fields.svtKeep;
  v168 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token, v167);
  sort = (__int64)System_String__Format_44897472(v164, v166, v168, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_174;
  UILabel__set_text(servantInfoLabel, (System_String_o *)sort, 0LL);
  cardInfoLabel = this->fields.cardInfoLabel;
  v170 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
  LODWORD(methoda.rgctx_data) = v193;
  v172 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data, v171);
  LODWORD(methoda.return_type) = SelfUserGame->fields.svtKeep;
  v174 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type, v173);
  sort = (__int64)System_String__Format_44897472(v170, v172, v174, 0LL);
  if ( !cardInfoLabel )
    goto LABEL_174;
  UILabel__set_text(cardInfoLabel, (System_String_o *)sort, 0LL);
  if ( type == 5 )
  {
    v176 = this->fields.servantInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v177 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
    LODWORD(methoda.methodPointer) = v192;
    v179 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda, v178);
    methoda.token = v193;
    v181 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token, v180);
    sort = (__int64)System_String__Format_44897472(v177, v179, v181, 0LL);
    if ( !v176 )
      goto LABEL_174;
    UILabel__set_text(v176, (System_String_o *)sort, 0LL);
    v182 = this->fields.cardInfoLabel;
    v183 = LocalizationManager__Get((System_String_o *)StringLiteral_12702/*"SUM_INFO"*/, 0LL);
    LODWORD(methoda.rgctx_data) = v192;
    v185 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data, v184);
    LODWORD(methoda.return_type) = v193;
    v187 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type, v186);
    sort = (__int64)System_String__Format_44897472(v183, v185, v187, 0LL);
    if ( !v182 )
      goto LABEL_174;
    UILabel__set_text(v182, (System_String_o *)sort, 0LL);
  }
  CombineServantListViewManager__SetMaterialSvtInfo(this, v175);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  CombineServantListViewManager__SetFilterButtonImage(this, v188);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_CallbackFunc___ctor(
        CombineServantListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CombineServantListViewManager_CallbackFunc__BeginInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = kind;
  if ( (byte_4389091 & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager_ResultKind_TypeInfo);
    byte_4389091 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12, list);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_CallbackFunc__Invoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        int32_t kind,
        System_Int32_array *list,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  CombineServantListViewManager_CallbackFunc_o **v8; // x26
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
  void (__fastcall **v19)(__int64 *, _QWORD, System_Int32_array *, _QWORD); // x0
  CombineServantListViewManager_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, System_Int32_array *, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  CombineServantListViewManager_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (CombineServantListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, System_Int32_array *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&kind);
      if ( (sub_B775F4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, list, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, list, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
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
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))sub_B77674(v17, v22);
        (*v19)(v21, v26, list, v19);
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
            v16 = sub_B0F4C0(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))v16)(
            v21,
            v13,
            list,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))(*v21
                                                                                  + 16LL
                                                                                  * *(unsigned __int16 *)(v22 + 72)
                                                                                  + 312))(
            v21,
            v32,
            list,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, System_Int32_array *, __int64))v23)(v21, v32, list, v22);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_RequestCallbackFunc___ctor(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CombineServantListViewManager_RequestCallbackFunc__BeginInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_4389092 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_4389092 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_RequestCallbackFunc__Invoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CombineServantListViewManager_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CombineServantListViewManager_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CombineServantListViewManager_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CombineServantListViewManager_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
}


void __fastcall CombineServantListViewManager___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_438908E & 1) == 0 )
  {
    sub_B775C4(&CombineServantListViewManager___c_TypeInfo);
    byte_438908E = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(CombineServantListViewManager___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)CombineServantListViewManager___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall CombineServantListViewManager___c___ctor(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CombineServantListViewManager___c___AfterCheckMaterial_b__176_0(
        CombineServantListViewManager___c_o *this,
        CombineServantListViewItem_o *a,
        CombineServantListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B7769C(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}


void __fastcall CombineServantListViewManager___c___OnClickSelectMaterial_b__189_0(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineServantListViewManager___c__DisplayClass174_0___ctor(
        CombineServantListViewManager___c__DisplayClass174_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewManager___c__DisplayClass174_0___ModifyList_b__0(
        CombineServantListViewManager___c__DisplayClass174_0_o *this,
        UserServantEntity_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager___c__DisplayClass174_0_o *v4; // x19
  __int128 v5; // q1
  struct CombineServantListViewManager_o *_4__this; // x8
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x21
  __int64 i; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_438908F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_long__get_Item__);
    this = (CombineServantListViewManager___c__DisplayClass174_0_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438908F = 1;
  }
  if ( !item )
    goto LABEL_12;
  v5 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v11.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v11.fields.fakeValue = v5;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v10 = v11;
  this = (CombineServantListViewManager___c__DisplayClass174_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                                     &v10,
                                                                     0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (selectedMaterialUserServantIdList = _4__this->fields.selectedMaterialUserServantIdList) == 0LL )
LABEL_12:
    sub_B7769C(this, item);
  i = v4->fields.i;
  if ( selectedMaterialUserServantIdList->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
  return this == (CombineServantListViewManager___c__DisplayClass174_0_o *)selectedMaterialUserServantIdList->fields._items->m_Items[i];
}


void __fastcall CombineServantListViewManager___c__DisplayClass190_0___ctor(
        CombineServantListViewManager___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass190_0___OnClickSelectPush_b__0(
        CombineServantListViewManager___c__DisplayClass190_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  System_Action_o *_9__1; // x22
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_4389090 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&Method_CombineServantListViewManager___c__DisplayClass190_0__OnClickSelectPush_b__1__);
    byte_4389090 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass190_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.__9__1,
        (System_Int32_array **)_9__1,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
    }
    if ( v7 )
    {
      CommonUI__CloseConfirmDialog_18056328(v7, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B7769C(Instance, v6);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass190_0___OnClickSelectPush_b__1(
        CombineServantListViewManager___c__DisplayClass190_0_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(0LL, method);
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}