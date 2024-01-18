// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int v2; // s3
  float v3; // s4
  float v4; // s5
  float v5; // s6
  __int64 v6; // x1
  CombineServantListViewManager_c *v7; // x8
  int v8; // s2
  int v9; // s0
  int v10; // s1
  CombineServantListViewManager_c *v11; // x8
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UnityEngine_Color_o v20; // [xsp+0h] [xbp-20h] BYREF

  if ( (byte_418A64E & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_4159/*"CombineServant"*/, v6);
    byte_418A64E = 1;
  }
  CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL = 0.375;
  CombineServantListViewManager_TypeInfo->static_fields->FILTER2_MAX_KIND_NUM = 1;
  v7 = CombineServantListViewManager_TypeInfo;
  CombineServantListViewManager_TypeInfo->static_fields->LIMIT_UP_FILTER2_MAX_KIND_NUM = 2;
  v7->static_fields->BASE_SVT_NAME_MAX_WIDTH = 132;
  v8 = 1050790593;
  v7->static_fields->RES_LVUP_ARROW_SPACING = 13;
  v9 = 1065185444;
  v10 = 1064430469;
  v20 = (struct UnityEngine_Color_o)0LL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v2 - 3), v3, v4, v5, (const MethodInfo *)&v20);
  v11 = CombineServantListViewManager_TypeInfo;
  CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR = v20;
  v11->static_fields->SCROLL_TO_ITEM_OFFSET = 4.5;
  static_fields = v11->static_fields;
  v13 = (System_Int32_array **)StringLiteral_4159/*"CombineServant"*/;
  static_fields->SORT_SAVE_KEY = (struct System_String_o *)StringLiteral_4159/*"CombineServant"*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->SORT_SAVE_KEY, v13, v14, v15, v16, v17, v18, v19);
  CombineServantListViewManager_TypeInfo->static_fields->isInitSystem = 0;
}


void __fastcall CombineServantListViewManager___ctor(CombineServantListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CheckCombineResStatus_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_List_long__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_418A64D & 1) == 0 )
  {
    sub_B2C35C(&CheckCombineResStatus_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v4);
    byte_418A64D = 1;
  }
  this->fields.selectMax = 20;
  v5 = (CheckCombineResStatus_o *)sub_B2C42C(CheckCombineResStatus_TypeInfo);
  CheckCombineResStatus___ctor(v5, 0LL);
  this->fields.combineResStatus = v5;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineResStatus,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v12,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.tempMaterialUserServantIdList = v12;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.tempMaterialUserServantIdList,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  this->fields.minimumKeep = 1;
  ListViewManager___ctor((ListViewManager_o *)this, 0LL);
}


void __fastcall CombineServantListViewManager__AfterCheckMaterial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_List_long__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  const MethodInfo *v31; // x1
  int64_t tempMaterialUserServantIdList; // x0
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x20
  System_Collections_Generic_List_long__o *v34; // x0
  System_Collections_Generic_List_long__o *v35; // x22
  _BOOL8 v36; // x0
  __int64 v37; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *current; // x23
  __int64 v39; // x9
  _BOOL8 IsSelect; // x0
  __int64 v41; // x1
  const MethodInfo *v42; // x1
  int64_t UserSvtId; // x0
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x8
  System_Comparison_TitleInfoControl_EventEndTimeInfo__o *_9__175_0; // x23
  Il2CppObject *v46; // x24
  struct CombineServantListViewManager___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_Collections_Generic_List_long__o *v54; // x23
  int size; // w24
  int v56; // w28
  __int64 v57; // x26
  unsigned int v58; // w8
  unsigned int v59; // w21
  __int128 v60; // q0
  __int64 v61; // x8
  struct System_Int64_array *v62; // x0
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  const MethodInfo *v69; // x2
  const MethodInfo *v70; // x2
  const MethodInfo *v71; // x2
  int v72; // w8
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // [xsp+8h] [xbp-B8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418A616 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Comparison_CombineServantListViewItem___ctor__, v3);
    sub_B2C35C(&System_Comparison_CombineServantListViewItem__TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__AddRange__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B2C35C(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21);
    sub_B2C35C(&Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__, v22);
    sub_B2C35C(&CombineServantListViewManager___c_TypeInfo, v23);
    byte_418A616 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  v24 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v24,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  this->fields.selectedMaterialUserServantIdList = v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  tempMaterialUserServantIdList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  System_Collections_Generic_List_long___Clear(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  v34 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v34,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v35 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v35,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  tempMaterialUserServantIdList = (int64_t)this->fields.itemList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v75,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)tempMaterialUserServantIdList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v76.fields.current = (Il2CppObject *)v75.fields.fakeValue;
  *(_OWORD *)&v76.fields.list = *(_OWORD *)&v75.fields.currentCryptoKey;
  while ( 1 )
  {
    v36 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v76,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v36 )
      break;
    current = (EventMissionProgressRequest_Argument_ProgressData_o *)v76.fields.current;
    if ( !v76.fields.current )
      goto LABEL_56;
    v39 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v76.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v39
      || (CombineServantListViewItem_c *)v76.fields.current->klass->_2.typeHierarchy[v39 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B2C728(v76.fields.current);
LABEL_56:
      sub_B2C434(v36, v37);
    }
    IsSelect = ListViewItem__get_IsSelect((ListViewItem_o *)v76.fields.current, 0LL);
    if ( IsSelect )
    {
      if ( !v33 )
        sub_B2C434(IsSelect, v41);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v33,
        current,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      if ( current[3].fields.eventId >= 3 )
      {
        UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v42);
        if ( !v35 )
          sub_B2C434(UserSvtId, UserSvtId);
        System_Collections_Generic_List_long___Add(
          v35,
          UserSvtId,
          (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v76,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  tempMaterialUserServantIdList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
    tempMaterialUserServantIdList = (int64_t)CombineServantListViewManager___c_TypeInfo;
  }
  static_fields = *(struct CombineServantListViewManager___c_StaticFields **)(tempMaterialUserServantIdList + 184);
  _9__175_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)static_fields->__9__175_0;
  if ( !_9__175_0 )
  {
    if ( (*(_BYTE *)(tempMaterialUserServantIdList + 307) & 4) != 0 && !*(_DWORD *)(tempMaterialUserServantIdList + 224) )
    {
      j_il2cpp_runtime_class_init_0(tempMaterialUserServantIdList);
      static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
    }
    v46 = (Il2CppObject *)static_fields->__9;
    _9__175_0 = (System_Comparison_TitleInfoControl_EventEndTimeInfo__o *)sub_B2C42C(System_Comparison_CombineServantListViewItem__TypeInfo);
    System_Comparison_TitleInfoControl_EventEndTimeInfo____ctor(
      _9__175_0,
      v46,
      Method_CombineServantListViewManager___c__AfterCheckMaterial_b__175_0__,
      (const MethodInfo_25D8DF8 *)Method_System_Comparison_CombineServantListViewItem___ctor__);
    v47 = CombineServantListViewManager___c_TypeInfo->static_fields;
    v47->__9__175_0 = (struct System_Comparison_CombineServantListViewItem__o *)_9__175_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v47->__9__175_0,
      (System_Int32_array **)_9__175_0,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
  }
  if ( !v33 )
LABEL_54:
    sub_B2C434(tempMaterialUserServantIdList, v31);
  System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo___Sort(
    (System_Collections_Generic_List_TitleInfoControl_EventEndTimeInfo__o *)v33,
    (System_Comparison_T__o *)_9__175_0,
    (const MethodInfo_2EF653C *)Method_System_Collections_Generic_List_CombineServantListViewItem__Sort__);
  v54 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v54,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  size = v33->fields._size;
  if ( size >= 1 )
  {
    v56 = 0;
    v57 = 4LL;
    v58 = v33->fields._size;
    while ( 1 )
    {
      v59 = v57 - 4;
      if ( v58 <= (int)v57 - 4 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      tempMaterialUserServantIdList = *((_QWORD *)&v33->fields._items->obj.klass + v57);
      if ( !tempMaterialUserServantIdList )
        goto LABEL_54;
      tempMaterialUserServantIdList = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                                                 (CombineServantListViewItem_o *)tempMaterialUserServantIdList,
                                                 v31);
      if ( !tempMaterialUserServantIdList )
        goto LABEL_54;
      v60 = *(_OWORD *)(tempMaterialUserServantIdList + 32);
      *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)(tempMaterialUserServantIdList + 16);
      *(_OWORD *)&v75.fields.fakeValue = v60;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v74 = v75;
      tempMaterialUserServantIdList = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v74, 0LL);
      if ( !v54 )
        goto LABEL_54;
      System_Collections_Generic_List_long___Add(
        v54,
        tempMaterialUserServantIdList,
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
      if ( v33->fields._size <= v59 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v61 = *((_QWORD *)&v33->fields._items->obj.klass + v57);
      if ( !v61 )
        goto LABEL_54;
      if ( *(_DWORD *)(v61 + 148) > v56 )
      {
        if ( v33->fields._size <= v59 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v56 = *(_DWORD *)(v61 + 148);
        if ( v33->fields._size <= v59 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        this->fields.lastSelectIndex = *(_DWORD *)(v61 + 24);
      }
      if ( (int)v57 - 3 >= size )
        break;
      v58 = v33->fields._size;
      ++v57;
    }
  }
  tempMaterialUserServantIdList = (int64_t)this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)v54,
    (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
  tempMaterialUserServantIdList = (int64_t)*p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList )
    goto LABEL_54;
  System_Collections_Generic_List_long___AddRange(
    (System_Collections_Generic_List_long__o *)tempMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)v54,
    (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
  if ( !v35 )
    goto LABEL_54;
  v62 = System_Collections_Generic_List_long___ToArray(
          v35,
          (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  this->fields.highRarityList = v62;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.highRarityList,
    (System_Int32_array **)v62,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  CombineServantListViewManager__setSelectMaterialList(
    this,
    (System_Collections_Generic_List_CombineServantListViewItem__o *)v33,
    v69);
  this->fields.sellEnableRestCnt = 0;
  CombineServantListViewManager__StatusRequest(this, 0LL, v70);
  CombineServantListViewManager__SetStatusKind(this, 0, v71);
  tempMaterialUserServantIdList = (int64_t)this->fields.combineRootComponent;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_54;
  v72 = *(_DWORD *)(tempMaterialUserServantIdList + 428);
  if ( v72 == 11 )
  {
    CombineRootComponent__SelectNpMaterialSvt((CombineRootComponent_o *)tempMaterialUserServantIdList, 0LL);
  }
  else if ( v72 == 3 )
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31A31B0;
  this->fields.isDragSelect = 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__CancelDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x20
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  __int64 v7; // x9
  CombineServantListViewManager_o *v8; // x0
  const MethodInfo *v9; // x1

  v4 = this;
  if ( (byte_418A640 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    this = (CombineServantListViewManager_o *)sub_B2C35C(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v5);
    byte_418A640 = 1;
  }
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_10;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  this = (CombineServantListViewManager_o *)itemSortList->fields._items->m_Items[index];
  if ( !this )
LABEL_10:
    sub_B2C434(this, *(_QWORD *)&index);
  v7 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v7
    && (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[v7 - 1] == CombineServantListViewItem_TypeInfo )
  {
    HIDWORD(this->fields.combineRootComponent) = -1;
  }
  else
  {
    sub_B2C728(this);
    CombineServantListViewManager__GetEventCampaignFinishedAt(v8, v9);
  }
}


bool __fastcall CombineServantListViewManager__CheckIsMaterialSelectSvt(
        CombineServantListViewManager_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  char v10; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_418A626 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, userSvtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    byte_418A626 = 1;
  }
  memset(&v14, 0, sizeof(v14));
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
        &v13,
        selectedMaterialUserServantIdList,
        (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
      v14 = v13;
      while ( System_Collections_Generic_List_Enumerator_long___MoveNext(
                &v14,
                (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__) )
      {
        if ( v14.fields.current == (Il2CppObject *)userSvtId )
        {
          v10 = 1;
          v11 = 5;
          goto LABEL_10;
        }
      }
      v10 = 0;
      v11 = 3;
LABEL_10:
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v14,
        (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      LOBYTE(selectedMaterialUserServantIdList) = (v11 == 5) & v10;
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
  const MethodInfo *v19; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  UnityEngine_GameObject_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x0
  struct UIScrollView_o *scrollView; // x8
  int v24; // s0
  float v27; // s4
  float v28; // s5
  float v29; // s6
  float v30; // s7
  struct UIScrollView_o *v31; // x8
  UIPanel_o *v32; // x23
  int v33; // s2
  UnityEngine_GameObject_o *v34; // x0
  struct UIScrollView_o *v35; // x8
  struct UIScrollView_o *v36; // x8
  CombineServantListViewManager_c *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct ListViewSort_array *sortStatusList; // x8
  System_Int32_array **v45; // x1
  struct ListViewSort_o **p_sort; // x23
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct System_Int32_array *servantFilterEventIdList; // x8
  bool v54; // w25
  struct System_Int32_array *servantFilterIdList; // x8
  bool v56; // w26
  _BOOL8 v57; // x0
  __int64 v58; // x1
  char v59; // w24
  System_Int32_array **v60; // x1
  System_Int32_array **v61; // x1
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **eventCampaignIdList; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  System_Int32_array **eventCampaignServantIdList; // x1
  System_String_array **v76; // x2
  System_String_array **v77; // x3
  System_Boolean_array **v78; // x4
  System_Int32_array **v79; // x5
  System_Int32_array *v80; // x6
  System_Int32_array *v81; // x7
  bool isBonusKind; // w1
  const MethodInfo *v83; // x2
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x1
  const MethodInfo *v86; // x3
  UILabel_o *getExpInfoLabel; // x21
  __int64 *v88; // x8
  struct ListViewSort_o *sort; // x8
  int32_t expUpDispKind; // w24
  int32_t expUpDispType; // w25
  CombineExpUpInfo_o *combineMaterialNumInfo; // x23
  System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *v93; // x26
  const MethodInfo *v94; // x2
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x1
  const MethodInfo *v97; // x2
  const MethodInfo *v98; // x1
  const MethodInfo *v99; // x3
  UILabel_o *spendQpInfoLabel; // x21
  __int64 v101; // x0
  MethodInfo methoda; // [xsp+8h] [xbp-88h] BYREF
  UnityEngine_Vector2_o v103; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o v104; // 0:s0.4,4:s1.4
  UnityEngine_Vector4_o v105; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v8 = this;
  if ( (byte_418A5FE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__, *(_QWORD *)&type);
    sub_B2C35C(&System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo, v9);
    sub_B2C35C(&Method_CombineServantListViewManager_OnClickChangeExpInfo__, v10);
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_int____get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int____GetEnumerator__, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_6859/*"GET_EXP_INFO"*/, v17);
    this = (CombineServantListViewManager_o *)sub_B2C35C(&StringLiteral_9272/*"NEED_QP_INFO"*/, v18);
    byte_418A5FE = 1;
  }
  memset(&methoda.klass, 0, 24);
  if ( !setupInfo )
    goto LABEL_117;
  EventUpValSetupInfo__AnalyzeInfoCampaign(setupInfo, 0LL);
  CombineServantListViewManager__SetEventCamapignEntity(v8, type, v19);
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
  v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( type == 11 )
  {
    GameObjectExtensions__SetLocalPositionX(v21, 492.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_117;
    v22 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v103.fields.y = -70.0;
    v103.fields.x = -11.0;
    GameObjectExtensions__SetLocalPosition_31325816(v22, v103, 0LL);
    scrollView = v8->fields.scrollView;
    if ( !scrollView )
      goto LABEL_117;
    this = *(CombineServantListViewManager_o **)&scrollView->fields.mPlane.fields.m_Normal.fields.x;
    if ( !this )
      goto LABEL_117;
    *(UnityEngine_Vector4_o *)&v24 = UIPanel__get_clipRange((UIPanel_o *)this, 0LL);
    v31 = v8->fields.scrollView;
    if ( !v31 )
      goto LABEL_117;
    v32 = *(UIPanel_o **)&v31->fields.mPlane.fields.m_Normal.fields.x;
    v33 = 1148026880;
  }
  else
  {
    GameObjectExtensions__SetLocalPositionX(v21, 399.0, 0LL);
    this = (CombineServantListViewManager_o *)v8->fields.servantListView;
    if ( !this )
      goto LABEL_117;
    v34 = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)this, 0LL);
    v104.fields.x = -101.0;
    v104.fields.y = -70.0;
    GameObjectExtensions__SetLocalPosition_31325816(v34, v104, 0LL);
    v35 = v8->fields.scrollView;
    if ( !v35 )
      goto LABEL_117;
    this = *(CombineServantListViewManager_o **)&v35->fields.mPlane.fields.m_Normal.fields.x;
    if ( !this )
      goto LABEL_117;
    *(UnityEngine_Vector4_o *)&v24 = UIPanel__get_clipRange((UIPanel_o *)this, 0LL);
    v36 = v8->fields.scrollView;
    if ( !v36 )
      goto LABEL_117;
    v32 = *(UIPanel_o **)&v36->fields.mPlane.fields.m_Normal.fields.x;
    v33 = 1145077760;
  }
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  UnityEngine_Vector4___ctor(*(UnityEngine_Vector4_o *)&v24, v27, v28, v29, v30, &methoda);
  if ( !v32 )
    goto LABEL_117;
  *(_QWORD *)&v105.fields.x = methoda.methodPointer;
  *(_QWORD *)&v105.fields.z = methoda.invoker_method;
  UIPanel__set_clipRange(v32, v105, 0LL);
  v8->fields.currentType = type;
  v37 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v37);
  sortStatusList = CombineServantListViewManager_TypeInfo->static_fields->sortStatusList;
  if ( !sortStatusList )
    goto LABEL_117;
  if ( sortStatusList->max_length <= type )
  {
    v101 = sub_B2C460(this);
    sub_B2C400(v101, 0LL);
  }
  v45 = (System_Int32_array **)sortStatusList->m_Items[type];
  v8->fields.sort = (struct ListViewSort_o *)v45;
  p_sort = &v8->fields.sort;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.sort, v45, v38, v39, v40, v41, v42, v43);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
    goto LABEL_117;
  ListViewSort__Load((ListViewSort_o *)this, 0LL);
  *(_OWORD *)&v8->fields.dragSelectSum = xmmword_31A31B0;
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
  v54 = servantFilterEventIdList && servantFilterEventIdList->max_length != 0;
  servantFilterIdList = setupInfo->fields.servantFilterIdList;
  v56 = servantFilterIdList && servantFilterIdList->max_length != 0;
  this = (CombineServantListViewManager_o *)setupInfo->fields.eventCampaignServantIdList;
  if ( this )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_int____GetEnumerator__);
    methoda.parameters = methoda.name;
    *(_OWORD *)&methoda.klass = *(_OWORD *)&methoda.methodPointer;
    while ( 1 )
    {
      v57 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_int____MoveNext__);
      if ( !v57 )
        break;
      if ( !methoda.parameters )
        sub_B2C434(v57, v58);
      if ( *((_QWORD *)methoda.parameters + 3) )
      {
        v59 = 1;
        goto LABEL_47;
      }
    }
    v59 = 0;
LABEL_47:
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.klass,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_int____Dispose__);
  }
  else
  {
    v59 = 0;
  }
  if ( !*p_sort )
    goto LABEL_117;
  (*p_sort)->fields.isBonusKind = (v56 || v54) | v59 & (setupInfo->fields.eventCampaignServantIdList != 0LL);
  v60 = (System_Int32_array **)setupInfo->fields.servantFilterEventIdList;
  v8->fields.bonusEventIdList = (struct System_Int32_array *)v60;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.bonusEventIdList, v60, v47, v48, v49, v50, v51, v52);
  v61 = (System_Int32_array **)setupInfo->fields.servantFilterIdList;
  v8->fields.servantFilterIdList = (struct System_Int32_array *)v61;
  sub_B2C2F8((BattleServantConfConponent_o *)&v8->fields.servantFilterIdList, v61, v62, v63, v64, v65, v66, v67);
  eventCampaignIdList = (System_Int32_array **)setupInfo->fields.eventCampaignIdList;
  v8->fields.eventCampaignIdList = (struct System_Int32_array *)eventCampaignIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v8->fields.eventCampaignIdList,
    eventCampaignIdList,
    v69,
    v70,
    v71,
    v72,
    v73,
    v74);
  eventCampaignServantIdList = (System_Int32_array **)setupInfo->fields.eventCampaignServantIdList;
  v8->fields.eventCampaignServantIdList = (struct System_Collections_Generic_List_int____o *)eventCampaignServantIdList;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v8->fields.eventCampaignServantIdList,
    eventCampaignServantIdList,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  this = (CombineServantListViewManager_o *)v8->fields.sort;
  if ( !this )
LABEL_117:
    sub_B2C434(this, *(_QWORD *)&type);
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
    v93 = (System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *)sub_B2C42C(System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__TypeInfo);
    System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType____ctor(
      v93,
      (Il2CppObject *)v8,
      Method_CombineServantListViewManager_OnClickChangeExpInfo__,
      (const MethodInfo_24C8A70 *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___ctor__);
    if ( !combineMaterialNumInfo )
      goto LABEL_117;
    if ( !CombineExpUpInfo__ExpUpInfoSet(combineMaterialNumInfo, expUpDispKind, expUpDispType, 1, v93, 0LL) )
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
    CombineServantListViewManager__setDispActive(v8, 0, v83);
    CombineServantListViewManager__setBtnEnable(v8, 0, v94);
    CombineServantListViewManager__setServantList(v8, type, setupInfo, v95);
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
    CombineServantListViewManager__ResetCombineViewInfoLayout(v8, v96);
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
    CombineServantListViewManager__setDispActive(v8, 1, v83);
    CombineServantListViewManager__setBtnEnable(v8, 0, v97);
    CombineServantListViewManager__setCombineViewInfo(v8, v98);
    v8->fields.selectMax = 20;
    CombineServantListViewManager__setServantList(v8, 1, setupInfo, v99);
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
    this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)StringLiteral_9272/*"NEED_QP_INFO"*/, 0LL);
    if ( !spendQpInfoLabel )
      goto LABEL_117;
    UILabel__set_text(spendQpInfoLabel, (System_String_o *)this, 0LL);
    getExpInfoLabel = v8->fields.getExpInfoLabel;
    v88 = &StringLiteral_6859/*"GET_EXP_INFO"*/;
    goto LABEL_115;
  }
  if ( type == 5 )
  {
    CombineServantListViewManager__setDispActive(v8, 1, v83);
    CombineServantListViewManager__setBtnEnable(v8, 0, v84);
    CombineServantListViewManager__setCombineViewInfo(v8, v85);
    v8->fields.selectMax = 4;
    CombineServantListViewManager__setServantList(v8, 5, setupInfo, v86);
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
    v88 = &StringLiteral_9272/*"NEED_QP_INFO"*/;
LABEL_115:
    this = (CombineServantListViewManager_o *)LocalizationManager__Get((System_String_o *)*v88, 0LL);
    if ( getExpInfoLabel )
    {
      UILabel__set_text(getExpInfoLabel, (System_String_o *)this, 0LL);
      goto LABEL_105;
    }
    goto LABEL_117;
  }
LABEL_105:
  CombineServantListViewManager__SetStatusKind(v8, modeKind, v83);
}


void __fastcall CombineServantListViewManager__CreateSorteData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  CombineServantListViewManager_c *v4; // x0
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  CombineServantListViewManager_c *v12; // x8
  System_Int32_array **v13; // x19
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  CombineServantListViewManager_c *v15; // x0
  unsigned __int64 v16; // x22
  __int64 v17; // x23
  int v18; // w8
  struct CombineServantListViewManager_StaticFields *v19; // x8
  unsigned int *sortStatusList; // x25
  System_String_o *SORT_SAVE_KEY; // x19
  System_String_o *v22; // x0
  System_String_o *v23; // x20
  ListViewSort_o *v24; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  unsigned int v33; // w9
  __int64 v34; // x0
  __int64 v35; // x0
  int v36; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_418A5F8 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, v1);
    sub_B2C35C(&ListViewSort___TypeInfo, v2);
    sub_B2C35C(&ListViewSort_TypeInfo, v3);
    byte_418A5F8 = 1;
  }
  v36 = 0;
  v4 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v4 = CombineServantListViewManager_TypeInfo;
  }
  if ( !v4->static_fields->isInitSystem )
  {
    v5 = sub_B2C374(ListViewSort___TypeInfo, 12LL);
    v12 = CombineServantListViewManager_TypeInfo;
    v13 = (System_Int32_array **)v5;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v12 = CombineServantListViewManager_TypeInfo;
    }
    static_fields = v12->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v13;
    sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->sortStatusList, v13, v6, v7, v8, v9, v10, v11);
    v15 = CombineServantListViewManager_TypeInfo;
    v16 = -1LL;
    v17 = 8LL;
    v18 = (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v18 & 1) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CombineServantListViewManager_TypeInfo;
      }
      v19 = v15->static_fields;
      sortStatusList = (unsigned int *)v19->sortStatusList;
      SORT_SAVE_KEY = v19->SORT_SAVE_KEY;
      v36 = v16 + 2;
      v22 = System_Int32__ToString((int32_t)&v36, 0LL);
      v23 = System_String__Concat_44305532(SORT_SAVE_KEY, v22, 0LL);
      v24 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
      ListViewSort___ctor_33914184(v24, v23, 3, 0, 0LL);
      if ( !sortStatusList )
        sub_B2C434(v25, v26);
      if ( v24 )
      {
        v25 = sub_B2C41C(v24, *(_QWORD *)(*(_QWORD *)sortStatusList + 64LL));
        if ( !v25 )
        {
          v35 = sub_B2C454(0LL);
          sub_B2C400(v35, 0LL);
        }
      }
      if ( v16 + 1 >= sortStatusList[6] )
      {
        v34 = sub_B2C460(v25);
        sub_B2C400(v34, 0LL);
      }
      *(_QWORD *)&sortStatusList[v17] = v24;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&sortStatusList[v17],
        (System_Int32_array **)v24,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v15 = CombineServantListViewManager_TypeInfo;
      ++v16;
      v17 += 2LL;
      v33 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v18 = (v33 >> 10) & 1;
    }
    while ( v16 < 0xB );
    if ( (v33 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v15 = CombineServantListViewManager_TypeInfo;
    }
    v15->static_fields->isInitSystem = 1;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__DecideDragSelect(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x21
  ListViewItem_o *v11; // x19
  __int64 v12; // x9
  _BOOL4 isDragSelect; // w21
  bool IsSelect; // w0
  const MethodInfo *v15; // x3
  int32_t selectSum; // w8
  int32_t selectNum; // w21
  const MethodInfo *v18; // x3
  int32_t klass; // w9
  _BOOL8 v20; // x0
  __int64 v21; // x1
  void *v22; // x0
  int v23; // w1
  __int64 v24; // x20
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_418A63F & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    this = (CombineServantListViewManager_o *)sub_B2C35C(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v9);
    byte_418A63F = 1;
  }
  memset(&v25, 0, sizeof(v25));
  itemSortList = v4->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_24;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_24;
  v12 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) >= (unsigned int)v12
    && (CombineServantListViewItem_c *)v11->klass->_2.typeHierarchy[v12 - 1] == CombineServantListViewItem_TypeInfo )
  {
    if ( SLODWORD(v11[2].fields.basePosition.fields.z) < 1 )
      goto LABEL_22;
    isDragSelect = v4->fields.isDragSelect;
    IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
    if ( isDragSelect )
    {
      if ( !IsSelect )
      {
        selectSum = v4->fields.selectSum;
        if ( selectSum < v4->fields.selectMax )
        {
          v11->fields.selectNum = selectSum;
          ++v4->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v11, v15);
        }
      }
      goto LABEL_22;
    }
    if ( !IsSelect )
      goto LABEL_22;
    selectNum = v11->fields.selectNum;
    ListViewItem__set_IsSelect(v11, 0, 0LL);
    BYTE2(v11[1].fields.sortValue1) = 0;
    --v4->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(v4, 1, (CombineServantListViewItem_o *)v11, v18);
    this = (CombineServantListViewManager_o *)v4->fields.itemList;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v25,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v20 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v25,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v20 )
          break;
        if ( !v25.fields.current )
          sub_B2C434(v20, v21);
        klass = (int32_t)v25.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v25.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v25,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_22;
    }
LABEL_24:
    sub_B2C434(this, *(_QWORD *)&index);
  }
  sub_B2C728(v11);
  if ( v23 != 1 )
    _Unwind_Resume(v22);
  v24 = *(_QWORD *)__cxa_begin_catch(v22);
  __cxa_end_catch();
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v25,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  if ( v24 )
    sub_B2C400(v24, 0LL);
LABEL_22:
  v11[2].fields.basePosition.fields.z = NAN;
}


void __fastcall CombineServantListViewManager__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineServantListViewManager_c *v2; // x0
  __int64 v3; // x1
  __int64 v4; // x20
  ListViewSort_o *v5; // x0
  __int64 v6; // x8
  __int64 v7; // x0

  if ( (byte_418A5F9 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, v1);
    byte_418A5F9 = 1;
  }
  v2 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
  }
  CombineServantListViewManager__CreateSorteData((const MethodInfo *)v2);
  v4 = 0LL;
  do
  {
    v5 = (ListViewSort_o *)CombineServantListViewManager_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v5 = (ListViewSort_o *)CombineServantListViewManager_TypeInfo;
    }
    v6 = *(_QWORD *)&v5[1].klass->_1.this_arg.bits;
    if ( !v6 )
      goto LABEL_15;
    if ( (unsigned int)v4 >= *(_DWORD *)(v6 + 24) )
    {
      v7 = sub_B2C460(v5);
      sub_B2C400(v7, 0LL);
    }
    v5 = *(ListViewSort_o **)(v6 + 8 * v4 + 32);
    if ( !v5 )
LABEL_15:
      sub_B2C434(v5, v3);
    ListViewSort__DeleteContinueData(v5, 0LL);
    ++v4;
  }
  while ( (unsigned int)(v4 - 1) < 0xB );
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
    sub_B2C434(0LL, v3);
  ListViewSort__Save(sort, 0LL);
  this->fields.bonusEventIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bonusEventIdList, 0LL, v5, v6, v7, v8, v9, v10);
  this->fields.servantFilterIdList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.servantFilterIdList, 0LL, v11, v12, v13, v14, v15, v16);
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
  CombineServantListViewManager__SetMode_30036488(this, 2, v4);
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
  CombineServantListViewManager__SetMode_30036488(this, 2, v6);
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
  CombineServantListViewManager__SetMode_30036488(this, 2, v6);
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
  CombineServantListViewManager__SetMode_30036488(this, 2, v5);
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
  CombineServantListViewManager__SetMode_30036488(this, 2, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  ListViewSort_o *sort; // x0
  const MethodInfo *v8; // x1
  CommonUI_o *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_418A628 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_CombineServantListViewManager_EndCloseSelectFilterKind__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418A628 = 1;
  }
  if ( isDecide )
  {
    sort = this->fields.sort;
    if ( !sort )
      goto LABEL_8;
    ListViewSort__Save(sort, 0LL);
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
    CombineServantListViewManager__SetFilterButtonImage(this, v8);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_CombineServantListViewManager_EndCloseSelectFilterKind__, 0LL);
  if ( !Instance )
LABEL_8:
    sub_B2C434(sort, isDecide);
  CommonUI__CloseServantFilterSelectMenu(Instance, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__EndSelectSortKind(
        CombineServantListViewManager_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CombineServantListViewNoticeTween_o *noticeTween; // x0

  if ( (byte_418A62D & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDecide);
    byte_418A62D = 1;
  }
  if ( isDecide )
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  noticeTween = this->fields.noticeTween;
  if ( !noticeTween
    || (CombineServantListViewNoticeTween__Start(noticeTween, 0LL),
        (noticeTween = (CombineServantListViewNoticeTween_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_B2C434(noticeTween, isDecide);
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
    sub_B2C2F8(p_requestCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x25
  int size; // w22
  int v9; // w23
  int64_t v10; // x21
  __int64 v11; // x9
  int64_t result; // x0
  CombineServantListViewItem_o *v13; // x0
  System_Collections_Generic_List_EventCampaignEntity__o *v14; // x1
  const MethodInfo *v15; // x2

  v3 = svtId;
  v4 = this;
  if ( (byte_418A632 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&svtId);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    this = (CombineServantListViewManager_o *)sub_B2C35C(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v6);
    byte_418A632 = 1;
  }
  itemList = v4->fields.itemList;
  if ( !itemList )
LABEL_15:
    sub_B2C434(this, *(_QWORD *)&svtId);
  size = itemList->fields._size;
  if ( size < 1 )
  {
    return 0LL;
  }
  else
  {
    v9 = 0;
    v10 = 0LL;
    while ( 1 )
    {
      if ( itemList->fields._size <= (unsigned int)v9 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      this = (CombineServantListViewManager_o *)itemList->fields._items->m_Items[v9];
      if ( !this )
        goto LABEL_15;
      *(_QWORD *)&svtId = CombineServantListViewItem_TypeInfo;
      v11 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v11
        || (CombineServantListViewItem_c *)this->klass->_2.typeHierarchy[v11 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      ++v9;
      if ( LODWORD(this->fields.listDragPrefab) == v3 )
        ++v10;
      if ( v9 >= size )
        return v10;
      itemList = v4->fields.itemList;
      if ( !itemList )
        goto LABEL_15;
    }
    sub_B2C728(this);
    CombineServantListViewItem__SetIsCombineExpCampaignTarget(v13, v14, v15);
  }
  return result;
}


int32_t __fastcall CombineServantListViewManager__GetBaseCollectionLimitCnt(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  __int64 v7; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  UserServantCollectionMaster_o *v10; // x20
  struct UserServantEntity_o *v11; // x8
  int64_t v12; // x19
  __int64 v13; // x21
  __int64 v14; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_418A609 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A609 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_17;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL);
  v11 = this->fields.baseUsrSvtData;
  if ( !v11 )
    goto LABEL_17;
  v12 = Instance;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v10 )
LABEL_17:
    sub_B2C434(Instance, v7);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v10, v12, Instance, 0LL);
  if ( EntityDefinitely )
    return EntityDefinitely->fields.maxLimitCount;
  else
    return -1;
}


int32_t __fastcall CombineServantListViewManager__GetBaseCollectionLv(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int64_t Instance; // x0
  __int64 v7; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  UserServantCollectionMaster_o *v10; // x20
  struct UserServantEntity_o *v11; // x8
  int64_t v12; // x19
  __int64 v13; // x21
  __int64 v14; // x22
  UserServantCollectionEntity_o *EntityDefinitely; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v18; // [xsp+20h] [xbp-40h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_418A60A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A60A = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_16;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.fakeValue;
  v10 = (UserServantCollectionMaster_o *)Instance;
  *(_OWORD *)&v18.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.userId.fields.currentCryptoKey;
  *(_OWORD *)&v18.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v17 = v18;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v17, 0LL);
  v11 = this->fields.baseUsrSvtData;
  if ( !v11 )
    goto LABEL_16;
  v12 = Instance;
  v14 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v13 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v19.fields.currentCryptoKey = v14;
  *(_QWORD *)&v19.fields.fakeValue = v13;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v19, 0LL);
  if ( !v10 )
LABEL_16:
    sub_B2C434(Instance, v7);
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v10, v12, Instance, 0LL);
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
    sub_B2C434(0LL, v3);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *eventCampaignEntities; // x24
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x21
  __int64 v11; // x22
  struct System_Single_array *coordinate; // x20
  int size; // w8
  EventCampaignEntity_o *v14; // x8
  WarEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A643 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__get_Item__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A643 = 1;
  }
  entity = 0LL;
  if ( !this->fields.eventCampaignEntities )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___),
        (eventCampaignEntities = this->fields.eventCampaignEntities) == 0LL) )
  {
LABEL_20:
    sub_B2C434(Instance, v8);
  }
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
  v11 = 0LL;
  coordinate = 0LL;
  while ( 1 )
  {
    size = eventCampaignEntities->fields._size;
    if ( (int)v11 >= size )
      return (int64_t)coordinate;
    if ( size <= (unsigned int)v11 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = eventCampaignEntities->fields._items->m_Items[v11];
    if ( v14 && v10 )
    {
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    v10,
                                    &entity,
                                    v14->fields.eventId,
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_EventMaster__EventEntity__int__TryGetEntity__);
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
      ++v11;
      if ( eventCampaignEntities )
        continue;
    }
    goto LABEL_20;
  }
}


// local variable allocation has failed, the output may be wrong!
CombineServantListViewItem_o *__fastcall CombineServantListViewManager__GetItem(
        CombineServantListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x20
  CombineServantListViewItem_o *result; // x0
  __int64 v8; // x9

  if ( (byte_418A60B & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    byte_418A60B = 1;
  }
  itemList = this->fields.itemList;
  if ( !itemList )
    return 0LL;
  if ( itemList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  result = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[index];
  if ( result )
  {
    v8 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&result->klass->_2.bitflags2 + 1) < (unsigned int)v8
      || (CombineServantListViewItem_c *)result->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B2C728(result);
      return 0LL;
    }
  }
  return result;
}


UserServantEntity_o *__fastcall CombineServantListViewManager__GetSelectBaseSvtData(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v9; // q1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *v10; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v13; // [xsp+20h] [xbp-30h]

  if ( (byte_418A608 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v3);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_418A608 = 1;
  }
  if ( !this->fields.baseUsrSvtData )
    return 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_13;
  v9 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
  v10 = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance;
  *(_OWORD *)&v13.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v13.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v12 = v13;
  Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v12, 0LL);
  if ( !v10 )
LABEL_13:
    sub_B2C434(Instance, v7);
  return DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
           v10,
           (int64_t)Instance,
           (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
}


System_Collections_Generic_List_CombineServantListViewItem__o *__fastcall CombineServantListViewManager__GetSelectMaterialItemList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  _BOOL8 IsSelect; // x0
  __int64 v10; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x21
  int size; // w22
  unsigned int v13; // w23
  ListViewItem_o *v14; // x21
  __int64 v15; // x9
  CombineServantListViewManager_o *v17; // x0
  System_Collections_Generic_List_CombineServantListViewItem__o *v18; // x1
  System_Collections_Generic_List_long__o **v19; // x2
  const MethodInfo *v20; // x3

  if ( (byte_418A618 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v6);
    sub_B2C35C(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v7);
    byte_418A618 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
LABEL_16:
    sub_B2C434(IsSelect, v10);
  size = itemList->fields._size;
  if ( size < 1 )
    return (System_Collections_Generic_List_CombineServantListViewItem__o *)v8;
  v13 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v13 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v14 = itemList->fields._items->m_Items[v13];
    if ( !v14 )
      goto LABEL_16;
    v15 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v14->klass->_2.bitflags2 + 1) < (unsigned int)v15
      || (CombineServantListViewItem_c *)v14->klass->_2.typeHierarchy[v15 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    IsSelect = ListViewItem__get_IsSelect(v14, 0LL);
    if ( IsSelect )
    {
      if ( !v8 )
        goto LABEL_16;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v8,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
    }
    if ( (int)++v13 >= size )
      return (System_Collections_Generic_List_CombineServantListViewItem__o *)v8;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_16;
  }
  sub_B2C728(v14);
  return (System_Collections_Generic_List_CombineServantListViewItem__o *)CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                                                            v17,
                                                                            v18,
                                                                            v19,
                                                                            v20);
}


int32_t __fastcall CombineServantListViewManager__GetSortKind(int32_t type, const MethodInfo *method)
{
  CombineServantListViewManager_c *v3; // x0
  struct ListViewSort_array *sortStatusList; // x8
  ListViewSort_o *v5; // x8
  __int64 v7; // x0

  if ( (byte_418A5FB & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, method);
    byte_418A5FB = 1;
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
    v7 = sub_B2C460(v3);
    sub_B2C400(v7, 0LL);
  }
  v5 = sortStatusList->m_Items[type];
  if ( !v5 )
LABEL_10:
    sub_B2C434(v3, method);
  return v5->fields.sortKind;
}


bool __fastcall CombineServantListViewManager__GetSwapChoiceList(
        CombineServantListViewManager_o *this,
        System_Int64_array **choiceList,
        System_Int64_array **unchoiceList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_long__o *v13; // x23
  System_Collections_Generic_List_long__o *v14; // x22
  int64_t UserSvtEntity; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v25; // w26
  CombineServantListViewItem_o *v26; // x24
  __int64 v27; // x9
  _BOOL4 isChoice; // w20
  __int128 v29; // q0
  const MethodInfo_2F6CFA8 *v30; // x2
  int64_t v31; // x1
  System_Collections_Generic_List_long__o *v32; // x0
  __int128 v33; // q0
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int64_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  bool result; // w0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  CombineServantListViewManager_o *v55; // x0
  const MethodInfo *v56; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+50h] [xbp-70h]

  if ( (byte_418A62F & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, choiceList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_418A62F = 1;
  }
  v13 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v13 && v14 )
    {
      if ( v14->fields._size + v13->fields._size < 1 )
      {
        *choiceList = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)choiceList, 0LL, v17, v18, v19, v20, v21, v22);
        *unchoiceList = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)unchoiceList, 0LL, v49, v50, v51, v52, v53, v54);
        return 0;
      }
      else
      {
        v34 = System_Collections_Generic_List_long___ToArray(
                v13,
                (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *choiceList = v34;
        sub_B2C2F8((BattleServantConfConponent_o *)choiceList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
        v41 = System_Collections_Generic_List_long___ToArray(
                v14,
                (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unchoiceList = v41;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)unchoiceList,
          (System_Int32_array **)v41,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
        return 1;
      }
    }
LABEL_34:
    sub_B2C434(UserSvtEntity, v16);
  }
  v25 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v26 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v25];
    if ( !v26 )
      goto LABEL_34;
    v27 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (CombineServantListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                               v26,
                               (const MethodInfo *)CombineServantListViewItem_TypeInfo);
    if ( UserSvtEntity && v26->fields.isSwapChoice )
    {
      isChoice = v26->fields.isChoice;
      UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v26, v16);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isChoice )
      {
        v29 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v61.fields.fakeValue = v29;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v60 = v61;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v60, 0LL);
        if ( !v14 )
          goto LABEL_34;
        v30 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
        v31 = UserSvtEntity;
        v32 = v14;
      }
      else
      {
        v33 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v61.fields.fakeValue = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v59 = v61;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v59, 0LL);
        if ( !v13 )
          goto LABEL_34;
        v30 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
        v31 = UserSvtEntity;
        v32 = v13;
      }
      System_Collections_Generic_List_long___Add(v32, v31, v30);
    }
    if ( (int)++v25 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B2C728(v26);
  CombineServantListViewManager__OnClickSortAscendingOrder(v55, v56);
  return result;
}


bool __fastcall CombineServantListViewManager__GetSwapLockList(
        CombineServantListViewManager_o *this,
        System_Int64_array **lockList,
        System_Int64_array **unlockList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_long__o *v13; // x23
  System_Collections_Generic_List_long__o *v14; // x22
  int64_t UserSvtEntity; // x0
  const MethodInfo *v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x24
  int size; // w25
  unsigned int v25; // w26
  CombineServantListViewItem_o *v26; // x24
  __int64 v27; // x9
  _BOOL4 isLock; // w20
  __int128 v29; // q0
  const MethodInfo_2F6CFA8 *v30; // x2
  int64_t v31; // x1
  System_Collections_Generic_List_long__o *v32; // x0
  __int128 v33; // q0
  System_Int64_array *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int64_array *v41; // x0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  CombineServantListViewManager_o *v55; // x0
  System_Int64_array **v56; // x1
  System_Int64_array **v57; // x2
  const MethodInfo *v58; // x3
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+10h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+30h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+50h] [xbp-70h]

  if ( (byte_418A62E & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, lockList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    byte_418A62E = 1;
  }
  v13 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v13,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  v14 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v14,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_34;
  size = itemList->fields._size;
  if ( size < 1 )
  {
LABEL_29:
    if ( v13 && v14 )
    {
      if ( v14->fields._size + v13->fields._size < 1 )
      {
        *lockList = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)lockList, 0LL, v17, v18, v19, v20, v21, v22);
        *unlockList = 0LL;
        sub_B2C2F8((BattleServantConfConponent_o *)unlockList, 0LL, v49, v50, v51, v52, v53, v54);
        return 0;
      }
      else
      {
        v34 = System_Collections_Generic_List_long___ToArray(
                v13,
                (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *lockList = v34;
        sub_B2C2F8((BattleServantConfConponent_o *)lockList, (System_Int32_array **)v34, v35, v36, v37, v38, v39, v40);
        v41 = System_Collections_Generic_List_long___ToArray(
                v14,
                (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        *unlockList = v41;
        sub_B2C2F8((BattleServantConfConponent_o *)unlockList, (System_Int32_array **)v41, v42, v43, v44, v45, v46, v47);
        return 1;
      }
    }
LABEL_34:
    sub_B2C434(UserSvtEntity, v16);
  }
  v25 = 0;
  while ( 1 )
  {
    if ( itemList->fields._size <= v25 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v26 = (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v25];
    if ( !v26 )
      goto LABEL_34;
    v27 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v26->klass->_2.bitflags2 + 1) < (unsigned int)v27
      || (CombineServantListViewItem_c *)v26->klass->_2.typeHierarchy[v27 - 1] != CombineServantListViewItem_TypeInfo )
    {
      break;
    }
    UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                               v26,
                               (const MethodInfo *)CombineServantListViewItem_TypeInfo);
    if ( UserSvtEntity && v26->fields.isSwapLock )
    {
      isLock = v26->fields.isLock;
      UserSvtEntity = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v26, v16);
      if ( !UserSvtEntity )
        goto LABEL_34;
      if ( isLock )
      {
        v29 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v63.fields.fakeValue = v29;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v62 = v63;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v62, 0LL);
        if ( !v14 )
          goto LABEL_34;
        v30 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
        v31 = UserSvtEntity;
        v32 = v14;
      }
      else
      {
        v33 = *(_OWORD *)(UserSvtEntity + 32);
        *(_OWORD *)&v63.fields.currentCryptoKey = *(_OWORD *)(UserSvtEntity + 16);
        *(_OWORD *)&v63.fields.fakeValue = v33;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v61 = v63;
        UserSvtEntity = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v61, 0LL);
        if ( !v13 )
          goto LABEL_34;
        v30 = (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__;
        v31 = UserSvtEntity;
        v32 = v13;
      }
      System_Collections_Generic_List_long___Add(v32, v31, v30);
    }
    if ( (int)++v25 >= size )
      goto LABEL_29;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_34;
  }
  sub_B2C728(v26);
  return CombineServantListViewManager__GetSwapChoiceList(v55, v56, v57, v58);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall CombineServantListViewManager__GetTutorialFoucsObj(
        CombineServantListViewManager_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  bool v9; // zf
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  _BOOL8 v12; // x0
  __int64 v13; // x1
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  __int64 v15; // x1
  CombineServantListViewObject_o *v16; // x19
  CombineServantListViewItem_o *Item; // x0
  __int64 v18; // x1
  CombineServantListViewItem_o *v19; // x0
  __int64 v20; // x1
  int v21; // w8
  _BOOL8 v22; // x0
  __int64 v23; // x1
  CombineServantListViewObject_o *v24; // x0
  __int64 v25; // x1
  CombineServantListViewItem_o *v26; // x0
  __int64 v27; // x1
  int v28; // w19
  int v29; // w19
  int v30; // w9
  System_Collections_Generic_List_Enumerator_T__o v32; // [xsp+0h] [xbp-80h] BYREF
  int v33[4]; // [xsp+18h] [xbp-68h]
  int v34; // [xsp+28h] [xbp-58h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+30h] [xbp-50h] BYREF

  if ( (byte_418A64B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, *(_QWORD *)&progress);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v8);
    byte_418A64B = 1;
  }
  memset(&v35, 0, sizeof(v35));
  v34 = 0;
  if ( progress != 2 )
  {
    v9 = progress == 4;
    current = 0LL;
    if ( !v9 )
      return (UnityEngine_GameObject_o *)current;
    objectList = this->fields.objectList;
    if ( objectList )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v32,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v35 = v32;
      while ( 1 )
      {
        v12 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v35,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
        if ( !v12 )
          break;
        current = v35.fields.current;
        if ( !v35.fields.current )
          sub_B2C434(v12, v13);
        Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                      (UnityEngine_GameObject_o *)v35.fields.current,
                                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
        v16 = Component_srcLineSprite;
        if ( !Component_srcLineSprite )
          sub_B2C434(0LL, v15);
        Item = CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
        if ( !Item )
          sub_B2C434(0LL, v18);
        if ( Item->fields.rarity == 4 )
        {
          v19 = CombineServantListViewObject__GetItem(v16, 0LL);
          if ( !v19 )
            sub_B2C434(0LL, v20);
          if ( v19->fields.svtId == 9770400 )
          {
            v21 = 183;
            goto LABEL_25;
          }
        }
      }
      current = 0LL;
      v21 = 181;
LABEL_25:
      v33[0] = v21;
      v29 = ++v34;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v35,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
      if ( !v29 )
        return 0LL;
      v30 = v33[v29 - 1];
      if ( v30 == 181 )
      {
        current = 0LL;
      }
      else if ( v30 != 183 )
      {
        return 0LL;
      }
      v34 = v29 - 1;
      return (UnityEngine_GameObject_o *)current;
    }
LABEL_43:
    sub_B2C434(objectList, *(_QWORD *)&progress);
  }
  objectList = this->fields.objectList;
  if ( !objectList )
    goto LABEL_43;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v32,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v35 = v32;
  while ( 1 )
  {
    v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    if ( !v22 )
      break;
    current = v35.fields.current;
    if ( !v35.fields.current )
      sub_B2C434(v22, v23);
    v24 = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                              (UnityEngine_GameObject_o *)v35.fields.current,
                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
    if ( !v24 )
      sub_B2C434(0LL, v25);
    v26 = CombineServantListViewObject__GetItem(v24, 0LL);
    if ( !v26 )
      sub_B2C434(0LL, v27);
    if ( v26->fields.rarity == 4 )
    {
      v28 = 183;
      goto LABEL_30;
    }
  }
  current = 0LL;
  v28 = 181;
LABEL_30:
  v33[0] = v28;
  v34 = 1;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v34 = 0;
  if ( !(((v28 & 3u) + 1) >> 2) )
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
    sub_B2C434(scrollView, method);
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

  if ( (byte_418A5FA & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, v1);
    byte_418A5FA = 1;
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
        v5 = sub_B2C460(v2);
        sub_B2C400(v5, 0LL);
      }
      v2 = (CombineServantListViewManager_c *)sortStatusList->m_Items[i];
      if ( !v2 )
LABEL_17:
        sub_B2C434(v2, v1);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineServantListViewManager__IsExchangeSvtExist(
        CombineServantListViewManager_o *this,
        int32_t campaiginEventId,
        int64_t uniId,
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  EventCampaignMaster_o *v20; // x20
  System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  Il2CppObject *current; // x22
  _BOOL8 v25; // x0
  __int64 v26; // x1
  int v27; // w8
  _BOOL8 v28; // x0
  __int64 v29; // x1
  EventCampaignEntity_o *Data; // x0
  WebViewManager_o *v31; // x0
  __int64 v32; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v34; // x1
  UserServantEntity_o *Entity; // x0
  bool v36; // w19
  int v37; // w8
  int v38; // w9
  System_Collections_Generic_List_Enumerator_T__o v40[2]; // [xsp+8h] [xbp-C8h] BYREF
  int v41; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v42; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_418A63A & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, *(_QWORD *)&campaiginEventId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v7);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___get_Current__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_418A63A = 1;
  }
  memset(&v43, 0, sizeof(v43));
  memset(&v42, 0, sizeof(v42));
  v41 = 0;
  if ( !this->fields.eventCampaignServantIdList )
    return 0;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_50;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_50;
  v20 = (EventCampaignMaster_o *)Instance;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  if ( CombineEventCampaigns )
  {
    Instance = (DataManager_o *)EventCampaignMaster__GetCombineEventCampaigns_29699708(v20, CombineEventCampaigns, 0LL);
    if ( Instance )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        v40,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_List_EventCampaignEntity___GetEnumerator__);
      v43 = v40[0];
      while ( 1 )
      {
        v22 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v43,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___MoveNext__);
        if ( !v22 )
          break;
        current = v43.fields.current;
        if ( !v43.fields.current )
          sub_B2C434(v22, v23);
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v40,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v43.fields.current,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v42 = v40[0];
        while ( 1 )
        {
          v25 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v42,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v25 )
            break;
          if ( !v42.fields.current )
            sub_B2C434(v25, v26);
          if ( LODWORD(v42.fields.current[1].klass) == campaiginEventId )
            goto LABEL_17;
        }
        current = 0LL;
LABEL_17:
        *((_DWORD *)&v40[1].fields.list + v41++) = 115;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v42,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        v27 = v41;
        if ( v41 && *((_DWORD *)&v40[0].fields.current + v41 + 1) == 115 )
          v27 = --v41;
        if ( current )
          goto LABEL_24;
      }
      v27 = v41;
      current = 0LL;
LABEL_24:
      *((_DWORD *)&v40[1].fields.list + v27) = 145;
      ++v41;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v43,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_List_EventCampaignEntity___Dispose__);
      if ( v41 && *((_DWORD *)&v40[0].fields.current + v41 + 1) == 145 )
        --v41;
      if ( current )
      {
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          v40,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)current,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_EventCampaignEntity__GetEnumerator__);
        v42 = v40[0];
        while ( 1 )
        {
          v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v42,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__MoveNext__);
          if ( !v28 )
            break;
          if ( !v42.fields.current )
            sub_B2C434(v28, v29);
          Data = EventCampaignMaster__getData(v20, (int32_t)v42.fields.current[1].klass, 0LL);
          if ( Data && Data->fields.target == 27 )
          {
            v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
            if ( !v31 )
              sub_B2C434(0LL, v32);
            MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)v31, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
            if ( !MasterData_WarQuestSelectionMaster )
              sub_B2C434(0LL, v34);
            Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                       MasterData_WarQuestSelectionMaster,
                       uniId,
                       (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
            if ( Entity )
            {
              if ( UserServantEntity__IsExchangeSvt(Entity, 0LL) )
              {
                v36 = 1;
                v37 = 257;
                goto LABEL_39;
              }
            }
          }
        }
        v36 = 0;
        v37 = 255;
LABEL_39:
        *((_DWORD *)&v40[1].fields.list + v41++) = v37;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v42,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_EventCampaignEntity__Dispose__);
        if ( !v41 )
          return 0;
        v38 = *((_DWORD *)&v40[0].fields.current + v41 + 1);
        if ( v38 == 255 )
        {
          v36 = 0;
        }
        else if ( v38 != 257 )
        {
          return 0;
        }
        --v41;
        return v36;
      }
    }
LABEL_50:
    sub_B2C434(Instance, v19);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_int____o *eventCampaignServantIdList; // x22
  struct System_Int32_array *eventCampaignIdList; // x9
  int max_length; // w8
  __int64 v13; // x21
  int32_t *v14; // x9
  System_Int32_array *v15; // x20
  int v16; // w8
  __int64 v17; // x9
  int v18; // w9
  __int64 v19; // x10
  bool v20; // w8
  __int64 v22; // x0

  v6 = this;
  if ( (byte_418A639 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, *(_QWORD *)&campaiginEventId);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v8);
    this = (CombineServantListViewManager_o *)sub_B2C35C(&Method_System_Collections_Generic_List_int____get_Item__, v9);
    byte_418A639 = 1;
  }
  eventCampaignServantIdList = v6->fields.eventCampaignServantIdList;
  if ( !eventCampaignServantIdList )
    return 0;
  eventCampaignIdList = v6->fields.eventCampaignIdList;
  if ( !eventCampaignIdList )
LABEL_34:
    sub_B2C434(this, *(_QWORD *)&campaiginEventId);
  max_length = eventCampaignIdList->max_length;
  if ( max_length < 1 )
    return 0;
  v13 = 0LL;
  v14 = &eventCampaignIdList->m_Items[1];
  while ( 1 )
  {
    if ( (unsigned int)v13 >= max_length )
      goto LABEL_33;
    if ( v14[v13] == campaiginEventId )
      break;
    if ( (int)++v13 >= max_length )
      return 0;
  }
  if ( eventCampaignServantIdList->fields._size <= (unsigned int)v13 )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v15 = eventCampaignServantIdList->fields._items->m_Items[v13];
  if ( !v15 )
    return 0;
  v16 = v15->max_length;
  if ( v16 < 1 )
  {
LABEL_19:
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (CombineServantListViewManager_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
    if ( this )
    {
      this = (CombineServantListViewManager_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)this,
                                                  svtId,
                                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
      v18 = v15->max_length;
      if ( v18 >= 1 )
      {
        v19 = 0LL;
        while ( (unsigned int)v19 < v18 )
        {
          if ( !this )
            goto LABEL_34;
          if ( v15->m_Items[v19 + 1] == LODWORD(this->fields.scrollBar) )
            return 1;
          ++v19;
          v20 = 0;
          if ( (int)v19 >= v18 )
            return v20;
        }
LABEL_33:
        v22 = sub_B2C460(this);
        sub_B2C400(v22, 0LL);
      }
      return 0;
    }
    goto LABEL_34;
  }
  v17 = 0LL;
  while ( 1 )
  {
    if ( (unsigned int)v17 >= v16 )
      goto LABEL_33;
    if ( v15->m_Items[v17 + 1] == svtId )
      return 1;
    if ( (int)++v17 >= v16 )
      goto LABEL_19;
  }
}


bool __fastcall CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_CombineServantListViewItem__o *selectMaterialItemList,
        System_Collections_Generic_List_long__o **equipLastSvtList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  System_Collections_Generic_List_long__o *v27; // x20
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v34; // x20
  void *Instance; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *targetId; // x1
  int32_t size; // w19
  __int64 v38; // x22
  unsigned int v39; // w8
  UserServantMaster_o *v40; // x19
  signed __int64 v41; // x19
  System_Collections_Generic_List_int__o *v42; // x22
  System_Collections_Generic_Dictionary_int__int__o *v43; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v44; // x25
  unsigned int v45; // w21
  EventMissionProgressRequest_Argument_ProgressData_o *v46; // x28
  __int64 v47; // x27
  int32_t v48; // w26
  EventMissionProgressRequest_Argument_ProgressData_o *v49; // x8
  _QWORD *v50; // x8
  __int64 v51; // x21
  __int64 v52; // x26
  __int64 v53; // x27
  __int64 v54; // x28
  __int64 v55; // x26
  __int64 v56; // x27
  __int64 v57; // x25
  unsigned __int64 v58; // x21
  bool v59; // w28
  EventMissionProgressRequest_Argument_ProgressData_o *v60; // x8
  int32_t v61; // w24
  unsigned __int64 v62; // x26
  int v63; // w27
  int32_t v64; // w8
  __int64 v66; // x0
  UserServantMaster_o *v67; // [xsp+0h] [xbp-70h]
  int v69; // [xsp+14h] [xbp-5Ch]
  _QWORD *v70; // [xsp+18h] [xbp-58h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v71; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v72; // 0:x0.16

  if ( (byte_418A619 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, selectMaterialItemList);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__Add__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__, v10);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__int__TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__AddRange__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__Add__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Count__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Item__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__get_Item__, v21);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v22);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v23);
    sub_B2C35C(&System_Collections_Generic_List_CombineServantListViewItem__TypeInfo, v24);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v25);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    byte_418A619 = 1;
  }
  v27 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v27,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  *equipLastSvtList = v27;
  sub_B2C2F8((BattleServantConfConponent_o *)equipLastSvtList, (System_Int32_array **)v27, v28, v29, v30, v31, v32, v33);
  v34 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineServantListViewItem__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v34,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineServantListViewItem___ctor__);
  if ( !selectMaterialItemList )
    goto LABEL_77;
  size = selectMaterialItemList->fields._size;
  if ( size >= 1 )
  {
    v38 = 0LL;
    v39 = selectMaterialItemList->fields._size;
    while ( 1 )
    {
      if ( v39 <= (unsigned int)v38 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      targetId = (EventMissionProgressRequest_Argument_ProgressData_o *)selectMaterialItemList->fields._items->m_Items[v38];
      if ( !targetId )
        break;
      if ( BYTE2(targetId[8].fields.eventId) || HIBYTE(targetId[8].fields.eventId) )
      {
        if ( !v34 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v34,
          targetId,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineServantListViewItem__Add__);
      }
      if ( (int)v38 + 1 >= size )
        goto LABEL_15;
      v39 = selectMaterialItemList->fields._size;
      ++v38;
    }
LABEL_77:
    sub_B2C434(Instance, targetId);
  }
LABEL_15:
  if ( !v34 )
    goto LABEL_77;
  if ( v34->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !Instance )
      goto LABEL_77;
    v40 = (UserServantMaster_o *)Instance;
    Instance = UserServantMaster__getAllList((UserServantMaster_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_77;
    v67 = v40;
    v70 = Instance;
    v41 = v34->fields._size;
    v69 = *((_DWORD *)Instance + 6);
    v42 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v42,
      (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
    v43 = (System_Collections_Generic_Dictionary_int__int__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__int__TypeInfo);
    System_Collections_Generic_Dictionary_int__int____ctor(
      v43,
      (const MethodInfo_2E2399C *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    v44 = (DataMasterBase_WarMaster__WarEntity__int__o *)Instance;
    if ( (int)v41 >= 1 )
    {
      v45 = 0;
      do
      {
        if ( v34->fields._size <= v45 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v46 = v34->fields._items->m_Items[v45];
        if ( !v46 || !v43 )
          goto LABEL_77;
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___ContainsKey(
                             v43,
                             v46[3].fields.targetId,
                             (const MethodInfo_2E247A4 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          v47 = 0LL;
          v48 = 0;
          do
          {
            if ( v34->fields._size <= (unsigned int)v47 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v49 = v34->fields._items->m_Items[v47];
            if ( !v49 )
              goto LABEL_77;
            targetId = (EventMissionProgressRequest_Argument_ProgressData_o *)(unsigned int)v46[3].fields.targetId;
            ++v47;
            if ( (_DWORD)targetId == v49[3].fields.targetId )
              ++v48;
          }
          while ( (int)v47 < (int)v41 );
          System_Collections_Generic_Dictionary_int__int___Add(
            v43,
            (int32_t)targetId,
            v48,
            (const MethodInfo_2E24540 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
      }
      while ( (int)++v45 < (int)v41 );
    }
    v50 = v70;
    if ( v69 >= 1 )
    {
      v51 = 0LL;
      do
      {
        if ( (unsigned int)v51 >= *((_DWORD *)v50 + 6) )
        {
          v66 = sub_B2C460(Instance);
          sub_B2C400(v66, 0LL);
        }
        v52 = v70[v51 + 4];
        if ( !v52 )
          goto LABEL_77;
        v54 = *(_QWORD *)(v52 + 80);
        v53 = *(_QWORD *)(v52 + 88);
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v71.fields.currentCryptoKey = v54;
        *(_QWORD *)&v71.fields.fakeValue = v53;
        Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v71, 0LL);
        if ( !v44 )
          goto LABEL_77;
        Instance = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                     v44,
                     (int32_t)Instance,
                     (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !Instance )
          goto LABEL_77;
        Instance = (void *)ServantEntity__get_IsServant((ServantEntity_o *)Instance, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          Instance = (void *)UserServantEntity__IsEventJoin((UserServantEntity_o *)v52, 0LL);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v56 = *(_QWORD *)(v52 + 80);
            v55 = *(_QWORD *)(v52 + 88);
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v72.fields.currentCryptoKey = v56;
            *(_QWORD *)&v72.fields.fakeValue = v55;
            Instance = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v72, 0LL);
            if ( !v42 )
              goto LABEL_77;
            System_Collections_Generic_List_int___Add(
              v42,
              (int32_t)Instance,
              (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          }
        }
        ++v51;
        v50 = v70;
      }
      while ( (int)v51 < v69 );
    }
    if ( !v42 )
      goto LABEL_77;
    if ( (int)v41 >= 1 )
    {
      v57 = (unsigned int)v42->fields._size;
      v58 = 0LL;
      v59 = 0;
      while ( 1 )
      {
        if ( v58 >= (unsigned int)v34->fields._size )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v60 = v34->fields._items->m_Items[v58];
        if ( !v60 )
          goto LABEL_77;
        v61 = v60[3].fields.targetId;
        if ( (int)v57 < 1 )
        {
          v63 = 0;
          if ( !v43 )
            goto LABEL_77;
        }
        else
        {
          v62 = 0LL;
          v63 = 0;
          do
          {
            if ( v62 >= (unsigned int)v42->fields._size )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v64 = v42->fields._items->m_Items[++v62];
            if ( v61 == v64 )
              ++v63;
          }
          while ( v57 != v62 );
          if ( !v43 )
            goto LABEL_77;
        }
        Instance = (void *)System_Collections_Generic_Dictionary_int__int___get_Item(
                             v43,
                             v61,
                             (const MethodInfo_2E24480 *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
        if ( v63 == (_DWORD)Instance )
        {
          Instance = UserServantMaster__getSvtAllUserIdList(v67, v61, 0LL);
          if ( !*equipLastSvtList )
            goto LABEL_77;
          System_Collections_Generic_List_long___AddRange(
            *equipLastSvtList,
            (System_Collections_Generic_IEnumerable_T__o *)Instance,
            (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
          v59 = 1;
        }
        if ( (__int64)++v58 >= v41 )
          return v59;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t itemType; // w8
  int32_t rarity; // w8
  System_Collections_Generic_List_long__o *v22; // x23
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  CombineServantListViewItem_o *current; // x24
  __int64 v27; // x9
  const MethodInfo *v28; // x1
  int64_t UserSvtId; // x0
  UserServantEntity_o *baseUsrSvtData; // x24
  System_Int64_array *v31; // x0
  int32_t v32; // w23
  const MethodInfo *v33; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-90h] BYREF
  int32_t tdMaxLv[2]; // [xsp+40h] [xbp-70h] BYREF
  int32_t tmpTargetLv; // [xsp+48h] [xbp-68h] BYREF
  bool isMaxLvSelected; // [xsp+4Ch] [xbp-64h] BYREF
  bool isSecondAtkMax; // [xsp+50h] [xbp-60h] BYREF
  bool isSecondHpMax; // [xsp+54h] [xbp-5Ch] BYREF
  bool isAtkMax; // [xsp+58h] [xbp-58h] BYREF
  bool isHpMax; // [xsp+5Ch] [xbp-54h] BYREF
  bool isAtkUpMax; // [xsp+68h] [xbp-48h] BYREF
  bool isHpUpMax; // [xsp+6Ch] [xbp-44h] BYREF

  if ( (byte_418A624 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, item);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v17);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v18);
    byte_418A624 = 1;
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
  memset(&v35, 0, sizeof(v35));
  if ( !item )
    return 0;
  if ( this->fields.modeKind )
    return 1;
  if ( isDrag )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v22 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v22,
        (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
      if ( !itemList )
        goto LABEL_47;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v34,
        itemList,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v35 = v34;
      while ( 1 )
      {
        v24 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v35,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v24 )
          break;
        current = (CombineServantListViewItem_o *)v35.fields.current;
        if ( !v35.fields.current )
          goto LABEL_45;
        v27 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v35.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v27
          || (CombineServantListViewItem_c *)v35.fields.current->klass->_2.typeHierarchy[v27 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B2C728(v35.fields.current);
LABEL_45:
          sub_B2C434(v24, v25);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v35.fields.current, 0LL) || current->fields.dragSelectNum >= 1 )
        {
          UserSvtId = CombineServantListViewItem__get_UserSvtId(current, v28);
          if ( !v22 )
            sub_B2C434(UserSvtId, UserSvtId);
          System_Collections_Generic_List_long___Add(
            v22,
            UserSvtId,
            (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v35,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( !v22 )
        goto LABEL_47;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      v31 = System_Collections_Generic_List_long___ToArray(
              v22,
              (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
      itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)NpCombineControl__GetNpLv(
                                                                                                  baseUsrSvtData,
                                                                                                  v31,
                                                                                                  &tmpTargetLv,
                                                                                                  0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_47;
      v32 = (int)itemList;
      UserServantEntity__getTreasureDeviceInfo_21659764(this->fields.baseUsrSvtData, &tdMaxLv[1], tdMaxLv, 0LL);
      if ( tdMaxLv[0] <= v32 )
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
        v33);
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
    sub_B2C434(itemList, item);
  if ( !ServantEntity__get_IsOrganization((ServantEntity_o *)itemList, 0LL)
    || this->fields.sellEnableRestCnt - addServantSum > this->fields.minimumKeep )
  {
    return this->fields.selectSum + addSum < this->fields.selectMax;
  }
  return 0;
}


void __fastcall CombineServantListViewManager__ModifyItem(
        CombineServantListViewManager_o *this,
        int64_t usrSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UserGameEntity_o *SelfUserGame; // x19
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x20
  _BOOL8 v18; // x0
  CombineServantListViewItem_c *v19; // x1
  Il2CppObject *current; // x21
  __int64 v21; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v23; // x1
  __int128 v24; // q0
  int64_t v25; // x0
  __int128 v26; // q0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int klass; // w8
  int64_t UserSvtId; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x2
  UnityEngine_Object_o *monitor; // x22
  __int64 v38; // x1
  void *v39; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v40; // [xsp+0h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v41; // [xsp+20h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v42; // [xsp+40h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+60h] [xbp-70h] BYREF

  if ( (byte_418A60C & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_418A60C = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( !this->fields.itemList )
    return;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_42:
      sub_B2C434(Instance, v14);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_42;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v43.fields.current = (Il2CppObject *)v42.fields.fakeValue;
  *(_OWORD *)&v43.fields.list = *(_OWORD *)&v42.fields.currentCryptoKey;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v43,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v18 )
      break;
    current = v43.fields.current;
    if ( v43.fields.current )
    {
      v19 = CombineServantListViewItem_TypeInfo;
      v21 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v43.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v21
        || (CombineServantListViewItem_c *)v43.fields.current->klass->_2.typeHierarchy[v21 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B2C728(v43.fields.current);
LABEL_37:
        sub_B2C434(UserSvtId, v35);
      }
    }
    if ( Entity )
    {
      if ( !v43.fields.current )
        sub_B2C434(v18, v19);
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v43.fields.current,
                        (const MethodInfo *)v19);
      if ( !UserSvtEntity )
        sub_B2C434(0LL, v23);
      v24 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v42.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v42.fields.fakeValue = v24;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v41 = v42;
      v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v41, 0LL);
      v26 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      *(_OWORD *)&v40.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v40.fields.fakeValue = v26;
      if ( v25 == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v40, 0LL) )
      {
        current[7].monitor = Entity;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        klass = (int)current[7].klass;
        if ( klass == 3 )
        {
          CombineServantListViewItem__SetSkillInfo((CombineServantListViewItem_o *)current, (const MethodInfo *)v19);
          klass = (int)current[7].klass;
        }
        if ( klass == 11 )
          CombineServantListViewItem__SetAppendSkillInfo(
            (CombineServantListViewItem_o *)current,
            (const MethodInfo *)v19);
      }
    }
    else if ( !v43.fields.current )
    {
      sub_B2C434(v18, v19);
    }
    UserSvtId = CombineServantListViewItem__get_UserSvtId(
                  (CombineServantListViewItem_o *)current,
                  (const MethodInfo *)v19);
    if ( !SelfUserGame )
      goto LABEL_37;
    CombineServantListViewItem__ModifyItem(
      (CombineServantListViewItem_o *)current,
      UserSvtId == SelfUserGame->fields.favoriteUserSvtId,
      v36);
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v39 = current[6].monitor;
      if ( !v39 )
        sub_B2C434(0LL, v38);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v39 + 392LL))(
        v39,
        current,
        *(_QWORD *)(*(_QWORD *)v39 + 400LL));
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v43,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__ModifyList(
        CombineServantListViewManager_o *this,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x22
  int64_t sort; // x0
  UserServantEntity_o *v30; // x1
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x8
  __int64 currentType; // x9
  struct ListViewSort_o *v45; // x1
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x21
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  unsigned int v54; // w8
  System_Collections_Generic_IEnumerable_T__o *OrganizationList; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v56; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v57; // x23
  int monitor; // w8
  __int64 v59; // x20
  __int64 v60; // x24
  __int128 v61; // q0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  __int128 v63; // q0
  int64_t v64; // x25
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  void *v66; // x24
  int v67; // w26
  unsigned int v68; // w25
  __int64 v69; // x8
  __int128 v70; // q0
  int64_t v71; // x23
  __int64 v72; // x20
  struct System_Collections_Generic_List_ListViewItem__o *v73; // x22
  CombineServantListViewItem_o *v74; // x22
  __int64 v75; // x9
  __int128 v76; // q0
  __int128 v77; // q0
  int64_t v78; // x0
  const MethodInfo *v79; // x5
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v80; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v81; // x24
  int size; // w8
  int32_t i; // w21
  WarBoardAIRoute_RouteData_o *v84; // x8
  __int128 v85; // q0
  struct UserServantEntity_o *v86; // x8
  __int128 v87; // q0
  int64_t v88; // x25
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x8
  struct System_Collections_Generic_List_long__o *v90; // x9
  int v91; // w8
  System_Predicate_peRenderTexture_ChangeLayerObject__o **v92; // x25
  unsigned int v93; // w28
  struct System_Collections_Generic_List_long__o *v94; // x20
  __int64 v95; // x27
  __int64 v96; // x26
  __int128 v97; // q1
  int64_t v98; // x20
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v99; // x26
  System_String_array **v100; // x2
  System_String_array **v101; // x3
  System_Boolean_array **v102; // x4
  System_Int32_array **v103; // x5
  System_Int32_array *v104; // x6
  System_Int32_array *v105; // x7
  __int64 v106; // x0
  bool isIconSizeChangea; // [xsp+Ch] [xbp-184h]
  bool isIconSizeChangeb; // [xsp+Ch] [xbp-184h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v109; // [xsp+10h] [xbp-180h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v110; // [xsp+30h] [xbp-160h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+50h] [xbp-140h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+70h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+90h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+B0h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v115; // [xsp+D0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v116; // [xsp+F0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v117; // [xsp+110h] [xbp-80h]

  if ( (byte_418A614 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, isIconSizeChange);
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__Remove__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v20);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B2C35C(&Method_System_Predicate_UserServantEntity___ctor__, v23);
    sub_B2C35C(&System_Predicate_UserServantEntity__TypeInfo, v24);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v25);
    sub_B2C35C(&Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__, v26);
    sub_B2C35C(&CombineServantListViewManager___c__DisplayClass173_0_TypeInfo, v27);
    byte_418A614 = 1;
  }
  v28 = sub_B2C42C(CombineServantListViewManager___c__DisplayClass173_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass173_0___ctor(
    (CombineServantListViewManager___c__DisplayClass173_0_o *)v28,
    0LL);
  if ( !v28 )
    goto LABEL_120;
  *(_QWORD *)(v28 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v28 + 16), (System_Int32_array **)this, v31, v32, v33, v34, v35, v36);
  sort = (int64_t)CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (int64_t)CombineServantListViewManager_TypeInfo;
  }
  v43 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v43 )
    goto LABEL_120;
  currentType = this->fields.currentType;
  isIconSizeChangea = isIconSizeChange;
  if ( (unsigned int)currentType >= *(_DWORD *)(v43 + 24) )
    goto LABEL_122;
  v45 = *(struct ListViewSort_o **)(v43 + 8 * currentType + 32);
  this->fields.sort = v45;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v45,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  sort = (int64_t)this->fields.sort;
  if ( !sort )
    goto LABEL_120;
  ListViewSort__Load((ListViewSort_o *)sort, 0LL);
  sort = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_120;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)sort,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v48,
    v49,
    v50,
    v51,
    v52,
    v53);
  v54 = this->fields.currentType;
  if ( v54 > 0xB )
    goto LABEL_120;
  if ( ((1 << v54) & 0xFDD) != 0 )
  {
    sort = (int64_t)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_120;
    OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getOrganizationList(
                                                                        (UserServantMaster_o *)sort,
                                                                        0LL);
    v56 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v56,
      OrganizationList,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992);
    v57 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v57,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
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
        v59 = 0LL;
        while ( (unsigned int)v59 < monitor )
        {
          v60 = *((_QWORD *)&OrganizationList[2].klass + v59);
          if ( !v60 )
            goto LABEL_120;
          v61 = *(_OWORD *)(v60 + 32);
          *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)(v60 + 16);
          *(_OWORD *)&v117.fields.fakeValue = v61;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v116 = v117;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v116, 0LL);
          baseUsrSvtData = this->fields.baseUsrSvtData;
          if ( !baseUsrSvtData )
            goto LABEL_120;
          v63 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
          v64 = sort;
          *(_OWORD *)&v115.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v115.fields.fakeValue = v63;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v115, 0LL);
          if ( v64 == sort )
          {
            if ( !v57 )
              goto LABEL_120;
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v57,
              (EventMissionProgressRequest_Argument_ProgressData_o *)v60,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
            if ( !v56 )
              goto LABEL_120;
            sort = System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
                     (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v56,
                     (WarBoardManager_TaskList_o *)v60,
                     (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_UserServantEntity__Remove__);
          }
          monitor = (int)OrganizationList[1].monitor;
          if ( (int)++v59 >= monitor )
            goto LABEL_33;
        }
        goto LABEL_122;
      }
LABEL_33:
      if ( !v57 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v57,
        (System_Collections_Generic_IEnumerable_T__o *)v56,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v57,
                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)sort;
      goto LABEL_35;
    }
  }
  else
  {
    if ( v54 == 1 )
    {
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_120;
      OrganizationList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                          (UserServantMaster_o *)sort,
                                                                          0LL);
      v80 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v80,
        OrganizationList,
        (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992);
      v81 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v81,
        (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
      if ( this->fields.baseUsrSvtData )
      {
        if ( !v80 )
          goto LABEL_120;
        size = v80->fields._size;
        if ( size >= 1 )
        {
          for ( i = 0; i < size; ++i )
          {
            if ( size <= (unsigned int)i )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v84 = v80->fields._items->m_Items[i];
            if ( !v84 )
              goto LABEL_120;
            v85 = *(_OWORD *)&v84->fields.baseSquare;
            *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)&v84->fields.flagNow;
            *(_OWORD *)&v117.fields.fakeValue = v85;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v114 = v117;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v114, 0LL);
            v86 = this->fields.baseUsrSvtData;
            if ( !v86 )
              goto LABEL_120;
            v87 = *(_OWORD *)&v86->fields.id.fields.fakeValue;
            v88 = sort;
            *(_OWORD *)&v113.fields.currentCryptoKey = *(_OWORD *)&v86->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v113.fields.fakeValue = v87;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v113, 0LL);
            if ( v88 == sort )
              System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
                (System_Collections_Generic_List_XWeaponTrail_Element__o *)v80,
                i,
                (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
            size = v80->fields._size;
          }
        }
        sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v80,
                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
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
      *(_DWORD *)(v28 + 24) = 0;
      v90 = this->fields.selectedMaterialUserServantIdList;
      if ( !v90 )
        goto LABEL_120;
      v91 = 0;
      v92 = (System_Predicate_peRenderTexture_ChangeLayerObject__o **)(v28 + 32);
      while ( v91 < v90->fields._size )
      {
        if ( !v80 )
          goto LABEL_120;
        if ( v80->fields._size >= 1 )
        {
          v93 = 0;
          while ( 1 )
          {
            if ( !OrganizationList )
              goto LABEL_120;
            if ( v93 >= LODWORD(OrganizationList[1].monitor) )
              break;
            v94 = this->fields.selectedMaterialUserServantIdList;
            if ( !v94 )
              goto LABEL_120;
            v95 = *(int *)(v28 + 24);
            v96 = *((_QWORD *)&OrganizationList[2].klass + (int)v93);
            if ( v94->fields._size <= (unsigned int)v95 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            if ( !v96 )
              goto LABEL_120;
            v97 = *(_OWORD *)(v96 + 32);
            v98 = v94->fields._items->m_Items[v95];
            *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)(v96 + 16);
            *(_OWORD *)&v117.fields.fakeValue = v97;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v112 = v117;
            sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v112, 0LL);
            if ( v98 == sort )
            {
              if ( !v81 )
                goto LABEL_120;
              System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
                v81,
                (EventMissionProgressRequest_Argument_ProgressData_o *)v96,
                (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_UserServantEntity__Add__);
              v99 = *v92;
              if ( !*v92 )
              {
                v99 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_UserServantEntity__TypeInfo);
                System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
                  v99,
                  (Il2CppObject *)v28,
                  Method_CombineServantListViewManager___c__DisplayClass173_0__ModifyList_b__0__,
                  (const MethodInfo_2952BE4 *)Method_System_Predicate_UserServantEntity___ctor__);
                *(_QWORD *)(v28 + 32) = v99;
                sub_B2C2F8(
                  (BattleServantConfConponent_o *)(v28 + 32),
                  (System_Int32_array **)v99,
                  v100,
                  v101,
                  v102,
                  v103,
                  v104,
                  v105);
              }
              sort = System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo___RemoveAll(
                       (System_Collections_Generic_List_ScrTerminalListTop_CaldeaFolderInfo__o *)v80,
                       (System_Predicate_T__o *)v99,
                       (const MethodInfo_2EF5FB0 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAll__);
            }
            if ( (signed int)++v93 >= v80->fields._size )
              goto LABEL_108;
          }
LABEL_122:
          v106 = sub_B2C460(sort);
          sub_B2C400(v106, 0LL);
        }
LABEL_108:
        v91 = *(_DWORD *)(v28 + 24) + 1;
        *(_DWORD *)(v28 + 24) = v91;
        v90 = this->fields.selectedMaterialUserServantIdList;
        if ( !v90 )
          goto LABEL_120;
      }
      if ( !v81 )
        goto LABEL_120;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v81,
        (System_Collections_Generic_IEnumerable_T__o *)v80,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      sort = (int64_t)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v81,
                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      if ( !sort )
        goto LABEL_120;
    }
    else
    {
      v30 = this->fields.baseUsrSvtData;
      if ( !v30 )
        goto LABEL_120;
      sort = (int64_t)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_120;
      sort = (int64_t)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v30, 0LL);
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
  v66 = OrganizationList[1].monitor;
  if ( (int)v66 >= 1 )
  {
    v67 = itemList->fields._size;
    v68 = 0;
    isIconSizeChangeb = isIconSizeChangea;
    while ( 1 )
    {
      v69 = *((_QWORD *)&OrganizationList[2].klass + (int)v68);
      if ( !v69 )
        goto LABEL_120;
      v70 = *(_OWORD *)(v69 + 32);
      *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)(v69 + 16);
      *(_OWORD *)&v117.fields.fakeValue = v70;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v111 = v117;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v111, 0LL);
      if ( v67 >= 1 )
        break;
LABEL_64:
      if ( (int)++v68 >= (int)v66 )
        return;
      if ( v68 >= LODWORD(OrganizationList[1].monitor) )
        goto LABEL_122;
    }
    v71 = sort;
    v72 = 0LL;
    while ( 1 )
    {
      v73 = this->fields.itemList;
      if ( !v73 )
        goto LABEL_120;
      if ( v73->fields._size <= (unsigned int)v72 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v74 = (CombineServantListViewItem_o *)v73->fields._items->m_Items[v72];
      if ( !v74 )
        goto LABEL_120;
      v75 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v74->klass->_2.bitflags2 + 1) < (unsigned int)v75
        || (CombineServantListViewItem_c *)v74->klass->_2.typeHierarchy[v75 - 1] != CombineServantListViewItem_TypeInfo )
      {
        break;
      }
      sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(
                        v74,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
      if ( sort )
      {
        sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v74, (const MethodInfo *)v30);
        if ( !sort )
          goto LABEL_120;
        v76 = *(_OWORD *)(sort + 32);
        *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
        *(_OWORD *)&v117.fields.fakeValue = v76;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v110 = v117;
        sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v110, 0LL);
        if ( sort == v71 )
        {
          sort = (int64_t)CombineServantListViewItem__get_UserSvtEntity(v74, (const MethodInfo *)v30);
          if ( sort )
          {
            v77 = *(_OWORD *)(sort + 32);
            *(_OWORD *)&v117.fields.currentCryptoKey = *(_OWORD *)(sort + 16);
            *(_OWORD *)&v117.fields.fakeValue = v77;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
            }
            v109 = v117;
            v78 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v109, 0LL);
            CombineServantListViewManager__ModifyLockItem_30035756(this, v74, v78, 1, isIconSizeChangeb, v79);
            goto LABEL_64;
          }
LABEL_120:
          sub_B2C434(sort, v30);
        }
      }
      if ( (int)++v72 >= v67 )
        goto LABEL_64;
    }
    sub_B2C728(v74);
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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  DataManager_o *Instance; // x0
  UserServantEntity_o *Entity; // x21
  bool v20; // w28
  int64_t v21; // x0
  CombineServantListViewItem_c *v22; // x1
  Il2CppObject *current; // x22
  __int64 v24; // x9
  UserServantEntity_o *UserSvtEntity; // x0
  __int64 v26; // x1
  __int128 v27; // q0
  int64_t v28; // x0
  __int128 v29; // q0
  int64_t v30; // x23
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  UnityEngine_Object_o *monitor; // x23
  __int64 v40; // x1
  void *v41; // x0
  __int64 v42; // x1
  ListViewObject_o *v43; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+10h] [xbp-D0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+30h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+50h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+70h] [xbp-70h] BYREF

  if ( (byte_418A60D & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, usrSvtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16);
    byte_418A60D = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( !this->fields.itemList )
    return;
  UserGameMaster__getSelfUserGame(0LL);
  if ( usrSvtId < 1 )
  {
    Entity = 0LL;
  }
  else
  {
    Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___)) == 0LL )
    {
LABEL_44:
      sub_B2C434(Instance, v17);
    }
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
               usrSvtId,
               (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  }
  Instance = (DataManager_o *)this->fields.itemList;
  if ( !Instance )
    goto LABEL_44;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Instance,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v48.fields.current = (Il2CppObject *)v47.fields.fakeValue;
  *(_OWORD *)&v48.fields.list = *(_OWORD *)&v47.fields.currentCryptoKey;
  v20 = !isIconSizeChange && isInit;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v48,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( (v21 & 1) == 0 )
      break;
    current = v48.fields.current;
    if ( v48.fields.current )
    {
      v22 = CombineServantListViewItem_TypeInfo;
      v24 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v48.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v24
        || (CombineServantListViewItem_c *)v48.fields.current->klass->_2.typeHierarchy[v24 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B2C728(v48.fields.current);
LABEL_38:
        sub_B2C434(UserSvtEntity, v26);
      }
    }
    if ( Entity )
    {
      if ( !v48.fields.current )
        sub_B2C434(v21, v22);
      UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(
                        (CombineServantListViewItem_o *)v48.fields.current,
                        (const MethodInfo *)v22);
      if ( !UserSvtEntity )
        goto LABEL_38;
      v27 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
      *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v47.fields.fakeValue = v27;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v46 = v47;
      v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v46, 0LL);
      v29 = *(_OWORD *)&Entity->fields.id.fields.fakeValue;
      v30 = v28;
      *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&Entity->fields.id.fields.currentCryptoKey;
      *(_OWORD *)&v45.fields.fakeValue = v29;
      v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v45, 0LL);
      if ( v30 == v21 )
      {
        current[7].monitor = Entity;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&current[7].monitor,
          (System_Int32_array **)Entity,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
    }
    if ( v20 )
    {
      if ( !current )
        sub_B2C434(v21, v22);
      CombineServantListViewItem__ModifyLockItem((CombineServantListViewItem_o *)current, (const MethodInfo *)v22);
      CombineServantListViewItem__ModifyChoiceItem((CombineServantListViewItem_o *)current, v37);
      CombineServantListViewItem__ModifyPushItem((CombineServantListViewItem_o *)current, v38);
    }
    else if ( !current )
    {
      sub_B2C434(v21, v22);
    }
    monitor = (UnityEngine_Object_o *)current[6].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
    {
      v41 = current[6].monitor;
      if ( !v41 )
        sub_B2C434(0LL, v40);
      (*(void (__fastcall **)(void *, Il2CppObject *, _QWORD))(*(_QWORD *)v41 + 392LL))(
        v41,
        current,
        *(_QWORD *)(*(_QWORD *)v41 + 400LL));
      if ( isIconSizeChange )
      {
        v43 = (ListViewObject_o *)current[6].monitor;
        if ( !v43 )
          sub_B2C434(0LL, v42);
        ListViewObject__SetItemSeed(v43, (ListViewItem_o *)current, this->fields.seed, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v48,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
}


void __fastcall CombineServantListViewManager__ModifyLockItem_30035756(
        CombineServantListViewManager_o *this,
        CombineServantListViewItem_o *servantItem,
        int64_t usrSvtId,
        bool isInit,
        bool isIconSizeChange,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v10; // x20
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  CombineServantListViewManager_o *v15; // x23
  __int128 v16; // q1
  int64_t v17; // x0
  __int128 v18; // q0
  CombineServantListViewManager_o *v19; // x24
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  const MethodInfo *v27; // x1
  UnityEngine_Object_o *viewObject; // x22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v29; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+40h] [xbp-50h]

  v10 = this;
  if ( (byte_418A60E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, servantItem);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    this = (CombineServantListViewManager_o *)sub_B2C35C(
                                                &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                v14);
    byte_418A60E = 1;
  }
  if ( usrSvtId >= 1 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_28;
    this = (CombineServantListViewManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)this,
                                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
    if ( !this )
      goto LABEL_28;
    this = (CombineServantListViewManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)this,
                                                usrSvtId,
                                                (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
    if ( this )
    {
      if ( !servantItem )
        goto LABEL_28;
      v15 = this;
      this = (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtEntity(
                                                  servantItem,
                                                  (const MethodInfo *)servantItem);
      if ( !this )
        goto LABEL_28;
      v16 = *(_OWORD *)&this->fields.indicator;
      *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&this->fields.m_CachedPtr;
      *(_OWORD *)&v31.fields.fakeValue = v16;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      v30 = v31;
      v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v30, 0LL);
      v18 = *(_OWORD *)&v15->fields.indicator;
      v19 = (CombineServantListViewManager_o *)v17;
      *(_OWORD *)&v29.fields.currentCryptoKey = *(_OWORD *)&v15->fields.m_CachedPtr;
      *(_OWORD *)&v29.fields.fakeValue = v18;
      this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                  &v29,
                                                  0LL);
      if ( v19 == this )
      {
        servantItem->fields.userSvtEntity = (struct UserServantEntity_o *)v15;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&servantItem->fields.userSvtEntity,
          (System_Int32_array **)v15,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
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
    CombineServantListViewItem__ModifyChoiceItem(servantItem, v26);
    CombineServantListViewItem__ModifyPushItem(servantItem, v27);
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
    sub_B2C434(this, servantItem);
  }
}


void __fastcall CombineServantListViewManager__OnClickBonusFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0

  if ( (byte_418A62A & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A62A = 1;
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
            0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
      || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)sort, 0LL),
          ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
          (sort = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
    {
      sub_B2C434(sort, v3);
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
    sub_B2C434(this, dispKind);
  v5->fields.expUpDispType = dispType;
}


void __fastcall CombineServantListViewManager__OnClickChoiceTab(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_418A635 & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineServantListViewManager_EndClickTabChoice__, method);
    sub_B2C35C(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A635 = 1;
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
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B2C42C(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabChoice__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 2, v5);
      CombineServantListViewManager__ReleaseAll(this, v8);
      CombineServantListViewManager__ModifyList(this, 0, v9);
      CombineServantListViewManager__SetMode_30036488(this, 2, v10);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickCollectLock(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_418A634 & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineServantListViewManager_EndClickTabLock__, method);
    sub_B2C35C(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A634 = 1;
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
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B2C42C(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabLock__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 1, v5);
      CombineServantListViewManager__ReleaseAll(this, v8);
      CombineServantListViewManager__ModifyList(this, 0, v9);
      CombineServantListViewManager__SetMode_30036488(this, 2, v10);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickDecide(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  System_Collections_Generic_List_long__o *v13; // x20
  struct CombineRootComponent_o *v14; // x8
  UnityEngine_Object_o *checkMaterialSvtEquipped; // x20
  struct CombineRootComponent_o *v16; // x8
  CombineServantListViewManager_o *SelectMaterialItemList; // x0
  const MethodInfo *v18; // x3
  bool IsSelectCmdCodeEquipLastSvt; // w20
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  struct CombineRootComponent_o *v21; // x8
  UnityEngine_Object_o *v22; // x20
  struct CombineRootComponent_o *v23; // x8
  struct CombineRootComponent_o *v24; // x8
  CheckMaterialSvtEquippedDialog_o *v25; // x20
  System_Collections_Generic_List_CombineServantListViewItem__o *v26; // x0
  System_Collections_Generic_List_long__o *v27; // x21
  System_Collections_Generic_List_CombineServantListViewItem__o *v28; // x22
  System_Action_int__o *v29; // x23
  System_Collections_Generic_List_long__o *equipLastSvtList; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A615 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_int___ctor__, method);
    sub_B2C35C(&System_Action_int__TypeInfo, v3);
    sub_B2C35C(&Method_CombineServantListViewManager__OnClickDecide_b__174_0__, v4);
    sub_B2C35C(&Method_System_Linq_Enumerable_Distinct_long___, v5);
    sub_B2C35C(&Method_System_Linq_Enumerable_ToList_long___, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    byte_418A615 = 1;
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
    v13 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v13,
      (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
    equipLastSvtList = v13;
    if ( this->fields.currentType == 1 )
    {
      v14 = this->fields.combineRootComponent;
      if ( !v14 )
        goto LABEL_33;
      checkMaterialSvtEquipped = (UnityEngine_Object_o *)v14->fields.checkMaterialSvtEquipped;
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
        v16 = this->fields.combineRootComponent;
        if ( !v16 )
          goto LABEL_33;
        combineRootComponent = (CombineRootComponent_o *)v16->fields.checkMaterialSvtEquipped;
        if ( !combineRootComponent )
          goto LABEL_33;
        CheckMaterialSvtEquippedDialog__ClearCommandCodeRemoveResult(
          (CheckMaterialSvtEquippedDialog_o *)combineRootComponent,
          0LL);
      }
      SelectMaterialItemList = (CombineServantListViewManager_o *)CombineServantListViewManager__GetSelectMaterialItemList(
                                                                    this,
                                                                    v11);
      IsSelectCmdCodeEquipLastSvt = CombineServantListViewManager__IsSelectCmdCodeEquipLastSvt(
                                      SelectMaterialItemList,
                                      (System_Collections_Generic_List_CombineServantListViewItem__o *)SelectMaterialItemList,
                                      &equipLastSvtList,
                                      v18);
      v20 = System_Linq_Enumerable__Distinct_long_(
              (System_Collections_Generic_IEnumerable_TSource__o *)equipLastSvtList,
              (const MethodInfo_1A8D6EC *)Method_System_Linq_Enumerable_Distinct_long___);
      combineRootComponent = (CombineRootComponent_o *)System_Linq_Enumerable__ToList_long_(
                                                         v20,
                                                         (const MethodInfo_1A9DE04 *)Method_System_Linq_Enumerable_ToList_long___);
      equipLastSvtList = (System_Collections_Generic_List_long__o *)combineRootComponent;
      if ( IsSelectCmdCodeEquipLastSvt )
      {
        v21 = this->fields.combineRootComponent;
        if ( !v21 )
          goto LABEL_33;
        v22 = (UnityEngine_Object_o *)v21->fields.checkMaterialSvtEquipped;
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        combineRootComponent = (CombineRootComponent_o *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
        if ( ((unsigned __int8)combineRootComponent & 1) != 0 )
        {
          v23 = this->fields.combineRootComponent;
          if ( v23 )
          {
            combineRootComponent = (CombineRootComponent_o *)v23->fields.checkMaterialSvtEquipped;
            if ( combineRootComponent )
            {
              CheckMaterialSvtEquippedDialog__Init((CheckMaterialSvtEquippedDialog_o *)combineRootComponent, 0LL);
              v24 = this->fields.combineRootComponent;
              if ( v24 )
              {
                v25 = v24->fields.checkMaterialSvtEquipped;
                v26 = CombineServantListViewManager__GetSelectMaterialItemList(this, v11);
                v27 = equipLastSvtList;
                v28 = v26;
                v29 = (System_Action_int__o *)sub_B2C42C(System_Action_int__TypeInfo);
                System_Action_int____ctor(
                  v29,
                  (Il2CppObject *)this,
                  Method_CombineServantListViewManager__OnClickDecide_b__174_0__,
                  (const MethodInfo_24BA548 *)Method_System_Action_int___ctor__);
                if ( v25 )
                {
                  CheckMaterialSvtEquippedDialog__Open(v25, v28, v27, v29, 0LL);
                  return;
                }
              }
            }
          }
LABEL_33:
          sub_B2C434(combineRootComponent, v11);
        }
      }
    }
    CombineServantListViewManager__AfterCheckMaterial(this, v11);
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
  __int64 v3; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  __int64 v5; // x1
  struct ListViewSort_o *sort; // x8
  int32_t filter2Kind; // w20
  int32_t *p_LIMIT_UP_FILTER2_MAX_KIND_NUM; // x9
  int32_t v9; // w9

  if ( (byte_418A62B & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, method);
    sub_B2C35C(&SoundManager_TypeInfo, v3);
    byte_418A62B = 1;
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
        v9 = filter2Kind + 1;
      else
        v9 = 0;
      sort->fields.filter2Kind = v9;
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
    sub_B2C434(noticeTween, v5);
  }
}


void __fastcall CombineServantListViewManager__OnClickFilterKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 itemType; // x8
  int32_t v7; // w20
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x21
  CommonUI_o *v10; // x22
  ServantFilterSelectMenu_CallbackFunc_o *v11; // x23
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_418A627 & 1) == 0 )
  {
    sub_B2C35C(&ServantFilterSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_CombineServantListViewManager_EndSelectFilterKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A627 = 1;
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
    v7 = 0;
    if ( (unsigned int)itemType <= 0xB )
      v7 = dword_31B34D0[itemType];
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v10 = (CommonUI_o *)Instance;
    v11 = (ServantFilterSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantFilterSelectMenu_CallbackFunc_TypeInfo);
    ServantFilterSelectMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectFilterKind__,
      0LL);
    if ( !v10 )
      sub_B2C434(v12, v13);
    CommonUI__OpenServantFilterSelectMenu(v10, v7, sort, v11, -1, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x9
  CombineServantListViewItem_o *Item; // x20
  __int128 v9; // q1
  int64_t v10; // x0
  const MethodInfo *v11; // x4
  const MethodInfo *v12; // x2
  CombineServantListViewManager_o *v13; // x0
  CombineServantListViewItem_o *v14; // x1
  const MethodInfo *v15; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v16; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v17; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_418A623 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewObject_TypeInfo, obj);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v5);
    this = (CombineServantListViewManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v6);
    byte_418A623 = 1;
  }
  if ( !obj )
    goto LABEL_15;
  v7 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v7
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v7 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B2C728(obj);
    CombineServantListViewManager__IsDragEnable(v13, v14, v15);
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
    sub_B2C434(this, obj);
  }
  v9 = *(_OWORD *)&this->fields.indicator;
  *(_OWORD *)&v17.fields.currentCryptoKey = *(_OWORD *)&this->fields.m_CachedPtr;
  *(_OWORD *)&v17.fields.fakeValue = v9;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v16 = v17;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v16, 0LL);
  CombineServantListViewManager__ModifyLockItem(v4, v10, 0, 0, v11);
  CombineServantListViewManager__SetMode_30036488(v4, 3, v12);
}


void __fastcall CombineServantListViewManager__OnClickNormalStatus(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  CombineServantListViewManager_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418A633 & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineServantListViewManager_EndClickTabStatus__, method);
    sub_B2C35C(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A633 = 1;
  }
  if ( this->fields.modeKind )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B2C42C(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
    CombineServantListViewManager_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndClickTabStatus__,
      0LL);
    CombineServantListViewManager__StatusRequest(this, v5, v6);
  }
}


void __fastcall CombineServantListViewManager__OnClickPush(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  CombineServantListViewManager_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x2

  if ( (byte_418A636 & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineServantListViewManager_EndClickTabPush__, method);
    sub_B2C35C(&CombineServantListViewManager_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418A636 = 1;
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
      v6 = (CombineServantListViewManager_RequestCallbackFunc_o *)sub_B2C42C(CombineServantListViewManager_RequestCallbackFunc_TypeInfo);
      CombineServantListViewManager_RequestCallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndClickTabPush__,
        0LL);
      CombineServantListViewManager__StatusRequest(this, v6, v7);
    }
    else
    {
      CombineServantListViewManager__SetStatusKind(this, 3, v5);
      CombineServantListViewManager__ReleaseAll(this, v8);
      CombineServantListViewManager__ModifyList(this, 0, v9);
      CombineServantListViewManager__SetMode_30036488(this, 2, v10);
    }
  }
}


void __fastcall CombineServantListViewManager__OnClickReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_418A61C & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A61C = 1;
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

  if ( (byte_418A638 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A638 = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.seed, (System_Int32_array **)v18, v5, v6, v7, v8, v9, v10);
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
        CombineServantListViewManager__SetMode_30036488(this, 2, v22),
        (ScaleKindSpriteName = (ListViewSort_o *)this->fields.noticeTween) == 0LL)
    || (CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)ScaleKindSpriteName, 0LL),
        ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL),
        (ScaleKindSpriteName = (ListViewSort_o *)this->fields.noticeTween) == 0LL) )
  {
LABEL_21:
    sub_B2C434(ScaleKindSpriteName, v4);
  }
  CombineServantListViewNoticeTween__Start((CombineServantListViewNoticeTween_o *)ScaleKindSpriteName, 0LL);
}


void __fastcall CombineServantListViewManager__OnClickSelectBase(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x9
  struct UserServantEntity_o *baseUsrSvtData; // x8
  CombineServantListViewItem_o *v10; // x21
  __int128 v11; // q1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t v18; // w0
  const MethodInfo *v19; // x1
  System_Int32_array **UserSvtEntity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  CombineServantListViewManager_o *v27; // x0
  ListViewObject_o *v28; // x1
  const MethodInfo *v29; // x2
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v30; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v31; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_418A61F & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewObject_TypeInfo, obj);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v6);
    this = (CombineServantListViewManager_o *)sub_B2C35C(&SoundManager_TypeInfo, v7);
    byte_418A61F = 1;
  }
  if ( !obj )
    goto LABEL_42;
  v8 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v8
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v8 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B2C728(obj);
    CombineServantListViewManager__OnClickSelectMaterial(v27, v28, v29);
    return;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  baseUsrSvtData = v4->fields.baseUsrSvtData;
  v10 = (CombineServantListViewItem_o *)this;
  if ( baseUsrSvtData )
  {
    v11 = *(_OWORD *)&baseUsrSvtData->fields.id.fields.fakeValue;
    *(_OWORD *)&v31.fields.currentCryptoKey = *(_OWORD *)&baseUsrSvtData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v31.fields.fakeValue = v11;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v30 = v31;
    this = (CombineServantListViewManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                &v30,
                                                0LL);
    if ( !v10 )
      goto LABEL_42;
    if ( this == (CombineServantListViewManager_o *)CombineServantListViewItem__get_UserSvtId(
                                                      v10,
                                                      (const MethodInfo *)obj) )
    {
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v4->fields.baseUsrSvtData = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData, 0LL, v12, v13, v14, v15, v16, v17);
      this = (CombineServantListViewManager_o *)v4->fields.tempMaterialUserServantIdList;
      if ( this )
      {
        System_Collections_Generic_List_long___Clear(
          (System_Collections_Generic_List_long__o *)this,
          (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
        goto LABEL_28;
      }
LABEL_42:
      sub_B2C434(this, obj);
    }
  }
  else if ( !this )
  {
    goto LABEL_42;
  }
  if ( CombineServantListViewItem__get_IsCanNotBaseSelect(v10, (const MethodInfo *)obj) )
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v18 = 2;
  }
  else
  {
    if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    v18 = 0;
  }
  SoundManager__playSystemSe(v18, 0LL);
  UserSvtEntity = (System_Int32_array **)CombineServantListViewItem__get_UserSvtEntity(v10, v19);
  v4->fields.baseUsrSvtData = (struct UserServantEntity_o *)UserSvtEntity;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.baseUsrSvtData, UserSvtEntity, v21, v22, v23, v24, v25, v26);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x9
  ListViewItem_o *v16; // x20
  const MethodInfo *v17; // x5
  int32_t selectNum; // w21
  const MethodInfo *v19; // x3
  int32_t klass; // w9
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x3
  __int64 v25; // x9
  __int64 v26; // x9
  CommonUI_o *v27; // x21
  CombineServantListViewManager___c_c *v28; // x8
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x9
  System_Action_o *_9__188_0; // x22
  Il2CppObject *v31; // x23
  struct CombineServantListViewManager___c_StaticFields *v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x9
  __int64 v40; // x9
  void *v41; // x0
  int v42; // w1
  __int64 v43; // x20
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+8h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_418A620 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, obj);
    sub_B2C35C(&CombineRootComponent_TypeInfo, v5);
    sub_B2C35C(&CombineServantListViewObject_TypeInfo, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__, v13);
    this = (CombineServantListViewManager_o *)sub_B2C35C(&CombineServantListViewManager___c_TypeInfo, v14);
    byte_418A620 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !obj )
    goto LABEL_48;
  v15 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v15
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v15 - 1] != CombineServantListViewObject_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)obj;
    goto LABEL_50;
  }
  this = (CombineServantListViewManager_o *)CombineServantListViewObject__GetItem(
                                              (CombineServantListViewObject_o *)obj,
                                              0LL);
  if ( !this )
    goto LABEL_48;
  v16 = (ListViewItem_o *)this;
  if ( ListViewItem__get_IsSelect((ListViewItem_o *)this, 0LL) )
  {
    selectNum = v16->fields.selectNum;
    ListViewItem__set_IsSelect(v16, 0, 0LL);
    --v4->fields.selectSum;
    CombineServantListViewManager__changeCombineEnableRestCnt(v4, 1, (CombineServantListViewItem_o *)v16, v19);
    this = (CombineServantListViewManager_o *)v4->fields.itemList;
    if ( this )
    {
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        &v44,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      while ( 1 )
      {
        v21 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v44,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v21 )
          break;
        if ( !v44.fields.current )
          sub_B2C434(v21, v22);
        klass = (int32_t)v44.fields.current[1].klass;
        if ( klass > selectNum )
          LODWORD(v44.fields.current[1].klass) = klass - 1;
      }
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v44,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      goto LABEL_45;
    }
LABEL_48:
    sub_B2C434(this, obj);
  }
  if ( !CombineServantListViewManager__IsSelectEnable(v4, (CombineServantListViewItem_o *)v16, 0, 0, 0, v17) )
    return;
  this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
    goto LABEL_48;
  this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
  if ( !this )
    goto LABEL_48;
  v25 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v25
    || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v25 - 1] != CombineRootComponent_TypeInfo )
  {
LABEL_50:
    sub_B2C728(this);
    if ( v42 != 1 )
      _Unwind_Resume(v41);
    v43 = *(_QWORD *)__cxa_begin_catch(v41);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v44,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v43 )
      sub_B2C400(v43, 0LL);
    goto LABEL_45;
  }
  if ( HIDWORD(this->fields.currentLvLabel) == 4 )
  {
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_48;
    v26 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v26
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v26 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    CombineRootComponent__SetTutorialProgress((CombineRootComponent_o *)this, 5, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v27 = (CommonUI_o *)this;
    v28 = CombineServantListViewManager___c_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager___c_TypeInfo);
      v28 = CombineServantListViewManager___c_TypeInfo;
    }
    static_fields = v28->static_fields;
    _9__188_0 = static_fields->__9__188_0;
    if ( !_9__188_0 )
    {
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) != 0 && !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
      }
      v31 = (Il2CppObject *)static_fields->__9;
      _9__188_0 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__188_0,
        v31,
        Method_CombineServantListViewManager___c__OnClickSelectMaterial_b__188_0__,
        0LL);
      v32 = CombineServantListViewManager___c_TypeInfo->static_fields;
      v32->__9__188_0 = _9__188_0;
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v32->__9__188_0,
        (System_Int32_array **)_9__188_0,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38);
    }
    if ( !v27 )
      goto LABEL_48;
    CommonUI__CloseTutorialNotificationDialogArrow_17996480(v27, _9__188_0, 0LL);
    this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_48;
    this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
    if ( !this )
      goto LABEL_48;
    v39 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v39
      || (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v39 - 1] != CombineRootComponent_TypeInfo )
    {
      goto LABEL_50;
    }
    if ( HIDWORD(this->fields.currentLvLabel) == 5 )
    {
      this = (CombineServantListViewManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !this )
        goto LABEL_48;
      this = (CombineServantListViewManager_o *)this->fields.dropObjectList;
      if ( !this )
        goto LABEL_48;
      v40 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v40
        && (CombineRootComponent_c *)this->klass->_2.typeHierarchy[v40 - 1] == CombineRootComponent_TypeInfo )
      {
        CombineRootComponent__ShowTutorial((CombineRootComponent_o *)this, 0LL);
        goto LABEL_44;
      }
      goto LABEL_50;
    }
  }
LABEL_44:
  v16->fields.selectNum = v4->fields.selectSum++;
  CombineServantListViewManager__changeCombineEnableRestCnt(v4, 0, (CombineServantListViewItem_o *)v16, v24);
LABEL_45:
  CombineServantListViewManager__RefrashListDisp(v4, v23);
}


void __fastcall CombineServantListViewManager__OnClickSelectPush(
        CombineServantListViewManager_o *this,
        ListViewObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x19
  CombineServantListViewItem_o *SelfUserGame; // x0
  const MethodInfo *v29; // x1
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  __int64 v36; // x9
  System_Int32_array **Item; // x0
  CombineServantListViewItem_o **v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  const MethodInfo *v45; // x2
  int64_t userSvtEntity; // x22
  __int128 v47; // q1
  UserServantEntity_o *Entity; // x26
  DataMasterBase_WarMaster__WarEntity__int__o *v49; // x21
  __int64 v50; // x22
  __int64 v51; // x23
  ServantEntity_o *v52; // x25
  ServantLimitImageMaster_o *Master_WarQuestSelectionMaster; // x21
  int32_t v54; // w22
  int32_t svtId; // w22
  int32_t v56; // w27
  int32_t v57; // w0
  int32_t ServantLimitCountSealAfter; // w23
  System_String_o *v59; // x21
  System_String_o *v60; // x22
  System_Object_array *v61; // x24
  int32_t Rarity; // w26
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  System_Int32_array **v69; // x26
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  System_Int32_array **v76; // x26
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  System_Int32_array **v83; // x25
  int32_t v84; // w0
  System_String_array **v85; // x2
  System_String_array **v86; // x3
  System_Boolean_array **v87; // x4
  System_Int32_array **v88; // x5
  System_Int32_array *v89; // x6
  System_Int32_array *v90; // x7
  System_Int32_array **v91; // x25
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  System_Int32_array **v98; // x25
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  System_Int32_array **v105; // x20
  System_String_o *v106; // x20
  System_String_o *v107; // x22
  System_String_o *v108; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v110; // x25
  __int64 v111; // x0
  __int64 v112; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v113; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v114; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  if ( (byte_418A621 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, obj);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5);
    sub_B2C35C(&CombineServantListViewObject_TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v9);
    sub_B2C35C(&DataManager_TypeInfo, v10);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&object___TypeInfo, v14);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v15);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v16);
    sub_B2C35C(&Rarity_TypeInfo, v17);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v19);
    sub_B2C35C(&SoundManager_TypeInfo, v20);
    sub_B2C35C(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__0__, v21);
    sub_B2C35C(&CombineServantListViewManager___c__DisplayClass189_0_TypeInfo, v22);
    sub_B2C35C(&StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, v23);
    sub_B2C35C(&StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, v24);
    sub_B2C35C(&StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, v25);
    sub_B2C35C(&StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, v26);
    byte_418A621 = 1;
  }
  v27 = sub_B2C42C(CombineServantListViewManager___c__DisplayClass189_0_TypeInfo);
  CombineServantListViewManager___c__DisplayClass189_0___ctor(
    (CombineServantListViewManager___c__DisplayClass189_0_o *)v27,
    0LL);
  if ( !v27 )
    goto LABEL_71;
  *(_QWORD *)(v27 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 16), (System_Int32_array **)this, v30, v31, v32, v33, v34, v35);
  if ( !obj )
    goto LABEL_71;
  v36 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v36
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v36 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B2C728(obj);
    goto LABEL_73;
  }
  Item = (System_Int32_array **)CombineServantListViewObject__GetItem((CombineServantListViewObject_o *)obj, 0LL);
  *(_QWORD *)(v27 + 24) = Item;
  v38 = (CombineServantListViewItem_o **)(v27 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v27 + 24), Item, v39, v40, v41, v42, v43, v44);
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
    CombineServantListViewManager__PushRequest(this, *v38, v45);
    return;
  }
  SelfUserGame = *v38;
  if ( !*v38 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v29);
  if ( !SelfUserGame )
    goto LABEL_71;
  v47 = *(_OWORD *)&SelfUserGame->fields.sortValue0;
  *(_OWORD *)&v114.fields.currentCryptoKey = *(_OWORD *)&SelfUserGame->fields.selectNum;
  *(_OWORD *)&v114.fields.fakeValue = v47;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v113 = v114;
  if ( userSvtEntity == CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v113, 0LL) )
    goto LABEL_18;
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !SelfUserGame )
    goto LABEL_71;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)SelfUserGame,
             userSvtEntity,
             (const MethodInfo_24E42F8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__GetEntity__);
  SelfUserGame = (CombineServantListViewItem_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)SelfUserGame,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Entity )
    goto LABEL_71;
  v49 = (DataMasterBase_WarMaster__WarEntity__int__o *)SelfUserGame;
  v51 = *(_QWORD *)&Entity->fields.svtId.fields.currentCryptoKey;
  v50 = *(_QWORD *)&Entity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v115.fields.currentCryptoKey = v51;
  *(_QWORD *)&v115.fields.fakeValue = v50;
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   v115,
                                                   0LL);
  if ( !v49 )
    goto LABEL_71;
  v52 = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                             v49,
                             (int32_t)SelfUserGame,
                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ServantLimitImageMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(Entity->fields.svtId, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                   Entity->fields.limitCount,
                                                   0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                   Master_WarQuestSelectionMaster,
                                                   v54,
                                                   (int32_t)SelfUserGame,
                                                   0LL);
  if ( !*v38 )
    goto LABEL_71;
  svtId = (*v38)->fields.svtId;
  v56 = (int)SelfUserGame;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(*v38, v29);
  if ( !SelfUserGame )
    goto LABEL_71;
  v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          *(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)&SelfUserGame->fields.basePosition.fields.y,
          0LL);
  ServantLimitCountSealAfter = ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                 Master_WarQuestSelectionMaster,
                                 svtId,
                                 v57,
                                 0LL);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v59 = LocalizationManager__Get((System_String_o *)StringLiteral_11997/*"SERVANT_STATUS_PUSH_CONFIRM_TITLE"*/, 0LL);
  v60 = LocalizationManager__Get((System_String_o *)StringLiteral_11996/*"SERVANT_STATUS_PUSH_CONFIRM_MESSAGE"*/, 0LL);
  v61 = (System_Object_array *)sub_B2C374(object___TypeInfo, 6LL);
  Rarity = UserServantEntity__getRarity(Entity, 0LL);
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(Rarity, 0LL);
  if ( !v61 )
LABEL_71:
    sub_B2C434(SelfUserGame, v29);
  v69 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( !v61->max_length )
    goto LABEL_73;
  v61->m_Items[0] = (Il2CppObject *)v69;
  sub_B2C2F8((BattleServantConfConponent_o *)v61->m_Items, v69, v63, v64, v65, v66, v67, v68);
  if ( !v52 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName(v52, 0LL);
  v76 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v61->max_length <= 1 )
    goto LABEL_73;
  v61->m_Items[1] = (Il2CppObject *)v76;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[1], v76, v70, v71, v72, v73, v74, v75);
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(v52, v56, -1, 0LL);
  v83 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v61->max_length <= 2 )
    goto LABEL_73;
  v61->m_Items[2] = (Il2CppObject *)v83;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[2], v83, v77, v78, v79, v80, v81, v82);
  SelfUserGame = *v38;
  if ( !*v38 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)CombineServantListViewItem__get_UserSvtEntity(SelfUserGame, v29);
  if ( !SelfUserGame )
    goto LABEL_71;
  v84 = UserServantEntity__getRarity((UserServantEntity_o *)SelfUserGame, 0LL);
  SelfUserGame = (CombineServantListViewItem_o *)Rarity__getRarityType(v84, 0LL);
  v91 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v61->max_length <= 3 )
    goto LABEL_73;
  v61->m_Items[3] = (Il2CppObject *)v91;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[3], v91, v85, v86, v87, v88, v89, v90);
  if ( !*v38 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)(*v38)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getClassName((ServantEntity_o *)SelfUserGame, 0LL);
  v98 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
      goto LABEL_74;
  }
  if ( v61->max_length <= 4 )
    goto LABEL_73;
  v61->m_Items[4] = (Il2CppObject *)v98;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[4], v98, v92, v93, v94, v95, v96, v97);
  if ( !*v38 )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)(*v38)->fields.servantEntity;
  if ( !SelfUserGame )
    goto LABEL_71;
  SelfUserGame = (CombineServantListViewItem_o *)ServantEntity__getName(
                                                   (ServantEntity_o *)SelfUserGame,
                                                   ServantLimitCountSealAfter,
                                                   -1,
                                                   0LL);
  v105 = (System_Int32_array **)SelfUserGame;
  if ( SelfUserGame )
  {
    SelfUserGame = (CombineServantListViewItem_o *)sub_B2C41C(SelfUserGame, v61->obj.klass->_1.element_class);
    if ( !SelfUserGame )
    {
LABEL_74:
      v112 = sub_B2C454(SelfUserGame);
      sub_B2C400(v112, 0LL);
    }
  }
  if ( v61->max_length <= 5 )
  {
LABEL_73:
    v111 = sub_B2C460(SelfUserGame);
    sub_B2C400(v111, 0LL);
  }
  v61->m_Items[5] = (Il2CppObject *)v105;
  sub_B2C2F8((BattleServantConfConponent_o *)&v61->m_Items[5], v105, v99, v100, v101, v102, v103, v104);
  v106 = System_String__Format_44384256(v60, v61, 0LL);
  v107 = LocalizationManager__Get((System_String_o *)StringLiteral_11995/*"SERVANT_STATUS_PUSH_CONFIRM_DECIDE"*/, 0LL);
  v108 = LocalizationManager__Get((System_String_o *)StringLiteral_11994/*"SERVANT_STATUS_PUSH_CONFIRM_CANCEL"*/, 0LL);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v110 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(
    v110,
    (Il2CppObject *)v27,
    Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__0__,
    0LL);
  SelfUserGame = (CombineServantListViewItem_o *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !Instance )
    goto LABEL_71;
  CommonUI__OpenConfirmDialog_17970624(
    Instance,
    v59,
    v106,
    v107,
    v108,
    v110,
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

  if ( (byte_418A630 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A630 = 1;
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
      sub_B2C434(v3, v4);
    sort->fields.isAscendingOrder ^= 1u;
    ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnClickSortKind(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t itemType; // w8
  int v7; // w9
  int32_t v8; // w20
  bool v9; // w21
  WebViewManager_o *Instance; // x0
  ListViewSort_o *sort; // x22
  CommonUI_o *v12; // x23
  ServantSortSelectMenu_CallbackFunc_o *v13; // x24
  __int64 v14; // x0
  __int64 v15; // x1

  if ( (byte_418A62C & 1) == 0 )
  {
    sub_B2C35C(&ServantSortSelectMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_CombineServantListViewManager_EndSelectSortKind__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_B2C35C(&SoundManager_TypeInfo, v5);
    byte_418A62C = 1;
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
      v7 = 3;
    else
      v7 = 1;
    if ( itemType )
      v8 = v7;
    else
      v8 = 0;
    v9 = (itemType | 4) == 5;
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sort = this->fields.sort;
    v12 = (CommonUI_o *)Instance;
    v13 = (ServantSortSelectMenu_CallbackFunc_o *)sub_B2C42C(ServantSortSelectMenu_CallbackFunc_TypeInfo);
    ServantSortSelectMenu_CallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndSelectSortKind__,
      0LL);
    if ( !v12 )
      sub_B2C434(v14, v15);
    CommonUI__OpenServantSortSelectMenu(v12, v8, sort, v9, v13, 0LL);
  }
}


void __fastcall CombineServantListViewManager__OnLongPushListView(
        CombineServantListViewManager_o *this,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  __int64 v13; // x9
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  Il2CppObject *current; // x23
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  CombineRootComponent_o *combineRootComponent; // x0
  const MethodInfo *v19; // x1
  struct UserServantEntity_o *UserSvtEntity; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  void *v27; // x0
  int v28; // w1
  __int64 v29; // x21
  System_Collections_Generic_List_Enumerator_T__o v30; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418A625 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, item);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B2C35C(&SoundManager_TypeInfo, v10);
    sub_B2C35C(&TutorialFlag_TypeInfo, v11);
    byte_418A625 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_28617756(102, 0LL) && (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    if ( item
      && ((v13 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1),
           *(&item->klass->_2.bitflags2 + 1) < (unsigned int)v13)
       || (CombineServantListViewItem_c *)item->klass->_2.typeHierarchy[v13 - 1] != CombineServantListViewItem_TypeInfo) )
    {
      sub_B2C728(item);
      if ( v28 != 1 )
        _Unwind_Resume(v27);
      v29 = *(_QWORD *)__cxa_begin_catch(v27);
      __cxa_end_catch();
      System_Collections_Generic_List_Enumerator_long___Dispose(
        &v31,
        (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      if ( v29 )
        sub_B2C400(v29, 0LL);
    }
    else
    {
      selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
      this->fields.isSelectMaterial = 0;
      if ( selectedMaterialUserServantIdList && selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v30,
          selectedMaterialUserServantIdList,
          (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v31 = v30;
        while ( 1 )
        {
          v16 = System_Collections_Generic_List_Enumerator_long___MoveNext(
                  &v31,
                  (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( !v16 )
            break;
          if ( !item )
            sub_B2C434(v16, v17);
          current = v31.fields.current;
          if ( current == (Il2CppObject *)CombineServantListViewItem__get_UserSvtId(
                                            (CombineServantListViewItem_o *)item,
                                            v17) )
            this->fields.isSelectMaterial = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v31,
          (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
      }
    }
    CombineServantListViewManager__SetScrollViewEnabled(this, 0, v12);
    if ( !item
      || (UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity((CombineServantListViewItem_o *)item, v19),
          this->fields.selectUsrSvtEntity = UserSvtEntity,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.selectUsrSvtEntity,
            (System_Int32_array **)UserSvtEntity,
            v21,
            v22,
            v23,
            v24,
            v25,
            v26),
          (combineRootComponent = this->fields.combineRootComponent) == 0LL) )
    {
      sub_B2C434(combineRootComponent, v19);
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

  if ( (byte_418A613 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_418A613 = 1;
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
          sub_B2C434(v14, v7);
        }
        UIScrollView__UpdatePosition(v14, 0LL);
      }
      callbackFunc2 = this->fields.callbackFunc2;
      this->fields.callbackFunc2 = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.callbackFunc2, 0LL, v8, v9, v10, v11, v12, v13);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  DataManager_o *limitCountSupport; // x0
  const MethodInfo *v14; // x1
  DataManager_o *v15; // x23
  UserServantEntity_o *UserSvtEntity; // x19
  UserServantCollectionMaster_o *v17; // x21
  int64_t v18; // x22
  __int64 v19; // x24
  __int64 v20; // x25
  UserServantCollectionEntity_o *EntityDefinitely; // x22
  __int128 v22; // q1
  UserServantEntity_Fields *p_fields; // x24
  __int64 v24; // x8
  int64_t v25; // x0
  __int128 v26; // q0
  NetworkManager_ResultCallbackFunc_o *v27; // x21
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int128 v29; // q0
  CardFavoriteRequest_o *v30; // x20
  int32_t v31; // w27
  int32_t v32; // w28
  int32_t v33; // w21
  bool IsLock; // w23
  char v35; // w24
  int32_t commonFlag; // w26
  int32_t battleVoice; // w22
  int32_t randomSettingOwn; // w25
  int32_t v39; // w0
  __int64 v40; // x8
  int32_t randomSettingSupport; // w19
  int32_t v42; // [xsp+50h] [xbp-110h]
  int32_t v43; // [xsp+54h] [xbp-10Ch]
  int64_t targetUsrSVtId; // [xsp+58h] [xbp-108h]
  int64_t v45; // [xsp+60h] [xbp-100h]
  struct System_Threading_Thread_o *writeMasterDataThread; // [xsp+68h] [xbp-F8h]
  int64_t v47; // [xsp+70h] [xbp-F0h]
  __int64 v48; // [xsp+78h] [xbp-E8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v49; // [xsp+80h] [xbp-E0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v50; // [xsp+A0h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v51; // [xsp+C0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+E0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v53; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v54; // 0:x0.16

  if ( (byte_418A622 & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineServantListViewManager_EndCardFavoriteRequest__, selectItem);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v9);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_418A622 = 1;
  }
  limitCountSupport = (DataManager_o *)UserGameMaster__getSelfUserGame(0LL);
  if ( !selectItem )
    goto LABEL_21;
  v15 = limitCountSupport;
  UserSvtEntity = CombineServantListViewItem__get_UserSvtEntity(selectItem, v14);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  limitCountSupport = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         limitCountSupport,
                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !v15 || !UserSvtEntity )
    goto LABEL_21;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  v18 = *(_QWORD *)&v15->fields.m_CachedPtr;
  v20 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&UserSvtEntity->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v53.fields.currentCryptoKey = v20;
  *(_QWORD *)&v53.fields.fakeValue = v19;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v53, 0LL);
  if ( !v17 )
    goto LABEL_21;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(v17, v18, (int32_t)limitCountSupport, 0LL);
  limitCountSupport = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_21;
  CommonUI__SetConnectMarkFadeInLag((CommonUI_o *)limitCountSupport, 0, 0LL);
  v22 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  p_fields = &UserSvtEntity->fields;
  v24 = *(_QWORD *)&v15->fields.writeMasterDataThreadEnd;
  *(_OWORD *)&v52.fields.currentCryptoKey = *(_OWORD *)&UserSvtEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v52.fields.fakeValue = v22;
  v48 = v24;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v51 = v52;
  v25 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v51, 0LL);
  v26 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  writeMasterDataThread = v15->fields.writeMasterDataThread;
  v47 = v25;
  *(_OWORD *)&v50.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v50.fields.fakeValue = v26;
  v45 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v50, 0LL);
  v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v27,
    (Il2CppObject *)this,
    Method_CombineServantListViewManager_EndCardFavoriteRequest__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        v27,
                                        (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  v29 = *(_OWORD *)&UserSvtEntity->fields.id.fields.fakeValue;
  v30 = (CardFavoriteRequest_o *)Request_WarBoardWallAttackRequest;
  *(_OWORD *)&v49.fields.currentCryptoKey = *(_OWORD *)&p_fields->id.fields.currentCryptoKey;
  *(_OWORD *)&v49.fields.fakeValue = v29;
  targetUsrSVtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v49, 0LL);
  v43 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(UserSvtEntity->fields.imageLimitCount, 0LL);
  v42 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(UserSvtEntity->fields.dispLimitCount, 0LL);
  v31 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          UserSvtEntity->fields.commandCardLimitCount,
          0LL);
  v32 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(UserSvtEntity->fields.iconLimitCount, 0LL);
  v33 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          UserSvtEntity->fields.portraitLimitCount,
          0LL);
  IsLock = UserServantEntity__IsLock(UserSvtEntity, 0LL);
  limitCountSupport = (DataManager_o *)UserServantEntity__IsChoice(UserSvtEntity, 0LL);
  if ( !EntityDefinitely )
    goto LABEL_21;
  v35 = (char)limitCountSupport;
  commonFlag = EntityDefinitely->fields.svtCommonFlag;
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                  UserSvtEntity->fields.battleVoice,
                  0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                       UserSvtEntity->fields.randomLimitCount,
                       0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
          UserSvtEntity->fields.randomLimitCountSupport,
          0LL);
  v40 = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v54.fields.fakeValue = *(_QWORD *)&UserSvtEntity->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v39;
  *(_QWORD *)&v54.fields.currentCryptoKey = v40;
  limitCountSupport = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v54, 0LL);
  if ( !v30 )
LABEL_21:
    sub_B2C434(limitCountSupport, v14);
  CardFavoriteRequest__beginRequest(
    v30,
    targetUsrSVtId,
    v43,
    v42,
    v31,
    v32,
    v33,
    writeMasterDataThread == (struct System_Threading_Thread_o *)v45,
    IsLock,
    v35 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v48 != v47,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RefrashListDisp(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  System_Collections_Generic_List_CombineServantListViewObject__o *ObjectList; // x0
  __int64 v27; // x1
  CombineRootComponent_c **v28; // x20
  __int64 resExpBar; // x0
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t itemType; // w8
  struct UserServantEntity_o *v34; // x8
  int32_t adjustAtk; // w22
  int v36; // w21
  char v37; // w23
  char v38; // w26
  char v39; // w24
  bool isSecondAdjustAtkMax; // w25
  System_Collections_Generic_List_long__o *v41; // x21
  _BOOL8 v42; // x0
  __int64 v43; // x1
  Il2CppObject *current; // x22
  __int64 v45; // x9
  int64_t UserSvtId; // x0
  UserServantEntity_o *v47; // x22
  System_Int64_array *v48; // x0
  int32_t v49; // w21
  struct UserServantEntity_o *v50; // x9
  UnityEngine_Component_o *levelUpInfoImg; // x8
  struct UserServantEntity_o *v52; // x8
  int32_t *p_getHpUpVal; // x22
  _BOOL8 v54; // x0
  __int64 v55; // x1
  Il2CppObject *v56; // x26
  __int64 v57; // x9
  int klass_high; // w23
  __int64 v59; // x1
  int klass; // w8
  int monitor_high; // w9
  int32_t v62; // w10
  int32_t v63; // w9
  UserServantEntity_o *v64; // x0
  int32_t v65; // w10
  int32_t v66; // w9
  char v67; // w25
  UILabel_o *selectInfoLabel; // x21
  System_String_o *v69; // x22
  Il2CppObject *v70; // x23
  Il2CppObject *v71; // x0
  struct MenuListControl_o *menuListCtr; // x8
  System_Collections_Generic_List_EventInfoData__o *combineEventList; // x21
  float v74; // s0
  float v75; // s8
  float v76; // s9
  int32_t v77; // w0
  int32_t selectQp; // s0
  int32_t v79; // w0
  UILabel_o *spendQpLabel; // x21
  Il2CppObject *v81; // x0
  UIWidget_o *v82; // x21
  int v83; // s0
  UILabel_o *getExpLabel; // x21
  Il2CppObject *v88; // x0
  const MethodInfo *v89; // x2
  char v90; // w24
  int32_t v91; // w8
  struct UserServantEntity_o *v92; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v93; // x21
  __int64 v94; // x22
  __int64 v95; // x23
  int32_t v96; // w8
  int32_t v97; // w21
  const MethodInfo *v98; // x4
  struct UserServantEntity_o *v99; // x8
  int32_t increLv; // w22
  int32_t lv; // w24
  int v102; // w25
  UILabel_o *resLvLabel; // x24
  UIWidget_o *v104; // x22
  UnityEngine_Transform_o *v105; // x23
  CombineServantListViewManager_c *v106; // x8
  struct UILabel_o *v107; // x9
  struct System_String_o *mText; // x9
  float v109; // s0
  float v110; // s1
  struct UserServantEntity_o *v111; // x8
  int v112; // s0
  bool v116; // w22
  Il2CppObject *v117; // x21
  __int64 v118; // x9
  int v119; // w8
  bool v120; // w8
  bool v121; // w10
  _BOOL8 v122; // x0
  __int64 v123; // x1
  int v124; // w8
  System_Collections_Generic_List_long__o *v125; // x21
  _BOOL8 v126; // x0
  __int64 v127; // x1
  Il2CppObject *v128; // x22
  __int64 v129; // x9
  int64_t v130; // x0
  int64_t v131; // x1
  UserServantEntity_o *v132; // x22
  System_Int64_array *v133; // x0
  UILabel_o *v134; // x21
  bool v135; // w22
  __int64 v136; // x9
  _BOOL8 v137; // x0
  __int64 v138; // x1
  struct System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x8
  const MethodInfo *v140; // x3
  const MethodInfo *v141; // x3
  int32_t v142; // w8
  int v143; // w8
  __int64 v144; // x21
  __int64 v145; // x9
  const MethodInfo *v146; // x2
  __int64 v147; // x9
  void *v148; // x0
  int v149; // w1
  __int64 v150; // x21
  char v151; // [xsp+4h] [xbp-10Ch]
  int32_t v152; // [xsp+8h] [xbp-108h]
  char v153; // [xsp+Ch] [xbp-104h]
  int32_t adjustHp; // [xsp+10h] [xbp-100h]
  char v155; // [xsp+14h] [xbp-FCh]
  __int64 v156; // [xsp+18h] [xbp-F8h]
  char v157; // [xsp+20h] [xbp-F0h]
  int32_t selectMax; // [xsp+24h] [xbp-ECh] BYREF
  _BYTE v159[44]; // [xsp+28h] [xbp-E8h] BYREF
  int v160; // [xsp+54h] [xbp-BCh]
  int32_t tdMaxLv[2]; // [xsp+58h] [xbp-B8h] BYREF
  int32_t v162[2]; // [xsp+60h] [xbp-B0h] BYREF
  __int64 lateExp; // [xsp+68h] [xbp-A8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v164; // [xsp+70h] [xbp-A0h] BYREF
  TreasureDvcInfo_o *tdInfo; // [xsp+88h] [xbp-88h] BYREF
  int32_t tmpTargetLv; // [xsp+94h] [xbp-7Ch] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+98h] [xbp-78h] BYREF
  int32_t maxAjustAtk[4]; // [xsp+A0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v169; // 0:x0.16
  UnityEngine_Vector3_o v170; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A605 & 1) == 0 )
  {
    sub_B2C35C(&CombineRootComponent_TypeInfo, method);
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, v3);
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, v4);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B2C35C(&int_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v14);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v18);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v19);
    sub_B2C35C(&LocalizationManager_TypeInfo, v20);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v24);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v25);
    byte_418A605 = 1;
  }
  tmpTargetLv = 0;
  tdInfo = 0LL;
  memset(&v164, 0, sizeof(v164));
  *(_QWORD *)v162 = 0LL;
  lateExp = 0LL;
  *(_QWORD *)tdMaxLv = 0LL;
  v160 = 0;
  ObjectList = CombineServantListViewManager__get_ObjectList(this, method);
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  *(_QWORD *)&this->fields.selectQp = 0LL;
  *(_QWORD *)secondMaxAdjustAtk = 0LL;
  *(_QWORD *)maxAjustAtk = 0LL;
  v28 = (CombineRootComponent_c **)ObjectList;
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
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.qpAndExpInfoBg, v30);
    CombineServantListViewManager__setDispSprite(this, 1, this->fields.enhancementInfoBg, v31);
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( baseUsrSvtData )
  {
    itemType = this->fields.itemType;
    if ( itemType == 5 )
    {
      v41 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
      System_Collections_Generic_List_long____ctor(
        v41,
        (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
      resExpBar = (__int64)this->fields.itemList;
      if ( !resExpBar )
        goto LABEL_215;
      System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v159,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v164 = *(System_Collections_Generic_List_Enumerator_T__o *)v159;
      while ( 1 )
      {
        v42 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v164,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v42 )
          break;
        current = v164.fields.current;
        if ( !v164.fields.current )
          goto LABEL_223;
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v164.fields.current, 0LL) )
        {
          v45 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v45
            || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v45 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B2C728(current);
LABEL_225:
            sub_B2C434(v130, v131);
          }
          UserSvtId = CombineServantListViewItem__get_UserSvtId(
                        (CombineServantListViewItem_o *)current,
                        (const MethodInfo *)CombineServantListViewItem_TypeInfo);
          if ( !v41 )
            sub_B2C434(UserSvtId, UserSvtId);
          System_Collections_Generic_List_long___Add(
            v41,
            UserSvtId,
            (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
        }
      }
      *(_DWORD *)&v159[4 * v160++ + 24] = 427;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v164,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v160 && *(_DWORD *)&v159[4 * v160 + 20] == 427 )
        --v160;
      if ( !v41 )
        goto LABEL_215;
      v47 = this->fields.baseUsrSvtData;
      v48 = System_Collections_Generic_List_long___ToArray(
              v41,
              (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
      resExpBar = NpCombineControl__GetNpLv(v47, v48, &tmpTargetLv, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v49 = resExpBar;
      resExpBar = UserServantEntity__getTreasureDeviceInfo(this->fields.baseUsrSvtData, &tdInfo, -1, -1, 0, 0LL);
      if ( !tdInfo
        || (v50 = this->fields.baseUsrSvtData) == 0LL
        || (resExpBar = NpCombineControl__GetQp(tdInfo->fields.id, v50->fields.treasureDeviceLv1, v49, 0LL),
            levelUpInfoImg = (UnityEngine_Component_o *)this->fields.levelUpInfoImg,
            this->fields.selectQp = resExpBar,
            !levelUpInfoImg)
        || (resExpBar = (__int64)UnityEngine_Component__get_gameObject(levelUpInfoImg, 0LL),
            (v52 = this->fields.baseUsrSvtData) == 0LL)
        || !resExpBar )
      {
LABEL_215:
        sub_B2C434(resExpBar, v27);
      }
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, v52->fields.treasureDeviceLv1 < v49, 0LL);
    }
    else if ( itemType == 1 )
    {
      resExpBar = UserServantEntity__getCombineQp(baseUsrSvtData, 0LL);
      v34 = this->fields.baseUsrSvtData;
      if ( !v34 )
        goto LABEL_215;
      adjustAtk = v34->fields.adjustAtk;
      v36 = resExpBar;
      adjustHp = v34->fields.adjustHp;
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
      v37 = resExpBar;
      resExpBar = UserServantEntity__isAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v38 = resExpBar;
      resExpBar = UserServantEntity__isSecondAdjustHpMax(this->fields.baseUsrSvtData, 0LL);
      if ( !this->fields.baseUsrSvtData )
        goto LABEL_215;
      v39 = resExpBar;
      isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
      this->fields.isAllUpMax = v37 & v38 & 1;
      this->fields.isSecondAllUpMax = v39 & isSecondAdjustAtkMax & 1;
      goto LABEL_40;
    }
  }
  isSecondAdjustAtkMax = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  adjustAtk = 0;
  v36 = 0;
  adjustHp = 0;
LABEL_40:
  v151 = v38;
  v152 = adjustAtk;
  resExpBar = (__int64)this->fields.itemList;
  v153 = v37;
  if ( !resExpBar )
    goto LABEL_215;
  p_getHpUpVal = &this->fields.getHpUpVal;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v159,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v155 = 0;
  v156 = 0LL;
  v157 = 0;
  v164 = *(System_Collections_Generic_List_Enumerator_T__o *)v159;
  while ( 1 )
  {
    v54 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v164,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v54 )
      break;
    v56 = v164.fields.current;
    if ( !v164.fields.current )
      sub_B2C434(v54, v55);
    v57 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v164.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v57
      || (CombineServantListViewItem_c *)v164.fields.current->klass->_2.typeHierarchy[v57 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B2C728(v164.fields.current);
      goto LABEL_215;
    }
    klass_high = HIDWORD(v164.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v164.fields.current, 0LL) )
    {
      if ( BYTE4(v56[14].klass) )
      {
        monitor_high = HIDWORD(v56[13].monitor);
        klass = (int)v56[14].klass;
        if ( klass_high == 4 )
        {
          if ( !this->fields.isSecondAllUpMax )
          {
            if ( !(v39 & 1 | (monitor_high < 1)) )
            {
              v62 = *p_getHpUpVal + monitor_high;
              *p_getHpUpVal = v62;
              if ( v62 + adjustHp >= secondMaxAdjustAtk[1] )
              {
                *p_getHpUpVal = secondMaxAdjustAtk[1] - adjustHp;
                LOBYTE(v156) = 1;
              }
            }
            if ( klass >= 1 && !isSecondAdjustAtkMax )
            {
              v63 = LODWORD(v56[14].klass) + this->fields.getAtkUpVal;
              this->fields.getAtkUpVal = v63;
              if ( v63 + v152 >= secondMaxAdjustAtk[0] )
              {
                this->fields.getAtkUpVal = secondMaxAdjustAtk[0] - v152;
                v155 = 1;
              }
            }
          }
        }
        else if ( klass_high <= 3 && !this->fields.isAllUpMax )
        {
          if ( !(v153 & 1 | (monitor_high < 1)) )
          {
            v65 = *p_getHpUpVal + monitor_high;
            *p_getHpUpVal = v65;
            if ( v65 + adjustHp >= maxAjustAtk[1] )
            {
              *p_getHpUpVal = maxAjustAtk[1] - adjustHp;
              v157 = 1;
            }
          }
          if ( klass >= 1 && (v151 & 1) == 0 )
          {
            v66 = LODWORD(v56[14].klass) + this->fields.getAtkUpVal;
            this->fields.getAtkUpVal = v66;
            if ( v66 + v152 >= maxAjustAtk[0] )
            {
              this->fields.getAtkUpVal = maxAjustAtk[0] - v152;
              BYTE4(v156) = 1;
            }
          }
        }
      }
      v64 = this->fields.baseUsrSvtData;
      if ( !v64 )
        sub_B2C434(0LL, v59);
      if ( !UserServantEntity__isLevelMax(v64, 0LL) )
        this->fields.selectExp += LODWORD(v56[10].monitor);
      if ( this->fields.itemType != 5 )
        this->fields.selectQp += v36;
    }
    else
    {
      BYTE4(v56[10].monitor) = this->fields.selectSum >= this->fields.selectMax;
    }
  }
  *(_DWORD *)&v159[4 * v160++ + 24] = 980;
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v164,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  while ( 1 )
  {
    v67 = v156;
    if ( v160 && *(_DWORD *)&v159[4 * v160 + 20] == 980 )
      --v160;
    selectInfoLabel = this->fields.selectInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v69 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
    *(_DWORD *)v159 = this->fields.selectSum;
    v70 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v159);
    selectMax = this->fields.selectMax;
    v71 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &selectMax);
    resExpBar = (__int64)System_String__Format_44301068(v69, v70, v71, 0LL);
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
      v74 = CheckCombineResStatus__GetExpCampaignValue(
              (CheckCombineResStatus_o *)resExpBar,
              this->fields.baseUsrSvtData,
              combineEventList,
              0LL);
      resExpBar = (__int64)this->fields.combineResStatus;
      if ( !resExpBar )
        goto LABEL_215;
      v75 = v74;
      v76 = CheckCombineResStatus__GetQpCampaignValue(
              (CheckCombineResStatus_o *)resExpBar,
              this->fields.baseUsrSvtData,
              combineEventList,
              0LL);
    }
    else
    {
      v76 = 1.0;
      v75 = 1.0;
    }
    v77 = UnityEngine_Mathf__CeilToInt(v75 * (float)this->fields.selectExp, 0LL);
    selectQp = this->fields.selectQp;
    this->fields.selectExp = v77;
    v79 = UnityEngine_Mathf__CeilToInt(v76 * (float)selectQp, 0LL);
    this->fields.selectQp = v79;
    spendQpLabel = this->fields.spendQpLabel;
    *(_DWORD *)v159 = v79;
    v81 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v159);
    resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v81, 0LL);
    if ( !spendQpLabel )
      goto LABEL_215;
    UILabel__set_text(spendQpLabel, (System_String_o *)resExpBar, 0LL);
    if ( (this->fields.itemType | 4) == 5 )
    {
      v82 = (UIWidget_o *)this->fields.spendQpLabel;
      if ( this->fields.selectQp <= this->fields.userQP )
      {
        *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_white(0LL);
        if ( !v82 )
          goto LABEL_215;
      }
      else
      {
        *(UnityEngine_Color_o *)&v83 = UnityEngine_Color__get_red(0LL);
        if ( !v82 )
          goto LABEL_215;
      }
      UIWidget__set_color(v82, *(UnityEngine_Color_o *)&v83, 0LL);
    }
    getExpLabel = this->fields.getExpLabel;
    *(_DWORD *)v159 = this->fields.selectExp;
    v88 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, v159);
    resExpBar = (__int64)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v88, 0LL);
    if ( !getExpLabel )
      goto LABEL_215;
    UILabel__set_text(getExpLabel, (System_String_o *)resExpBar, 0LL);
    v90 = v155;
    if ( this->fields.baseUsrSvtData )
    {
      v91 = this->fields.itemType;
      if ( v91 == 1 )
      {
        resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !resExpBar )
          goto LABEL_215;
        resExpBar = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                               (DataManager_o *)resExpBar,
                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
        v92 = this->fields.baseUsrSvtData;
        if ( !v92 )
          goto LABEL_215;
        v93 = (DataMasterBase_WarMaster__WarEntity__int__o *)resExpBar;
        v95 = *(_QWORD *)&v92->fields.svtId.fields.currentCryptoKey;
        v94 = *(_QWORD *)&v92->fields.svtId.fields.fakeValue;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        }
        *(_QWORD *)&v169.fields.currentCryptoKey = v95;
        *(_QWORD *)&v169.fields.fakeValue = v94;
        resExpBar = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v169, 0LL);
        if ( !v93 )
          goto LABEL_215;
        resExpBar = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v93,
                               resExpBar,
                               (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
        if ( !resExpBar )
          goto LABEL_215;
        v96 = *(_DWORD *)(resExpBar + 132);
        resExpBar = (__int64)this->fields.baseUsrSvtData;
        this->fields.expType = v96;
        if ( !resExpBar )
          goto LABEL_215;
        this->fields.totalExp = *(_DWORD *)(resExpBar + 260) + this->fields.selectExp;
        this->fields.checkLv = *(_DWORD *)(resExpBar + 256);
        resExpBar = UserServantEntity__getLevelMax((UserServantEntity_o *)resExpBar, 0LL);
        if ( !this->fields.resCurrentExpBar )
          goto LABEL_215;
        v97 = resExpBar;
        resExpBar = (__int64)UnityEngine_Component__get_gameObject(
                               (UnityEngine_Component_o *)this->fields.resCurrentExpBar,
                               0LL);
        if ( !resExpBar )
          goto LABEL_215;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 1, 0LL);
        if ( this->fields.checkLv != v97 )
        {
          do
            resExpBar = CombineServantListViewManager__checkIncrementLv(
                          this,
                          &this->fields.checkLv,
                          &this->fields.increLv,
                          this->fields.totalExp,
                          v98);
          while ( (resExpBar & 1) == 0 );
          v99 = this->fields.baseUsrSvtData;
          if ( !v99 )
            goto LABEL_215;
          resExpBar = (__int64)this->fields.combineResStatus;
          if ( !resExpBar )
            goto LABEL_215;
          increLv = this->fields.increLv;
          lv = v99->fields.lv;
          CheckCombineResStatus__setSvtExp(
            (CheckCombineResStatus_o *)resExpBar,
            (float *)&lateExp + 1,
            (int32_t *)&lateExp,
            this->fields.totalExp,
            increLv,
            v97,
            this->fields.expType,
            0LL);
          resExpBar = (__int64)this->fields.resLvLabel;
          if ( !resExpBar )
            goto LABEL_215;
          v102 = increLv - lv;
          resExpBar = (__int64)UnityEngine_Component__GetComponent_WebViewObject_(
                                 (UnityEngine_Component_o *)resExpBar,
                                 (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
          resLvLabel = this->fields.resLvLabel;
          v104 = (UIWidget_o *)resExpBar;
          if ( v102 < 1 )
          {
            v111 = this->fields.baseUsrSvtData;
            if ( !v111 )
              goto LABEL_215;
            resExpBar = (__int64)System_Int32__ToString((int)v111 + 256, 0LL);
            v67 = v156;
            if ( !resLvLabel )
              goto LABEL_215;
            UILabel__set_text(resLvLabel, (System_String_o *)resExpBar, 0LL);
            resExpBar = (__int64)this->fields.levelUpInfoImg;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            v90 = v155;
            if ( !resExpBar )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
            *(UnityEngine_Color_o *)&v112 = UnityEngine_Color__get_white(0LL);
            if ( !v104 )
              goto LABEL_215;
            UIWidget__set_color(v104, *(UnityEngine_Color_o *)&v112, 0LL);
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
            v105 = (UnityEngine_Transform_o *)resExpBar;
            v106 = CombineServantListViewManager_TypeInfo;
            if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
              v106 = CombineServantListViewManager_TypeInfo;
            }
            v107 = this->fields.resLvLabel;
            if ( !v107 )
              goto LABEL_215;
            mText = v107->fields.mText;
            if ( !mText )
              goto LABEL_215;
            if ( !v105 )
              goto LABEL_215;
            v170.fields.y = 0.0;
            v170.fields.z = 0.0;
            v170.fields.x = (float)(mText->fields.m_stringLength * v106->static_fields->RES_LVUP_ARROW_SPACING);
            UnityEngine_Transform__set_localPosition(v105, v170, 0LL);
            if ( !v104 )
              goto LABEL_215;
            UIWidget__set_color(v104, CombineServantListViewManager_TypeInfo->static_fields->LV_UP_COLOR, 0LL);
            resExpBar = (__int64)this->fields.resExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, 1.0, 0LL);
            resExpBar = (__int64)this->fields.resNextExpBar;
            v90 = v155;
            if ( !resExpBar )
              goto LABEL_215;
            v109 = *((float *)&lateExp + 1);
            v110 = 0.0;
            if ( v102 != 1 )
              v110 = 1.0;
            if ( this->fields.increLv == v97 )
              v109 = v110;
            UIProgressBar__set_value((UIProgressBar_o *)resExpBar, v109, 0LL);
            resExpBar = (__int64)this->fields.resCurrentExpBar;
            if ( !resExpBar )
              goto LABEL_215;
            resExpBar = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)resExpBar, 0LL);
            v67 = v156;
            if ( !resExpBar )
              goto LABEL_215;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)resExpBar, 0, 0LL);
          }
        }
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        v116 = this->fields.increLv >= v97;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v159,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v164 = *(System_Collections_Generic_List_Enumerator_T__o *)v159;
        while ( 1 )
        {
          v122 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v164,
                   (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v122 )
            break;
          v117 = v164.fields.current;
          if ( !v164.fields.current )
            goto LABEL_219;
          v118 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v164.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v118
            || (CombineServantListViewItem_c *)v164.fields.current->klass->_2.typeHierarchy[v118 - 1] != CombineServantListViewItem_TypeInfo )
          {
            sub_B2C728(v164.fields.current);
LABEL_218:
            sub_B2C728(v117);
LABEL_219:
            sub_B2C434(v122, v123);
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v164.fields.current, 0LL) )
          {
            v119 = BYTE4(v117[14].klass);
            BYTE5(v117[17].monitor) = v116;
            if ( v119 )
            {
              v120 = SLODWORD(v117[14].klass) > 0;
              v121 = SHIDWORD(v117[13].monitor) > 0;
              BYTE5(v117[19].monitor) = BYTE4(v156) & v120;
              HIBYTE(v117[19].monitor) = v90 & v120;
              BYTE4(v117[19].monitor) = v157 & v121;
              BYTE6(v117[19].monitor) = v67 & v121;
            }
          }
        }
        *(_DWORD *)&v159[4 * v160++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v164,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v160 )
        {
          v124 = v160 - 1;
          if ( *(_DWORD *)&v159[4 * v160 + 20] == 2180 )
            goto LABEL_180;
        }
        v91 = this->fields.itemType;
      }
      if ( v91 == 5 )
      {
        v125 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
        System_Collections_Generic_List_long____ctor(
          v125,
          (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v159,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v164 = *(System_Collections_Generic_List_Enumerator_T__o *)v159;
        while ( 1 )
        {
          v126 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v164,
                   (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v126 )
            break;
          v128 = v164.fields.current;
          if ( !v164.fields.current )
            sub_B2C434(v126, v127);
          if ( ListViewItem__get_IsSelect((ListViewItem_o *)v164.fields.current, 0LL) )
          {
            v129 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v128->klass->_2.bitflags2 + 1) < (unsigned int)v129
              || (CombineServantListViewItem_c *)v128->klass->_2.typeHierarchy[v129 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B2C728(v128);
LABEL_223:
              sub_B2C434(v42, v43);
            }
            v130 = CombineServantListViewItem__get_UserSvtId(
                     (CombineServantListViewItem_o *)v128,
                     (const MethodInfo *)CombineServantListViewItem_TypeInfo);
            v131 = v130;
            if ( !v125 )
              goto LABEL_225;
            System_Collections_Generic_List_long___Add(
              v125,
              v130,
              (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
          }
        }
        *(_DWORD *)&v159[4 * v160++ + 24] = 2032;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v164,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v160 && *(_DWORD *)&v159[4 * v160 + 20] == 2032 )
          --v160;
        if ( !v125 )
          goto LABEL_215;
        v132 = this->fields.baseUsrSvtData;
        v133 = System_Collections_Generic_List_long___ToArray(
                 v125,
                 (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
        v162[0] = NpCombineControl__GetNpLv(v132, v133, &v162[1], 0LL);
        v134 = this->fields.resLvLabel;
        resExpBar = (__int64)System_Int32__ToString((int32_t)v162, 0LL);
        if ( !v134 )
          goto LABEL_215;
        UILabel__set_text(v134, (System_String_o *)resExpBar, 0LL);
        resExpBar = (__int64)this->fields.baseUsrSvtData;
        if ( !resExpBar )
          goto LABEL_215;
        UserServantEntity__getTreasureDeviceInfo_21659764((UserServantEntity_o *)resExpBar, &tdMaxLv[1], tdMaxLv, 0LL);
        resExpBar = (__int64)this->fields.itemList;
        if ( !resExpBar )
          goto LABEL_215;
        v135 = v162[0] >= tdMaxLv[0];
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v159,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)resExpBar,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
        v164 = *(System_Collections_Generic_List_Enumerator_T__o *)v159;
        while ( 1 )
        {
          v137 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                   &v164,
                   (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
          if ( !v137 )
            break;
          v117 = v164.fields.current;
          if ( !v164.fields.current )
            sub_B2C434(v137, v138);
          v136 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
          if ( *(&v164.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v136
            || (CombineServantListViewItem_c *)v164.fields.current->klass->_2.typeHierarchy[v136 - 1] != CombineServantListViewItem_TypeInfo )
          {
            goto LABEL_218;
          }
          if ( !ListViewItem__get_IsSelect((ListViewItem_o *)v164.fields.current, 0LL) && !BYTE1(v117[10].klass) )
            BYTE5(v117[17].monitor) = v135;
        }
        *(_DWORD *)&v159[4 * v160++ + 24] = 2180;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v164,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
        if ( v160 )
        {
          v124 = v160 - 1;
          if ( *(_DWORD *)&v159[4 * v160 + 20] == 2180 )
LABEL_180:
            v160 = v124;
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
        CombineServantListViewManager__setBtnEnable(this, 0, v89);
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
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.qpAndExpInfoBg, v140);
      CombineServantListViewManager__setDispSprite(this, 0, this->fields.enhancementInfoBg, v141);
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
      if ( !v28 )
        goto LABEL_215;
    }
    else
    {
      CombineServantListViewManager__setBtnEnable(this, this->fields.selectQp <= this->fields.userQP, v89);
      resExpBar = (__int64)this->fields.allReleaseButton;
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)resExpBar + 536LL))(
                    resExpBar,
                    0LL,
                    1LL,
                    *(_QWORD *)(*(_QWORD *)resExpBar + 544LL));
      if ( !v28 )
        goto LABEL_215;
    }
    v142 = *((_DWORD *)v28 + 6);
    if ( v142 < 1 )
      return;
    this->fields.callbackCount = v142;
    v143 = *((_DWORD *)v28 + 6);
    if ( v143 >= 1 )
    {
      v144 = 0LL;
      do
      {
        if ( v143 <= (unsigned int)v144 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        resExpBar = *((_QWORD *)&v28[2]->_1.byval_arg.data + v144);
        if ( !resExpBar )
          goto LABEL_215;
        (*(void (__fastcall **)(__int64, bool, _QWORD))(*(_QWORD *)resExpBar + 456LL))(
          resExpBar,
          this->fields.isInput,
          *(_QWORD *)(*(_QWORD *)resExpBar + 464LL));
        v143 = *((_DWORD *)v28 + 6);
      }
      while ( (int)++v144 < v143 );
    }
    resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !resExpBar )
      goto LABEL_215;
    resExpBar = *(_QWORD *)(resExpBar + 24);
    if ( !resExpBar )
      goto LABEL_215;
    v28 = &CombineRootComponent_TypeInfo;
    v145 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
    if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 300LL) >= (unsigned int)v145
      && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v145 - 8) == CombineRootComponent_TypeInfo )
    {
      if ( *(_DWORD *)(resExpBar + 612) != 5 )
        return;
      resExpBar = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
      if ( !resExpBar )
        goto LABEL_215;
      resExpBar = *(_QWORD *)(resExpBar + 24);
      if ( !resExpBar )
        goto LABEL_215;
      v147 = *(&CombineRootComponent_TypeInfo->_2.bitflags2 + 1);
      if ( *(unsigned __int8 *)(*(_QWORD *)resExpBar + 300LL) >= (unsigned int)v147
        && *(CombineRootComponent_c **)(*(_QWORD *)(*(_QWORD *)resExpBar + 200LL) + 8 * v147 - 8) == CombineRootComponent_TypeInfo )
      {
        break;
      }
    }
    sub_B2C728(resExpBar);
    if ( v149 != 1 )
      _Unwind_Resume(v148);
    v150 = *(_QWORD *)__cxa_begin_catch(v148);
    __cxa_end_catch();
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v164,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    if ( v150 )
      sub_B2C400(v150, 0LL);
  }
  CombineServantListViewManager__TutorialBlock(this, *(_DWORD *)(resExpBar + 612), v146);
}


void __fastcall CombineServantListViewManager__ReleaseAll(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *itemList; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v11; // x3
  __int64 v12; // x9
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418A61D & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v6);
    byte_418A61D = 1;
  }
  memset(&v14, 0, sizeof(v14));
  if ( this->fields.selectSum >= 1 )
  {
    if ( this->fields.itemType == 1 )
      this->fields.sellEnableRestCnt = 0;
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.itemList;
    if ( !itemList )
      goto LABEL_19;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v14,
      itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
             &v14,
             (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
      if ( !v8 )
        break;
      current = v14.fields.current;
      if ( !v14.fields.current )
        goto LABEL_18;
      ListViewItem__set_IsSelect((ListViewItem_o *)v14.fields.current, 0, 0LL);
      v12 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&current->klass->_2.bitflags2 + 1) < (unsigned int)v12
        || (CombineServantListViewItem_c *)current->klass->_2.typeHierarchy[v12 - 1] != CombineServantListViewItem_TypeInfo )
      {
        sub_B2C728(current);
LABEL_18:
        sub_B2C434(v8, v9);
      }
      BYTE2(current[10].klass) = 0;
      CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)current, v11);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v14,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
    itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)this->fields.levelUpInfoImg;
    this->fields.selectSum = 0;
    if ( !itemList
      || (itemList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)itemList, 0LL)) == 0LL )
    {
LABEL_19:
      sub_B2C434(itemList, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)itemList, 0, 0LL);
    *(_QWORD *)&this->fields.totalExp = 0LL;
    this->fields.checkLv = 0;
    CombineServantListViewManager__RefrashListDisp(this, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject(
        CombineServantListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v15; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v18; // x22
  __int64 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418A611 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_CombineServantListViewManager_OnMoveEnd__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v12);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v13);
    byte_418A611 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v15);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      delay,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v21,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v21.fields.current;
      v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v19, v20);
      CombineServantListViewObject__Init_25818752((CombineServantListViewObject_o *)current, mode, v18, delay, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__RequestListObject_30037796(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *ObjectList; // x0
  __int64 v13; // x1
  int32_t size; // w8
  Il2CppObject *current; // x21
  System_Action_o *v16; // x22
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_418A612 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_CombineServantListViewManager_OnMoveEnd__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v10);
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, v11);
    byte_418A612 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  ObjectList = (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)CombineServantListViewManager__get_ObjectList(
                                                                                                this,
                                                                                                *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_B2C434(0LL, v13);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
      0.0,
      0LL);
  }
  else
  {
    this->fields.callbackCount = size;
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      ObjectList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_CombineServantListViewObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__MoveNext__) )
    {
      current = v19.fields.current;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_CombineServantListViewManager_OnMoveEnd__, 0LL);
      if ( !current )
        sub_B2C434(v17, v18);
      CombineServantListViewObject__Init_25818816((CombineServantListViewObject_o *)current, mode, v16, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewObject__Dispose__);
  }
}


void __fastcall CombineServantListViewManager__ResetCombineEventCampaignListViewObjects(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int64_t Instance; // x0
  const MethodInfo *v10; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x23
  unsigned __int64 v20; // x21
  ListViewItem_o *v21; // x8
  __int64 v22; // x11
  __int64 v23; // x11
  CombineServantListViewItem_o *v24; // x0
  __int64 v25; // x21
  const MethodInfo *v26; // x1
  TimeOverChecker_o *timeOverChecker; // x20

  if ( (byte_418A642 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Count__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__get_Item__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_418A642 = 1;
  }
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_31;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEntities,
    (System_Int32_array **)CombineEventCampaigns,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  itemList = this->fields.itemList;
  if ( !itemList )
    goto LABEL_31;
  v20 = 0LL;
  while ( (__int64)v20 < itemList->fields._size )
  {
    if ( v20 >= (unsigned int)itemList->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v21 = itemList->fields._items->m_Items[v20];
    if ( v21 )
    {
      v22 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
      if ( *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v22
        && (CombineServantListViewItem_c *)v21->klass->_2.typeHierarchy[v22 - 1] == CombineServantListViewItem_TypeInfo )
      {
        v23 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v21->klass->_2.bitflags2 + 1) >= (unsigned int)v23 )
          v24 = (CombineServantListViewItem_c *)v21->klass->_2.typeHierarchy[v23 - 1] == CombineServantListViewItem_TypeInfo
              ? (CombineServantListViewItem_o *)itemList->fields._items->m_Items[v20]
              : 0LL;
        else
          v24 = 0LL;
        CombineServantListViewItem__SetIsCombineExpCampaignTarget(v24, this->fields.eventCampaignEntities, v18);
        itemList = this->fields.itemList;
        ++v20;
        if ( itemList )
          continue;
      }
    }
    goto LABEL_31;
  }
  Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v10);
  if ( !Instance )
    goto LABEL_31;
  v25 = 0LL;
  while ( (int)v25 < *(_DWORD *)(Instance + 24) )
  {
    Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v10);
    if ( Instance )
    {
      if ( *(_DWORD *)(Instance + 24) <= (unsigned int)v25 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      Instance = *(_QWORD *)(*(_QWORD *)(Instance + 16) + 8 * v25 + 32);
      if ( Instance )
      {
        CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)Instance, 0LL);
        Instance = (int64_t)CombineServantListViewManager__get_ClippingObjectList(this, v26);
        ++v25;
        if ( Instance )
          continue;
      }
    }
    goto LABEL_31;
  }
  timeOverChecker = this->fields.timeOverChecker;
  Instance = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v10);
  if ( !timeOverChecker )
LABEL_31:
    sub_B2C434(Instance, v10);
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

  if ( (byte_418A646 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19513/*"img_list_lv"*/, method);
    byte_418A646 = 1;
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_19513/*"img_list_lv"*/, 0LL);
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
  GameObjectExtensions__SetLocalScale_31328080(v15, 1.0, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)getExpLabel, (System_String_o *)StringLiteral_19513/*"img_list_lv"*/, 0LL);
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
  GameObjectExtensions__SetLocalScale_31328080(v25, 1.0, 0LL);
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
    sub_B2C434(getExpLabel, method);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  System_Collections_Generic_List_long__o *tempMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  __int64 v17; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_418A61E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v12);
    byte_418A61E = 1;
  }
  memset(&v19, 0, sizeof(v19));
  this->fields.baseUsrSvtData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.baseUsrSvtData, 0LL, v2, v3, v4, v5, v6, v7);
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
  tempMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList;
  if ( !tempMaterialUserServantIdList )
    goto LABEL_19;
  System_Collections_Generic_List_long___Clear(
    tempMaterialUserServantIdList,
    (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
  itemList = this->fields.itemList;
  if ( itemList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v19,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__) )
    {
      if ( !v19.fields.current )
        sub_B2C434(0LL, v17);
      ListViewItem__set_IsSelect((ListViewItem_o *)v19.fields.current, 0, 0LL);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v19,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
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
    sub_B2C434(tempMaterialUserServantIdList, v13);
  CombineServantListViewNoticeTween__Clear((CombineServantListViewNoticeTween_o *)tempMaterialUserServantIdList, 0LL);
}


void __fastcall CombineServantListViewManager__ScrollToObject(
        CombineServantListViewManager_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Object_o *seed; // x21
  const MethodInfo *v7; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v9; // x1
  float VerticalScrollableSize; // s0
  float v11; // s8
  float v12; // s9
  float v13; // s10
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A64C & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, obj);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    byte_418A64C = 1;
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
      VerticalScrollableSize = CombineServantListViewManager__GetVerticalScrollableSize(this, v7);
      if ( !obj )
        goto LABEL_24;
      v11 = VerticalScrollableSize;
      transform = UnityEngine_GameObject__get_transform(obj, 0LL);
      if ( !transform )
        goto LABEL_24;
      localPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
      v12 = fabsf(localPosition.fields.y);
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
        v13 = *(float *)(*(_QWORD *)&transform[7].fields.m_CachedPtr + 36LL);
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.seed, 0LL);
        if ( !transform )
          goto LABEL_24;
        localScale = UnityEngine_Transform__get_localScale(transform, 0LL);
        v12 = v12 + (float)(v13 * localScale.fields.y);
      }
      if ( v11 > 0.0 )
      {
        transform = (UnityEngine_Transform_o *)this->fields.scrollBar;
        if ( transform )
        {
          UIProgressBar__set_value((UIProgressBar_o *)transform, v12 / v11, 0LL);
          return;
        }
LABEL_24:
        sub_B2C434(transform, v9);
      }
    }
  }
}


void __fastcall CombineServantListViewManager__SetCombineSvtClassIcon(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  UserServantEntity_o *baseUsrSvtData; // x0
  int32_t v8; // w21
  int32_t FrameType; // w20
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *combineSvtInfoIcon; // x22
  WarEntity_o *v12; // x21
  UISprite_o *v13; // x19
  int32_t longName_high; // w21

  if ( (byte_418A644 & 1) == 0 )
  {
    sub_B2C35C(&AtlasManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantClassMaster___, v3);
    sub_B2C35C(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_418A644 = 1;
  }
  baseUsrSvtData = this->fields.baseUsrSvtData;
  if ( !baseUsrSvtData )
    goto LABEL_19;
  baseUsrSvtData = (UserServantEntity_o *)UserServantEntity__getSvtClassId(baseUsrSvtData, 0LL);
  if ( !this->fields.baseUsrSvtData )
    goto LABEL_19;
  v8 = (int)baseUsrSvtData;
  FrameType = UserServantEntity__getFrameType(this->fields.baseUsrSvtData, 0LL);
  baseUsrSvtData = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData )
    goto LABEL_19;
  baseUsrSvtData = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)baseUsrSvtData,
                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !baseUsrSvtData )
    goto LABEL_19;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)baseUsrSvtData,
             v8,
             (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  combineSvtInfoIcon = (UnityEngine_Object_o *)this->fields.combineSvtInfoIcon;
  v12 = Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  baseUsrSvtData = (UserServantEntity_o *)UnityEngine_Object__op_Inequality(combineSvtInfoIcon, 0LL, 0LL);
  if ( ((unsigned __int8)baseUsrSvtData & 1) != 0 )
  {
    v13 = this->fields.combineSvtInfoIcon;
    if ( v12 )
    {
      longName_high = HIDWORD(v12->fields.longName);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClassIcon(v13, longName_high, FrameType, 0LL);
      return;
    }
    if ( v13 )
    {
      UISprite__set_spriteName(v13, 0LL, 0LL);
      return;
    }
LABEL_19:
    sub_B2C434(baseUsrSvtData, method);
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

  if ( (byte_418A63E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418A63E = 1;
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
  *(_OWORD *)&this->fields.dragSelectSum = xmmword_31A31B0;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x22
  ListViewItem_o *v11; // x19
  CombineServantListViewItem_c *v12; // x1
  __int64 v13; // x9
  float z; // w8
  bool v15; // w21
  _BOOL4 v16; // w21
  bool IsSelect; // w0
  const MethodInfo *v18; // x5
  int v19; // w8
  UnityEngine_Object_o *viewObject; // x20
  __int64 v21; // x9
  bool result; // w0
  CombineServantListViewManager_o *v23; // x0
  int32_t v24; // w1
  bool v25; // w2
  const MethodInfo *v26; // x3

  v6 = this;
  if ( (byte_418A63C & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&index);
    sub_B2C35C(&CombineServantListViewObject_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    this = (CombineServantListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418A63C = 1;
  }
  itemSortList = v6->fields.itemSortList;
  if ( !itemSortList )
    goto LABEL_42;
  if ( itemSortList->fields._size <= (unsigned int)index )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v11 = itemSortList->fields._items->m_Items[index];
  if ( !v11 )
    goto LABEL_42;
  v12 = CombineServantListViewItem_TypeInfo;
  v13 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
  if ( *(&v11->klass->_2.bitflags2 + 1) < (unsigned int)v13
    || (CombineServantListViewItem_c *)v11->klass->_2.typeHierarchy[v13 - 1] != CombineServantListViewItem_TypeInfo )
  {
    this = (CombineServantListViewManager_o *)v11;
    goto LABEL_44;
  }
  z = v11[2].fields.basePosition.fields.z;
  if ( !isDragSelect )
  {
    if ( (LODWORD(z) & 0x80000000) == 0 )
    {
      if ( !ListViewItem__get_IsSelect(v11, 0LL) && SLODWORD(v11[2].fields.basePosition.fields.z) >= 1 )
      {
        --v6->fields.dragSelectSum;
        this = *(CombineServantListViewManager_o **)&v11[1].fields.selectNum;
        if ( !this )
          goto LABEL_42;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL)
          && !BYTE4(v11[1].fields.sortValue1)
          && !HIBYTE(v11[1].fields.basePosition.fields.x) )
        {
          --v6->fields.dragServantSelectSum;
        }
      }
      v15 = 0;
      v19 = -1;
      goto LABEL_29;
    }
    goto LABEL_32;
  }
  if ( (LODWORD(z) & 0x80000000) == 0 )
    goto LABEL_32;
  v11[2].fields.basePosition.fields.z = 0.0;
  v15 = 0;
  if ( CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)v11, (const MethodInfo *)v12) )
    goto LABEL_33;
  v16 = v6->fields.isDragSelect;
  IsSelect = ListViewItem__get_IsSelect(v11, 0LL);
  if ( !v16 )
  {
    if ( IsSelect )
    {
LABEL_31:
      v15 = 0;
      v19 = 1;
LABEL_29:
      LODWORD(v11[2].fields.basePosition.fields.z) = v19;
      goto LABEL_33;
    }
LABEL_32:
    v15 = 0;
    goto LABEL_33;
  }
  if ( IsSelect )
    goto LABEL_32;
  v15 = 1;
  if ( CombineServantListViewManager__IsSelectEnable(
         v6,
         (CombineServantListViewItem_o *)v11,
         v6->fields.dragSelectSum,
         v6->fields.dragServantSelectSum,
         1,
         v18) )
  {
    ++v6->fields.dragSelectSum;
    this = *(CombineServantListViewManager_o **)&v11[1].fields.selectNum;
    if ( !this )
      goto LABEL_42;
    if ( ServantEntity__get_IsOrganization((ServantEntity_o *)this, 0LL)
      && !BYTE4(v11[1].fields.sortValue1)
      && !HIBYTE(v11[1].fields.basePosition.fields.x) )
    {
      ++v6->fields.dragServantSelectSum;
    }
    goto LABEL_31;
  }
LABEL_33:
  viewObject = (UnityEngine_Object_o *)v11->fields.viewObject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality(viewObject, 0LL, 0LL) )
    return v15;
  this = (CombineServantListViewManager_o *)v11->fields.viewObject;
  if ( !this )
LABEL_42:
    sub_B2C434(this, *(_QWORD *)&index);
  v21 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&this->klass->_2.bitflags2 + 1) >= (unsigned int)v21
    && (CombineServantListViewObject_c *)this->klass->_2.typeHierarchy[v21 - 1] == CombineServantListViewObject_TypeInfo )
  {
    CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)this, 0LL);
    return v15;
  }
LABEL_44:
  sub_B2C728(this);
  CombineServantListViewManager__SetDragStart(v23, v24, v25, v26);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t dragStartIndex; // w8
  int32_t dragEndIndex; // w9
  int v12; // w25
  int v13; // w26
  int32_t v14; // w23
  int32_t v15; // w24
  int32_t v16; // w22
  int v17; // w27
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x20
  CombineServantListViewManager_o *v19; // x20
  __int64 v20; // x9
  UnityEngine_Object_o *clipRange; // x21
  __int64 v22; // x9
  CombineServantListViewManager_o *v23; // x0
  int32_t v24; // w1
  bool v25; // w2
  const MethodInfo *v26; // x3

  v5 = startIndex;
  v6 = this;
  if ( (byte_418A63B & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_B2C35C(&CombineServantListViewObject_TypeInfo, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    this = (CombineServantListViewManager_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418A63B = 1;
  }
  dragStartIndex = v6->fields.dragStartIndex;
  if ( (dragStartIndex & 0x80000000) != 0 )
  {
    v12 = -1;
    v13 = -1;
  }
  else
  {
    dragEndIndex = v6->fields.dragEndIndex;
    if ( dragStartIndex <= dragEndIndex )
      v12 = v6->fields.dragEndIndex;
    else
      v12 = v6->fields.dragStartIndex;
    if ( dragStartIndex <= dragEndIndex )
      v13 = v6->fields.dragStartIndex;
    else
      v13 = v6->fields.dragEndIndex;
  }
  v6->fields.dragStartIndex = v5;
  v6->fields.dragEndIndex = endIndex;
  if ( (v5 & 0x80000000) != 0 )
  {
    v14 = -1;
    v15 = -1;
    if ( (v13 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  else
  {
    if ( v5 <= endIndex )
      v14 = endIndex;
    else
      v14 = v5;
    if ( v5 <= endIndex )
      v15 = v5;
    else
      v15 = endIndex;
    if ( (v13 & 0x80000000) != 0 )
      goto LABEL_28;
  }
  if ( v13 <= v12 )
  {
    v16 = v13;
    do
    {
      if ( v16 > v14 || (v15 & 0x80000000) != 0 || v16 < v15 )
        this = (CombineServantListViewManager_o *)CombineServantListViewManager__SetDragSelect(v6, v16, 0, method);
      ++v16;
    }
    while ( v16 <= v12 );
  }
LABEL_28:
  if ( (v5 & 0x80000000) == 0 )
  {
    if ( v5 <= endIndex )
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          this = (CombineServantListViewManager_o *)CombineServantListViewManager__SetDragSelect(v6, v5, 1, method);
        ++v5;
      }
      while ( v5 <= endIndex );
    }
    else
    {
      do
      {
        if ( v5 > v12 || (v13 & 0x80000000) != 0 || v5 < v13 )
          this = (CombineServantListViewManager_o *)CombineServantListViewManager__SetDragSelect(v6, v5, 1, method);
        --v5;
      }
      while ( v5 >= endIndex );
    }
    if ( v6->fields.isDragSelect && (v15 & 0x80000000) == 0 && v15 <= v14 )
    {
      v17 = v6->fields.selectSum + 1;
      while ( 1 )
      {
        itemSortList = v6->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_62;
        if ( itemSortList->fields._size <= (unsigned int)v15 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        v19 = (CombineServantListViewManager_o *)itemSortList->fields._items->m_Items[v15];
        if ( !v19 )
LABEL_62:
          sub_B2C434(this, *(_QWORD *)&startIndex);
        *(_QWORD *)&startIndex = CombineServantListViewItem_TypeInfo;
        v20 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v19->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (CombineServantListViewItem_c *)v19->klass->_2.typeHierarchy[v20 - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        if ( SHIDWORD(v19->fields.combineRootComponent) >= 1 )
        {
          HIDWORD(v19->fields.combineRootComponent) = v17;
          clipRange = (UnityEngine_Object_o *)v19->fields.clipRange;
          ++v17;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          this = (CombineServantListViewManager_o *)UnityEngine_Object__op_Inequality(clipRange, 0LL, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            this = (CombineServantListViewManager_o *)v19->fields.clipRange;
            if ( !this )
              goto LABEL_62;
            v22 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
            if ( *(&this->klass->_2.bitflags2 + 1) < (unsigned int)v22
              || (CombineServantListViewObject_c *)this->klass->_2.typeHierarchy[v22 - 1] != CombineServantListViewObject_TypeInfo )
            {
              goto LABEL_64;
            }
            CombineServantListViewObject__SetupDisp((CombineServantListViewObject_o *)this, 0LL);
          }
        }
        if ( ++v15 > v14 )
          return;
      }
      this = v19;
LABEL_64:
      sub_B2C728(this);
      CombineServantListViewManager__SetDragSelect(v23, v24, v25, v26);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetDragStart(
        CombineServantListViewManager_o *this,
        int32_t startIndex,
        bool isDragSelect,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UIScrollView_o *_28617756; // x0
  CombineServantListViewItem_c *v12; // x1
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_List_ListViewItem__o *itemSortList; // x25
  int size; // w21
  int v16; // w22
  __int64 v17; // x9
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_418A63D & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&startIndex);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&TutorialFlag_TypeInfo, v10);
    byte_418A63D = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _28617756 = (UIScrollView_o *)TutorialFlag__Get_28617756(102, 0LL);
  if ( ((unsigned __int8)_28617756 & 1) != 0 )
  {
    *(_OWORD *)&this->fields.dragSelectSum = xmmword_31A31B0;
    itemSortList = this->fields.itemSortList;
    this->fields.isDragSelect = isDragSelect;
    if ( !itemSortList )
      goto LABEL_26;
    size = itemSortList->fields._size;
    if ( size >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( itemSortList->fields._size <= (unsigned int)v16 )
          System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
        _28617756 = (UIScrollView_o *)itemSortList->fields._items->m_Items[v16];
        if ( !_28617756 )
          goto LABEL_26;
        v12 = CombineServantListViewItem_TypeInfo;
        v17 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&_28617756->klass->_2.bitflags2 + 1) < (unsigned int)v17
          || (CombineServantListViewItem_c *)_28617756->klass->_2.typeHierarchy[v17 - 1] != CombineServantListViewItem_TypeInfo )
        {
          break;
        }
        ++v16;
        HIDWORD(_28617756[1].fields.onDragStarted) = -1;
        if ( v16 >= size )
          goto LABEL_18;
        itemSortList = this->fields.itemSortList;
        if ( !itemSortList )
          goto LABEL_26;
      }
      sub_B2C728(_28617756);
LABEL_26:
      sub_B2C434(_28617756, v12);
    }
LABEL_18:
    CombineServantListViewManager__SetDragSelectItem(this, startIndex, startIndex, v13);
    scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(scrollView, 0LL, 0LL) )
    {
      _28617756 = this->fields.scrollView;
      if ( !_28617756 )
        goto LABEL_26;
      UIScrollView__Press(_28617756, 0, 0LL);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  DataManager_o *Instance; // x0
  __int64 v15; // x1
  struct System_Collections_Generic_List_EventCampaignEntity__o *CombineEventCampaigns; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x1
  int64_t EventCampaignFinishedAt; // x0
  TimeOverChecker_o *timeOverChecker; // x8
  int64_t v26; // x20
  System_Action_o *v27; // x22
  TimeOverChecker_o *v28; // x23
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_418A641 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventCampaignMaster___, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&TimeOverChecker_TypeInfo, v13);
    byte_418A641 = 1;
  }
  if ( type )
  {
    this->fields.eventCampaignEntities = 0LL;
    sub_B2C2F8(
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventCampaignMaster___);
  if ( !Instance )
    goto LABEL_12;
  CombineEventCampaigns = EventCampaignMaster__GetCombineEventCampaigns((EventCampaignMaster_o *)Instance, 0LL);
  this->fields.eventCampaignEntities = CombineEventCampaigns;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.eventCampaignEntities,
    (System_Int32_array **)CombineEventCampaigns,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  if ( this->fields.eventCampaignEntities )
  {
    EventCampaignFinishedAt = CombineServantListViewManager__GetEventCampaignFinishedAt(this, v23);
    timeOverChecker = this->fields.timeOverChecker;
    v26 = EventCampaignFinishedAt;
    if ( timeOverChecker
      || (v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo),
          System_Action___ctor(
            v27,
            (Il2CppObject *)this,
            Method_CombineServantListViewManager_ResetCombineEventCampaignListViewObjects__,
            0LL),
          v28 = (TimeOverChecker_o *)sub_B2C42C(TimeOverChecker_TypeInfo),
          TimeOverChecker___ctor(v28, v27, (UnityEngine_MonoBehaviour_o *)this, 0LL),
          this->fields.timeOverChecker = v28,
          sub_B2C2F8(
            (BattleServantConfConponent_o *)&this->fields.timeOverChecker,
            (System_Int32_array **)v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34),
          (timeOverChecker = this->fields.timeOverChecker) != 0LL) )
    {
      TimeOverChecker__Start(timeOverChecker, v26, 0LL);
      return;
    }
LABEL_12:
    sub_B2C434(Instance, v15);
  }
}


void __fastcall CombineServantListViewManager__SetFilterButtonImage(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  ListViewSort_o *sort; // x0
  UISprite_o *filterSprite; // x19
  System_String_o **v6; // x8

  if ( (byte_418A629 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16993/*"btn_filter_on"*/, method);
    sub_B2C35C(&StringLiteral_16992/*"btn_filter"*/, v3);
    byte_418A629 = 1;
  }
  sort = this->fields.sort;
  if ( !sort
    || (filterSprite = this->fields.filterSprite,
        sort = (ListViewSort_o *)ListViewSort__CheckFilterDefaultAll(sort, -1, 0LL),
        !filterSprite) )
  {
    sub_B2C434(sort, method);
  }
  v6 = (System_String_o **)&StringLiteral_16992/*"btn_filter"*/;
  if ( ((unsigned __int8)sort & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_16993/*"btn_filter_on"*/;
  UISprite__set_spriteName(filterSprite, *v6, 0LL);
}


void __fastcall CombineServantListViewManager__SetMaterialSvtInfo(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_ListViewItem__o *v12; // x20
  Il2CppObject *current; // x24
  __int64 v14; // x25
  int size; // w8
  CombineServantListViewItem_o *v16; // x20
  __int64 v17; // x9
  int64_t UserSvtId; // x0
  __int64 v19; // x1
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-60h] BYREF

  v2 = this;
  if ( (byte_418A604 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_long__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, v8);
    this = (CombineServantListViewManager_o *)sub_B2C35C(
                                                &Method_System_Collections_Generic_List_ListViewItem__get_Item__,
                                                v9);
    byte_418A604 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  itemList = v2->fields.itemList;
  if ( !itemList )
    sub_B2C434(this, method);
  if ( itemList->fields._size >= 1 )
  {
    selectedMaterialUserServantIdList = v2->fields.selectedMaterialUserServantIdList;
    if ( selectedMaterialUserServantIdList )
    {
      if ( selectedMaterialUserServantIdList->fields._size >= 1 )
      {
        System_Collections_Generic_List_long___GetEnumerator(
          &v20,
          selectedMaterialUserServantIdList,
          (const MethodInfo_2F6DDEC *)Method_System_Collections_Generic_List_long__GetEnumerator__);
        v21 = v20;
LABEL_20:
        while ( 1 )
        {
          UserSvtId = System_Collections_Generic_List_Enumerator_long___MoveNext(
                        &v21,
                        (const MethodInfo_20E8C80 *)Method_System_Collections_Generic_List_Enumerator_long__MoveNext__);
          if ( (UserSvtId & 1) == 0 )
            break;
          v12 = v2->fields.itemList;
          if ( !v12 )
            goto LABEL_24;
          current = v21.fields.current;
          v14 = 0LL;
          while ( 1 )
          {
            size = v12->fields._size;
            if ( (int)v14 >= size )
              goto LABEL_20;
            if ( size <= (unsigned int)v14 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v16 = (CombineServantListViewItem_o *)v12->fields._items->m_Items[v14];
            if ( !v16 )
              sub_B2C434(UserSvtId, v19);
            v17 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v16->klass->_2.bitflags2 + 1) < (unsigned int)v17
              || (CombineServantListViewItem_c *)v16->klass->_2.typeHierarchy[v17 - 1] != CombineServantListViewItem_TypeInfo )
            {
              sub_B2C728(v16);
LABEL_24:
              sub_B2C434(UserSvtId, v19);
            }
            UserSvtId = CombineServantListViewItem__get_UserSvtId(
                          v16,
                          (const MethodInfo *)CombineServantListViewItem_TypeInfo);
            if ( (Il2CppObject *)UserSvtId == current )
              break;
            v12 = v2->fields.itemList;
            ++v14;
            if ( !v12 )
              goto LABEL_24;
          }
          v16->fields.isCanNotLock = 1;
        }
        System_Collections_Generic_List_Enumerator_long___Dispose(
          &v21,
          (const MethodInfo_20E8C7C *)Method_System_Collections_Generic_List_Enumerator_long__Dispose__);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_30036488(this, mode, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetMode_30036488(
        CombineServantListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UIScrollView_o *ObjectSum; // x0
  __int64 v11; // x1
  UnityEngine_Object_o *scrollView; // x21
  const MethodInfo *v13; // x2
  int32_t v14; // w1
  int v15; // w23
  char v16; // w24
  _BOOL8 v17; // x0
  __int64 v18; // x1
  ListViewItem_o *current; // x21
  __int64 v20; // x9
  const MethodInfo *v21; // x1
  int32_t selectNum; // w28
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x0
  int32_t klass; // w9
  _BOOL8 v27; // x0
  __int64 v28; // x1
  int v29; // w28
  int v30; // w22
  const MethodInfo *v31; // x1
  CombineServantListViewNoticeTween_o *noticeTween; // x0
  _BYTE v33[32]; // [xsp+8h] [xbp-B8h] BYREF
  int v34; // [xsp+28h] [xbp-98h]
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+30h] [xbp-90h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+50h] [xbp-70h] BYREF

  if ( (byte_418A610 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&mode);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_418A610 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  memset(&v35, 0, sizeof(v35));
  v34 = 0;
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
      CombineServantListViewManager__SetScrollViewEnabled(this, 1, v13);
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
        (System_Collections_Generic_List_Enumerator_T__o *)v33,
        (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)ObjectSum,
        (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
      v15 = 0;
      v16 = 0;
      v36 = *(System_Collections_Generic_List_Enumerator_T__o *)v33;
      while ( 1 )
      {
        v17 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                &v36,
                (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
        if ( !v17 )
          break;
        current = (ListViewItem_o *)v36.fields.current;
        if ( !v36.fields.current )
          goto LABEL_46;
        v20 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
        if ( *(&v36.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v20
          || (CombineServantListViewItem_c *)v36.fields.current->klass->_2.typeHierarchy[v20 - 1] != CombineServantListViewItem_TypeInfo )
        {
          sub_B2C728(v36.fields.current);
LABEL_46:
          sub_B2C434(v17, v18);
        }
        if ( ListViewItem__get_IsSelect((ListViewItem_o *)v36.fields.current, 0LL)
          && CombineServantListViewItem__get_IsCanNotSelect((CombineServantListViewItem_o *)current, v21) )
        {
          selectNum = current->fields.selectNum;
          ListViewItem__set_IsSelect(current, 0, 0LL);
          --this->fields.selectSum;
          CombineServantListViewManager__changeCombineEnableRestCnt(
            this,
            1,
            (CombineServantListViewItem_o *)current,
            v23);
          itemList = this->fields.itemList;
          if ( !itemList )
            sub_B2C434(0LL, v24);
          System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)v33,
            (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)itemList,
            (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
          v35 = *(System_Collections_Generic_List_Enumerator_T__o *)v33;
          while ( 1 )
          {
            v27 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                    &v35,
                    (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
            if ( !v27 )
              break;
            if ( !v35.fields.current )
              sub_B2C434(v27, v28);
            klass = (int32_t)v35.fields.current[1].klass;
            if ( klass > selectNum )
              LODWORD(v35.fields.current[1].klass) = klass - 1;
          }
          *(_DWORD *)&v33[4 * v15 + 24] = 259;
          v29 = ++v34;
          System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
            &v35,
            (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
          v15 = 0;
          v16 = 1;
          if ( v29 )
          {
            v16 = 1;
            v15 = v29;
            if ( *(_DWORD *)&v33[4 * v29 + 20] == 259 )
            {
              v16 = 1;
              v15 = v29 - 1;
              v34 = v29 - 1;
            }
          }
        }
      }
      *(_DWORD *)&v33[4 * v15 + 24] = 287;
      v30 = ++v34;
      System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
        &v36,
        (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
      if ( v30 && *(_DWORD *)&v33[4 * v30 + 20] == 287 )
        v34 = v30 - 1;
      if ( (v16 & 1) != 0 )
        CombineServantListViewManager__RefrashListDisp(this, v31);
      if ( mode == 2 )
        v14 = 3;
      else
        v14 = 2;
      goto LABEL_41;
    }
LABEL_47:
    sub_B2C434(ObjectSum, v11);
  }
  if ( mode != 3 )
    goto LABEL_42;
  v14 = 4;
LABEL_41:
  CombineServantListViewManager__RequestListObject_30037796(this, v14, v13);
LABEL_42:
  noticeTween = this->fields.noticeTween;
  if ( noticeTween )
    CombineServantListViewNoticeTween__Start(noticeTween, 0LL);
}


void __fastcall CombineServantListViewManager__SetMode_30037576(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc2,
    (System_Int32_array **)callback,
    (System_String_array **)callback,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  CombineServantListViewManager__SetMode_30036488(this, mode, v10);
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
  if ( (byte_418A60F & 1) == 0 )
  {
    this = (CombineServantListViewManager_o *)sub_B2C35C(&CombineServantListViewObject_TypeInfo, obj);
    byte_418A60F = 1;
  }
  if ( !obj )
LABEL_11:
    sub_B2C434(this, obj);
  v6 = *(&CombineServantListViewObject_TypeInfo->_2.bitflags2 + 1);
  if ( *(&obj->klass->_2.bitflags2 + 1) < (unsigned int)v6
    || (CombineServantListViewObject_c *)obj->klass->_2.typeHierarchy[v6 - 1] != CombineServantListViewObject_TypeInfo )
  {
    sub_B2C728(obj);
    goto LABEL_11;
  }
  if ( v5->fields.initMode == 2 )
    v7 = 3;
  else
    v7 = 2;
  CombineServantListViewObject__Init_25816324((CombineServantListViewObject_o *)obj, v7, 0LL);
}


void __fastcall CombineServantListViewManager__SetRecomendedSelectedMaterialList(
        CombineServantListViewManager_o *this,
        System_Collections_Generic_List_long__o *recomendedList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x0
  struct System_Collections_Generic_List_long__o **p_selectedMaterialUserServantIdList; // x21
  System_Collections_Generic_List_long__o *v10; // x22
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1

  if ( (byte_418A61A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__AddRange__, recomendedList);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v7);
    byte_418A61A = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  p_selectedMaterialUserServantIdList = &this->fields.selectedMaterialUserServantIdList;
  if ( !selectedMaterialUserServantIdList )
  {
    v10 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
    System_Collections_Generic_List_long____ctor(
      v10,
      (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
    *p_selectedMaterialUserServantIdList = v10;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.selectedMaterialUserServantIdList,
      (System_Int32_array **)v10,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    selectedMaterialUserServantIdList = *p_selectedMaterialUserServantIdList;
    if ( !*p_selectedMaterialUserServantIdList )
      goto LABEL_9;
  }
  System_Collections_Generic_List_long___Clear(
    selectedMaterialUserServantIdList,
    (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
  selectedMaterialUserServantIdList = *p_selectedMaterialUserServantIdList;
  if ( !*p_selectedMaterialUserServantIdList
    || (System_Collections_Generic_List_long___AddRange(
          selectedMaterialUserServantIdList,
          (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
          (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__),
        (selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList) == 0LL)
    || (System_Collections_Generic_List_long___Clear(
          selectedMaterialUserServantIdList,
          (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__),
        (selectedMaterialUserServantIdList = this->fields.tempMaterialUserServantIdList) == 0LL) )
  {
LABEL_9:
    sub_B2C434(selectedMaterialUserServantIdList, v17);
  }
  System_Collections_Generic_List_long___AddRange(
    selectedMaterialUserServantIdList,
    (System_Collections_Generic_IEnumerable_T__o *)recomendedList,
    (const MethodInfo_2F6D1FC *)Method_System_Collections_Generic_List_long__AddRange__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetScrollViewEnabled(
        CombineServantListViewManager_o *this,
        bool enabled,
        const MethodInfo *method)
{
  UnityEngine_Object_o *scrollView; // x21
  __int64 v6; // x1
  UnityEngine_Behaviour_o *v7; // x0

  if ( (byte_418A648 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, enabled);
    byte_418A648 = 1;
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
      sub_B2C434(0LL, v6);
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
  sub_B2C2F8(
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_Object_o *sortKindLabel; // x20
  __int64 v10; // x1
  ListViewSort_o *sort; // x0
  UILabel_o *v12; // x20
  UnityEngine_Object_o *sortOrderSprite; // x20
  struct ListViewSort_o *v14; // x8
  int32_t sortKind; // w9
  System_String_o **v16; // x8
  struct ListViewSort_o *v17; // x8
  _BOOL4 isAscendingOrder; // w8
  System_String_o **v19; // x9
  System_String_o **v20; // x10
  System_String_o **v21; // x8
  struct ListViewSort_o *v22; // x8
  System_String_o **v23; // x8
  UnityEngine_Object_o *bonusFilterKindLabel; // x20
  UILabel_o *v25; // x20

  if ( (byte_418A631 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17021/*"btn_sort_up"*/, v3);
    sub_B2C35C(&StringLiteral_17104/*"btn_txt_up"*/, v4);
    sub_B2C35C(&StringLiteral_17061/*"btn_txt_new"*/, v5);
    sub_B2C35C(&StringLiteral_17051/*"btn_txt_down"*/, v6);
    sub_B2C35C(&StringLiteral_17068/*"btn_txt_old"*/, v7);
    sub_B2C35C(&StringLiteral_17018/*"btn_sort_down"*/, v8);
    byte_418A631 = 1;
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
    v12 = this->fields.sortKindLabel;
    sort = (ListViewSort_o *)ListViewSort__GetSortKindButtonText(sort, 0LL);
    if ( !v12 )
      goto LABEL_44;
    UILabel__set_text(v12, (System_String_o *)sort, 0LL);
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
    v14 = this->fields.sort;
    if ( !v14 )
      goto LABEL_44;
    sortKind = v14->fields.sortKind;
    if ( sortKind == 11 || sortKind == 1 )
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v16 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17068/*"btn_txt_old"*/ : &StringLiteral_17061/*"btn_txt_new"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v16, 0LL);
      v17 = this->fields.sort;
      if ( !v17 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v17->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
      v20 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
    }
    else
    {
      sort = (ListViewSort_o *)this->fields.sortExplanationSprite;
      if ( !sort )
        goto LABEL_44;
      v21 = (System_String_o **)(v14->fields.isAscendingOrder ? &StringLiteral_17104/*"btn_txt_up"*/ : &StringLiteral_17051/*"btn_txt_down"*/);
      UISprite__set_spriteName((UISprite_o *)sort, *v21, 0LL);
      v22 = this->fields.sort;
      if ( !v22 )
        goto LABEL_44;
      sort = (ListViewSort_o *)this->fields.sortOrderSprite;
      if ( !sort )
        goto LABEL_44;
      isAscendingOrder = v22->fields.isAscendingOrder;
      v19 = (System_String_o **)&StringLiteral_17021/*"btn_sort_up"*/;
      v20 = (System_String_o **)&StringLiteral_17018/*"btn_sort_down"*/;
    }
    if ( isAscendingOrder )
      v23 = v19;
    else
      v23 = v20;
    UISprite__set_spriteName((UISprite_o *)sort, *v23, 0LL);
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
      v25 = this->fields.bonusFilterKindLabel;
      sort = (ListViewSort_o *)ListViewSort__GetBonusKind2Text_33951116(
                                 sort,
                                 this->fields.bonusEventIdList,
                                 this->fields.servantFilterIdList,
                                 this->fields.eventCampaignIdList,
                                 this->fields.eventCampaignServantIdList,
                                 0LL,
                                 0LL);
      if ( v25 )
      {
        UILabel__set_text(v25, (System_String_o *)sort, 0LL);
        return;
      }
LABEL_44:
      sub_B2C434(sort, v10);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__SetStatusKind(
        CombineServantListViewManager_o *this,
        int32_t modeKind,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Behaviour_o *statusTabButton; // x0
  System_String_o **v13; // x8
  UICommonButton_o *v14; // x21
  bool enabled; // w0
  System_String_o **v16; // x8
  UICommonButton_o *lockTabButton; // x21
  bool v18; // w0
  System_String_o **v19; // x8
  UICommonButton_o *choiceTabButton; // x21
  bool v21; // w0
  System_String_o **v22; // x8
  UICommonButton_o *pushTabButton; // x20
  bool v24; // w0
  const MethodInfo *v25; // x2

  if ( (byte_418A5FF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_17137/*"button_push_reg"*/, *(_QWORD *)&modeKind);
    sub_B2C35C(&StringLiteral_17138/*"button_push_unreg"*/, v5);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v6);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v7);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v8);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v9);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v10);
    sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v11);
    byte_418A5FF = 1;
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
  v13 = (System_String_o **)&StringLiteral_17139/*"button_select_reg"*/;
  if ( modeKind )
    v13 = (System_String_o **)&StringLiteral_17140/*"button_select_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v13, 0LL);
  statusTabButton = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
  if ( !statusTabButton )
    goto LABEL_32;
  statusTabButton = (UnityEngine_Behaviour_o *)((__int64 (__fastcall *)(UnityEngine_Behaviour_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))statusTabButton->klass[1]._1.implementedInterfaces)(
                                                 statusTabButton,
                                                 0LL,
                                                 0LL,
                                                 statusTabButton->klass[1]._1.interfaceOffsets);
  v14 = this->fields.statusTabButton;
  if ( !v14 )
    goto LABEL_32;
  enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
  UICommonButton__SetColliderEnable(v14, enabled, 0, 0LL);
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
  v16 = (System_String_o **)&StringLiteral_17125/*"button_alllock_reg"*/;
  if ( modeKind != 1 )
    v16 = (System_String_o **)&StringLiteral_17126/*"button_alllock_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v16, 0LL);
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
  v18 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
  UICommonButton__SetColliderEnable(lockTabButton, v18, 0, 0LL);
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
  v19 = (System_String_o **)&StringLiteral_17123/*"button_allchoice_reg"*/;
  if ( modeKind != 2 )
    v19 = (System_String_o **)&StringLiteral_17124/*"button_allchoice_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v19, 0LL);
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
  v21 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
  UICommonButton__SetColliderEnable(choiceTabButton, v21, 0, 0LL);
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
  v22 = (System_String_o **)&StringLiteral_17137/*"button_push_reg"*/;
  if ( modeKind != 3 )
    v22 = (System_String_o **)&StringLiteral_17138/*"button_push_unreg"*/;
  UISprite__set_spriteName((UISprite_o *)statusTabButton, *v22, 0LL);
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
    sub_B2C434(statusTabButton, *(_QWORD *)&modeKind);
  }
  v24 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.pushTabButton, 0LL);
  UICommonButton__SetColliderEnable(pushTabButton, v24, 0, 0LL);
  CombineServantListViewManager__setHeaderMsg(this, this->fields.currentType, v25);
}


void __fastcall CombineServantListViewManager__StatusRequest(
        CombineServantListViewManager_o *this,
        CombineServantListViewManager_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  __int64 v18; // x1
  System_Int64_array *v19; // x2
  System_Int64_array *v20; // x1
  bool v21; // w4
  bool v22; // w5
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  NetworkManager_ResultCallbackFunc_o *v29; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_418A637 & 1) == 0 )
  {
    sub_B2C35C(&Method_CombineServantListViewManager_EndStatusSync__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_B2C35C(&NetworkManager_TypeInfo, v7);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_418A637 = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requestCallback,
        (System_Int32_array **)callback,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v29,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v29,
                                                                       (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v19 = unchoiceList;
        v20 = choiceList;
        v22 = 1;
        v21 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_B2C434(Request_WarBoardWallAttackRequest, v18);
    }
  }
  else if ( modeKind == 1 && CombineServantListViewManager__GetSwapLockList(this, &lockList, &unlockList, v3) )
  {
    this->fields.requestCallback = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.requestCallback,
      (System_Int32_array **)callback,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_CombineServantListViewManager_EndStatusSync__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v16,
                                                                     (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      v19 = unlockList;
      v20 = lockList;
      v21 = 1;
      v22 = 0;
LABEL_17:
      CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v20, v19, 0, v21, v22, 0LL);
      return;
    }
    goto LABEL_21;
  }
  if ( callback )
    CombineServantListViewManager_RequestCallbackFunc__Invoke(callback, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__TutorialBlock(
        CombineServantListViewManager_o *this,
        int32_t progress,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  void *transform; // x0
  __int64 v12; // x1
  int v13; // w8
  void *v14; // x21
  unsigned int v15; // w23
  int v16; // w8
  void *v17; // x21
  unsigned int v18; // w23
  int v19; // w8
  void *v20; // x21
  unsigned int v21; // w23
  struct UIScrollView_o *scrollView; // x8
  int v23; // w8
  void *v24; // x21
  unsigned int v25; // w23
  int v26; // w8
  void *v27; // x21
  unsigned int v28; // w22
  const MethodInfo *v29; // x2
  __int64 v30; // x0

  if ( (byte_418A64A & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UICommonButton___, *(_QWORD *)&progress);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v5);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v6);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v7);
    sub_B2C35C(&StringLiteral_12599/*"ScaleChangeButton"*/, v8);
    sub_B2C35C(&StringLiteral_8955/*"MarkObject"*/, v9);
    sub_B2C35C(&StringLiteral_12921/*"SortInfo"*/, v10);
    byte_418A64A = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12921/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
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
        goto LABEL_11;
    }
LABEL_53:
    v30 = sub_B2C460(transform);
    sub_B2C400(v30, 0LL);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8955/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v16 = *((_DWORD *)transform + 6);
  v17 = transform;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( v18 < v16 )
    {
      transform = (void *)*((_QWORD *)v17 + (int)v18 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
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
                (System_String_o *)StringLiteral_12599/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_52;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v19 = *((_DWORD *)transform + 6);
  v20 = transform;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( v21 < v19 )
    {
      transform = (void *)*((_QWORD *)v20 + (int)v21 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
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
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_52;
  v23 = *((_DWORD *)transform + 6);
  v24 = transform;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( v25 < v23 )
    {
      transform = (void *)*((_QWORD *)v24 + (int)v25 + 4);
      if ( !transform )
        goto LABEL_52;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 0, 0LL);
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
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
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_52;
  v26 = *((_DWORD *)transform + 6);
  v27 = transform;
  if ( v26 >= 1 )
  {
    v28 = 0;
    while ( v28 < v26 )
    {
      transform = (void *)*((_QWORD *)v27 + (int)v28 + 4);
      if ( !transform )
        goto LABEL_52;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 0, 1, 0LL);
      v26 = *((_DWORD *)v27 + 6);
      if ( (int)++v28 >= v26 )
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
    transform = CombineServantListViewManager__GetTutorialFoucsObj(this, progress, v29);
    if ( transform )
    {
      transform = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                    (UnityEngine_GameObject_o *)transform,
                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( transform )
      {
        UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
        return;
      }
    }
LABEL_52:
    sub_B2C434(transform, v12);
  }
}


void __fastcall CombineServantListViewManager__UnBlockTutorial(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  void *transform; // x0
  __int64 v9; // x1
  int v10; // w8
  void *v11; // x20
  unsigned int v12; // w22
  int v13; // w8
  void *v14; // x20
  unsigned int v15; // w22
  int v16; // w8
  void *v17; // x20
  unsigned int v18; // w22
  struct UIScrollView_o *scrollView; // x8
  int v20; // w8
  void *v21; // x20
  unsigned int v22; // w22
  int v23; // w8
  void *v24; // x20
  unsigned int v25; // w21
  __int64 v26; // x0

  if ( (byte_418A649 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UICommonButton___, method);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___, v3);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___, v4);
    sub_B2C35C(&StringLiteral_12599/*"ScaleChangeButton"*/, v5);
    sub_B2C35C(&StringLiteral_8955/*"MarkObject"*/, v6);
    sub_B2C35C(&StringLiteral_12921/*"SortInfo"*/, v7);
    byte_418A649 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_12921/*"SortInfo"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v10 = *((_DWORD *)transform + 6);
  v11 = transform;
  if ( v10 >= 1 )
  {
    v12 = 0;
    while ( v12 < v10 )
    {
      transform = (void *)*((_QWORD *)v11 + (int)v12 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v10 = *((_DWORD *)v11 + 6);
      if ( (int)++v12 >= v10 )
        goto LABEL_11;
    }
LABEL_48:
    v26 = sub_B2C460(transform);
    sub_B2C400(v26, 0LL);
  }
LABEL_11:
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Transform__Find(
                (UnityEngine_Transform_o *)transform,
                (System_String_o *)StringLiteral_8955/*"MarkObject"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v13 = *((_DWORD *)transform + 6);
  v14 = transform;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( v15 < v13 )
    {
      transform = (void *)*((_QWORD *)v14 + (int)v15 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v13 = *((_DWORD *)v14 + 6);
      if ( (int)++v15 >= v13 )
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
                (System_String_o *)StringLiteral_12599/*"ScaleChangeButton"*/,
                0LL);
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponent_WebViewObject_(
                (UnityEngine_Component_o *)transform,
                (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
  transform = this->fields.combineMaterialNumInfo;
  if ( !transform )
    goto LABEL_47;
  transform = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                (UnityEngine_Component_o *)transform,
                1,
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v16 = *((_DWORD *)transform + 6);
  v17 = transform;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( v18 < v16 )
    {
      transform = (void *)*((_QWORD *)v17 + (int)v18 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v16 = *((_DWORD *)v17 + 6);
      if ( (int)++v18 >= v16 )
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
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_BoxCollider___);
  if ( !transform )
    goto LABEL_47;
  v20 = *((_DWORD *)transform + 6);
  v21 = transform;
  if ( v20 >= 1 )
  {
    v22 = 0;
    while ( v22 < v20 )
    {
      transform = (void *)*((_QWORD *)v21 + (int)v22 + 4);
      if ( !transform )
        goto LABEL_47;
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)transform, 1, 0LL);
      v20 = *((_DWORD *)v21 + 6);
      if ( (int)++v22 >= v20 )
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
                (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UICommonButton___);
  if ( !transform )
    goto LABEL_47;
  v23 = *((_DWORD *)transform + 6);
  v24 = transform;
  if ( v23 >= 1 )
  {
    v25 = 0;
    while ( v25 < v23 )
    {
      transform = (void *)*((_QWORD *)v24 + (int)v25 + 4);
      if ( !transform )
        goto LABEL_47;
      UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
      v23 = *((_DWORD *)v24 + 6);
      if ( (int)++v25 >= v23 )
        goto LABEL_45;
    }
    goto LABEL_48;
  }
LABEL_45:
  transform = this->fields.allReleaseButton;
  if ( !transform )
LABEL_47:
    sub_B2C434(transform, v9);
  UICommonButton__SetColliderEnable((UICommonButton_o *)transform, 1, 1, 0LL);
}


void __fastcall CombineServantListViewManager___OnClickDecide_b__174_0(
        CombineServantListViewManager_o *this,
        int32_t isDecide,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x1

  CombineServantListViewManager__ModifyList(this, 0, method);
  CombineServantListViewManager__SetMode_30036488(this, 2, v5);
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

  if ( (byte_418A5F4 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A5F4 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418A5F6 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A5F6 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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
      sub_B2C434(this, isPlus);
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  struct UserServantEntity_o *baseUsrSvtData; // x0
  int32_t adjustAtk; // w19
  UserServantEntity_o *isSecondAdjustHpMax; // x0
  char v27; // w27
  bool isSecondAdjustAtkMax; // w28
  int v29; // w21
  Il2CppObject *current; // x19
  __int64 v31; // x9
  int klass_high; // w22
  __int64 v33; // x1
  int klass; // w8
  int monitor_high; // w9
  int32_t v36; // w10
  int32_t v37; // w10
  int32_t v38; // w8
  int32_t v39; // w9
  bool *v40; // x9
  int32_t v41; // w10
  int32_t v42; // w9
  UserServantEntity_o *v43; // x0
  _BOOL8 v44; // x0
  __int64 v45; // x1
  struct MenuListControl_o *menuListCtr; // x8
  float v47; // s0
  int32_t v48; // w0
  int32_t v49; // w19
  struct UserServantEntity_o *v50; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v51; // x21
  __int64 v52; // x22
  __int64 v53; // x23
  int32_t hiddenValue; // w8
  int v55; // w23
  int32_t exp; // w22
  const MethodInfo *v57; // x4
  int32_t LevelMax; // w21
  int32_t v59; // w8
  int32_t v60; // w19
  bool *v61; // [xsp+10h] [xbp-D0h]
  int32_t v62; // [xsp+1Ch] [xbp-C4h]
  bool *v63; // [xsp+20h] [xbp-C0h]
  int32_t adjustHp; // [xsp+28h] [xbp-B8h]
  int v65; // [xsp+2Ch] [xbp-B4h]
  __int64 v66; // [xsp+30h] [xbp-B0h]
  int v68; // [xsp+44h] [xbp-9Ch]
  System_Collections_Generic_List_Enumerator_T__o v69; // [xsp+48h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v70; // [xsp+60h] [xbp-80h] BYREF
  int32_t secondMaxAdjustAtk[2]; // [xsp+78h] [xbp-68h] BYREF
  int32_t maxAjustAtk[2]; // [xsp+80h] [xbp-60h] BYREF
  __int64 checkLv; // [xsp+88h] [xbp-58h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v74; // 0:x0.16

  if ( (byte_418A606 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, isHpUpMax);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v16);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ListViewItem__get_Current__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__, v21);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23);
    byte_418A606 = 1;
  }
  memset(&v70, 0, sizeof(v70));
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
    v62 = adjustAtk;
    isSecondAdjustHpMax = (UserServantEntity_o *)UserServantEntity__isSecondAdjustHpMax(isSecondAdjustHpMax, 0LL);
    if ( !this->fields.baseUsrSvtData )
      goto LABEL_62;
    v27 = (char)isSecondAdjustHpMax;
    isSecondAdjustAtkMax = UserServantEntity__isSecondAdjustAtkMax(this->fields.baseUsrSvtData, 0LL);
    LOBYTE(v66) = *isAtkUpMax && *isHpUpMax;
    BYTE4(v66) = v27 & isSecondAdjustAtkMax;
  }
  else
  {
    isSecondAdjustAtkMax = 0;
    v27 = 0;
    v62 = 0;
    adjustHp = 0;
    v66 = 0LL;
  }
  v61 = isSecondAtkMax;
  v63 = isMaxLvSelected;
  *isHpMax = *isHpUpMax;
  *isAtkMax = *isAtkUpMax;
  *isSecondHpMax = v27 & 1;
  *isSecondAtkMax = isSecondAdjustAtkMax;
  *isMaxLvSelected = 0;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.itemList;
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v69,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)isSecondAdjustHpMax,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ListViewItem__GetEnumerator__);
  v65 = 0;
  v68 = 0;
  v29 = 0;
  v70 = v69;
  while ( 1 )
  {
    v44 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v70,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__MoveNext__);
    if ( !v44 )
      break;
    current = v70.fields.current;
    if ( !v70.fields.current )
      goto LABEL_61;
    v31 = *(&CombineServantListViewItem_TypeInfo->_2.bitflags2 + 1);
    if ( *(&v70.fields.current->klass->_2.bitflags2 + 1) < (unsigned int)v31
      || (CombineServantListViewItem_c *)v70.fields.current->klass->_2.typeHierarchy[v31 - 1] != CombineServantListViewItem_TypeInfo )
    {
      sub_B2C728(v70.fields.current);
LABEL_61:
      sub_B2C434(v44, v45);
    }
    klass_high = HIDWORD(v70.fields.current[9].klass);
    if ( ListViewItem__get_IsSelect((ListViewItem_o *)v70.fields.current, 0LL) || SHIDWORD(current[20].klass) >= 1 )
    {
      if ( !BYTE4(current[14].klass) )
        goto LABEL_37;
      monitor_high = HIDWORD(current[13].monitor);
      klass = (int)current[14].klass;
      if ( klass_high == 4 )
      {
        if ( (v66 & 0x100000000LL) == 0 )
        {
          if ( !(v27 & 1 | (monitor_high < 1)) )
          {
            v29 += monitor_high;
            v36 = secondMaxAdjustAtk[1];
            if ( v29 + adjustHp >= secondMaxAdjustAtk[1] )
            {
              *isSecondHpMax = 1;
              v29 = v36 - adjustHp;
            }
          }
          if ( !isSecondAdjustAtkMax && klass >= 1 )
          {
            v37 = v62;
            v38 = secondMaxAdjustAtk[0];
            v39 = LODWORD(current[14].klass) + v65 + v62;
            v65 += LODWORD(current[14].klass);
            if ( v39 >= secondMaxAdjustAtk[0] )
            {
              v40 = v61;
LABEL_36:
              *v40 = 1;
              v65 = v38 - v37;
            }
          }
        }
      }
      else if ( !(v66 & 1 | (klass_high > 3)) )
      {
        if ( monitor_high >= 1 && !*isHpUpMax )
        {
          v29 += monitor_high;
          v41 = maxAjustAtk[1];
          if ( v29 + adjustHp >= maxAjustAtk[1] )
          {
            *isHpMax = 1;
            v29 = v41 - adjustHp;
          }
        }
        if ( klass >= 1 && !*isAtkUpMax )
        {
          v37 = v62;
          v38 = maxAjustAtk[0];
          v42 = LODWORD(current[14].klass) + v65 + v62;
          v65 += LODWORD(current[14].klass);
          if ( v42 >= maxAjustAtk[0] )
          {
            v40 = isAtkMax;
            goto LABEL_36;
          }
        }
      }
LABEL_37:
      v43 = this->fields.baseUsrSvtData;
      if ( !v43 )
        sub_B2C434(0LL, v33);
      if ( !UserServantEntity__isLevelMax(v43, 0LL) )
        v68 += LODWORD(current[10].monitor);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v70,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ListViewItem__Dispose__);
  menuListCtr = this->fields.menuListCtr;
  if ( !menuListCtr )
    goto LABEL_62;
  isSecondAdjustHpMax = (UserServantEntity_o *)this->fields.combineResStatus;
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  v47 = CheckCombineResStatus__GetExpCampaignValue(
          (CheckCombineResStatus_o *)isSecondAdjustHpMax,
          this->fields.baseUsrSvtData,
          menuListCtr->fields.combineEventList,
          0LL);
  v48 = UnityEngine_Mathf__CeilToInt(v47 * (float)v68, 0LL);
  if ( !this->fields.baseUsrSvtData || this->fields.itemType != 1 )
    return;
  v49 = v48;
  isSecondAdjustHpMax = (UserServantEntity_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !isSecondAdjustHpMax )
    goto LABEL_62;
  isSecondAdjustHpMax = (UserServantEntity_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 (DataManager_o *)isSecondAdjustHpMax,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  v50 = this->fields.baseUsrSvtData;
  if ( !v50 )
    goto LABEL_62;
  v51 = (DataMasterBase_WarMaster__WarEntity__int__o *)isSecondAdjustHpMax;
  v53 = *(_QWORD *)&v50->fields.svtId.fields.currentCryptoKey;
  v52 = *(_QWORD *)&v50->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v74.fields.currentCryptoKey = v53;
  *(_QWORD *)&v74.fields.fakeValue = v52;
  isSecondAdjustHpMax = (UserServantEntity_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                 v74,
                                                 0LL);
  if ( !v51
    || (isSecondAdjustHpMax = (UserServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                       v51,
                                                       (int32_t)isSecondAdjustHpMax,
                                                       (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__)) == 0LL
    || (hiddenValue = isSecondAdjustHpMax->fields.dispLimitCount.fields.hiddenValue,
        isSecondAdjustHpMax = this->fields.baseUsrSvtData,
        this->fields.expType = hiddenValue,
        !isSecondAdjustHpMax) )
  {
LABEL_62:
    sub_B2C434(isSecondAdjustHpMax, isHpUpMax);
  }
  exp = isSecondAdjustHpMax->fields.exp;
  LODWORD(checkLv) = isSecondAdjustHpMax->fields.lv;
  v55 = checkLv;
  LevelMax = UserServantEntity__getLevelMax(isSecondAdjustHpMax, 0LL);
  if ( v55 == LevelMax )
  {
    v59 = 0;
  }
  else
  {
    v60 = exp + v49;
    while ( !CombineServantListViewManager__checkIncrementLv(
               this,
               (int32_t *)&checkLv,
               (int32_t *)&checkLv + 1,
               v60,
               v57) )
      ;
    v59 = HIDWORD(checkLv);
  }
  *v63 = v59 >= LevelMax;
}


bool __fastcall CombineServantListViewManager__checkIncrementLv(
        CombineServantListViewManager_o *this,
        int32_t *checkLv,
        int32_t *increLv,
        int32_t totalExp,
        const MethodInfo *method)
{
  __int64 v9; // x1
  void *baseUsrSvtData; // x0
  int32_t LevelMax; // w0
  int32_t v12; // w8
  int32_t v13; // w8
  bool result; // w0

  if ( (byte_418A607 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantExpMaster___, checkLv);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_418A607 = 1;
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
  baseUsrSvtData = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !baseUsrSvtData
    || (baseUsrSvtData = DataManager__GetMasterData_WarQuestSelectionMaster_(
                           (DataManager_o *)baseUsrSvtData,
                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantExpMaster___)) == 0LL
    || (baseUsrSvtData = ServantExpMaster__GetEntity(
                           (ServantExpMaster_o *)baseUsrSvtData,
                           this->fields.expType,
                           *checkLv,
                           0LL)) == 0LL )
  {
LABEL_16:
    sub_B2C434(baseUsrSvtData, checkLv);
  }
  v12 = *((_DWORD *)baseUsrSvtData + 6);
  if ( v12 <= totalExp )
  {
    if ( v12 != totalExp )
    {
      result = 0;
      ++*checkLv;
      return result;
    }
    v13 = *((_DWORD *)baseUsrSvtData + 5) + 1;
  }
  else
  {
    v13 = *((_DWORD *)baseUsrSvtData + 5);
  }
  *increLv = v13;
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

  if ( (byte_418A61B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Clear__, method);
    byte_418A61B = 1;
  }
  selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
  if ( selectedMaterialUserServantIdList )
    System_Collections_Generic_List_long___Clear(
      selectedMaterialUserServantIdList,
      (const MethodInfo_2F6D3B4 *)Method_System_Collections_Generic_List_long__Clear__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  CombineServantListViewObject_o *Component_srcLineSprite; // x0
  __int64 v18; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *v19; // x21
  ListViewItem_o *Item; // x0
  __int64 v21; // x1
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_T__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_418A5FD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A5FD = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v25,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v26,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v26.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (CombineServantListViewObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    (UnityEngine_GameObject_o *)current,
                                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      v19 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite;
      if ( !Component_srcLineSprite )
        sub_B2C434(0LL, v18);
      Item = (ListViewItem_o *)CombineServantListViewObject__GetItem(Component_srcLineSprite, 0LL);
      if ( !Item )
        sub_B2C434(0LL, v21);
      if ( Item->fields.isTermination )
      {
        v22 = ListViewManager__ClippingItem_24147020((ListViewManager_o *)this, Item, 0LL);
        if ( v22 )
        {
          if ( !v11 )
            sub_B2C434(v22, v23);
          goto LABEL_16;
        }
      }
      else
      {
        if ( !v11 )
          sub_B2C434(Item, v21);
LABEL_16:
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v11,
          v19,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v26,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v11;
}


System_Collections_Generic_List_CombineServantListViewObject__o *__fastcall CombineServantListViewManager__get_ObjectList(
        CombineServantListViewManager_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  __int64 v12; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  Il2CppObject *current; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  EventMissionProgressRequest_Argument_ProgressData_o *Component_srcLineSprite; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418A5FC & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject__Add__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_CombineServantListViewObject__TypeInfo, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418A5FC = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_CombineServantListViewObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_CombineServantListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_B2C434(0LL, v12);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objectList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v20,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v20.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v15 )
    {
      if ( !current )
        sub_B2C434(v15, v16);
      Component_srcLineSprite = (EventMissionProgressRequest_Argument_ProgressData_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                                         (UnityEngine_GameObject_o *)current,
                                                                                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_CombineServantListViewObject___);
      if ( !v11 )
        sub_B2C434(Component_srcLineSprite, Component_srcLineSprite);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v11,
        Component_srcLineSprite,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_CombineServantListViewObject__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v20,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_CombineServantListViewObject__o *)v11;
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

  if ( (byte_418A5F5 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_CallbackFunc_TypeInfo, value);
    byte_418A5F5 = 1;
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
    v8 = sub_B20D74(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418A5F7 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, value);
    byte_418A5F7 = 1;
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
    v8 = sub_B20D74(p_callbackFunc2, v7, callbackFunc2);
    v9 = callbackFunc2 == (System_Delegate_o *)v8;
    callbackFunc2 = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B2C728(v7);
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

  if ( (byte_418A602 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, isEnable);
    byte_418A602 = 1;
  }
  decideBtnBg = (UnityEngine_Component_o *)this->fields.decideBtnBg;
  this->fields.isDecideFlg = isEnable;
  if ( !decideBtnBg )
LABEL_13:
    sub_B2C434(decideBtnBg, isEnable);
  Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                              decideBtnBg,
                              (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_GameObject_o *combineViewInfo; // x0
  struct UserServantEntity_o *baseUsrSvtData; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v12; // x20
  __int64 v13; // x21
  __int64 v14; // x22
  ServantEntity_o *Entity; // x20
  struct UserServantEntity_o *v16; // x8
  ServantLimitImageMaster_o *v17; // x21
  struct UserServantEntity_o *v18; // x8
  int32_t v19; // w22
  UILabel_o *combineSvtInfoLabel; // x21
  UILabel_o *v21; // x20
  const MethodInfo *v22; // x1
  int32_t currentType; // w8
  struct UserServantEntity_o *v24; // x8
  UILabel_o *v25; // x20
  struct UserServantEntity_o *v26; // x8
  UILabel_o *v27; // x20
  const MethodInfo *v28; // x1
  struct UserServantEntity_o *v29; // x8
  UILabel_o *currentLvLabel; // x20
  struct UserServantEntity_o *v31; // x8
  UILabel_o *resLvLabel; // x20
  UnityEngine_GameObject_o *gameObject; // x0
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
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  float barExp; // [xsp+4h] [xbp-2Ch] BYREF
  int32_t lateExp[2]; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v56; // 0:x0.16

  if ( (byte_418A645 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v4);
    sub_B2C35C(&DataManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v6);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&StringLiteral_19540/*"img_nplv"*/, v9);
    byte_418A645 = 1;
  }
  *(_QWORD *)lateExp = 0LL;
  barExp = 0.0;
  if ( this->fields.baseUsrSvtData )
  {
    combineViewInfo = this->fields.combineViewInfo;
    if ( !combineViewInfo )
      goto LABEL_105;
    UnityEngine_GameObject__SetActive(combineViewInfo, 1, 0LL);
    combineViewInfo = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !combineViewInfo )
      goto LABEL_105;
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                    (DataManager_o *)combineViewInfo,
                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
    baseUsrSvtData = this->fields.baseUsrSvtData;
    if ( !baseUsrSvtData )
      goto LABEL_105;
    v12 = (DataMasterBase_WarMaster__WarEntity__int__o *)combineViewInfo;
    v14 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&baseUsrSvtData->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v56.fields.currentCryptoKey = v14;
    *(_QWORD *)&v56.fields.fakeValue = v13;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                    v56,
                                                    0LL);
    if ( !v12 )
      goto LABEL_105;
    Entity = (ServantEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  v12,
                                  (int32_t)combineViewInfo,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    combineViewInfo = (UnityEngine_GameObject_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
    v16 = this->fields.baseUsrSvtData;
    if ( !v16 )
      goto LABEL_105;
    v17 = (ServantLimitImageMaster_o *)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                    v16->fields.svtId,
                                                    0LL);
    v18 = this->fields.baseUsrSvtData;
    if ( !v18 )
      goto LABEL_105;
    v19 = (int)combineViewInfo;
    combineViewInfo = (UnityEngine_GameObject_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(
                                                    v18->fields.limitCount,
                                                    0LL);
    if ( !v17 )
      goto LABEL_105;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantLimitImageMaster__GetServantLimitCountSealAfter(
                                                    v17,
                                                    v19,
                                                    (int32_t)combineViewInfo,
                                                    0LL);
    if ( !Entity )
      goto LABEL_105;
    combineSvtInfoLabel = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)ServantEntity__getName(Entity, (int32_t)combineViewInfo, -1, 0LL);
    if ( !combineSvtInfoLabel )
      goto LABEL_105;
    UILabel__set_text(combineSvtInfoLabel, (System_String_o *)combineViewInfo, 0LL);
    v21 = this->fields.combineSvtInfoLabel;
    combineViewInfo = (UnityEngine_GameObject_o *)CombineServantListViewManager_TypeInfo;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    }
    if ( !v21 )
      goto LABEL_105;
    UILabel__SetCondensedScale(v21, CombineServantListViewManager_TypeInfo->static_fields->BASE_SVT_NAME_MAX_WIDTH, 0LL);
    CombineServantListViewManager__SetCombineSvtClassIcon(this, v22);
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
      v29 = this->fields.baseUsrSvtData;
      if ( !v29 )
        goto LABEL_105;
      currentLvLabel = this->fields.currentLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v29 + 292, 0LL);
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
      v31 = this->fields.baseUsrSvtData;
      if ( !v31 )
        goto LABEL_105;
      resLvLabel = this->fields.resLvLabel;
      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v31 + 292, 0LL);
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
      v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v34, 32.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v35, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.spendQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v36, 13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v37, -13.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.haveQpLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      combineViewInfo = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                      (UnityEngine_Component_o *)combineViewInfo,
                                                      0LL);
      if ( !combineViewInfo )
        goto LABEL_105;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v38, -13.0, 0LL);
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
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v39, -90.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoBg;
      if ( !combineViewInfo )
        goto LABEL_105;
      UIWidget__set_height((UIWidget_o *)combineViewInfo, 94, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v40, 27.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_105;
      v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v41, 0.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoArrow;
      if ( !combineViewInfo )
        goto LABEL_105;
      v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v42, -18.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.enhancementInfoDot;
      if ( !combineViewInfo )
        goto LABEL_105;
      v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v43, 11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_19540/*"img_nplv"*/, 0LL);
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
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v44, 33.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v45, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v46, 77.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.resLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v47, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      UISprite__set_spriteName((UISprite_o *)combineViewInfo, (System_String_o *)StringLiteral_19540/*"img_nplv"*/, 0LL);
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
      v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v48, -57.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvImage;
      if ( !combineViewInfo )
        goto LABEL_105;
      v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v49, -2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v50, -11.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.currentLvLabel;
      if ( !combineViewInfo )
        goto LABEL_105;
      v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v51, 2.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionY(v52, 64.0, 0LL);
      combineViewInfo = (UnityEngine_GameObject_o *)this->fields.levelUpInfoImg;
      if ( !combineViewInfo )
        goto LABEL_105;
      v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)combineViewInfo, 0LL);
      GameObjectExtensions__SetLocalPositionX(v53, 40.0, 0LL);
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
              v24 = this->fields.baseUsrSvtData;
              if ( v24 )
              {
                v25 = this->fields.currentLvLabel;
                combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString((int)v24 + 256, 0LL);
                if ( v25 )
                {
                  UILabel__set_text(v25, (System_String_o *)combineViewInfo, 0LL);
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
                                    v26 = this->fields.baseUsrSvtData;
                                    if ( v26 )
                                    {
                                      v27 = this->fields.resLvLabel;
                                      combineViewInfo = (UnityEngine_GameObject_o *)System_Int32__ToString(
                                                                                      (int)v26 + 256,
                                                                                      0LL);
                                      if ( v27 )
                                      {
                                        UILabel__set_text(v27, (System_String_o *)combineViewInfo, 0LL);
                                        CombineServantListViewManager__ResetCombineViewInfoLayout(this, v28);
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
      sub_B2C434(combineViewInfo, method);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setDispActive(
        CombineServantListViewManager_o *this,
        bool isShow,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_Component_o *allReleaseButton; // x0
  int v7; // s3
  float v8; // s4
  float v9; // s5
  float v10; // s6
  CombineServantListViewManager_c *v11; // x0
  float COLOR_VAL; // s0
  float v13; // s1
  float v14; // s2
  UIWidget_o *v15; // x21
  int v16; // s0
  int v17; // s1
  int v18; // s2
  int v19; // s3
  UIWidget_o *v20; // x21
  int v21; // s0
  int v22; // s1
  int v23; // s2
  int v24; // s3
  UIWidget_o *v25; // x21
  int v26; // s0
  int v27; // s1
  int v28; // s2
  int v29; // s3
  UIWidget_o *v30; // x21
  int v31; // s0
  int v32; // s1
  int v33; // s2
  int v34; // s3
  UIWidget_o *v35; // x21
  int v36; // s0
  int v37; // s1
  int v38; // s2
  int v39; // s3
  UIWidget_o *v40; // x21
  int v41; // s0
  int v42; // s1
  int v43; // s2
  int v44; // s3
  UIWidget_o *v45; // x21
  int v46; // s0
  int v47; // s1
  int v48; // s2
  int v49; // s3
  UIWidget_o *v50; // x21
  int v51; // s0
  int v52; // s1
  int v53; // s2
  int v54; // s3
  UIWidget_o *v55; // x21
  int v56; // s0
  int v57; // s1
  int v58; // s2
  int v59; // s3
  UIWidget_o *v60; // x21
  int v61; // s0
  int v62; // s1
  int v63; // s2
  int v64; // s3
  UIWidget_o *v65; // x21
  int v66; // s0
  int v67; // s1
  int v68; // s2
  int v69; // s3
  UIWidget_o *v70; // x21
  int v71; // s0
  int v72; // s1
  int v73; // s2
  int v74; // s3
  bool v75; // w20
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  const MethodInfo *v78; // x3
  __int64 v79; // [xsp+0h] [xbp-30h] BYREF
  __int64 v80; // [xsp+8h] [xbp-28h]

  if ( (byte_418A601 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, isShow);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v5);
    byte_418A601 = 1;
  }
  v79 = 0LL;
  v80 = 0LL;
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
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v7 - 3), v8, v9, v10, (const MethodInfo *)&v79);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpBg;
  if ( !allReleaseButton )
LABEL_71:
    sub_B2C434(allReleaseButton, isShow);
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v15 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v16 = UnityEngine_Color__get_white(0LL);
    if ( !v15 )
      goto LABEL_71;
  }
  else
  {
    v17 = HIDWORD(v79);
    v16 = v79;
    v19 = HIDWORD(v80);
    v18 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v15, *(UnityEngine_Color_o *)&v16, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v20 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v21 = UnityEngine_Color__get_white(0LL);
    if ( !v20 )
      goto LABEL_71;
  }
  else
  {
    v22 = HIDWORD(v79);
    v21 = v79;
    v24 = HIDWORD(v80);
    v23 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v20, *(UnityEngine_Color_o *)&v21, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.spendQpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v25 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v26 = UnityEngine_Color__get_white(0LL);
    if ( !v25 )
      goto LABEL_71;
  }
  else
  {
    v27 = HIDWORD(v79);
    v26 = v79;
    v29 = HIDWORD(v80);
    v28 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v25, *(UnityEngine_Color_o *)&v26, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpBg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v30 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v31 = UnityEngine_Color__get_white(0LL);
    if ( !v30 )
      goto LABEL_71;
  }
  else
  {
    v32 = HIDWORD(v79);
    v31 = v79;
    v34 = HIDWORD(v80);
    v33 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v30, *(UnityEngine_Color_o *)&v31, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v35 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v36 = UnityEngine_Color__get_white(0LL);
    if ( !v35 )
      goto LABEL_71;
  }
  else
  {
    v37 = HIDWORD(v79);
    v36 = v79;
    v39 = HIDWORD(v80);
    v38 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v35, *(UnityEngine_Color_o *)&v36, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.getExpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v40 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v41 = UnityEngine_Color__get_white(0LL);
    if ( !v40 )
      goto LABEL_71;
  }
  else
  {
    v42 = HIDWORD(v79);
    v41 = v79;
    v44 = HIDWORD(v80);
    v43 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v40, *(UnityEngine_Color_o *)&v41, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpBg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v45 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v46 = UnityEngine_Color__get_white(0LL);
    if ( !v45 )
      goto LABEL_71;
  }
  else
  {
    v47 = HIDWORD(v79);
    v46 = v79;
    v49 = HIDWORD(v80);
    v48 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v45, *(UnityEngine_Color_o *)&v46, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v50 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v51 = UnityEngine_Color__get_white(0LL);
    if ( !v50 )
      goto LABEL_71;
  }
  else
  {
    v52 = HIDWORD(v79);
    v51 = v79;
    v54 = HIDWORD(v80);
    v53 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v50, *(UnityEngine_Color_o *)&v51, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.haveQpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v55 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v56 = UnityEngine_Color__get_white(0LL);
    if ( !v55 )
      goto LABEL_71;
  }
  else
  {
    v57 = HIDWORD(v79);
    v56 = v79;
    v59 = HIDWORD(v80);
    v58 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v55, *(UnityEngine_Color_o *)&v56, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpBg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v60 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v61 = UnityEngine_Color__get_white(0LL);
    if ( !v60 )
      goto LABEL_71;
  }
  else
  {
    v62 = HIDWORD(v79);
    v61 = v79;
    v64 = HIDWORD(v80);
    v63 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v60, *(UnityEngine_Color_o *)&v61, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpInfoImg;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v65 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v66 = UnityEngine_Color__get_white(0LL);
    if ( !v65 )
      goto LABEL_71;
  }
  else
  {
    v67 = HIDWORD(v79);
    v66 = v79;
    v69 = HIDWORD(v80);
    v68 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v65, *(UnityEngine_Color_o *)&v66, 0LL);
  allReleaseButton = (UnityEngine_Component_o *)this->fields.nextExpLabel;
  if ( !allReleaseButton )
    goto LABEL_71;
  allReleaseButton = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                  allReleaseButton,
                                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
  v70 = (UIWidget_o *)allReleaseButton;
  if ( isShow )
  {
    *(UnityEngine_Color_o *)&v71 = UnityEngine_Color__get_white(0LL);
    if ( !v70 )
      goto LABEL_71;
  }
  else
  {
    v72 = HIDWORD(v79);
    v71 = v79;
    v74 = HIDWORD(v80);
    v73 = v80;
    if ( !allReleaseButton )
      goto LABEL_71;
  }
  UIWidget__set_color(v70, *(UnityEngine_Color_o *)&v71, 0LL);
  v75 = isShow;
  CombineServantListViewManager__setDispSprite(this, v75, this->fields.combineSvtInfoBg, v76);
  CombineServantListViewManager__setDispSprite(this, v75, this->fields.qpAndExpInfoBg, v77);
  CombineServantListViewManager__setDispSprite(this, v75, this->fields.enhancementInfoBg, v78);
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
  __int64 v11; // x1
  __int64 v12; // x1
  CombineServantListViewManager_c *v13; // x0
  float COLOR_VAL; // s0
  float v15; // s1
  float v16; // s2
  WarBoardControlPlayTalkUiComponent_array *ComponentsInChildren_WarBoardControlPlayTalkUiComponent; // x0
  __int64 v18; // x1
  int max_length; // w8
  WarBoardControlPlayTalkUiComponent_array *v20; // x22
  int i; // w24
  UIWidget_o *v22; // x23
  int methodPointer; // s0
  int methodPointer_high; // s1
  int invoker_method; // s2
  int invoker_method_high; // s3
  UnityEngine_Object_o *enhancementInfoBg; // x22
  UIWidget_o *resLvLabel; // x20
  int v29; // s0
  int v30; // s1
  int v31; // s2
  int v32; // s3
  __int64 v33; // x0
  MethodInfo var40; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_418A647 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, isShow);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    byte_418A647 = 1;
  }
  var40.methodPointer = 0LL;
  var40.invoker_method = 0LL;
  v13 = CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v13 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v13->static_fields->COLOR_VAL;
  v15 = COLOR_VAL;
  v16 = COLOR_VAL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v4 - 3), v5, v6, v7, &var40);
  if ( !sprite
    || (ComponentsInChildren_WarBoardControlPlayTalkUiComponent = UnityEngine_Component__GetComponentsInChildren_WarBoardControlPlayTalkUiComponent_(
                                                                    (UnityEngine_Component_o *)sprite,
                                                                    1,
                                                                    (const MethodInfo_172DFBC *)Method_UnityEngine_Component_GetComponentsInChildren_UIWidget____67395072)) == 0LL )
  {
LABEL_28:
    sub_B2C434(ComponentsInChildren_WarBoardControlPlayTalkUiComponent, v18);
  }
  max_length = ComponentsInChildren_WarBoardControlPlayTalkUiComponent->max_length;
  v20 = ComponentsInChildren_WarBoardControlPlayTalkUiComponent;
  if ( max_length >= 1 )
  {
    for ( i = 0; i < max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
      {
        v33 = sub_B2C460(ComponentsInChildren_WarBoardControlPlayTalkUiComponent);
        sub_B2C400(v33, 0LL);
      }
      v22 = (UIWidget_o *)v20->m_Items[i];
      if ( isShow )
      {
        *(UnityEngine_Color_o *)&methodPointer = UnityEngine_Color__get_white(0LL);
        if ( !v22 )
          goto LABEL_28;
      }
      else
      {
        methodPointer_high = HIDWORD(var40.methodPointer);
        methodPointer = (int)var40.methodPointer;
        invoker_method_high = HIDWORD(var40.invoker_method);
        invoker_method = (int)var40.invoker_method;
        if ( !v22 )
          goto LABEL_28;
      }
      UIWidget__set_color(v22, *(UnityEngine_Color_o *)&methodPointer, 0LL);
      max_length = v20->max_length;
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
      *(UnityEngine_Color_o *)&v29 = UnityEngine_Color__get_yellow(0LL);
      if ( !resLvLabel )
        goto LABEL_28;
    }
    else
    {
      v30 = HIDWORD(var40.methodPointer);
      v29 = (int)var40.methodPointer;
      v32 = HIDWORD(var40.invoker_method);
      v31 = (int)var40.invoker_method;
      if ( !resLvLabel )
        goto LABEL_28;
    }
    UIWidget__set_color(resLvLabel, *(UnityEngine_Color_o *)&v29, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager__setHeaderMsg(
        CombineServantListViewManager_o *this,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 *v21; // x8
  System_String_o *v22; // x1
  int32_t modeKind; // w8
  __int64 *v24; // x8
  UILabel_o *combineInfoMsgLb; // x0
  int32_t currentType; // w8

  if ( (byte_418A600 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/, v5);
    sub_B2C35C(&StringLiteral_7036/*"HEADER_MSG_NPUP_BASE"*/, v6);
    sub_B2C35C(&StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/, v7);
    sub_B2C35C(&StringLiteral_7276/*"INFO_MSG_COMBINE_MATERIAL"*/, v8);
    sub_B2C35C(&StringLiteral_7042/*"HEADER_MSG_SVTCOMBINE_BASE"*/, v9);
    sub_B2C35C(&StringLiteral_7031/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/, v10);
    sub_B2C35C(&StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/, v11);
    sub_B2C35C(&StringLiteral_3219/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/, v12);
    sub_B2C35C(&StringLiteral_7033/*"HEADER_MSG_LVEXCEED"*/, v13);
    sub_B2C35C(&StringLiteral_1704/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/, v14);
    sub_B2C35C(&StringLiteral_7041/*"HEADER_MSG_SPECIAL_ASCENSION"*/, v15);
    sub_B2C35C(&StringLiteral_7029/*"HEADER_MSG_COMBINE_MATERIAL"*/, v16);
    sub_B2C35C(&StringLiteral_1/*""*/, v17);
    sub_B2C35C(&StringLiteral_3160/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/, v18);
    sub_B2C35C(&StringLiteral_7040/*"HEADER_MSG_SKILLUP"*/, v19);
    sub_B2C35C(&StringLiteral_7032/*"HEADER_MSG_LIMITUP"*/, v20);
    byte_418A600 = 1;
  }
  switch ( type )
  {
    case 0:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7042/*"HEADER_MSG_SVTCOMBINE_BASE"*/;
      goto LABEL_52;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7029/*"HEADER_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_52;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7032/*"HEADER_MSG_LIMITUP"*/;
      goto LABEL_52;
    case 3:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7040/*"HEADER_MSG_SKILLUP"*/;
      goto LABEL_52;
    case 4:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7036/*"HEADER_MSG_NPUP_BASE"*/;
      goto LABEL_52;
    case 5:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7276/*"INFO_MSG_COMBINE_MATERIAL"*/;
      goto LABEL_52;
    case 6:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7033/*"HEADER_MSG_LVEXCEED"*/;
      goto LABEL_52;
    case 7:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_3160/*"COMBINE_COMMAND_CODE_BASE_SERVANT_SELECT_MSG"*/;
      goto LABEL_52;
    case 8:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7031/*"HEADER_MSG_FRIENDSHIP_EXCEED"*/;
      goto LABEL_52;
    case 9:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_7041/*"HEADER_MSG_SPECIAL_ASCENSION"*/;
      goto LABEL_52;
    case 10:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_3219/*"COMMAND_CARD_EXCEED_SELECT_BASE_SERVANT_MSG"*/;
      goto LABEL_52;
    case 11:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v21 = &StringLiteral_1704/*"APPEND_SKILL_COMBINE_SELECT_BASE_INFO"*/;
LABEL_52:
      v22 = LocalizationManager__Get((System_String_o *)*v21, 0LL);
      break;
    default:
      v22 = (System_String_o *)StringLiteral_1/*""*/;
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
      v24 = &StringLiteral_11740/*"SERVANT_LIST_EXPLANATION_PUSH"*/;
      break;
    case 2:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_11738/*"SERVANT_LIST_EXPLANATION_CHOICE"*/;
      break;
    case 1:
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v24 = &StringLiteral_11739/*"SERVANT_LIST_EXPLANATION_LOCK"*/;
      break;
    default:
      goto LABEL_69;
  }
  v22 = LocalizationManager__Get((System_String_o *)*v24, 0LL);
LABEL_69:
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( !combineInfoMsgLb )
    goto LABEL_80;
  UILabel__set_text(combineInfoMsgLb, v22, 0LL);
  combineInfoMsgLb = this->fields.combineInfoMsgLb;
  if ( (unsigned int)(this->fields.modeKind - 1) >= 3 )
  {
    currentType = this->fields.currentType;
    v22 = (System_String_o *)&dword_14;
    if ( currentType )
    {
      if ( currentType == 7 )
        v22 = (System_String_o *)&dword_14;
      else
        v22 = (System_String_o *)(byte_9 + 5);
    }
    if ( !combineInfoMsgLb )
LABEL_80:
      sub_B2C434(combineInfoMsgLb, v22);
  }
  else
  {
    v22 = (System_String_o *)(byte_9 + 5);
    if ( !combineInfoMsgLb )
      goto LABEL_80;
  }
  UILabel__set_fontSize(combineInfoMsgLb, (int32_t)v22, 0LL);
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
    sub_B2C434(0LL, isEnable);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  SetCombineData_o *v15; // x22
  struct SetCombineData_o **p_combineData; // x19
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  char *combineData; // x0
  System_Int32_array **baseUsrSvtData; // x1
  struct SetCombineData_o *v32; // x8
  struct SetCombineData_o *v33; // x8
  struct SetCombineData_o *v34; // x22
  int32_t getHpUpVal; // w23
  struct SetCombineData_o *v36; // x8
  struct SetCombineData_o *v37; // x8
  System_Collections_Generic_List_long__o *v38; // x21
  _BOOL8 v39; // x0
  const MethodInfo *v40; // x1
  Il2CppObject *current; // x20
  const MethodInfo *v42; // x1
  int64_t UserSvtId; // x0
  struct SetCombineData_o *v44; // x19
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  System_Collections_Generic_List_Enumerator_T__o v51; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v52; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_418A617 & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, selectedItems);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__get_Current__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__ToArray__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_long___ctor__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v12);
    sub_B2C35C(&System_Collections_Generic_List_long__TypeInfo, v13);
    sub_B2C35C(&SetCombineData_TypeInfo, v14);
    byte_418A617 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v15 = (SetCombineData_o *)sub_B2C42C(SetCombineData_TypeInfo);
  SetCombineData___ctor(v15, 0LL);
  p_combineData = &this->fields.combineData;
  this->fields.combineData = v15;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.combineData,
    (System_Int32_array **)v15,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  combineData = (char *)this->fields.combineData;
  if ( !combineData )
    goto LABEL_28;
  baseUsrSvtData = (System_Int32_array **)this->fields.baseUsrSvtData;
  *((_QWORD *)combineData + 2) = baseUsrSvtData;
  sub_B2C2F8((BattleServantConfConponent_o *)(combineData + 16), baseUsrSvtData, v24, v25, v26, v27, v28, v29);
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.selectSum = this->fields.selectSum;
  v32 = this->fields.combineData;
  if ( !v32 )
    goto LABEL_28;
  v32->fields.spendQp = this->fields.selectQp;
  v33 = this->fields.combineData;
  if ( !v33 )
    goto LABEL_28;
  v33->fields.getExp = this->fields.selectExp;
  v34 = this->fields.combineData;
  getHpUpVal = this->fields.getHpUpVal;
  combineData = (char *)BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    combineData = (char *)BalanceConfig_TypeInfo;
  }
  if ( !v34 )
    goto LABEL_28;
  v34->fields.getHpAdjustVal = *(_DWORD *)(*((_QWORD *)combineData + 23) + 304LL) * getHpUpVal;
  if ( !*p_combineData )
    goto LABEL_28;
  (*p_combineData)->fields.getAtkAdjustVal = this->fields.getAtkUpVal
                                           * *(_DWORD *)(*((_QWORD *)combineData + 23) + 300LL);
  v36 = this->fields.combineData;
  if ( !v36 )
    goto LABEL_28;
  v36->fields.isAdjustMax = this->fields.isAllUpMax;
  v37 = this->fields.combineData;
  if ( !v37 )
    goto LABEL_28;
  v37->fields.isSecondAdjustMax = this->fields.isSecondAllUpMax;
  v38 = (System_Collections_Generic_List_long__o *)sub_B2C42C(System_Collections_Generic_List_long__TypeInfo);
  System_Collections_Generic_List_long____ctor(
    v38,
    (const MethodInfo_2F6C24C *)Method_System_Collections_Generic_List_long___ctor__);
  if ( !selectedItems )
    goto LABEL_28;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v51,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)selectedItems,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_CombineServantListViewItem__GetEnumerator__);
  v52 = v51;
  while ( 1 )
  {
    v39 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v52,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__MoveNext__);
    if ( !v39 )
      break;
    current = v52.fields.current;
    if ( !v52.fields.current )
      sub_B2C434(v39, v40);
    if ( CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)v52.fields.current, v40) >= 1 )
    {
      UserSvtId = CombineServantListViewItem__get_UserSvtId((CombineServantListViewItem_o *)current, v42);
      if ( !v38 )
        sub_B2C434(UserSvtId, UserSvtId);
      System_Collections_Generic_List_long___Add(
        v38,
        UserSvtId,
        (const MethodInfo_2F6CFA8 *)Method_System_Collections_Generic_List_long__Add__);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v52,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_CombineServantListViewItem__Dispose__);
  if ( !v38 )
    goto LABEL_28;
  if ( v38->fields._size < 1 )
    return;
  v44 = *p_combineData;
  combineData = (char *)System_Collections_Generic_List_long___ToArray(
                          v38,
                          (const MethodInfo_2F6F0B4 *)Method_System_Collections_Generic_List_long__ToArray__);
  if ( !v44 )
LABEL_28:
    sub_B2C434(combineData, v23);
  v44->fields.materialUsrSvtIdList = (struct System_Int64_array *)combineData;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v44->fields.materialUsrSvtIdList,
    (System_Int32_array **)combineData,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
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
    sub_B2C2F8(
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
  unsigned int v4; // w25
  __int64 v6; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  UserServantEntity_o *v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 sort; // x0
  __int64 v39; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  CombineServantListViewManager_c *v46; // x8
  System_Int32_array **v47; // x21
  unsigned int v48; // w27
  struct CombineServantListViewManager_StaticFields *static_fields; // x0
  unsigned __int64 v50; // x23
  __int64 v51; // x24
  int v52; // w8
  __int64 v53; // x8
  unsigned int *v54; // x26
  System_String_o *v55; // x21
  System_String_o *v56; // x0
  System_String_o *v57; // x22
  ListViewSort_o *v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  unsigned int v65; // w9
  __int64 v66; // x8
  struct ListViewSort_o *v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct ListViewSort_o *v74; // x8
  unsigned int iconScaleKind; // w8
  __int64 v76; // x9
  bool v77; // zf
  __int64 v78; // x8
  struct ListViewItemSeed_o *v79; // x1
  UISprite_o *scaleChangeButtonSprite; // x21
  struct UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x0
  struct UserServantMaster_o **p_userServantMaster; // x24
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  UserGameEntity_o *SelfUserGame; // x28
  UserDeckEntity_array *DeckList; // x22
  int32_t qp; // w8
  UILabel_o *haveQpLabel; // x21
  Il2CppObject *v93; // x0
  UILabel_o *nextExpLabel; // x21
  Il2CppObject *v95; // x0
  srcLineSprite_o *Component_srcLineSprite; // x0
  int v97; // s3
  float v98; // s4
  float v99; // s5
  float v100; // s6
  CombineServantListViewManager_c *v101; // x8
  UIWidget_o *v102; // x21
  float COLOR_VAL; // s0
  float v104; // s1
  float v105; // s2
  UIWidget_o *v106; // x21
  float v107; // s4
  float v108; // s5
  float v109; // s6
  UIWidget_o *v110; // x21
  float v111; // s4
  float v112; // s5
  float v113; // s6
  UIWidget_o *v114; // x21
  float v115; // s4
  float v116; // s5
  float v117; // s6
  __int64 v118; // x20
  UserServantEntity_o *v119; // x0
  UILabel_o *v120; // x21
  Il2CppObject *v121; // x0
  __int64 v122; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v123; // x26
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v124; // x0
  int size; // w8
  int32_t v126; // w25
  WarBoardAIRoute_RouteData_o *v127; // x8
  __int128 v128; // q0
  struct UserServantEntity_o *v129; // x8
  __int128 v130; // q0
  __int64 v131; // x21
  UILabel_o *v132; // x21
  Il2CppObject *v133; // x0
  int v134; // w8
  __int64 v135; // x26
  UserDeckEntity_array *v136; // x20
  CombineServantListViewNoticeTween_o *v137; // x22
  System_Int32_array **v138; // x1
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  int v145; // w8
  int v146; // w23
  __int64 v147; // x20
  __int64 v148; // x8
  UserServantEntity_o **v149; // x20
  __int64 v150; // t1
  __int128 v151; // q0
  int max_length; // w8
  __int64 v153; // x27
  unsigned int v154; // w9
  UserDeckEntity_o *v155; // x10
  struct DeckServant_o *deckInfo; // x10
  struct DeckServantData_array *svts; // x10
  unsigned int v158; // w11
  unsigned int i; // w12
  DeckServantData_o *v160; // x13
  char v161; // w10
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x22
  signed __int64 v163; // x9
  int v164; // w21
  int v165; // w24
  unsigned __int64 v166; // x23
  struct System_Int64_array *items; // x9
  int64_t v168; // x10
  __int64 v169; // x22
  UserServantEntity_o *v170; // x20
  UserGameEntity_o *v171; // x26
  int64_t favoriteUserSvtId; // x28
  __int64 v173; // x21
  const MethodInfo *v174; // x2
  System_Int32_array **noticeTween; // x1
  System_String_array **v176; // x2
  System_String_array **v177; // x3
  System_Boolean_array **v178; // x4
  System_Int32_array **v179; // x5
  System_Int32_array *v180; // x6
  System_Int32_array *v181; // x7
  struct System_Collections_Generic_List_long__o *v182; // x8
  const MethodInfo *v183; // x3
  UILabel_o *servantInfoLabel; // x21
  System_String_o *v185; // x20
  Il2CppObject *v186; // x22
  Il2CppObject *v187; // x0
  UILabel_o *cardInfoLabel; // x21
  System_String_o *v189; // x20
  Il2CppObject *v190; // x22
  Il2CppObject *v191; // x0
  const MethodInfo *v192; // x1
  UILabel_o *v193; // x20
  System_String_o *v194; // x21
  Il2CppObject *v195; // x22
  Il2CppObject *v196; // x0
  UILabel_o *v197; // x20
  System_String_o *v198; // x21
  Il2CppObject *v199; // x22
  Il2CppObject *v200; // x0
  const MethodInfo *v201; // x1
  __int64 v202; // x0
  __int64 v203; // x0
  const MethodInfo *v204; // [xsp+10h] [xbp-170h]
  int v205; // [xsp+24h] [xbp-15Ch]
  signed int v206; // [xsp+28h] [xbp-158h]
  System_Collections_Generic_Dictionary_int__List_int___o *cachedUserServantNpLvDict; // [xsp+30h] [xbp-150h]
  UserDeckEntity_array *v209; // [xsp+40h] [xbp-140h]
  UserServantEntity_o *baseUsrSvtData; // [xsp+48h] [xbp-138h]
  _BOOL4 v211; // [xsp+54h] [xbp-12Ch]
  bool v212; // [xsp+58h] [xbp-128h]
  unsigned int v213; // [xsp+5Ch] [xbp-124h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v214; // [xsp+60h] [xbp-120h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v215; // [xsp+80h] [xbp-100h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v216; // [xsp+A0h] [xbp-E0h] BYREF
  MethodInfo methoda; // [xsp+C0h] [xbp-C0h] BYREF
  int v218; // [xsp+110h] [xbp-70h] BYREF
  int32_t v219; // [xsp+114h] [xbp-6Ch] BYREF
  float barExp[2]; // [xsp+118h] [xbp-68h] BYREF
  int32_t lateExp[4]; // [xsp+120h] [xbp-60h] BYREF
  UnityEngine_Color_o v222; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v223; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v224; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v225; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v226; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v4 = type;
  if ( (byte_418A603 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewItem_TypeInfo, *(_QWORD *)&type);
    sub_B2C35C(&CombineServantListViewManager_TypeInfo, v6);
    sub_B2C35C(&CombineServantListViewNoticeTween_TypeInfo, v7);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserDeckMaster___, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__List_int____ctor__, v10);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__List_int___TypeInfo, v11);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, v12);
    sub_B2C35C(&int_TypeInfo, v13);
    sub_B2C35C(&ListViewSort___TypeInfo, v14);
    sub_B2C35C(&ListViewSort_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewItem__Add__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Count__, v21);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Count__, v22);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__get_Item__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, v24);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v25);
    sub_B2C35C(&LocalizationManager_TypeInfo, v26);
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&StringLiteral_23527/*"{0:N0}"*/, v29);
    sub_B2C35C(&StringLiteral_12469/*"SUM_INFO"*/, v30);
    byte_418A603 = 1;
  }
  *(_QWORD *)barExp = 0LL;
  *(_QWORD *)lateExp = 0LL;
  CombineServantListViewManager__setHeaderMsg(this, v4, (const MethodInfo *)setupInfo);
  sort = (__int64)CombineServantListViewManager_TypeInfo;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
  }
  if ( !*(_BYTE *)(*(_QWORD *)(sort + 184) + 48LL) )
  {
    v39 = sub_B2C374(ListViewSort___TypeInfo, 12LL);
    v46 = CombineServantListViewManager_TypeInfo;
    v47 = (System_Int32_array **)v39;
    if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
    {
      v48 = v4;
      j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
      v46 = CombineServantListViewManager_TypeInfo;
    }
    else
    {
      v48 = v4;
    }
    static_fields = v46->static_fields;
    static_fields->sortStatusList = (struct ListViewSort_array *)v47;
    sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->sortStatusList, v47, v40, v41, v42, v43, v44, v45);
    sort = (__int64)CombineServantListViewManager_TypeInfo;
    v50 = -1LL;
    v51 = 8LL;
    v52 = (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) >> 2) & 1;
    do
    {
      if ( (v52 & 1) != 0 && !*(_DWORD *)(sort + 224) )
      {
        j_il2cpp_runtime_class_init_0(sort);
        sort = (__int64)CombineServantListViewManager_TypeInfo;
      }
      v53 = *(_QWORD *)(sort + 184);
      v54 = *(unsigned int **)(v53 + 56);
      v55 = *(System_String_o **)(v53 + 40);
      LODWORD(barExp[0]) = v50 + 2;
      v56 = System_Int32__ToString((int32_t)barExp, 0LL);
      v57 = System_String__Concat_44305532(v55, v56, 0LL);
      v58 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
      ListViewSort___ctor_33914184(v58, v57, 3, 0, 0LL);
      if ( !v54 )
        goto LABEL_174;
      if ( v58 )
      {
        sort = sub_B2C41C(v58, *(_QWORD *)(*(_QWORD *)v54 + 64LL));
        if ( !sort )
        {
          v203 = sub_B2C454(0LL);
          sub_B2C400(v203, 0LL);
        }
      }
      if ( v50 + 1 >= v54[6] )
        goto LABEL_175;
      *(_QWORD *)&v54[v51] = v58;
      sub_B2C2F8((BattleServantConfConponent_o *)&v54[v51], (System_Int32_array **)v58, v59, v60, v61, v62, v63, v64);
      sort = (__int64)CombineServantListViewManager_TypeInfo;
      ++v50;
      v51 += 2LL;
      v65 = WORD1(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr);
      v52 = (v65 >> 10) & 1;
    }
    while ( v50 < 0xB );
    v4 = v48;
    if ( (v65 & 0x400) != 0 && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
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
  v66 = *(_QWORD *)(*(_QWORD *)(sort + 184) + 56LL);
  if ( !v66 )
    goto LABEL_174;
  if ( *(_DWORD *)(v66 + 24) <= v4 )
    goto LABEL_175;
  v67 = *(struct ListViewSort_o **)(v66 + 8LL * (int)v4 + 32);
  this->fields.sort = v67;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.sort,
    (System_Int32_array **)v67,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
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
  v74 = this->fields.sort;
  this->fields.itemType = v4;
  if ( !v74 )
    goto LABEL_174;
  iconScaleKind = v74->fields.iconScaleKind;
  this->fields.scaleType = iconScaleKind;
  if ( iconScaleKind < 2 )
  {
    v76 = 808LL;
    v77 = this->fields.currentType == 11;
    v78 = 832LL;
  }
  else if ( iconScaleKind == 2 )
  {
    v76 = 816LL;
    v77 = this->fields.currentType == 11;
    v78 = 840LL;
  }
  else
  {
    if ( iconScaleKind != 3 )
      goto LABEL_41;
    v76 = 824LL;
    v77 = this->fields.currentType == 11;
    v78 = 848LL;
  }
  if ( !v77 )
    v78 = v76;
  v79 = *(struct ListViewItemSeed_o **)((char *)&this->klass + v78);
  this->fields.seed = v79;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.seed,
    (System_Int32_array **)v79,
    v68,
    v69,
    v70,
    v71,
    v72,
    v73);
LABEL_41:
  sort = (__int64)this->fields.sort;
  if ( !sort )
    goto LABEL_174;
  scaleChangeButtonSprite = this->fields.scaleChangeButtonSprite;
  sort = (__int64)ListViewSort__GetScaleKindSpriteName((ListViewSort_o *)sort, this->fields.scaleType, 0LL);
  if ( !scaleChangeButtonSprite )
    goto LABEL_174;
  UISprite__set_spriteName(scaleChangeButtonSprite, (System_String_o *)sort, 0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_174;
  MasterData_WarQuestSelectionMaster = (struct UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                       (DataManager_o *)sort,
                                                                       (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
  p_userServantMaster = &this->fields.userServantMaster;
  this->fields.userServantMaster = MasterData_WarQuestSelectionMaster;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.userServantMaster,
    (System_Int32_array **)MasterData_WarQuestSelectionMaster,
    v83,
    v84,
    v85,
    v86,
    v87,
    v88);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  sort = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !sort )
    goto LABEL_174;
  sort = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                    (DataManager_o *)sort,
                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserDeckMaster___);
  if ( !SelfUserGame )
    goto LABEL_174;
  if ( !sort )
    goto LABEL_174;
  DeckList = UserDeckMaster__getDeckList((UserDeckMaster_o *)sort, SelfUserGame->fields.userId, 0LL);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0LL);
  qp = SelfUserGame->fields.qp;
  haveQpLabel = this->fields.haveQpLabel;
  this->fields.userQP = qp;
  v219 = qp;
  v93 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v219);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v93, 0LL);
  if ( !haveQpLabel )
    goto LABEL_174;
  UILabel__set_text(haveQpLabel, (System_String_o *)sort, 0LL);
  *(_QWORD *)&this->fields.selectSum = 0LL;
  this->fields.selectExp = 0;
  *(_WORD *)&this->fields.isAllUpMax = 0;
  *(_QWORD *)&this->fields.getHpUpVal = 0LL;
  lateExp[0] = 0;
  nextExpLabel = this->fields.nextExpLabel;
  v218 = 0;
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v218);
  sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v95, 0LL);
  if ( !nextExpLabel )
    goto LABEL_174;
  UILabel__set_text(nextExpLabel, (System_String_o *)sort, 0LL);
  sort = (__int64)this->fields.spendQpMask;
  if ( !sort )
    goto LABEL_174;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)sort,
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v101 = CombineServantListViewManager_TypeInfo;
  v102 = (UIWidget_o *)Component_srcLineSprite;
  if ( (BYTE3(CombineServantListViewManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CombineServantListViewManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineServantListViewManager_TypeInfo);
    v101 = CombineServantListViewManager_TypeInfo;
  }
  COLOR_VAL = v101->static_fields->COLOR_VAL;
  methoda.methodPointer = 0LL;
  methoda.invoker_method = 0LL;
  v104 = COLOR_VAL;
  v105 = COLOR_VAL;
  UnityEngine_Color___ctor_40633184(*(UnityEngine_Color_o *)(&v97 - 3), v98, v99, v100, &methoda);
  if ( !v102 )
    goto LABEL_174;
  *(_QWORD *)&v222.fields.r = methoda.methodPointer;
  *(_QWORD *)&v222.fields.b = methoda.invoker_method;
  UIWidget__set_color(v102, v222, 0LL);
  sort = (__int64)this->fields.getExpMask;
  if ( !sort )
    goto LABEL_174;
  v106 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)sort,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v223.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  *(_QWORD *)&methoda.token = 0LL;
  *(_QWORD *)&methoda.slot = 0LL;
  v223.fields.g = v223.fields.r;
  v223.fields.b = v223.fields.r;
  UnityEngine_Color___ctor_40633184(v223, v107, v108, v109, (const MethodInfo *)&methoda.token);
  if ( !v106 )
    goto LABEL_174;
  UIWidget__set_color(v106, *(UnityEngine_Color_o *)&methoda.token, 0LL);
  sort = (__int64)this->fields.haveQpMask;
  if ( !sort )
    goto LABEL_174;
  v110 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)sort,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v224.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.rgctx_data = 0LL;
  methoda.genericMethod = 0LL;
  v224.fields.g = v224.fields.r;
  v224.fields.b = v224.fields.r;
  UnityEngine_Color___ctor_40633184(v224, v111, v112, v113, (const MethodInfo *)&methoda.rgctx_data);
  if ( !v110 )
    goto LABEL_174;
  *(_QWORD *)&v225.fields.r = methoda.rgctx_data;
  *(_QWORD *)&v225.fields.b = methoda.genericMethod;
  UIWidget__set_color(v110, v225, 0LL);
  sort = (__int64)this->fields.nextExpMask;
  if ( !sort )
    goto LABEL_174;
  v114 = (UIWidget_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                         (UnityEngine_GameObject_o *)sort,
                         (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  v226.fields.r = CombineServantListViewManager_TypeInfo->static_fields->COLOR_VAL;
  methoda.return_type = 0LL;
  methoda.parameters = 0LL;
  v226.fields.g = v226.fields.r;
  v226.fields.b = v226.fields.r;
  UnityEngine_Color___ctor_40633184(v226, v115, v116, v117, (const MethodInfo *)&methoda.return_type);
  if ( !v114 )
    goto LABEL_174;
  UIWidget__set_color(v114, *(UnityEngine_Color_o *)&methoda.return_type, 0LL);
  if ( v4 <= 0xB && ((1 << v4) & 0xFDD) != 0 )
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
    v118 = sort;
    v206 = *(_DWORD *)(sort + 24);
    if ( v206 <= 0 )
    {
      sort = (__int64)this->fields.emptyListNoticeLabel;
      if ( !sort )
        goto LABEL_174;
      sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
      if ( !sort )
        goto LABEL_174;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
    }
    v119 = this->fields.baseUsrSvtData;
    if ( v119 )
    {
      UserServantEntity__getExpInfo(v119, &lateExp[1], lateExp, &barExp[1], 0LL);
      v120 = this->fields.nextExpLabel;
      LODWORD(methoda.methodPointer) = lateExp[0];
      v121 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
      sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v121, 0LL);
      if ( !v120 )
        goto LABEL_174;
      UILabel__set_text(v120, (System_String_o *)sort, 0LL);
    }
  }
  else
  {
    v206 = 0;
    v118 = 0LL;
  }
  v209 = DeckList;
  if ( v4 == 1 )
  {
    sort = (__int64)*p_userServantMaster;
    if ( !*p_userServantMaster )
      goto LABEL_174;
    sort = (__int64)UserServantMaster__getCombineMaterialList((UserServantMaster_o *)sort, 0LL);
    if ( !sort )
      goto LABEL_174;
    v122 = sort;
    v123 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v123,
      (System_Collections_Generic_IEnumerable_T__o *)v122,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992);
    v124 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v124,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_UserServantEntity___ctor__);
    if ( this->fields.baseUsrSvtData )
    {
      if ( !v123 )
        goto LABEL_174;
      size = v123->fields._size;
      if ( size >= 1 )
      {
        v126 = 0;
        do
        {
          if ( size <= (unsigned int)v126 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          v127 = v123->fields._items->m_Items[v126];
          if ( !v127 )
            goto LABEL_174;
          v128 = *(_OWORD *)&v127->fields.baseSquare;
          *(_OWORD *)&methoda.methodPointer = *(_OWORD *)&v127->fields.flagNow;
          *(_OWORD *)&methoda.name = v128;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          *(_OWORD *)&v216.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
          *(_OWORD *)&v216.fields.fakeValue = *(_OWORD *)&methoda.name;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v216, 0LL);
          v129 = this->fields.baseUsrSvtData;
          if ( !v129 )
            goto LABEL_174;
          v130 = *(_OWORD *)&v129->fields.id.fields.fakeValue;
          v131 = sort;
          *(_OWORD *)&v215.fields.currentCryptoKey = *(_OWORD *)&v129->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v215.fields.fakeValue = v130;
          sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v215, 0LL);
          if ( v131 == sort )
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v123,
              v126,
              (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_UserServantEntity__RemoveAt__);
          size = v123->fields._size;
        }
        while ( ++v126 < size );
      }
      sort = (__int64)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v123,
                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      v4 = 1;
      v122 = sort;
      if ( !sort )
        goto LABEL_174;
    }
    v206 = *(_DWORD *)(v122 + 24);
    if ( v206 <= 0 )
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
    v118 = v122;
    UserServantEntity__getExpInfo((UserServantEntity_o *)sort, &lateExp[1], lateExp, &barExp[1], 0LL);
    v132 = this->fields.nextExpLabel;
    LODWORD(methoda.methodPointer) = lateExp[0];
    v133 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
    sort = (__int64)System_String__Format((System_String_o *)StringLiteral_23527/*"{0:N0}"*/, v133, 0LL);
    if ( !v132 )
      goto LABEL_174;
    UILabel__set_text(v132, (System_String_o *)sort, 0LL);
  }
  if ( v4 == 5 )
  {
    v31 = this->fields.baseUsrSvtData;
    if ( v31 )
    {
      sort = (__int64)*p_userServantMaster;
      if ( !*p_userServantMaster )
        goto LABEL_174;
      sort = (__int64)UserServantMaster__getNpUpServantList((UserServantMaster_o *)sort, v31, 0LL);
      if ( !sort )
        goto LABEL_174;
      v134 = *(_DWORD *)(sort + 24);
      v135 = sort;
      v205 = v134;
      if ( v134 <= 0 )
      {
        sort = (__int64)this->fields.emptyListNoticeLabel;
        if ( !sort )
          goto LABEL_174;
        sort = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)sort, 0LL);
        if ( !sort )
          goto LABEL_174;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)sort, 1, 0LL);
        v134 = v205;
      }
      v206 = v134;
    }
    else
    {
      v135 = v118;
      v205 = 0;
    }
  }
  else
  {
    v205 = 0;
    v135 = v118;
  }
  if ( !this->fields.noticeTween )
  {
    v136 = DeckList;
    v137 = (CombineServantListViewNoticeTween_o *)sub_B2C42C(CombineServantListViewNoticeTween_TypeInfo);
    CombineServantListViewNoticeTween___ctor(v137, (UnityEngine_MonoBehaviour_o *)this, 0LL);
    v138 = (System_Int32_array **)v137;
    this->fields.noticeTween = v137;
    DeckList = v136;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.noticeTween, v138, v139, v140, v141, v142, v143, v144);
  }
  cachedUserServantNpLvDict = (System_Collections_Generic_Dictionary_int__List_int___o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)cachedUserServantNpLvDict,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__List_int____ctor__);
  if ( !v135 )
LABEL_174:
    sub_B2C434(sort, v31);
  v145 = *(_DWORD *)(v135 + 24);
  if ( v145 >= 1 )
  {
    v146 = 0;
    while ( 1 )
    {
      if ( v146 >= (unsigned int)v145 )
        goto LABEL_175;
      v147 = v135 + 8LL * v146;
      v150 = *(_QWORD *)(v147 + 32);
      v149 = (UserServantEntity_o **)(v147 + 32);
      v148 = v150;
      if ( !v150 )
        goto LABEL_174;
      v213 = v146;
      v151 = *(_OWORD *)(v148 + 32);
      *(_OWORD *)&methoda.methodPointer = *(_OWORD *)(v148 + 16);
      *(_OWORD *)&methoda.name = v151;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
      }
      *(_OWORD *)&v214.fields.currentCryptoKey = *(_OWORD *)&methoda.methodPointer;
      *(_OWORD *)&v214.fields.fakeValue = *(_OWORD *)&methoda.name;
      sort = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(&v214, 0LL);
      if ( !DeckList )
        goto LABEL_174;
      max_length = DeckList->max_length;
      v153 = sort;
      if ( max_length >= 1 )
        break;
LABEL_133:
      v161 = 0;
LABEL_135:
      v212 = v161;
      if ( (v4 | 4) == 5
        && (selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList) != 0LL
        && (LODWORD(v163) = selectedMaterialUserServantIdList->fields._size, (int)v163 >= 1) )
      {
        v164 = 0;
        v165 = 0;
        v166 = 0LL;
        do
        {
          if ( v166 >= (unsigned int)v163 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          items = selectedMaterialUserServantIdList->fields._items;
          selectedMaterialUserServantIdList = this->fields.selectedMaterialUserServantIdList;
          v168 = items->m_Items[v166];
          v163 = selectedMaterialUserServantIdList->fields._size;
          if ( v168 == sort )
            v165 = v166;
          ++v166;
          if ( v168 == sort )
            v164 = 1;
        }
        while ( (__int64)v166 < v163 );
        v211 = v164;
      }
      else
      {
        v211 = 0;
        v165 = 0;
      }
      if ( v213 >= *(_DWORD *)(v135 + 24) )
        goto LABEL_175;
      v169 = v135;
      v170 = *v149;
      v171 = SelfUserGame;
      baseUsrSvtData = this->fields.baseUsrSvtData;
      favoriteUserSvtId = SelfUserGame->fields.favoriteUserSvtId;
      v173 = sub_B2C42C(CombineServantListViewItem_TypeInfo);
      CombineServantListViewItem___ctor(
        (CombineServantListViewItem_o *)v173,
        v4,
        v213,
        v170,
        v153 == favoriteUserSvtId,
        v212,
        baseUsrSvtData,
        v211,
        setupInfo,
        cachedUserServantNpLvDict,
        v204);
      if ( !v173 )
        goto LABEL_174;
      CombineServantListViewItem__SetIsCombineExpCampaignTarget(
        (CombineServantListViewItem_o *)v173,
        this->fields.eventCampaignEntities,
        v174);
      noticeTween = (System_Int32_array **)this->fields.noticeTween;
      *(_QWORD *)(v173 + 416) = noticeTween;
      sub_B2C2F8((BattleServantConfConponent_o *)(v173 + 416), noticeTween, v176, v177, v178, v179, v180, v181);
      SelfUserGame = v171;
      v135 = v169;
      if ( (v4 | 4) == 5 && v211 )
      {
        *(_DWORD *)(v173 + 16) = v165;
        v182 = this->fields.selectedMaterialUserServantIdList;
        ++this->fields.selectSum;
        if ( !v182 )
          goto LABEL_174;
        if ( v165 == v182->fields._size - 1 )
          *(_BYTE *)(v173 + 163) = 1;
      }
      sort = (__int64)this->fields.itemList;
      if ( !sort )
        goto LABEL_174;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sort,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v173,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ListViewItem__Add__);
      v146 = v213 + 1;
      sort = ListViewItem__get_IsSelect((ListViewItem_o *)v173, 0LL);
      DeckList = v209;
      if ( (sort & 1) == 0 )
        CombineServantListViewManager__changeCombineEnableRestCnt(this, 1, (CombineServantListViewItem_o *)v173, v183);
      v145 = *(_DWORD *)(v135 + 24);
      if ( v146 >= v145 )
        goto LABEL_159;
    }
    v154 = 0;
    while ( v154 < max_length )
    {
      v155 = DeckList->m_Items[v154];
      if ( !v155 )
        goto LABEL_174;
      deckInfo = v155->fields.deckInfo;
      if ( !deckInfo )
        goto LABEL_174;
      svts = deckInfo->fields.svts;
      if ( !svts )
        goto LABEL_174;
      v158 = svts->max_length;
      for ( i = 0; (int)i < (int)v158; ++i )
      {
        if ( i >= v158 )
          goto LABEL_175;
        v160 = svts->m_Items[i];
        if ( !v160 )
          goto LABEL_174;
        if ( v160->fields.userSvtId == sort )
        {
          v161 = 1;
          goto LABEL_135;
        }
      }
      if ( (int)++v154 >= max_length )
        goto LABEL_133;
    }
LABEL_175:
    v202 = sub_B2C460(sort);
    sub_B2C400(v202, 0LL);
  }
LABEL_159:
  CombineServantListViewManager__RefrashListDisp(this, (const MethodInfo *)v31);
  servantInfoLabel = this->fields.servantInfoLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v185 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  LODWORD(methoda.methodPointer) = v206;
  v186 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
  methoda.token = SelfUserGame->fields.svtKeep;
  v187 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token);
  sort = (__int64)System_String__Format_44301068(v185, v186, v187, 0LL);
  if ( !servantInfoLabel )
    goto LABEL_174;
  UILabel__set_text(servantInfoLabel, (System_String_o *)sort, 0LL);
  cardInfoLabel = this->fields.cardInfoLabel;
  v189 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
  LODWORD(methoda.rgctx_data) = v206;
  v190 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data);
  LODWORD(methoda.return_type) = SelfUserGame->fields.svtKeep;
  v191 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
  sort = (__int64)System_String__Format_44301068(v189, v190, v191, 0LL);
  if ( !cardInfoLabel )
    goto LABEL_174;
  UILabel__set_text(cardInfoLabel, (System_String_o *)sort, 0LL);
  if ( v4 == 5 )
  {
    v193 = this->fields.servantInfoLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v194 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
    LODWORD(methoda.methodPointer) = v205;
    v195 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda);
    methoda.token = v206;
    v196 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.token);
    sort = (__int64)System_String__Format_44301068(v194, v195, v196, 0LL);
    if ( !v193 )
      goto LABEL_174;
    UILabel__set_text(v193, (System_String_o *)sort, 0LL);
    v197 = this->fields.cardInfoLabel;
    v198 = LocalizationManager__Get((System_String_o *)StringLiteral_12469/*"SUM_INFO"*/, 0LL);
    LODWORD(methoda.rgctx_data) = v205;
    v199 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.rgctx_data);
    LODWORD(methoda.return_type) = v206;
    v200 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &methoda.return_type);
    sort = (__int64)System_String__Format_44301068(v198, v199, v200, 0LL);
    if ( !v197 )
      goto LABEL_174;
    UILabel__set_text(v197, (System_String_o *)sort, 0LL);
  }
  CombineServantListViewManager__SetMaterialSvtInfo(this, v192);
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0LL);
  CombineServantListViewManager__SetFilterButtonImage(this, v201);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_CallbackFunc___ctor(
        CombineServantListViewManager_CallbackFunc_o *this,
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184F36 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager_ResultKind_TypeInfo, *(_QWORD *)&kind);
    byte_4184F36 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(CombineServantListViewManager_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)list;
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall CombineServantListViewManager_CallbackFunc__EndInvoke(
        CombineServantListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, System_Int32_array *, _QWORD); // x0
  CombineServantListViewManager_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, System_Int32_array *, __int64); // x24
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
  CombineServantListViewManager_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

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
    v8 = (CombineServantListViewManager_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, System_Int32_array *, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&kind, list, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, list, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, list, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
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
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, list, v20);
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
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))v17)(
            v22,
            v14,
            list,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, System_Int32_array *, _QWORD))(*v22
                                                                                  + 16LL
                                                                                  * *(unsigned __int16 *)(v23 + 72)
                                                                                  + 312))(
            v22,
            v34,
            list,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, System_Int32_array *, __int64))v24)(v22, v34, list, v23);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4184F37 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_4184F37 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CombineServantListViewManager_RequestCallbackFunc__EndInvoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager_RequestCallbackFunc__Invoke(
        CombineServantListViewManager_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CombineServantListViewManager_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CombineServantListViewManager_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CombineServantListViewManager_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (CombineServantListViewManager_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
    goto LABEL_37;
  }
}


void __fastcall CombineServantListViewManager___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CombineServantListViewManager___c_StaticFields *static_fields; // x0

  if ( (byte_4184F33 & 1) == 0 )
  {
    sub_B2C35C(&CombineServantListViewManager___c_TypeInfo, v1);
    byte_4184F33 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CombineServantListViewManager___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CombineServantListViewManager___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CombineServantListViewManager___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall CombineServantListViewManager___c___ctor(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall CombineServantListViewManager___c___AfterCheckMaterial_b__175_0(
        CombineServantListViewManager___c_o *this,
        CombineServantListViewItem_o *a,
        CombineServantListViewItem_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_B2C434(this, a);
  return a->fields.selectNum - b->fields.selectNum;
}


void __fastcall CombineServantListViewManager___c___OnClickSelectMaterial_b__188_0(
        CombineServantListViewManager___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall CombineServantListViewManager___c__DisplayClass173_0___ctor(
        CombineServantListViewManager___c__DisplayClass173_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CombineServantListViewManager___c__DisplayClass173_0___ModifyList_b__0(
        CombineServantListViewManager___c__DisplayClass173_0_o *this,
        UserServantEntity_o *item,
        const MethodInfo *method)
{
  CombineServantListViewManager___c__DisplayClass173_0_o *v4; // x19
  __int64 v5; // x1
  __int128 v6; // q1
  struct CombineServantListViewManager_o *_4__this; // x8
  struct System_Collections_Generic_List_long__o *selectedMaterialUserServantIdList; // x21
  __int64 i; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+20h] [xbp-40h]

  v4 = this;
  if ( (byte_4184F34 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_long__get_Item__, item);
    this = (CombineServantListViewManager___c__DisplayClass173_0_o *)sub_B2C35C(
                                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                                                       v5);
    byte_4184F34 = 1;
  }
  if ( !item )
    goto LABEL_12;
  v6 = *(_OWORD *)&item->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&item->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v11 = v12;
  this = (CombineServantListViewManager___c__DisplayClass173_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44761220(
                                                                     &v11,
                                                                     0LL);
  _4__this = v4->fields.__4__this;
  if ( !_4__this || (selectedMaterialUserServantIdList = _4__this->fields.selectedMaterialUserServantIdList) == 0LL )
LABEL_12:
    sub_B2C434(this, item);
  i = v4->fields.i;
  if ( selectedMaterialUserServantIdList->fields._size <= (unsigned int)i )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  return this == (CombineServantListViewManager___c__DisplayClass173_0_o *)selectedMaterialUserServantIdList->fields._items->m_Items[i];
}


void __fastcall CombineServantListViewManager___c__DisplayClass189_0___ctor(
        CombineServantListViewManager___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineServantListViewManager___c__DisplayClass189_0___OnClickSelectPush_b__0(
        CombineServantListViewManager___c__DisplayClass189_0_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  CommonUI_o *Instance; // x0
  __int64 v8; // x1
  CommonUI_o *v9; // x20
  System_Action_o *_9__1; // x22

  if ( (byte_4184F35 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__, v6);
    byte_4184F35 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = Instance;
  if ( isDecide )
  {
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__1,
        (Il2CppObject *)this,
        Method_CombineServantListViewManager___c__DisplayClass189_0__OnClickSelectPush_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_B2C2F8(&this->fields.__9__1, _9__1);
    }
    if ( v9 )
    {
      CommonUI__CloseConfirmDialog_17971588(v9, _9__1, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(Instance, v8);
  }
  if ( !Instance )
    goto LABEL_10;
  CommonUI__CloseConfirmDialog(Instance, 0LL);
}


void __fastcall CombineServantListViewManager___c__DisplayClass189_0___OnClickSelectPush_b__1(
        CombineServantListViewManager___c__DisplayClass189_0_o *this,
        const MethodInfo *method)
{
  CombineServantListViewManager_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B2C434(0LL, method);
  CombineServantListViewManager__PushRequest(_4__this, this->fields.selectItem, 0LL);
}